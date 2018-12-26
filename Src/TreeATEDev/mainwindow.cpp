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
#include <QInputDialog>
#include <QItemSelectionModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);

    connect(ui->actionClose, &QAction::triggered, qApp, &QCoreApplication::quit);
    connect(ui->menu_View, SIGNAL(aboutToShow()), this, SLOT(on_menuView_Show()));
    connect(ui->menu_Edit, SIGNAL(aboutToShow()), this, SLOT(on_editMenu_Show()));

    QSplitter* splitterMain = new QSplitter(Qt::Vertical, ui->centralWidget);
    m_tvTestItems = new QTreeView(splitterMain);
    m_tvTestItems->setSelectionMode(QAbstractItemView::SingleSelection);
    m_tvTestItems->setContextMenuPolicy(Qt::CustomContextMenu);
    m_tvTestItems->setAlternatingRowColors(true);
    m_tvTestItems->setAllColumnsShowFocus(true);
    m_tvTestItems->setSelectionBehavior(QAbstractItemView::SelectItems);
    m_tvTestItems->setSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
    connect(m_tvTestItems, SIGNAL(clicked(QModelIndex)), this, SLOT(on_testitems_clicked(QModelIndex)));
    connect(m_tvTestItems->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, &MainWindow::updateActions);
    connect(ui->menu_Test_Units, &QMenu::aboutToShow, this, &MainWindow::updateActions);
    connect(m_tvTestItems, SIGNAL(customContextMenuRequested(QPoint)), this,
            SLOT(on_customContextMenu_Requested(QPoint)));

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
    strHeader << tr("Name") << tr("Description");
    m_pUnitModel = new TestUnitsModel(strHeader);
    m_tvTestItems->setModel(m_pUnitModel);

    updateActions();
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

    m_strProjectFile = strPrjFile;

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

void MainWindow::on_editMenu_Show()
{
    ui->action_Script->setMenu(m_scriptEdit->GetScriptEdit()->createStandardContextMenu());
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

    m_pUnitModel->SetPublicModels(m_pProMgrWidget->GetModels());
    m_pUnitModel->SetPublicPara(m_pProMgrWidget->GetPublicPara());

    QVariant vPrj = m_pUnitModel->GetPrjData();
    if(vPrj.isValid()) {
        QFile scrFile(m_strProjectFile);

        if(!scrFile.open(QIODevice::WriteOnly)) {
            QString errStr = scrFile.errorString() + ": " + m_strProjectFile;
            QMessageBox::warning(this, tr("Warning"), errStr);
            return;
        }

        scrFile.write(QJsonDocument::fromVariant(vPrj).toJson());
        scrFile.close();
        m_bChanged = false;
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
    bool hasSelection = !m_tvTestItems->selectionModel()->selection().isEmpty();
    QModelIndex& parentIndex = m_tvTestItems->selectionModel()->currentIndex().parent();
    bool notRoot = parentIndex.isValid();
    bool isCase = false;
    if(notRoot) {
        isCase = parentIndex.parent().isValid();
    }
    int column = m_tvTestItems->selectionModel()->currentIndex().column();
    bool bRemovePara = column >= 2 ? true : false;
    bool bInsertPara = column >= 1 ? true : false;

    ui->actionRemove_Unit->setEnabled(hasSelection && notRoot);
    ui->actionRemove_Parameter->setEnabled(hasSelection && bRemovePara);

    bool hasCurrent = m_tvTestItems->selectionModel()->currentIndex().isValid();
    ui->actionInsert_Unit->setEnabled(hasCurrent && notRoot);
    ui->actionInsert_Parameter->setEnabled(hasCurrent && bInsertPara);
    ui->actionAdd_Sub_Unit->setDisabled(isCase);

    if (hasCurrent) {
        m_tvTestItems->closePersistentEditor(m_tvTestItems->selectionModel()->currentIndex());

        int row = m_tvTestItems->selectionModel()->currentIndex().row();
        int column = m_tvTestItems->selectionModel()->currentIndex().column();
        if (notRoot)
            statusBar()->showMessage(tr("Position: (%1,%2)").arg(row).arg(column));
        else
            statusBar()->showMessage(tr("Position: (%1,%2) in top level").arg(row).arg(column));
    }
}

void MainWindow::on_actionInsert_Unit_triggered()
{
    QModelIndex index = m_tvTestItems->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvTestItems->model();

    if (!model->insertRow(index.row()+1, index.parent()))
        return;

    updateActions();

    for (int column = 0; column < model->columnCount(index); ++column) {
        QModelIndex child = model->index(index.row()+1, column, index.parent());
        model->setData(child, QVariant("[No data]"), Qt::EditRole);
    }
}

void MainWindow::on_actionInsert_Parameter_triggered()
{
    QString name = QInputDialog::getText(this, tr("Input"), tr("Parameter name"));
    name = name.trimmed();
    if(name.isEmpty())
        return;

    QAbstractItemModel *model = m_tvTestItems->model();
    int column = m_tvTestItems->selectionModel()->currentIndex().column();

    // Insert a column in the parent item.
    bool changed = model->insertColumn(column + 1);
    if (changed) {
        model->setHeaderData(column + 1, Qt::Horizontal, QVariant(name), Qt::EditRole);
    }

    updateActions();
}

void MainWindow::on_actionRemove_Unit_triggered()
{
    QModelIndex index = m_tvTestItems->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvTestItems->model();
    if (model->removeRow(index.row(), index.parent()))
        updateActions();
}

void MainWindow::on_actionRemove_Parameter_triggered()
{
    QAbstractItemModel *model = m_tvTestItems->model();
    int column = m_tvTestItems->selectionModel()->currentIndex().column();

    // Insert columns in each child of the parent item.
    bool changed = model->removeColumn(column);

    if (changed)
        updateActions();
}

void MainWindow::on_actionAdd_Sub_Unit_triggered()
{
    QModelIndex index = m_tvTestItems->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvTestItems->model();
    index = index.sibling(index.row(), 0);

    if (model->columnCount(index) == 0) {
        if (!model->insertColumn(0, index))
            return;
    }

    if (!model->insertRow(0, index))
        return;

    for (int column = 0; column < model->columnCount(index); ++column) {
        QModelIndex child = model->index(0, column, index);
        model->setData(child, QVariant("[No data]"), Qt::EditRole);
        if (!model->headerData(column, Qt::Horizontal).isValid())
            model->setHeaderData(column, Qt::Horizontal, QVariant("[No header]"), Qt::EditRole);
    }

    m_tvTestItems->selectionModel()->setCurrentIndex(model->index(0, 0, index),
                                            QItemSelectionModel::ClearAndSelect);
    updateActions();
}

void MainWindow::on_customContextMenu_Requested(const QPoint& pos)
{
    Q_UNUSED(pos)
    QMenu* popMenu = ui->menu_Test_Units;
    popMenu->exec(QCursor::pos());
}
