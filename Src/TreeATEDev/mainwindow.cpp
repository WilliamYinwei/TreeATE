///
/// @project       TreeATE
/// @brief         MainWindow of the TreeATEDev
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tascriptedit.h"
#include "aboutdlg.h"
#include "testunitsmodel.h"
#include "tapropertymgr.h"
#include "newprjdlg.h"

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
#include <QCloseEvent>
#include <QLabel>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    ui->action_Save->setEnabled(false);

    m_labelPrjPath = new QLabel(this);
    statusBar()->addWidget(m_labelPrjPath);

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

    QStringList strHeader;
    strHeader << tr("Name") << tr("Description");
    m_pUnitModel = new TestUnitsModel(strHeader);
    m_tvTestItems->setModel(m_pUnitModel);
    connect(m_pUnitModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this,
            SLOT(on_data_changed()));
    connect(m_pUnitModel, SIGNAL(rowsMoved(QModelIndex,int,int,QModelIndex,int)), this,
            SLOT(on_data_changed()));
    connect(m_pUnitModel, SIGNAL(rowsRemoved(QModelIndex,int,int)), this,
            SLOT(on_data_changed()));
    connect(m_pUnitModel, SIGNAL(rowsInserted(QModelIndex,int,int)), this,
            SLOT(on_data_changed()));
    connect(m_pUnitModel, SIGNAL(columnsInserted(QModelIndex,int,int)), this,
            SLOT(on_data_changed()));
    connect(m_pUnitModel, SIGNAL(columnsRemoved(QModelIndex,int,int)), this,
            SLOT(on_data_changed()));


    m_scriptEdit = new TaScriptEdit(splitterMain);
    connect(m_scriptEdit->GetScriptEdit(), SIGNAL(modificationChanged(bool)), this,
            SLOT(on_data_changed()));
    ui->verticalLayout_main->addWidget(splitterMain);

    m_fileSysModel = new QFileSystemModel();
    m_fileSysModel->setReadOnly(false);
    m_tvModelsView = new QTreeView(ui->dockWidget_model);    
    m_tvModelsView->setModel(m_fileSysModel);
    m_tvModelsView->setColumnHidden(1, true);
    m_tvModelsView->setColumnHidden(2, true);
    m_tvModelsView->setColumnHidden(3, true);
    m_tvModelsView->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->horizontalLayout_model->addWidget(m_tvModelsView);
    connect(m_tvModelsView, SIGNAL(clicked(QModelIndex)), this, SLOT(on_model_file_clicked(QModelIndex)));    
    connect(m_tvModelsView, SIGNAL(customContextMenuRequested(QPoint)), this,
            SLOT(on_project_customContextMenu_Requested(QPoint)));

    m_pProMgrWidget = new TAPropertyMgrWidget(this);
    addDockWidget(Qt::RightDockWidgetArea, ui->dockWidget_model);
    addDockWidget(Qt::RightDockWidgetArea, m_pProMgrWidget);
    connect(m_pProMgrWidget, SIGNAL(propertyIsChanged()), this, SLOT(on_data_changed()));

    splitterMain->setStretchFactor(0, 6);
    splitterMain->setStretchFactor(1, 4);

    m_popMenuModelFile = new QMenu(this);
    m_popMenuModelFile->addAction(ui->actionImport);
    m_popMenuModelFile->addSeparator();
    m_actionRemoveFile = m_popMenuModelFile->addAction(tr("Remove file"));
    connect(m_actionRemoveFile, SIGNAL(triggered(bool)), this,
            SLOT(on_actionRemove_modelFile()));

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

bool MainWindow::OpenProjectFile(const QString& strPrjFile)
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
    QString scriptFileJs = fileInfo.absolutePath() + "/" + fileInfo.completeBaseName() + ".js";
    QString scriptFilePy = fileInfo.absolutePath() + "/" + fileInfo.completeBaseName() + ".py";
    fileInfo.setFile(scriptFileJs);
    if(fileInfo.isFile()) {
        m_strScriptFile = scriptFileJs;
        m_scriptEdit->SwitchLang("js");
    }
    else {
        m_strScriptFile = scriptFilePy;
        m_scriptEdit->SwitchLang("py");
    }

    QFile scrFile(m_strScriptFile);

    if(!scrFile.open(QIODevice::ReadOnly)) {
        QString errStr = scrFile.errorString() + ": " + m_strScriptFile;
        QMessageBox::warning(this, tr("Warning"), errStr);
        return false;
    }    
    m_scriptEdit->SetScriptData(scrFile.readAll());
    scrFile.close();

    m_pProMgrWidget->SetProjectPath(fileInfo.absolutePath() + "/"
                                    + fileInfo.completeBaseName() + ".tpx");
    m_pProMgrWidget->SetPublicPara(m_pUnitModel->GetPublicPara());
    m_pProMgrWidget->SetModels(m_pUnitModel->GetPublicModels());
    m_pProMgrWidget->SetPrjVersion(m_pUnitModel->GetPrjVersion());

    // add the model's apis
    m_scriptEdit->ClearApis();
    QStringList strApis;
    strApis << m_pUnitModel->GetParaApis()
            << m_pProMgrWidget->GetAPIsFromModels();
    m_scriptEdit->AddSciApis(strApis);

    // model path
    m_fileSysModel->setRootPath(fileInfo.absolutePath());
    m_tvModelsView->setRootIndex(m_fileSysModel->index(fileInfo.absolutePath()));
    ui->action_Save->setEnabled(false);

    m_labelPrjPath->setText(m_strProjectFile);
    return true;
}

void MainWindow::on_action_Open_triggered()
{
    QString fileName =
        QFileDialog::getOpenFileName(this, tr("Open project file"), "",  tr("Test Project(*.tp)"));
    if(fileName.isEmpty())
        return;

    OpenProjectFile(fileName);
}

void MainWindow::on_testitems_clicked(const QModelIndex& index)
{
    updateActions();

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
    if(ui->action_Save->isEnabled()) {
        QString strScriptData = m_scriptEdit->GetScriptEdit()->text();
        QFile scrFile(m_strScriptFile);

        if(!scrFile.open(QIODevice::WriteOnly)) {
            QString errStr = scrFile.errorString() + ": " + m_strScriptFile;
            QMessageBox::warning(this, tr("Warning"), errStr);
            return;
        }
        scrFile.write(strScriptData.toUtf8());
        scrFile.close();
        bSave = true;
    }

    m_pUnitModel->SetPublicModels(m_pProMgrWidget->GetModels());
    m_pUnitModel->SetPublicPara(m_pProMgrWidget->GetPublicPara());
    m_pUnitModel->SetPrjVersion(m_pProMgrWidget->GetPrjVersion());

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
        bSave = true;
    }

    if(m_pProMgrWidget->SavePrjCfgFile())
        bSave = true;

    if(bSave) {
        ui->action_Save->setEnabled(false);
        QMessageBox::information(this, tr("Information"), tr("Success to save"));
    }
}

void MainWindow::on_data_changed()
{
    ui->action_Save->setEnabled(true);
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
    QModelIndex& currIndex = m_tvTestItems->selectionModel()->currentIndex();
    bool hasCurrent = currIndex.isValid();

    int column = currIndex.column();
    int row = currIndex.row();
    bool bRemovePara = column >= 2 ? true : false;
    bool bInsertPara = column >= 1 ? true : false;

    QModelIndex& parentIndex = currIndex.parent();
    bool notRoot = parentIndex.isValid();
    bool isCase = false;
    if(notRoot) {
        isCase = parentIndex.parent().isValid();
    }

    ui->actionRemove_Unit->setEnabled(hasSelection && notRoot);
    ui->actionRemove_Parameter->setEnabled(hasSelection && bRemovePara);

    ui->actionInsert_Unit->setEnabled(hasCurrent && notRoot);
    ui->actionInsert_Parameter->setEnabled(hasCurrent && bInsertPara);
    ui->actionAdd_Sub_Unit->setDisabled(isCase);

    QAbstractItemModel *model = m_tvTestItems->model();
    ui->actionUpItem->setEnabled(row != 0);
    int rowCnt = model->rowCount(parentIndex);
    int rowMaxIndx = rowCnt > 0 ? rowCnt  - 1 : 0;
    ui->actionDownItem->setEnabled(row != rowMaxIndx);

    if (hasCurrent) {
        m_tvTestItems->closePersistentEditor(currIndex);
        QString statusStr;
        if (notRoot) {
            if(column > 1)
                statusStr = tr("Parameter's value");
            else if(column == 0)
                statusStr = tr("Name of the test item, must be English.");
            else
                statusStr = tr("Description content");
        }
        else
            statusStr = tr("It's test project");
        statusBar()->showMessage(statusStr);
        ui->action_Export->setEnabled(true);
    }
    else {
        ui->action_Export->setEnabled(false);
        ui->actionDownItem->setEnabled(false);
        ui->actionUpItem->setEnabled(false);
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
    if (model->removeRow(index.row(), index.parent())) {
        updateActions();
    }
}

void MainWindow::on_actionRemove_Parameter_triggered()
{
    QAbstractItemModel *model = m_tvTestItems->model();
    int column = m_tvTestItems->selectionModel()->currentIndex().column();

    // Insert columns in each child of the parent item.
    bool changed = model->removeColumn(column);

    if (changed) {
        updateActions();
    }
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


void MainWindow::on_actionUpItem_triggered()
{
    QModelIndex index = m_tvTestItems->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvTestItems->model();
    index = index.sibling(index.row(), 0);
    model->moveRow(index.parent(), index.row(), index.parent(), index.row() - 1);
    updateActions();
}

void MainWindow::on_actionDownItem_triggered()
{
    QModelIndex index = m_tvTestItems->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvTestItems->model();
    index = index.sibling(index.row(), 0);
    model->moveRow(index.parent(), index.row(), index.parent(), index.row() + 1);
    updateActions();
}


void MainWindow::on_customContextMenu_Requested(const QPoint& pos)
{
    Q_UNUSED(pos)
    QMenu* popMenu = ui->menu_Test_Units;
    popMenu->exec(QCursor::pos());
}

bool MainWindow::importModelFile(const QString& sourcePath, const QString& distPath)
{
    QFileInfo infoSrc(sourcePath);
    QFileInfo infoDist(distPath);
    if(infoSrc.absolutePath() == infoDist.absolutePath())
        return true;

    if(!QFile::copy(sourcePath, distPath + "/" + infoSrc.fileName())) {
        QMessageBox::warning(this, tr("Warning"), tr("Failed to copy this file: ") + sourcePath);
        return false;
    }
    return true;
}

void MainWindow::on_actionImport_triggered()
{
    QString selectedFilter;
    const QString strLibSuff = "Lib files (*.dll *.js *.py)";
    const QString strImgSuff = "Images (*.jpg *.png *.gif)";
    const QString strCSV = "CSV (*.csv)";
    QStringList lstFiles = QFileDialog::getOpenFileNames(this, tr("Import Files"),
                           "", strLibSuff + ";;" + strImgSuff + ";;" + strCSV,
                           &selectedFilter, QFileDialog::DontUseSheet);
    if(lstFiles.count() <= 0) {
        return;
    }

    if(selectedFilter == strCSV && m_pUnitModel) {
        QString strErr;
        if(!m_pUnitModel->ImportCSVFile(lstFiles.at(0), strErr)) {
            QMessageBox::warning(this, tr("Warning"), strErr);
        }
        m_tvTestItems->expandAll();
        return;
    }

    QFileInfo info(m_strProjectFile);
    QString strDistPath = info.absolutePath() + "/libs/";
    if(selectedFilter == strImgSuff) {
        strDistPath = info.absolutePath() + "/images/";
    }
    QFileInfo infoTo(strDistPath);
    if(!infoTo.exists()) {
        QDir dir;
        dir.mkpath(strDistPath);
    }
    foreach(QString strFile, lstFiles) {
        importModelFile(strFile, strDistPath);
    }
}

void MainWindow::on_action_Export_triggered()
{
    QString saveFile = QFileDialog::getSaveFileName(this, tr("Export to CSV file"),
                                                    "", "CSV (*.csv)");
    if(m_pUnitModel && !saveFile.isEmpty()) {
        QString strErr;
        if(!m_pUnitModel->ExportCSVFile(saveFile, strErr)) {
            QMessageBox::warning(this, tr("Warning"), strErr);
        }
    }
}

void MainWindow::on_project_customContextMenu_Requested(const QPoint& pos)
{
    Q_UNUSED(pos);
    m_popMenuModelFile->exec(QCursor::pos());
}

void MainWindow::on_actionRemove_modelFile()
{
    QModelIndex index = m_tvModelsView->selectionModel()->currentIndex();
    QFileInfo info = m_fileSysModel->fileInfo(index);
    QString suffix = info.completeSuffix();
    if(suffix == "tp" || suffix == "tpx") {
        QMessageBox::information(this, tr("Info"), tr("Don't remove this file"));
        return;
    }
    bool ok = m_fileSysModel->remove(index);
    QMessageBox::information(this, tr("Info"), ok ? tr("It was removed") : tr("No removed"));
}

void MainWindow::SetNewPrjDisabled()
{
    ui->action_New->setDisabled(true);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(ui->action_Save->isEnabled()) {
        int nRet = QMessageBox::question(this, tr("Question"),
              tr("Are you sure quit and save it?"),
              QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        if(nRet == QMessageBox::Yes)
        {
            on_action_Save_triggered();
        }
        else if(nRet == QMessageBox::Cancel)
        {
            event->ignore();
            return;
        }
    }
    event->accept();
}

void MainWindow::on_action_New_triggered()
{
    if(ui->action_Save->isEnabled()) {
        QMessageBox::information(this, tr("Remid"),
                                 tr("Please save the current project before at new that"));
        return;
    }

    NewPrjDlg dlg;
    if(QDialog::Accepted == dlg.exec())
    {
        QStringList lstFiles = dlg.GetNewProjectFiles();
        if(lstFiles.count() == 3) // *.tp ; *.tpx ; *.js
        {
            QFileInfo info(lstFiles.at(0));
            QDir dir(info.absolutePath());
            if(dir.exists()) {
                if(QMessageBox::No == QMessageBox::question(this, tr("Question"),
                                                         info.completeBaseName()
                                      + tr(" was exist, are you replace it?")))
                    return;
            }
            else {
                dir.mkpath(info.absolutePath());
            }

            foreach(QString strFile, lstFiles)
            {
                QFile file(strFile);
                if(!file.open(QIODevice::WriteOnly)) {
                    QMessageBox::warning(this, tr("Warning"), file.errorString());
                    return;
                }
                QVariantMap vmData;
                vmData.insert("Name", info.completeBaseName());
                vmData.insert("Desc", tr("Please deleted it before at edit"));
                file.write(QJsonDocument::fromVariant(vmData).toJson());
                file.close();
            }

            OpenProjectFile(lstFiles.at(0));
        }
    }
}

void MainWindow::on_action_Help_triggered()
{
    QDesktopServices::openUrl(QUrl("https://blog.csdn.net/vivasoft/column/info/31202"));
}
