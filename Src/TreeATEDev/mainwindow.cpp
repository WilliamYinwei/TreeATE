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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tascriptedit.h"
#include "aboutdlg.h"
#include "testunitsmodel.h"

#include <QSplitter>
#include <QTableView>
#include <QListView>
#include <QTreeView>
#include <QFileDialog>
#include <QMessageBox>
#include <QJsonParseError>
#include <Qsci/qsciscintilla.h>
#include <QStandardItemModel>
#include <QFileSystemModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);

    QSplitter* splitterMain = new QSplitter(Qt::Vertical, ui->centralWidget);
    m_tvTestItems = new QTreeView(splitterMain);
    m_tvTestItems->setSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
    connect(m_tvTestItems, SIGNAL(clicked(QModelIndex)), this, SLOT(on_testitems_clicked(QModelIndex)));

    m_scriptEdit = new TaScriptEdit(splitterMain);
    ui->verticalLayout_main->addWidget(splitterMain);

    m_fileSysModel = new QFileSystemModel();
    m_tvModelsView = new QTreeView(ui->dockWidget_model);
    m_tvModelsView->setMinimumWidth(200);
    m_tvModelsView->setModel(m_fileSysModel);
    m_tvModelsView->setColumnHidden(1, true);
    m_tvModelsView->setColumnHidden(2, true);
    m_tvModelsView->setColumnHidden(3, true);
    ui->horizontalLayout_model->addWidget(m_tvModelsView);

    m_lvFunction = new QListView(ui->dockWidget_pro);
    ui->verticalLayout_pro->addWidget(m_lvFunction);
    m_lvFunction->hide();

    addDockWidget(Qt::RightDockWidgetArea, ui->dockWidget_model);
    addDockWidget(Qt::RightDockWidgetArea, ui->dockWidget_pro);

    splitterMain->setStretchFactor(0, 6);
    splitterMain->setStretchFactor(1, 4);

    QStringList strHeader;
    strHeader << "Name" << "Description";
    m_pUnitModel = new TestUnitsModel(strHeader);
    m_tvTestItems->setModel(m_pUnitModel);

    m_tmPublicPara = new QStandardItemModel();
    m_tmPublicPara->setColumnCount(3);
    m_tmPublicPara->setHeaderData(0, Qt::Horizontal, tr("Name"));
    m_tmPublicPara->setHeaderData(1, Qt::Horizontal, tr("Value"));
    m_tmPublicPara->setHeaderData(2, Qt::Horizontal, tr("Description"));
    ui->tableView->setModel(m_tmPublicPara);
}

MainWindow::~MainWindow()
{
    if(m_scriptEdit) {
        delete m_scriptEdit;
    }
    if(m_pUnitModel) {
        delete m_pUnitModel;
    }
    delete ui;
}

void MainWindow::on_action_About_triggered()
{
    AboutDlg dlg;
    dlg.exec();
}

bool MainWindow::openProjectFile(const QString& strPrjFile)
{
    QFile prjFile(strPrjFile);

    if(!prjFile.open(QIODevice::ReadOnly)) {
        QString errStr = prjFile.errorString() + ": " + strPrjFile;
        QMessageBox::warning(this, tr("Warning"), errStr);
        return false;
    }

    QJsonParseError jsErr;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(prjFile.readAll(), &jsErr);
    prjFile.close();

    m_vaPrj = jsonDoc.toVariant();
    m_pUnitModel->SetPrjData(m_vaPrj);
    m_tvTestItems->expandAll();


    QFileInfo fileInfo(strPrjFile);
    QString strScriptFile = fileInfo.absolutePath() + "/" + fileInfo.completeBaseName() + ".tsx";
    QFile scrFile(strScriptFile);

    if(!scrFile.open(QIODevice::ReadOnly)) {
        QString errStr = scrFile.errorString() + ": " + strScriptFile;
        QMessageBox::warning(this, tr("Warning"), errStr);
        return false;
    }
    m_scriptEdit->SetScriptData(scrFile.readAll());
    scrFile.close();

    QVariantMap vmPrj = m_vaPrj.toMap();
    QVariantMap vmPrjPublic = vmPrj["Public"].toMap();
    QVariantList vlPrjPara = vmPrjPublic["Parameter"].toList();
    for(int i = 0; i < vlPrjPara.count(); i++) {
        QVariantMap vmPara = vlPrjPara.at(i).toMap();
        m_tmPublicPara->setItem(i, 0, new QStandardItem(vmPara["Name"].toString()));
        m_tmPublicPara->setItem(i, 1, new QStandardItem(vmPara["Value"].toString()));
        m_tmPublicPara->setItem(i, 2, new QStandardItem(vmPara["Desc"].toString()));
    }

    // model path
    m_fileSysModel->setRootPath(fileInfo.absolutePath());
    m_tvModelsView->setRootIndex(m_fileSysModel->index(fileInfo.absolutePath()));

    return true;
}

void MainWindow::on_action_Open_triggered()
{
    QString fileName =
        QFileDialog::getOpenFileName(this, tr("Open project file"), "",  tr("Test Project(*.tp)"));
    if(fileName.isEmpty())
        return;

    openProjectFile(fileName);
}

void MainWindow::on_testitems_clicked(const QModelIndex& index)
{
    QVariant vData = m_pUnitModel->getDataForColumn(index, 0);
    QString strExpr = "function\\s+\\w+_" + vData.toString();
    if(!m_scriptEdit->GetScriptEdit()->findFirst(strExpr, true, false, false, false))
    {
        m_scriptEdit->GetScriptEdit()->findFirst(strExpr, true, false, false, false, false);
    }
}
