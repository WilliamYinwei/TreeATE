///
/// @brief         TreeATE main function
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "mainwindow.h"
#include "login.h"

#include <QApplication>
#include <QObject>
#include <QSharedMemory>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QDateTime>
#include <QTranslator>

extern void customMessageHandler(QtMsgType type, const QMessageLogContext & logContext, const QString& str);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int iRet = 0;

    QFile file(":/Qss/blue.qss");
    if(file.open(QFile::ReadOnly)) {
        QTextStream filetext(&file);
        QString stylesheet = filetext.readAll();
        qApp->setStyleSheet(stylesheet);
        file.close();
    }

    QSharedMemory sharedMemory("TreeATE_exe");
    if (sharedMemory.create(1) && sharedMemory.error() != QSharedMemory::AlreadyExists)
    {
        qInstallMessageHandler(customMessageHandler);

        QString strLangPath = qApp->applicationDirPath() + "/i18n/treeate/";

        QTranslator trans;
        MainWindow w;
        if(trans.load(w.GetCurretLang(), strLangPath)) {
            qApp->installTranslator(&trans);
        }
        w.showFullScreen();

        login dlgLogin(&w);
        dlgLogin.SetHost(w.GetHostAddress());
        if(dlgLogin.exec() == QDialog::Accepted)
        {
            w.SetCurrUser(dlgLogin.m_strUser);
            w.setFocus();
            iRet = a.exec();
        }
    }
    else
    {
        QMessageBox::warning(NULL, "Warning", QObject::tr("TreeATE is running."));
    }

    return iRet;
}

void customMessageHandler(QtMsgType type, const QMessageLogContext & logContext, const QString& str)
{
    QString txt = str;
    // write to file
    QString strLogDir = qApp->applicationDirPath() + "\\Log";
    QDir dir(strLogDir);
    if(!dir.exists())
    {
        dir.mkpath(strLogDir);
    }

    // generate the log file name
    QDateTime currDate = QDateTime::currentDateTime();
    QString fName = currDate.toString("yyyy-MM-dd");
    fName = QString("%1\\%2.txt").arg(strLogDir).arg(fName);

    QFile outFile(fName);
    outFile.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream ts(&outFile);

    QString strType;
    switch(type)
    {
    case QtDebugMsg:
        strType = "Debug";
        break;
    case QtWarningMsg:
        strType = "Warning";
        break;
    case QtCriticalMsg:
        strType = "Critical";
        break;
    case QtFatalMsg:
        strType = "Fatal";
        break;
    case QtInfoMsg:
        strType = "Info";
        break;
    }

    ts << "[" << currDate.toString("yyyy-MM-dd HH:mm:ss.zzz")
       << "] " << strType << ": "
       << logContext.file << " " << logContext.function << " - " << logContext.line << ":\t"
       << txt << endl;
}
