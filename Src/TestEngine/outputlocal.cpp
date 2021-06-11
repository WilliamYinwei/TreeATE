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
#define TA_TRY_TIME     15

OutputLocal::OutputLocal()
{
    m_rootId = -1;

    if(QSqlDatabase::contains(TA_SQLITE_NAME)) {
        m_dbSqlite = QSqlDatabase::database(TA_SQLITE_NAME);
    }
    else {
        m_dbSqlite = QSqlDatabase::addDatabase("QSQLITE", TA_SQLITE_NAME);
        QString strPath = qApp->applicationDirPath() + "/db/";
        QDir dir(strPath);
        if(!dir.exists())  {
            dir.mkdir(strPath);
        }
        m_dbSqlite.setDatabaseName(strPath + "treeate.sqlite");
    }
    m_dbSqlite.setConnectOptions("QSQLITE_BUSY_TIMEOUT=200;");
}

bool OutputLocal::OpenOutput()
{
    // output to local sqlite database
    if(!m_dbSqlite.isOpen()) {
        if(!m_dbSqlite.open()) {
            qDebug() << TA_LOCALSQLITE_MODEL << m_dbSqlite.lastError().text();
            return false;
        }

        m_dbSqlite.exec("PRAGMA synchronous = OFF");
        m_dbSqlite.exec("PRAGMA journal_mode = MEMORY");

        QSqlQuery sqlQuery = QSqlQuery(m_dbSqlite);
        QStringList lsTables = m_dbSqlite.tables();
        if(lsTables.count() <= 0) {
            const QString strCreateTables = "CREATE TABLE \"TestProject\" (\"name\" TEXT,\
            \"longname\" TEXT, \"station\" TEXT, \"workingline\" TEXT, \"user\" TEXT, \
            \"time\" TIME, \"barcode\" TEXT, \"count\" INTEGER, \"id\" INTEGER \
            PRIMARY KEY AUTOINCREMENT UNIQUE, \"rst\" TEXT, \"spend\" TEXT, \"desc\" TEXT, \
            \"version\" TEXT, \"uploaded\" INTEGER)";
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
    if(strFileName != TA_UPLOAD_RST || m_rootId == -1)
        return true;

    // tag the local result if success to server
    return uploadTestPrjRst(m_rootId);
}

bool OutputLocal::uploadTestPrjRst(const int id)
{
    QSqlQuery sqlQuery = QSqlQuery(m_dbSqlite);
    QString strSQL = "UPDATE TestProject SET uploaded=" + QString::number(TA_UPLOAD_TRUE)
            + " WHERE id=" + QString::number(id);
    if(!sqlQuery.exec(strSQL)) {
        qDebug() << TA_LOCALSQLITE_MODEL << strSQL << " Error:" <<sqlQuery.lastError().text();
        return false;
    }
    sqlQuery.finish();
    return true;
}

bool OutputLocal::OutputTestProjectRst(const TestProjectRst& tpr)
{
    // output to local sqlite database
    QString insertSQL = "insert into TestProject(name, longname, station, user, time, version, \
                        workingline, barcode, count, uploaded) \
                        values('" + tpr.m_strName + "','" + tpr.m_strPath + "','" + tpr.m_strStation
                              + "','" + tpr.m_strUser + "','" + tpr.m_tStart.toString(TREEATE_DATETIME_FORMAT)
                              + "','" + tpr.m_strVersion + "','" + tpr.m_strLineName
                              + "','" + tpr.m_strBarcode + "'," + QString::number(tpr.m_nCount) + ","
                               + QString::number(TA_UPLOAD_FALSE) + ")";
    QSqlQuery sqlQuery = QSqlQuery(m_dbSqlite);

    int i = 0;
    while(!sqlQuery.exec(insertSQL) && i < TA_TRY_TIME) i++;

    if(i >= TA_TRY_TIME) {
        qDebug() << TA_LOCALSQLITE_MODEL << insertSQL << " Error:" <<sqlQuery.lastError().text();
        sqlQuery.finish();
        return false;
    }

    m_mpPath.clear();

    int nId = sqlQuery.lastInsertId().toInt();
    qDebug() << "**** inserted OK ****" << nId;
    m_mpPath[tpr.m_strPath] = nId;
    sqlQuery.finish();

    return true;
}

bool OutputLocal::UpdateTestProjectRst(const TestProjectRst& tpr)
{
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

    QSqlQuery sqlQuery = QSqlQuery(m_dbSqlite);

    int i = 0;
    while(!sqlQuery.exec(strUpdate) && i < TA_TRY_TIME) i++;
    if(i >= TA_TRY_TIME) {
        qDebug() << TA_LOCALSQLITE_MODEL << strUpdate << " Error:" <<sqlQuery.lastError().text();
        sqlQuery.finish();
        return false;
    }
    sqlQuery.finish();

    return true;
}

bool OutputLocal::OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent)
{
    Q_UNUSED(tsr)
    Q_UNUSED(strPathParent)
    return true;
}

bool OutputLocal::UpdateTestSuiteRst(const TestSuiteRst& tsr)
{
    Q_UNUSED(tsr)
    return true;
}

bool OutputLocal::OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent)
{
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
    QSqlQuery sqlQuery = QSqlQuery(m_dbSqlite);

    int i = 0;
    while(!sqlQuery.exec(insertSQL) && i < TA_TRY_TIME) i++;

    if(i >= TA_TRY_TIME) {
        qDebug() << TA_LOCALSQLITE_MODEL << insertSQL << " Error:" <<sqlQuery.lastError().text();
        sqlQuery.finish();
        return false;
    }

    m_mpPath[tcr.m_strPath] = sqlQuery.lastInsertId().toInt();
    sqlQuery.finish();

    return true;
}

bool OutputLocal::UpdateTestCaseRst(const TestCaseRst& tcr)
{
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

    QSqlQuery sqlQuery = QSqlQuery(m_dbSqlite);

    int i = 0;
    while(!sqlQuery.exec(strUpdate) && i < TA_TRY_TIME) i++;
    if(i >= TA_TRY_TIME) {
        qDebug() << TA_LOCALSQLITE_MODEL << strUpdate << " Error:" <<sqlQuery.lastError().text();
        sqlQuery.finish();
        return false;
    }
    sqlQuery.finish();
    return true;
}

bool OutputLocal::OutputDetailRst(const TestResult& tdr, const QString& strPathParent)
{
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
    QSqlQuery sqlQuery = QSqlQuery(m_dbSqlite);

    int i = 0;
    while(!sqlQuery.exec(insertSQL) && i < TA_TRY_TIME) i++;

    if(i >= TA_TRY_TIME) {
        qDebug() << TA_LOCALSQLITE_MODEL << insertSQL << " Error:" <<sqlQuery.lastError().text();
        sqlQuery.finish();
        return false;
    }
    sqlQuery.finish();
    return true;
}

bool OutputLocal::UploadResultTo(IOutput* pOutput)
{
    if(NULL == pOutput) {
        cerr << "No output to server model." << endl;
        return false;
    }

    QSqlQuery sqlQuery = QSqlQuery(m_dbSqlite);

    QString strSQL = "SELECT id, name, longname, station, workingline," \
                     "user, time, barcode, count, rst, spend, desc, version" \
                     " FROM TestProject WHERE uploaded=" + QString::number(TA_UPLOAD_FALSE);
    if(!sqlQuery.exec(strSQL)) {
        qDebug() << TA_LOCALSQLITE_MODEL << strSQL << " Error:" <<sqlQuery.lastError().text();
        return false;
    }

    const int nRows = sqlQuery.numRowsAffected();
    if(nRows <= 0) {
        return true;
    }

    QSqlQuery sqlQueryCase = QSqlQuery(m_dbSqlite);
    QSqlQuery sqlQueryDetail = QSqlQuery(m_dbSqlite);

    cout << "Commit results (" << nRows << ")";

    bool bOK = true;
    while (sqlQuery.next()) {
        const int nId = sqlQuery.boundValue("id").toInt();

        TestProjectRst tpr;
        tpr.m_nCount = sqlQuery.boundValue("count").toInt();
        tpr.m_strPath = sqlQuery.boundValue("longname").toString();
        tpr.m_strName = sqlQuery.boundValue("name").toString();
        tpr.m_strBarcode = sqlQuery.boundValue("barcode").toString();
        tpr.m_strStation = sqlQuery.boundValue("station").toString();
        tpr.m_tStart = QDateTime::fromString(sqlQuery.boundValue("time").toString(), TREEATE_DATETIME_FORMAT);
        tpr.m_strUser = sqlQuery.boundValue("user").toString();
        tpr.m_strVersion = sqlQuery.boundValue("version").toString();
        tpr.m_strLineName = sqlQuery.boundValue("workingline").toString();
        if(!pOutput->OutputTestProjectRst(tpr)) continue;

        // Testcase
        strSQL = "SELECT id, name, longname, rst, desc, spend, time FROM TestCase WHERE parentId=" + QString::number(nId);
        if(!sqlQueryCase.exec(strSQL)) {
            qDebug() << TA_LOCALSQLITE_MODEL << strSQL << " Error:" << sqlQueryCase.lastError().text();
            continue;
        }

        while(sqlQueryCase.next()) {
            TestCaseRst tcr;
            tcr.m_strPath = sqlQueryCase.boundValue("longname").toString();
            tcr.m_strName = sqlQueryCase.boundValue("name").toString();
            tcr.m_tStart = QDateTime::fromString(sqlQueryCase.boundValue("time").toString(), TREEATE_DATETIME_FORMAT);
            if(!pOutput->OutputTestCaseRst(tcr, tpr.m_strPath)) continue;

            // detail
            strSQL = "SELECT name, longname, rst, desc, spend, standard FROM DetailRst WHERE parentId=" + QString::number(nId);
            if(!sqlQueryDetail.exec(strSQL)) {
                qDebug() << TA_LOCALSQLITE_MODEL << strSQL << " Error:" << sqlQueryDetail.lastError().text();
                continue;
            }

            while(sqlQueryDetail.next()) {
                TestResult rst;
                rst.m_strPath = sqlQueryDetail.boundValue("longname").toString();
                rst.m_strName = sqlQueryDetail.boundValue("name").toString();
                rst.m_eRst = TestResult::FromString(sqlQueryDetail.boundValue("rst").toString());
                rst.m_tStart = QDateTime::fromString(sqlQueryDetail.boundValue("time").toString(),
                                                     TREEATE_DATETIME_FORMAT);
                rst.m_strDesc = sqlQueryDetail.boundValue("desc").toString();
                rst.m_strStandard = sqlQueryDetail.boundValue("standard").toString();
                (void)pOutput->OutputDetailRst(rst, rst.m_strPath);
            }

            // update for testcase
            tcr.m_eRst = TestResult::FromString(sqlQueryCase.boundValue("rst").toString());
            tcr.m_tSpend = QTime::fromString(sqlQueryCase.boundValue("spend").toString());
            tcr.m_strDesc = sqlQueryCase.boundValue("desc").toString();
            if(!pOutput->UpdateTestCaseRst(tcr)) continue;
        }

        // update for testproject
        tpr.m_strDesc = sqlQuery.boundValue("desc").toString();
        tpr.m_eRst = TestResult::FromString(sqlQuery.boundValue("rst").toString());
        tpr.m_tSpend = QTime::fromString(sqlQuery.boundValue("spend").toString());
        if(!pOutput->UpdateTestProjectRst(tpr)) continue;

        if(pOutput->Save("")) {
            uploadTestPrjRst(nId);
        }
        else {
            bOK = false;
        }
        cout << ".";
    }
    cout << endl;

    return bOK;
}
