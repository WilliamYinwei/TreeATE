///
/// @brief         Test Project manager, include project name, version, loop counts
///                and barcode regex.
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "projectmgr.h"

#include <QFileInfo>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValueRef>
#include <QVariant>

ProjectMgr::ProjectMgr()
{

}

bool ProjectMgr::parserJsonData(const QJsonValue& jvData)
{
    if(!jvData.isObject()) {
        m_lastErr = tr("It's not json object.");
        return false;
    }

    m_joPrj = jvData.toObject();
    return true;
}

bool ProjectMgr::LoadProjectFile(const QString& strPrjFile)
{
    QFileInfo cfgFileInfo(strPrjFile);
    if(!cfgFileInfo.isFile()) {
        m_lastErr = strPrjFile + tr(" is not file.");
        return false;
    }
    if(cfgFileInfo.suffix() != "tpx") {
        m_lastErr = strPrjFile + tr(" is not test project file(*.tpx).");
        return false;
    }

    QFile cfgFile(strPrjFile);
    if(!cfgFile.open(QIODevice::ReadOnly)) {
        m_lastErr = cfgFile.errorString();
        return false;
    }

    QJsonParseError jsonErr;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(cfgFile.readAll(), &jsonErr);
    cfgFile.close();

    if(jsonDoc.isNull()) {
        m_lastErr = jsonErr.errorString() + " : " + strPrjFile;
        return false;
    }

    QJsonValue jsonCfg = QJsonValue::fromVariant(jsonDoc.toVariant());
    return parserJsonData(jsonCfg);
}

bool ProjectMgr::SaveProjectFile(const QString& strPrjFile)
{
    QFileInfo cfgFileInfo(strPrjFile);
    if(!cfgFileInfo.isFile()) {
        m_lastErr = strPrjFile + tr(" is not file.");
        return false;
    }
    if(cfgFileInfo.suffix() != "tpx") {
        m_lastErr = strPrjFile + tr(" is not test project file(*.tpx).");
        return false;
    }

    QFile cfgFile(strPrjFile);
    if(!cfgFile.open(QIODevice::WriteOnly)) {
        m_lastErr = cfgFile.errorString();
        return false;
    }

    cfgFile.write(QJsonDocument::fromVariant(m_joPrj.toVariantMap()).toJson());
    cfgFile.close();
    return true;
}

QString ProjectMgr::getBarCodeReg()
{
    return m_joPrj["BarCodeReg"].toString();
}

bool ProjectMgr::getFailedToStop()
{
    return m_joPrj["failedToStop"].toBool();
}

bool ProjectMgr::getStoppedForLoop()
{
    return m_joPrj["stoppedForLoop"].toBool();
}

int ProjectMgr::getLoopCounts()
{
    return m_joPrj["LoopCount"].toInt();
}

QString ProjectMgr::getPrjName()
{
    return m_joPrj["Name"].toString();
}

QString ProjectMgr::getPrjDescription()
{
    return m_joPrj["Desc"].toString();
}

QString ProjectMgr::getLastError()
{
    return m_lastErr;
}

QStringList ProjectMgr::getTestPrjName()
{
    QStringList lstName;
    QJsonValueRef jsObj = m_joPrj["Instance"];
    if(!jsObj.isArray())
        return lstName;
    foreach (auto itor, jsObj.toArray()) {
        if(!itor.isObject())
            continue;
        QJsonObject joTestPrj = itor.toObject();
        lstName.append(joTestPrj["Name"].toString());
    }

    return lstName;
}

QString ProjectMgr::getTestPrjFileName(const QString& testPrjName)
{
    QJsonValueRef jsObj = m_joPrj["Instance"];
    if(!jsObj.isArray())
        return "";
    foreach (auto itor, jsObj.toArray()) {
        if(!itor.isObject())
            continue;
        QJsonObject joTestPrj = itor.toObject();
        if(joTestPrj["Name"].toString() == testPrjName)
            return joTestPrj["File"].toString();
    }

    return "";
}

QJsonObject ProjectMgr::getTestProjPara(const QString& testPrjName)
{
    QJsonObject joPara;
    QJsonValueRef jsObj = m_joPrj["Instance"];
    if(!jsObj.isArray())
        return joPara;
    foreach (auto itor, jsObj.toArray()) {
        if(!itor.isObject())
            continue;
        QJsonObject joTestPrj = itor.toObject();
        if(joTestPrj["Name"].toString() == testPrjName) {
            joPara.insert("Parameter", joTestPrj["Parameter"].toArray());
            break;
        }
    }

    return joPara;
}

void ProjectMgr::setTestProjPara(const QString& testPrjName, const QJsonObject& obj)
{
    QJsonValueRef jsObj = m_joPrj["Instance"];
    if(!jsObj.isArray())
        return;
    QJsonArray jaInstance;
    foreach (auto itor, jsObj.toArray()) {
        if(!itor.isObject())
            continue;
        QJsonObject joTestPrj = itor.toObject();
        if(joTestPrj["Name"].toString() == testPrjName) {
            joTestPrj.remove("Parameter");
            joTestPrj.insert("Parameter", obj["Parameter"].toArray());
        }
        jaInstance.append(joTestPrj);
    }
    m_joPrj.remove("Instance");
    m_joPrj.insert("Instance", jaInstance);
}

void ProjectMgr::setLoopCounts(int nCnt)
{
    m_joPrj["LoopCount"] = nCnt;
}

void ProjectMgr::setFailedToStop(bool bYes)
{
    m_joPrj["failedToStop"] = bYes;
}

void ProjectMgr::setStoppedForLoop(bool bYes)
{
    m_joPrj["stoppedForLoop"] = bYes;
}

void ProjectMgr::setBarCodeReg(const QString& strReg)
{
    m_joPrj["BarCodeReg"] = strReg;
}

QVariantList ProjectMgr::getGUIPlugins()
{
    if(m_joPrj["GUIPlugins"].isArray()) {
        return m_joPrj["GUIPlugins"].toArray().toVariantList();
    }

    return QVariantList();
}
