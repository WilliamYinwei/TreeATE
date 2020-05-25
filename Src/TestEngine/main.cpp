///
/// @brief         TestEngine main
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "stdinc.h"
#include <QCoreApplication>
#include <QFileInfo>
#include <QDir>
#include <QDateTime>
#include <QTimer>
#include <QTextStream>

#include "maintask.h"

// Let's debug informaion output to the log file
void customMessageHandler(QtMsgType type, const QMessageLogContext & logContext, const QString& str)
{
    QString strLogDir = qApp->applicationDirPath() + "\\Log\\TestEngine";
    QDir dir(strLogDir);
    if(!dir.exists())
    {
        dir.mkpath(strLogDir);
    }

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

    ts << "[" << currDate.toString(TREEATE_DATETIME_FORMAT)
       << "] " << strType << ": "
       << logContext.file << " " << " - " << logContext.line << ": "
       << str << "\r\n";
}

int main(int argc, char *argv[])
{
    qInstallMessageHandler(customMessageHandler);
    QCoreApplication app(argc, argv);
    QCoreApplication::setApplicationName("TestEngine");
    QCoreApplication::setApplicationVersion("1.3.0");

    MainTask mainTask(&app);
    QTimer::singleShot(0, &mainTask, SLOT(run()));

    return app.exec();
}
