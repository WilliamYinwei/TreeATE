///
/// @brief         Timeout Dialog
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///


#include "msgboxdlg.h"
#include "ui_msgboxdlg.h"

#include <QTimer>
#include <QMovie>
#include <QFile>
#include <QThread>

MsgBoxDlg::MsgBoxDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MsgBoxDlg)
{
    ui->setupUi(this);

    m_timer = new QTimer(this);
    m_pThreadTimer = new QThread();
    connect(m_timer, SIGNAL(timeout()), this, SLOT(on_TimeOut()));
    this->moveToThread(m_pThreadTimer);
    m_pThreadTimer->start();
    ui->label_Pic->hide();
    setWindowFlags(windowFlags()|Qt::WindowTitleHint);
    ui->lineEdit->hide();
    ui->lineEdit->setText("");
    m_movie = NULL;
}

MsgBoxDlg::~MsgBoxDlg()
{
    if(m_pThreadTimer)
    {
        m_pThreadTimer->quit();
        m_pThreadTimer->wait();
        delete m_pThreadTimer;
    }
    if(m_timer)
    {
        delete m_timer;
    }

    if(m_movie)
    {
        m_movie->stop();
        ui->label_Pic->setMovie(NULL);
        delete m_movie;
    }

    delete ui;
}

void MsgBoxDlg::on_TimeOut()
{
    if(m_totalTime > 0)
    {
        m_totalTime--;
        ui->lcdNumber->display(m_totalTime);
    }
    else
    {
        if(m_type == 1 || m_type == 2) // is OK and NA button dialog
        {
            accept();
        }
        else    // 0/3 is Cancel | OK and Input Dialog
        {
            close();
        }
    }
}

QString MsgBoxDlg::GetRetValue()
{
    return m_strRetValue;
}

void MsgBoxDlg::on_pushButton_OK_clicked()
{
    m_strRetValue = ui->lineEdit->text();
    accept();
}

void MsgBoxDlg::on_pushButton_Cancel_clicked()
{
    reject();
}

void MsgBoxDlg::SetShowData(const QString& strPathPic, const QString& strMsg, int nType, int sec)
{
    m_type = nType;
    ui->label_info->setText(strMsg);
    m_totalTime = sec;
    ui->lcdNumber->display(m_totalTime);
    m_timer->start(1000);

    QFile f(strPathPic);
    if(f.exists())
    {
        if(m_movie != NULL) {
            m_movie->stop();
            ui->label_Pic->setMovie(NULL);
            delete m_movie;
            m_movie = NULL;
        }
        m_movie = new QMovie(strPathPic, QByteArray(), this);
        ui->label_Pic->setMovie(m_movie);
        m_movie->start();
        ui->label_Pic->show();
    }

    if(nType == 1)
    { // only ok
        ui->pushButton_Cancel->hide();
    }
    else if(nType == 2)
    {
        ui->pushButton_OK->hide();
        ui->pushButton_Cancel->hide();
    }
    else if(nType == 3)
    {
        ui->lineEdit->show();
        ui->lineEdit->setFocus();
    }
}
