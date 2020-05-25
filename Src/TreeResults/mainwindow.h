///
/// @project       TreeATE
/// @brief         MainWindow of the test results manager
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

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_case_clicked(const QModelIndex &index);

    void on_actionPrevPage_triggered();

    void on_actionFirstPage_triggered();

    void on_actionNextPage_triggered();

    void on_actionLastPage_triggered();

    void on_actionSearch_triggered();

    void on_barcode_return_triggered();

private:
    int GetResultsCount();
    int GetPageCnt();
    void UpdatePageNum();
    void RequeryData(int index);

private:
    Ui::MainWindow *ui;
    class QSqlQueryModel*   m_queryModel;
    class QSqlQueryModel*   m_queryCaseModel;
    class QSqlQueryModel*   m_queryDetialModel;
    QSqlDatabase            m_dbSqlite;
    class QLineEdit*        m_pLeBarcode;
    class QLabel*           m_pLabelPageNum;

    int     m_currentPage;
    int     m_totalPage;
    int     m_totalRcdCnt;
    int     m_pageRcdCnt;
};

#endif // MAINWINDOW_H
