///
/// @project       TreeATE Dev
/// @brief         Property manager for different model
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "tapropertymgr.h"
#include "tascriptedit.h"
#include "taprjcfgwidget.h"
#include "Qsci/qsciapis.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListWidget>
#include <QStandardItemModel>
#include <QTableView>
#include <QDockWidget>
#include <QFileInfo>
#include <QLabel>
#include <QMessageBox>
#include <QMovie>
#include <QLineEdit>
#include <QLibrary>
#include <QMetaObject>
#include <QMetaMethod>
#include <QMetaType>
#include <QSplitter>
#include <QMenu>
#include <QCheckBox>
#include <QPushButton>
#include <QGridLayout>

class TASizeWidget : public QWidget
{
public:
    TASizeWidget(QWidget* parent) : QWidget(parent) {

    }

    QSize sizeHint() const
    {
        return QSize(500, 600);
    }
};

TAPropertyMgrWidget::TAPropertyMgrWidget(QWidget *parent): QDockWidget("Property", parent)
{
    m_moveImage = NULL;
    QWidget* pContents = new TASizeWidget(this);
    this->setWidget(pContents);
    pContents->setContentsMargins(0, 0, 0, 0);
    QVBoxLayout* verticalLayout_pro = new QVBoxLayout(pContents);
    verticalLayout_pro->setContentsMargins(0, 0, 0, 0);

    // project version
    QGridLayout* gridLayout = new QGridLayout(pContents);
    gridLayout->setContentsMargins(6, 6, 6, 0);
    QLabel* labelVer = new QLabel(tr("Project Version: "), pContents);
    m_leVersion = new QLineEdit(pContents);
    gridLayout->addWidget(labelVer, 0, 0);
    gridLayout->addWidget(m_leVersion, 0, 1);
    verticalLayout_pro->addLayout(gridLayout);
    connect(m_leVersion, SIGNAL(textChanged(QString)), this, SLOT(on_propertyIsChanged()));

    // project config view
    m_prjCfgWidget = new TAPrjCfgWidget(pContents);
    verticalLayout_pro->addWidget(m_prjCfgWidget);
    m_prjCfgWidget->hide();
    connect(m_prjCfgWidget, SIGNAL(dataHasChanged()), this, SLOT(on_propertyIsChanged()));

    m_lvFunction = new QListWidget(pContents);
    verticalLayout_pro->addWidget(m_lvFunction);    
    m_lvFunction->hide();    

    m_splitter = new QSplitter(Qt::Vertical, pContents);
    m_tmPublicPara = new QStandardItemModel();
    m_tmPublicPara->setColumnCount(3);
    m_tmPublicPara->setHeaderData(0, Qt::Horizontal, tr("Parameter name"));
    m_tmPublicPara->setHeaderData(1, Qt::Horizontal, tr("Value"));
    m_tmPublicPara->setHeaderData(2, Qt::Horizontal, tr("Description"));
    connect(m_tmPublicPara, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this,
            SLOT(on_propertyIsChanged()));
    connect(m_tmPublicPara, SIGNAL(rowsRemoved(QModelIndex,int,int)), this,
            SLOT(on_propertyIsChanged()));
    connect(m_tmPublicPara, SIGNAL(rowsInserted(QModelIndex,int,int)), this,
            SLOT(on_propertyIsChanged()));

    m_tmModels = new QStandardItemModel();
    m_tmModels->setColumnCount(2);
    m_tmModels->setHeaderData(0, Qt::Horizontal, tr("Object"));
    m_tmModels->setHeaderData(1, Qt::Horizontal, tr("Library file name"));
    connect(m_tmModels, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this,
            SLOT(on_propertyIsChanged()));
    connect(m_tmModels, SIGNAL(rowsRemoved(QModelIndex,int,int)), this,
            SLOT(on_propertyIsChanged()));
    connect(m_tmModels, SIGNAL(rowsInserted(QModelIndex,int,int)), this,
            SLOT(on_propertyIsChanged()));

    m_tvModels = new QTableView(m_splitter);
    m_tvModels->setModel(m_tmModels);
    m_tvModels->setContextMenuPolicy(Qt::CustomContextMenu);
    m_tvPublicPara = new QTableView(m_splitter);
    m_tvPublicPara->setModel(m_tmPublicPara);
    m_tvPublicPara->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(m_tvModels, SIGNAL(customContextMenuRequested(QPoint)), this,
            SLOT(on_models_customContextMenuRequested(QPoint)));
    connect(m_tvPublicPara, SIGNAL(customContextMenuRequested(QPoint)), this,
            SLOT(on_parameter_customContextMenuRequested(QPoint)));
    verticalLayout_pro->addWidget(m_splitter);

    m_popMenuModel = new QMenu(this);
    m_actionModelInsert = m_popMenuModel->addAction(QIcon(":/add.png"), "Insert");
    m_actionModelRemove = m_popMenuModel->addAction(QIcon(":/minus.png"),"Remove");
    m_popMenuPara = new QMenu(this);
    m_actionParaInsert = m_popMenuPara->addAction(QIcon(":/add.png"),"Insert");
    m_actionParaRemove = m_popMenuPara->addAction(QIcon(":/minus.png"),"Remove");
    connect(m_actionModelInsert, SIGNAL(triggered(bool)), this, SLOT(on_actionModel_Insert_clicked()));
    connect(m_actionModelRemove, SIGNAL(triggered(bool)), this, SLOT(on_actionModel_Remove_clicked()));
    connect(m_actionParaInsert, SIGNAL(triggered(bool)), this, SLOT(on_actionPara_Insert_clicked()));
    connect(m_actionParaRemove, SIGNAL(triggered(bool)), this, SLOT(on_actionPara_Remove_clicked()));
    connect(m_popMenuModel, SIGNAL(aboutToShow()), this, SLOT(on_popMenuModel_Show()));
    connect(m_popMenuPara, SIGNAL(aboutToShow()), this, SLOT(on_popMenuPara_Show()));

    m_labelImage = new QLabel(pContents);
    m_labelImage->hide();
    m_labelImage->setAlignment(Qt::AlignCenter);
    verticalLayout_pro->addWidget(m_labelImage);

    m_scriptEdit = new TaScriptEdit(pContents);    
    m_scriptEdit->SetShow(false);
    m_scriptEdit->GetScriptEdit()->setReadOnly(true);

    QHBoxLayout* hboxLayout = new QHBoxLayout(pContents);
    hboxLayout->setContentsMargins(6, 6, 6, 0);
    m_cbOpenEdit = new QCheckBox(pContents);
    m_cbOpenEdit->setText(tr("&Allow edit"));
    m_cbOpenEdit->hide();
    m_saveButton = new QPushButton(pContents);
    m_saveButton->setText(tr("&Save"));
    m_saveButton->setIcon(QIcon(":/save.png"));
    m_saveButton->hide();
    m_saveButton->setEnabled(false);
    hboxLayout->addWidget(m_cbOpenEdit);
    hboxLayout->addStretch();
    hboxLayout->addWidget(m_saveButton);
    verticalLayout_pro->addLayout(hboxLayout);
    verticalLayout_pro->addWidget((QWidget*)m_scriptEdit->GetScriptEdit());
    connect(m_scriptEdit->GetScriptEdit(), SIGNAL(textChanged()), this, SLOT(MyDataChanged()));
    connect(m_cbOpenEdit, SIGNAL(clicked(bool)), this, SLOT(on_checkBox_allowEdit(bool)));
    connect(m_saveButton, SIGNAL(clicked(bool)), this, SLOT(on_saveButton_clicked(bool)));
}

TAPropertyMgrWidget::~TAPropertyMgrWidget()
{
    if(m_moveImage) {
        m_moveImage->stop();
        delete m_moveImage;
    }

    if(m_tmPublicPara) {
        delete m_tmPublicPara;
    }

    if(m_tmModels) {
        delete m_tmModels;
    }
}

void TAPropertyMgrWidget::SetPublicPara(const QVariantList& vlPara)
{
    m_tmPublicPara->removeRows(0, m_tmPublicPara->rowCount());
    for(int i = 0; i < vlPara.count(); i++) {
        QVariantMap vmPara = vlPara.at(i).toMap();
        m_tmPublicPara->setItem(i, 0, new QStandardItem(vmPara["Name"].toString()));
        m_tmPublicPara->setItem(i, 1, new QStandardItem(vmPara["Value"].toString()));
        m_tmPublicPara->setItem(i, 2, new QStandardItem(vmPara["Desc"].toString()));
    }

    for (int column = 0; column < m_tmPublicPara->columnCount(); ++column)
        m_tvPublicPara->resizeColumnToContents(column);
}

QVariantList TAPropertyMgrWidget::GetPublicPara()
{
    QVariantList vl;
    for(int i = 0; i < m_tmPublicPara->rowCount(); i++)
    {
        QVariantMap vm;
        QStandardItem *item = m_tmPublicPara->item(i, 0);
        if(item && !item->text().isEmpty()) {
            vm.insert("Name", item->text());
        }
        item = m_tmPublicPara->item(i, 1);
        if(item && !item->text().isEmpty()) {
            vm.insert("Value", item->text());
        }
        item = m_tmPublicPara->item(i, 2);
        if(item && !item->text().isEmpty()) {
            vm.insert("Desc", item->text());
        }
        vl.append(vm);
    }

    return vl;
}

void TAPropertyMgrWidget::SetProjectPath(const QString& strPrjPath)
{
    QFileInfo fileInfo(strPrjPath);
    m_strPrjPath = fileInfo.absolutePath() + "/";
    m_strPrjName = fileInfo.completeBaseName();

    OpenPrjCfgFile(strPrjPath);
}

void TAPropertyMgrWidget::SetCurrentView(const QString& strFileName)
{
    // need to save before at the view other item
    if(m_saveButton->isEnabled()) {
        QMessageBox::information(this, tr("Information"),
                                 tr("Need to save the test script before at the view other file."));
        return;
    }

    if(m_moveImage) {
        m_moveImage->stop();
        delete m_moveImage;
        m_moveImage = NULL;
    }

    m_strCurrName = strFileName;
    QFileInfo infoFile(m_strCurrName);
    QString strSuffix = infoFile.completeSuffix();
    strSuffix = strSuffix.toLower();

    if(strSuffix == "dll") {
        m_lvFunction->show();
        m_splitter->hide();
        m_labelImage->hide();
        m_scriptEdit->SetShow(false);
        m_prjCfgWidget->hide();

        if(!OpenDllModel(m_strCurrName)) {
            m_lvFunction->hide();
            m_splitter->hide();
            m_labelImage->show();
            m_labelImage->setText(tr("Maybe is GUI Plugin, please view with TreeATE"));
            m_scriptEdit->SetShow(false);
        }
        m_cbOpenEdit->hide();
        m_saveButton->hide();
    }
    else if(strSuffix == "jpg" || strSuffix == "png" || strSuffix == "gif") {
        m_lvFunction->hide();
        m_splitter->hide();
        m_labelImage->show();
        m_scriptEdit->SetShow(false);
        m_cbOpenEdit->hide();
        m_saveButton->hide();
        m_prjCfgWidget->hide();

        m_moveImage = new QMovie(m_strCurrName);
        m_labelImage->setMovie(m_moveImage);
        m_moveImage->start();
    }
    else if(strSuffix == "tp" || strSuffix == "tpx")
    {
        m_lvFunction->hide();
        m_splitter->show();
        m_labelImage->hide();
        m_scriptEdit->SetShow(false);
        m_cbOpenEdit->hide();
        m_saveButton->hide();

        QAbstractItemModel* modelObj = NULL;
        QAbstractItemModel* modelPara = NULL;
        if(strSuffix == "tpx") {
            m_prjCfgWidget->show();
            modelObj = m_prjCfgWidget->GetPluginModel();
            modelPara = m_prjCfgWidget->GetPrjInstModel();
        }
        else {
            m_prjCfgWidget->hide();
            modelObj = (QAbstractItemModel*)m_tmModels;
            modelPara = (QAbstractItemModel*)m_tmPublicPara;
        }

        m_tvModels->blockSignals(true);
        m_tvModels->setModel(modelObj);
        m_tvModels->blockSignals(false);

        for (int column = 0; column < modelObj->columnCount(); ++column)
            m_tvModels->resizeColumnToContents(column);

        m_tvPublicPara->blockSignals(true);
        m_tvPublicPara->setModel(modelPara);
        m_tvPublicPara->blockSignals(false);
        for (int column = 0; column < modelPara->columnCount(); ++column)
            m_tvPublicPara->resizeColumnToContents(column);
    }
    else if((strSuffix == "js" || strSuffix == "py")&&
            0 != infoFile.completeBaseName().compare(m_strPrjName, Qt::CaseInsensitive))
    {
        m_lvFunction->hide();
        m_splitter->hide();
        m_labelImage->hide();
        m_scriptEdit->SetShow(true);
        m_scriptEdit->SwitchLang(strSuffix);
        m_cbOpenEdit->show();
        m_saveButton->show();
        m_prjCfgWidget->hide();

        OpenScriptFile(m_strCurrName);
    }
    else {
        m_lvFunction->hide();
        m_splitter->hide();
        m_labelImage->show();
        m_labelImage->setText(tr("Please view with other"));
        m_scriptEdit->SetShow(false);
        m_cbOpenEdit->hide();
        m_saveButton->hide();
        m_prjCfgWidget->hide();
    }
}

void TAPropertyMgrWidget::RenameFilePrj(const QString& strNewName)
{
    if(m_prjCfgWidget) {
        m_prjCfgWidget->RenameFilePrj(strNewName);
    }
}

QString TAPropertyMgrWidget::GetPrjName()
{
    if(m_prjCfgWidget) {
        return m_prjCfgWidget->GetDefaultPrjName();
    }
    return m_strPrjName;
}

void TAPropertyMgrWidget::SetModels(const QVariantList& vlModels)
{
    m_tmModels->removeRows(0, m_tmModels->rowCount());
    for(int i = 0; i < vlModels.count(); i++) {
        QVariantMap vmPara = vlModels.at(i).toMap();
        m_tmModels->setItem(i, 0, new QStandardItem(vmPara["Obj"].toString()));
        m_tmModels->setItem(i, 1, new QStandardItem(vmPara["Com"].toString()));
    }

    for (int column = 0; column < m_tmModels->columnCount(); ++column)
        m_tvModels->resizeColumnToContents(column);
}

QVariantList TAPropertyMgrWidget::GetModels()
{
    QVariantList vlModels;
    for(int i = 0; i < m_tmModels->rowCount(); i++)
    {
        QVariantMap vm;
        QStandardItem *item = m_tmModels->item(i, 0);
        if(item && !item->text().isEmpty()) {
            vm.insert("Obj", item->text());
        }
        item = m_tmModels->item(i, 1);
        if(item && !item->text().isEmpty()) {
            vm.insert("Com", item->text());
        }
        vlModels.append(vm);
    }

    return vlModels;
}

typedef void* (*CreateInst)(const char*);

QStringList TAPropertyMgrWidget::OpenDllFunc(const QString& strFile, bool bRet)
{
    QStringList lstFunc;
    QLibrary myLib(strFile);
    if(!myLib.load()) {
        QMessageBox::warning(this, tr("Warning"), myLib.errorString());
        return lstFunc;
    }

    CreateInst myFunction = (CreateInst) myLib.resolve("CreateDeviceInst");
    if (NULL == myFunction)
    {
        QMessageBox::warning(this, tr("Warning"), myLib.errorString());
        myLib.unload();
        return lstFunc;
    }

    QObject* pObj = (QObject*)myFunction("");
    if(NULL == pObj)
    {
        myLib.unload();
        QMessageBox::warning(this, tr("Warning"), tr("Failed to create the instance."));
        return lstFunc;
    }

    const QMetaObject* metaObj = pObj->metaObject();
    if(metaObj) {
        for(int i = 0; i < metaObj->methodCount(); i++)
        {
            QMetaMethod method = metaObj->method(i);
            if(method.methodType() == QMetaMethod::Slot
                    && method.access() == QMetaMethod::Public
                    && method.name() != "deleteLater"
                    && method.name() != "_q_reregisterTimers") {
                QString strMethod;
                if(bRet)
                    strMethod = QMetaType::typeName(method.returnType()) + QString(" ");
                strMethod += method.name();
                strMethod += "(" + method.parameterNames().join(',') + ")";
                lstFunc << strMethod;
            }
        }
    }

    delete pObj;
    myLib.unload();
    return lstFunc;
}

bool TAPropertyMgrWidget::OpenDllModel(const QString& strFile)
{
    QStringList lstFunc = OpenDllFunc(strFile);

    if(lstFunc.isEmpty())
        return false;

    m_lvFunction->clear();
    for(int i = 0; i < lstFunc.count(); i++)
    {
        m_lvFunction->addItem(lstFunc.at(i));
    }

    return true;
}

void TAPropertyMgrWidget::OpenScriptFile(const QString& strFile)
{
    QFile file(strFile);
    if(!file.open(QIODevice::ReadOnly))
        return;
    m_scriptEdit->SetScriptData(file.readAll());
    file.close();
}

bool TAPropertyMgrWidget::OpenPrjCfgFile(const QString& strFile)
{
    return m_prjCfgWidget->OpenPrjCfgFile(strFile);
}

bool TAPropertyMgrWidget::SavePrjCfgFile()
{
    return m_prjCfgWidget->SavePrjCfgFile();
}

void TAPropertyMgrWidget::on_saveButton_clicked(bool bClicked)
{
    Q_UNUSED(bClicked)
    QFile file(m_strCurrName);
    if(!file.open(QIODevice::WriteOnly))
        return;
    file.write(m_scriptEdit->GetScriptEdit()->text().toUtf8());
    file.close();

    m_saveButton->setEnabled(false);
    m_cbOpenEdit->setChecked(false);
}

void TAPropertyMgrWidget::MyDataChanged()
{
    m_saveButton->setEnabled(m_cbOpenEdit->isChecked());
}

QStringList TAPropertyMgrWidget::GetAPIsFromModels()
{
    QStringList lstFunc;
    // depend result manger interface of the TestEngine
    lstFunc << "__ate"
            << "OutputRst(strName,strValue,strStand)"
            << "OutputError(strOutput)"
            << "GetProjectName()"
            << "GetProjectVer()"
            << "GetProjectBarcode()"
            << "GetProjectDesc()"
            << "GetWorkLine()"
            << "GetWorkStation()"
            << "GetUserName()";

    for(int i = 0; i < m_tmModels->rowCount(); i++)
    {
        QStandardItem* item = m_tmModels->item(i, 0);
        if(item) {
            QString strObj = item->text();
            if(!strObj.isEmpty())
                lstFunc << strObj;
        }
        item = m_tmModels->item(i, 1);
        if(item) {
            QString strFileName = item->text();
            QFileInfo info(strFileName);
            if(info.completeSuffix().compare("dll", Qt::CaseInsensitive) == 0)
            {
                lstFunc << OpenDllFunc(m_strPrjPath + "/libs/" + strFileName, false);
            }
        }
    }

    return lstFunc;
}

void TAPropertyMgrWidget::on_models_customContextMenuRequested(const QPoint&)
{
    if(m_popMenuModel) {
        m_popMenuModel->exec(QCursor::pos());
    }
}

void TAPropertyMgrWidget::on_parameter_customContextMenuRequested(const QPoint&)
{
    if(m_popMenuPara) {
        m_popMenuPara->exec(QCursor::pos());
    }
}

void TAPropertyMgrWidget::on_actionPara_Insert_clicked()
{
    QModelIndex index = m_tvPublicPara->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvPublicPara->model();

    if (!model->insertRow(index.row()+1, index.parent()))
        return;

    for (int column = 0; column < model->columnCount(index); ++column) {
        QModelIndex child = model->index(index.row()+1, column, index.parent());
        model->setData(child, QVariant("[No data]"), Qt::EditRole);
    }
}

void TAPropertyMgrWidget::on_actionModel_Insert_clicked()
{
    QModelIndex index = m_tvModels->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvModels->model();

    if (!model->insertRow(index.row()+1, index.parent()))
        return;

    for (int column = 0; column < model->columnCount(index); ++column) {
        QModelIndex child = model->index(index.row()+1, column, index.parent());
        model->setData(child, QVariant("[No data]"), Qt::EditRole);
    }
}

void TAPropertyMgrWidget::on_actionPara_Remove_clicked()
{
    QModelIndex index = m_tvPublicPara->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvPublicPara->model();
    model->removeRow(index.row(), index.parent());
}

void TAPropertyMgrWidget::on_actionModel_Remove_clicked()
{
    QModelIndex index = m_tvModels->selectionModel()->currentIndex();
    QAbstractItemModel *model = m_tvModels->model();
    model->removeRow(index.row(), index.parent());
}

void TAPropertyMgrWidget::on_popMenuModel_Show()
{
    bool isItem = m_tvModels->selectionModel()->currentIndex().isValid();
    m_actionModelRemove->setEnabled(isItem);
}

void TAPropertyMgrWidget::on_popMenuPara_Show()
{
    bool isItem = m_tvPublicPara->selectionModel()->currentIndex().isValid();
    m_actionParaRemove->setEnabled(isItem);
}

void TAPropertyMgrWidget::on_checkBox_allowEdit(bool bChk)
{
    if(!bChk) {
        m_saveButton->setDisabled(true);
    }
    m_scriptEdit->GetScriptEdit()->setReadOnly(!bChk);
}

void TAPropertyMgrWidget::on_propertyIsChanged()
{
    emit propertyIsChanged();
}

void TAPropertyMgrWidget::SetPrjVersion(const QString& strVer)
{
    m_leVersion->setText(strVer);
}

QString TAPropertyMgrWidget::GetPrjVersion()
{
    return m_leVersion->text();
}
