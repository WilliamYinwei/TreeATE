///
/// @brief         Output model manager
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "stdinc.h"
#include "ioutput.h"
#include "outputmgr.h"
#include "outputstd.h"
#include "outputlocal.h"

#include <QCoreApplication>
#include <QSettings>
#include <QLibrary>
#include <QFileInfo>
#include <QDir>
#include <QStringList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

typedef void* (*CreateInst)();

OutputMgr::OutputMgr()
{
    m_pOutputSvr = NULL;
    m_pOutputLocal = NULL;
}

OutputMgr::~OutputMgr()
{
    CloseOutput();
}

bool OutputMgr::OpenOutput(QString& strErr)
{
    CloseOutput();

    OutputStd* outStd = new OutputStd();
    m_lstOutput.append(outStd);

    m_appStrPath = qApp->applicationDirPath();

    QSettings cfgOut(m_appStrPath + "/Config/OutputCfg.ini", QSettings::IniFormat);
    cfgOut.beginGroup("Output");
    QString outExName = m_appStrPath + "/libs/" + cfgOut.value("Model").toString();
    cfgOut.endGroup();

    QFileInfo infoFile(outExName);
    if(infoFile.isFile()) {
        QLibrary myLib(outExName);

        CreateInst myFunction = (CreateInst) myLib.resolve("CreateOutputInst");
        if (NULL == myFunction)
        {
            strErr = TA_TR("Failed to resolve the ") + outExName;
            TA_OUT_DEBUG_INFO << strErr;
            return false;
        }

        m_pOutputSvr = (IOutput*)myFunction();
        if(NULL == m_pOutputSvr)
        {
            strErr = TA_TR("Failed to create the instance.");
            TA_OUT_DEBUG_INFO << strErr;
            return false;
        }
        m_lstOutput.append(m_pOutputSvr);
    }

    m_pOutputLocal = new OutputLocal();
    m_lstOutput.append(m_pOutputLocal);

    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->OpenOutput())
            bRet = false;
    }
    return bRet;
}

void OutputMgr::CloseOutput()
{
    foreach (auto itor, m_lstOutput) {
        itor->CloseOutput();
        delete itor;
    }
    m_lstOutput.clear();
    m_pOutputSvr = NULL;
    m_pOutputLocal = NULL;
}

bool OutputMgr::Save(const QString &strFileName)
{
    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->Save(strFileName))
            bRet = false;
    }
    return bRet;
}

bool OutputMgr::UploadResult()
{
    OutputLocal* pLocal = (OutputLocal*)m_pOutputLocal;
    return (pLocal && pLocal->UploadResultTo(m_pOutputSvr));
}

void OutputMgr::tagLocalResult(const QString& strFileName)
{    
    if(m_pOutputLocal) m_pOutputLocal->Save(strFileName);
}

bool OutputMgr::OutputTestProjectRst(const TestProjectRst& tpr)
{
    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->OutputTestProjectRst(tpr))
            bRet = false;
    }
    return bRet;
}

bool OutputMgr::UpdateTestProjectRst(const TestProjectRst& tpr)
{
    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->UpdateTestProjectRst(tpr))
            bRet = false;
    }
    return bRet;
}

bool OutputMgr::OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent)
{
    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->OutputTestSuiteRst(tsr, strPathParent))
            bRet = false;
    }
    return bRet;
}

bool OutputMgr::UpdateTestSuiteRst(const TestSuiteRst& tsr)
{
    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->UpdateTestSuiteRst(tsr))
            bRet = false;
    }
    return bRet;
}

bool OutputMgr::OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent)
{
    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->OutputTestCaseRst(tcr, strPathParent))
            bRet = false;
    }
    return bRet;
}

bool OutputMgr::UpdateTestCaseRst(const TestCaseRst& tcr)
{
    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->UpdateTestCaseRst(tcr))
            bRet = false;
    }
    return bRet;
}

bool OutputMgr::OutputDetailTestRst(const TestResult& tdr, const QString& strPathParent)
{
    bool bRet = true;
    foreach (auto itor, m_lstOutput) {
        if(!itor->OutputDetailRst(tdr, strPathParent))
            bRet = false;
    }
    return bRet;
}
