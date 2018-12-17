///
/// @brief         Load and manage the test items.
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///


#ifndef UNITMGR_H
#define UNITMGR_H

#include "stdinc.h"
#include <QJsonValue>
#include <QVariantList>
#include <QMap>
#include <QJsonObject>
#include <QStringList>

typedef QMap<QString, QString>  TA_MapParaValue;
typedef QMap<QString, QJsonObject> TA_MapJson;

class UnitMgr
{
public:
    UnitMgr();

    bool LoadUnitConfig(const QString& strFileName);
    bool LoadPublicPara(const QString& strParaFile);

    void printUnitToStd();
    QStringList selectedUnit(const QString& fileName);
    QStringList selectedUnitForPath(const QString& path);

    QVariantList getModelList();
    TA_MapParaValue getPublicParameter();
    TA_MapParaValue getLocalParameter(const QString& strPath);
    TA_MapParaValue getLocalParameter(const QJsonObject& obj);

    TA_UNIT_TYPE getUnitType(const QString& strPath);

    QJsonObject getUnitObj(const QString& strPath);

    QString getScript();

    QString getLastError();
    QString getPrjPath();

protected:
    void initUnitPath(QJsonValue &jsonCfg);
    bool loadScriptCom(const QVariantList& vlModels, const QString& strPath, QString& script);

private:
    QString     m_lastErr;
    QString     m_script;
    TA_MapJson  m_lstUnits;
    QStringList m_lstUnitPaths;
    QString     m_strPrjPathName;
    QString     m_strPrjPath;
};

#endif // UNITMGR_H
