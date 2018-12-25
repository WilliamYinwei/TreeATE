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
#include "tapropertymgr.h"

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

    connect(ui->menu_View, SIGNAL(aboutToShow()), this, SLOT(on_menuView_Show()));

    QSplitter* splitterMain = new QSplitter(Qt::Vertical, ui->centralWidget);
    m_tvTestItems = new QTreeView(splitterMain);
    m_tvTestItems->setSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
    connect(m_tvTestItems, SIGNAL(clicked(QModelIndex)), this, SLOT(on_testitems_clicked(QModelIndex)));

    m_scriptEdit = new TaScriptEdit(splitterMain);
    connect(m_scriptEdit->GetScriptEdit(), SIGNAL(textChanged()), this, SLOT(on_data_changed()));
    ui->verticalLayout_main->addWidget(splitterMain);

    m_fileSysModel = new QFileSystemModel();
    m_tvModelsView = new QTreeView(ui->dockWidget_model);
    m_tvModelsView->setMinimumWidth(200);
    m_tvModelsView->setModel(m_fileSysModel);
    m_tvModelsView->setColumnHidden(1, true);
    m_tvModelsView->setColumnHidden(2, true);
    m_tvModelsView->setColumnHidden(3, true);
    ui->horizontalLayout_model->addWidget(m_tvModelsView);
    connect(m_tvModelsView, SIGNAL(clicked(QModelIndex)), this, SLOT(on_model_file_clicked(QModelIndex)));

    m_pProMgrWidget = new TAPropertyMgrWidget(this);
    addDockWidget(Qt::RightDockWidgetArea, ui->dockWidget_model);
    addDockWidget(Qt::RightDockWidgetArea, m_pProMgrWidget);
    m_pProMgrWidget->resize(200, 500);

    splitterMain->setStretchFactor(0, 6);
    splitterMain->setStretchFactor(1, 4);

    QStringList strHeader;
    strHeader << "Name" << "Description";
    m_pUnitModel = new TestUnitsModel(strHeader);
    m_tvTestItems->setModel(m_pUnitModel);
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

    QVariant vaPrj = jsonDoc.toVariant();
    m_pUnitModel->SetPrjData(vaPrj);
    m_tvTestItems->expandAll();


    QFileInfo fileInfo(strPrjFile);
    m_strScriptFile = fileInfo.absolutePath() + "/" + fileInfo.completeBaseName() + ".tsx";
    QFile scrFile(m_strScriptFile);

    if(!scrFile.open(QIODevice::ReadOnly)) {
        QString errStr = scrFile.errorString() + ": " + m_strScriptFile;
        QMessageBox::warning(this, tr("Warning"), errStr);
        return false;
    }
    m_scriptEdit->SetScriptData(scrFile.readAll());
    scrFile.close();

    m_pProMgrWidget->SetProjectPath(fileInfo.absolutePath());
    m_pProMgrWidget->SetPublicPara(m_pUnitModel->GetPublicPara());
    m_pProMgrWidget->SetModels(m_pUnitModel->GetPublicModels());

    // add the model's apis
    m_scriptEdit->ClearApis();
    QStringList strApis;
    strApis << m_pUnitModel->GetParaApis()
            << m_pProMgrWidget->GetAPIsFromModels();
    m_scriptEdit->AddSciApis(strApis);

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
        if(!m_scriptEdit->GetScriptEdit()->findFirst(strExpr, true, false, false, false, false))
        {
            int nEol = m_scriptEdit->GetScriptEdit()->lines();
            m_scriptEdit->GetScriptEdit()->setSelection(nEol, 0, nEol, 0);
            QString strNew = "\r\n\r\nfunction test_" + vData.toString() + "()\r\n{\r\n}";
            m_scriptEdit->GetScriptEdit()->insert(strNew);
        }
    }
}

void MainWindow::on_model_file_clicked(const QModelIndex& index)
{
    m_pProMgrWidget->SetCurrentView(m_fileSysModel->filePath(index));
}

void MainWindow::on_menuView_Show()
{
    ui->actionWindows->setMenu(this->createPopupMenu());
}

void MainWindow::on_action_Save_triggered()
{
    bool bSave = false;
    if(m_bChanged) {
        QString strScriptData = m_scriptEdit->GetScriptEdit()->text();
        QFile scrFile(m_strScriptFile);

        if(!scrFile.open(QIODevice::WriteOnly)) {
            QString errStr = scrFile.errorString() + ": " + m_strScriptFile;
            QMessageBox::warning(this, tr("Warning"), errStr);
            return;
        }
        scrFile.write(strScriptData.toUtf8());
        scrFile.close();
        m_bChanged = false;
        bSave = true;
    }

    if(m_pProMgrWidget->IsChanged()) {
        m_pProMgrWidget->SaveData();
        bSave = true;
    }

    if(bSave)
        QMessageBox::information(this, tr("Information"), tr("Success to save"));
}

void MainWindow::on_data_changed()
{
    m_bChanged = true;
}

void MainWindow::on_actionShrink_items_Ctrl_triggered()
{
    m_tvTestItems->expandAll();
}

void MainWindow::on_actionSpread_items_Ctrl_triggered()
{
    m_tvTestItems->collapseAll();
}

void MainWindow::updateActions()
{

}
