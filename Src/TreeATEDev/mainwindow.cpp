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

    QSplitter* splitterRight = new QSplitter(Qt::Vertical, ui->dockWidgetContents_model);
    m_tvModels = new QTableView(splitterRight);
    m_tvModels->setMinimumWidth(200);
    m_lvFunction = new QListView(splitterRight);

    ui->horizontalLayout_model->addWidget(splitterRight);
    tabifyDockWidget(ui->dockWidget_pro, ui->dockWidget_model);
    splitterMain->setStretchFactor(0, 6);
    splitterMain->setStretchFactor(1, 4);

    splitterRight->setStretchFactor(0, 3);
    splitterRight->setStretchFactor(1, 7);

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

void MainWindow::on_action_Open_triggered()
{
    QString fileName =
        QFileDialog::getOpenFileName(this, tr("Open project file"), "",  tr("Test Project(*.tp)"));
    if(fileName.isEmpty())
        return;

    QFile prjFile(fileName);

    if(!prjFile.open(QIODevice::ReadOnly)) {
        QString errStr = prjFile.errorString() + ": " + fileName;
        QMessageBox::warning(this, tr("Warning"), errStr);
        return;
    }

    QJsonParseError jsErr;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(prjFile.readAll(), &jsErr);
    prjFile.close();

    m_pUnitModel->SetPrjData(jsonDoc.toVariant());    
    m_tvTestItems->expandAll();


    QFileInfo fileInfo(fileName);
    QString strScriptFile = fileInfo.absolutePath() + "/" + fileInfo.completeBaseName() + ".tsx";
    QFile scrFile(strScriptFile);

    if(!scrFile.open(QIODevice::ReadOnly)) {
        QString errStr = scrFile.errorString() + ": " + strScriptFile;
        QMessageBox::warning(this, tr("Warning"), errStr);
        return;
    }
    m_scriptEdit->SetScriptData(scrFile.readAll());
    scrFile.close();
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
