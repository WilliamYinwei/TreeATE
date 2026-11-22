///
/// @project       TreeATE
/// @brief         Detect and launch Visual Studio Code for test project development
/// @author        David Yin  2026-11-22 新增 VS Code 检测与启动器，替代 TreeATEDev
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "vscodelauncher.h"

#include <QDir>
#include <QFileInfo>
#include <QProcess>
#include <QStandardPaths>
#include <QDebug>

VSCodeLauncher::VSCodeLauncher(QObject* parent) :
    QObject(parent)
{
    m_lastDetect.status = VSNotFound;
}

QString VSCodeLauncher::DownloadUrl()
{
    return QString("https://code.visualstudio.com/");
}

bool VSCodeLauncher::IsUsableFile(const QString& strPath) const
{
    if(strPath.isEmpty())
        return false;

    QFileInfo info(strPath);
    return info.exists() && info.isFile();
}

QStringList VSCodeLauncher::CandidatePaths() const
{
    QStringList lstPath;

    // 1. PATH 中的 code / code.cmd
    foreach(const QString& strName, QStringList() << "code" << "code.cmd") {
        QString strExe = QStandardPaths::findExecutable(strName);
        if(!strExe.isEmpty())
            lstPath << strExe;
    }

    // 2. Windows 常见安装位置
    QStringList lstBase;
    QString strLocalApp = qEnvironmentVariable("LOCALAPPDATA");
    if(!strLocalApp.isEmpty())
        lstBase << strLocalApp + "/Programs/Microsoft VS Code";
    QString strProgramFiles = qEnvironmentVariable("ProgramFiles");
    if(!strProgramFiles.isEmpty())
        lstBase << strProgramFiles + "/Microsoft VS Code";
    QString strProgramFilesX86 = qEnvironmentVariable("ProgramFiles(x86)");
    if(!strProgramFilesX86.isEmpty())
        lstBase << strProgramFilesX86 + "/Microsoft VS Code";

    foreach(const QString& strBase, lstBase) {
        lstPath << QDir::toNativeSeparators(strBase + "/Code.exe");
    }

    // 说明：用户自定义安装路径（规格开放问题 Q2）尚未纳入配置，后续可在此追加
    return lstPath;
}

VSCodeLauncher::DetectResult VSCodeLauncher::Detect()
{
    // 仅做文件存在性检查与 PATH 查找，耗时在毫秒级，不阻塞界面
    DetectResult result;
    result.status = VSNotFound;
    result.detail = "no Code.exe found in PATH or standard install locations";

    foreach(const QString& strPath, CandidatePaths()) {
        if(IsUsableFile(strPath)) {
            result.status = VSFound;
            result.executable = strPath;
            result.detail.clear();
            break;
        }
    }

    m_lastDetect = result;
    if(result.status != VSFound)
        qWarning() << "VSCodeLauncher: detect failed -" << result.detail;

    return result;
}

bool VSCodeLauncher::OpenFolder(const QString& strFolder, QString* pError, QString* pDetail)
{
    QString strError;
    QString strDetail;

    QFileInfo info(strFolder);
    if(strFolder.isEmpty() || !info.exists() || !info.isDir()) {
        strError = tr("The test project folder does not exist: %1").arg(strFolder);
        strDetail = QString("folder check failed: path='%1' exists=%2 isDir=%3")
                        .arg(strFolder).arg(info.exists()).arg(info.isDir());
    }
    else {
        DetectResult result = Detect();
        if(result.status != VSFound) {
            strError = tr("Visual Studio Code is not installed or could not be found.");
            strDetail = QString("detect failed: %1").arg(result.detail);
        }
        else {
            QStringList lstPara;
            lstPara << "--reuse-window" << info.absoluteFilePath();
            bool bStarted = QProcess::startDetached(result.executable, lstPara);
            if(bStarted) {
                qInfo() << "VSCodeLauncher: opened" << info.absoluteFilePath()
                        << "by" << result.executable;
                if(pError) pError->clear();
                if(pDetail) pDetail->clear();
                return true;
            }

            strError = tr("Visual Studio Code was found but could not be started. "
                          "Please check the installation and try again.");
            strDetail = QString("startDetached failed: executable='%1' folder='%2'")
                            .arg(result.executable).arg(info.absoluteFilePath());
        }
    }

    qWarning() << "VSCodeLauncher:" << strDetail;
    if(pError) *pError = strError;
    if(pDetail) *pDetail = strDetail;
    return false;
}
