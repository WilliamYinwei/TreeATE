///
/// @project       TreeATE
/// @brief         parser test for QtScript
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "stdinc.h"
#include "langqs.h"

#include <QDebug>
#include <QFile>

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

        QScriptValue result = m_engine.evaluate(contents, scrFile);
        if(m_engine.hasUncaughtException()) {
            int line = m_engine.uncaughtExceptionLineNumber();
            m_lastErr = TA_TR("Script exception at file(%1) line(%2):%3")
                    .arg(scrFile)
                    .arg(QString::number(line))
                    .arg(result.toString());
            m_engine.clearExceptions();
            return false;
        }
    }

    QScriptValue result = m_engine.evaluate(script);
    if(m_engine.hasUncaughtException()) {
        int line = m_engine.uncaughtExceptionLineNumber();
        m_lastErr = TA_TR("Script exception at line(%1):%2")
                .arg(QString::number(line))
                .arg(result.toString());
        m_engine.clearExceptions();
        return false;
    }

    return true;
}

void LangQS::addModel(const QString& strObjName, QObject* obj)
{
    QScriptValue scriptObj = m_engine.newQObject(obj);
    m_engine.globalObject().setProperty(strObjName, scriptObj);
}

bool LangQS::initPublicPara(const TA_MapParaValue& publicPara)
{
    for(TA_MapParaValue::const_iterator itorTotal = publicPara.begin();
            itorTotal != publicPara.end(); ++itorTotal )
    {
        QScriptValue scriptValue = m_engine.newVariant(itorTotal.value());
        m_engine.globalObject().setProperty(itorTotal.key(), scriptValue);
    }

    return true;
}

int LangQS::executeScript(const QString& funcName, const TA_MapParaValue& localValue)
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

    return iRet;
}
