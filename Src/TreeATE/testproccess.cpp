///
/// @brief         Process the standard output from TestEngine
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "testproccess.h"

#include <QTabWidget>
#include <QVBoxLayout>
#include <QJsonObject>
#include <QStringList>
#include <QDateTime>
#include <QTextStream>

TestProcess::TestProcess(const QString& titleName, QObject *parent):QProcess(parent)
{
    m_strTitle = titleName;
    connect(this, SIGNAL(readyReadStandardOutput()), this,
            SLOT(on_readyReadStandardOutput()));
    connect(this, SIGNAL(readyReadStandardError()), this,
            SLOT(on_readyReadStandardError()));
    connect(this, SIGNAL(finished(int)), this,
            SLOT(on_testEngineFinished(int)));

    m_dockWidget = new QDockWidget((QWidget*)parent);
    m_dockWidget->setWindowTitle(m_strTitle);
    m_tbErr = new QTextBrowser((QWidget*)parent);
    m_tbRun = new QTextBrowser((QWidget*)parent);
    m_tbRun->document()->setMaximumBlockCount(1000);
    m_tbRun->moveCursor(QTextCursor::End);
    m_tbErr->document()->setMaximumBlockCount(1000);
    m_tbErr->moveCursor(QTextCursor::End);

    QWidget *dockWidgetContents = new QWidget(m_dockWidget);
    QTabWidget* pTabRun = new QTabWidget(dockWidgetContents);
    pTabRun->setTabPosition(QTabWidget::West);
    pTabRun->addTab(m_tbErr, tr("Debug"));
    pTabRun->addTab(m_tbRun, tr("Run"));

    dockWidgetContents->setContentsMargins(0, 0, 0, 0);
    QVBoxLayout* pVLayout = new QVBoxLayout(dockWidgetContents);
    pVLayout->setDirection(QBoxLayout::TopToBottom);
    pVLayout->setContentsMargins(0, 0, 0, 0);
    pVLayout->addWidget(pTabRun);
    m_dockWidget->setWidget(dockWidgetContents);

    m_nUnitsCount = 0;
}

TestProcess::~TestProcess()
{
    if(m_dockWidget)
        delete m_dockWidget;
}

quint32 TestProcess::getUnitsCount()
{
    return m_nUnitsCount;
}

QDockWidget* TestProcess::getDockWidget()
{
    return m_dockWidget;
}

QJsonObject TestProcess::parserStrLine(const QString& line)
{
    QJsonObject obj;
    if(line.contains("Commit results")) { // is commit results
        QString strTemp = line;
        strTemp = strTemp.replace('(', ' ').replace(')', ' ');
        QTextStream in(&strTemp);
        QString strName;
        quint32 nCount;
        in >> strName >> strName >> nCount;
        obj.insert("count", QJsonValue::fromVariant(nCount));
        obj.insert("type", "commit");
        m_nCommitCount = 0;
    }
    else if(line == ".") {
        obj.insert("count", QJsonValue::fromVariant(++m_nCommitCount));
        obj.insert("type", "progress");
    }
    else if(line.contains("Test Over")) {
        obj.insert("type", "over");
    }
    else if(line.contains(":::")) { // is list units
        char path[255] = {0};
        sscanf(line.toUtf8().constData(), "%s", path);
        int iStart = line.indexOf(":::");

        m_strCurrPath = QString(path);
        obj.insert("path", m_strCurrPath);
        obj.insert("desc", line.mid(iStart + 3));
        obj.insert("type", "list");
        m_nUnitsCount++;
    }
    else if(line.contains(".....")) { // is test units start
        QString strTemp = line;;
        strTemp = strTemp.replace(']', ' ').replace('[', ' ');
        char path[255] = {0};
        char date[50] = {0};
        char time[50] = {0};
        sscanf(strTemp.toUtf8().constData(), "%s %s ..... %s", date, time, path);

        m_strCurrPath = QString(path);
        obj.insert("path", m_strCurrPath);
        obj.insert("rst", "Start");
        obj.insert("start", QString(date) + " " + QString(time));
        obj.insert("type", "start");
    }
    else if(line.contains("...")) {
        QStringList lstLine = line.split("...");
        if(lstLine.count() != 2) {
            return obj;
        }
        QString temp = lstLine.at(0);
        if(temp.trimmed().isEmpty()) { // is test unit update result
            QString rstStr = lstLine.at(1);
            char spend[255] = {0};
            char rst[50] = {0};
            char path[255] = {0};
            sscanf(rstStr.toUtf8().constData(), "%s %s\t%s", spend, rst, path);

            obj.insert("spend", QString(spend));
            obj.insert("rst", QString(rst).remove('[').remove(']'));

            m_strCurrPath = QString(path);
            obj.insert("path", m_strCurrPath);
            obj.insert("type", "update");
        }
        else {  // is detail result of test case
            char date[50] = {0};
            char time[50] = {0};
            char rst[50] = {0};
            temp = temp.replace('[', ' ').replace(']', ' ');
            sscanf(temp.toUtf8().constData(), "%s %s %s", date, time, rst);
            obj.insert("start", QString(date) + " " + QString(time));
            obj.insert("rst", QString(rst));

            QString rstDesc = lstLine.at(1);

            char name[255] = {0};
            char value[255] = {0};
            char standard[255] = {0};
            sscanf(rstDesc.toUtf8().constData(), "%s = %s | %s", name, value, standard);

            obj.insert("path", m_strCurrPath);
            obj.insert("name", QString(name));
            obj.insert("value", QString(value));
            obj.insert("standard", QString(standard));
            obj.insert("type", "detail");
        }
    }
    return obj;
}

void TestProcess::on_readyReadStandardOutput()
{
    QString strData = readAllStandardOutput();
    m_tbRun->append(strData);

    QStringList lstData = strData.split("\n");
    foreach(auto itor, lstData) {
        QString strLine = itor;
        if(strLine.trimmed().isEmpty())
            continue;
        QJsonObject obj = parserStrLine(strLine);
        emit updateTestItemStatus(m_strTitle, obj);
    }
}

void TestProcess::on_readyReadStandardError()
{
    m_tbErr->append(readAllStandardError());
}

void TestProcess::on_testEngineFinished(int nCode)
{
    m_tbErr->append("Exit:" + QString::number(nCode));
    emit testEngineFinished(m_strTitle, nCode);
}

bool TestProcess::StopTest()
{
    if(state() == QProcess::Running){
        if(write("stop\r\nstop\r\nstop\r\n") < 0)
        {
            return false;
        }
        if(!waitForBytesWritten(3000)) {
            return false;
        }
    }

    return true;
}
