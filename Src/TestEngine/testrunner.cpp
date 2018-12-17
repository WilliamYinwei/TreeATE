///
/// @brief         Test runner, parse the QtScript and configure file
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "stdinc.h"
#include "testrunner.h"

#include <QScriptValue>
#include <QMetaObject>
#include <QLibrary>
#include <QDebug>
#include <QFileInfo>

typedef void* (*CreateInst)(const char*);

TestRunner::TestRunner(UnitMgr* pMgr)
{
    m_pUnitMgr = pMgr;
    m_bStopped = false;
}

TestRunner::~TestRunner()
{
    for(int i = 0; i < m_lstObj.count(); i++) {
        delete m_lstObj.at(i);
    }
    m_lstObj.clear();
    m_mapTotalPara.clear();
}

void TestRunner::stop()
{
    m_bStopped = true;
}

QString TestRunner::getLastError()
{
    return m_lastErr;
}

void TestRunner::initPublicPara()
{
    for(TA_MapParaValue::const_iterator itorTotal = m_mapTotalPara.begin();
            itorTotal != m_mapTotalPara.end(); ++itorTotal )
    {
        QScriptValue scriptValue = m_engine.newVariant(itorTotal.value());
        m_engine.globalObject().setProperty(itorTotal.key(), scriptValue);
    }
}

bool TestRunner::initScript(const QString& prjPath)
{
    if(NULL == m_pUnitMgr) {
        m_lastErr = TA_TR("No assign the unit manager.");
        return false;
    }

    // load Model
    QVariantList vlObj = m_pUnitMgr->getModelList();
    for(int i = 0; i < vlObj.count(); i++)
    {
        QVariantMap vmModel = vlObj.at(i).toMap();
        QString strModelObj = vmModel["Obj"].toString();

        QString strDllFile = vmModel["Com"].toString();
        QFileInfo fInfo(strDllFile);
        if(fInfo.suffix().compare("dll", Qt::CaseInsensitive) != 0)
            continue;

        strDllFile = prjPath + "/libs/" + strDllFile;

        QLibrary myLib(strDllFile);
        if(!myLib.load()) {
            m_lastErr = TA_TR("Failed to load the ") + strDllFile;
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }

        CreateInst myFunction = (CreateInst) myLib.resolve("CreateDeviceInst");
        if (NULL == myFunction)
        {
            m_lastErr = TA_TR("Failed to resolve the ") + strDllFile;
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }

        QObject* pObj = (QObject*)myFunction("");
        if(NULL == pObj)
        {
            m_lastErr = TA_TR("Failed to create the instance.");
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }

        m_lstObj.append(pObj);

        QScriptValue scriptObj = m_engine.newQObject(pObj);
        m_engine.globalObject().setProperty(strModelObj, scriptObj);        
    }

    // load script
    QScriptValue result = m_engine.evaluate(m_pUnitMgr->getScript());
    if(m_engine.hasUncaughtException()) {
        int line = m_engine.uncaughtExceptionLineNumber();
        m_lastErr = TA_TR("Script exception at line(%1):%2")
                .arg(QString::number(line))
                .arg(result.toString());
        m_engine.clearExceptions();
        return false;
    }

    // load public Parameter
    m_mapTotalPara = m_pUnitMgr->getPublicParameter();
    initPublicPara();

    return true;
}

int TestRunner::executeScript(const QString& funcName, const TA_MapParaValue& localValue)
{
    int iRet = 0;
    for(TA_MapParaValue::const_iterator itor = localValue.begin(); itor != localValue.end(); ++itor)
    {
        QScriptValue scriptValue = m_engine.newVariant(itor.value());
        m_engine.globalObject().setProperty(itor.key(), scriptValue);
    }

    QScriptValue global = m_engine.globalObject();
    QScriptValue func = global.property(funcName);
    if(func.isFunction())
    {
        QScriptValue ret = func.call(QScriptValue());
        if (m_engine.hasUncaughtException())
        {
            int line = m_engine.uncaughtExceptionLineNumber();
            m_lastErr = TA_TR("Script exception at line(%1):%2")
                    .arg(QString::number(line))
                    .arg(ret.toString());
            m_engine.clearExceptions();
            TA_OUT_DEBUG_INFO << m_lastErr;
            iRet = -1;
        }
        else
            iRet = ret.toUInt32() & TA_MASK_RST;
    }
    else {
        m_lastErr = TA_TR("Not found this function name(%1) in script.").arg(funcName);
        iRet = -2;
    }

    // over the total parameter
    initPublicPara();

    return iRet;
}

QStringList TestRunner::runningList(const QStringList& selPath)
{
    QStringList rLst;
    if(selPath.count() < 1)
        return rLst;
    QString lastSuitePath;
    for(int i = 0; i < selPath.count(); i++) {
        QString path = selPath.at(i);
        QStringList lstName = path.split("/");
        if(lstName.count() == 3) {  // is test suite
            if(!lastSuitePath.isEmpty() && path != lastSuitePath) {
                rLst.append(">" + lastSuitePath);
            }
            lastSuitePath = path;
        }
        rLst.append(path);
    }
    rLst.append(">" + lastSuitePath);
    rLst.append(">" + selPath.at(0));

    return rLst;
}

bool TestRunner::runner(const QStringList &selPath, ResultMgr& rstMgr, bool bStopWhenFailed)
{
    QStringList runLst = runningList(selPath);
    QStringList lstTeardown;

    QScriptValue scriptObj = m_engine.newQObject(&rstMgr);
    m_engine.globalObject().setProperty("__ate", scriptObj);

    bool bSuccess = true;

    for(int i = 0; i < runLst.count(); i++){
        QString path = runLst.at(i);

        QString strScriptFunc = "setup_";
        bool bTeardown = false;
        if(path.at(0) == QChar('>')) {
            path = path.remove(0, 1);
            strScriptFunc = "teardown_";
            bTeardown = true;
        }

        QJsonObject objUnit = m_pUnitMgr->getUnitObj(path);
        TA_UNIT_TYPE eType = (TA_UNIT_TYPE)objUnit["Type"].toInt();

        switch(eType) {
        case eTestProject:
        case eTestSuite:
            strScriptFunc += objUnit["Name"].toString();
            break;
        case eTestCase:
            strScriptFunc = "test_" + objUnit["Name"].toString();
            break;
        }

        if(!bTeardown) {
            // Create the result buffer of the current test unit
            rstMgr.CreateResult(path, objUnit);
        }

        int iRet = executeScript(strScriptFunc, m_pUnitMgr->getLocalParameter(objUnit));

        if(eType != eTestCase) {
            if(bTeardown) {
                if(!lstTeardown.isEmpty())
                    lstTeardown.pop_back();
            }
            else {
                lstTeardown.push_back(path);
            }
        }

        // Exception(iRet < 0), stopped, or failed to stop
        if(iRet < 0) {
            rstMgr.UpdateResult(path, objUnit, iRet, m_lastErr);
            bSuccess = false;
            break;
        }
        else if(m_bStopped || (iRet > 0 && bStopWhenFailed)) {
            rstMgr.UpdateResult(path, objUnit, 1, TA_TR("Stopped by TreeATE."));
            break;
        }

        // record test result of the current test unit
        rstMgr.UpdateResult(path, objUnit, iRet);
        TA_OUT_DEBUG_INFO << path << " : " << iRet;
    }

    QString strScriptFunc = "teardown_";
    // After stopped running the teardown of suite or project
    for(QStringList::reverse_iterator itor = lstTeardown.rbegin();
        itor != lstTeardown.rend(); ++itor) {
        QString path = *itor;
        QJsonObject objUnit = m_pUnitMgr->getUnitObj(path);
        int iRet = executeScript(strScriptFunc + objUnit["Name"].toString(),
                m_pUnitMgr->getLocalParameter(objUnit));

        if(iRet < 0) {
            rstMgr.UpdateResult(path, objUnit, iRet, m_lastErr);
            bSuccess = false;
            break;
        }
        else {
            // result of teardown
            rstMgr.UpdateResult(path, objUnit, iRet);
        }
    }

    return bSuccess;
}
