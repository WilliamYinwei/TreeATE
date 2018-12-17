///
/// @brief         Let's test result output and save the local with file.
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "stdinc.h"
#include "outputlocal.h"

#include <QFile>
#include <QTextStream>
#include <QJsonObject>
#include <QJsonDocument>
#include <QCoreApplication>
#include <QFileInfo>
#include <QDir>

OutputLocal::OutputLocal()
{

}

bool OutputLocal::OpenOutput()
{
    m_out.setDevice(&m_fRst);
    return true;
}

void OutputLocal::CloseOutput()
{

}

bool OutputLocal::Save(const QString &strFileName)
{
    QString rstStrPath = qApp->applicationDirPath() + "/Results/";
    QDir dir(rstStrPath);
    if(!dir.exists()) {
        dir.mkpath(rstStrPath);
    }

    m_fRst.setFileName(rstStrPath + strFileName);
    if(!m_fRst.open(QIODevice::WriteOnly)) {
        cerr << m_fRst.errorString().toStdString() << " from Output Local";
        return false;
    }

    m_out.flush();
    m_fRst.close();

    return true;
}



bool OutputLocal::OutputTestProjectRst(const TestProjectRst& tpr)
{
    QJsonObject joTP;
    joTP.insert("name", tpr.m_strName);
    joTP.insert("longname", tpr.m_strPath);
    joTP.insert("station", tpr.m_strStation);
    joTP.insert("user", tpr.m_strUser);
    joTP.insert("time", tpr.m_tStart.toString(TREEATE_DATETIME_FORMAT));
    joTP.insert("version", tpr.m_strVersion);
    joTP.insert("workingline", tpr.m_strLineName);
    joTP.insert("barcode", tpr.m_strBarcode);
    joTP.insert("count", QJsonValue::fromVariant(tpr.m_nCount));
    joTP.insert("selflag", tpr.m_strSelFlag);
    m_out << QJsonDocument::fromVariant(joTP.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    return true;
}

bool OutputLocal::UpdateTestProjectRst(const TestProjectRst& tpr)
{
    QJsonObject joTP;
    joTP.insert("longname", tpr.m_strPath);
    joTP.insert("rst", TestResult::ToString(tpr.m_eRst));
    joTP.insert("spend", tpr.m_tSpend.toString(TREEATE_TIME_FORMAT));
    joTP.insert("desc", tpr.m_strDesc);
    m_out << QJsonDocument::fromVariant(joTP.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    return true;
}

bool OutputLocal::OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent)
{
    Q_UNUSED(strPathParent)
    QJsonObject joTS;
    joTS.insert("time", tsr.m_tStart.toString(TREEATE_DATETIME_FORMAT));
    joTS.insert("name", tsr.m_strName);
    joTS.insert("longname", tsr.m_strPath);
    m_out << QJsonDocument::fromVariant(joTS.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    return true;
}

bool OutputLocal::UpdateTestSuiteRst(const TestSuiteRst& tsr)
{
    QJsonObject joTS;
    joTS.insert("longname", tsr.m_strPath);
    joTS.insert("rst", TestResult::ToString(tsr.m_eRst));
    joTS.insert("desc", tsr.m_strDesc);
    joTS.insert("spend", tsr.m_tSpend.toString(TREEATE_TIME_FORMAT));
    m_out << QJsonDocument::fromVariant(joTS.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    return true;
}

bool OutputLocal::OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent)
{
    Q_UNUSED(strPathParent)
    QJsonObject joTC;
    joTC.insert("time", tcr.m_tStart.toString(TREEATE_DATETIME_FORMAT));
    joTC.insert("name", tcr.m_strName);
    joTC.insert("longname", tcr.m_strPath);
    m_out << QJsonDocument::fromVariant(joTC.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    return true;
}

bool OutputLocal::UpdateTestCaseRst(const TestCaseRst& tcr)
{
    QJsonObject joTC;
    joTC.insert("longname", tcr.m_strPath);
    joTC.insert("rst", TestResult::ToString(tcr.m_eRst));
    joTC.insert("desc", tcr.m_strDesc);
    joTC.insert("spend", tcr.m_tSpend.toString(TREEATE_TIME_FORMAT));
    m_out << QJsonDocument::fromVariant(joTC.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    return true;
}

bool OutputLocal::OutputDetailRst(const TestResult& tdr, const QString& strPathParent)
{
    QJsonObject joDetail;
    joDetail.insert("longname", strPathParent);
    joDetail.insert("name", tdr.m_strName);
    joDetail.insert("time", tdr.m_tStart.toString(TREEATE_DATETIME_FORMAT));
    joDetail.insert("rst", TestResult::ToString(tdr.m_eRst));
    joDetail.insert("desc", tdr.m_strDesc);
    joDetail.insert("standard", tdr.m_strStandard);
    m_out << QJsonDocument::fromVariant(joDetail.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    return true;
}
