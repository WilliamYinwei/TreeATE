///
/// @project       TreeATE
/// @brief         Property manager for different model
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#include "tapropertymgr.h"
#include "tascriptedit.h"
#include "Qsci/qsciapis.h"

#include <QVBoxLayout>
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

TAPropertyMgrWidget::TAPropertyMgrWidget(QWidget *parent): QDockWidget("Property", parent)
{
    QWidget* pContents = new QWidget(this);
    this->setWidget(pContents);
    pContents->setContentsMargins(0, 0, 0, 0);
    QVBoxLayout* verticalLayout_pro = new QVBoxLayout(pContents);
    verticalLayout_pro->setContentsMargins(0, 0, 0, 0);

    m_lvFunction = new QListWidget(pContents);
    verticalLayout_pro->addWidget(m_lvFunction);    
    m_lvFunction->hide();

    m_splitter = new QSplitter(Qt::Vertical, pContents);
    m_tmPublicPara = new QStandardItemModel();
    m_tmPublicPara->setColumnCount(3);
    m_tmPublicPara->setHeaderData(0, Qt::Horizontal, tr("Parameter name"));
    m_tmPublicPara->setHeaderData(1, Qt::Horizontal, tr("Value"));
    m_tmPublicPara->setHeaderData(2, Qt::Horizontal, tr("Description"));

    m_tmModels = new QStandardItemModel();
    m_tmModels->setColumnCount(2);
    m_tmModels->setHeaderData(0, Qt::Horizontal, tr("Object"));
    m_tmModels->setHeaderData(1, Qt::Horizontal, tr("Component name"));

    m_tvModels = new QTableView(m_splitter);
    m_tvModels->setModel(m_tmModels);
    m_tvPublicPara = new QTableView(m_splitter);
    m_tvPublicPara->setModel(m_tmPublicPara);
    connect(m_tmPublicPara, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)),
            this, SLOT(MyDataChanged()));
    verticalLayout_pro->addWidget(m_splitter);

    m_labelImage = new QLabel(pContents);
    m_labelImage->hide();
    m_labelImage->setAlignment(Qt::AlignCenter);
    verticalLayout_pro->addWidget(m_labelImage);

    m_scriptEdit = new TaScriptEdit(pContents);
    m_scriptEdit->SetShow(false);
    verticalLayout_pro->addWidget((QWidget*)m_scriptEdit->GetScriptEdit());
    connect(m_scriptEdit->GetScriptEdit(), SIGNAL(textChanged()), this, SLOT(MyDataChanged()));
}

void TAPropertyMgrWidget::SetPublicPara(const QVariantList& vlPara)
{
    for(int i = 0; i < vlPara.count(); i++) {
        QVariantMap vmPara = vlPara.at(i).toMap();
        m_tmPublicPara->setItem(i, 0, new QStandardItem(vmPara["Name"].toString()));
        m_tmPublicPara->setItem(i, 1, new QStandardItem(vmPara["Value"].toString()));
        m_tmPublicPara->setItem(i, 2, new QStandardItem(vmPara["Desc"].toString()));
    }
}

QVariantList TAPropertyMgrWidget::GetPublicPara()
{
    QVariantList vl;
    for(int i = 0; i < m_tmPublicPara->rowCount(); i++)
    {
        QVariantMap vm;
        QStandardItem *item = m_tmPublicPara->item(i, 0);
        if(item) {
            vm.insert("Name", item->text());
        }
        item = m_tmPublicPara->item(i, 1);
        if(item) {
            vm.insert("Value", item->text());
        }
        item = m_tmPublicPara->item(i, 2);
        if(item) {
            vm.insert("Desc", item->text());
        }
        vl.append(vm);
    }

    return vl;
}

void TAPropertyMgrWidget::SetProjectPath(const QString& strPrjPath)
{
    m_strPrjPath = strPrjPath + "/";
}

void TAPropertyMgrWidget::SetCurrentView(const QString& strFileName)
{
    m_strCurrName = strFileName;
    QFileInfo infoFile(m_strCurrName);
    QString strSuffix = infoFile.completeSuffix();
    strSuffix = strSuffix.toLower();

    if(strSuffix == "dll") {
        m_lvFunction->show();
        m_splitter->hide();
        m_labelImage->hide();
        m_scriptEdit->SetShow(false);

        if(!OpenDllModel(m_strCurrName)) {
            m_lvFunction->hide();
            m_splitter->hide();
            m_labelImage->show();
            m_labelImage->setText(tr("Maybe is GUI Plugin, please view with TreeATE"));
            m_scriptEdit->SetShow(false);
        }
    }
    else if(strSuffix == "jpg" || strSuffix == "png" || strSuffix == "gif") {
        m_lvFunction->hide();
        m_splitter->hide();
        m_labelImage->show();
        m_scriptEdit->SetShow(false);

        QMovie *movie = new QMovie(m_strCurrName);
        m_labelImage->setMovie(movie);
        movie->start();
    }
    else if(strSuffix == "tp")
    {
        m_lvFunction->hide();
        m_splitter->show();
        m_labelImage->hide();
        m_scriptEdit->SetShow(false);
    }
    else if(strSuffix == "ts")
    {
        m_lvFunction->hide();
        m_splitter->hide();
        m_labelImage->hide();
        m_scriptEdit->SetShow(true);

        OpenScriptFile(m_strCurrName);
    }
    else {
        m_lvFunction->hide();
        m_splitter->hide();
        m_labelImage->show();
        m_labelImage->setText(tr("Please view with other"));
        m_scriptEdit->SetShow(false);
    }
}

void TAPropertyMgrWidget::SetModels(const QVariantList& vlModels)
{
    for(int i = 0; i < vlModels.count(); i++) {
        QVariantMap vmPara = vlModels.at(i).toMap();
        m_tmModels->setItem(i, 0, new QStandardItem(vmPara["Obj"].toString()));
        m_tmModels->setItem(i, 1, new QStandardItem(vmPara["Com"].toString()));
    }
}

QVariantList TAPropertyMgrWidget::GetModels()
{
    QVariantList vlModels;
    return vlModels;
}

typedef void* (*CreateInst)(const char*);

QStringList TAPropertyMgrWidget::OpenDllFunc(const QString& strFile, bool bRet)
{
    QStringList lstFunc;
    QLibrary myLib(strFile);
    if(!myLib.load()) {
        QMessageBox::warning(this, tr("Warning"), tr("Failed to load the ") + strFile);
        return lstFunc;
    }

    CreateInst myFunction = (CreateInst) myLib.resolve("CreateDeviceInst");
    if (NULL == myFunction)
    {
        QMessageBox::warning(this, tr("Warning"), tr("Failed to resolve the ") + strFile);
        return lstFunc;
    }

    QObject* pObj = (QObject*)myFunction("");
    if(NULL == pObj)
    {
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

bool TAPropertyMgrWidget::SaveData()
{
    m_bIsChanged = false;
    return true;
}

bool TAPropertyMgrWidget::IsChanged()
{
    return m_bIsChanged;
}

void TAPropertyMgrWidget::MyDataChanged()
{
    m_bIsChanged = true;
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
