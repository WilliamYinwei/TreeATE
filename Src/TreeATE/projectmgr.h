///
/// @brief         Test Project manager, include project name, version, loop counts
///                and barcode regex.
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef PROJECTMGR_H
#define PROJECTMGR_H

#include <QObject>
#include <QJsonObject>

class ProjectMgr : public QObject
{
    Q_OBJECT
public:
    ProjectMgr();

    bool LoadProjectFile(const QString& strPrjFile);
    bool SaveProjectFile(const QString& strPrjFile);

    QString getBarCodeReg();
    bool getFailedToStop();
    bool getStoppedForLoop();
    int  getLoopCounts();
    QString getPrjName();
    QString getPrjDescription();
    QString getPrjVersion();
    QStringList getTestPrjName();
    QString getTestPrjFileName(const QString& testPrjName);
    QJsonObject getTestProjPara(const QString& testPrjName);
    QVariantList getGUIPlugins();

    void setTestProjPara(const QString& testPrjName, const QJsonObject& obj);
    void setLoopCounts(int nCnt);
    void setFailedToStop(bool bYes);
    void setStoppedForLoop(bool bYes);
    void setBarCodeReg(const QString& strReg);

    QString getLastError();

protected:
    bool parserJsonData(const QJsonValue& jvData);

private:
    QJsonObject m_joPrj;
    QString     m_lastErr;
};

#endif // PROJECTMGR_H
