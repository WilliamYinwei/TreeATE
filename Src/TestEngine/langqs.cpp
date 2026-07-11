///
/// @project       TreeATE
/// @brief         parser test for QtScript
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "../../Libs/TACommon/ta_inc.h"
#include "langqs.h"

#include <QDebug>
#include <QFile>
#include <QQmlEngine>

LangQS::LangQS()
{

}

bool LangQS::loadScript(const QStringList &scriptFiles)
{
    QString script;
    qDebug() << "loadScript count:" << scriptFiles.count();
    for(QStringList::const_reverse_iterator itor = scriptFiles.rbegin();
        itor != scriptFiles.rend(); ++itor)
    {
        QString scrFile = *itor;
        QFile scriptFile(scrFile);
        if (!scriptFile.open(QIODevice::ReadOnly))
        {
            m_lastErr = scrFile + scriptFile.errorString();
            return false;
        }

        QString contents(scriptFile.readAll());
        script += contents;
        scriptFile.close();

        QJSValue result = m_engine.evaluate(contents, scrFile);
        if(result.isError()) {
            int line = result.property("lineNumber").toInt();
            m_lastErr = TA_TR("Script exception at file(%1) line(%2):%3")
                    .arg(scrFile)
                    .arg(QString::number(line))
                    .arg(result.toString());
            return false;
        }
    }

    QJSValue result = m_engine.evaluate(script);
    if(result.isError()) {
        int line = result.property("lineNumber").toInt();
        m_lastErr = TA_TR("Script exception at line(%1):%2")
                .arg(QString::number(line))
                .arg(result.toString());
        return false;
    }

    return true;
}

void LangQS::addModel(const QString& strObjName, QObject* obj)
{
    QJSValue scriptObj = m_engine.newQObject(obj);
    QQmlEngine::setObjectOwnership(obj, QQmlEngine::CppOwnership);
    m_engine.globalObject().setProperty(strObjName, scriptObj);
}

bool LangQS::initPublicPara(const TA_MapParaValue& publicPara)
{
    for(TA_MapParaValue::const_iterator itorTotal = publicPara.begin();
            itorTotal != publicPara.end(); ++itorTotal )
    {
        QJSValue scriptValue = m_engine.toScriptValue(itorTotal.value());
        m_engine.globalObject().setProperty(itorTotal.key(), scriptValue);
    }

    return true;
}

int LangQS::executeScript(const QString& funcName, const TA_MapParaValue& localValue)
{
    int iRet = 0;
    for(TA_MapParaValue::const_iterator itor = localValue.begin(); itor != localValue.end(); ++itor)
    {
        QJSValue scriptValue = m_engine.toScriptValue(itor.value());
        m_engine.globalObject().setProperty(itor.key(), scriptValue);
    }

    QJSValue global = m_engine.globalObject();
    QJSValue func = global.property(funcName);
    if(func.isCallable())
    {
        QJSValue ret = func.call();
        if (ret.isError())
        {
            int line = ret.property("lineNumber").toInt();
            m_lastErr = TA_TR("Script exception at line(%1):%2")
                    .arg(QString::number(line))
                    .arg(ret.toString());
            TA_OUT_DEBUG_INFO << m_lastErr;
            iRet = -1;
        }
        else
            iRet = ret.toUInt() /*& TA_MASK_RST*/;
    }
    else {
        m_lastErr = TA_TR("Not found this function name(%1) in script.").arg(funcName);
        iRet = -2;
    }

    return iRet;
}
