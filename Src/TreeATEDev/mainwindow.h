///
/// @project       TreeATE
/// @brief         MainWindow of the TreeATEDev
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    bool openProjectFile(const QString& strPrjFile);

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

    void updateActions();

private:
    Ui::MainWindow *ui;
    TaScriptEdit*   m_scriptEdit;
    QTreeView*      m_tvModelsView;
    QFileSystemModel* m_fileSysModel;
    QTreeView*      m_tvTestItems;
    TestUnitsModel* m_pUnitModel;
    TAPropertyMgrWidget*    m_pProMgrWidget;
    QString         m_strScriptFile;
    bool            m_bChanged;
};

#endif // MAINWINDOW_H
