///
/// @project       TreeATE
/// @brief         Test Project Configure (TPX) file Widget
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "taprjcfgwidget.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QSpinBox>
#include <QGridLayout>
#include <QStandardItemModel>
#include <QFile>
#include <QMessageBox>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QFileInfo>

TAPrjCfgWidget::TAPrjCfgWidget(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout* verticalLayout = new QVBoxLayout(this);
    QGridLayout* gridLayout = new QGridLayout(this);
    QLabel* labelName = new QLabel(tr("Project Name:"), this);
    QLabel* labelDesc = new QLabel(tr("Description:"), this);
    QLabel* labelSNRegEx = new QLabel(tr("Regex of the barcode:"), this);
    QLabel* labelLoop = new QLabel(tr("Loop counts:"), this);
    m_editName = new QLineEdit(this);
    m_editDesc = new QLineEdit(this);
    m_editRegex = new QLineEdit(this);
    m_spinBoxCnt = new QSpinBox(this);
    m_stopCurrentChk = new QCheckBox(this);
    m_stopLoopChk = new QCheckBox(this);
    connect(m_editName, SIGNAL(textChanged(QString)), this, SLOT(on_dataHasChanged()));
    connect(m_editDesc, SIGNAL(textChanged(QString)), this, SLOT(on_dataHasChanged()));
    connect(m_editRegex, SIGNAL(textChanged(QString)), this, SLOT(on_dataHasChanged()));
    connect(m_spinBoxCnt, SIGNAL(valueChanged(int)), this, SLOT(on_dataHasChanged()));
    connect(m_stopCurrentChk, SIGNAL(stateChanged(int)), this, SLOT(on_dataHasChanged()));
    connect(m_stopLoopChk, SIGNAL(stateChanged(int)), this, SLOT(on_dataHasChanged()));

    m_spinBoxCnt->setMinimum(1);
    m_spinBoxCnt->setMaximum(999999);
    m_stopCurrentChk->setText(tr("Stop the current testing when it's failed"));
    m_stopLoopChk->setText(tr("Stop the loop testing when it's failed"));

    gridLayout->addWidget(labelName, 0, 0);
    gridLayout->addWidget(labelDesc, 1, 0);
    gridLayout->addWidget(labelSNRegEx, 2, 0);
    gridLayout->addWidget(labelLoop, 3, 0);
    gridLayout->addWidget(m_editName, 0, 1);
    gridLayout->addWidget(m_editDesc, 1, 1);
    gridLayout->addWidget(m_editRegex, 2, 1);
    gridLayout->addWidget(m_spinBoxCnt, 3, 1);

    verticalLayout->addLayout(gridLayout);
    verticalLayout->addWidget(m_stopCurrentChk);
    verticalLayout->addWidget(m_stopLoopChk);

    m_guiPluginModel = new QStandardItemModel();
    m_prjInstModel = new QStandardItemModel();

    m_guiPluginModel->setColumnCount(2);
    m_guiPluginModel->setHeaderData(0, Qt::Horizontal, tr("Name"));
    m_guiPluginModel->setHeaderData(1, Qt::Horizontal, tr("Lib (*.dll)"));
    connect(m_guiPluginModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this,
            SLOT(on_dataHasChanged()));
    connect(m_guiPluginModel, SIGNAL(rowsRemoved(QModelIndex,int,int)), this,
            SLOT(on_dataHasChanged()));
    connect(m_guiPluginModel, SIGNAL(rowsInserted(QModelIndex,int,int)), this,
            SLOT(on_dataHasChanged()));

    m_prjInstModel->setColumnCount(2);
    m_prjInstModel->setHeaderData(0, Qt::Horizontal, tr("Name"));
    m_prjInstModel->setHeaderData(1, Qt::Horizontal, tr("File (*.tp)"));
    connect(m_prjInstModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this,
            SLOT(on_dataHasChanged()));
    connect(m_prjInstModel, SIGNAL(rowsRemoved(QModelIndex,int,int)), this,
            SLOT(on_dataHasChanged()));
    connect(m_prjInstModel, SIGNAL(rowsInserted(QModelIndex,int,int)), this,
            SLOT(on_dataHasChanged()));
}

TAPrjCfgWidget::~TAPrjCfgWidget()
{
    if(m_guiPluginModel) {
        delete m_guiPluginModel;
    }
    if(m_prjInstModel) {
        delete m_prjInstModel;
    }
}

void TAPrjCfgWidget::on_dataHasChanged()
{
    emit dataHasChanged();
}

bool TAPrjCfgWidget::OpenPrjCfgFile(const QString& strFile)
{
    QFile prjFile(strFile);

    if(!prjFile.open(QIODevice::ReadOnly)) {
        QString errStr = prjFile.errorString() + ": " + strFile;
        QMessageBox::warning(this, tr("Warning"), errStr);
        return false;
    }

    m_strFileName = strFile;

    QJsonParseError jsErr;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(prjFile.readAll(), &jsErr);
    prjFile.close();

    m_vmPrjCfg = jsonDoc.toVariant().toMap();

    m_editName->setText(m_vmPrjCfg["Name"].toString());
    m_editDesc->setText(m_vmPrjCfg["Desc"].toString());
    m_editRegex->setText(m_vmPrjCfg["BarCodeReg"].toString());
    m_spinBoxCnt->setValue(m_vmPrjCfg["LoopCount"].toInt());

    m_stopCurrentChk->setChecked(m_vmPrjCfg["failedToStop"].toBool());
    m_stopLoopChk->setChecked(m_vmPrjCfg["stoppedForLoop"].toBool());

    // gui plugins
    QVariantList vlPara = m_vmPrjCfg["GUIPlugins"].toList();
    for(int i = 0; i < vlPara.count(); i++) {
        QVariantMap vmPara = vlPara.at(i).toMap();
        m_guiPluginModel->setItem(i, 0, new QStandardItem(vmPara["Name"].toString()));
        m_guiPluginModel->setItem(i, 1, new QStandardItem(vmPara["Com"].toString()));
    }

    // project instance
    vlPara = m_vmPrjCfg["Instance"].toList();
    for(int i = 0; i < vlPara.count(); i++) {
        QVariantMap vmPara = vlPara.at(i).toMap();
        m_prjInstModel->setItem(i, 0, new QStandardItem(vmPara["Name"].toString()));
        m_prjInstModel->setItem(i, 1, new QStandardItem(vmPara["File"].toString()));
    }

    return true;
}

bool TAPrjCfgWidget::SavePrjCfgFile()
{
    // project instance
    QVariantList vlInst;
    for(int i = 0; i < m_prjInstModel->rowCount(); i++) {
        QVariantMap vmInst;
        QStandardItem* item = m_prjInstModel->item(i, 0);
        if(item) {
            vmInst.insert("Name", item->text());
        }

        item = m_prjInstModel->item(i, 1);
        if(item) {
            vmInst.insert("File", item->text());            
            // from tp file
            QVariantList vl = CopyPublicPara(item->text());
            if(!vl.isEmpty()) {
                vmInst.insert("Parameter", vl);
            }
        }

        vlInst.append(vmInst);
    }

    m_vmPrjCfg.insert("Instance", vlInst);

    // gui plugins
    QVariantList vlPlugins;
    for(int i = 0; i < m_guiPluginModel->rowCount(); i++) {
        QVariantMap vmInst;
        QStandardItem* item = m_guiPluginModel->item(i, 0);
        if(item) {
            vmInst.insert("Name", item->text());
        }

        item = m_guiPluginModel->item(i, 1);
        if(item) {
            vmInst.insert("Com", item->text());
        }

        vlPlugins.append(vmInst);
    }
    m_vmPrjCfg.insert("GUIPlugins", vlPlugins);

    m_vmPrjCfg.insert("Name", m_editName->text());
    m_vmPrjCfg.insert("Desc", m_editDesc->text());
    m_vmPrjCfg.insert("BarCodeReg", m_editRegex->text());
    m_vmPrjCfg.insert("LoopCount", m_spinBoxCnt->value());

    m_vmPrjCfg.insert("failedToStop", m_stopCurrentChk->isChecked());
    m_vmPrjCfg.insert("stoppedForLoop", m_stopLoopChk->isChecked());

    QFile prjFile(m_strFileName);
    if(!prjFile.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, tr("Warning"), prjFile.errorString());
        return false;
    }

    prjFile.write(QJsonDocument::fromVariant(m_vmPrjCfg).toJson());
    prjFile.close();

    return true;
}

QVariantList TAPrjCfgWidget::CopyPublicPara(const QString& strTPFileName)
{
    QVariantList vlPara;
    QFileInfo finfo(m_strFileName);
    QString strTPFile = finfo.absolutePath() + "/" + strTPFileName;

    QFile prjFile(strTPFile);

    if(!prjFile.open(QIODevice::ReadOnly)) {
        QString errStr = prjFile.errorString() + ": " + strTPFile;
        QMessageBox::warning(this, tr("Warning"), errStr);
        return vlPara;
    }

    QJsonParseError jsErr;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(prjFile.readAll(), &jsErr);
    prjFile.close();

    QVariant vaPrj = jsonDoc.toVariant();
    QVariantMap vmPrj = vaPrj.toMap();
    QVariantMap vmPublic = vmPrj["Public"].toMap();
    return vmPublic["Parameter"].toList();
}

QAbstractItemModel* TAPrjCfgWidget::GetPluginModel()
{
    return m_guiPluginModel;
}

QAbstractItemModel *TAPrjCfgWidget::GetPrjInstModel()
{
    return m_prjInstModel;
}
