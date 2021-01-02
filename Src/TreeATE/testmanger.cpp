///
/// @brief         Test perform manager. load test items,
///                start the testing or stop the testing.
/// @author        David Yin  2018-12 willage.yin@163.com-12  willage.yin@163.com
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "testmanger.h"
#include "statusdelegate.h"
#include "prjoptdlg.h"
#include "tadefine.h"

#include <QFileInfo>
#include <QJsonDocument>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QDir>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMdiSubWindow>

#include "tatreewidget.h"

TestManger::TestManger(QMdiArea *pMdi, QTextBrowser *pBrower, QObject *parent): QObject(parent)
{
    m_mdiArea = pMdi;
    m_parent = (QWidget*)parent;
    m_logTextBrower = pBrower;
    m_bIsLoaded = false;
    m_dockLoopProgress = NULL;
    m_pUploadRst = NULL;
    SetCheckboxEnable(false);

    connect(this, SIGNAL(startTesting(QString)), this, SLOT(on_startTesting(QString)), Qt::QueuedConnection);
}

TestManger::~TestManger()
{
    UnloadUnits();
}

QList<QDockWidget*> TestManger::GetDockWidgetList()
{
    return m_lstDockWidget;
}

void TestManger::ActiveWindows(int n)
{
    if(n >= 0 && n < m_lstDockWidget.count()) {
        m_lstDockWidget.at(n)->raise();
    }
}

QDockWidget* TestManger::createLoopProgress(const QStringList& lstPrj)
{
    QDockWidget* dockWidget = new QDockWidget(m_parent);
    dockWidget->setWindowTitle(tr("Loop progress"));
    dockWidget->setLayoutDirection(Qt::LayoutDirectionAuto);
    QWidget *dockWidgetContents = new QWidget(dockWidget);
    dockWidgetContents->setContentsMargins(0, 0, 0, 0);
    dockWidget->setWidget(dockWidgetContents);

    QHBoxLayout* pHLayout = new QHBoxLayout(dockWidgetContents);
    pHLayout->setDirection(QBoxLayout::LeftToRight);
    pHLayout->setContentsMargins(6, 6, 6, 6);


    foreach(QString name, lstPrj) {
        QVBoxLayout* pVLayout = new QVBoxLayout(dockWidgetContents);
        pVLayout->setDirection(QBoxLayout::TopToBottom);
        pVLayout->setContentsMargins(0, 0, 0, 0);
        pHLayout->addLayout(pVLayout);

        QLabel* labelPrjName = new QLabel(dockWidgetContents);
        labelPrjName->setText(name);
        labelPrjName->setAlignment(Qt::AlignHCenter);
        QProgressBar* prog = new QProgressBar(dockWidgetContents);
        prog->setRange(0, 100);
        prog->setValue(0);
        prog->setOrientation(Qt::Vertical);
        prog->setAlignment(Qt::AlignHCenter);

        pVLayout->addWidget(labelPrjName);
        pVLayout->addWidget(prog);
        m_mapLoopProgress.insert(name, prog);
    }
    return dockWidget;
}

bool TestManger::LoadTestUnits(const QString& strPrjFile, QString& strTitle)
{
    m_strPrjName = strPrjFile;
    QFileInfo infoPrj(strPrjFile);

    m_logTextBrower->append("Loading: " + strPrjFile);
    if(!m_prjMgr.LoadProjectFile(strPrjFile)) {
        m_logTextBrower->append(m_prjMgr.getLastError());
        return false;
    }

    UnloadUnits();

    m_env = QProcessEnvironment::systemEnvironment();
    m_env.insert("PATH", m_env.value("PATH") + ";" + infoPrj.path() + "/libs/;");

    // importand, change the current app working directory
    QDir::setCurrent(infoPrj.path());

    QStringList lstName = m_prjMgr.getTestPrjName();

    m_dockLoopProgress = createLoopProgress(lstName);
    m_lstDockWidget.append(m_dockLoopProgress);

    // upload history results
    if(NULL == m_pUploadRst) {
        m_pUploadRst = new TestProcess(tr("Upload histroy results"), (QObject*)m_parent);

        connect(m_pUploadRst, SIGNAL(testEngineFinished(QString, int)), this,
                SLOT(on_testEngineFinished(QString, int)));
        m_lstDockWidget.append(m_pUploadRst->getDockWidget());
    }

    m_pUploadRst->start("TestEngine", QStringList() << "uploadrst");

    // loading test projects
    strTitle = m_prjMgr.getPrjName() + " - " + m_prjMgr.getPrjDescription();
    foreach (auto strName, lstName) {

        m_logTextBrower->append("Loading: " + strName);
        TestProcess* pTestPrj = new TestProcess(strName, (QObject*)m_parent);
        TATreeWidget* pTW = new TATreeWidget();
        QMdiSubWindow* pSubWin = m_mdiArea->addSubWindow(pTW);
        if(pSubWin) {
            pSubWin->setWindowTitle(strName);
            // unallow closed
            pSubWin->setWindowFlags(Qt::CustomizeWindowHint |
                                    Qt::WindowMinimizeButtonHint |
                                    Qt::WindowMaximizeButtonHint);
            pSubWin->show();    // must be show
        }

        connect(pTestPrj, SIGNAL(updateTestItemStatus(QString,QJsonObject)), this,
                SLOT(on_updateTestItemStatus(QString,QJsonObject)));
        connect(pTestPrj, SIGNAL(testEngineFinished(QString, int)), this,
                SLOT(on_testEngineFinished(QString, int)));

        m_prcTestEngine.insert(strName, pTestPrj);
        m_mpPrjTestStatus.insert(strName, Unload);  // init the status of testing

        QDockWidget* pDockTest = pTestPrj->getDockWidget();

        m_lstDockWidget.append(pDockTest);

        QStringList lstPara;
        lstPara << infoPrj.absolutePath() + "/" + m_prjMgr.getTestPrjFileName(strName)
                << "-l";
        pTestPrj->setProcessEnvironment(m_env);
        pTestPrj->start("TestEngine", lstPara);
        pTestPrj->waitForFinished(1000);
    }

    m_bIsLoaded = true;
    return true;
}

bool TestManger::IsLoaded()
{
    return m_bIsLoaded;
}

QString TestManger::GetPrjPath()
{
    QFileInfo fileInfo(m_strPrjName);
    return fileInfo.absolutePath();
}

QStringList TestManger::SeletedPrj()
{
    QStringList lstSel;
    foreach(QMdiSubWindow* pSubWin, m_mdiArea->subWindowList())
    {
        if(pSubWin) {
            TATreeWidget* pTreeWin = (TATreeWidget*)pSubWin->widget();
            if(pTreeWin) lstSel << pTreeWin->seletedPrj();
        }
    }

    return lstSel;
}

bool TestManger::IsTesting(const QString& who)
{
    auto itorStatus = m_mapTesting.find(who);
    if(itorStatus != m_mapTesting.end()) {
        return itorStatus.value();
    }
    return false;
}

void TestManger::on_startTesting(const QString& who)
{
    if(IsTesting(who)) {
        qDebug() << "It's testing now, don't start test again.";
        return;
    }

    auto itor = m_prcTestEngine.find(who);
    if(itor == m_prcTestEngine.end())
        return;

    TATreeWidget* pTree = findTreeWidget(who);
    if(pTree) pTree->clearPrjStatus();

    itor.value()->setProcessEnvironment(m_env);
    itor.value()->start("TestEngine", m_mapLstPara[who]);
    m_mapTesting[who] = itor.value()->waitForStarted(3000);
    qDebug() << "-------------------------Start Test for: " + who;
}

int TestManger::StartOneTest(const QString& strWorkLine, const QString& strStation,
                  const QString& strUser,
                  const QMap<QString, QString> &mapSN, const QString& who)
{
    int nSelectedCnt = 0;
    QMap<QString, TestProcess*>::iterator itor = m_prcTestEngine.find(who);
    if(itor == m_prcTestEngine.end())
        return nSelectedCnt;

    QTemporaryFile* tempFile = new QTemporaryFile();
    m_lstTempFile.append(tempFile);
    if(!tempFile->open())
        return nSelectedCnt;

    QFileInfo infoPrj(m_strPrjName);
    TATreeWidget* pTree = findTreeWidget(who);
    if(pTree) nSelectedCnt = pTree->seletedUnitItems(tempFile, m_bCheckboxEnable);
    tempFile->close();

    if(0 == nSelectedCnt)
        return nSelectedCnt;

    // public parameter
    QTemporaryFile* tempParaFile = new QTemporaryFile();
    if(!tempParaFile->open())
        return nSelectedCnt;

    QJsonObject objPara = m_prjMgr.getTestProjPara(who);
    tempParaFile->write(QJsonDocument::fromVariant(objPara.toVariantMap()).toJson());
    tempParaFile->close();

    QStringList lstPara;
    lstPara << infoPrj.absolutePath() + "/" + m_prjMgr.getTestPrjFileName(who)
            << "-m"
            << tempFile->fileName()
            << (m_prjMgr.getFailedToStop() ? "-S" : "")
            << "-s" << strStation
            << "-w" << strWorkLine
            << "-u" << strUser
            << "-b" << mapSN[who]
            << "-p"
            << tempParaFile->fileName();
    m_mapLstPara.insert(who, lstPara);

    emit startTesting(who);
    return nSelectedCnt;
}

int TestManger::StartTest(const QString &strWorkLine, const QString &strStation,
                          const QString &strUser,
                          const QMap<QString, QString> &mapSN)
{
    int nSelectedCnt = 0;
    m_nTestingCnt = 0;

    clearTabIcon();
    clearTempFile();

    int nCnt = m_prjMgr.getLoopCounts();
    if(nCnt > 1) {
        if(QMessageBox::Yes != QMessageBox::question(m_parent, tr("Question"),
                                                  tr("It's loop test, are you sure?")))
        {
            return nSelectedCnt;
        }
    }

    for(QMap<QString, TestProcess*>::iterator itor = m_prcTestEngine.begin();
        itor != m_prcTestEngine.end(); ++itor) {
        QString who = itor.key();

        m_mapLoopCount.insert(who, nCnt);
        m_mapLoopProgress[who]->setRange(0, nCnt);

        nSelectedCnt += StartOneTest(strWorkLine, strStation, strUser, mapSN, who);
    }

    return nSelectedCnt;
}

void TestManger::StopTest()
{
    for(QMap<QString, TestProcess*>::iterator itor = m_prcTestEngine.begin();
        itor != m_prcTestEngine.end(); ++itor) {
        TestProcess* pProcess = itor.value();
        pProcess->write("stop\r\n");
        pProcess->waitForBytesWritten(100);
    }
}

void TestManger::clearTempFile()
{
    foreach(auto itTemp, m_lstTempFile) {
        if(itTemp) {
            delete itTemp;
        }
    }
    m_lstTempFile.clear();
    m_mapLstPara.clear();
    m_mapLoopCount.clear();
    m_mapTesting.clear();
}

void TestManger::UnloadUnits()
{
    clearTempFile();

    m_rstLevel = Unload;
    m_mpPrjTestStatus.clear();

    if(m_mdiArea) {
        m_mdiArea->closeAllSubWindows();
    }

    if(m_pUploadRst) {
        delete m_pUploadRst;
        m_pUploadRst = NULL;
    }

    for(QMap<QString, TestProcess*>::iterator itor = m_prcTestEngine.begin();
        itor != m_prcTestEngine.end(); ++itor) {
        delete itor.value();
    }
    m_prcTestEngine.clear();

    m_lstDockWidget.clear();
    m_bIsLoaded = false;

    if(m_dockLoopProgress) {
        delete m_dockLoopProgress;
        m_dockLoopProgress = NULL;
    }    
}

void TestManger::clearTabIcon()
{
    QList<QTabBar*> tabBarLst = m_mdiArea->findChildren<QTabBar*>();
    if(tabBarLst.size() == 1) {
        QTabBar* tabBar = tabBarLst.at(0);
        if(tabBar) {
            for(int i = 0; i < tabBar->count(); i++) {
                tabBar->setTabTextColor(i, QColor(255,255,255));
                tabBar->setTabIcon(i, QIcon());
            }
        }
    }
}

void TestManger::setTabIconUUT(const QString& who, const QIcon& icon, const QColor& textColor)
{
    QList<QTabBar*> tabBarLst = m_mdiArea->findChildren<QTabBar*>();
    if(tabBarLst.size() == 1) {
        QTabBar* tabBar = tabBarLst.at(0);
        if(tabBar) {
            for(int i = 0; i < tabBar->count(); i++) {
                if(tabBar->tabText(i) == who) {
                    tabBar->setTabTextColor(i, textColor);
                    tabBar->setTabIcon(i, icon);
                    break;
                }
            }
        }
    }
}

void TestManger::on_updateTestItemStatus(const QString& who,
                                 const QJsonObject& objData)
{
    if(objData.isEmpty())
        return;

    QString status = objData["type"].toString();
    if(status == "commit") {
        //emit startLoading(objData["count"].toInt());
    }
    else if(status == "progress") {
        //m_rstLevel = Loading;
        //emit updateTotalStatus(Loading, objData["count"].toInt());
    }
    else if(status == "list") {
        addUnitItems(who, objData);
        m_rstLevel = Loading;
        emit updateTotalStatus(Loading, 0);
    }
    else if(status == "start") {
        m_rstLevel = Testing;
        startItemsData(who, objData);
        emit updateTotalStatus(Testing, 0);
    }
    else if(status == "update") {
        m_rstLevel = Testing;
        updateItemsData(who, objData);
        emit updateTotalStatus(Testing, ++m_nTestingCnt);
    }
    else if(status == "detail") {
        detailItemsData(who, objData);
    }
    else if(status == "over") {
        eTestStatus curLvl = Pass;

        QString strStatus;
        TATreeWidget* pTree = findTreeWidget(who);
        if(pTree) strStatus = pTree->currentPrjStatus();
        if(strStatus == TA_STATUS_EXCE) {
            curLvl = Exception;
        }
        else if(strStatus == TA_STATUS_FAIL) {
            curLvl = Failed;
        }
        else if(strStatus == TA_STATUS_PASS) {
            curLvl = Pass;
        }
        if(m_rstLevel < curLvl) {
            m_rstLevel = curLvl;
        }
        emit updateTotalStatus(m_rstLevel, 0);
    }
}

void TestManger::on_testEngineFinished(const QString& who, int nCode)
{
    qDebug() << who << " --- TestManger::on_testEngineFinished: " << nCode;
    m_mapTesting[who] = false;
    TATreeWidget* pTree = findTreeWidget(who);
    if(pTree) pTree->refreshExpandAll();
    if(nCode == TA_LIST_OK) {
        bool bReady = true;
        m_mpPrjTestStatus[who] = Ready;
        for (QMap<QString, eTestStatus>::const_iterator itor = m_mpPrjTestStatus.constBegin();
             itor != m_mpPrjTestStatus.end(); ++itor) {
            if(itor.value() != Ready) {
                bReady = false;
                break;
            }
        }

        if(bReady)  { // all ready
            m_rstLevel = Ready;
            emit updateTotalStatus(Ready, 0);
        }
        return;
    }
    else if(nCode == TA_UPLOAD_OK) {
        emit statusHisRst(Pass);
        return;
    }
    else if(nCode == TA_ERR_UPLOAD_HRST) {
        emit statusHisRst(Failed);
        return;
    }

    QString strStatus;
    if(pTree) strStatus = pTree->currentPrjStatus();
    QString strPgBC = TA_PROGRESS_BC_OK;
    QIcon icTabBC;
    QColor tabTextColor(255, 255, 255);
    if(strStatus == TA_STATUS_EXCE) {
        strPgBC = TA_PROGRESS_BC_EXCE;
        icTabBC = QIcon(QPixmap(":/exce.png"));
        tabTextColor = TA_TAB_STATUS_EXCE;
    }
    else if(strStatus == TA_STATUS_FAIL) {
        strPgBC = TA_PROGRESS_BC_FAIL;
        icTabBC = QIcon(QPixmap(":/ng.png"));
        tabTextColor = TA_TAB_STATUS_FAIL;
    }
    else if(strStatus == TA_STATUS_PASS) {
        strPgBC = TA_PROGRESS_BC_OK;
        icTabBC = QIcon(QPixmap(":/ok.png"));
        tabTextColor = TA_TAB_STATUS_OK;
    }

    // update the SubWindow's TabBar icon or color
    setTabIconUUT(who, icTabBC, tabTextColor);

    if(nCode) {
        m_rstLevel = Exception;
        emit updateTotalStatus(Exception, 0);
        return;
    }

    // for loop testing
    auto itor = m_mapLoopCount.find(who);
    if(itor != m_mapLoopCount.end()) {
        qint32 nCnt = itor.value() - 1;

        m_mapLoopCount[who] = nCnt;        

        // It was enabled
        if(m_prjMgr.getStoppedForLoop() && strStatus != TA_STATUS_PASS) {
            return; // No need to loop testing when status was not pass
        }

        m_mapLoopProgress[who]->setValue(nCnt);
        m_mapLoopProgress[who]->setStyleSheet(strPgBC);

        if(nCnt > 0) {
            emit startTesting(who);
        }
    }
}

void TestManger::SetCheckboxEnable(bool bEnable)
{
    m_bCheckboxEnable = bEnable;
}


void TestManger::addUnitItems(const QString &who, const QJsonObject &objData)
{
    TATreeWidget* pTree = findTreeWidget(who);
    if(pTree) pTree->addUnitItems(who, objData);
}

void TestManger::startItemsData(const QString& who, const QJsonObject& objData)
{
    TATreeWidget* pTree = findTreeWidget(who);
    if(pTree) pTree->startItemsData(objData);
}

void TestManger::updateItemsData(const QString& who, const QJsonObject& objData)
{
    TATreeWidget* pTree = findTreeWidget(who);
    if(pTree) pTree->updateItemsData(objData);
}

void TestManger::detailItemsData(const QString& who, const QJsonObject& objData)
{
    TATreeWidget* pTree = findTreeWidget(who);
    if(pTree) pTree->detailItemsData(objData);
}

void TestManger::SpreadUnitItems()
{
    foreach(QMdiSubWindow* pSubWin, m_mdiArea->subWindowList())
    {
        if(pSubWin) {
            TATreeWidget* pTreeWin = (TATreeWidget*)pSubWin->widget();
            if(pTreeWin) pTreeWin->spreadUnitItems();
        }
    }
}

void TestManger::ShrinkUnitItems()
{
    foreach(QMdiSubWindow* pSubWin, m_mdiArea->subWindowList())
    {
        if(pSubWin) {
            TATreeWidget* pTreeWin = (TATreeWidget*)pSubWin->widget();
            if(pTreeWin) pTreeWin->shrinkUnitItems();
        }
    }
}

bool TestManger::Exit()
{
    if(m_rstLevel != Loading && m_rstLevel != Testing) {
        return true;
    }
    else {
        QMessageBox::StandardButton button = QMessageBox::question(m_parent, tr("Warning"),
            tr("Warning: Testing now, an error may occur when quit. Are you quit?"));

        if (button == QMessageBox::No) {
            return false;
        }
        else if (button == QMessageBox::Yes) {
            for(QMap<QString, TestProcess*>::iterator itor = m_prcTestEngine.begin();
                itor != m_prcTestEngine.end(); ++itor) {
                itor.value()->kill();
            }
            return true;
        }
    }
    return false;
}

ProjectMgr& TestManger::GetMgr()
{
    return m_prjMgr;
}

void TestManger::SetPrjOption(const QString& prjName)
{
    PrjOptDlg optDlg(m_parent);
    optDlg.SetPrjName(m_prjMgr.getPrjName());
    optDlg.SetPrjDesc(m_prjMgr.getPrjDescription());
    optDlg.SetRegSN(m_prjMgr.getBarCodeReg());
    optDlg.SetLoopCounts(m_prjMgr.getLoopCounts());
    optDlg.SetFailedToStop(m_prjMgr.getFailedToStop());
    optDlg.SetStopedForLoop(m_prjMgr.getStoppedForLoop());
    if(QDialog::Accepted == optDlg.exec()) {
        m_prjMgr.setBarCodeReg(optDlg.GetRegSN());
        m_prjMgr.setFailedToStop(optDlg.GetFailedToStop());
        m_prjMgr.setLoopCounts(optDlg.GetLoopCounts());
        m_prjMgr.setStoppedForLoop(optDlg.GetStoppedForLoop());

        m_prjMgr.SaveProjectFile(prjName);        
    }
}

TATreeWidget* TestManger::findTreeWidget(const QString& who)
{
    foreach(QMdiSubWindow* pSubWin, m_mdiArea->subWindowList())
    {
        if(pSubWin && pSubWin->windowTitle() == who) {
            return (TATreeWidget*)pSubWin->widget();
        }
    }
    return NULL;
}
