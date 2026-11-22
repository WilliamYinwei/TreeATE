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

#ifndef VSCODELAUNCHER_H
#define VSCODELAUNCHER_H

#include <QObject>
#include <QString>
#include <QStringList>

class VSCodeLauncher : public QObject
{
    Q_OBJECT

public:
    enum DetectStatus {
        VSFound = 0,
        VSNotFound,
        VSDetectError
    };

    struct DetectResult {
        DetectStatus status;
        QString      executable;
        QString      detail;
    };

    explicit VSCodeLauncher(QObject* parent = 0);

    DetectResult Detect();
    bool OpenFolder(const QString& strFolder, QString* pError, QString* pDetail);

    static QString DownloadUrl();

private:
    QStringList CandidatePaths() const;
    bool IsUsableFile(const QString& strPath) const;

    DetectResult m_lastDetect;
};

#endif // VSCODELAUNCHER_H
