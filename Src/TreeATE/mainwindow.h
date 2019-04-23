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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "testmanger.h"
#include "pluginsmgr.h"

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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString GetHostAddress();
    void SetCurrUser(const QString& strUser);
    QString GetCurretLang();

private slots:
    void on_actionLoading_triggered();

    void on_actionPlay_triggered();

    void on_actionClose_triggered();

    void on_treeWidget_Units_itemClicked(QTreeWidgetItem *item, int column);

    void on_progressValueChanged(int n);

    void on_actionStop_triggered();

    void on_updateTotalStatus(eTestStatus eStatus, int n);

    void on_startLoading(int nCnt);

    void on_treeWidget_Units_itemChanged(QTreeWidgetItem *item, int column);

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
};

#endif // MAINWINDOW_H
