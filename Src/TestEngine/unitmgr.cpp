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

#include "stdinc.h"
#include "unitmgr.h"

#include <QFile>
#include <QFileInfo>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QVariant>
#include <QJsonObject>
#include <QJsonArray>
#include <QTextStream>
#include <QDebug>

UnitMgr::UnitMgr()
{
    m_strPrjPath = "";
    m_currLang = UnitMgr::JavaScript;
}

// Load the configure file and
// the script file for test project.
bool UnitMgr::LoadUnitConfig(const QString& strFileName)
{
    m_scriptFiles.clear();

    // Load the configure file for test project. suffix(.tp)
    QFileInfo cfgFileInfo(strFileName);
    if(!cfgFileInfo.isFile()) {
        m_lastErr = strFileName + TA_TR(" is not file.");
        return false;
    }
    if(cfgFileInfo.suffix() != "tp") {
        m_lastErr = strFileName + TA_TR(" is not test project *.tp).");
        return false;
    }

    m_strPrjPath = cfgFileInfo.absolutePath();

    QFile cfgFile(strFileName);
    if(!cfgFile.open(QIODevice::ReadOnly)) {
        m_lastErr = cfgFile.errorString();
        return false;
    }

    QJsonParseError jsonErr;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(cfgFile.readAll(), &jsonErr);
    cfgFile.close();

    if(jsonDoc.isNull()) {
        m_lastErr = jsonErr.errorString() + " : " + strFileName;
        return false;
    }

    QJsonValue jsonCfg = QJsonValue::fromVariant(jsonDoc.toVariant());
    initUnitPath(jsonCfg);

    // Load the script file for test project. suffix(.js/.py)
    // This file name same to the configure file name
    QString strJs = m_strPrjPath + "/" + cfgFileInfo.completeBaseName() + ".js";
    QString strPy = m_strPrjPath + "/" + cfgFileInfo.completeBaseName() + ".py";

    QFileInfo scpFileInfo(strJs);
    if(scpFileInfo.isFile()){
        m_scriptFiles.append(strJs);
        m_currLang = UnitMgr::JavaScript;
        return loadScriptCom(getModelList(), m_strPrjPath, "js");
    }

    // try again for python
    scpFileInfo.setFile(strPy);
    if(!scpFileInfo.isFile()) {
        m_lastErr = strPy + TA_TR(" and (*.py) file was not exist.");
        return false;
    }

    m_scriptFiles.append(strPy);
    m_currLang = UnitMgr::Python;
    return loadScriptCom(getModelList(), m_strPrjPath, "py");
}

QString UnitMgr::getPrjPath()
{
    return m_strPrjPath;
}

bool UnitMgr::LoadPublicPara(const QString& strParaFile)
{
    QFile paraFile(strParaFile);

    if(!paraFile.open(QIODevice::ReadOnly)) {
        m_lastErr = paraFile.errorString() + ": " + strParaFile;
        return false;
    }

    QJsonParseError jsErr;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(paraFile.readAll(), &jsErr);
    paraFile.close();
    if(jsonDoc.isNull()) {
        m_lastErr = jsErr.errorString() + ": " + strParaFile;
        return false;
    }
    QVariant vPara = jsonDoc.toVariant();
    QVariantMap vmPara = vPara.toMap();
    if(vmPara["Parameter"].isNull())
        return true;        // No public parameter field
    QVariantList vlPara = vmPara["Parameter"].toList();
    if(vlPara.isEmpty())
        return true;        // No public parameters

    bool bNoModify = true;
    QJsonArray jaNewPara;
    QJsonObject jsonObj = m_lstUnits.find(m_strPrjPathName).value();
    if(jsonObj["Public"].isObject()) {
        QJsonObject jsPrj = jsonObj["Public"].toObject();
        if(jsPrj["Parameter"].isArray()) {
             QJsonArray jaObj = jsPrj["Parameter"].toArray();
             for(int i = 0; i < jaObj.count(); i++)
             {
                 QJsonObject joCfg = jaObj.at(i).toObject();
                 QString strParaName = joCfg["Name"].toString();
                 const QString strOldValue = joCfg["Value"].toString();
                 for(int j = 0; j < vlPara.count(); j++) {
                     QVariantMap vmTempPara = vlPara.at(j).toMap();
                     QString strValue = vmTempPara["Value"].toString();
                     if(strParaName == vmTempPara["Name"].toString()
                             && strOldValue != strValue) {
                         joCfg.insert("Value", strValue);
                         bNoModify = false;
                         break;
                     }
                 }
                 jaNewPara.append(joCfg);
             }
             if(bNoModify) {
                 return true; // No Modified
             }
        }
        jsPrj.insert("Parameter", jaNewPara);
        jsonObj.insert("Public", jsPrj);
    }
    m_lstUnits.insert(m_strPrjPathName, jsonObj);

    return true;
}

bool UnitMgr::loadScriptCom(const QVariantList& vlModels, const QString& strPath, const QString& suffix)
{
    QString strScriptPath = strPath + "/libs/";

    for(int i = 0; i < vlModels.count(); i++)
    {
        QVariantMap vmModel = vlModels.at(i).toMap();
        QString strComFile = vmModel["Com"].toString();

        QString strScriptFile = strScriptPath + strComFile;
        qDebug() << "loadScriptCom:" << strScriptFile;
        // is test script file
        if(0 == QFileInfo(strScriptFile).suffix().compare(suffix, Qt::CaseInsensitive))
        {
            m_scriptFiles.append(strScriptFile);
        }


        /*
        QFile scriptFile(strScriptFile);
        if (!scriptFile.open(QIODevice::ReadOnly))
        {
            m_lastErr = strScriptFile + scriptFile.errorString();
            return false;
        }

        QByteArray bData(scriptFile.readAll());
        // process unicode
        if(!bData.isEmpty() && bData.at(0) == 0x0E)
        {
            bData = bData.remove(0, 1);
            bData = QByteArray::fromBase64(bData);
        }
        QString contents(bData);
        scriptFile.close();
        script += contents;*/
    }

    return true;
}

QVariantList UnitMgr::getModelList()
{
    QJsonObject jsonObj = m_lstUnits.find(m_strPrjPathName).value();
    if(jsonObj["Public"].isObject()) {
        QJsonObject jsPrj = jsonObj["Public"].toObject();
        if(jsPrj["Models"].isArray()) {
            return jsPrj["Models"].toArray().toVariantList();
        }
    }

    return QVariantList();
}

TA_MapParaValue UnitMgr::getPublicParameter()
{
    TA_MapParaValue mapTotalPara;
    QJsonObject jsonObj = m_lstUnits.find(m_strPrjPathName).value();
    if(jsonObj["Public"].isObject()) {
        QJsonObject jsPrj = jsonObj["Public"].toObject();
        if(jsPrj["Parameter"].isArray()) {
             QVariantList vlObj = jsPrj["Parameter"].toArray().toVariantList();
             for(int i = 0; i < vlObj.count(); i++)
             {
                 QVariantMap vmCfg = vlObj.at(i).toMap();
                 QString strParaName = vmCfg["Name"].toString();
                 QString strValue = vmCfg["Value"].toString();
                 mapTotalPara.insert(strParaName, strValue);
             }
        }
    }
    return mapTotalPara;
}

TA_MapParaValue UnitMgr::getLocalParameter(const QJsonObject& obj)
{
    TA_MapParaValue mapPara;
    if(obj["Parameter"].isObject()) {
         QJsonObject objPara = obj["Parameter"].toObject();
         for(QJsonObject::const_iterator itor = objPara.constBegin();
             itor != objPara.constEnd(); ++itor)
         {
             mapPara.insert(itor.key(), itor.value().toString());
         }
    }
    return mapPara;
}

TA_MapParaValue UnitMgr::getLocalParameter(const QString& strPath)
{
    return getLocalParameter(m_lstUnits.find(strPath).value());
}

void UnitMgr::initUnitPath(QJsonValue& jsonCfg)
{
    m_lstUnits.clear();
    m_lstUnitPaths.clear();

    QString strPrjPathName;
    QJsonObject jsonObj = jsonCfg.toObject();
    QString strPrj = jsonObj["Name"].toString();
    strPrjPathName = "/" + strPrj;
    m_strPrjPathName = strPrjPathName;
    m_lstUnitPaths.append(strPrjPathName);

    if(jsonObj.contains("TestSuite") && jsonObj["TestSuite"].isArray()) {
        QJsonArray jsonTS = jsonObj["TestSuite"].toArray();
        for(int i = 0; i < jsonTS.count(); i++) {
            QJsonValue vTS = jsonTS.at(i);
            if(vTS.isObject()) {
                QJsonObject objTS = vTS.toObject();
                QString tsName = objTS["Name"].toString();
                QString strTSPathName = "/" + strPrj + "/" + tsName;
                m_lstUnitPaths.append(strTSPathName);

                if(objTS.contains("TestCase") && objTS["TestCase"].isArray()) {
                    QJsonArray arrTC = objTS["TestCase"].toArray();
                    for(int j = 0; j < arrTC.count(); j++) {
                        QJsonObject objTC = arrTC.at(j).toObject();
                        if(!objTC.isEmpty()) {
                            QString strPathName = "/" + strPrj + "/" + tsName + "/"
                                               + objTC["Name"].toString();
                            objTC.insert("Type", QJsonValue(eTestCase));
                            m_lstUnits.insert(strPathName, objTC);
                            m_lstUnitPaths.append(strPathName);
                        }
                    }

                    objTS.remove("TestCase");
                    objTS.insert("Type", QJsonValue(eTestSuite));
                    m_lstUnits.insert(strTSPathName, objTS);                    
                }
            }
        }

        jsonObj.remove("TestSuite");
        jsonObj.insert("Type", QJsonValue(eTestProject));
        m_lstUnits.insert(strPrjPathName, jsonObj);        
    }
}

TA_UNIT_TYPE UnitMgr::getUnitType(const QString& strPath)
{
     auto itor = m_lstUnits.find(strPath);
     QJsonObject obj = itor.value();
     return (TA_UNIT_TYPE)obj["Type"].toInt();
}

QStringList UnitMgr::selectedUnit(const QString& fileName)
{
    QFile selFile(fileName);
    QStringList lstPathName;

    if(!selFile.open(QIODevice::ReadOnly)) {
        m_lastErr = selFile.errorString() + ": " + fileName;
        return lstPathName;
    }

    QTextStream in(&selFile);
    in.setCodec("UTF-8");
    while(!in.atEnd()) {
        QString line = in.readLine();
        if(m_lstUnits.contains(line)) {
            lstPathName.append(line);
        }
    }
    selFile.close();

    return lstPathName;
}

QStringList UnitMgr::selectedUnitForPath(const QString& path)
{
    QString strPath = path;
    QStringList lstPathName;

    QStringList lstName = strPath.split("/");
    const int nCnt = lstName.count();

    if(strPath.trimmed() == "/") {
        return m_lstUnitPaths;
    }
    else {
        if(!m_lstUnitPaths.contains(strPath)) {
            m_lastErr = path + " was not exist.";
            return lstPathName;
        }

        if(nCnt == 3) { // is test suite
            lstPathName.append("/" + lstName.at(1));
        }
        else if(nCnt == 4) { // is test case
            lstPathName.append("/" + lstName.at(1)); // add test project
            lstPathName.append("/" + lstName.at(1) + "/" + lstName.at(2)); // add test suite
        }
        foreach(auto itor, m_lstUnitPaths)
        {
            if(itor.contains(path)) {
                lstPathName.append(itor);
            }
        }
    }

    return lstPathName;
}

QJsonObject UnitMgr::getUnitObj(const QString& strPath)
{
    QJsonObject obj;
    QString path = strPath;
    if(strPath.isEmpty()) {
        path = m_strPrjPathName;
    }
    auto itor = m_lstUnits.find(path);
    if(itor != m_lstUnits.end()) {
        obj = itor.value();
    }

    return obj;
}

void UnitMgr::printUnitToStd()
{
    foreach(QString path, m_lstUnitPaths) {
        auto itor = m_lstUnits.find(path);
        if(itor != m_lstUnits.end()) {
            QJsonObject obj = itor.value();
            cout << path.toStdString() << " ::: " << obj["Desc"].toString().toStdString() << endl;
        }
    }
}

QStringList UnitMgr::getScript()
{
    return m_scriptFiles;
}

QString UnitMgr::getLastError()
{
    return m_lastErr;
}

UnitMgr::TaLang UnitMgr::getCurrentLanguage()
{
    return m_currLang;
}
