///
/// @project       TreeATE Dev
/// @brief         MainWindow of the TreeATEDev
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

#include <QMainWindow>
#include <QVariant>

namespace Ui {
class MainWindow;
}

class TaScriptEdit;
class QTableView;
class QListView;
class QTreeView;
class TestUnitsModel;
class QStandardItemModel;
class QFileSystemModel;
class TAPropertyMgrWidget;
class QLabel;
class DlgFind;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    bool OpenProjectFile(const QString& strPrjFile, bool bTPX = true);
    void SetNewPrjDisabled();

public slots:
    void updateActions();

private slots:
    void on_action_About_triggered();

    void on_action_Open_triggered();

    void on_testitems_clicked(const QModelIndex &index);

    void on_model_file_clicked(const QModelIndex& index);

    void on_menuView_Show();

    void on_action_Save_triggered();

    void on_data_changed();

    void on_actionShrink_items_Ctrl_triggered();

    void on_actionSpread_items_Ctrl_triggered();

    void on_actionInsert_Unit_triggered();

    void on_actionInsert_Parameter_triggered();

    void on_actionRemove_Unit_triggered();

    void on_actionRemove_Parameter_triggered();

    void on_actionAdd_Sub_Unit_triggered();

    void on_customContextMenu_Requested(const QPoint& pos);

    void on_editMenu_Show();

    void on_actionUpItem_triggered();

    void on_actionDownItem_triggered();

    void on_actionImport_triggered();

    void on_project_customContextMenu_Requested(const QPoint& pos);

    void on_actionRemove_modelFile();

    void on_action_New_triggered();

    void on_action_Export_triggered();

    void on_action_Help_triggered();

    void on_actionFind_triggered();

    void on_dlgFind(QString text, QString reText, bool wo, bool ca, bool re, bool replace);

    void on_actionRename_triggered();

protected:
    bool importModelFile(const QString& sourcePath, const QString& distPath);
    void closeEvent(QCloseEvent *event);    

private:
    Ui::MainWindow *ui;
    TaScriptEdit*   m_scriptEdit;       // script edit
    QTreeView*      m_tvModelsView;     // file system view
    QFileSystemModel* m_fileSysModel;   // file system model
    QTreeView*      m_tvTestItems;      // test items view
    TestUnitsModel* m_pUnitModel;       // test items model
    TAPropertyMgrWidget*    m_pProMgrWidget; // project property manage widget
    QString         m_strScriptFile;
    QString         m_strProjectFile;
    QMenu*          m_popMenuModelFile; // option menu of the file system view
    QAction*        m_actionRemoveFile;
    QLabel*         m_labelPrjPath;     // project path name on the status bar
    DlgFind*        m_pFindDlg;
};

#endif // MAINWINDOW_H
