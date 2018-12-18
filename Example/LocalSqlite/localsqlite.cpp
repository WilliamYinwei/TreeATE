///
/// @brief         demo of the output to database model
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#include "localsqlite.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QCoreApplication>
#include <QDir>

#define TA_LOCALSQLITE_MODEL    "[dbDemo]: "
#define TREEATE_TIME_FORMAT     "HH:mm:ss.zzz"
#define TREEATE_DATETIME_FORMAT "yyyy-MM-dd HH:mm:ss.zzz"

extern "C" IOutput* CreateOutputInst()
{
    IOutput* pOutput = new LocalSqlite();
    return pOutput;
}

LocalSqlite::LocalSqlite()
{
    m_dbSqlite = QSqlDatabase::addDatabase("QSQLITE", "sql_demo_db");
    QString strPath = qApp->applicationDirPath() + "/dbDemo/";
    QDir dir(strPath);
    if(!dir.exists())  {
        dir.mkdir(strPath);
    }
    m_dbSqlite.setDatabaseName(strPath + "demo.db");
}

LocalSqlite::~LocalSqlite()
{
}

bool LocalSqlite::OpenOutput()
{
    if(!m_dbSqlite.isOpen()) {
        if(!m_dbSqlite.open()) {
            qDebug() << TA_LOCALSQLITE_MODEL << m_dbSqlite.lastError().text();
            return false;
        }

        QSqlQuery sqlQuery;
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

void LocalSqlite::CloseOutput()
{
    if(m_dbSqlite.isOpen()) {
        m_dbSqlite.close();
    }
}

bool LocalSqlite::Save(const QString &strFileName)
{
    Q_UNUSED(strFileName);
    return m_bOK;
}

bool LocalSqlite::OutputTestProjectRst(const TestProjectRst& tpr)
{
    m_bOK = true;
    QString insertSQL = "insert into TestProject(name, longname, station, user, time, version, \
                        workingline, barcode, count) \
                        values('" + tpr.m_strName + "','" + tpr.m_strPath + "','" + tpr.m_strStation
                              + "','" + tpr.m_strUser + "','" + tpr.m_tStart.toString(TREEATE_DATETIME_FORMAT)
                              + "','" + tpr.m_strVersion + "','" + tpr.m_strLineName
                              + "','" + tpr.m_strBarcode + "'," + QString::number(tpr.m_nCount) + ")";
    QSqlQuery sqlQuery;
    if(!sqlQuery.exec(insertSQL))
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << insertSQL << " Error:" << sqlQuery.lastError().text();
        return false;
    }

    m_mpPath.clear();

    int nId = sqlQuery.lastInsertId().toInt();
    qDebug() << "**** inserted OK ****" << nId;
    m_mpPath[tpr.m_strPath] = nId;
    return true;
}

bool LocalSqlite::UpdateTestProjectRst(const TestProjectRst& tpr)
{
    auto itor = m_mpPath.find(tpr.m_strPath);
    if(itor == m_mpPath.end())
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << "Failed to find " << tpr.m_strPath;
        return false;
    }

    QString strUpdate = "update TestProject SET rst = '" + TestResult::ToString(tpr.m_eRst)
            + "', spend = '" + tpr.m_tSpend.toString(TREEATE_TIME_FORMAT)
            + "', desc = '" + tpr.m_strDesc
            + "' where id = " + QString::number(itor.value());

    QSqlQuery sqlQuery;
    if(!sqlQuery.exec(strUpdate))
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << strUpdate << " Error:" << sqlQuery.lastError().text();
        return false;
    }
    return true;
}

bool LocalSqlite::OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent)
{
    Q_UNUSED(tsr);
    Q_UNUSED(strPathParent);
    return true;
}

bool LocalSqlite::UpdateTestSuiteRst(const TestSuiteRst& tsr)
{
    Q_UNUSED(tsr);
    return true;
}

bool LocalSqlite::OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent)
{
    QString strParent = strPathParent;
    qDebug() << TA_LOCALSQLITE_MODEL << "----------" << strPathParent;
    QStringList lstParent = strParent.split("/");
    if(lstParent.count() < 3)   // e.g.  /TestDemo/TestSuite == 3
    {
        m_bOK = false;
        return false;
    }

    strParent = "/" + lstParent.at(1); // e.g. get the project name: '/TestDemo'
    auto itor = m_mpPath.find(strParent);
    if(itor == m_mpPath.end())
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << "Failed to find " << strParent;
        return false;
    }

    QString insertSQL = "insert into TestCase(name, longname, time, parentId) \
                        values('" + tcr.m_strName + "','" + tcr.m_strPath
                              + "','" + tcr.m_tStart.toString(TREEATE_DATETIME_FORMAT)
                              + "'," + QString::number(itor.value()) + ")";
    QSqlQuery sqlQuery;
    if(!sqlQuery.exec(insertSQL))
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << insertSQL << " Error:" << sqlQuery.lastError().text();
        return false;
    }

    m_mpPath[tcr.m_strPath] = sqlQuery.lastInsertId().toInt();
    return true;
}

bool LocalSqlite::UpdateTestCaseRst(const TestCaseRst& tcr)
{
    auto itor = m_mpPath.find(tcr.m_strPath);
    if(itor == m_mpPath.end())
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << "Failed to find " << tcr.m_strPath;
        return false;
    }

    QString strUpdate = "update TestCase SET rst = '" + TestResult::ToString(tcr.m_eRst)
            + "', spend = '" + tcr.m_tSpend.toString(TREEATE_TIME_FORMAT)
            + "', desc = '" + tcr.m_strDesc
            + "' where id = " + QString::number(itor.value());

    QSqlQuery sqlQuery;
    if(!sqlQuery.exec(strUpdate))
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << strUpdate << " Error:" <<sqlQuery.lastError().text();
        return false;
    }
    return true;
}

bool LocalSqlite::OutputDetailRst(const TestResult& tdr, const QString& strPathParent)
{
    auto itor = m_mpPath.find(strPathParent);
    if(itor == m_mpPath.end())
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << "Failed to find " << strPathParent;
        return false;
    }

    QString insertSQL = "insert into DetailRst(name, longname, rst, desc, time, standard, parentId) \
                        values('" + tdr.m_strName + "','" + tdr.m_strPath + "','" + TestResult::ToString(tdr.m_eRst)
                              + "','" + tdr.m_strDesc + "','" + tdr.m_tStart.toString(TREEATE_DATETIME_FORMAT)
                              + "','" + tdr.m_strStandard + "'," + QString::number(itor.value()) + ")";
    QSqlQuery sqlQuery;
    if(!sqlQuery.exec(insertSQL))
    {
        m_bOK = false;
        qDebug() << TA_LOCALSQLITE_MODEL << insertSQL << " Error:" <<sqlQuery.lastError().text();
        return false;
    }

    return true;
}
