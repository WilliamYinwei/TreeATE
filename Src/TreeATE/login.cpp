///
/// @brief         login the TreeATE dialog
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "login.h"
#include "ui_login.h"
#include <QTextCodec>
#include <QTimer>
#include <qmessagebox.h>

#include "talogin.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{    
    m_nSpendTime = 60; // 60 seconds
    ui->setupUi(this);
    ui->lineEdit_User->setFocus();
    m_lib.setFileName("TreeATELogin");
    m_strCancelName = ui->pushButton_Cancel->text();

    m_pTimeCancel = new QTimer(this);
    connect(m_pTimeCancel, SIGNAL(timeout()), this, SLOT(on_timeout_Cancel()));
    m_pTimeCancel->start();
    m_pTimeCancel->start(1000); // 1 second

    if(m_lib.load())
    {
        CreateInstTALogin_t fnCreate = (CreateInstTALogin_t)m_lib.resolve("CreateTALogin");
        if(fnCreate)
        {
            m_pLogin = fnCreate();
        }
    }
}

login::~login()
{
    if(m_lib.isLoaded())
    {
        if(m_pLogin)
        {
            m_pLogin->ExitLogin();
            DestroyInstTALogin_t fnDestroy = (DestroyInstTALogin_t)m_lib.resolve("DestroyTALogin");
            if(fnDestroy)
            {
                fnDestroy(m_pLogin);
                m_pLogin = NULL;
            }
        }
        m_lib.unload();
    }
    delete ui;
}

void login::on_timeout_Cancel()
{
    m_nSpendTime--;
    ui->pushButton_Cancel->setText(m_strCancelName
                                   + "(" + QString::number(m_nSpendTime) + ")");
    if(m_nSpendTime <= 0) {
        close();
    }
}

void login::SetHost(const QString& strHost)
{
    if(!strHost.isEmpty()) {
        ui->comboBox_host->addItem(strHost);
        //ui->comboBox_host->setCurrentText(strHost);
    }
}

void login::on_pushButton_Login_clicked()
{
    QString strUser = ui->lineEdit_User->text();
    QString strPwd = ui->lineEdit_Pwd->text();
    bool bOk = false;
    m_strUser = tr("");

    QString strErr(tr("Your user name and password are invalided!"));
    QString strHost = ui->comboBox_host->currentText();
    if(strHost == tr("Local"))
    {
        if(strUser == "admin" && strPwd == "123")
        {
            m_strUser = "admin";
            accept();
            bOk = true;
        }
    }
    else if(m_pLogin && m_pLogin->InitLogin(strHost)) {
        if(m_pLogin->VerifyLogin(strUser, strPwd, strErr))
        {
            m_strUser = strUser;
            accept();
            bOk = true;
        }
    }

    if(!bOk)
    {
        QMessageBox::warning(this, tr("Warning"), strErr);
        ui->lineEdit_User->clear();
        ui->lineEdit_Pwd->clear();
        ui->lineEdit_User->setFocus();
    }
}

void login::on_pushButton_Cancel_clicked()
{
    reject();
}

void login::on_lineEdit_User_returnPressed()
{
    ui->lineEdit_Pwd->setFocus();
}

void login::on_lineEdit_Pwd_textChanged(const QString &arg1)
{
    ui->pushButton_Login->setEnabled(!arg1.isEmpty());
}
