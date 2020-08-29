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

bool OutputMgr::uploadRst(const QJsonValue& json)
{
    if(NULL == m_pOutputSvr)
        return false;

    if(!json.isObject()) {
        return false;
    }

    QJsonObject obj = json.toObject();
    QString strLongName = obj["longname"].toString();
    bool isUpdateRst = obj["time"].isNull();
    bool isDetailRst = obj["spend"].isNull() && (!obj["standard"].isNull());
    QStringList lstName = strLongName.split("/");

    bool bRst = false;
    switch(lstName.count()) {
    case 2: {// test project
        TestProjectRst tpr;
        if(isUpdateRst) {
            tpr.m_strDesc = obj["desc"].toString();
            tpr.m_strPath = strLongName;
            tpr.m_eRst = TestResult::FromString(obj["rst"].toString());
            tpr.m_tSpend = QTime::fromString(obj["spend"].toString());
            bRst = m_pOutputSvr->UpdateTestProjectRst(tpr);
        }
        else {
            tpr.m_nCount = obj["count"].toInt();
            tpr.m_strPath = strLongName;
            tpr.m_strName = obj["name"].toString();
            tpr.m_strBarcode = obj["barcode"].toString();
            tpr.m_strStation = obj["station"].toString();
            tpr.m_tStart = QDateTime::fromString(obj["time"].toString(), TREEATE_DATETIME_FORMAT);
            tpr.m_strUser = obj["user"].toString();
            tpr.m_strVersion = obj["version"].toString();
            tpr.m_strLineName = obj["workingline"].toString();
            bRst = m_pOutputSvr->OutputTestProjectRst(tpr);
        }
        break;
        }
    case 3: {// test suite
        TestSuiteRst tsr;
        if(isUpdateRst) {
            tsr.m_strPath = strLongName;
            tsr.m_eRst = TestResult::FromString(obj["rst"].toString());
            tsr.m_tSpend = QTime::fromString(obj["spend"].toString());
            tsr.m_strDesc = obj["desc"].toString();
            bRst = m_pOutputSvr->UpdateTestSuiteRst(tsr);
        }
        else {
            QString strParentPath = "/" + lstName.at(1);
            tsr.m_strPath = strLongName;
            tsr.m_strName = obj["name"].toString();
            tsr.m_tStart = QDateTime::fromString(obj["time"].toString(), TREEATE_DATETIME_FORMAT);
            bRst = m_pOutputSvr->OutputTestSuiteRst(tsr, strParentPath);
        }
        break;
        }
    case 4: // test case
        if(isDetailRst) { // is detail result
            TestResult rst;
            rst.m_strPath = strLongName;
            rst.m_strName = obj["name"].toString();
            rst.m_eRst = TestResult::FromString(obj["rst"].toString());
            rst.m_tStart = QDateTime::fromString(obj["time"].toString(), TREEATE_DATETIME_FORMAT);
            rst.m_strDesc = obj["desc"].toString();
            rst.m_strStandard = obj["standard"].toString();
            bRst = m_pOutputSvr->OutputDetailRst(rst, rst.m_strPath);
        }
        else {
            TestCaseRst tcr;
            if(isUpdateRst) {
                tcr.m_strPath = strLongName;
                tcr.m_eRst = TestResult::FromString(obj["rst"].toString());
                tcr.m_tSpend = QTime::fromString(obj["spend"].toString());
                tcr.m_strDesc = obj["desc"].toString();
                bRst = m_pOutputSvr->UpdateTestCaseRst(tcr);
            }
            else {
                QString strParentPath = "/" + lstName.at(1) + "/" + lstName.at(2);
                tcr.m_strPath = strLongName;
                tcr.m_strName = obj["name"].toString();
                tcr.m_tStart = QDateTime::fromString(obj["time"].toString(), TREEATE_DATETIME_FORMAT);
                bRst = m_pOutputSvr->OutputTestCaseRst(tcr, strParentPath);
            }
        }
        break;
    }

    return bRst;
}

bool OutputMgr::UploadResult()
{
    if(NULL == m_pOutputSvr) {
        cerr << "No output to server model." << endl;
        return false;
    }

    QDir dir(m_appStrPath + "/Results/");
    QStringList lstSuffix;
    lstSuffix << "*.rst";
    QStringList lstRst = dir.entryList(lstSuffix, QDir::Files);
    cout << "Commit results (" << lstRst.count() << ")";

    bool bOK = true;
    foreach (auto itor, lstRst) {
        QString strFile = itor;

        QFile fRst(dir.absolutePath() + "/" + strFile);
        if(!fRst.open(QIODevice::ReadOnly)) {
            cerr << endl << fRst.errorString().toStdString() << endl;
            bOK = false;
            continue;
        }

        QTextStream in(&fRst);
        in.setCodec("UTF-8");
        bool bFileLoad = true;
        while(!in.atEnd()) {
            QString line = in.readLine();
            QJsonParseError jsonErr;
            QJsonDocument jsonDoc = QJsonDocument::fromJson(line.toUtf8(), &jsonErr);
            if(jsonDoc.isNull()) {
                bFileLoad = false;
                cerr  << endl << jsonErr.errorString().toStdString() << endl;
                break;
            }

            if(!uploadRst(QJsonValue::fromVariant(jsonDoc.toVariant()))) {
                bFileLoad = false;
                // Fix the # bug
                fRst.close();
                return false;
            }
        }
        fRst.close();

        if(bFileLoad && m_pOutputSvr != NULL && m_pOutputSvr->Save("")) {
            DeleteLocalResult(strFile);            
        }
        else {
            bOK = false;
        }
        cout << ".";
    }
    cout << endl;

    return bOK;
}

void OutputMgr::DeleteLocalResult(const QString& strFileName)
{
    QString strFile = m_appStrPath + "/Results/" + strFileName;
    QFileInfo info(strFile);
    if(info.isFile()) {        
        QDir dir;
        bool ok = dir.remove(strFile);
        qDebug() << info.absoluteFilePath() << " is file" << (ok ? ",  It was deleted." : " no deleted.");
    }
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
