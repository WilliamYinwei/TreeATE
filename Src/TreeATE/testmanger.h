///
/// @brief         Test perform manager. load test items,
///                start the testing or stop the testing.
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TESTMANGER_H
#define TESTMANGER_H

#include "testproccess.h"
#include "projectmgr.h"

#include <QObject>
#include <QTreeWidget>
#include <QMap>
#include <QTemporaryFile>
#include <QTextBrowser>
#include <QList>
#include <QDockWidget>
#include <QProgressBar>


#define TA_COLUMN_UNIT_NAME     0
#define TA_COLUMN_UNIT_PATH     1
#define TA_COLUMN_UNIT_DESC     2
#define TA_COLUMN_TEST_STATUS   3
#define TA_COLUMN_TEST_RST      4
#define TA_COLUMN_TEST_STAND    5
#define TA_COLUMN_START_TIME    6
#define TA_COLUMN_SPEND_TIME    7

#define TA_ERR_UPLOAD_HRST      -9
#define TA_LIST_OK          10000
#define TA_UPLOAD_OK        10001

#define TA_PROGRESS_BC_FAIL "QProgressBar::chunk { background-color: rgb(255, 100, 100);margin:0.5px;}"
#define TA_PROGRESS_BC_EXCE "QProgressBar::chunk { background-color: rgb(255, 191, 0);margin:0.5px;}"
#define TA_PROGRESS_BC_OK   "QProgressBar::chunk { background-color: rgb(0, 255, 100);margin:0.5px;}"

#define TA_STATUS_BC_FAIL   "background-color: rgb(255, 0, 10); font: 56pt \"Arial\"; color: rgb(255, 255, 255);"
#define TA_STATUS_BC_OK     "background-color: rgb(0, 170, 10); font: 56pt \"Arial\"; color: rgb(255, 255, 255);"
#define TA_STATUS_BC_EXCE   "background-color: rgb(255, 191, 0);font: 56pt \"Arial\"; color: rgb(140, 0, 0);"
#define TA_STATUS_BC_NA     "font: 56pt \"Arial\";"

enum eTestStatus{
    Unload = 0,
    Loading = 1,
    Ready = 2,
    Testing,
    Pass,
    Failed,
    Exception
};


class TestManger : public QObject
{
    Q_OBJECT
public:
    explicit TestManger(QTreeWidget* pWidget, QTextBrowser* pBrower, QObject *parent = 0);
    virtual ~TestManger();

    bool LoadTestUnits(const QString& strPrjFile, QString &strTitle);
    void UnloadUnits();
    bool IsLoaded();
    void SetCheckboxEnable(bool bEnable);

    QStringList SeletedPrj();
    int StartTest(const QString& strWorkLine, const QString& strStation,
                  const QString& strUser,
                  const QMap<QString, QString> &mapSN);
    int StartOneTest(const QString& strWorkLine, const QString& strStation,
                      const QString& strUser,
                      const QMap<QString, QString> &mapSN, const QString& who);
    void StopTest();
    QList<QDockWidget*> GetDockWidgetList();
    void SpreadUnitItems();
    void ShrinkUnitItems();
    ProjectMgr& GetMgr();
    void SetPrjOption(const QString &prjName);
    bool Exit();
    QString GetPrjPath();
    void ActiveWindows(int n);

private:
    void addUnitItems(const QString& who, const QJsonObject& objData);
    void startItemsData(const QString& who, const QJsonObject& objData, quint32 nCnt);
    void updateItemsData(const QString& who, const QJsonObject& objData, quint32 nCnt);
    void detailItemsData(const QString& who, const QJsonObject& objData, quint32 nCnt);
    void clearTempFile();
    QDockWidget* createLoopProgress(const QStringList& lstPrj);

signals:
    void updateTotalStatus(eTestStatus, int n);
    void startLoading(int nCnt);
    void startTesting(const QString& who);
    void statusHisRst(eTestStatus);

private slots:
    void on_updateTestItemStatus(const QString& who,
                                 const QJsonObject& objData, quint32 nCnt);
    void on_testEngineFinished(const QString& who, int nCode);
    void on_startTesting(const QString& who);

private:
    QWidget*        m_parent;
    TestProcess*                    m_pUploadRst;
    QMap<QString, TestProcess*>     m_prcTestEngine;
    QList<QTemporaryFile*>          m_lstTempFile;
    QList<QDockWidget*>             m_lstDockWidget;
    QString         m_strPrjName;
    ProjectMgr      m_prjMgr;
    QMap<QString, int>          m_whoPrj;
    QMap<QString, eTestStatus>  m_mpPrjTestStatus;
    eTestStatus     m_rstLevel;     // total result level
    quint32         m_nTestingCnt;
    QTreeWidget*    m_treeWidget;
    QTextBrowser*   m_textBrower;
    QString         m_strPrjPath;
    QProcessEnvironment m_env;
    bool            m_bIsLoaded;
    QMap<QString, QStringList>  m_mapLstPara;
    QMap<QString, qint32>      m_mapLoopCount;
    QDockWidget*    m_dockLoopProgress;
    QMap<QString, QProgressBar*> m_mapLoopProgress;
    bool    m_bCheckboxEnable;
};

#endif // TESTMANGER_H
