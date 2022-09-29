///
/// @brief         TreeATE's main window
/// @author        David Yin  2018-12 willage.yin@163.com
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
class QFileSystemWatcher;

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

protected:
    void closeEvent(QCloseEvent *event);
    void changeEvent(QEvent* e);

private:
    void unLoad();
    void loadUnits(const QString& strPrjName);
    void updateParentItemClicked(QTreeWidgetItem *parent);
    void enableForStatus(eTestStatus eStatus);
    void showPara(const QString& who);
    void openSysCfg();
    bool getNeedCheckNetwork();
    void openLogFile();
    QDockWidget *createDockWinCounts();

private:
    Ui::MainWindow  *ui;
    TestManger*     m_pTestMgr;
    QLabel*         m_labelPath;
    QLabel*         m_labelUser;
    QLabel*         m_labelTime;
    QLabel*         m_labelStationName;
    QLabel*         m_labelHistoryRst;
    QLineEdit*      m_leTotalSN;
    QTimer*         m_pTimer;
    QThread*        m_pThreadTimer;
    QString         m_strUser;
    QVariant        m_vaSysCfg;
    QString         m_strAppDir;
    PluginsMgr*     m_pPluginsMgr;
    QProcess*       m_pResultsWin;
    QProcess*       m_pEditWin;
    QStringList     m_lstLangFiles;
    QString         m_strPreSN;
    int             m_LogoutTimeCnt;
    QFileSystemWatcher* m_pFSWatcher;
    QTextStream     m_tsLogFile;
    QFile*          m_pLogFile;
    eTestStatus     m_totalStatus;
    // DockWidget for Counts
    QDockWidget*    m_dockCounts;
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
