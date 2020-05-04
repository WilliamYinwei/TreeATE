///
/// @project       TreeATE
/// @brief         TreeATEDev's main function
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QFile>
#include <QDateTime>
#include <QTextStream>
#include <Windows.h>
#include <QDebug>

extern void customMessageHandler(QtMsgType type, const QMessageLogContext & logContext, const QString& str);

long __stdcall callbackCrash(_EXCEPTION_POINTERS*   excp)
{
    EXCEPTION_RECORD* record = excp->ExceptionRecord;
    QString errCode(QString::number(record->ExceptionCode,16)),errAdr(QString::number((uint)record->ExceptionAddress,16));
    QString sCrashInfo = QString("Error code: %1 address: %2").arg(errCode).arg(errAdr);
    qDebug() <<"Error:\n" << sCrashInfo;

    return EXCEPTION_EXECUTE_HANDLER;
}

int main(int argc, char *argv[])
{
    SetUnhandledExceptionFilter(callbackCrash);
    QApplication a(argc, argv);
    qInstallMessageHandler(customMessageHandler);
    MainWindow w;
    if( argc >= 2) {
        w.SetNewPrjDisabled();
        if(!w.OpenProjectFile(argv[1]))
            return -1;
    }
    w.show();

    return a.exec();
}

void customMessageHandler(QtMsgType type, const QMessageLogContext & logContext, const QString& str)
{
    QString txt = str;
    // write to file
    QString strLogDir = qApp->applicationDirPath() + "\\Log\\TreeATEDev";
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
