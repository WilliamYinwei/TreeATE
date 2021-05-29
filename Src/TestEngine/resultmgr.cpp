///
/// @brief         Test results manager
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "stdinc.h"
#include "resultmgr.h"

#include <QDateTime>
#include <QSharedMemory>

ResultMgr::ResultMgr()
{

}

ResultMgr::~ResultMgr()
{
    // ExitResult();
}

bool ResultMgr::InitResult(const QString& user, const QString& station,
                           const QString& workLine, const QString& barcode)
{
    m_strCurrPath = "";
    m_rstPrj.m_strUser = user;
    m_rstPrj.m_strStation = station;
    m_rstPrj.m_strLineName = workLine;
    m_rstPrj.m_strBarcode = barcode;

    return m_output.OpenOutput(m_strLastErr);
}

bool ResultMgr::UploadResultToSvr()
{
    // To only once at upload when parallel running on TestEngine
    QSharedMemory sharedMemory("SmartATE_TestEngine_UploadResult");
    if (sharedMemory.create(1) && sharedMemory.error() != QSharedMemory::AlreadyExists) {
        return m_output.UploadResult();
    }
    return false;
}

void ResultMgr::ExitResult()
{
    const QString strFileName = QDateTime::currentDateTime().toString(TREEATE_DATETIME_FORMAT2) + TA_RST_FILE;

    // if success to save (to database) than delete local result
    if(m_output.Save(strFileName)) {
        m_output.DeleteLocalResult(strFileName);
    }
}

QString ResultMgr::getLastError()
{
    return m_strLastErr;
}

void ResultMgr::ClearResult()
{
    m_output.CloseOutput();
    m_rstSuite.clear();
    m_rstCase.clear();
}

bool ResultMgr::OutputRstEx(const QString& strName, const QString& strValue,
                            const QString& strStand, int nRst)
{
    QStringList lstName = m_strCurrPath.split("/");
    if(m_strCurrPath.isEmpty() || lstName.count() != 4)
        return false;

    TestResult rst;
    rst.m_tStart = QDateTime::currentDateTime();
    rst.m_eRst = TestResult::TypeTestRst(nRst);
    rst.m_strName = strName.left(TA_RST_MAXLEN_NAME);
    rst.m_strPath = m_strCurrPath;
    rst.m_strDesc = strValue.left(TA_RST_MAXLEN_VALUE);
    rst.m_strStandard = strStand.left(TA_RST_MAXLEN_STAND);

    return m_output.OutputDetailTestRst(rst, m_strCurrPath);
}

bool ResultMgr::OutputRst(const QString& strName, const QString& strValue,
                            const QString& strStand)
{
    return OutputRstEx(strName, strValue, strStand, TestResult::INFO);
}

bool ResultMgr::CreateResult(const QString& strPath, const QJsonObject& objUnit)
{
    m_strCurrPath = strPath;
    TA_UNIT_TYPE eType = (TA_UNIT_TYPE)objUnit["Type"].toInt();
    if(eType == eTestProject) {
        m_rstPrj.m_strName = objUnit["Name"].toString();
        m_rstPrj.m_tStart = QDateTime::currentDateTime();
        m_rstPrj.m_tTime.start();
        m_rstPrj.m_strPath = strPath;
        m_rstPrj.m_strDesc = objUnit["Desc"].toString();
        m_rstPrj.m_strVersion = objUnit["Ver"].toString();
        m_output.OutputTestProjectRst(m_rstPrj);
    }
    else if(eType == eTestSuite) {
        TestSuiteRst rst;
        rst.m_strName = objUnit["Name"].toString();
        rst.m_strPath = strPath;
        rst.m_strDesc = objUnit["Desc"].toString();
        rst.m_tStart = QDateTime::currentDateTime();
        rst.m_tTime.start();

        QString parentPath = strPath;
        parentPath = parentPath.replace("/" + rst.m_strName, "");
        m_output.OutputTestSuiteRst(rst, parentPath);
        m_rstSuite.insert(strPath, rst);
    }
    else if(eType == eTestCase) {
        TestCaseRst rst;
        rst.m_strName = objUnit["Name"].toString();
        rst.m_strPath = strPath;
        rst.m_strDesc = objUnit["Desc"].toString();
        rst.m_tStart = QDateTime::currentDateTime();
        rst.m_tTime.start();

        QString parentPath = strPath;
        parentPath = parentPath.replace("/" + rst.m_strName, "");
        m_output.OutputTestCaseRst(rst, parentPath);
        m_rstCase.insert(strPath, rst);
    }
    return true;
}

TestResult::TypeTestRst ResultMgr::updateRst(const QString& strPath,
                                             const TestResult::TypeTestRst& eRst,
                                             int iRet)
{
    TestResult::TypeTestRst eCurrRst;
    if(iRet < 0)
        eCurrRst = TestResult::EXCE;
    else if(iRet == 0)
        eCurrRst = TestResult::PASS;
    else
        eCurrRst = TestResult::FAIL;

    QStringList lstName = strPath.split("/");
    if(lstName.count() == 4) {
        auto itor = m_rstSuite.find("/" + lstName.at(1) + "/" + lstName.at(2));
        if(itor != m_rstSuite.end()) {
            TestSuiteRst& rst = *itor;
            if(rst.m_eRst < eCurrRst)
                rst.m_eRst = eCurrRst;
        }
    }

    if(m_rstPrj.m_eRst < eCurrRst)
        m_rstPrj.m_eRst = eCurrRst;

    if(eRst < eCurrRst)
        return eCurrRst;

    return eRst;
}


bool ResultMgr::UpdateResult(const QString& strPath, const QJsonObject& objUnit,
                             int iRet, const QString& strDesc /*= ""*/)
{
    m_strCurrPath = strPath;

    TA_UNIT_TYPE eType = (TA_UNIT_TYPE)objUnit["Type"].toInt();
    if(eType == eTestProject) {
        m_rstPrj.m_tSpend = QTime::fromMSecsSinceStartOfDay(m_rstPrj.m_tTime.elapsed());
        m_rstPrj.m_eRst = updateRst(strPath, m_rstPrj.m_eRst, iRet);
        if(!strDesc.isEmpty()) {
            m_rstPrj.m_strDesc = strDesc;
        }
        m_output.UpdateTestProjectRst(m_rstPrj);
    }
    else if(eType == eTestSuite){
        auto itor = m_rstSuite.find(strPath);
        if(itor != m_rstSuite.end()) {
            TestSuiteRst& rst = *itor;
            rst.m_tSpend = QTime::fromMSecsSinceStartOfDay(rst.m_tTime.elapsed());
            rst.m_eRst = updateRst(strPath, rst.m_eRst, iRet);
            if(!strDesc.isEmpty()) {
                rst.m_strDesc = strDesc;
            }
            m_output.UpdateTestSuiteRst(rst);
        }
    }
    else if(eType == eTestCase) {
        auto itor = m_rstCase.find(strPath);
        if(itor != m_rstCase.end()) {
            TestCaseRst& rst = *itor;
            rst.m_tSpend = QTime::fromMSecsSinceStartOfDay(rst.m_tTime.elapsed());
            rst.m_eRst = updateRst(strPath, rst.m_eRst, iRet);
            if(!strDesc.isEmpty()) {
                rst.m_strDesc = strDesc;
            }
            m_output.UpdateTestCaseRst(rst);
        }
    }
    return true;
}

void ResultMgr::OutputError(const QString& strOutput)
{
    QDateTime currDate = QDateTime::currentDateTime();
    cerr << "[" << currDate.toString(TREEATE_DATETIME_FORMAT).toStdString()
            << "]: " << strOutput.toStdString() << endl;
}

QString ResultMgr::GetProjectName()
{
    return m_rstPrj.m_strName;
}

QString ResultMgr::GetProjectVer()
{
    return m_rstPrj.m_strVersion;
}

QString ResultMgr::GetProjectBarcode()
{
    return m_rstPrj.m_strBarcode;
}

QString ResultMgr::GetProjectDesc()
{
    return m_rstPrj.m_strDesc;
}

QString ResultMgr::GetWorkLine()
{
    return m_rstPrj.m_strLineName;
}

QString ResultMgr::GetWorkStation()
{
    return m_rstPrj.m_strStation;
}

QString ResultMgr::GetUserName()
{
    return m_rstPrj.m_strUser;
}

int ResultMgr::GetTotalRst()
{
    return (int)m_rstPrj.m_eRst;
}
