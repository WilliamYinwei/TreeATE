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
#include "tastandmsgbox.h"
#include "tacustomtreewidget.h"
#include "manybarcodedlg.h"

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

    ClearCurrentCounts();
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

    m_pUploadRst->start(qApp->applicationDirPath() + "/TestEngine", QStringList() << "uploadrst");

    // loading test projects
    strTitle = m_prjMgr.getPrjName() + " - " + m_prjMgr.getPrjDescription();
    foreach (auto strName, lstName) {

        m_logTextBrower->append("Loading: " + strName);
        TestProcess* pTestPrj = new TestProcess(strName, (QObject*)m_parent);
        TATreeWidget* pTW = new TATreeWidget();
        connect(pTW->twTestPrj(), SIGNAL(startTest(QString,QString)), this,
                SLOT(on_startTest_clicked(QString,QString)));
        connect(pTW->twTestPrj(), SIGNAL(stopTest(QString)), this,
                SLOT(on_stopTest_clicked(QString)));

        QMdiSubWindow* pSubWin = m_mdiArea->addSubWindow(pTW);
        if(pSubWin) {
            pSubWin->setWindowTitle(strName);
            // unallow closed
            pSubWin->setWindowFlags(Qt::FramelessWindowHint);
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
        pTestPrj->start(qApp->applicationDirPath() + "/TestEngine", lstPara);
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
    itor.value()->start(qApp->applicationDirPath() + "/TestEngine", m_mapLstPara[who]);
    if(itor.value()->waitForStarted(3000)) {
        qDebug() << "-------------------------Start Test for: " + who;
        m_mapTestWin.insert(itor.value()->processId(), who);
        m_mapTesting.insert(who, true);
    }
}

int TestManger::StartOneTest(const QMap<QString, QString> &mapSN, const QString& who)
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
    if(pTree) {
        nSelectedCnt = pTree->seletedUnitItems(tempFile, m_bCheckboxEnable);
        pTree->setSN(mapSN[who]);
    }
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
            << "-s" << m_station
            << "-w" << m_workLine
            << "-u" << m_user
            << "-b" << mapSN[who]
            << "-p"
            << tempParaFile->fileName();
    m_mapLstPara.insert(who, lstPara);

    emit startTesting(who);

    return nSelectedCnt;
}

int TestManger::StartTest(const QMap<QString, QString> &mapSN)
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

        nSelectedCnt += StartOneTest(mapSN, who);
    }

    return nSelectedCnt;
}

void TestManger::stopTest(TestProcess* pProcess)
{
    if(pProcess) {
        if(!pProcess->StopTest()) {
            QMessageBox::critical(NULL, "Warning", "Failed to stop test\n"
                                  + pProcess->errorString());
        }
    }
}

void TestManger::StopTest()
{
    for(QMap<QString, TestProcess*>::iterator itor = m_prcTestEngine.begin();
        itor != m_prcTestEngine.end(); ++itor) {
        stopTest(itor.value());
    }
}

void TestManger::on_startTest_clicked(const QString& who, const QString& strPath)
{
    if(IsTesting(who)) {
        QString strErr = tr("It's testing now, don't start test again.");
        qDebug() << strErr;
        QMessageBox::information(NULL, "Warning", strErr);
        return;
    }
    Q_UNUSED(strPath)
    ManyBarcodeDlg mbDlg(NULL);
    mbDlg.SetProjectName(QStringList() << who);
    mbDlg.SetBarcodeReg(GetMgr().getBarCodeReg().trimmed());
    if(QDialog::Accepted != mbDlg.exec())
        return;
    StartOneTest(mbDlg.GetPrjsBarcodes(), who);
}

void TestManger::on_stopTest_clicked(const QString& who)
{
    auto itor = m_prcTestEngine.find(who);
    if(itor != m_prcTestEngine.end()) {
        stopTest(itor.value());
    }
}

QString TestManger::user() const
{
    return m_user;
}

void TestManger::setUser(const QString &user)
{
    m_user = user;
}

QString TestManger::station() const
{
    return m_station;
}

void TestManger::setStation(const QString &station)
{
    m_station = station;
}

QString TestManger::workLine() const
{
    return m_workLine;
}

void TestManger::setWorkLine(const QString &workLine)
{
    m_workLine = workLine;
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

    m_mapTestWin.clear();

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
    else if(status == "list") {
        addUnitItems(who, objData);
        updateTotalStatusEx(Loading, 0);
    }
    else if(status == "start") {
        startItemsData(who, objData);
        updateTotalStatusEx(Testing, 0);
    }
    else if(status == "update") {
        updateItemsData(who, objData);
        updateTotalStatusEx(Testing, ++m_nTestingCnt);
    }
    else if(status == "detail") {
        detailItemsData(who, objData);
    }
}

void TestManger::ClearCurrentCounts()
{
    m_nPassCnts = m_nFailCnts = m_nExceCnts = 0;
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
            updateTotalStatusEx(Ready, 0);
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
    QString strStsBC;
    QIcon icTabBC;
    QColor tabTextColor(255, 255, 255);
    if(strStatus == TA_STATUS_EXCE) {
        strPgBC = TA_PROGRESS_BC_EXCE;
        strStsBC = TA_STATUS_BC_EXCE;
        icTabBC = QIcon(QPixmap(":/exce.png"));
        tabTextColor = TA_TAB_STATUS_EXCE;
        m_nExceCnts++;
        updateTotalStatusEx(Exception, 0);
    }
    else if(strStatus == TA_STATUS_FAIL) {
        strPgBC = TA_PROGRESS_BC_FAIL;
        strStsBC = TA_STATUS_BC_FAIL;
        icTabBC = QIcon(QPixmap(":/ng.png"));
        tabTextColor = TA_TAB_STATUS_FAIL;
        m_nFailCnts++;
        updateTotalStatusEx(Failed, 0);
    }
    else if(strStatus == TA_STATUS_PASS) {
        strPgBC = TA_PROGRESS_BC_OK;
        strStsBC = TA_STATUS_BC_OK;
        icTabBC = QIcon(QPixmap(":/ok.png"));
        tabTextColor = TA_TAB_STATUS_OK;
        m_nPassCnts++;
        updateTotalStatusEx(Pass, 0);
    }

    // update the SubWindow's TabBar icon or color
    setTabIconUUT(who, icTabBC, tabTextColor);
    if(pTree) pTree->showTotalStatus(true, strStatus, strStsBC);
    emit updateCounts(m_nPassCnts, m_nFailCnts, m_nExceCnts);

    if(nCode) {
        updateTotalStatusEx(Exception, 0);
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
    if(!IsTotalTesting()) {
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

QString TestManger::MsgBox(qint64 pid, const QString& strPic, const QString& strMsg,
               const int nType, const int mSec)
{
    auto itor = m_mapTestWin.find(pid);
    if(itor != m_mapTestWin.end()) {
        TATreeWidget* pSubWin = findTreeWidget(itor.value());
        if(pSubWin) {
            pSubWin->m_taMsgBox->SetShowData(strPic, strMsg, nType, mSec/1000);
            pSubWin->m_taMsgBox->CloseDialog();
            return pSubWin->m_taMsgBox->GetRetValue();
        }
    }
    return "";
}

int TestManger::AsyncMsgBox(qint64 pid,const QString& strPic, const QString& strMsg,
                const int nType, const int mSec)
{
    auto itor = m_mapTestWin.find(pid);
    if(itor != m_mapTestWin.end()) {
        TATreeWidget* pSubWin = findTreeWidget(itor.value());
        if(pSubWin) {
            pSubWin->m_taMsgBox->SetShowData(strPic, strMsg, nType, mSec/1000);
        }
    }
    return 1;
}

bool TestManger::CloseAsyncMsgBox(qint64 pid, int msgBoxId)
{
    Q_UNUSED(msgBoxId)
    auto itor = m_mapTestWin.find(pid);
    if(itor != m_mapTestWin.end()) {
        TATreeWidget* pSubWin = findTreeWidget(itor.value());
        if(pSubWin) {
            return pSubWin->m_taMsgBox->CloseDialog();
        }
    }
    return false;
}

bool TestManger::IsTotalTesting()
{
    for(auto itor = m_mapTesting.begin(); itor != m_mapTesting.end();
        ++itor)
    {
        if(itor.value()) { // is testing
            return true;
        }
    }

    return false;
}

void TestManger::updateTotalStatusEx(eTestStatus status, int n)
{
    if(status > Testing) {
        if(IsTotalTesting())
            return; // No update for testing
        emit updateTotalStatus(status, n);
    }
    else {
        emit updateTotalStatus(status, n);
    }
}
