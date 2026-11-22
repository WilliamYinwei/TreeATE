///
/// @project       TreeATE
/// @brief         MainWindow of the test results manager
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-21 M4：只读库、参数化查询、分页/CSV/联动修复、三主题双语与 1024 紧凑布局
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
#include <QMap>

namespace Ui {
class MainWindow;
}

class QLabel;
class QLineEdit;
class QToolButton;
class QTranslator;
class QTableView;
class QSplitter;
class QTabWidget;
class TASqlQueryModel;

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

    void on_actionExport_triggered();

    void on_themeButton_clicked();

    void on_langButton_clicked();

private:
    void BuildUi();
    void BuildStatusBar();
    void LoadSettings();
    void SaveSettings();
    bool OpenDatabase();
    void ApplyTheme(int nTheme);
    void ApplyLanguage(const QString& strLang, bool bSave);
    void RetranslateUi();
    void ApplyModelHeaders();
    void ApplyHeaderLabels(TASqlQueryModel* pModel, int nKind);
    void UpdatePageNum();
    void UpdateSummary();
    void UpdateDatabaseState();
    void ShowEmptyStates();
    void ClearDetail();
    bool EnsureDatabase();

    int GetResultsCount();
    int GetPageCnt();
    void RequeryData(int nPage);
    void QueryCases(int nParentId);
    void QueryDetails(int nParentId);

    QString LikePattern(const QString& strText) const;
    QString ItemLabel(const QString& strId) const;
    QString HeaderLabel(const QString& strField, int nKind) const;
    void UpdateResponsiveLayout();
    void UpdateTabTexts();

protected:
    void resizeEvent(QResizeEvent* pEvent) override;

private:
    enum { ModelProject = 0, ModelCase, ModelDetail };

    Ui::MainWindow *ui;
    TASqlQueryModel*   m_queryModel;
    TASqlQueryModel*   m_queryCaseModel;
    TASqlQueryModel*   m_queryDetialModel;
    QSqlDatabase       m_dbSqlite;
    QLineEdit*         m_pLeBarcode;
    QLabel*            m_pLabelPageNum;
    QToolButton*       m_pBtnTheme;
    QToolButton*       m_pBtnLang;
    QLabel*            m_pLabelDbStatus;
    QLabel*            m_pLabelBrandVer;
    QLabel*            m_pLabelDbPath;
    QLabel*            m_pLabelTotal;
    QLabel*            m_pLabelSummary;
    QLabel*            m_pLabelSort;
    QLabel*            m_pEmptyResult;
    QLabel*            m_pEmptyCase;
    QLabel*            m_pEmptyDetail;
    QLabel*            m_pStatusDb;
    QLabel*            m_pStatusReadonly;
    QLabel*            m_pStatusTotal;
    QLabel*            m_pStatusPage;
    QLabel*            m_pStatusVersion;
    QTableView*        m_pTableResult;
    QSplitter*         m_pBottomSplit;
    QTabWidget*        m_pBottomTabs;
    QWidget*           m_pCasePanel;
    QWidget*           m_pDetailPanel;
    QToolButton*       m_pBtnFirst;
    QToolButton*       m_pBtnLast;
    QMap<QString, QString>  m_mpPrjItems;
    QMap<QString, QString>  m_mpCaseItems;
    QMap<QString, QString>  m_mpDetailItems;

    QTranslator*    m_pTranslator;
    QString         m_strLanguage;
    QString         m_strDbPath;
    QString         m_strDbError;
    bool            m_bDbReady;

    int     m_theme;
    int     m_currentPage;
    int     m_totalPage;
    int     m_totalRcdCnt;
    int     m_pageRcdCnt;
    bool    m_bCompact;
};

#endif // MAINWINDOW_H
