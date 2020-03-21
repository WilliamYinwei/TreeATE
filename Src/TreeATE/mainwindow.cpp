///
/// @brief         TreeATE's main window
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statusdelegate.h"
#include "aboutdialog.h"
#include "login.h"
#include "syscfgdlg.h"
#include "talineedit.h"
#include "manybarcodedlg.h"
#include "tadefine.h"

#include <QFileDialog>
#include <QTextStream>
#include <QFileInfo>
#include <QJsonDocument>
#include <QTreeWidgetItem>
#include <QCloseEvent>
#include <QDateTime>
#include <QJsonArray>
#include <QJsonObject>
#include <QLineEdit>
#include <QMessageBox>
#include <QDesktopServices>
#include <QSizePolicy>
#include <QFileSystemWatcher>
#include <QReadWriteLock>
#include <QReadLocker>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{    
    m_strAppDir = qApp->applicationDirPath();
    m_strPreSN = "";
    m_isNetworkBreak = false;
    m_LogoutTimeCnt = 0;

    ui->setupUi(this);
    ui->textBrowser_Log->document()->setMaximumBlockCount(1000);
    ui->textBrowser_Log->moveCursor(QTextCursor::End);

    ui->treeWidget_Units->hideColumn(TA_COLUMN_UNIT_PATH);
    ui->treeWidget_Units->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->treeWidget_Units->setItemDelegateForColumn(TA_COLUMN_TEST_STATUS,
                                                   new StatusDelegate(this));

    connect(ui->menu_View, SIGNAL(aboutToShow()), this, SLOT(on_menuView_Show()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->progressBar, SIGNAL(valueChanged(int)), this, SLOT(on_progressValueChanged(int)));

    m_pTestMgr = new TestManger(ui->treeWidget_Units, ui->textBrowser_Log, this);
    connect(m_pTestMgr, SIGNAL(updateTotalStatus(eTestStatus, int)), this,
            SLOT(on_updateTotalStatus(eTestStatus, int)));
    connect(m_pTestMgr, SIGNAL(statusHisRst(eTestStatus)), this, SLOT(on_status_HistoryRst(eTestStatus)));

    // statusBar
    m_labelPath = new QLabel(tr("Path of test project"), this);
    m_labelUser = new QLabel(tr("User name"), this);
    m_labelTime = new QLabel(tr("Current Time"), this);
    m_labelHistoryRst = new QLabel("History Result", this);
    statusBar()->addWidget(m_labelPath, 1);
    statusBar()->addPermanentWidget(m_labelHistoryRst, 0);
    statusBar()->addPermanentWidget(m_labelUser, 1);
    statusBar()->addPermanentWidget(m_labelTime, 0);

    // timer
    m_pTimer = new QTimer(this);
    m_pThreadTimer = new QThread();
    connect(m_pTimer, SIGNAL(timeout()), this, SLOT(on_getSystemTime()));
    m_pTimer->moveToThread(m_pThreadTimer);
    m_pThreadTimer->start();
    m_pTimer->start(1000); // 1 second

    // SN: serial number of the UUT
    m_leTotalSN = new TALineEdit(ui->mainToolBar);
    connect(m_leTotalSN, SIGNAL(returnPressed()), this, SLOT(on_barcode_returnPressed()));
    const QString strStyleFont("font: 28pt Arial;");
    m_leTotalSN->setStyleSheet(strStyleFont);
    m_leTotalSN->setContextMenuPolicy(Qt::NoContextMenu);
    QLabel* labelSN = new QLabel(ui->mainToolBar);
    labelSN->setStyleSheet("image:url(:/code.png);");
    labelSN->setFixedHeight(48);
    labelSN->setFixedWidth(48);
    labelSN->setToolTip(tr("Please scan the barcode to load or play."));
    QWidget::setTabOrder(m_leTotalSN, ui->treeWidget_Units);

    ui->mainToolBar->addWidget(labelSN);
    ui->mainToolBar->addWidget(m_leTotalSN);
    const QString strStyleFontLine("font: 18pt Arial;");
    m_labelStationName = new QLabel(ui->mainToolBar);
    m_labelStationName->setStyleSheet(strStyleFontLine);
    m_labelStationName->setToolTip(tr("Line and station name."));
    ui->mainToolBar->addWidget(m_labelStationName);

    m_pPluginsMgr = new PluginsMgr(this);
    m_pPluginsMgr->AddModelObj("TreeATE_GUI", this);

    m_pResultsWin = new QProcess(this);
    m_pEditWin = new QProcess(this);
    connect(m_pEditWin, SIGNAL(finished(int)), this, SLOT(on_reload_testUnit()));

    openSysCfg();
    unLoad();
    openLogFile();
}

MainWindow::~MainWindow()
{
    unLoad();

    if(m_pTestMgr) {
        delete m_pTestMgr;
        m_pTestMgr = NULL;
    }

    if(m_pThreadTimer)
    {
        m_pThreadTimer->quit();
        m_pThreadTimer->wait();
        delete m_pThreadTimer;
    }

    if(m_pPluginsMgr) {
        delete m_pPluginsMgr;
    }

    if(m_pResultsWin) {
        if(m_pResultsWin->isOpen())
            m_pResultsWin->close();
        delete m_pResultsWin;
    }

    if(m_pEditWin) {
        if(m_pEditWin->isOpen())
            m_pEditWin->close();
        delete m_pEditWin;
    }

    if(m_pLogFile) {
        m_pLogFile->close();
        delete m_pLogFile;
    }

    delete ui;
}

void MainWindow::openLogFile()
{
    QString strLogDir = qApp->applicationDirPath() + "\\Log\\TestEngine";
    QDir dir(strLogDir);
    if(!dir.exists())
    {
        ui->textBrowser_Log->append(tr("Not found the TestEngin log directory."));
        return;
    }

    m_pFSWatcher = new QFileSystemWatcher();
    connect(m_pFSWatcher, SIGNAL(directoryChanged(QString)), this,
            SLOT(on_directory_changed(QString)));
    connect(m_pFSWatcher, SIGNAL(fileChanged(QString)), this,
            SLOT(on_file_changed(QString)));

    QDateTime currDate = QDateTime::currentDateTime();
    QString fName = currDate.toString("yyyy-MM-dd");
    fName = QString("%1\\%2.txt").arg(strLogDir).arg(fName);
    m_pFSWatcher->addPath(fName);

    m_pLogFile = new QFile(fName);
    m_pLogFile->open(QIODevice::ReadOnly);
    m_tsLogFile.setDevice(m_pLogFile);

}

void MainWindow::on_directory_changed(QString dir)
{

}

void MainWindow::on_file_changed(QString file)
{
    Q_UNUSED(file)
    QString str = m_tsLogFile.readAll();
    if(!str.isEmpty()) {
        ui->textBrowser_Log->append(str);
        m_tsLogFile.seek(m_tsLogFile.pos());
    }
}

void MainWindow::unLoad()
{
    m_pTestMgr->UnloadUnits();
    m_pPluginsMgr->UnloadPluginObj();
    on_updateTotalStatus(Unload, 0);
}

void MainWindow::SetCurrUser(const QString& strUser)
{
    m_strUser = strUser;
    m_labelUser->setText(m_strUser);
}

void MainWindow::loadUnits(const QString& strPrjName)
{
    QString strTitle;
    if(m_pTestMgr->LoadTestUnits(strPrjName, strTitle)) {
        foreach(auto dock, m_pTestMgr->GetDockWidgetList()) {
            addDockWidget(Qt::BottomDockWidgetArea, dock);
            tabifyDockWidget(ui->dockWidget_Log, dock);
        }
        m_labelPath->setText(strPrjName);
        setWindowTitle(strTitle + " - TreeATE");

        if(!m_pPluginsMgr->StartMsgListen(m_pTestMgr->GetMgr().getGUIPlugins(),
                                          m_pTestMgr->GetPrjPath()))
        {
            ui->textBrowser_Log->append(m_pPluginsMgr->GetLastError());
        }

        if(m_strUser != "admin") {
            m_pTestMgr->SetCheckboxEnable(true);
        }
        else {
            m_pTestMgr->SetCheckboxEnable(false);
        }
    }
}

void MainWindow::on_getSystemTime()
{
    QString strCurr = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    m_labelTime->setText(strCurr);
    m_LogoutTimeCnt++;
    QVariantMap vmSys = m_vaSysCfg.toMap();
    if(vmSys["Logout"].toInt() > 0 &&
            m_LogoutTimeCnt > vmSys["Logout"].toInt() * 3600) { // one hour
        m_LogoutTimeCnt = 0;
        on_actionLogin_triggered();
    }
}

void MainWindow::on_actionLoading_triggered()
{
    QVariantMap vmSys = m_vaSysCfg.toMap();
    QString strDir = vmSys["WorkPath"].toString();
    QString strPrjName = QFileDialog::getOpenFileName(this, QObject::tr("Open Test Project"), strDir, "*.tpx");
    if(strPrjName.isEmpty())
        return;

    loadUnits(strPrjName);
}

void MainWindow::on_actionPlay_triggered()
{
    if(getNeedCheckNetwork() && m_isNetworkBreak) {
        QMessageBox::critical(this, tr("Critical"),
                              tr("Can't test, Please check the network and reload the test project before that."));
        // history result
        m_pTestMgr->ActiveWindows(1);
        return;
    }
    QStringList lstSelPrj = m_pTestMgr->SeletedPrj();

    QMap<QString, QString> mapSN;
    int nCnt = lstSelPrj.count();
    if(nCnt == 1) {
        QString strSN = m_leTotalSN->text();

        QString pattern = m_pTestMgr->GetMgr().getBarCodeReg();
        pattern.trimmed();
        if(!pattern.isEmpty())
        {
            QRegExp rx(pattern);
            if(strSN.indexOf(rx) < 0 || rx.captureCount() < 0)
            {
                QMessageBox::critical(this, tr("Critical"),
                                      tr("Please scan the barcode for the correct rules, refer the project option."));
                return;
            }

            m_leTotalSN->setText(rx.cap(0));
        }

        strSN = m_leTotalSN->text().trimmed();
        if(strSN.isEmpty()) {
            QMessageBox::warning(this, tr("Warning"), tr("Please scan the product's barcode to play."));
            m_leTotalSN->setFocus();
            return;
        }
        if(!m_strPreSN.isEmpty() && m_strPreSN == strSN) {
            if(QMessageBox::No == QMessageBox::question(this, tr("Question"),
                                                      tr("The same barcode to play, are you sure?"),
                                                      QMessageBox::Yes | QMessageBox::No, QMessageBox::No))
            {

                m_leTotalSN->setFocus();
                return;
            }
        }

        m_strPreSN = strSN;
        mapSN.insert(lstSelPrj.at(0), strSN);
    }
    else if(nCnt <= 0) {
        QMessageBox::warning(this, tr("Warning"), tr("Please selected the test item to play."));
        return;
    }
    else {  // many test projects need SN
        QString strPrjName = m_leTotalSN->text().trimmed();
        if(strPrjName.isEmpty()) {
            on_start_unit(lstSelPrj.at(0));
            return;
        }
        if(lstSelPrj.contains(strPrjName)) {
            on_start_unit(strPrjName);
            return;
        }

        ManyBarcodeDlg mbDlg(this);
        mbDlg.SetProjectName(lstSelPrj);
        mbDlg.SetBarcodeReg(m_pTestMgr->GetMgr().getBarCodeReg().trimmed());
        if(QDialog::Accepted != mbDlg.exec())
            return;
        mapSN = mbDlg.GetPrjsBarcodes();
    }

    ui->textBrowser_Log->append("Start: " + mapSN.values().join(","));

    QVariantMap vmTemp = m_vaSysCfg.toMap();
    int nSelectedCnt = m_pTestMgr->StartTest(vmTemp["LineName"].toString(),
            vmTemp["Station"].toString(), m_strUser, mapSN);
    on_startLoading(nSelectedCnt);
}

void MainWindow::on_startLoading(int nCnt)
{
    ui->progressBar->setRange(1, nCnt);
}

void MainWindow::on_status_HistoryRst(eTestStatus nStatus)
{
    if(m_labelHistoryRst) {
        if(nStatus != Pass) {
            m_isNetworkBreak = true;
            m_labelHistoryRst->setStyleSheet("background-color: rgb(255, 191, 0); margin:0.5px; color: rgb(140, 0, 0);");
        }
        else {
            m_isNetworkBreak = false;
            m_labelHistoryRst->setStyleSheet("");
        }
    }
}

void MainWindow::enableForStatus(eTestStatus eStatus)
{
    switch(eStatus)
    {
    case Unload:
        ui->actionLoading->setEnabled(true);
        ui->actionClose->setEnabled(false);
        ui->actionPlay->setEnabled(false);
        ui->actionProperty->setEnabled(false);
        ui->actionStop->setEnabled(false);
        ui->actionShrink_items->setEnabled(false);
        ui->actionSpread_items->setEnabled(false);
        ui->actionOption->setEnabled(false);
        ui->treeWidget_Units->setEnabled(true);
        m_leTotalSN->setEnabled(true);
        m_leTotalSN->setFocus();
        m_leTotalSN->selectAll();
        ui->action_Edit->setEnabled(true);
        break;
    case Loading:
    case Testing:
        ui->actionLoading->setEnabled(false);
        ui->actionClose->setEnabled(false);
        ui->actionPlay->setEnabled(false);
        ui->actionProperty->setEnabled(false);
        ui->actionStop->setEnabled(true);
        ui->actionShrink_items->setEnabled(true);
        ui->actionSpread_items->setEnabled(true);
        ui->actionOption->setEnabled(false);
        ui->treeWidget_Units->setEnabled(false);
        m_leTotalSN->setEnabled(false);
        ui->action_Edit->setEnabled(false);
        break;
    case Failed:
    case Pass:
    case Exception:
    case Ready:
        ui->actionLoading->setEnabled(true);
        ui->actionClose->setEnabled(true);
        ui->actionPlay->setEnabled(true);
        ui->actionProperty->setEnabled(true);
        ui->actionStop->setEnabled(false);
        ui->actionShrink_items->setEnabled(true);
        ui->actionSpread_items->setEnabled(true);
        ui->actionOption->setEnabled(true);
        ui->treeWidget_Units->setEnabled(true);
        m_leTotalSN->setEnabled(true);
        m_leTotalSN->setFocus();
        m_leTotalSN->selectAll();
        ui->action_Edit->setEnabled(true);
        break;
    }
}

void MainWindow::on_testingForTotal()
{
    on_updateTotalStatus(Testing, 0);
}

void MainWindow::on_updateTotalStatus(eTestStatus eStatus, int n)
{
    qDebug() << "on_updateTotalStatus: " << eStatus << " : " << n;
    QString strPgBC = TA_PROGRESS_BC_OK;

    if(eStatus == Unload) {
        ui->progressBar->hide();
        m_labelPath->setText(tr("Unload"));
        setWindowTitle("TreeATE");
    }
    else {
        ui->progressBar->setValue(n);
    }

    enableForStatus(eStatus);

    QString strStatus;
    QString strStyle;
    switch(eStatus)
    {
    case Unload:
        strStatus = tr("Unload");
        strStyle = TA_STATUS_BC_NA;
        break;
    case Loading:
        strStatus = tr("Loading...");
        strStyle = TA_STATUS_BC_NA;
        break;
    case Ready:
        ui->progressBar->hide();
        strStatus = tr("Ready");
        strStyle = TA_STATUS_BC_NA;
        break;
    case Testing:
        strStatus = tr("GO...");
        strStyle = TA_STATUS_BC_NA;
        strPgBC = TA_PROGRESS_BC_OK;
        break;
    case Failed:
        strStatus = tr(TA_STATUS_FAIL);
        strStyle = TA_STATUS_BC_FAIL;
        strPgBC = TA_PROGRESS_BC_FAIL;
        break;
    case Exception:
        strStatus = tr("ERROR");
        strStyle = TA_STATUS_BC_EXCE;
        strPgBC = TA_PROGRESS_BC_EXCE;
        if(m_pTestMgr) {
            // test project error output window
            m_pTestMgr->ActiveWindows(2);
        }
        break;
    case Pass:
        strStatus = tr(TA_STATUS_PASS);
        strStyle = TA_STATUS_BC_OK;
        strPgBC = TA_PROGRESS_BC_OK;
        break;
    }

    ui->label_rst->setText(strStatus);
    ui->label_rst->setStyleSheet(strStyle);

    ui->progressBar->setStyleSheet(strPgBC);
}


void MainWindow::on_progressValueChanged(int n)
{
    if(ui->progressBar->maximum() == n){
        ui->progressBar->hide();
    }
    else {
        ui->progressBar->show();
    }
}

void MainWindow::on_actionClose_triggered()
{
    unLoad();
}

void MainWindow::on_treeWidget_Units_itemClicked(QTreeWidgetItem *item, int column)
{
    if(NULL == item)
        return;

    if(item->parent() == NULL) {// is not top level items
        showPara(item->text(TA_COLUMN_UNIT_NAME));
    }

    if(column != 0)
        return;

    // clicked the items check box
    if(Qt::Checked == item->checkState(0))
    { // selected
        int count = item->childCount();
        if (count > 0)
        {
            for (int i = 0; i < count; i++)
            {
                //child items selected
                item->child(i)->setCheckState(0, Qt::Checked);
                int x = item->child(i)->childCount();
                for(int j = 0; j < x; j++)
                {
                    item->child(i)->child(j)->setCheckState(0, Qt::Checked);
                }
            }
        }
    }
    else if(Qt::Unchecked == item->checkState(0))
    { // unselected

        int count = item->childCount();
        if (count > 0)
        {
            for (int i = 0; i < count; i++)
            {
                item->child(i)->setCheckState(0, Qt::Unchecked);
                int x = item->child(i)->childCount();
                for(int j = 0; j < x; j++)
                {
                    item->child(i)->child(j)->setCheckState(0, Qt::Unchecked);
                }
            }
        }
    }

    updateParentItemClicked(item->parent());
}

void MainWindow::updateParentItemClicked(QTreeWidgetItem *parent)
{
    if (parent == NULL)
    {
        return;
    }

    // count of checkd on childs
    int selectedCount = 0;
    int selPartially = 0;
    int childCount = parent->childCount();
    for (int i = 0; i < childCount; i++)
    {
        QTreeWidgetItem *childItem = parent->child(i);
        Qt::CheckState state = childItem->checkState(0);
        if (state == Qt::Checked)
        {
            selectedCount++;
        }
        else if(state == Qt::PartiallyChecked)
        {
            selPartially++;
        }
    }

    if (selectedCount <= 0 && selPartially <= 0)
    {
        parent->setCheckState(0, Qt::Unchecked);
    }else if((selectedCount > 0 && selectedCount < childCount) ||
             selPartially > 0)
    {
        //Partially Checked
        parent->setCheckState(0, Qt::PartiallyChecked);
    }else if(selectedCount == childCount)
    {
        //Checked
        parent->setCheckState(0, Qt::Checked);
    }

    updateParentItemClicked(parent->parent());
}

void MainWindow::on_actionStop_triggered()
{
    m_pTestMgr->StopTest();
}

void MainWindow::on_treeWidget_Units_itemChanged(QTreeWidgetItem *item, int column)
{
    if(NULL == item)
        return;

    if(column > 1)
    {
        ui->treeWidget_Units->scrollToItem(item, QAbstractItemView::PositionAtCenter);
    }
}

void MainWindow::on_actionSpread_items_triggered()
{
    m_pTestMgr->SpreadUnitItems();
}

void MainWindow::on_actionShrink_items_triggered()
{
    m_pTestMgr->ShrinkUnitItems();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(m_pTestMgr->Exit()) {
        event->accept();
    }
    else {
        event->ignore();
    }
}

void MainWindow::on_action_About_triggered()
{
    AboutDialog about;
    about.exec();
}

void MainWindow::showPara(const QString& who)
{
    QJsonObject objPara = m_pTestMgr->GetMgr().getTestProjPara(who);
    if(!objPara["Parameter"].isArray()) {
        return;
    }

    ui->tableWidget_Property->setRowCount(0);
    ui->label_propertyName->setText(who);

    QJsonArray jaPara = objPara["Parameter"].toArray();
    for(int i = 0; i < jaPara.count(); i++)
    {
        QJsonObject joPara = jaPara.at(i).toObject();
        QTableWidgetItem* item = new QTableWidgetItem();
        item->setText(joPara["Name"].toString());
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        ui->tableWidget_Property->insertRow(i);
        ui->tableWidget_Property->setItem(i, 0, item);

        item = new QTableWidgetItem();
        item->setText(joPara["Value"].toString());
        ui->tableWidget_Property->setItem(i, 1, item);

        item = new QTableWidgetItem();
        item->setText(joPara["Desc"].toString());
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        ui->tableWidget_Property->setItem(i, 2, item);
    }
}

void MainWindow::on_actionLogin_triggered()
{
    login dlgLogin(this);
    dlgLogin.SetHost(GetHostAddress());
    if(dlgLogin.exec() == QDialog::Accepted)
    {
        SetCurrUser(dlgLogin.m_strUser);
    }
    else
    {
        this->close();
    }
}

void MainWindow::on_dockWidget_Property_visibilityChanged(bool visible)
{
    ui->actionProperty->setChecked(visible);
}

void MainWindow::on_actionProperty_changed()
{
    if(ui->actionProperty->isEnabled() && ui->actionProperty->isChecked())
    {
        ui->dockWidget_Property->show();
    }
    else
    {
        ui->dockWidget_Property->hide();
    }
}

void MainWindow::on_pushButton_SaveCfg_clicked()
{
    QString prjPropertyName = ui->label_propertyName->text();
    if(!prjPropertyName.isEmpty()) {
        QJsonArray jaPara;
        for(int i = 0; i < ui->tableWidget_Property->rowCount(); i++)
        {
            QJsonObject objPara;
            QTableWidgetItem* item = ui->tableWidget_Property->item(i, 0);
            if(item) {
                objPara.insert("Name", item->text());
            }
            item = ui->tableWidget_Property->item(i, 1);
            if(item) {
                objPara.insert("Value", item->text());
            }
            item = ui->tableWidget_Property->item(i, 2);
            if(item) {
                objPara.insert("Desc", item->text());
            }
            jaPara.append(objPara);
        }
        QJsonObject joPara;
        joPara.insert("Parameter", jaPara);
        m_pTestMgr->GetMgr().setTestProjPara(prjPropertyName, joPara);
        m_pTestMgr->GetMgr().SaveProjectFile(m_labelPath->text());
    }
}

void MainWindow::on_tableWidget_Property_cellChanged(int row, int column)
{
    Q_UNUSED(row)
    if(column == 1) {
        ui->pushButton_SaveCfg->setEnabled(true);
    }
    else {
        ui->pushButton_SaveCfg->setEnabled(false);
    }
}

void MainWindow::on_actionSys_options_triggered()
{
    SysCfgDlg sysCfgDlg(this);
    sysCfgDlg.SetLanguageList(m_lstLangFiles);
    sysCfgDlg.SetSysConfig(m_vaSysCfg);
    if(QDialog::Accepted == sysCfgDlg.exec())
    {
        QVariantMap varMapNew = sysCfgDlg.GetDataValue();

        QFile file(m_strAppDir + "/Config/sys.cfg");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
            return;

        m_labelStationName->setText(varMapNew["LineName"].toString() + " - "
                + varMapNew["Station"].toString());

        m_vaSysCfg = varMapNew;
        QJsonDocument jsonDocCfg = QJsonDocument::fromVariant(m_vaSysCfg);
        QTextStream out(&file);
        out.setCodec("UTF-8");
        out << jsonDocCfg.toJson();

        file.close();
    }
}

void MainWindow::openSysCfg()
{
    QFile file(m_strAppDir + "/Config/sys.cfg");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Truncate))
    {
        QMessageBox::warning(this, tr("Error"),
                            file.errorString());
        return;
    }

    QJsonParseError jsonErr;
    QJsonDocument jsonDocCfg = QJsonDocument::fromJson(file.readAll(), &jsonErr);
    if(jsonDocCfg.isNull())
    {
        QMessageBox::warning(this, "Warning", file.fileName() + " " + jsonErr.errorString());
        return;
    }

    m_vaSysCfg = jsonDocCfg.toVariant();
    QVariantMap vmSysCfg = m_vaSysCfg.toMap();
    m_labelStationName->setText(vmSysCfg["LineName"].toString() + " - "
            + vmSysCfg["Station"].toString());

    file.close();

    // list the language files at i18n/treeate
    QString strLangPath = qApp->applicationDirPath() + "/i18n/treeate/";
    QDir dir(strLangPath);
    QStringList filters;
    filters << "*.qm";
    m_lstLangFiles = dir.entryList(filters);
}

QString MainWindow::GetHostAddress()
{
    QVariantMap vmSys = m_vaSysCfg.toMap();
    if(vmSys["Server"].isValid()) {
        return vmSys["Server"].toString();
    }
    return "";
}

void MainWindow::on_actionOption_triggered()
{
    m_pTestMgr->SetPrjOption(m_labelPath->text());
}

void MainWindow::on_menuView_Show()
{
    ui->actionWindows->setMenu(this->createPopupMenu());
}

void MainWindow::on_action_Results_triggered()
{
    if(m_pResultsWin) {
        m_pResultsWin->start("TreeResults.exe");
        if(!m_pResultsWin->waitForStarted(3000))
        {
            QMessageBox::warning(this, "Warning", m_pResultsWin->errorString());
        }
    }
}

void MainWindow::on_barcode_returnPressed()
{
    QString strSrcSN = m_leTotalSN->text().trimmed();
    if(strSrcSN.isEmpty())
        return;

    if(!m_pTestMgr->IsLoaded()) {
        QVariantMap vmSys = m_vaSysCfg.toMap();
        QVariantList vlPrjSN = vmSys["Projects"].toList();
        for(int i = 0; i < vlPrjSN.count(); i++) {
            QVariantMap vmPrj = vlPrjSN.at(i).toMap();
            QString pattern = vmPrj["barcode"].toString();
            if(!pattern.isEmpty())
            {
                QRegExp rx(pattern);
                if(strSrcSN.indexOf(rx) < 0 || rx.captureCount() < 0)
                    continue;

                loadUnits(vmSys["WorkPath"].toString() + "/" + vmPrj["path"].toString());
                return;
            }
        }
        QMessageBox::information(this, tr("Info"), tr("No matching loadable test project, refer the System options."));
    }
    else {
        QString pattern = m_pTestMgr->GetMgr().getBarCodeReg();
        pattern.trimmed();
        if(!pattern.isEmpty())
        {
            QRegExp rx(pattern);
            if(strSrcSN.indexOf(rx) < 0 || rx.captureCount() < 0)
            {
                QMessageBox::critical(this, tr("Critical"),
                                      tr("Please scan the SN for the correct rules, refer the project option."));
                return;
            }

            m_leTotalSN->setText(rx.cap(0));
        }

        on_actionPlay_triggered();
    }
}

void MainWindow::on_action_Edit_triggered()
{
    if(m_pEditWin) {
        QStringList lstPara;
        QString strPath = m_labelPath->text();
        QFileInfo info(strPath);
        if(info.isFile()) {
            lstPara << strPath.remove(strPath.length() - 1, 1); // remove the x (.tpx), need *.tp file
        }
        m_pEditWin->start("TreeATEDev.exe", lstPara);
        if(!m_pEditWin->waitForStarted(3000))
        {
            QMessageBox::warning(this, "Warning", m_pEditWin->errorString());
        }
    }
}

void MainWindow::on_reload_testUnit()
{
    QString strFile = m_labelPath->text();
    QFileInfo info(strFile);
    if(info.isFile())
        loadUnits(strFile);
}

QString MainWindow::GetCurretLang()
{
    QVariantMap vm = m_vaSysCfg.toMap();
    return vm["Language"].toString();
}

bool MainWindow::getNeedCheckNetwork()
{
    QVariantMap vm = m_vaSysCfg.toMap();
    if(vm["CheckNetwork"].isNull()) {
        return true;
    }
    return vm["CheckNetwork"].toBool();
}

void MainWindow::changeEvent(QEvent* e)
{
    QMainWindow::changeEvent(e);
    if(e->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
    }
}

void MainWindow::on_action_Help_triggered()
{
    QDesktopServices::openUrl(QUrl("https://blog.csdn.net/vivasoft/article/details/86063014"));
}

void MainWindow::on_treeWidget_Units_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos)
    QMenu* popMenu = new QMenu(ui->treeWidget_Units);
    QAction* pStart = popMenu->addAction(tr("Start test"));
    connect(pStart, SIGNAL(triggered(bool)), this, SLOT(on_start_curr_uint()));
    popMenu->exec(QCursor::pos());
}

void MainWindow::on_start_curr_uint()
{
    QTreeWidgetItem* item = ui->treeWidget_Units->currentItem();
    if(item)
        on_start_unit(item->text(0));
}

bool MainWindow::on_testing(const QString &who)
{
    if(m_pTestMgr)
        return m_pTestMgr->IsTesting(who);
    return false;
}

QReadWriteLock g_readLock;

void MainWindow::on_start_unit(const QString &who)
{
    QReadLocker locker(&g_readLock);
    if(m_pTestMgr->IsTesting(who)) {
        qDebug() << "It's testing now, don't start test again.";
        return;
    }

    QStringList lstSelPrj;

    if(!who.isEmpty()) {
        lstSelPrj << who;
    }
    else {
        return;
    }

    ManyBarcodeDlg mbDlg(this);
    mbDlg.SetProjectName(lstSelPrj);
    mbDlg.SetBarcodeReg(m_pTestMgr->GetMgr().getBarCodeReg().trimmed());
    if(QDialog::Accepted != mbDlg.exec())
        return;
    QMap<QString, QString> mapSN = mbDlg.GetPrjsBarcodes();

    ui->textBrowser_Log->append("Start: " + mapSN.values().join(","));

    QVariantMap vmTemp = m_vaSysCfg.toMap();
    m_pTestMgr->StartOneTest(vmTemp["LineName"].toString(),
            vmTemp["Station"].toString(), m_strUser, mapSN, lstSelPrj.at(0));

}
