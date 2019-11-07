///
/// @project       TreeATE
/// @brief         parser test for Python
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "stdinc.h"
#include "langpy.h"

#include <QFile>

LangPy::LangPy()
{
    PythonQt::init();
    m_mainModule = PythonQt::self()->getMainModule();
    connect(PythonQt::self(), SIGNAL(pythonStdErr(QString)), this, SLOT(strOut(QString)));
    connect(PythonQt::self(), SIGNAL(pythonStdOut(QString)), this, SLOT(strOut(QString)));
}

LangPy::~LangPy()
{
    PythonQt::cleanup();
}

void LangPy::strOut(const QString &out)
{
    cerr << out.toStdString();
}

bool LangPy::loadScript(const QStringList &scriptFiles)
{
    for(QStringList::const_reverse_iterator itor = scriptFiles.rbegin();
        itor != scriptFiles.rend(); ++itor)
    {
        QString scrFile = *itor;
        QFileInfo fInfoPy(scrFile);
        QFileInfo fileInfo(scrFile + "c");
        if(!fileInfo.exists() || fInfoPy.lastModified() > fileInfo.lastModified()) {
            QString script = "import py_compile\r\npy_compile.compile('" + scrFile + "')";
            m_mainModule.evalScript(script);
            if(PythonQt::self()->hadError()) {
                m_lastErr = TA_TR("Error at parser the python script");
                return false;
            }
        }
        m_mainModule.evalFile(scrFile);
        if(PythonQt::self()->hadError()) {
            m_lastErr = TA_TR("Error at parser the python file:") + scrFile;
            return false;
        }
    }

    return true;
}

void LangPy::addModel(const QString& strObjName, QObject* obj)
{
    m_mainModule.addObject(strObjName, obj);
}

bool LangPy::initPublicPara(const TA_MapParaValue& publicPara)
{
    for(TA_MapParaValue::const_iterator itorTotal = publicPara.begin();
            itorTotal != publicPara.end(); ++itorTotal )
    {
        m_mainModule.addVariable(itorTotal.key(), itorTotal.value());
    }

    return true;
}

int LangPy::executeScript(const QString& funcName, const TA_MapParaValue& localValue)
{
    int iRet = -1;
    for(TA_MapParaValue::const_iterator itor = localValue.begin(); itor != localValue.end(); ++itor)
    {
        m_mainModule.addVariable(itor.key(), itor.value());
    }

    QVariant res = m_mainModule.call(funcName);    
    if(PythonQt::self()->hadError()) {
        m_lastErr = TA_TR("*** Error at parser the python function: ") + funcName;
        return iRet;
    }

    if (res.isValid()) {
        iRet = res.toInt() /*& TA_MASK_RST*/;
    }
    else {
        m_lastErr = TA_TR("*** Error: Not have return value of the function: ") + funcName;
    }

    return iRet;
}
