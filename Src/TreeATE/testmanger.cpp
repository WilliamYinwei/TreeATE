///
/// @brief         Test perform manager. load test items,
///                start the testing or stop the testing.
/// @author        David Yin  2018-12 willage.yin@163.com-12  willage.yin@163.com
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
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

TestManger::TestManger(QTreeWidget *pWidget, QTextBrowser *pBrower, QObject *parent): QObject(parent)
{
    m_parent = (QWidget*)parent;
    m_treeWidget = pWidget;
    m_textBrower = pBrower;
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
    dockWidget->setWindowTitle("Loop progress");
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

    m_textBrower->append("Loading: " + strPrjFile);
    if(!m_prjMgr.LoadProjectFile(strPrjFile)) {
        m_textBrower->append(m_prjMgr.getLastError());
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
        m_pUploadRst = new TestProcess("Upload histroy results", (QObject*)m_parent);

        connect(m_pUploadRst, SIGNAL(testEngineFinished(QString, int)), this,
                SLOT(on_testEngineFinished(QString, int)));
        m_lstDockWidget.append(m_pUploadRst->getDockWidget());
    }

    m_pUploadRst->start("TestEngine", QStringList() << "uploadrst");

    // loading test projects
    strTitle = m_prjMgr.getPrjName() + " - " + m_prjMgr.getPrjDescription();
    foreach (auto strName, lstName) {
        m_textBrower->append("Loading: " + strName);
        TestProcess* pTestPrj = new TestProcess(strName, (QObject*)m_parent);

        connect(pTestPrj, SIGNAL(updateTestItemStatus(QString,QJsonObject,quint32)), this,
                SLOT(on_updateTestItemStatus(QString,QJsonObject,quint32)));
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
    const int topCnt = m_treeWidget->topLevelItemCount();
    for(int i = 0; i < topCnt; i++) {
        QTreeWidgetItem* parentItem = m_treeWidget->topLevelItem(i);
        if(NULL == parentItem)
            continue;
        if(parentItem->checkState(0) != Qt::Unchecked) {
            lstSel.append(parentItem->text(0));
        }
    }

    return lstSel;
}

void TestManger::on_startTesting(const QString& who)
{
    auto itor = m_prcTestEngine.find(who);
    if(itor == m_prcTestEngine.end())
        return;

    QTreeWidgetItem* parentItem = m_treeWidget->topLevelItem(m_whoPrj[who]);
    if(NULL == parentItem)
        return;

    QTreeWidgetItemIterator itorItem(parentItem);
    quint32 nCount = 0;
    while(*itorItem) {
        QTreeWidgetItem* item = *itorItem;

        // clear old data before testing
        item->setText(TA_COLUMN_TEST_STATUS, "");
        item->setText(TA_COLUMN_TEST_RST, "");
        item->setText(TA_COLUMN_TEST_STAND, "");
        item->setText(TA_COLUMN_START_TIME, "");
        item->setText(TA_COLUMN_SPEND_TIME, "");

        ++itorItem;
        nCount++;
        if(nCount >= itor.value()->getUnitsCount()) {
            break;
        }
    }

    itor.value()->setProcessEnvironment(m_env);
    itor.value()->start("TestEngine", m_mapLstPara[who]);
}

int TestManger::StartTest(const QString &strWorkLine, const QString &strStation,
                          const QString &strUser,
                          const QMap<QString, QString> &mapSN)
{
    int nSelectedCnt = 0;
    m_nTestingCnt = 0;

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

        QTreeWidgetItem* parentItem = m_treeWidget->topLevelItem(m_whoPrj[who]);
        if(NULL == parentItem)
            continue;

        QTemporaryFile* tempFile = new QTemporaryFile();
        m_lstTempFile.append(tempFile);
        if(!tempFile->open())
            continue;

        QFileInfo infoPrj(m_strPrjName);
        QTextStream in(tempFile);

        QTreeWidgetItemIterator itorItem(parentItem);
        quint32 nCount = 0;
        while(*itorItem) {
            QTreeWidgetItem* item = *itorItem;

            // path of test unit with selected
            if(m_bCheckboxEnable || item->checkState(0) != Qt::Unchecked) {
                QString line = item->text(TA_COLUMN_UNIT_PATH) + "\r\n";
                in << line;
                nSelectedCnt++;
            }
            ++itorItem;
            nCount++;
            if(nCount >= itor.value()->getUnitsCount()) {
                break;
            }
        }
        tempFile->close();

        if(parentItem->checkState(0) == Qt::Unchecked)
            continue;

        // public parameter
        QTemporaryFile* tempParaFile = new QTemporaryFile();
        if(!tempParaFile->open())
            continue;

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
}

void TestManger::UnloadUnits()
{
    clearTempFile();

    m_rstLevel = Unload;
    m_mpPrjTestStatus.clear();

    if(m_pUploadRst) {
        delete m_pUploadRst;
        m_pUploadRst = NULL;
    }

    for(QMap<QString, TestProcess*>::iterator itor = m_prcTestEngine.begin();
        itor != m_prcTestEngine.end(); ++itor) {
        delete itor.value();
    }
    m_prcTestEngine.clear();

    m_treeWidget->clear();
    m_lstDockWidget.clear();
    m_bIsLoaded = false;

    if(m_dockLoopProgress) {
        delete m_dockLoopProgress;
        m_dockLoopProgress = NULL;
    }    
}

void TestManger::on_updateTestItemStatus(const QString& who,
                                 const QJsonObject& objData, quint32 nCnt)
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
        startItemsData(who, objData, nCnt);
        emit updateTotalStatus(Testing, 0);
    }
    else if(status == "update") {
        m_rstLevel = Testing;
        updateItemsData(who, objData, nCnt);
        emit updateTotalStatus(Testing, ++m_nTestingCnt);
    }
    else if(status == "detail") {
        detailItemsData(who, objData, nCnt);
    }
    else if(status == "over") {
        eTestStatus curLvl = Pass;
        QTreeWidgetItem* item = m_treeWidget->topLevelItem(m_whoPrj[who]);
        QString strStatus = item->text(TA_COLUMN_TEST_STATUS);
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
    m_treeWidget->expandAll();
    for (int column = 0; column < m_treeWidget->columnCount(); ++column)
        m_treeWidget->resizeColumnToContents(column);
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

    if(nCode) {
        m_rstLevel = Exception;
        emit updateTotalStatus(Exception, 0);
        return;
    }

    // for loop testing
    auto itor = m_mapLoopCount.find(who);
    if(itor != m_mapLoopCount.end()) {
        quint32 nCnt = itor.value() - 1;

        m_mapLoopCount[who] = nCnt;

        QTreeWidgetItem* item = m_treeWidget->topLevelItem(m_whoPrj[who]);
        QString strStatus = item->text(TA_COLUMN_TEST_STATUS);
        QString strPgBC = TA_PROGRESS_BC_OK;
        if(strStatus == TA_STATUS_EXCE) {
            strPgBC = TA_PROGRESS_BC_EXCE;
        }
        else if(strStatus == TA_STATUS_FAIL) {
            strPgBC = TA_PROGRESS_BC_FAIL;
        }
        else if(strStatus == TA_STATUS_PASS) {
            strPgBC = TA_PROGRESS_BC_OK;
        }
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
    QString strDesc = objData["desc"].toString();
    QString strPath = objData["path"].toString();

    QStringList lstName = strPath.split('/');
    int n = lstName.size();
    if(n == 2)  // Test project
    {
        QStringList lstTP;
        lstTP << who << strPath << strDesc;
        QTreeWidgetItem* item = NULL;
        lstTP << tr("") << tr("") << tr("") << tr("");
        item = new QTreeWidgetItem(m_treeWidget, lstTP);
        item->setCheckState(0, Qt::Checked);
        m_whoPrj.insert(who, m_treeWidget->indexOfTopLevelItem(item));
    }
    else if( n == 3) // Test suite
    {
        QStringList lstTP;
        lstTP << lstName.at(2) << strPath << strDesc;

        QTreeWidgetItem* parentItem = m_treeWidget->topLevelItem(m_whoPrj[who]);
        QTreeWidgetItem* item = NULL;
        lstTP << tr("") << tr("") << tr("") << tr("");
        item = new QTreeWidgetItem(parentItem, lstTP);
        item->setCheckState(0, Qt::Checked);
        parentItem->addChild(item);
    }
    else if( n == 4) // Test case
    {
        QStringList lstTP;
        lstTP << lstName.at(3) << strPath << strDesc;

        QTreeWidgetItem* parentItem = NULL;
        QTreeWidgetItem* rootItem = m_treeWidget->topLevelItem(m_whoPrj[who]);
        for(int i = 0; i < rootItem->childCount(); i++)
        {
            if(rootItem->child(i)->text(TA_COLUMN_UNIT_PATH) ==
                    "/" + lstName.at(1) + "/" + lstName.at(2))
            {
                parentItem = rootItem->child(i);
                break;
            }
        }

        if(parentItem)
        {
            QTreeWidgetItem* item = NULL;
            lstTP << tr("") << tr("") << tr("") << tr("");
            item = new QTreeWidgetItem(parentItem, lstTP);
            item->setCheckState(0, Qt::Checked);
            parentItem->addChild(item);
        }
    }
}

void TestManger::startItemsData(const QString& who, const QJsonObject& objData, quint32 nCnt)
{
    QTreeWidgetItem* parentItem = m_treeWidget->topLevelItem(m_whoPrj[who]);
    if(NULL == parentItem)
        return;
    QTreeWidgetItemIterator itor(parentItem);
    quint32 n = 0;
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        QString& strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_STATUS, objData["rst"].toString());
            item->setText(TA_COLUMN_START_TIME, objData["start"].toString());

            SALabel* label = new SALabel(m_treeWidget);
            label->StartMovie(":/running.gif");
            label->setAlignment(Qt::AlignCenter);
            m_treeWidget->setItemWidget(item, TA_COLUMN_TEST_STATUS, label);
        }
        ++itor;
        n++;
        if(n >= nCnt)
            break;
    }
}

void TestManger::updateItemsData(const QString& who, const QJsonObject& objData, quint32 nCnt)
{
    QTreeWidgetItem* parentItem = m_treeWidget->topLevelItem(m_whoPrj[who]);
    if(NULL == parentItem)
        return;
    QTreeWidgetItemIterator itor(parentItem);
    quint32 n = 0;
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        QString& strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_STATUS, objData["rst"].toString());
            item->setText(TA_COLUMN_SPEND_TIME, objData["spend"].toString());

            m_treeWidget->setItemWidget(item, TA_COLUMN_TEST_STATUS, NULL);
        }
        ++itor;
        n++;
        if(n >= nCnt)
            break;
    }
}

void TestManger::detailItemsData(const QString& who, const QJsonObject& objData, quint32 nCnt)
{
    QTreeWidgetItem* parentItem = m_treeWidget->topLevelItem(m_whoPrj[who]);
    if(NULL == parentItem)
        return;
    QTreeWidgetItemIterator itor(parentItem);
    quint32 n = 0;
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        QString& strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_RST, objData["name"].toString() + "=" +
                    objData["value"].toString());
            item->setText(TA_COLUMN_TEST_STAND, objData["standard"].toString());
        }
        ++itor;
        n++;
        if(n >= nCnt)
            break;
    }
}

void TestManger::SpreadUnitItems()
{
    QTreeWidgetItemIterator itor(m_treeWidget);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(item->parent() != NULL) {
            item->setExpanded(true);
        }
        ++itor;
    }
}

void TestManger::ShrinkUnitItems()
{
    QTreeWidgetItemIterator itor(m_treeWidget);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(item->parent() != NULL) {
            item->setExpanded(false);
        }
        ++itor;
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
