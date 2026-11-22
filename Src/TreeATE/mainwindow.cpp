///
/// @brief         TreeATE's main window
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-21 新增“☰ 菜单”入口并隐藏传统菜单栏  2026-11-22 开发入口改为 VS Code，移除 TreeATEDev  2026-11-22 M2 三主题与中英文运行时切换  2026-11-22 M3 主界面骨架（应用栏/扫描执行条/KPI/紧凑布局/错误分级）
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
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
#include "vscodelauncher.h"
#include "thememanager.h"
#include "languagemanager.h"
#include "tatreewidget.h"
#include "tacustomtreewidget.h"
#include "version.h"

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
#include <QUrl>
#include <QAbstractButton>
#include <QSizePolicy>
#include <QFileSystemWatcher>
#include <QReadWriteLock>
#include <QReadLocker>
#include <QBrush>
#include <QMdiSubWindow>
#include <QGridLayout>
#include <QRegularExpression>
#include <QMenu>
#include <QToolButton>
#include <QSettings>
#include <QToolBar>
#include <QDir>
#include <QPushButton>
#include <QStyle>
#include <QIcon>
#include <QHBoxLayout>
#include <QFrame>
#include <QPropertyAnimation>
#include <QShortcut>
#include <QClipboard>
#include <QGuiApplication>
#include <QScreen>
#include <QEvent>
#include <QResizeEvent>
#include <QDebug>

static void repolishWidget(QWidget* pWidget)
{
    if(!pWidget || !pWidget->style())
        return;
    pWidget->style()->unpolish(pWidget);
    pWidget->style()->polish(pWidget);
    pWidget->update();
}

// 页签化坞窗口已由页签显示标题，隐藏重复的坞标题栏；浮出时恢复默认标题栏
static void hideTabbedDockTitleBar(QDockWidget* pDock)
{
    if(!pDock)
        return;
    pDock->setTitleBarWidget(new QWidget(pDock));
    QObject::connect(pDock, &QDockWidget::topLevelChanged, pDock, [pDock](bool bFloating) {
        pDock->setTitleBarWidget(bFloating ? NULL : new QWidget(pDock));
    });
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), m_appBar(NULL), m_scanBar(NULL), m_appToolBar(NULL), m_scanToolBar(NULL), m_errorBanner(NULL),
    m_labelErrorBanner(NULL), m_pBannerAction(NULL), m_labelBrand(NULL), m_labelVersion(NULL),
    m_labelStatusChip(NULL),
    m_labelPath(NULL), m_labelUser(NULL), m_labelTime(NULL), m_labelGuid(NULL),
    m_labelStationName(NULL), m_labelHistoryRst(NULL), m_leTotalSN(NULL), m_labelBarcodeIcon(NULL),
    m_menuButton(NULL), m_themeButton(NULL), m_pBtnExit(NULL), m_languageButton(NULL),
    m_pBtnTest(NULL), m_pBtnLoad(NULL), m_pBtnStop(NULL), m_pBtnProperty(NULL),
    m_labelPropertySection(NULL), m_labelPropertyHint(NULL), m_labelPropertyPlaceholder(NULL),
    m_labelEmptyHint(NULL),
    m_pLogPauseBtn(NULL), m_pLogClearBtn(NULL), m_pLogCopyBtn(NULL), m_pBannerTimer(NULL),
    m_bCompact(false), m_bLogPaused(false), m_bPropertyPreferred(true), m_ATEtop(parent)
{
    setWindowFlags(Qt::WindowMinMaxButtonsHint);

    m_strAppDir = qApp->applicationDirPath();
    m_strPreSN = "";
    m_LogoutTimeCnt = 0;
    m_totalStatus = Unload;

    ui->setupUi(this);
    ui->textBrowser_Log->document()->setMaximumBlockCount(1000);
    ui->textBrowser_Log->moveCursor(QTextCursor::End);

    ui->mdiArea->setViewMode(QMdiArea::TabbedView);
    ui->mdiArea->setTabsMovable(true);
    ui->mdiArea->setTabsClosable(false);
    // 2026-11-22 M3 UUT 页签由底部改为顶部
    ui->mdiArea->setTabPosition(QTabWidget::North);
    ui->mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    ui->mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    ui->progressBar->setObjectName("CycleProgress");
    // 2026-11-22 M3 应用栏与扫描执行条替代传统工具栏/菜单栏
    ui->menuBar->setVisible(false);

    // 2026-11-22 未加载测试工程时，在空白工作区中央显示引导提示
    m_labelEmptyHint = new QLabel(tr("Please load a test project and then start the test"),
                                  ui->mdiArea->viewport());
    m_labelEmptyHint->setObjectName("EmptyHint");
    m_labelEmptyHint->setAlignment(Qt::AlignCenter);
    m_labelEmptyHint->setWordWrap(true);
    m_labelEmptyHint->setAttribute(Qt::WA_TransparentForMouseEvents);
    m_labelEmptyHint->setGeometry(ui->mdiArea->viewport()->rect());
    m_labelEmptyHint->setVisible(false);
    ui->mdiArea->viewport()->installEventFilter(this);

    createAppBar();
    createScanBar();
    createStatusBarItems();
    createLogToolBar();

    applyThemeChrome();

    connect(ui->menu_View, SIGNAL(aboutToShow()), this, SLOT(on_menuView_Show()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->progressBar, SIGNAL(valueChanged(int)), this, SLOT(on_progressValueChanged(int)));

    m_pTestMgr = new TestManger(ui->mdiArea, ui->textBrowser_Log, this);
    connect(m_pTestMgr, SIGNAL(updateTotalStatus(eTestStatus, int)), this,
            SLOT(on_updateTotalStatus(eTestStatus, int)));
    connect(m_pTestMgr, SIGNAL(statusHisRst(eTestStatus)), this, SLOT(on_status_HistoryRst(eTestStatus)));
    connect(m_pTestMgr, SIGNAL(updateCounts(quint32,quint32,quint32)), this, SLOT(updateCompletedCounts(quint32,quint32,quint32)));

    // timer
    m_pTimer = new QTimer(this);
    m_pThreadTimer = new QThread();
    connect(m_pTimer, SIGNAL(timeout()), this, SLOT(on_getSystemTime()));
    m_pTimer->moveToThread(m_pThreadTimer);
    m_pThreadTimer->start();
    m_pTimer->start(1000); // 1 second

    m_pPluginsMgr = new PluginsMgr(this);
    m_pPluginsMgr->AddModelObj("TreeATE_GUI", this);
    // TreeATE_Mutil_Sub is the TA_MutilMsgBox GUI Object
    m_pPluginsMgr->AddModelObj("TreeATE_Mutil_Sub", m_pTestMgr);

    m_pResultsWin = new QProcess(this);
    m_pVSCodeLauncher = new VSCodeLauncher(this);

    // Counts dock view：独立停靠到右侧原“状态”坞位置，位于属性坞上方
    m_dockCounts = createDockWinCounts();
    addDockWidget(Qt::RightDockWidgetArea, m_dockCounts);
    splitDockWidget(m_dockCounts, ui->dockWidget_Property, Qt::Vertical);
    setTabPosition(Qt::BottomDockWidgetArea, QTabWidget::North);
    resizeDocks(QList<QDockWidget*>() << m_dockCounts,
                QList<int>() << 240, Qt::Vertical);

    // 2026-11-22 M3 快捷键：F2 加载、Ctrl+L 聚焦条码、Ctrl+F 聚焦测试树、F11 全屏、Esc 关闭浮层、Alt 菜单
    QShortcut* pScLoad = new QShortcut(QKeySequence(Qt::Key_F2), this);
    connect(pScLoad, SIGNAL(activated()), ui->actionLoading, SLOT(trigger()));
    QShortcut* pScFocusSn = new QShortcut(QKeySequence("Ctrl+L"), this);
    connect(pScFocusSn, &QShortcut::activated, this, [this]() {
        if(m_leTotalSN) {
            m_leTotalSN->setFocus();
            m_leTotalSN->selectAll();
        }
    });
    QShortcut* pScFind = new QShortcut(QKeySequence::Find, this);
    connect(pScFind, &QShortcut::activated, this, [this]() {
        QMdiSubWindow* pSubWin = ui->mdiArea->activeSubWindow();
        if(pSubWin) {
            TATreeWidget* pTree = qobject_cast<TATreeWidget*>(pSubWin->widget());
            if(pTree && pTree->twTestPrj())
                pTree->twTestPrj()->setFocus();
        }
    });
    QShortcut* pScFull = new QShortcut(QKeySequence(Qt::Key_F11), this);
    connect(pScFull, SIGNAL(activated()), this, SLOT(onToggleFullScreen()));
    QShortcut* pScEsc = new QShortcut(QKeySequence(Qt::Key_Escape), this);
    connect(pScEsc, &QShortcut::activated, this, [this]() {
        QMdiSubWindow* pSubWin = ui->mdiArea->activeSubWindow();
        if(pSubWin) {
            TATreeWidget* pTree = qobject_cast<TATreeWidget*>(pSubWin->widget());
            if(pTree)
                pTree->hideResultOverlay();
        }
    });
    QShortcut* pScMenu = new QShortcut(QKeySequence(Qt::ALT), this);
    connect(pScMenu, &QShortcut::activated, this, [this]() {
        ui->menuBar->setVisible(!ui->menuBar->isVisible());
    });

    // 2026-11-22 M3 属性检查器：默认 320px，无选中工程时显示引导而不是空表
    ui->dockWidget_Property->setMinimumWidth(260);
    ui->dockWidget_Property->setMaximumWidth(420);
    ui->dockWidget_Property->resize(320, ui->dockWidget_Property->height());

    m_labelPropertyPlaceholder = new QLabel(tr("Select a test project to view its properties"), ui->dockWidgetContents);
    m_labelPropertyPlaceholder->setObjectName("PropertyPlaceholder");
    m_labelPropertyPlaceholder->setAlignment(Qt::AlignCenter);
    m_labelPropertyPlaceholder->setWordWrap(true);
    ui->verticalLayout_4->insertWidget(0, m_labelPropertyPlaceholder);

    // 2026-11-22 属性面板作用域条：突出当前所选测试工程；坞标题已表明“属性”，面板内不再重复
    QFrame* pPropScope = new QFrame(ui->dockWidgetContents);
    pPropScope->setObjectName("PropertyScope");
    pPropScope->setFixedHeight(36);
    QHBoxLayout* pPropScopeLay = new QHBoxLayout(pPropScope);
    pPropScopeLay->setContentsMargins(14, 6, 14, 6);
    pPropScopeLay->setSpacing(8);
    ui->label_propertyName->setObjectName("PropertyScopeChip");
    pPropScopeLay->addWidget(ui->label_propertyName);
    m_labelPropertyHint = new QLabel(tr("Changes take effect after saving"), pPropScope);
    m_labelPropertyHint->setObjectName("PropertyScopeHint");
    pPropScopeLay->addWidget(m_labelPropertyHint, 1);
    ui->verticalLayout_4->insertWidget(0, pPropScope);

    // 属性表区块标题，与坞标题“属性”错开，避免同屏重复
    m_labelPropertySection = new QLabel(tr("Project Properties"), ui->dockWidgetContents);
    m_labelPropertySection->setObjectName("PropertySectionTitle");
    m_labelPropertySection->setContentsMargins(14, 8, 14, 2);
    ui->verticalLayout_4->insertWidget(1, m_labelPropertySection);

    // 占位提示与属性表按 1:1 吸收剩余空间，避免作用域条被拉高
    ui->verticalLayout_4->setStretch(2, 1);
    ui->verticalLayout_4->setStretch(3, 1);

    setPropertyPlaceholderVisible(true);

    openSysCfg();
    unLoad();
    openLogFile();
    setWindowState(Qt::WindowMaximized);
    const bool bLayoutRestored = restoreWindowLayout();
    applyCompactLayout(QGuiApplication::primaryScreen()->availableGeometry().width() < 1180);
    // 2026-11-22 首次启动无记忆布局时，计数坞默认以浮动窗口停在右下角
    if(!bLayoutRestored)
        QTimer::singleShot(0, this, &MainWindow::placeCountsDockDefault);

    m_ATEtop.InitATEtop();
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

    if(m_pLogFile) {
        m_pLogFile->close();
        delete m_pLogFile;
    }

    m_ATEtop.ExitATEtop();

    delete ui;
}

void MainWindow::openLogFile()
{
    QString strLogDir = qApp->applicationDirPath() + "/Log/TestEngine";
    QDir dir(strLogDir);
    if(!dir.exists())
    {
        if(!dir.mkpath(strLogDir)) {
            ui->textBrowser_Log->append(tr("Not found the TestEngine log directory."));
            return;
        }
    }

    m_pFSWatcher = new QFileSystemWatcher();
    connect(m_pFSWatcher, SIGNAL(directoryChanged(QString)), this,
            SLOT(on_directory_changed(QString)));
    connect(m_pFSWatcher, SIGNAL(fileChanged(QString)), this,
            SLOT(on_file_changed(QString)));

    QDateTime currDate = QDateTime::currentDateTime();
    QString fName = currDate.toString("yyyy-MM-dd");
    fName = QString("%1/%2.txt").arg(strLogDir).arg(fName);
    m_pFSWatcher->addPath(fName);

    m_pLogFile = new QFile(fName);
    m_pLogFile->open(QIODevice::ReadOnly);
    m_tsLogFile.setDevice(m_pLogFile);

}

void MainWindow::on_directory_changed(QString)
{

}

void MainWindow::on_file_changed(QString file)
{
    Q_UNUSED(file)
    QString str = m_tsLogFile.readAll();
    if(!str.isEmpty()) {
        // 2026-11-22 M3 日志暂停时丢弃新内容但仍推进读取位置
        if(!m_bLogPaused)
            ui->textBrowser_Log->append(str);
        m_tsLogFile.seek(m_tsLogFile.pos());
    }
}

void MainWindow::unLoad()
{
    m_totalStatus = Unload;
    if(ui->dockWidget_Log)
        ui->dockWidget_Log->setTitleBarWidget(NULL);
    m_pTestMgr->UnloadUnits();
    m_pPluginsMgr->UnloadPluginObj();
    hideErrorBanner();
    setPropertyPlaceholderVisible(true);
    on_updateTotalStatus(Unload, 0);
    updateEmptyHint();
}

void MainWindow::SetCurrUser(const QString& strUser)
{
    m_strUser = strUser;
    m_labelUser->setText(m_strUser);
    if(m_pTestMgr) m_pTestMgr->setUser(strUser);
}

void MainWindow::loadUnits(const QString& strPrjName)
{
    m_totalStatus = Unload; // initizate to status of the Unload
    QString strTitle;
    if(m_pTestMgr->LoadTestUnits(strPrjName, strTitle)) {
        bool bTabified = false;
        foreach(auto dock, m_pTestMgr->GetDockWidgetList()) {
            addDockWidget(Qt::BottomDockWidgetArea, dock);
            tabifyDockWidget(ui->dockWidget_Log, dock);
            hideTabbedDockTitleBar(dock);
            bTabified = true;
        }
        // 页签已显示“日志”标题，隐藏日志坞重复的标题栏；卸载时恢复
        if(bTabified)
            ui->dockWidget_Log->setTitleBarWidget(new QWidget(ui->dockWidget_Log));
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

        on_actionTandem_triggered();
    }

    updateEmptyHint();
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
    QStringList lstSelPrj = m_pTestMgr->SeletedPrj();

    QMap<QString, QString> mapSN;
    int nCnt = lstSelPrj.count();
    if(nCnt == 1) {
        QString strSN = m_leTotalSN->text();

        QString pattern = m_pTestMgr->GetMgr().getBarCodeReg();
        pattern = pattern.trimmed();
        if(!pattern.isEmpty())
        {
            QRegularExpression rx(pattern);
            QRegularExpressionMatch m = rx.match(strSN);
            if(!m.hasMatch())
            {
                // 2026-11-22 M3 条码规则错误改为行内提示，不再弹模态框
                showInlineError(m_leTotalSN,
                                tr("The barcode does not match the project rule. Check the project option."));
                return;
            }

            m_leTotalSN->setText(m.captured());
        }

        strSN = m_leTotalSN->text().trimmed();
        if(strSN.isEmpty()) {
            showInlineError(m_leTotalSN, tr("Please scan the product's barcode to play."));
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
        // 2026-11-22 M3 未选择测试项：行内/横幅提示 + 测试按钮轻抖，不弹模态
        showErrorBanner("warn", tr("Please selected the test item to play."));
        shakeWidget(m_pBtnTest);
        return;
    }
    else {  // many test projects need SN
        ManyBarcodeDlg mbDlg(this);
        mbDlg.SetProjectName(lstSelPrj);
        mbDlg.SetBarcodeReg(m_pTestMgr->GetMgr().getBarCodeReg().trimmed());
        if(QDialog::Accepted != mbDlg.exec())
            return;
        mapSN = mbDlg.GetPrjsBarcodes();
    }

    QVariantMap vmSys = m_vaSysCfg.toMap();
    QString strProcedure = vmSys["LineName"].toString();

    QMap<QString, QString> mapRejectSN;
    QMap<QString, QString> mapAcceptSN;
    for(auto lsCheckSN = mapSN.begin(); lsCheckSN != mapSN.end(); lsCheckSN++) {
        if(!m_ATEtop.VerifyProcedure(lsCheckSN.value(), strProcedure))
        {
            mapRejectSN.insert(lsCheckSN.key(), lsCheckSN.value());
        }
        else
        {
            mapAcceptSN.insert(lsCheckSN.key(), lsCheckSN.value());
        }
    }

    ui->textBrowser_Log->append("Start: " + mapAcceptSN.values().join(","));
    if(!mapRejectSN.isEmpty())
    {
        QString strErr = m_ATEtop.GetLastError() + "\n" + mapRejectSN.values().join("\n");
        // 2026-11-22 M3 MES 工序拒绝使用红色横幅，保留服务器原文并写入日志
        showErrorBanner("error", strErr);
        ui->textBrowser_Log->append(strErr);
    }

    if(!mapAcceptSN.isEmpty())
    {
        int nSelectedCnt = m_pTestMgr->StartTest(mapAcceptSN);
        m_totalStatus = Unload; // initizate to status of the Unload '0'
        on_startLoading(nSelectedCnt);
    }
}

void MainWindow::on_startLoading(int nCnt)
{
    ui->progressBar->setRange(1, nCnt);
}

void MainWindow::on_status_HistoryRst(eTestStatus nStatus)
{
    if(m_labelHistoryRst) {
        m_labelHistoryRst->setProperty("pending", nStatus != Pass);
        m_labelHistoryRst->setText(QString::fromUtf8("● ") + tr("History Result"));
        repolishWidget(m_labelHistoryRst);
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
        // 2026-11-22 属性面板在未加载工程时也可显示（展示引导占位）
        ui->actionProperty->setEnabled(true);
        ui->actionStop->setEnabled(false);
        ui->actionShrink_items->setEnabled(false);
        ui->actionSpread_items->setEnabled(false);
        ui->actionOption->setEnabled(false);
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
        ui->actionProperty->setEnabled(true);
        ui->actionStop->setEnabled(true);
        ui->actionShrink_items->setEnabled(true);
        ui->actionSpread_items->setEnabled(true);
        ui->actionOption->setEnabled(false);
        m_leTotalSN->setEnabled(false);
        // 2026-11-22 允许在测试过程中打开外部编辑器（VS Code）
        ui->action_Edit->setEnabled(true);
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
        m_leTotalSN->setEnabled(true);
        m_leTotalSN->setFocus();
        m_leTotalSN->selectAll();
        ui->action_Edit->setEnabled(true);
        break;
    }
}


void MainWindow::on_updateTotalStatus(eTestStatus eStatus, int n)
{
    qDebug() << "on_updateTotalStatus: " << eStatus << " : " << n;

    if(eStatus == Unload) {
        ui->progressBar->hide();
        m_labelPath->setText(tr("Unload"));
        setWindowTitle("TreeATE");
    }
    else {
        ui->progressBar->setValue(n);
    }

    enableForStatus(eStatus);
    updateStatusChip(eStatus);

    if(eStatus < m_totalStatus)
        return;    
    m_totalStatus = eStatus;

    QString strState = "neutral";
    switch(eStatus)
    {
    case Unload:
        break;
    case Loading:
        break;
    case Ready:
        ui->progressBar->hide();
        break;
    case Testing:
        break;
    case Failed:
        strState = "fail";
        break;
    case Exception:
        strState = "exce";
        if(m_pTestMgr) {
            // test project error output window
            m_pTestMgr->ActiveWindows(2);
        }
        break;
    case Pass:
        strState = "pass";
        break;
    }

    ui->progressBar->setProperty("state", strState);
    repolishWidget(ui->progressBar);
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

void MainWindow::on_actionStop_triggered()
{
    m_pTestMgr->StopTest();
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
        saveWindowLayout();
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
        setPropertyPlaceholderVisible(true);
        return;
    }

    setPropertyPlaceholderVisible(false);
    ui->tableWidget_Property->setRowCount(0);
    m_strPropertyScope = who;
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
    // 紧凑模式下的自动收起不改变用户偏好
    if(!m_bCompact)
        m_bPropertyPreferred = visible;
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
    sysCfgDlg.SetLanguageList(LanguageManager::instance()->languages());
    QVariantMap vmCfgView = m_vaSysCfg.toMap();
    vmCfgView["Theme"] = ThemeManager::instance()->currentThemeKey();
    sysCfgDlg.SetSysConfig(vmCfgView);
    if(QDialog::Accepted == sysCfgDlg.exec())
    {
        QVariantMap varMapNew = sysCfgDlg.GetDataValue();
        const QString strTheme = varMapNew.value("Theme").toString();
        varMapNew.remove("Theme");

        QFile file(m_strAppDir + "/Config/sys.cfg");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
            return;

        m_labelStationName->setText(varMapNew["LineName"].toString() + " - "
                + varMapNew["Station"].toString());

        m_vaSysCfg = varMapNew;
        QJsonDocument jsonDocCfg = QJsonDocument::fromVariant(m_vaSysCfg);
        QTextStream out(&file);
        out.setEncoding(QStringConverter::Utf8); //"UTF-8"
        out << jsonDocCfg.toJson();

        file.close();

        // 2026-11-22 M2 应用主题与语言，无需重启
        int nTheme = ThemeManager::instance()->themeIndex(strTheme);
        if(nTheme >= 0) {
            QString strThemeErr;
            if(!ThemeManager::instance()->applyTheme(nTheme, &strThemeErr))
                QMessageBox::warning(this, tr("Theme"), strThemeErr);
        }

        QString strLangErr;
        if(!LanguageManager::instance()->applyLanguage(varMapNew["LanguageCode"].toString(), &strLangErr))
            QMessageBox::warning(this, tr("Language"), strLangErr);
    }
}

void MainWindow::openSysCfg()
{
    QFile file(m_strAppDir + "/Config/sys.cfg");
    if(!file.open(QIODevice::ReadOnly))
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
    m_labelGuid->setText("");

    file.close();

    if(m_pTestMgr) {
        m_pTestMgr->setWorkLine(vmSysCfg["LineName"].toString());
        m_pTestMgr->setStation(vmSysCfg["Station"].toString());
    }
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
        m_pResultsWin->start(m_strAppDir + "/TreeResults",  QStringList());
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

    if(!m_pTestMgr->IsLoaded())
    {
        QString strNewPrjName("");
        QVariantMap vmSys = m_vaSysCfg.toMap();
        if(!m_ATEtop.DownloadProject(strSrcSN, vmSys["LineName"].toString(), vmSys["WorkPath"].toString())) {
            qDebug() << m_ATEtop.GetLastError();
            // 2026-11-22 M3 服务器不可用时提示并继续走本地匹配，不阻断测试
            if(!vmSys["Server"].toString().isEmpty())
                showErrorBanner("warn", tr("Server unavailable, switched to local mode."));
        }
        else
        {
            strNewPrjName = m_ATEtop.GetDownloadPrjName();
        }

        if(!strNewPrjName.isEmpty()) // loading test project from just download
        {
            loadUnits(strNewPrjName);
            return;
        }
        else // found test project to load on local
        {
            QVariantList vlPrjSN = vmSys["Projects"].toList();
            for(int i = 0; i < vlPrjSN.count(); i++) {
                QVariantMap vmPrj = vlPrjSN.at(i).toMap();
                QString pattern = vmPrj["barcode"].toString();
                if(!pattern.isEmpty())
                {
                    QRegularExpression rx(pattern);
                    QRegularExpressionMatch m = rx.match(strSrcSN);
                    if(!m.hasMatch())
                        continue;

                    loadUnits(vmSys["WorkPath"].toString() + "/" + vmPrj["path"].toString());
                    return;
                }
            }
        }
        // 2026-11-22 M3 无匹配工程：横幅带动作为用户提供下一步
        showErrorBanner("warn",
                        tr("No matching loadable test project. Configure the projects in System Options."),
                        tr("System Options"));
    }
    else {
        QString pattern = m_pTestMgr->GetMgr().getBarCodeReg();
        pattern = pattern.trimmed();
        if(!pattern.isEmpty())
        {
            QRegularExpression rx(pattern);
            QRegularExpressionMatch m = rx.match(strSrcSN);
            if(!m.hasMatch())
            {
                showInlineError(m_leTotalSN,
                                tr("The barcode does not match the project rule. Check the project option."));
                return;
            }

            m_leTotalSN->setText(m.captured());
        }

        on_actionPlay_triggered();
    }
}

void MainWindow::on_action_Edit_triggered()
{
    openTestProjectInVSCode();
}

QString MainWindow::currentTestProjectFile() const
{
    // 优先取当前激活 UUT 页签对应的 .tpx，保证多工程并行时打开正确目录
    QMdiSubWindow* pSubWin = ui->mdiArea->activeSubWindow();
    if(pSubWin) {
        QString strUnitName = pSubWin->windowTitle();
        QString strFileName = m_pTestMgr->GetMgr().getTestPrjFileName(strUnitName);
        if(!strFileName.isEmpty()) {
            QFileInfo info(QDir(m_pTestMgr->GetPrjPath()).filePath(strFileName));
            if(info.exists())
                return info.absoluteFilePath();
        }
    }

    // 回退到状态栏记录的当前工程文件
    QString strPath = m_labelPath->text();
    QFileInfo info(strPath);
    if(info.exists() && info.isFile())
        return info.absoluteFilePath();

    return QString();
}

bool MainWindow::showVSCodeNotFoundGuide()
{
    // 返回 true 表示用户选择“重新检测”
    QMessageBox box(this);
    box.setIcon(QMessageBox::Information);
    box.setWindowTitle(tr("Develop"));
    box.setText(tr("TreeATE Copilot runs in Visual Studio Code."));
    box.setInformativeText(
        tr("1. Install Visual Studio Code first.\n"
           "2. Open Extensions in VS Code, search for and install TreeATE Copilot.\n"
           "3. Return to TreeATE and click Test Project -> Develop again."));

    QPushButton* pBtnDownload = box.addButton(tr("Download VS Code"), QMessageBox::AcceptRole);
    QPushButton* pBtnRetry = box.addButton(tr("Detect Again"), QMessageBox::ActionRole);
    QPushButton* pBtnCancel = box.addButton(tr("Cancel"), QMessageBox::RejectRole);
    box.setDefaultButton(pBtnCancel);
    box.exec();

    if(box.clickedButton() == pBtnDownload) {
        QDesktopServices::openUrl(QUrl(VSCodeLauncher::DownloadUrl()));
        return false;
    }
    if(box.clickedButton() == pBtnRetry)
        return true;

    return false;
}

void MainWindow::openTestProjectInVSCode()
{
    QString strPrjFile = currentTestProjectFile();
    if(strPrjFile.isEmpty()) {
        QMessageBox::information(this, tr("Develop"),
                                 tr("Please load a test project first."));
        return;
    }

    QFileInfo info(strPrjFile);
    QString strFolder = info.absolutePath();
    QFileInfo folderInfo(strFolder);
    if(!info.exists() || !folderInfo.exists() || !folderInfo.isDir()) {
        QString strDetail = QString("project file='%1' exists=%2 folder exists=%3")
                                .arg(strPrjFile).arg(info.exists()).arg(folderInfo.exists());
        qWarning() << "Develop:" << strDetail;
        QMessageBox::warning(this, tr("Develop"),
                             tr("The test project folder does not exist:\n%1").arg(strFolder));
        return;
    }

    for(;;) {
        VSCodeLauncher::DetectResult result = m_pVSCodeLauncher->Detect();
        if(result.status == VSCodeLauncher::VSFound) {
            QString strError;
            QString strDetail;
            if(!m_pVSCodeLauncher->OpenFolder(strFolder, &strError, &strDetail)) {
                qWarning() << "Develop:" << strDetail;
                QMessageBox::warning(this, tr("Develop"),
                    tr("%1\n\nPlease check the VS Code installation and try again.").arg(strError));
            }
            return;
        }

        if(!showVSCodeNotFoundGuide())
            return;
    }
}

void MainWindow::createAppBar()
{
    m_appBar = new QFrame(this);
    m_appBar->setObjectName("AppBar");
    m_appBar->setFixedHeight(56);

    QHBoxLayout* pLayout = new QHBoxLayout(m_appBar);
    pLayout->setContentsMargins(10, 4, 10, 4);
    pLayout->setSpacing(10);

    // 2026-11-22 M3 T-UI-15 左上角使用原程序 ATE.ico，32x32 等比缩放
    QLabel* pBrandIcon = new QLabel(m_appBar);
    pBrandIcon->setObjectName("BrandIcon");
    pBrandIcon->setFixedSize(32, 32);
    pBrandIcon->setPixmap(QIcon(":/ATE.ico").pixmap(32, 32));
    pBrandIcon->setToolTip("TreeATE");
    pLayout->addWidget(pBrandIcon);

    m_labelBrand = new QLabel("TreeATE", m_appBar);
    m_labelBrand->setObjectName("BrandTitle");
    pLayout->addWidget(m_labelBrand);

    m_labelVersion = new QLabel(QString("v%1").arg(TREEATE_VERSION_STR), m_appBar);
    m_labelVersion->setObjectName("BrandVersion");
    pLayout->addWidget(m_labelVersion);

    createMainMenuButton(m_appBar, pLayout);

    // 2026-11-22 加载/测试/停止三个按键移到菜单之后
    m_pBtnLoad = new QToolButton(m_appBar);
    m_pBtnLoad->setObjectName("BtnLoad");
    m_pBtnLoad->setDefaultAction(ui->actionLoading);
    m_pBtnLoad->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    m_pBtnLoad->setFixedHeight(40);
    pLayout->addWidget(m_pBtnLoad);

    m_pBtnTest = new QToolButton(m_appBar);
    m_pBtnTest->setObjectName("BtnTest");
    m_pBtnTest->setDefaultAction(ui->actionPlay);
    m_pBtnTest->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    m_pBtnTest->setFixedHeight(40);
    pLayout->addWidget(m_pBtnTest);

    m_pBtnStop = new QToolButton(m_appBar);
    m_pBtnStop->setObjectName("BtnStop");
    m_pBtnStop->setDefaultAction(ui->actionStop);
    m_pBtnStop->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    m_pBtnStop->setFixedHeight(40);
    pLayout->addWidget(m_pBtnStop);

    // 2026-11-22 “属性”按键紧随“停止”，用于显示/隐藏右侧属性面板
    m_pBtnProperty = new QToolButton(m_appBar);
    m_pBtnProperty->setObjectName("BtnProperty");
    m_pBtnProperty->setDefaultAction(ui->actionProperty);
    m_pBtnProperty->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    m_pBtnProperty->setFixedHeight(40);
    pLayout->addWidget(m_pBtnProperty);

    pLayout->addStretch(1);

    m_labelStationName = new QLabel(m_appBar);
    m_labelStationName->setObjectName("AppStation");
    m_labelStationName->setToolTip(tr("Line and station name."));
    pLayout->addWidget(m_labelStationName);

    createLanguageButton(pLayout);
    createThemeButton(m_appBar, pLayout);

    // 2026-11-22 右上角关闭按键：退出 TreeATE
    m_pBtnExit = new QToolButton(m_appBar);
    m_pBtnExit->setObjectName("ExitButton");
    m_pBtnExit->setText(QString::fromUtf8("✕"));
    m_pBtnExit->setToolButtonStyle(Qt::ToolButtonTextOnly);
    m_pBtnExit->setAutoRaise(true);
    m_pBtnExit->setFixedSize(40, 40);
    m_pBtnExit->setToolTip(ui->actionExit->text());
    connect(m_pBtnExit, &QToolButton::clicked, this, &MainWindow::close);
    pLayout->addWidget(m_pBtnExit);

    // 2026-11-22 应用栏放入顶部 QToolBar，使右侧坞区始终位于工具栏下方
    m_appToolBar = new QToolBar(this);
    m_appToolBar->setObjectName("AppBarToolBar");
    // 2026-11-22 视图菜单的工具栏列表使用该名称
    m_appToolBar->setWindowTitle(tr("Menu Toolbar"));
    m_appToolBar->setMovable(true);
    m_appToolBar->setFloatable(false);
    m_appToolBar->setAllowedAreas(Qt::TopToolBarArea);
    m_appToolBar->setFixedHeight(56);
    m_appToolBar->addWidget(m_appBar);
    addToolBar(Qt::TopToolBarArea, m_appToolBar);
}

void MainWindow::createScanBar()
{
    m_scanBar = new QFrame(this);
    m_scanBar->setObjectName("ScanBar");
    m_scanBar->setFixedHeight(56);

    QHBoxLayout* pLayout = new QHBoxLayout(m_scanBar);
    pLayout->setContentsMargins(10, 4, 10, 4);
    pLayout->setSpacing(8);

    m_labelBarcodeIcon = new QLabel(m_scanBar);
    m_labelBarcodeIcon->setObjectName("BarcodeIcon");
    m_labelBarcodeIcon->setFixedSize(24, 24);
    m_labelBarcodeIcon->setToolTip(tr("Please scan the barcode to load or play."));
    pLayout->addWidget(m_labelBarcodeIcon);

    m_leTotalSN = new TALineEdit(m_scanBar);
    m_leTotalSN->setObjectName("BarcodeInput");
    m_leTotalSN->setContextMenuPolicy(Qt::NoContextMenu);
    m_leTotalSN->setFixedHeight(48);
    m_leTotalSN->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    connect(m_leTotalSN, SIGNAL(returnPressed()), this, SLOT(on_barcode_returnPressed()));
    pLayout->addWidget(m_leTotalSN, 1);

    m_labelStatusChip = new QLabel(tr("Unload"), m_scanBar);
    m_labelStatusChip->setObjectName("StatusChip");
    m_labelStatusChip->setFixedWidth(96);
    m_labelStatusChip->setAlignment(Qt::AlignCenter);
    m_labelStatusChip->setProperty("state", "neutral");
    pLayout->addWidget(m_labelStatusChip);

    // 2026-11-22 加载/测试/停止已移至应用栏，扫描条仅保留条码输入与状态灯
    // 2026-11-22 扫描条放入第二个顶部 QToolBar，与坞区保持上下分离
    m_scanToolBar = new QToolBar(this);
    m_scanToolBar->setObjectName("ScanBarToolBar");
    // 2026-11-22 视图菜单的工具栏列表使用该名称
    m_scanToolBar->setWindowTitle(tr("Barcode Toolbar"));
    m_scanToolBar->setMovable(true);
    m_scanToolBar->setFloatable(false);
    m_scanToolBar->setAllowedAreas(Qt::TopToolBarArea);
    m_scanToolBar->setFixedHeight(56);
    m_scanToolBar->addWidget(m_scanBar);
    addToolBarBreak(Qt::TopToolBarArea);
    addToolBar(Qt::TopToolBarArea, m_scanToolBar);

    // 错误横幅：位于扫描执行条下方，不遮挡主操作按钮
    m_errorBanner = new QFrame(this);
    m_errorBanner->setObjectName("ErrorBanner");
    m_errorBanner->setProperty("level", "warn");
    m_errorBanner->setVisible(false);
    QHBoxLayout* pBannerLayout = new QHBoxLayout(m_errorBanner);
    pBannerLayout->setContentsMargins(10, 4, 10, 4);
    pBannerLayout->setSpacing(8);
    m_labelErrorBanner = new QLabel(m_errorBanner);
    m_labelErrorBanner->setObjectName("ErrorBannerText");
    m_labelErrorBanner->setWordWrap(true);
    pBannerLayout->addWidget(m_labelErrorBanner, 1);
    m_pBannerAction = new QPushButton(m_errorBanner);
    m_pBannerAction->setObjectName("BannerAction");
    m_pBannerAction->setVisible(false);
    connect(m_pBannerAction, SIGNAL(clicked()), this, SLOT(onBannerActionClicked()));
    pBannerLayout->addWidget(m_pBannerAction);
    if(ui->verticalLayout)
        ui->verticalLayout->insertWidget(0, m_errorBanner);

    m_pBannerTimer = new QTimer(this);
    m_pBannerTimer->setSingleShot(true);
    connect(m_pBannerTimer, &QTimer::timeout, this, &MainWindow::hideErrorBanner);
}

void MainWindow::createStatusBarItems()
{
    statusBar()->setFixedHeight(32);

    m_labelPath = new QLabel(tr("Path of test project"), this);
    m_labelPath->setObjectName("StatusPath");
    m_labelPath->setToolTip(tr("Click to copy the path."));
    m_labelPath->setCursor(Qt::PointingHandCursor);
    m_labelPath->installEventFilter(this);

    m_labelUser = new QLabel(tr("User name"), this);
    m_labelTime = new QLabel(tr("Current Time"), this);
    m_labelGuid = new QLabel(tr("Device ID"), this);

    m_labelHistoryRst = new QLabel(QString::fromUtf8("● ") + tr("History Result"), this);
    m_labelHistoryRst->setObjectName("HistoryResult");
    m_labelHistoryRst->setToolTip(tr("Orange color indicates that there is local history result has not been uploaded to the server"));

    statusBar()->addWidget(m_labelPath, 1);
    statusBar()->addPermanentWidget(m_labelHistoryRst, 0);
    statusBar()->addPermanentWidget(m_labelUser, 1);
    statusBar()->addPermanentWidget(m_labelGuid, 0);
    statusBar()->addPermanentWidget(m_labelTime, 0);
}

void MainWindow::createLogToolBar()
{
    QWidget* pBar = new QWidget(this);
    pBar->setObjectName("LogToolBar");
    QHBoxLayout* pLayout = new QHBoxLayout(pBar);
    pLayout->setContentsMargins(4, 2, 4, 2);
    pLayout->setSpacing(6);

    m_pLogPauseBtn = new QToolButton(pBar);
    m_pLogPauseBtn->setObjectName("LogPause");
    m_pLogPauseBtn->setText(tr("Pause"));
    m_pLogPauseBtn->setCheckable(true);
    connect(m_pLogPauseBtn, SIGNAL(toggled(bool)), this, SLOT(onLogPauseToggled()));
    pLayout->addWidget(m_pLogPauseBtn);

    m_pLogClearBtn = new QToolButton(pBar);
    m_pLogClearBtn->setObjectName("LogClear");
    m_pLogClearBtn->setText(tr("Clear"));
    connect(m_pLogClearBtn, SIGNAL(clicked()), this, SLOT(onLogClearClicked()));
    pLayout->addWidget(m_pLogClearBtn);

    m_pLogCopyBtn = new QToolButton(pBar);
    m_pLogCopyBtn->setObjectName("LogCopy");
    m_pLogCopyBtn->setText(tr("Copy"));
    connect(m_pLogCopyBtn, SIGNAL(clicked()), this, SLOT(onLogCopyClicked()));
    pLayout->addWidget(m_pLogCopyBtn);

    pLayout->addStretch(1);
    if(ui->verticalLayout_3)
        ui->verticalLayout_3->insertWidget(0, pBar);
}

void MainWindow::createLanguageButton(QHBoxLayout* layout)
{
    // 2026-11-22 语言切换改为点击循环切换（与 TreeResults 一致），不再使用下拉菜单
    m_languageButton = new QToolButton(this);
    m_languageButton->setObjectName("LanguageButton");
    m_languageButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
    m_languageButton->setAutoRaise(true);
    m_languageButton->setCursor(Qt::PointingHandCursor);
    m_languageButton->setToolTip(tr("Language"));
    m_languageButton->setMinimumHeight(40);
    m_languageButton->setText(LanguageManager::instance()->currentNativeName());
    layout->addWidget(m_languageButton);

    connect(m_languageButton, &QToolButton::clicked, this, &MainWindow::onLanguageButtonClicked);
    connect(LanguageManager::instance(), &LanguageManager::languageChanged, this,
            [this](const QString&) {
        m_languageButton->setText(LanguageManager::instance()->currentNativeName());
        m_languageButton->setToolTip(tr("Language"));
    });
}

void MainWindow::onLanguageButtonClicked()
{
    LanguageManager* pMgr = LanguageManager::instance();
    const QList<LanguageInfo> lstLang = pMgr->languages();
    if(lstLang.isEmpty())
        return;

    const QString strCur = pMgr->currentCode();
    int nNext = 0;
    for(int i = 0; i < lstLang.size(); i++) {
        if(lstLang.at(i).code == strCur) {
            nNext = (i + 1) % lstLang.size();
            break;
        }
    }

    QString strError;
    if(!pMgr->applyLanguage(lstLang.at(nNext).code, &strError))
        QMessageBox::warning(this, tr("Language"), strError);
}

void MainWindow::createMainMenuButton(QWidget* parent, QHBoxLayout* layout)
{
    QMenu* appMenu = new QMenu(this);
    appMenu->addMenu(ui->menuFile);
    appMenu->addMenu(ui->menuProjects);
    appMenu->addMenu(ui->menu_Sys);
    appMenu->addMenu(ui->menu_View);
    appMenu->addMenu(ui->menu_Help);

    m_menuButton = new QToolButton(parent);
    m_menuButton->setObjectName("MenuButton");
    m_menuButton->setText(QString::fromUtf8("☰ ") + tr("Menu"));
    m_menuButton->setToolTip(tr("Main menu"));
    m_menuButton->setPopupMode(QToolButton::InstantPopup);
    m_menuButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
    m_menuButton->setAutoRaise(true);
    m_menuButton->setMenu(appMenu);
    layout->addWidget(m_menuButton);

    // 新界面用应用栏上的“菜单”入口替代传统菜单栏
    ui->menuBar->setVisible(false);
}

void MainWindow::createThemeButton(QWidget* parent, QHBoxLayout* layout)
{
    // 2026-11-22 主题切换改为点击循环切换（与 TreeResults 一致），不再使用下拉菜单
    ThemeManager* pThemeMgr = ThemeManager::instance();

    m_themeButton = new QToolButton(parent);
    m_themeButton->setObjectName("ThemeButton");
    m_themeButton->setText(QString::fromUtf8("◐"));
    m_themeButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
    m_themeButton->setAutoRaise(true);
    m_themeButton->setCursor(Qt::PointingHandCursor);
    m_themeButton->setFixedSize(40, 40);
    layout->addWidget(m_themeButton);

    connect(m_themeButton, &QToolButton::clicked, this, &MainWindow::onThemeButtonClicked);
    connect(pThemeMgr, SIGNAL(themeChanged(int)), this, SLOT(onThemeChanged(int)));
    onThemeChanged(pThemeMgr->currentTheme());
}

void MainWindow::onThemeButtonClicked()
{
    ThemeManager* pThemeMgr = ThemeManager::instance();
    const int nNext = (pThemeMgr->currentTheme() + 1) % ThemeManager::ThemeCount;

    QString strError;
    if(!pThemeMgr->applyTheme(nNext, &strError))
        QMessageBox::warning(this, tr("Theme"), strError);
}

void MainWindow::onThemeChanged(int nTheme)
{
    if(m_themeButton) {
        m_themeButton->setToolTip(tr("Theme: %1").arg(ThemeManager::instance()->themeName(nTheme)));
    }
    applyThemeChrome();
}

void MainWindow::applyThemeChrome()
{
    if(ui && ui->mdiArea) {
        QBrush bg(Qt::SolidPattern);
        bg.setColor(ThemeManager::instance()->mdiBackground());
        ui->mdiArea->setBackground(bg);
    }
    if(ui && ui->progressBar)
        repolishWidget(ui->progressBar);
    if(m_labelHistoryRst)
        repolishWidget(m_labelHistoryRst);
}

void MainWindow::updateStatusChip(eTestStatus eStatus)
{
    if(!m_labelStatusChip)
        return;

    QString strText;
    QString strState = "neutral";
    switch(eStatus)
    {
    case Unload:    strText = tr("Unload");       break;
    case Loading:   strText = tr("Loading...");   break;
    case Ready:     strText = tr("Ready");        break;
    case Testing:   strText = tr("GO...");        break;
    // 状态位使用独立文案，避免与计数卡片标题共用 "Pass"/"Fail" 源串而显示“良品次数”
    case Failed:    strText = tr("Failed");         strState = "fail";  break;
    case Exception: strText = tr("ERROR");          strState = "exce";  break;
    case Pass:      strText = tr("Done");           strState = "pass";  break;
    }

    m_labelStatusChip->setText(strText);
    m_labelStatusChip->setProperty("state", strState);
    repolishWidget(m_labelStatusChip);
}

void MainWindow::applyCompactLayout(bool bCompact)
{
    if(m_bCompact == bCompact)
        return;
    m_bCompact = bCompact;

    const int nBarHeight = bCompact ? 48 : 56;
    if(m_appBar)
        m_appBar->setFixedHeight(nBarHeight);
    if(m_scanBar)
        m_scanBar->setFixedHeight(nBarHeight);
    if(m_appToolBar)
        m_appToolBar->setFixedHeight(nBarHeight);
    if(m_scanToolBar)
        m_scanToolBar->setFixedHeight(nBarHeight);
    if(m_leTotalSN)
        m_leTotalSN->setFixedHeight(bCompact ? 36 : 48);

    // 紧凑模式下默认收起属性检查器与底部信息区，功能仍可通过菜单/操作展开
    if(ui && ui->dockWidget_Property)
        ui->dockWidget_Property->setVisible(!bCompact && m_bPropertyPreferred);
    if(ui && ui->dockWidget_Log)
        ui->dockWidget_Log->setVisible(!bCompact);
    if(m_dockCounts)
        m_dockCounts->setVisible(!bCompact);
}

bool MainWindow::restoreWindowLayout()
{
    QSettings settings(m_strAppDir + "/Config/layout.ini", QSettings::IniFormat);
    const QByteArray baState = settings.value("MainWindow/State").toByteArray();
    if(!baState.isEmpty())
        restoreState(baState);

    if(ui && ui->actionProperty && ui->dockWidget_Property)
        ui->actionProperty->setChecked(ui->dockWidget_Property->isVisible());

    return !baState.isEmpty();
}

// 2026-11-22 默认布局：计数坞以浮动窗口停在主窗口右下角
void MainWindow::placeCountsDockDefault()
{
    if(!m_dockCounts || m_bCompact)
        return;

    m_dockCounts->setFloating(true);
    m_dockCounts->resize(320, 300);

    const QRect rcMain = frameGeometry();
    const int nX = qMax(rcMain.left() + 8, rcMain.right() - m_dockCounts->width() - 16);
    const int nY = qMax(rcMain.top() + 8, rcMain.bottom() - m_dockCounts->height() - 40);
    m_dockCounts->move(nX, nY);
    m_dockCounts->show();
    m_dockCounts->raise();
}

void MainWindow::updateEmptyHint()
{
    if(!m_labelEmptyHint || !ui || !ui->mdiArea)
        return;

    m_labelEmptyHint->setGeometry(ui->mdiArea->viewport()->rect());
    const bool bEmpty = ui->mdiArea->subWindowList().isEmpty();
    m_labelEmptyHint->setVisible(bEmpty);
    if(bEmpty)
        m_labelEmptyHint->raise();
}

void MainWindow::saveWindowLayout()
{
    QDir().mkpath(m_strAppDir + "/Config");
    QSettings settings(m_strAppDir + "/Config/layout.ini", QSettings::IniFormat);
    settings.setValue("MainWindow/State", saveState());
    settings.sync();
}

void MainWindow::showErrorBanner(const QString& strLevel, const QString& strText,
                                 const QString& strActionText)
{
    if(!m_errorBanner || !m_labelErrorBanner)
        return;

    m_errorBanner->setProperty("level", strLevel);
    m_labelErrorBanner->setText(strText);
    if(m_pBannerAction) {
        m_pBannerAction->setVisible(!strActionText.isEmpty());
        m_pBannerAction->setText(strActionText);
    }
    m_errorBanner->setVisible(true);
    repolishWidget(m_errorBanner);

    if(m_pBannerTimer)
        m_pBannerTimer->start(strLevel == "error" ? 15000 : 8000);
}

void MainWindow::hideErrorBanner()
{
    if(m_errorBanner)
        m_errorBanner->setVisible(false);
}

void MainWindow::showInlineError(QLineEdit* pEdit, const QString& strText)
{
    if(!pEdit)
        return;

    pEdit->setProperty("invalid", true);
    repolishWidget(pEdit);
    pEdit->setToolTip(strText);
    pEdit->setFocus();
    statusBar()->showMessage(strText, 5000);

    QTimer::singleShot(4000, pEdit, [pEdit]() {
        pEdit->setProperty("invalid", false);
        repolishWidget(pEdit);
    });
}

void MainWindow::shakeWidget(QWidget* pWidget)
{
    if(!pWidget)
        return;

    QPropertyAnimation* pAnim = new QPropertyAnimation(pWidget, "pos", pWidget);
    pAnim->setDuration(240);
    const QPoint ptBase = pWidget->pos();
    pAnim->setKeyValueAt(0.0, ptBase);
    pAnim->setKeyValueAt(0.25, ptBase + QPoint(-6, 0));
    pAnim->setKeyValueAt(0.5, ptBase + QPoint(6, 0));
    pAnim->setKeyValueAt(0.75, ptBase + QPoint(-4, 0));
    pAnim->setKeyValueAt(1.0, ptBase);
    pAnim->start(QAbstractAnimation::DeleteWhenStopped);
}

void MainWindow::setPropertyPlaceholderVisible(bool bVisible)
{
    if(!m_labelPropertyPlaceholder)
        return;

    m_labelPropertyPlaceholder->setVisible(bVisible);
    ui->tableWidget_Property->setVisible(!bVisible);
    ui->pushButton_SaveCfg->setVisible(!bVisible);
    // 2026-11-22 作用域标识常驻：未选中工程时显示 No project
    ui->label_propertyName->setVisible(true);
    ui->label_propertyName->setProperty("empty", bVisible);
    if(bVisible) {
        m_strPropertyScope.clear();
        ui->label_propertyName->setText(tr("No project"));
    }
    repolishWidget(ui->label_propertyName);
}

void MainWindow::updateAllKpi(quint32 nPass, quint32 nFail, quint32 nExce)
{
    if(!ui || !ui->mdiArea)
        return;

    const QList<QMdiSubWindow*> lstWin = ui->mdiArea->subWindowList();
    for(QMdiSubWindow* pSubWin : lstWin) {
        if(!pSubWin)
            continue;
        TATreeWidget* pTree = qobject_cast<TATreeWidget*>(pSubWin->widget());
        if(pTree)
            pTree->setCounts(nPass, nFail, nExce);
    }
}

void MainWindow::onBannerActionClicked()
{
    hideErrorBanner();
    on_actionSys_options_triggered();
}

void MainWindow::onLogPauseToggled()
{
    m_bLogPaused = m_pLogPauseBtn && m_pLogPauseBtn->isChecked();
    if(m_pLogPauseBtn)
        m_pLogPauseBtn->setText(m_bLogPaused ? tr("Resume") : tr("Pause"));
}

void MainWindow::onLogClearClicked()
{
    ui->textBrowser_Log->clear();
}

void MainWindow::onLogCopyClicked()
{
    ui->textBrowser_Log->selectAll();
    ui->textBrowser_Log->copy();
}

void MainWindow::onToggleFullScreen()
{
    if(isFullScreen())
        showNormal();
    else
        showFullScreen();
}

bool MainWindow::eventFilter(QObject* watched, QEvent* e)
{
    if(ui && ui->mdiArea && watched == ui->mdiArea->viewport() && e->type() == QEvent::Resize) {
        updateEmptyHint();
    }
    if(watched == m_labelPath && e->type() == QEvent::MouseButtonRelease) {
        QGuiApplication::clipboard()->setText(m_labelPath->text());
        statusBar()->showMessage(tr("Path copied."), 2000);
        return true;
    }
    return QMainWindow::eventFilter(watched, e);
}

void MainWindow::resizeEvent(QResizeEvent* e)
{
    QMainWindow::resizeEvent(e);
    if(e)
        applyCompactLayout(e->size().width() < 1180 || e->size().height() < 760);
}

void MainWindow::retranslateCountsDock()
{
    if(m_dockCounts)
        m_dockCounts->setWindowTitle(tr("Counts"));
    if(m_labelCountsExceTitle)
        m_labelCountsExceTitle->setText(tr("Exception"));
    if(m_labelCountsFailTitle)
        m_labelCountsFailTitle->setText(tr("Fail"));
    if(m_labelCountsPassTitle)
        m_labelCountsPassTitle->setText(tr("Pass"));
    if(m_labelCountsTotalTitle)
        m_labelCountsTotalTitle->setText(tr("Total"));
    if(m_pClearCountsBtn)
        m_pClearCountsBtn->setText(tr("Clear"));
}

void MainWindow::retranslateDynamicUi()
{
    if(m_labelPath) {
        if(m_totalStatus == Unload || m_labelPath->text().isEmpty())
            m_labelPath->setText(tr("Unload"));
    }
    if(m_labelHistoryRst) {
        m_labelHistoryRst->setText(QString::fromUtf8("● ") + tr("History Result"));
        m_labelHistoryRst->setToolTip(tr("Orange color indicates that there is local history result has not been uploaded to the server"));
    }
    if(m_labelUser && m_strUser.isEmpty())
        m_labelUser->setText(tr("User name"));
    if(m_labelPath)
        m_labelPath->setToolTip(tr("Click to copy the path."));
    if(m_labelPropertyPlaceholder)
        m_labelPropertyPlaceholder->setText(tr("Select a test project to view its properties"));
    if(m_labelPropertySection)
        m_labelPropertySection->setText(tr("Project Properties"));
    if(m_labelPropertyHint)
        m_labelPropertyHint->setText(tr("Changes take effect after saving"));
    if(ui && ui->label_propertyName) {
        if(ui->label_propertyName->property("empty").toBool())
            ui->label_propertyName->setText(tr("No project"));
        else
            ui->label_propertyName->setText(m_strPropertyScope);
    }
    if(m_pLogPauseBtn)
        m_pLogPauseBtn->setText(m_bLogPaused ? tr("Resume") : tr("Pause"));
    if(m_pLogClearBtn)
        m_pLogClearBtn->setText(tr("Clear"));
    if(m_pLogCopyBtn)
        m_pLogCopyBtn->setText(tr("Copy"));
    updateStatusChip(m_totalStatus);
    if(m_labelGuid && m_labelGuid->text().isEmpty())
        m_labelGuid->setText(tr("Device ID"));
    if(m_labelTime && m_labelTime->text().isEmpty())
        m_labelTime->setText(tr("Current Time"));
    if(m_labelStationName)
        m_labelStationName->setToolTip(tr("Line and station name."));
    if(m_labelBarcodeIcon)
        m_labelBarcodeIcon->setToolTip(tr("Please scan the barcode to load or play."));

    if(m_menuButton) {
        m_menuButton->setText(QString::fromUtf8("☰ ") + tr("Menu"));
        m_menuButton->setToolTip(tr("Main menu"));
    }
    if(m_themeButton)
        m_themeButton->setToolTip(tr("Theme: %1").arg(ThemeManager::instance()->themeName(ThemeManager::instance()->currentTheme())));
    if(m_pBtnExit)
        m_pBtnExit->setToolTip(ui->actionExit->text());
    if(m_appToolBar)
        m_appToolBar->setWindowTitle(tr("Menu Toolbar"));
    if(m_scanToolBar)
        m_scanToolBar->setWindowTitle(tr("Barcode Toolbar"));
    if(m_labelEmptyHint)
        m_labelEmptyHint->setText(tr("Please load a test project and then start the test"));

    retranslateCountsDock();
}

void MainWindow::on_reload_testUnit()
{
    QString strFile = m_labelPath->text();
    QFileInfo info(strFile);
    if(info.isFile())
        loadUnits(strFile);
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
        retranslateDynamicUi();
    }
}

void MainWindow::on_action_Help_triggered()
{
    QDesktopServices::openUrl(QUrl("https://www.treeate.top"));
}

void MainWindow::on_mdiArea_subWindowActivated(QMdiSubWindow *arg1)
{
    if(arg1) {
        showPara(arg1->windowTitle());
    }
    else {
        setPropertyPlaceholderVisible(true);
    }
    updateEmptyHint();
}

void MainWindow::on_actionTile_View_triggered()
{    
    if(ui->mdiArea) {
        ui->mdiArea->tileSubWindows();
        ui->actionTile_View->setChecked(true);
        ui->actionTab_View->setChecked(false);
        ui->actionTandem->setChecked(false);
    }
}

void MainWindow::on_actionTab_View_triggered()
{
    if(ui->mdiArea) {
        ui->mdiArea->setViewMode(QMdiArea::TabbedView);
        ui->actionTile_View->setChecked(false);
        ui->actionTab_View->setChecked(true);
        ui->actionTandem->setChecked(false);
    }
}

void MainWindow::on_actionTandem_triggered()
{
    if(ui->mdiArea) {
        ui->actionTandem->setChecked(true);
        ui->actionTile_View->setChecked(false);
        ui->actionTab_View->setChecked(false);

        ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
        const int nCnt = ui->mdiArea->subWindowList().size();
        if(nCnt <= 0) {
            return;
        }

        const int minWidth = 200;
        QSize mdiSize = ui->mdiArea->size();
        int width = mdiSize.width() / nCnt;
        width = width < minWidth ? minWidth : width;
        QSize subWinSize = QSize(width, mdiSize.height());
        int i = 0;
        foreach(QMdiSubWindow* pSubWin, ui->mdiArea->subWindowList(QMdiArea::CreationOrder)) {
            ui->mdiArea->subWindowActivated(pSubWin);
            pSubWin->resize(subWinSize);
            pSubWin->move(width * i, 0/*pSubWin->pos().y()*/);
            i++;
        }
    }
}

QDockWidget* MainWindow::createDockWinCounts()
{
    QDockWidget* dockWidget = new QDockWidget(this);
    dockWidget->setObjectName("dockWidget_Counts");
    dockWidget->setWindowTitle(tr("Counts"));
    dockWidget->setLayoutDirection(Qt::LayoutDirectionAuto);
    QWidget *dockWidgetContents = new QWidget(dockWidget);
    dockWidgetContents->setContentsMargins(0, 0, 0, 0);
    dockWidget->setWidget(dockWidgetContents);

    // 2026-11-22 统计样式统一到“统计”页签：卡片式 KPI，与设计稿一致
    QGridLayout* pCardLayout = new QGridLayout(dockWidgetContents);
    pCardLayout->setContentsMargins(10, 8, 10, 8);
    pCardLayout->setSpacing(10);

    auto addCard = [&](const QString& kind, const QString& title,
                       QLabel*& pTitle, QLabel*& pValue, QLabel** ppRate) -> QFrame* {
        QFrame* pCard = new QFrame(dockWidgetContents);
        pCard->setObjectName("CountsCard");
        pCard->setProperty("kind", kind);

        QVBoxLayout* pCardLay = new QVBoxLayout(pCard);
        pCardLay->setContentsMargins(14, 8, 14, 8);
        pCardLay->setSpacing(2);

        pTitle = new QLabel(title, pCard);
        pTitle->setObjectName("CountsCardTitle");
        pValue = new QLabel("0", pCard);
        pValue->setObjectName("CountsCardValue");
        pValue->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        pCardLay->addWidget(pTitle);
        pCardLay->addWidget(pValue);
        if(ppRate) {
            *ppRate = new QLabel("0.0%", pCard);
            (*ppRate)->setObjectName("CountsCardRate");
            pCardLay->addWidget(*ppRate);
        }
        pCardLay->addStretch(1);
        return pCard;
    };

    QFrame* pPassCard = addCard("pass", tr("Pass"), m_labelCountsPassTitle, m_labelPassCnts, &m_labelPassRate);
    QFrame* pFailCard = addCard("fail", tr("Fail"), m_labelCountsFailTitle, m_labelFailCnts, &m_labelFailRate);
    QFrame* pExceCard = addCard("exce", tr("Exception"), m_labelCountsExceTitle, m_labelExceCnts, &m_labelExceRate);
    QFrame* pTotalCard = addCard("total", tr("Total"), m_labelCountsTotalTitle, m_labelTotalCnts, NULL);

    pCardLayout->addWidget(pPassCard, 0, 0);
    pCardLayout->addWidget(pFailCard, 0, 1);
    pCardLayout->addWidget(pExceCard, 1, 0);
    pCardLayout->addWidget(pTotalCard, 1, 1);
    pCardLayout->setColumnStretch(0, 1);
    pCardLayout->setColumnStretch(1, 1);

    // Clear button
    m_pClearCountsBtn = new QPushButton(tr("Clear"), dockWidgetContents);
    m_pClearCountsBtn->setObjectName("CountsClearButton");
    connect(m_pClearCountsBtn, SIGNAL(clicked(bool)), SLOT(dockWinCounts_Clear_triggered()));
    pCardLayout->addWidget(m_pClearCountsBtn, 2, 0, 1, 2, Qt::AlignRight | Qt::AlignBottom);

    updateCompletedCounts(0, 0, 0);

    return dockWidget;
}

void MainWindow::dockWinCounts_Clear_triggered()
{
    m_pTestMgr->ClearCurrentCounts();
    updateCompletedCounts(0, 0, 0);
}

void MainWindow::updateCompletedCounts(quint32 nPass, quint32 nFail, quint32 nExce)
{
    const quint32 nTotal = nExce + nFail + nPass;
    if(nTotal == 0) {
        m_labelExceCnts->setText("0");
        m_labelExceRate->setText("0.0%");

        m_labelFailCnts->setText("0");
        m_labelFailRate->setText("0.0%");

        m_labelPassCnts->setText("0");
        m_labelPassRate->setText("0.0%");

        m_labelTotalCnts->setText("0");
        updateAllKpi(0, 0, 0);
        return;
    }

    m_labelExceCnts->setText(QString::number(nExce));
    m_labelExceRate->setText(QString::number((double)nExce / nTotal * 100, 'g', 4) + "%");

    m_labelFailCnts->setText(QString::number(nFail));
    m_labelFailRate->setText(QString::number((double)nFail / nTotal * 100, 'g', 4) + "%");

    m_labelPassCnts->setText(QString::number(nPass));
    m_labelPassRate->setText(QString::number((double)nPass / nTotal * 100, 'g', 4) + "%");

    m_labelTotalCnts->setText(QString::number(nTotal));
    updateAllKpi(nPass, nFail, nExce);
}
