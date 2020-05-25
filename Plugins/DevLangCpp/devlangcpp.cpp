///
/// @project       TreeATE
/// @brief         Support cpp language test item
/// @author        David Yin  2020-05 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "devlangcpp.h"

#include <QFile>
#include <QFileInfo>
#include <QDateTime>
#include <QLibrary>
#include <QMetaObject>

void* CreateLanguageInst(const char *strLangName)
{
    if(QString(strLangName) == "cpp")
        return new DevLangCpp();

    return NULL;
}


DevLangCpp::DevLangCpp()
{
    m_pObj = NULL;
}

DevLangCpp::~DevLangCpp()
{
    if(m_pObj) {
        delete m_pObj;
        m_pObj = NULL;
    }
    if(m_libTest.isLoaded())
        m_libTest.unload();
}

typedef void* (*CreateInst)(const char*);

bool DevLangCpp::loadScript(const QStringList& scriptFiles)
{
    if(scriptFiles.count() != 1) {
        m_lastErr = tr("[DevLangCpp] No dll files for test.");
        return false;
    }

    m_libTest.setFileName(scriptFiles.at(0));
    if(!m_libTest.load()) {
        m_lastErr = tr("Warning:") + m_libTest.errorString();
        return false;
    }

    CreateInst myFunction = (CreateInst) m_libTest.resolve("CreateTestInst");
    if (NULL == myFunction)
    {
        m_lastErr = tr("Warning:") + m_libTest.errorString();
        m_libTest.unload();
        return false;
    }

    m_pObj = (QObject*)myFunction("");
    if(NULL == m_pObj)
    {
        m_libTest.unload();
        m_lastErr = tr("Warning:") + tr("Failed to create the test instance.");
        return false;
    }

    return true;
}

void DevLangCpp::addModel(const QString &strObjName, QObject* obj)
{
    if(m_pObj == NULL) {
        m_lastErr = tr("[DevLangCpp] Not found the test object.");
        return;
    }

    const QString funcName = "addModel";
    const QMetaObject* metaObj = m_pObj->metaObject();
    if(metaObj) {
        if(!QMetaObject::invokeMethod(m_pObj, funcName.toUtf8().data(),
                                      Q_ARG(QString, strObjName),
                                      Q_ARG(QObject*, obj)))
        {
            m_lastErr = tr("[DevLangCpp] Failed invoke method: ") + funcName;
        }
    }
    else {
        m_lastErr = tr("[DevLangCpp] The test object was invaild.");
        return;
    }
    return;
}

bool DevLangCpp::invokeFunc(const QString funcName, const TA_MapParaValue& para)
{
    if(m_pObj == NULL) {
        m_lastErr = tr("[DevLangCpp] Not found the test object.");
        return false;
    }

    const QMetaObject* metaObj = m_pObj->metaObject();
    if(metaObj) {
        for(TA_MapParaValue::const_iterator itor = para.cbegin(); itor != para.cend();
            ++itor) {
            if(!QMetaObject::invokeMethod(m_pObj, funcName.toUtf8().data(),
                                          Q_ARG(QString, itor.key()),
                                          Q_ARG(QString, itor.value())))
            {
                m_lastErr = tr("[DevLangCpp] Failed invoke method: ") + funcName;
                return false;
            }
        }
    }
    else {
        m_lastErr = tr("[DevLangCpp] The test object was invaild.");
        return false;
    }
    return true;
}

bool DevLangCpp::initPublicPara(const TA_MapParaValue& publicPara)
{
    return invokeFunc("addPublicPara", publicPara);
}

int DevLangCpp::executeScript(const QString& funcName, const TA_MapParaValue& localValue)
{
    int iRet = -1;
    if(m_pObj == NULL) {
        m_lastErr = tr("[DevLangCpp] Not found the test object.");
        return iRet;
    }

    if(!invokeFunc("setLocalPara", localValue)) {
        return iRet;
    }

    const QMetaObject* metaObj = m_pObj->metaObject();
    if(metaObj) {        
        if(!QMetaObject::invokeMethod(m_pObj, funcName.toUtf8().data(),
                                      Q_RETURN_ARG(int, iRet)))
        {
            m_lastErr = tr("[DevLangCpp] Failed invoke method: ") + funcName;
            iRet = -2;
        }
    }
    else {
        iRet = -3;
        m_lastErr = tr("[DevLangCpp] The test object was invaild.");
        return iRet;
    }

    return iRet;
}
