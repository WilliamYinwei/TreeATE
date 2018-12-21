///
/// @brief         Process the standard output from TestEngine
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TESTPROCCESS_H
#define TESTPROCCESS_H

#include <QProcess>
#include <QTextBrowser>
#include <QDockWidget>

class TestProcess : public QProcess
{
    Q_OBJECT
public:
    explicit TestProcess(const QString &titleName, QObject *parent = Q_NULLPTR);
    virtual ~TestProcess();

    QDockWidget *getDockWidget();
    quint32 getUnitsCount();

signals:
    void updateTestItemStatus(const QString& who, const QJsonObject& objData, quint32 nCnt);
    void testEngineFinished(const QString& who, int nCode);

private slots:
    void on_readyReadStandardOutput();
    void on_readyReadStandardError();
    void on_testEngineFinished(int);

private:
    QJsonObject parserStrLine(const QString& line);

private:
    QDockWidget*    m_dockWidget;
    QTextBrowser*   m_tbRun;
    QTextBrowser*   m_tbErr;
    QString         m_strTitle;
    QString         m_strCurrPath;
    quint32         m_nUnitsCount;
    quint32         m_nCommitCount;
};

#endif // TESTPROCCESS_H
