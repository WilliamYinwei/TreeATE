///
/// @project       TreeATE
/// @brief         MainWindow of the test results
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-21 M4：查询台重排、只读库、参数化查询、分页/CSV/联动修复、三主题与双语
///                2026-11-21 左上角改用原程序图标、移除应用栏记录数、放大主题切换图标、重排工程结果列顺序
///                2026-11-21 结果查询补回 id 修复点击联动、开始时间列加宽完整显示
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tasqlquerymodel.h"
#include "dlgexport.h"
#include "version.h"

#include <QApplication>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QMessageBox>
#include <QLineEdit>
#include <QLabel>
#include <QToolButton>
#include <QToolBar>
#include <QMenuBar>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFrame>
#include <QSplitter>
#include <QTabWidget>
#include <QTableView>
#include <QHeaderView>
#include <QResizeEvent>
#include <QStatusBar>
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QTextStream>
#include <QSettings>
#include <QTranslator>
#include <QDateTime>
#include <QLocale>
#include <QStyle>
#include <QAbstractItemView>
#include <QItemSelectionModel>
#include <QPixmap>
#include <utility>

static const char* RST_CONNECTION = "treeate_sqlite_query_results";

static QString CsvField(const QString& strValue)
{
    const QString strText = strValue;
    const bool bNeedQuote = strText.contains(',') || strText.contains('"')
            || strText.contains('\n') || strText.contains('\r')
            || strText.startsWith(' ') || strText.endsWith(' ');
    if(!bNeedQuote)
        return strText;

    QString strOut = strText;
    strOut.replace("\"", "\"\"");
    return "\"" + strOut + "\"";
}

static QString CsvLine(const QStringList& lstFields)
{
    QStringList lstLine;
    foreach(const QString& strField, lstFields)
        lstLine.append(CsvField(strField));
    return lstLine.join(',');
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_queryModel(nullptr),
    m_queryCaseModel(nullptr),
    m_queryDetialModel(nullptr),
    m_pBtnTheme(nullptr),
    m_pBtnLang(nullptr),
    m_pLabelDbStatus(nullptr),
    m_pLabelBrandVer(nullptr),
    m_pLabelDbPath(nullptr),
    m_pLabelTotal(nullptr),
    m_pLabelSummary(nullptr),
    m_pLabelSort(nullptr),
    m_pEmptyResult(nullptr),
    m_pEmptyCase(nullptr),
    m_pEmptyDetail(nullptr),
    m_pStatusDb(nullptr),
    m_pStatusReadonly(nullptr),
    m_pStatusTotal(nullptr),
    m_pStatusPage(nullptr),
    m_pStatusVersion(nullptr),
    m_pTableResult(nullptr),
    m_pBottomSplit(nullptr),
    m_pBottomTabs(nullptr),
    m_pCasePanel(nullptr),
    m_pDetailPanel(nullptr),
    m_pBtnFirst(nullptr),
    m_pBtnLast(nullptr),
    m_pTranslator(nullptr),
    m_bDbReady(false),
    m_theme(0),
    m_currentPage(0),
    m_totalPage(0),
    m_totalRcdCnt(0),
    m_pageRcdCnt(10),
    m_bCompact(false)
{
    LoadSettings();

    // 安装翻译必须在 setupUi 之前，保证首屏文案即为所选语言
    if(m_strLanguage == "zh") {
        m_pTranslator = new QTranslator();
        if(m_pTranslator->load(":/i18n/treeresults_zh.qm"))
            qApp->installTranslator(m_pTranslator);
    }

    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);

    m_mpPrjItems.insert("Name of project", "tp.name");
    m_mpPrjItems.insert("Path/Long Name of project", "tp.longname");
    m_mpPrjItems.insert("Description of project", "tp.desc");
    m_mpPrjItems.insert("Barcode/SN", "tp.barcode");
    m_mpPrjItems.insert("Start time of project", "tp.time");
    m_mpPrjItems.insert("Spend time of project", "tp.spend");
    m_mpPrjItems.insert("User", "tp.user");
    m_mpPrjItems.insert("Result of project", "tp.rst");
    m_mpPrjItems.insert("Version", "tp.version");
    m_mpPrjItems.insert("Working line", "tp.workingline");
    m_mpPrjItems.insert("Station", "tp.station");

    m_mpCaseItems.insert("Name of cases", "td.tc_name");
    m_mpCaseItems.insert("Path/Long Name of cases", "td.tc_path");
    m_mpCaseItems.insert("Start time of cases", "td.tc_time");
    m_mpCaseItems.insert("Description of cases", "td.tc_desc");
    m_mpCaseItems.insert("Result of cases", "td.tc_rst");
    m_mpCaseItems.insert("Spend time of cases", "td.tc_spend");

    m_mpDetailItems.insert("Name of details", "td.dr_name");
    m_mpDetailItems.insert("Value/Description", "td.dr_value");
    m_mpDetailItems.insert("Time of details", "td.dr_time");
    m_mpDetailItems.insert("Standard", "td.dr_standard");
    m_mpDetailItems.insert("Result of details", "td.dr_rst");

    m_queryModel = new TASqlQueryModel(this);
    m_queryCaseModel = new TASqlQueryModel(this);
    m_queryDetialModel = new TASqlQueryModel(this);
    m_queryModel->setResultColumn("rst");
    m_queryCaseModel->setResultColumn("rst");
    m_queryDetialModel->setResultColumn("rst");

    BuildUi();
    BuildStatusBar();
    ApplyTheme(m_theme);
    RetranslateUi();

    OpenDatabase();
    UpdateDatabaseState();
    on_actionSearch_triggered();
}

MainWindow::~MainWindow()
{
    if(m_queryModel) {
        m_queryModel->clear();
        delete m_queryModel;
        m_queryModel = nullptr;
    }
    if(m_queryCaseModel) {
        m_queryCaseModel->clear();
        delete m_queryCaseModel;
        m_queryCaseModel = nullptr;
    }
    if(m_queryDetialModel) {
        m_queryDetialModel->clear();
        delete m_queryDetialModel;
        m_queryDetialModel = nullptr;
    }

    if(m_dbSqlite.isOpen())
        m_dbSqlite.close();
    m_dbSqlite = QSqlDatabase();
    QSqlDatabase::removeDatabase(RST_CONNECTION);

    delete ui;
}

void MainWindow::LoadSettings()
{
    const QString strCfgDir = qApp->applicationDirPath() + "/Config";
    QDir().mkpath(strCfgDir);
    QSettings settings(strCfgDir + "/rst.cfg", QSettings::IniFormat);

    m_theme = settings.value("UI/Theme", 0).toInt();
    if(m_theme < 0 || m_theme > 2)
        m_theme = 0;

    m_strLanguage = settings.value("UI/Language").toString().trimmed().toLower();
    if(m_strLanguage != "zh" && m_strLanguage != "en") {
        m_strLanguage = (QLocale::system().language() == QLocale::Chinese) ? "zh" : "en";
    }
}

void MainWindow::SaveSettings()
{
    const QString strCfgDir = qApp->applicationDirPath() + "/Config";
    QDir().mkpath(strCfgDir);
    QSettings settings(strCfgDir + "/rst.cfg", QSettings::IniFormat);
    settings.setValue("UI/Theme", m_theme);
    settings.setValue("UI/Language", m_strLanguage);
}

void MainWindow::BuildUi()
{
    QWidget* pCentral = new QWidget(this);
    QVBoxLayout* pRoot = new QVBoxLayout(pCentral);
    pRoot->setContentsMargins(0, 0, 0, 0);
    pRoot->setSpacing(0);
    setCentralWidget(pCentral);

    // ---------- 应用栏 ----------
    QFrame* pAppBar = new QFrame(pCentral);
    pAppBar->setObjectName("AppBar");
    pAppBar->setFixedHeight(60);
    QHBoxLayout* pAppLay = new QHBoxLayout(pAppBar);
    pAppLay->setContentsMargins(20, 0, 20, 0);
    pAppLay->setSpacing(16);

    QLabel* pLogo = new QLabel(pAppBar);
    pLogo->setObjectName("BrandLogo");
    pLogo->setFixedSize(32, 32);
    pLogo->setAlignment(Qt::AlignCenter);
    // 左上角使用原程序图标，保持与 TreeATE 品牌一致
    pLogo->setPixmap(QPixmap(":/ate_rst.ico")
                     .scaled(32, 32, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    pAppLay->addWidget(pLogo);

    QVBoxLayout* pBrandLay = new QVBoxLayout();
    pBrandLay->setContentsMargins(0, 0, 0, 0);
    pBrandLay->setSpacing(0);
    QLabel* pBrand = new QLabel(pAppBar);
    pBrand->setObjectName("BrandName");
    pBrand->setText("TreeATE Results");
    m_pLabelBrandVer = new QLabel(pAppBar);
    m_pLabelBrandVer->setObjectName("BrandVer");
    pBrandLay->addWidget(pBrand);
    pBrandLay->addWidget(m_pLabelBrandVer);
    pAppLay->addLayout(pBrandLay);

    QFrame* pDivider = new QFrame(pAppBar);
    pDivider->setObjectName("Divider");
    pDivider->setFixedWidth(1);
    pDivider->setFixedHeight(30);
    pAppLay->addWidget(pDivider);

    QWidget* pDbInfo = new QWidget(pAppBar);
    QVBoxLayout* pDbLay = new QVBoxLayout(pDbInfo);
    pDbLay->setContentsMargins(0, 0, 0, 0);
    pDbLay->setSpacing(2);
    QLabel* pDbCap = new QLabel(pDbInfo);
    pDbCap->setObjectName("CaptionDb");
    m_pLabelDbPath = new QLabel(pDbInfo);
    m_pLabelDbPath->setObjectName("DbPath");
    // 长路径允许压缩，避免 1024 宽度下把窗口最小宽度撑大
    m_pLabelDbPath->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
    m_pLabelDbPath->setMinimumWidth(0);
    pDbLay->addWidget(pDbCap);
    pDbLay->addWidget(m_pLabelDbPath);
    pAppLay->addWidget(pDbInfo, 1);

    m_pBtnTheme = new QToolButton(pAppBar);
    m_pBtnTheme->setObjectName("ThemeButton");
    m_pBtnTheme->setText(QString::fromUtf8("◐"));
    m_pBtnTheme->setCursor(Qt::PointingHandCursor);
    // 图标尺寸由主题样式表控制（font-size），避免被全局 QSS 覆盖
    m_pBtnTheme->setFixedSize(40, 34);
    connect(m_pBtnTheme, SIGNAL(clicked()), this, SLOT(on_themeButton_clicked()));
    pAppLay->addWidget(m_pBtnTheme);

    m_pBtnLang = new QToolButton(pAppBar);
    m_pBtnLang->setObjectName("LangButton");
    m_pBtnLang->setCursor(Qt::PointingHandCursor);
    m_pBtnLang->setFixedHeight(34);
    connect(m_pBtnLang, SIGNAL(clicked()), this, SLOT(on_langButton_clicked()));
    pAppLay->addWidget(m_pBtnLang);

    QLabel* pReadonly = new QLabel(pAppBar);
    pReadonly->setObjectName("ReadonlyChip");
    pReadonly->setText(QString::fromUtf8("● ") + tr("Read-only"));
    pReadonly->setFixedHeight(28);
    pAppLay->addWidget(pReadonly);

    pRoot->addWidget(pAppBar);

    // ---------- 查询条 ----------
    QFrame* pQueryBar = new QFrame(pCentral);
    pQueryBar->setObjectName("QueryBar");
    pQueryBar->setFixedHeight(76);
    QHBoxLayout* pQueryLay = new QHBoxLayout(pQueryBar);
    pQueryLay->setContentsMargins(20, 0, 20, 0);
    pQueryLay->setSpacing(12);

    m_pLeBarcode = new QLineEdit(pQueryBar);
    m_pLeBarcode->setObjectName("BarcodeInput");
    m_pLeBarcode->setClearButtonEnabled(true);
    m_pLeBarcode->setFixedHeight(44);
    connect(m_pLeBarcode, SIGNAL(returnPressed()), this, SLOT(on_barcode_return_triggered()));
    pQueryLay->addWidget(m_pLeBarcode, 1);

    m_pLabelDbStatus = new QLabel(pQueryBar);
    m_pLabelDbStatus->setObjectName("StatusChip");
    m_pLabelDbStatus->setFixedHeight(36);
    pQueryLay->addWidget(m_pLabelDbStatus);

    QToolButton* pBtnSearch = new QToolButton(pQueryBar);
    pBtnSearch->setDefaultAction(ui->actionSearch);
    pBtnSearch->setObjectName("PrimaryButton");
    pBtnSearch->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    pBtnSearch->setFixedHeight(40);
    pBtnSearch->setCursor(Qt::PointingHandCursor);
    pQueryLay->addWidget(pBtnSearch);

    QToolButton* pBtnExport = new QToolButton(pQueryBar);
    pBtnExport->setDefaultAction(ui->actionExport);
    pBtnExport->setObjectName("GhostButton");
    pBtnExport->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    pBtnExport->setFixedHeight(40);
    pBtnExport->setCursor(Qt::PointingHandCursor);
    pQueryLay->addWidget(pBtnExport);

    QFrame* pPager = new QFrame(pQueryBar);
    pPager->setObjectName("Pager");
    pPager->setFixedHeight(40);
    QHBoxLayout* pPagerLay = new QHBoxLayout(pPager);
    pPagerLay->setContentsMargins(3, 3, 3, 3);
    pPagerLay->setSpacing(2);

    QToolButton* pBtnFirst = new QToolButton(pPager);
    pBtnFirst->setDefaultAction(ui->actionFirstPage);
    pBtnFirst->setObjectName("PagerButton");
    pBtnFirst->setToolButtonStyle(Qt::ToolButtonIconOnly);
    pBtnFirst->setFixedSize(32, 32);
    pPagerLay->addWidget(pBtnFirst);
    m_pBtnFirst = pBtnFirst;

    QToolButton* pBtnPrev = new QToolButton(pPager);
    pBtnPrev->setDefaultAction(ui->actionPrevPage);
    pBtnPrev->setObjectName("PagerButton");
    pBtnPrev->setToolButtonStyle(Qt::ToolButtonIconOnly);
    pBtnPrev->setFixedSize(32, 32);
    pPagerLay->addWidget(pBtnPrev);

    m_pLabelPageNum = new QLabel(pPager);
    m_pLabelPageNum->setObjectName("PageNum");
    m_pLabelPageNum->setAlignment(Qt::AlignCenter);
    m_pLabelPageNum->setMinimumWidth(58);
    pPagerLay->addWidget(m_pLabelPageNum);

    QToolButton* pBtnNext = new QToolButton(pPager);
    pBtnNext->setDefaultAction(ui->actionNextPage);
    pBtnNext->setObjectName("PagerButton");
    pBtnNext->setToolButtonStyle(Qt::ToolButtonIconOnly);
    pBtnNext->setFixedSize(32, 32);
    pPagerLay->addWidget(pBtnNext);

    QToolButton* pBtnLast = new QToolButton(pPager);
    pBtnLast->setDefaultAction(ui->actionLastPage);
    pBtnLast->setObjectName("PagerButton");
    pBtnLast->setToolButtonStyle(Qt::ToolButtonIconOnly);
    pBtnLast->setFixedSize(32, 32);
    pPagerLay->addWidget(pBtnLast);
    m_pBtnLast = pBtnLast;

    pQueryLay->addWidget(pPager);
    pRoot->addWidget(pQueryBar);

    // ---------- 汇总条 ----------
    QFrame* pSummaryBar = new QFrame(pCentral);
    pSummaryBar->setObjectName("SummaryBar");
    pSummaryBar->setFixedHeight(38);
    QHBoxLayout* pSummaryLay = new QHBoxLayout(pSummaryBar);
    pSummaryLay->setContentsMargins(20, 0, 20, 0);
    pSummaryLay->setSpacing(12);

    m_pLabelSummary = new QLabel(pSummaryBar);
    m_pLabelSummary->setObjectName("SummaryText");
    pSummaryLay->addWidget(m_pLabelSummary);

    QFrame* pSumSep = new QFrame(pSummaryBar);
    pSumSep->setObjectName("SummarySep");
    pSumSep->setFixedWidth(1);
    pSumSep->setFixedHeight(14);
    pSummaryLay->addWidget(pSumSep);

    m_pLabelSort = new QLabel(pSummaryBar);
    m_pLabelSort->setObjectName("SortLabel");
    pSummaryLay->addWidget(m_pLabelSort);
    pSummaryLay->addStretch(1);
    pRoot->addWidget(pSummaryBar);

    // ---------- 工作区 ----------
    QWidget* pWorkspace = new QWidget(pCentral);
    pWorkspace->setObjectName("Workspace");
    QVBoxLayout* pWorkLay = new QVBoxLayout(pWorkspace);
    pWorkLay->setContentsMargins(18, 14, 18, 14);
    pWorkLay->setSpacing(12);

    QFrame* pResultPanel = new QFrame(pWorkspace);
    pResultPanel->setObjectName("Panel");
    QVBoxLayout* pResultLay = new QVBoxLayout(pResultPanel);
    pResultLay->setContentsMargins(0, 0, 0, 0);
    pResultLay->setSpacing(0);

    QFrame* pResultHead = new QFrame(pResultPanel);
    pResultHead->setObjectName("PanelHead");
    pResultHead->setFixedHeight(38);
    QHBoxLayout* pResultHeadLay = new QHBoxLayout(pResultHead);
    pResultHeadLay->setContentsMargins(14, 0, 14, 0);
    pResultHeadLay->setSpacing(10);
    QLabel* pResultTitle = new QLabel(pResultHead);
    pResultTitle->setObjectName("PanelResultTitle");
    pResultHeadLay->addWidget(pResultTitle);
    QLabel* pResultTag = new QLabel(pResultHead);
    pResultTag->setObjectName("PanelTag");
    pResultTag->setText("TestProject");
    pResultHeadLay->addWidget(pResultTag);
    pResultHeadLay->addStretch(1);
    pResultLay->addWidget(pResultHead);

    m_pEmptyResult = new QLabel(pResultPanel);
    m_pEmptyResult->setObjectName("EmptyHint");
    m_pEmptyResult->setAlignment(Qt::AlignCenter);
    pResultLay->addWidget(m_pEmptyResult);

    QTableView* pTableResult = new QTableView(pResultPanel);
    pTableResult->setObjectName("tableView");
    pResultLay->addWidget(pTableResult, 1);
    m_pTableResult = pTableResult;
    connect(pTableResult, SIGNAL(clicked(QModelIndex)), this, SLOT(on_tableView_clicked(QModelIndex)));

    pWorkLay->addWidget(pResultPanel, 3);

    QSplitter* pBottom = new QSplitter(Qt::Horizontal, pWorkspace);
    pBottom->setObjectName("BottomSplit");
    pBottom->setChildrenCollapsible(false);
    m_pBottomSplit = pBottom;

    QFrame* pCasePanel = new QFrame(pBottom);
    pCasePanel->setObjectName("Panel");
    m_pCasePanel = pCasePanel;
    QVBoxLayout* pCaseLay = new QVBoxLayout(pCasePanel);
    pCaseLay->setContentsMargins(0, 0, 0, 0);
    pCaseLay->setSpacing(0);
    QFrame* pCaseHead = new QFrame(pCasePanel);
    pCaseHead->setObjectName("PanelHead");
    pCaseHead->setFixedHeight(38);
    QHBoxLayout* pCaseHeadLay = new QHBoxLayout(pCaseHead);
    pCaseHeadLay->setContentsMargins(14, 0, 14, 0);
    pCaseHeadLay->setSpacing(10);
    QLabel* pCaseTitle = new QLabel(pCaseHead);
    pCaseTitle->setObjectName("PanelCaseTitle");
    pCaseHeadLay->addWidget(pCaseTitle);
    QLabel* pCaseTag = new QLabel(pCaseHead);
    pCaseTag->setObjectName("PanelTag");
    pCaseTag->setText("TestCase");
    pCaseHeadLay->addWidget(pCaseTag);
    pCaseHeadLay->addStretch(1);
    pCaseLay->addWidget(pCaseHead);
    m_pEmptyCase = new QLabel(pCasePanel);
    m_pEmptyCase->setObjectName("EmptyHint");
    m_pEmptyCase->setAlignment(Qt::AlignCenter);
    pCaseLay->addWidget(m_pEmptyCase);
    QTableView* pTableCase = new QTableView(pCasePanel);
    pTableCase->setObjectName("tableView_case");
    pCaseLay->addWidget(pTableCase, 1);
    connect(pTableCase, SIGNAL(clicked(QModelIndex)), this, SLOT(on_tableView_case_clicked(QModelIndex)));
    pBottom->addWidget(pCasePanel);

    QFrame* pDetailPanel = new QFrame(pBottom);
    pDetailPanel->setObjectName("Panel");
    m_pDetailPanel = pDetailPanel;
    QVBoxLayout* pDetailLay = new QVBoxLayout(pDetailPanel);
    pDetailLay->setContentsMargins(0, 0, 0, 0);
    pDetailLay->setSpacing(0);
    QFrame* pDetailHead = new QFrame(pDetailPanel);
    pDetailHead->setObjectName("PanelHead");
    pDetailHead->setFixedHeight(38);
    QHBoxLayout* pDetailHeadLay = new QHBoxLayout(pDetailHead);
    pDetailHeadLay->setContentsMargins(14, 0, 14, 0);
    pDetailHeadLay->setSpacing(10);
    QLabel* pDetailTitle = new QLabel(pDetailHead);
    pDetailTitle->setObjectName("PanelDetailTitle");
    pDetailHeadLay->addWidget(pDetailTitle);
    QLabel* pDetailTag = new QLabel(pDetailHead);
    pDetailTag->setObjectName("PanelTag");
    pDetailTag->setText("DetailRst");
    pDetailHeadLay->addWidget(pDetailTag);
    pDetailHeadLay->addStretch(1);
    pDetailLay->addWidget(pDetailHead);
    m_pEmptyDetail = new QLabel(pDetailPanel);
    m_pEmptyDetail->setObjectName("EmptyHint");
    m_pEmptyDetail->setAlignment(Qt::AlignCenter);
    pDetailLay->addWidget(m_pEmptyDetail);
    QTableView* pTableDetail = new QTableView(pDetailPanel);
    pTableDetail->setObjectName("tableView_detail");
    pDetailLay->addWidget(pTableDetail, 1);
    pBottom->addWidget(pDetailPanel);

    pBottom->setStretchFactor(0, 1);
    pBottom->setStretchFactor(1, 1);
    pWorkLay->addWidget(pBottom, 2);

    // 紧凑模式下改用页签承载测试项/明细（等价于 1024 设计降级）
    m_pBottomTabs = new QTabWidget(pWorkspace);
    m_pBottomTabs->setObjectName("BottomTabs");
    m_pBottomTabs->setDocumentMode(true);
    m_pBottomTabs->hide();
    pWorkLay->addWidget(m_pBottomTabs, 2);

    pRoot->addWidget(pWorkspace, 1);

    // ---------- 视图设置 ----------
    QList<QTableView*> lstTables;
    lstTables << pTableResult << pTableCase << pTableDetail;
    foreach(QTableView* pTable, lstTables) {
        pTable->setSelectionMode(QAbstractItemView::SingleSelection);
        pTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        pTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pTable->setAlternatingRowColors(true);
        pTable->setShowGrid(false);
        pTable->setWordWrap(false);
        pTable->setFrameShape(QFrame::NoFrame);
        pTable->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        pTable->verticalHeader()->setVisible(false);
        pTable->verticalHeader()->setDefaultSectionSize(40);
        pTable->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        pTable->horizontalHeader()->setHighlightSections(false);
        pTable->horizontalHeader()->setStretchLastSection(true);
        pTable->horizontalHeader()->setMinimumSectionSize(60);
        pTable->horizontalHeader()->setDefaultSectionSize(120);
    }

    pTableResult->setModel(m_queryModel);
    pTableCase->setModel(m_queryCaseModel);
    pTableDetail->setModel(m_queryDetialModel);
}

void MainWindow::BuildStatusBar()
{
    QStatusBar* pBar = statusBar();
    pBar->setSizeGripEnabled(false);
    pBar->setObjectName("MainStatusBar");

    m_pStatusDb = new QLabel(pBar);
    m_pStatusDb->setObjectName("StatusDb");
    m_pStatusDb->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
    m_pStatusDb->setMinimumWidth(0);
    pBar->addWidget(m_pStatusDb);

    QFrame* pSep1 = new QFrame(pBar);
    pSep1->setObjectName("StatusSep");
    pSep1->setFixedWidth(1);
    pSep1->setFixedHeight(14);
    pBar->addWidget(pSep1);

    m_pStatusReadonly = new QLabel(pBar);
    m_pStatusReadonly->setObjectName("StatusReadonly");
    pBar->addWidget(m_pStatusReadonly);

    QFrame* pSep2 = new QFrame(pBar);
    pSep2->setObjectName("StatusSep");
    pSep2->setFixedWidth(1);
    pSep2->setFixedHeight(14);
    pBar->addWidget(pSep2);

    m_pStatusTotal = new QLabel(pBar);
    m_pStatusTotal->setObjectName("StatusTotal");
    pBar->addWidget(m_pStatusTotal);

    QFrame* pSep3 = new QFrame(pBar);
    pSep3->setObjectName("StatusSep");
    pSep3->setFixedWidth(1);
    pSep3->setFixedHeight(14);
    pBar->addWidget(pSep3);

    m_pStatusPage = new QLabel(pBar);
    m_pStatusPage->setObjectName("StatusPage");
    pBar->addWidget(m_pStatusPage);

    m_pStatusVersion = new QLabel(pBar);
    m_pStatusVersion->setObjectName("StatusVersion");
    pBar->addPermanentWidget(m_pStatusVersion);
}

void MainWindow::UpdateTabTexts()
{
    if(!m_pBottomTabs)
        return;
    const QString strCase = tr("Test cases (TestCase)");
    const QString strDetail = tr("Details (DetailRst)");
    if(m_pBottomTabs->count() > 0)
        m_pBottomTabs->setTabText(0, strCase);
    if(m_pBottomTabs->count() > 1)
        m_pBottomTabs->setTabText(1, strDetail);
}

void MainWindow::UpdateResponsiveLayout()
{
    if(!m_pBottomSplit || !m_pBottomTabs || !m_pTableResult)
        return;

    // 路径过长时中部省略，避免挤压记录数/按钮
    if(m_pLabelDbPath) {
        const int nLabelW = qMax(80, m_pLabelDbPath->width());
        m_pLabelDbPath->setText(m_pLabelDbPath->fontMetrics().elidedText(
            QDir::toNativeSeparators(m_strDbPath), Qt::ElideMiddle, nLabelW));
    }

    // 低于 1300 视为紧凑：分页压缩、结果列自适应、双栏改页签
    m_bCompact = (width() < 1300);
    // 紧凑模式收紧单元格内边距，给各列留出更多文字空间
    if(m_pTableResult->property("compact").toBool() != m_bCompact) {
        m_pTableResult->setProperty("compact", m_bCompact);
        m_pTableResult->style()->unpolish(m_pTableResult);
        m_pTableResult->style()->polish(m_pTableResult);
        QHeaderView* pViewHdr = m_pTableResult->horizontalHeader();
        pViewHdr->style()->unpolish(pViewHdr);
        pViewHdr->style()->polish(pViewHdr);
        m_pTableResult->viewport()->update();
    }

    QHeaderView* pHdr = m_pTableResult->horizontalHeader();
    const QSqlRecord rcdPrj = m_queryModel ? m_queryModel->record() : QSqlRecord();
    // 开始时间、用时等列给固定宽度，保证时间戳完整显示；其余列自适应
    auto applyFixedWidths = [&](bool bCompact) {
        for(int i = 0; i < pHdr->count() && i < rcdPrj.count(); ++i) {
            const QString strField = rcdPrj.fieldName(i);
            int nWidth = 0;
            if(strField == "time") nWidth = bCompact ? 185 : 210;
            else if(strField == "spend") nWidth = bCompact ? 95 : 100;
            else if(strField == "barcode") nWidth = bCompact ? 100 : 110;
            else if(strField == "rst") nWidth = bCompact ? 70 : 80;
            else if(strField == "version") nWidth = bCompact ? 70 : 80;
            else if(!bCompact) nWidth = 120;

            if(nWidth > 0) {
                if(bCompact)
                    pHdr->setSectionResizeMode(i, QHeaderView::Fixed);
                pHdr->resizeSection(i, nWidth);
            }
        }
    };

    if(m_bCompact) {
        if(m_pBtnFirst) m_pBtnFirst->hide();
        if(m_pBtnLast) m_pBtnLast->hide();

        pHdr->setStretchLastSection(false);
        pHdr->setMinimumSectionSize(56);
        pHdr->setSectionResizeMode(QHeaderView::Stretch);
        applyFixedWidths(true);

        if(m_pBottomTabs->count() == 0) {
            m_pBottomTabs->addTab(m_pCasePanel, tr("Test cases (TestCase)"));
            m_pBottomTabs->addTab(m_pDetailPanel, tr("Details (DetailRst)"));
        }
        m_pBottomTabs->show();
        m_pBottomSplit->hide();
    }
    else {
        if(m_pBtnFirst) m_pBtnFirst->show();
        if(m_pBtnLast) m_pBtnLast->show();

        pHdr->setSectionResizeMode(QHeaderView::Interactive);
        pHdr->setMinimumSectionSize(60);
        for(int i = 0; i < pHdr->count(); ++i)
            pHdr->resizeSection(i, 120);
        applyFixedWidths(false);
        pHdr->setStretchLastSection(true);

        m_pBottomSplit->show();
        while(m_pBottomTabs->count() > 0)
            m_pBottomTabs->removeTab(0);
        if(m_pCasePanel->parentWidget() != m_pBottomSplit)
            m_pBottomSplit->addWidget(m_pCasePanel);
        if(m_pDetailPanel->parentWidget() != m_pBottomSplit)
            m_pBottomSplit->addWidget(m_pDetailPanel);
        // removeTab 会隐藏页面，重新挂回分栏后需要显式显示
        m_pCasePanel->show();
        m_pDetailPanel->show();
        m_pBottomTabs->hide();
    }
}

void MainWindow::resizeEvent(QResizeEvent* pEvent)
{
    QMainWindow::resizeEvent(pEvent);
    UpdateResponsiveLayout();
}

void MainWindow::RetranslateUi()
{
    setWindowTitle(tr("TreeATE Results"));

    if(m_pLabelBrandVer)
        m_pLabelBrandVer->setText(tr("v%1 · RESULTS").arg(TREEATE_VERSION_STR));

    const QList<QLabel*> lstLabels = findChildren<QLabel*>();
    foreach(QLabel* pLabel, lstLabels) {
        const QString strName = pLabel->objectName();
        if(strName == "CaptionDb")
            pLabel->setText(tr("Results database"));
        else if(strName == "ReadonlyChip")
            pLabel->setText(QString::fromUtf8("● ") + tr("Read-only"));
        else if(strName == "PanelResultTitle")
            pLabel->setText(tr("Test results (TestProject)"));
        else if(strName == "PanelCaseTitle")
            pLabel->setText(tr("Test cases (TestCase)"));
        else if(strName == "PanelDetailTitle")
            pLabel->setText(tr("Details (DetailRst)"));
        else if(strName == "SortLabel")
            pLabel->setText(tr("Sorted by start time (desc)"));
        else if(strName == "StatusReadonly")
            pLabel->setText(tr("Read-only local"));
        else if(strName == "StatusVersion")
            pLabel->setText(tr("TreeResults %1").arg(TREEATE_VERSION_STR));
    }

    if(m_pLeBarcode)
        m_pLeBarcode->setPlaceholderText(tr("Search barcode/SN..."));

    if(m_pBtnTheme) {
        const QString strTheme = (m_theme == 1) ? tr("Light")
                : (m_theme == 2 ? tr("Dark") : tr("Classic"));
        m_pBtnTheme->setToolTip(tr("Theme: %1 (click to switch)").arg(strTheme));
    }
    if(m_pBtnLang) {
        m_pBtnLang->setText(m_strLanguage == "zh" ? QString::fromUtf8("中文") : QString("EN"));
        m_pBtnLang->setToolTip(tr("Switch language"));
    }

    ApplyModelHeaders();
    UpdateTabTexts();
    UpdateDatabaseState();
    UpdatePageNum();
    UpdateSummary();
    ShowEmptyStates();
}

void MainWindow::ApplyLanguage(const QString& strLang, bool bSave)
{
    const QString strNew = (strLang == "zh") ? "zh" : "en";
    if(m_pTranslator) {
        qApp->removeTranslator(m_pTranslator);
        delete m_pTranslator;
        m_pTranslator = nullptr;
    }

    if(strNew == "zh") {
        m_pTranslator = new QTranslator();
        if(m_pTranslator->load(":/i18n/treeresults_zh.qm"))
            qApp->installTranslator(m_pTranslator);
    }

    m_strLanguage = strNew;
    if(bSave)
        SaveSettings();

    ui->retranslateUi(this);
    RetranslateUi();
}

void MainWindow::ApplyTheme(int nTheme)
{
    static const char* s_themes[] = {
        ":/Themes/classic.qss",
        ":/Themes/light.qss",
        ":/Themes/dark.qss"
    };

    m_theme = (nTheme < 0 || nTheme > 2) ? 0 : nTheme;

    QFile file(s_themes[m_theme]);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qApp->setStyleSheet(QString::fromUtf8(file.readAll()));
        file.close();
    }

    TASqlResultColors colors;
    if(m_theme == 1) {
        colors.passFg = QColor("#067647");
        colors.failFg = QColor("#B42318");
        colors.exceFg = QColor("#B54708");
        colors.idleFg = QColor("#475467");
    }
    else if(m_theme == 2) {
        colors.passFg = QColor("#4ADE80");
        colors.failFg = QColor("#FF7A7A");
        colors.exceFg = QColor("#FDB022");
        colors.idleFg = QColor("#9FB0C4");
    }

    if(m_queryModel)
        m_queryModel->setResultColors(colors);
    if(m_queryCaseModel)
        m_queryCaseModel->setResultColors(colors);
    if(m_queryDetialModel)
        m_queryDetialModel->setResultColors(colors);

    if(m_pBtnTheme) {
        const QString strTheme = (m_theme == 1) ? tr("Light")
                : (m_theme == 2 ? tr("Dark") : tr("Classic"));
        m_pBtnTheme->setToolTip(tr("Theme: %1 (click to switch)").arg(strTheme));
    }
}

void MainWindow::on_themeButton_clicked()
{
    ApplyTheme((m_theme + 1) % 3);
    SaveSettings();
}

void MainWindow::on_langButton_clicked()
{
    ApplyLanguage(m_strLanguage == "zh" ? "en" : "zh", true);
}

bool MainWindow::OpenDatabase()
{
    m_strDbPath = qApp->applicationDirPath() + "/db/treeate.sqlite";
    QFileInfo info(m_strDbPath);
    if(!info.exists()) {
        m_bDbReady = false;
        m_strDbError = tr("Database not found: %1").arg(m_strDbPath);
        return false;
    }

    if(!QSqlDatabase::isDriverAvailable("QSQLITE")) {
        m_bDbReady = false;
        m_strDbError = tr("SQLite driver is not available.");
        return false;
    }

    m_dbSqlite = QSqlDatabase::addDatabase("QSQLITE", RST_CONNECTION);
    m_dbSqlite.setDatabaseName(m_strDbPath);
    // 结果查询只读打开，避免误写/误迁移数据库
    m_dbSqlite.setConnectOptions("QSQLITE_OPEN_READONLY");
    m_bDbReady = m_dbSqlite.open();
    if(!m_bDbReady)
        m_strDbError = m_dbSqlite.lastError().text();

    return m_bDbReady;
}

bool MainWindow::EnsureDatabase()
{
    if(m_bDbReady)
        return true;

    QMessageBox::warning(this, tr("Warning"),
                         tr("Local results database is not available.\n%1").arg(m_strDbError));
    return false;
}

void MainWindow::UpdateDatabaseState()
{
    if(m_pLabelDbPath) {
        m_pLabelDbPath->setText(QDir::toNativeSeparators(m_strDbPath));
        m_pLabelDbPath->setToolTip(m_strDbPath);
    }

    if(m_pLabelDbStatus) {
        m_pLabelDbStatus->setText(m_bDbReady ? tr("SQLite connected") : tr("SQLite unavailable"));
        m_pLabelDbStatus->setProperty("state", m_bDbReady ? "ok" : "error");
        m_pLabelDbStatus->setToolTip(m_bDbReady ? m_strDbPath : m_strDbError);
        m_pLabelDbStatus->style()->unpolish(m_pLabelDbStatus);
        m_pLabelDbStatus->style()->polish(m_pLabelDbStatus);
    }

    if(m_pLabelTotal)
        m_pLabelTotal->setText(QString::number(m_totalRcdCnt));
    if(m_pStatusDb) {
        m_pStatusDb->setText(QDir::toNativeSeparators(m_strDbPath));
        m_pStatusDb->setToolTip(m_strDbPath);
    }

    ui->actionSearch->setEnabled(m_bDbReady);
    ui->actionExport->setEnabled(m_bDbReady);
}

void MainWindow::ApplyModelHeaders()
{
    ApplyHeaderLabels(m_queryModel, ModelProject);
    ApplyHeaderLabels(m_queryCaseModel, ModelCase);
    ApplyHeaderLabels(m_queryDetialModel, ModelDetail);
}

QString MainWindow::HeaderLabel(const QString& strField, int nKind) const
{
    if(nKind == ModelProject) {
        if(strField == "name") return tr("Project name");
        if(strField == "longname") return tr("Path/Long name");
        if(strField == "station") return tr("Station");
        if(strField == "workingline") return tr("Working line");
        if(strField == "user") return tr("User");
        if(strField == "time") return tr("Start time");
        if(strField == "barcode") return tr("Barcode/SN");
        if(strField == "count") return tr("Count");
        if(strField == "rst") return tr("Result");
        if(strField == "spend") return tr("Spend time");
        if(strField == "desc") return tr("Description");
        if(strField == "version") return tr("Version");
        if(strField == "uploaded") return tr("Uploaded");
        if(strField == "id") return "ID";
    }
    else if(nKind == ModelCase) {
        if(strField == "name") return tr("Test case");
        if(strField == "longname") return tr("Path/Long name");
        if(strField == "rst") return tr("Result");
        if(strField == "desc") return tr("Description");
        if(strField == "spend") return tr("Spend time");
        if(strField == "time") return tr("Start time");
        if(strField == "id") return "ID";
        if(strField == "parentId") return tr("Project ID");
    }
    else {
        if(strField == "name") return tr("Name");
        if(strField == "longname") return tr("Path/Long name");
        if(strField == "time") return tr("Time");
        if(strField == "rst") return tr("Result");
        if(strField == "desc") return tr("Value/Description");
        if(strField == "standard") return tr("Standard");
        if(strField == "id") return "ID";
        if(strField == "parentId") return tr("Case ID");
    }

    return strField;
}

void MainWindow::ApplyHeaderLabels(TASqlQueryModel* pModel, int nKind)
{
    if(!pModel || pModel->columnCount() <= 0)
        return;

    QSqlRecord rcd = pModel->record();
    for(int i = 0; i < rcd.count(); i++) {
        const QString strField = rcd.fieldName(i);
        pModel->setHeaderData(i, Qt::Horizontal, HeaderLabel(strField, nKind));

        bool bHide = false;
        if(nKind == ModelProject)
            bHide = (strField == "id" || strField == "count" || strField == "uploaded");
        else
            bHide = (strField == "id" || strField == "parentId");

        if(bHide)
            pModel->setHeaderData(i, Qt::Horizontal, QVariant(), Qt::DisplayRole);
    }

    // 隐藏列在视图层完成，模型层保持全部字段
    QTableView* pView = nullptr;
    if(nKind == ModelProject)
        pView = findChild<QTableView*>("tableView");
    else if(nKind == ModelCase)
        pView = findChild<QTableView*>("tableView_case");
    else
        pView = findChild<QTableView*>("tableView_detail");

    if(!pView)
        return;

    for(int i = 0; i < rcd.count(); i++) {
        const QString strField = rcd.fieldName(i);
        bool bHide = false;
        if(nKind == ModelProject)
            bHide = (strField == "id" || strField == "count" || strField == "uploaded");
        else
            bHide = (strField == "id" || strField == "parentId");
        pView->setColumnHidden(i, bHide);
    }
}

QString MainWindow::LikePattern(const QString& strText) const
{
    QString strOut = strText;
    strOut.replace("\\", "\\\\");
    strOut.replace("%", "\\%");
    strOut.replace("_", "\\_");
    return "%" + strOut + "%";
}

int MainWindow::GetResultsCount()
{
    if(!m_bDbReady)
        return -1;

    const QString strBarcode = m_pLeBarcode->text().trimmed();
    QSqlQuery query(m_dbSqlite);
    if(strBarcode.isEmpty()) {
        query.prepare("SELECT count(*) FROM TestProject");
    }
    else {
        query.prepare("SELECT count(*) FROM TestProject WHERE barcode LIKE ? ESCAPE '\\'");
        query.addBindValue(LikePattern(strBarcode));
    }

    if(!query.exec()) {
        m_strDbError = query.lastError().text();
        return -1;
    }

    if(!query.next())
        return 0;

    return query.value(0).toInt();
}

void MainWindow::RequeryData(int nPage)
{
    if(!m_bDbReady)
        return;

    int nOffset = (nPage - 1) * m_pageRcdCnt;
    if(nOffset < 0)
        nOffset = 0;

    // 工程结果列按界面约定顺序展示
    // id 供点击联动定位测试项，视图层隐藏；其余列按界面约定顺序展示
    static const char* RST_PRJ_COLUMNS = "id, barcode, name, \"desc\", longname, workingline,"
                                         " station, rst, time, spend, user, version";

    const QString strBarcode = m_pLeBarcode->text().trimmed();
    QSqlQuery query(m_dbSqlite);
    if(strBarcode.isEmpty()) {
        query.prepare(QString("SELECT %1 FROM TestProject ORDER BY time DESC LIMIT ? OFFSET ?")
                      .arg(RST_PRJ_COLUMNS));
    }
    else {
        query.prepare(QString("SELECT %1 FROM TestProject WHERE barcode LIKE ? ESCAPE '\\' "
                              "ORDER BY time DESC LIMIT ? OFFSET ?").arg(RST_PRJ_COLUMNS));
        query.addBindValue(LikePattern(strBarcode));
    }
    query.addBindValue(m_pageRcdCnt);
    query.addBindValue(nOffset);

    if(!query.exec()) {
        m_strDbError = query.lastError().text();
        m_queryModel->clear();
        return;
    }

    m_queryModel->setQuery(std::move(query));
    ApplyHeaderLabels(m_queryModel, ModelProject);
}

void MainWindow::QueryCases(int nParentId)
{
    m_queryCaseModel->clear();
    if(!m_bDbReady || nParentId <= 0)
        return;

    QSqlQuery query(m_dbSqlite);
    query.prepare("SELECT * FROM TestCase WHERE parentId = ? ORDER BY id");
    query.addBindValue(nParentId);
    if(!query.exec()) {
        m_strDbError = query.lastError().text();
        return;
    }

    m_queryCaseModel->setQuery(std::move(query));
    ApplyHeaderLabels(m_queryCaseModel, ModelCase);
}

void MainWindow::QueryDetails(int nParentId)
{
    m_queryDetialModel->clear();
    if(!m_bDbReady || nParentId <= 0)
        return;

    QSqlQuery query(m_dbSqlite);
    query.prepare("SELECT * FROM DetailRst WHERE parentId = ? ORDER BY id");
    query.addBindValue(nParentId);
    if(!query.exec()) {
        m_strDbError = query.lastError().text();
        return;
    }

    m_queryDetialModel->setQuery(std::move(query));
    ApplyHeaderLabels(m_queryDetialModel, ModelDetail);
}

void MainWindow::ClearDetail()
{
    if(m_queryCaseModel)
        m_queryCaseModel->clear();
    if(m_queryDetialModel)
        m_queryDetialModel->clear();

    QTableView* pCase = findChild<QTableView*>("tableView_case");
    if(pCase) {
        pCase->clearSelection();
        pCase->setCurrentIndex(QModelIndex());
    }
    QTableView* pDetail = findChild<QTableView*>("tableView_detail");
    if(pDetail) {
        pDetail->clearSelection();
        pDetail->setCurrentIndex(QModelIndex());
    }
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    ClearDetail();
    if(!index.isValid() || !m_queryModel)
        return;

    QSqlRecord record = m_queryModel->record(index.row());
    const int nId = record.value("id").toInt();
    QueryCases(nId);
    ShowEmptyStates();
}

void MainWindow::on_tableView_case_clicked(const QModelIndex &index)
{
    m_queryDetialModel->clear();
    if(!index.isValid() || !m_queryCaseModel)
        return;

    QSqlRecord record = m_queryCaseModel->record(index.row());
    const int nId = record.value("id").toInt();
    QueryDetails(nId);
    ShowEmptyStates();
}

int MainWindow::GetPageCnt()
{
    if(m_totalRcdCnt <= 0)
        return 0;

    return (m_totalRcdCnt + m_pageRcdCnt - 1) / m_pageRcdCnt;
}

void MainWindow::UpdatePageNum()
{
    if(!m_pLabelPageNum)
        return;

    const QString strNum = (m_totalPage > 0)
            ? tr("%1/%2").arg(m_currentPage).arg(m_totalPage)
            : tr("0/0");
    m_pLabelPageNum->setText(strNum);

    const bool bHasData = (m_totalPage > 0);
    ui->actionFirstPage->setEnabled(bHasData && m_currentPage > 1);
    ui->actionPrevPage->setEnabled(bHasData && m_currentPage > 1);
    ui->actionNextPage->setEnabled(bHasData && m_currentPage < m_totalPage);
    ui->actionLastPage->setEnabled(bHasData && m_currentPage < m_totalPage);

    if(m_pStatusPage) {
        m_pStatusPage->setText(bHasData
                               ? tr("Page %1/%2").arg(m_currentPage).arg(m_totalPage)
                               : tr("Page -/-"));
    }
}

void MainWindow::UpdateSummary()
{
    if(m_pLabelSummary) {
        if(!m_bDbReady)
            m_pLabelSummary->setText(tr("Database unavailable"));
        else if(m_totalRcdCnt <= 0)
            m_pLabelSummary->setText(tr("0 results"));
        else
            m_pLabelSummary->setText(tr("%1 results · Page %2/%3 · %4 per page")
                                     .arg(m_totalRcdCnt)
                                     .arg(m_currentPage)
                                     .arg(m_totalPage)
                                     .arg(m_pageRcdCnt));
    }

    if(m_pLabelTotal)
        m_pLabelTotal->setText(QString::number(m_totalRcdCnt));
    if(m_pStatusTotal)
        m_pStatusTotal->setText(tr("%1 records").arg(qMax(0, m_totalRcdCnt)));
}

void MainWindow::ShowEmptyStates()
{
    if(m_pEmptyResult) {
        if(!m_bDbReady) {
            m_pEmptyResult->setText(tr("Local results database is not available."));
            m_pEmptyResult->setVisible(true);
        }
        else if(m_queryModel->rowCount() <= 0) {
            m_pEmptyResult->setText(tr("No results found."));
            m_pEmptyResult->setVisible(true);
        }
        else {
            m_pEmptyResult->setVisible(false);
        }
    }

    if(m_pEmptyCase) {
        if(m_queryModel->rowCount() <= 0) {
            m_pEmptyCase->setText(tr("Select a result to view test cases."));
            m_pEmptyCase->setVisible(true);
        }
        else if(m_queryCaseModel->rowCount() <= 0) {
            m_pEmptyCase->setText(tr("No test cases."));
            m_pEmptyCase->setVisible(true);
        }
        else {
            m_pEmptyCase->setVisible(false);
        }
    }

    if(m_pEmptyDetail) {
        if(m_queryCaseModel->rowCount() <= 0) {
            m_pEmptyDetail->setText(tr("Select a test case to view details."));
            m_pEmptyDetail->setVisible(true);
        }
        else if(m_queryDetialModel->rowCount() <= 0) {
            m_pEmptyDetail->setText(tr("No details."));
            m_pEmptyDetail->setVisible(true);
        }
        else {
            m_pEmptyDetail->setVisible(false);
        }
    }
}

void MainWindow::on_actionSearch_triggered()
{
    ClearDetail();

    m_currentPage = 0;
    m_totalPage = 0;
    m_totalRcdCnt = 0;

    if(!m_bDbReady) {
        if(m_queryModel)
            m_queryModel->clear();
        UpdateDatabaseState();
        UpdatePageNum();
        UpdateSummary();
        ShowEmptyStates();
        return;
    }

    const int nCount = GetResultsCount();
    if(nCount < 0) {
        m_queryModel->clear();
        UpdateDatabaseState();
        UpdatePageNum();
        UpdateSummary();
        ShowEmptyStates();
        return;
    }

    m_totalRcdCnt = nCount;
    if(m_totalRcdCnt > 0) {
        m_currentPage = 1;
        m_totalPage = GetPageCnt();
        RequeryData(m_currentPage);
    }
    else {
        m_queryModel->clear();
    }

    UpdateDatabaseState();
    UpdatePageNum();
    UpdateSummary();
    ShowEmptyStates();
}

void MainWindow::on_barcode_return_triggered()
{
    on_actionSearch_triggered();
}

void MainWindow::on_actionPrevPage_triggered()
{
    if(m_totalPage <= 0 || m_currentPage <= 1)
        return;

    --m_currentPage;
    RequeryData(m_currentPage);
    ClearDetail();
    UpdatePageNum();
    UpdateSummary();
    ShowEmptyStates();
}

void MainWindow::on_actionFirstPage_triggered()
{
    if(m_totalPage <= 0)
        return;

    m_currentPage = 1;
    RequeryData(m_currentPage);
    ClearDetail();
    UpdatePageNum();
    UpdateSummary();
    ShowEmptyStates();
}

void MainWindow::on_actionNextPage_triggered()
{
    if(m_totalPage <= 0 || m_currentPage >= m_totalPage)
        return;

    ++m_currentPage;
    RequeryData(m_currentPage);
    ClearDetail();
    UpdatePageNum();
    UpdateSummary();
    ShowEmptyStates();
}

void MainWindow::on_actionLastPage_triggered()
{
    if(m_totalPage <= 0)
        return;

    m_currentPage = m_totalPage;
    RequeryData(m_currentPage);
    ClearDetail();
    UpdatePageNum();
    UpdateSummary();
    ShowEmptyStates();
}

QString MainWindow::ItemLabel(const QString& strId) const
{
    if(strId == "Name of project") return tr("Name of project");
    if(strId == "Path/Long Name of project") return tr("Path/Long Name of project");
    if(strId == "Description of project") return tr("Description of project");
    if(strId == "Barcode/SN") return tr("Barcode/SN");
    if(strId == "Start time of project") return tr("Start time of project");
    if(strId == "Spend time of project") return tr("Spend time of project");
    if(strId == "User") return tr("User");
    if(strId == "Result of project") return tr("Result of project");
    if(strId == "Version") return tr("Version");
    if(strId == "Working line") return tr("Working line");
    if(strId == "Station") return tr("Station");
    if(strId == "Name of cases") return tr("Name of cases");
    if(strId == "Path/Long Name of cases") return tr("Path/Long Name of cases");
    if(strId == "Start time of cases") return tr("Start time of cases");
    if(strId == "Description of cases") return tr("Description of cases");
    if(strId == "Result of cases") return tr("Result of cases");
    if(strId == "Spend time of cases") return tr("Spend time of cases");
    if(strId == "Name of details") return tr("Name of details");
    if(strId == "Value/Description") return tr("Value/Description");
    if(strId == "Time of details") return tr("Time of details");
    if(strId == "Standard") return tr("Standard");
    if(strId == "Result of details") return tr("Result of details");
    return strId;
}

void MainWindow::on_actionExport_triggered()
{
    if(!EnsureDatabase())
        return;

    // 读取已有工程名
    QSqlQuery query(m_dbSqlite);
    if(!query.exec("SELECT DISTINCT name FROM TestProject")) {
        QMessageBox::warning(this, tr("Warning"), tr("No data in local database."));
        return;
    }
    QStringList lstPrjName;
    while(query.next())
        lstPrjName.append(query.value(0).toString());

    if(lstPrjName.isEmpty()) {
        QMessageBox::warning(this, tr("Warning"), tr("No data in local database."));
        return;
    }

    QList< QPair<QString, QString> > lstPrjItems;
    foreach(const QString& strKey, m_mpPrjItems.keys())
        lstPrjItems.append(qMakePair(strKey, ItemLabel(strKey)));
    QList< QPair<QString, QString> > lstCaseItems;
    foreach(const QString& strKey, m_mpCaseItems.keys())
        lstCaseItems.append(qMakePair(strKey, ItemLabel(strKey)));
    QList< QPair<QString, QString> > lstDetailItems;
    foreach(const QString& strKey, m_mpDetailItems.keys())
        lstDetailItems.append(qMakePair(strKey, ItemLabel(strKey)));

    DlgExport dlgExport(this);
    dlgExport.InitProjectName(lstPrjName, lstPrjItems, lstCaseItems, lstDetailItems);
    if(QDialog::Accepted != dlgExport.exec())
        return;

    const QStringList lstSelected = dlgExport.GetSelectedItems();
    if(lstSelected.isEmpty()) {
        QMessageBox::warning(this, tr("Warning"), tr("Must select at least one item."));
        return;
    }

    const QString strPrjName = dlgExport.GetProjectName();
    if(strPrjName.isEmpty()) {
        QMessageBox::warning(this, tr("Warning"), tr("Must select project name."));
        return;
    }

    QStringList lstSqlItems;
    QStringList lstHeaders;
    foreach(const QString& strItem, lstSelected) {
        auto itor = m_mpPrjItems.find(strItem);
        if(itor != m_mpPrjItems.end()) {
            lstSqlItems.append(*itor);
            lstHeaders.append(ItemLabel(strItem));
            continue;
        }
        itor = m_mpCaseItems.find(strItem);
        if(itor != m_mpCaseItems.end()) {
            lstSqlItems.append(*itor);
            lstHeaders.append(ItemLabel(strItem));
            continue;
        }
        itor = m_mpDetailItems.find(strItem);
        if(itor != m_mpDetailItems.end()) {
            lstSqlItems.append(*itor);
            lstHeaders.append(ItemLabel(strItem));
        }
    }

    if(lstSqlItems.isEmpty()) {
        QMessageBox::warning(this, tr("Warning"), tr("Must select at least one item."));
        return;
    }

    const QString strSql = "SELECT " + lstSqlItems.join(", ") +
        " FROM TestProject AS tp"
        " LEFT JOIN (SELECT tc.parentId AS parentId, tc.name AS tc_name,"
        " tc.longname AS tc_path, tc.time AS tc_time, tc.desc AS tc_desc,"
        " tc.spend AS tc_spend, tc.rst AS tc_rst, der.name AS dr_name,"
        " der.time AS dr_time, der.desc AS dr_value, der.standard AS dr_standard,"
        " der.rst AS dr_rst FROM TestCase AS tc"
        " LEFT JOIN DetailRst AS der ON der.parentId = tc.id) AS td"
        " ON td.parentId = tp.id"
        " WHERE tp.time > datetime(?) AND tp.time < datetime(?) AND tp.name = ?";

    QSqlQuery sqlRst(m_dbSqlite);
    sqlRst.prepare(strSql);
    sqlRst.addBindValue(dlgExport.GetStartTime());
    sqlRst.addBindValue(dlgExport.GetEndTime());
    sqlRst.addBindValue(strPrjName);
    if(!sqlRst.exec()) {
        QMessageBox::critical(this, tr("Error"), sqlRst.lastError().text());
        return;
    }

    QString strFileName = dlgExport.GetExportFileName().trimmed();
    if(strFileName.isEmpty()) {
        QMessageBox::warning(this, tr("Warning"), tr("Please select an export file."));
        return;
    }
    QFileInfo fiFile(strFileName);
    if(fiFile.suffix().compare("csv", Qt::CaseInsensitive) != 0)
        strFileName += ".csv";

    QFile file(strFileName);
    if(!file.open(QIODevice::WriteOnly)) {
        QMessageBox::critical(this, tr("Error"),
                              tr("Failed to create file: %1").arg(file.errorString()));
        return;
    }

    // UTF-8 BOM，保证 Excel/WPS 直接打开中文不乱码
    file.write("\xEF\xBB\xBF", 3);
    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);

    out << CsvLine(lstHeaders) << "\n";
    const int nColumnCnt = lstHeaders.count();
    while(sqlRst.next()) {
        QStringList lstLine;
        for(int i = 0; i < nColumnCnt; i++)
            lstLine.append(sqlRst.value(i).toString());
        out << CsvLine(lstLine) << "\n";
    }
    out.flush();
    file.close();

    QMessageBox::information(this, tr("Information"),
                             tr("Export completed: %1").arg(strFileName));
}
