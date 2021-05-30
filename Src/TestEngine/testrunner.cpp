///
/// @brief         Test runner, parse the mutli-language and configure file
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "stdinc.h"
#include "testrunner.h"
#include "imutlilang.h"
#include "langqs.h"

#include <QScriptValue>
#include <QMetaObject>
#include <QLibrary>
#include <QDebug>
#include <QFileInfo>
#include <QDir>
#include <QCoreApplication>

typedef void* (*CreateInst)(const char*);

TestRunner::TestRunner(UnitMgr* pMgr)
{
    m_pUnitMgr = pMgr;
    m_bStopped = false;
    m_pCurretLang = NULL;
}

TestRunner::~TestRunner()
{
    for(int i = 0; i < m_lstObj.count(); i++) {
        delete m_lstObj.at(i);
    }
    m_lstObj.clear();
    if(m_pCurretLang)
        delete m_pCurretLang;
}

void TestRunner::stop()
{
    m_bStopped = true;
}

QString TestRunner::getLastError()
{
    return m_lastErr;
}

bool TestRunner::initScript(const QString& prjPath)
{
    if(NULL == m_pUnitMgr) {
        m_lastErr = TA_TR("No assign the unit manager.");
        return false;
    }

    UnitMgr::TaLang lang = m_pUnitMgr->getCurrentLanguage();
    if(UnitMgr::JavaScript == lang) {
        if(m_pCurretLang)
            delete m_pCurretLang;
        m_pCurretLang = new LangQS();
    }
    else if(UnitMgr::Python == lang) {
        if(m_pCurretLang)
            delete m_pCurretLang;

        QDir dir;
        dir.setPath(qApp->applicationDirPath());
        QStringList pythonDlls = dir.entryList(QStringList() << TA_DEV_LANG_PYTHON, QDir::Files);
        if(pythonDlls.count() <= 0) {
            m_lastErr = TA_TR("Can't found the DevLangPython*.dll");
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }
        const QString strDllFile(dir.path() + "/" + pythonDlls.at(0));
        QLibrary myLib(strDllFile);
        if(!myLib.load()) {
            m_lastErr = TA_TR("Failed to load the ") + strDllFile + ". error:" + myLib.errorString();
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }

        CreateInst myFunction = (CreateInst) myLib.resolve("CreateLanguageInst");
        if (NULL == myFunction)
        {
            m_lastErr = TA_TR("Failed to resolve the ") + strDllFile;
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }

        m_pCurretLang = (IMutliLang*)myFunction("py");
        if(m_pCurretLang == NULL)
        {
            m_lastErr = TA_TR("The current language is NULL.");
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }
    }
    else if(UnitMgr::Cpp == lang) {
        if(m_pCurretLang)
            delete m_pCurretLang;

        QDir dir;
        dir.setPath(qApp->applicationDirPath());
        QStringList cppDlls = dir.entryList(QStringList() << "DevLangCpp*.dll", QDir::Files);
        if(cppDlls.count() <= 0) {
            m_lastErr = TA_TR("Can't found the DevLangCpp*.dll");
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }
        const QString strDllFile(cppDlls.at(0));
        QLibrary myLib(strDllFile);
        if(!myLib.load()) {
            m_lastErr = TA_TR("Failed to load the ") + strDllFile;
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }

        CreateInst myFunction = (CreateInst) myLib.resolve("CreateLanguageInst");
        if (NULL == myFunction)
        {
            m_lastErr = TA_TR("Failed to resolve the ") + strDllFile;
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }

        m_pCurretLang = (IMutliLang*)myFunction("cpp");
        if(m_pCurretLang == NULL)
        {
            m_lastErr = TA_TR("The current language is NULL.");
            TA_OUT_DEBUG_INFO << m_lastErr;
            return false;
        }
    }

    // load script
    if(!m_pCurretLang->loadScript(m_pUnitMgr->getScript())) {
        m_lastErr = m_pCurretLang->getLastErr();
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
        if(fInfo.suffix().compare(TA_TEST_COM_SUFFIX, Qt::CaseInsensitive) != 0)
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

        m_pCurretLang->addModel(strModelObj, pObj);
    }

    // load public Parameter
    m_pCurretLang->initPublicPara(m_pUnitMgr->getPublicParameter());

    return true;
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
    Q_ASSERT(m_pCurretLang);
    QStringList runLst = runningList(selPath);
    QStringList lstTeardown;

    m_pCurretLang->addModel("__ate", &rstMgr);
    m_pCurretLang->addModel("__aterun", this);

    bool bSuccess = true;

    QString strLastExceptionFunc;
    for(int i = 0; i < runLst.count(); i++){
        QString path = runLst.at(i);

        QString strScriptFunc = "setup_";
        QString strSeparator = "================================================== ";
        bool bTeardown = false;
        if(path.at(0) == QChar('>')) {
            path = path.remove(0, 1);
            strScriptFunc = "teardown_";
            bTeardown = true;
            strSeparator = "-------------------------------------------------- ";
        }

        QJsonObject objUnit = m_pUnitMgr->getUnitObj(path);
        TA_UNIT_TYPE eType = (TA_UNIT_TYPE)objUnit["Type"].toInt();

        QString strUnitName = objUnit["Name"].toString();
        std::cerr << strSeparator.toStdString()
                  << strUnitName.toStdString()
                  << std::endl;
        switch(eType) {
        case eTestProject:
        case eTestSuite:
            strScriptFunc += strUnitName;
            break;
        case eTestCase:
            strScriptFunc = "test_" + strUnitName;
            break;
        }

        if(!bTeardown) {
            // Create the result buffer of the current test unit
            rstMgr.CreateResult(path, objUnit);
        }

        int iRet = m_pCurretLang->executeScript(strScriptFunc, m_pUnitMgr->getLocalParameter(objUnit));
        // recovery the public parameter
        m_pCurretLang->initPublicPara(m_pUnitMgr->getPublicParameter());

        // Exception(iRet < 0)
        if(iRet < 0) {
            m_lastErr = m_pCurretLang->getLastErr();
            rstMgr.UpdateResult(path, objUnit, iRet, m_lastErr);
            bSuccess = false;
            strLastExceptionFunc = strScriptFunc;
            break;
        }

        if(eType != eTestCase) {
            if(bTeardown) {
                if(!lstTeardown.isEmpty())
                    lstTeardown.pop_back();
            }
            else {
                lstTeardown.push_back(path);
            }
        }

        // stopped, or failed to stop
        if(m_bStopped || (iRet > 0 && bStopWhenFailed)) {
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
        QString strTeardownFunc = strScriptFunc + objUnit["Name"].toString();
        if(strTeardownFunc == strLastExceptionFunc)
            continue;

        int iRet = m_pCurretLang->executeScript(strTeardownFunc,
                m_pUnitMgr->getLocalParameter(objUnit));
        // recovery the public parameter
        m_pCurretLang->initPublicPara(m_pUnitMgr->getPublicParameter());
        m_lastErr = m_pCurretLang->getLastErr();

        if(iRet < 0) {            
            rstMgr.UpdateResult(path, objUnit, iRet, m_lastErr);
            bSuccess = false;
        }
        else {
            // result of teardown
            rstMgr.UpdateResult(path, objUnit, iRet);
        }
    }

    return bSuccess;
}

bool TestRunner::IsStopped()
{
    return m_bStopped;
}
