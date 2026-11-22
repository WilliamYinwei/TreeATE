///
/// @brief         TreeATE's main window
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-21 新增“☰ 菜单”入口与工具栏按钮成员  2026-11-22 开发入口改为 VS Code，移除 TreeATEDev 进程  2026-11-22 M2 主题/语言运行时切换  2026-11-22 M3 主界面骨架（应用栏/扫描执行条/KPI/紧凑布局）
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "testmanger.h"
#include "pluginsmgr.h"
#include "taheartbeat.h"
#include "ta_atetop.h"

#include <QMainWindow>
#include <QProcess>
#include <QTemporaryFile>
#include <QMap>
#include <QTreeWidgetItem>
#include <QLabel>
#include <QTimer>
#include <QThread>

namespace Ui {
class MainWindow;
}

class QLineEdit;
class QPushButton;
class QFileSystemWatcher;
class QToolButton;
class QMenu;
class QFrame;
class QToolBar;
class QHBoxLayout;
class VSCodeLauncher;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString GetHostAddress();
    void SetCurrUser(const QString& strUser);

private slots:
    void on_actionLoading_triggered();

    void on_actionPlay_triggered();

    void on_actionClose_triggered();

    void on_progressValueChanged(int n);

    void on_actionStop_triggered();

    void on_updateTotalStatus(eTestStatus eStatus, int n);

    void on_startLoading(int nCnt);

    void on_actionSpread_items_triggered();

    void on_actionShrink_items_triggered();

    void on_getSystemTime();

    void on_action_About_triggered();

    void on_actionLogin_triggered();

    void on_dockWidget_Property_visibilityChanged(bool visible);

    void on_actionProperty_changed();

    void on_pushButton_SaveCfg_clicked();

    void on_tableWidget_Property_cellChanged(int row, int column);

    void on_actionSys_options_triggered();

    void on_actionOption_triggered();

    void on_menuView_Show();

    void on_action_Results_triggered();

    void on_barcode_returnPressed();

    void on_action_Edit_triggered();

    void on_reload_testUnit();

    void on_action_Help_triggered();

    void on_status_HistoryRst(eTestStatus nStatus);

    void on_directory_changed(QString);

    void on_file_changed(QString);

    void on_mdiArea_subWindowActivated(QMdiSubWindow *arg1);

    void on_actionTile_View_triggered();

    void on_actionTab_View_triggered();

    void on_actionTandem_triggered();

    void dockWinCounts_Clear_triggered();

    void updateCompletedCounts(quint32 nPass, quint32 nFail, quint32 nExce);

    void onThemeChanged(int nTheme);

    void onThemeButtonClicked();

    void onLanguageButtonClicked();

    void onBannerActionClicked();

    void onLogPauseToggled();

    void onLogClearClicked();

    void onLogCopyClicked();

    void onToggleFullScreen();

protected:
    void closeEvent(QCloseEvent *event);
    void changeEvent(QEvent* e);
    bool eventFilter(QObject* watched, QEvent* e);
    void resizeEvent(QResizeEvent* e);

private:
    void unLoad();
    void loadUnits(const QString& strPrjName);
    void createMainMenuButton(QWidget* parent, QHBoxLayout* layout);
    void createAppBar();
    void createScanBar();
    void createStatusBarItems();
    void createLogToolBar();
    void createLanguageButton(QHBoxLayout* layout);
    void updateStatusChip(eTestStatus eStatus);
    void applyCompactLayout(bool bCompact);
    bool restoreWindowLayout();
    void saveWindowLayout();
    void placeCountsDockDefault();
    void updateEmptyHint();
    void showErrorBanner(const QString& strLevel, const QString& strText,
                         const QString& strActionText = QString());
    void hideErrorBanner();
    void showInlineError(QLineEdit* pEdit, const QString& strText);
    void shakeWidget(QWidget* pWidget);
    void setPropertyPlaceholderVisible(bool bVisible);
    void updateAllKpi(quint32 nPass, quint32 nFail, quint32 nExce);
    void updateParentItemClicked(QTreeWidgetItem *parent);
    void enableForStatus(eTestStatus eStatus);
    void showPara(const QString& who);
    void openSysCfg();
    bool getNeedCheckNetwork();
    void openLogFile();
    QDockWidget *createDockWinCounts();
    QString currentTestProjectFile() const;
    void openTestProjectInVSCode();
    bool showVSCodeNotFoundGuide();
    void createThemeButton(QWidget* parent, QHBoxLayout* layout);
    void applyThemeChrome();
    void retranslateDynamicUi();
    void retranslateCountsDock();

private:
    Ui::MainWindow  *ui;
    TestManger*     m_pTestMgr;
    QFrame*         m_appBar;
    QFrame*         m_scanBar;
    QToolBar*       m_appToolBar;
    QToolBar*       m_scanToolBar;
    QFrame*         m_errorBanner;
    QLabel*         m_labelErrorBanner;
    QPushButton*    m_pBannerAction;
    QLabel*         m_labelBrand;
    QLabel*         m_labelVersion;
    QLabel*         m_labelStatusChip;
    QLabel*         m_labelPath;
    QLabel*         m_labelUser;
    QLabel*         m_labelTime;
    QLabel*         m_labelGuid;
    QLabel*         m_labelStationName;
    QLabel*         m_labelHistoryRst;
    QLineEdit*      m_leTotalSN;
    QLabel*         m_labelBarcodeIcon;
    QToolButton*    m_menuButton;
    QToolButton*    m_themeButton;
    QToolButton*    m_pBtnExit;
    QToolButton*    m_languageButton;
    QToolButton*    m_pBtnTest;
    QToolButton*    m_pBtnLoad;
    QToolButton*    m_pBtnStop;
    QToolButton*    m_pBtnProperty;
    QLabel*         m_labelPropertySection;
    QLabel*         m_labelPropertyHint;
    QLabel*         m_labelPropertyPlaceholder;
    QLabel*         m_labelEmptyHint;
    QToolButton*    m_pLogPauseBtn;
    QToolButton*    m_pLogClearBtn;
    QToolButton*    m_pLogCopyBtn;
    QTimer*         m_pBannerTimer;
    bool            m_bCompact;
    bool            m_bLogPaused;
    bool            m_bPropertyPreferred;
    QTimer*         m_pTimer;
    QThread*        m_pThreadTimer;
    QString         m_strUser;
    QString         m_strPropertyScope;
    QVariant        m_vaSysCfg;
    QString         m_strAppDir;
    PluginsMgr*     m_pPluginsMgr;
    QProcess*       m_pResultsWin;
    VSCodeLauncher* m_pVSCodeLauncher;
    QString         m_strPreSN;
    int             m_LogoutTimeCnt;
    QFileSystemWatcher* m_pFSWatcher;
    QTextStream     m_tsLogFile;
    QFile*          m_pLogFile;
    eTestStatus     m_totalStatus;
    // DockWidget for Counts
    QDockWidget*    m_dockCounts;
    QLabel*         m_labelCountsExceTitle;
    QLabel*         m_labelCountsFailTitle;
    QLabel*         m_labelCountsPassTitle;
    QLabel*         m_labelCountsTotalTitle;
    QPushButton*    m_pClearCountsBtn;
    QLabel*         m_labelPassCnts;
    QLabel*         m_labelPassRate;
    QLabel*         m_labelFailCnts;
    QLabel*         m_labelFailRate;
    QLabel*         m_labelExceCnts;
    QLabel*         m_labelExceRate;
    QLabel*         m_labelTotalCnts;
    TA_ATEtop     m_ATEtop;
};

#endif // MAINWINDOW_H
