///
/// @project       TreeATE
/// @brief         MainWindow of the test results
/// @author        David Yin  2018-12 willage.yin@163.com
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

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlRecord>
#include <QLineEdit>
#include <QLabel>
#include <QSqlError>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{    
    ui->setupUi(this);
    showMaximized();
    setWindowState(Qt::WindowMaximized);

    m_pLeBarcode = new QLineEdit(this);
    const QString strStyleFont("font: 18pt;");
    m_pLeBarcode->setStyleSheet(strStyleFont);
    ui->mainToolBar->addWidget(m_pLeBarcode);
    connect(m_pLeBarcode, SIGNAL(returnPressed()), this, SLOT(on_barcode_return_triggered()));

    m_pLabelPageNum = new QLabel(this);
    m_pLabelPageNum->setStyleSheet(strStyleFont);
    ui->mainToolBar->insertWidget(ui->actionNextPage, m_pLabelPageNum);

    m_dbSqlite = QSqlDatabase::addDatabase("QSQLITE", "treeate_sqlite_query_results");
    QString strPath = qApp->applicationDirPath() + "/db/";
    m_dbSqlite.setDatabaseName(strPath + "treeate.sqlite");
    m_dbSqlite.open();

    m_queryModel = new TASqlQueryModel();
    m_queryCaseModel = new TASqlQueryModel();
    m_queryDetialModel = new TASqlQueryModel();

    m_pageRcdCnt = 10;

    on_actionSearch_triggered();

    ui->tableView->setModel(m_queryModel);
    ui->tableView->setAlternatingRowColors(true);

    ui->tableView_case->setModel(m_queryCaseModel);
    ui->tableView_case->setAlternatingRowColors(true);

    ui->tableView_detail->setModel(m_queryDetialModel);
    ui->tableView_detail->setAlternatingRowColors(true);

    ui->tableView_case->setMinimumHeight(300);

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
}

MainWindow::~MainWindow()
{
    m_dbSqlite.close();
    if(m_queryModel){
        m_queryModel->clear();
        delete m_queryModel;
    }
    if(m_queryCaseModel){
        m_queryCaseModel->clear();
        delete m_queryCaseModel;
    }
    if(m_queryDetialModel){
        m_queryDetialModel->clear();
        delete m_queryDetialModel;
    }

    delete ui;
}

int MainWindow::GetResultsCount()
{
    QString barcode = m_pLeBarcode->text().trimmed();
    QString strSelect;
    if(barcode.isEmpty()) {
        strSelect = "select count(*) from TestProject";
    }
    else {
        strSelect = "select count(*) from TestProject where barcode like '%" + barcode + "%'";
    }

    QSqlQuery query(m_dbSqlite);
    query.prepare(strSelect);
    if(!query.exec()) {
        QMessageBox::warning(this, "Warning", query.lastError().text());
        return 0;
    }

    if(!query.next()) {
        return 0;
    }

    return query.value(0).toInt();
}

void MainWindow::RequeryData(int index)
{
    QString limit = QString(" limit %1,%2").arg(index).arg(m_pageRcdCnt);
    QString barcode = m_pLeBarcode->text().trimmed();
    QString strSelect;
    if(barcode.isEmpty()) {
        strSelect = "select * from TestProject order by time desc" + limit;
    }
    else {
        strSelect = "select * from TestProject where barcode like '%" + barcode + "%'"
                + " order by time desc " + limit;
    }
    m_queryModel->setQuery(strSelect, m_dbSqlite);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    QSqlRecord record = m_queryModel->record(index.row());

    QString strSelect = "select * from TestCase where parentId = " + record.value("id").toString();
    m_queryCaseModel->setQuery(strSelect, m_dbSqlite);
}

void MainWindow::on_tableView_case_clicked(const QModelIndex &index)
{
    QSqlRecord record = m_queryCaseModel->record(index.row());

    QString strSelect = "select * from DetailRst where parentId = " + record.value("id").toString();
    m_queryDetialModel->setQuery(strSelect, m_dbSqlite);
}

int MainWindow::GetPageCnt()
{
    if(m_totalRcdCnt % m_pageRcdCnt == 0)
    {
        return m_totalRcdCnt / m_pageRcdCnt;
    }

    return m_totalRcdCnt / m_pageRcdCnt + 1;
}

void MainWindow::on_actionPrevPage_triggered()
{
    int index = (m_currentPage - 2) * m_pageRcdCnt;
    if(index >= 0) {
        RequeryData(index);
        m_currentPage -= 1;
    }

    UpdatePageNum();
}

void MainWindow::on_actionFirstPage_triggered()
{
    int index = 0;
    RequeryData(index);
    m_currentPage = 1;
    UpdatePageNum();
}

void MainWindow::on_actionNextPage_triggered()
{
    int index = m_currentPage * m_pageRcdCnt;
    RequeryData(index);
    m_currentPage += 1;
    UpdatePageNum();
}

void MainWindow::on_actionLastPage_triggered()
{
    int index = (m_totalPage - 1) * m_pageRcdCnt;
    RequeryData(index);
    m_currentPage = m_totalPage;
    UpdatePageNum();
}

void MainWindow::UpdatePageNum()
{
    QString strNum = tr("%1/%2").arg(m_currentPage).arg(m_totalPage);
    m_pLabelPageNum->setText(strNum);
    if(m_currentPage == 1) {
        ui->actionFirstPage->setEnabled(false);
        ui->actionPrevPage->setEnabled(false);
        ui->actionNextPage->setEnabled(true);
        ui->actionLastPage->setEnabled(true);
    }
    else if(m_currentPage == m_totalPage) {
        ui->actionFirstPage->setEnabled(true);
        ui->actionPrevPage->setEnabled(true);
        ui->actionNextPage->setEnabled(false);
        ui->actionLastPage->setEnabled(false);
    }
    else if(m_currentPage == 1 && m_totalPage == 1) {
        ui->actionFirstPage->setEnabled(false);
        ui->actionPrevPage->setEnabled(false);
        ui->actionNextPage->setEnabled(false);
        ui->actionLastPage->setEnabled(false);
    }
    else {
        ui->actionFirstPage->setEnabled(true);
        ui->actionPrevPage->setEnabled(true);
        ui->actionNextPage->setEnabled(true);
        ui->actionLastPage->setEnabled(true);
    }
}

void MainWindow::on_actionSearch_triggered()
{
    m_totalRcdCnt = GetResultsCount();
    m_currentPage = 1;
    m_totalPage = GetPageCnt();
    UpdatePageNum();
    RequeryData(0);
    ui->tableView->show();
}

void MainWindow::on_barcode_return_triggered()
{
    on_actionSearch_triggered();
}

void MainWindow::on_actionExport_triggered()
{
    // query the old names
    QSqlQuery query(m_dbSqlite);
    query.prepare("SELECT DISTINCT name FROM TestProject");
    if(!query.exec()) {
        QMessageBox::warning(this, "Warnning", "No data in local database.");
        return;
    }
    QStringList lstPrjName;
    while(query.next()) {
        lstPrjName.append(query.value(0).toString());
    }

    DlgExport dlgExport;
    dlgExport.InitProjectName(lstPrjName, m_mpPrjItems.keys(),
                              m_mpCaseItems.keys(), m_mpDetailItems.keys());
    if(QDialog::Accepted != dlgExport.exec())
        return;

    QStringList strLstItems = dlgExport.GetSelectedItems();
    if(strLstItems.isEmpty()) {
        QMessageBox::warning(this, "Warnning", "Must be select one item.");
        return;
    }

    QString strPrjName = dlgExport.GetProjectName();
    if(strPrjName.isEmpty()) {
        QMessageBox::warning(this, "Warnning", "Must be select project name.");
        return;
    }

    QStringList sqlItems;
    foreach(QString strItem, strLstItems) {
        auto itor = m_mpPrjItems.find(strItem);
        if(itor != m_mpPrjItems.end()) {
            sqlItems.append(*itor);
        }
        else {
            itor = m_mpCaseItems.find(strItem);
            if(itor != m_mpCaseItems.end()) {
                sqlItems.append(*itor);
            }
            else {
                itor = m_mpDetailItems.find(strItem);
                if(itor != m_mpDetailItems.end())
                    sqlItems.append(*itor);
            }
        }
    }

    QString sqlQuery = "SELECT " + QString(sqlItems.join(','));
    sqlQuery += " FROM TestProject AS tp \
    LEFT JOIN (SELECT tc.parentId AS parentId, \
    tc.name AS tc_name, \
    tc.longname AS tc_path, \
    tc.time AS tc_time, \
    tc.desc AS tc_desc, \
    tc.spend AS tc_spend, \
    tc.rst AS tc_rst, \
    der.name AS dr_name, \
    der.time AS dr_time, \
    der.desc AS dr_value, \
    der.standard AS dr_standard, \
    der.rst AS dr_rst \
    FROM TestCase AS tc LEFT JOIN DetailRst AS der ON der.parentId = tc.id) AS td \
    ON td.parentId = tp.id \
    WHERE tp.time > datetime('" + dlgExport.GetStartTime() + "')";
    sqlQuery += " AND tp.time < datetime('" + dlgExport.GetEndTime() + "') AND tp.name = '" + strPrjName + "'";

    // export to csv file
    QSqlQuery sqlRst(m_dbSqlite);
    if(!sqlRst.exec(sqlQuery)) {
        QMessageBox::critical(this, "Error", sqlRst.lastError().text());
        return;
    }

    QFile file(dlgExport.GetExportFileName());
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::critical(this, "Error", file.errorString());
        return;
    }

    QTextStream out(&file);
    out.setCodec("ANSI");
    out << strLstItems.join(',') << "\n";
    const int columCnt = strLstItems.count();
    QStringList strLine;
    while(sqlRst.next()) {
        strLine.clear();
        for(int i = 0; i < columCnt; i++)
            strLine.append(sqlRst.value(i).toString());
        out << strLine.join(',') << "\n";
    }
    out.flush();
    file.close();
    QMessageBox::information(this, "Information", "Success to export: " + dlgExport.GetExportFileName());
}
