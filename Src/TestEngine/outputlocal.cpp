///
/// @brief         Let's test result output and save the local with file.
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
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
#include <QSqlQuery>
#include <QSqlError>
#include <QThread>

#define TA_LOCALSQLITE_MODEL    "[LocalSqlite]: "
#define TREEATE_TIME_FORMAT     "HH:mm:ss.zzz"
#define TREEATE_DATETIME_FORMAT "yyyy-MM-dd HH:mm:ss.zzz"

OutputLocal::OutputLocal()
{
    if(QSqlDatabase::contains("sql_treeate_localsqlite")) {
        m_dbSqlite = QSqlDatabase::database("sql_treeate_localsqlite");
    }
    else {
        m_dbSqlite = QSqlDatabase::addDatabase("QSQLITE", "sql_treeate_localsqlite");
        QString strPath = qApp->applicationDirPath() + "/db/";
        QDir dir(strPath);
        if(!dir.exists())  {
            dir.mkdir(strPath);
        }
        m_dbSqlite.setDatabaseName(strPath + "treeate.sqlite");
    }
}

bool OutputLocal::OpenOutput()
{
    m_out.setDevice(&m_fRst);
    m_out.setCodec("UTF-8");

    // output to local sqlite database
    if(!m_dbSqlite.isOpen()) {
        if(!m_dbSqlite.open()) {
            qDebug() << TA_LOCALSQLITE_MODEL << m_dbSqlite.lastError().text();
            return false;
        }

        QSqlQuery sqlQuery = QSqlQuery::QSqlQuery(m_dbSqlite);
        QStringList lsTables = m_dbSqlite.tables();
        if(lsTables.count() <= 0) {
            const QString strCreateTables = "CREATE TABLE \"TestProject\" (\"name\" TEXT,\
            \"longname\" TEXT, \"station\" TEXT, \"workingline\" TEXT, \"user\" TEXT, \
            \"time\" TIME, \"barcode\" TEXT, \"count\" INTEGER, \"id\" INTEGER \
            PRIMARY KEY AUTOINCREMENT UNIQUE, \"rst\" TEXT, \"spend\" TEXT, \"desc\" TEXT, \"version\" TEXT)";
            sqlQuery.prepare(strCreateTables);
            if(!sqlQuery.exec()) {
                qDebug() << TA_LOCALSQLITE_MODEL << sqlQuery.lastError().text();
                return false;
            }

            const QString strCreateCaseTable = "CREATE TABLE \"TestCase\" (\"id\" \
            INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL UNIQUE, \"name\" TEXT, \"longname\" TEXT,\
            \"rst\" TEXT, \"desc\" TEXT, \"spend\" TIME, \"time\" TIME, \"parentId\" INTEGER)";
            sqlQuery.prepare(strCreateCaseTable);
            if(!sqlQuery.exec()) {
                qDebug() << TA_LOCALSQLITE_MODEL << sqlQuery.lastError().text();
                return false;
            }

            const QString strCreateDetialTable = "CREATE TABLE \"DetailRst\" (\"name\" TEXT, \
            \"longname\" TEXT, \"time\" TIME, \"rst\" TEXT, \"desc\" TEXT, \"standard\" TEXT,\
            \"id\" INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL UNIQUE, \"parentId\" INTEGER)";
            sqlQuery.prepare(strCreateDetialTable);
            if(!sqlQuery.exec()) {
                qDebug() << TA_LOCALSQLITE_MODEL << sqlQuery.lastError().text();
                return false;
            }
        }

    }

    return true;
}

void OutputLocal::CloseOutput()
{
    if(m_dbSqlite.isOpen()) {
        m_dbSqlite.close();
    }
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
    m_out << QJsonDocument::fromVariant(joTP.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    // output to local sqlite database
    QString insertSQL = "insert into TestProject(name, longname, station, user, time, version, \
                        workingline, barcode, count) \
                        values('" + tpr.m_strName + "','" + tpr.m_strPath + "','" + tpr.m_strStation
                              + "','" + tpr.m_strUser + "','" + tpr.m_tStart.toString(TREEATE_DATETIME_FORMAT)
                              + "','" + tpr.m_strVersion + "','" + tpr.m_strLineName
                              + "','" + tpr.m_strBarcode + "'," + QString::number(tpr.m_nCount) + ")";
    QSqlQuery sqlQuery = QSqlQuery::QSqlQuery(m_dbSqlite);
    if(sqlQuery.isActive()) {
        QThread::msleep(200);
    }
    if(!sqlQuery.exec(insertSQL))
    {
        qDebug() << TA_LOCALSQLITE_MODEL << " Error:" << sqlQuery.lastError().text();
        return false;
    }

    m_mpPath.clear();

    int nId = sqlQuery.lastInsertId().toInt();
    qDebug() << "**** inserted OK ****" << nId;
    m_mpPath[tpr.m_strPath] = nId;

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

    // output to local sqlite database
    auto itor = m_mpPath.find(tpr.m_strPath);
    if(itor == m_mpPath.end())
    {
        qDebug() << TA_LOCALSQLITE_MODEL << "Failed to find " << tpr.m_strPath;
        return false;
    }

    QString strUpdate = "update TestProject SET rst = '" + TestResult::ToString(tpr.m_eRst)
            + "', spend = '" + tpr.m_tSpend.toString(TREEATE_TIME_FORMAT)
            + "', desc = '" + tpr.m_strDesc
            + "' where id = " + QString::number(itor.value());

    QSqlQuery sqlQuery = QSqlQuery::QSqlQuery(m_dbSqlite);
    if(sqlQuery.isActive()) {
        QThread::msleep(200);
    }
    if(!sqlQuery.exec(strUpdate))
    {
        qDebug() << TA_LOCALSQLITE_MODEL << strUpdate << " Error:" << sqlQuery.lastError().text();
        return false;
    }

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
    QJsonObject joTC;
    joTC.insert("time", tcr.m_tStart.toString(TREEATE_DATETIME_FORMAT));
    joTC.insert("name", tcr.m_strName);
    joTC.insert("longname", tcr.m_strPath);
    m_out << QJsonDocument::fromVariant(joTC.toVariantMap()).toJson(QJsonDocument::Compact) << "\r\n";

    // output to local sqlite database
    QString strParent = strPathParent;
    qDebug() << TA_LOCALSQLITE_MODEL << "----------" << strPathParent;
    QStringList lstParent = strParent.split("/");
    if(lstParent.count() < 3)   // e.g.  /TestDemo/TestSuite == 3
    {
        return false;
    }

    strParent = "/" + lstParent.at(1); // e.g. get the project name: '/TestDemo'
    auto itor = m_mpPath.find(strParent);
    if(itor == m_mpPath.end())
    {
        qDebug() << TA_LOCALSQLITE_MODEL << "Failed to find " << strParent;
        return false;
    }

    QString insertSQL = "insert into TestCase(name, longname, time, parentId) \
                        values('" + tcr.m_strName + "','" + tcr.m_strPath
                              + "','" + tcr.m_tStart.toString(TREEATE_DATETIME_FORMAT)
                              + "'," + QString::number(itor.value()) + ")";
    QSqlQuery sqlQuery = QSqlQuery::QSqlQuery(m_dbSqlite);
    if(sqlQuery.isActive()) {
        QThread::msleep(200);
    }
    if(!sqlQuery.exec(insertSQL))
    {
        qDebug() << TA_LOCALSQLITE_MODEL << insertSQL << " Error:" << sqlQuery.lastError().text();
        return false;
    }

    m_mpPath[tcr.m_strPath] = sqlQuery.lastInsertId().toInt();

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

    // output to local sqlite database
    auto itor = m_mpPath.find(tcr.m_strPath);
    if(itor == m_mpPath.end())
    {
        qDebug() << TA_LOCALSQLITE_MODEL << "Failed to find " << tcr.m_strPath;
        return false;
    }

    QString strUpdate = "update TestCase SET rst = '" + TestResult::ToString(tcr.m_eRst)
            + "', spend = '" + tcr.m_tSpend.toString(TREEATE_TIME_FORMAT)
            + "', desc = '" + tcr.m_strDesc
            + "' where id = " + QString::number(itor.value());

    QSqlQuery sqlQuery = QSqlQuery::QSqlQuery(m_dbSqlite);
    if(sqlQuery.isActive()) {
        QThread::msleep(200);
    }
    if(!sqlQuery.exec(strUpdate))
    {
        qDebug() << TA_LOCALSQLITE_MODEL << strUpdate << " Error:" <<sqlQuery.lastError().text();
        return false;
    }
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

    // output to local sqlite database
    auto itor = m_mpPath.find(strPathParent);
    if(itor == m_mpPath.end())
    {
        qDebug() << TA_LOCALSQLITE_MODEL << "Failed to find " << strPathParent;
        return false;
    }

    QString insertSQL = "insert into DetailRst(name, longname, rst, desc, time, standard, parentId) \
                        values('" + tdr.m_strName + "','" + tdr.m_strPath + "','" + TestResult::ToString(tdr.m_eRst)
                              + "','" + tdr.m_strDesc + "','" + tdr.m_tStart.toString(TREEATE_DATETIME_FORMAT)
                              + "','" + tdr.m_strStandard + "'," + QString::number(itor.value()) + ")";
    QSqlQuery sqlQuery = QSqlQuery::QSqlQuery(m_dbSqlite);
    if(sqlQuery.isActive()) {
        QThread::msleep(200);
    }
    if(!sqlQuery.exec(insertSQL))
    {
        qDebug() << TA_LOCALSQLITE_MODEL << insertSQL << " Error:" <<sqlQuery.lastError().text();
        return false;
    }

    return true;
}
