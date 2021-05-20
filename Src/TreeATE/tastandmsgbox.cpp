///
/// @brief         TreeATE Concurrent Messagebox class
/// @author        David Yin  2021-05 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTimer>
#include <QFile>
#include <QThread>
#include <QMovie>
#include <QEventLoop>
#include <QDebug>

#include "tastandmsgbox.h"

TAStandMsgBox::TAStandMsgBox(QWidget *parent) : QWidget(parent)
{
    setContentsMargins(2, 2, 2, 2);

    QVBoxLayout* pVLayout = new QVBoxLayout(this);
    pVLayout->setDirection(QBoxLayout::TopToBottom);
    pVLayout->setContentsMargins(2, 2, 2, 2);

    m_lbPic = new QLabel(this);
    pVLayout->addWidget(m_lbPic);

    m_lbInfo = new QLabel(this);
    m_lbInfo->setStyleSheet("font: 16pt \"Arial\";");
    pVLayout->addWidget(m_lbInfo);

    m_leInput = new QLineEdit(this);
    m_leInput->setStyleSheet("font: 16pt \"Arial\";");
    pVLayout->addWidget(m_leInput);

    m_pbOK = new QPushButton(this);
    m_pbOK->setText("OK");
    m_pbOK->setStyleSheet("background-color: rgb(0, 170, 0);\
                          font: 16pt \"Arial\";\
                          color: rgb(255, 255, 255);");
    pVLayout->addWidget(m_pbOK);
    m_pbCancel = new QPushButton(this);
    m_pbCancel->setText("Cancel");
    m_pbCancel->setStyleSheet("font: 16pt \"Arial\"");
    pVLayout->addWidget(m_pbCancel);
    connect(m_pbOK, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_OK_clicked()));
    connect(m_pbCancel, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_Cancel_clicked()));

    m_timer = new QTimer(this);
    m_pThreadTimer = new QThread();
    connect(m_timer, SIGNAL(timeout()), this, SLOT(on_TimeOut()));
    this->moveToThread(m_pThreadTimer);
    m_pThreadTimer->start();

    m_type = 0;
    m_movie = NULL;
    hide();
}

TAStandMsgBox::~TAStandMsgBox()
{
    if(m_lbPic) {
        delete m_lbPic;
    }
    if(m_lbInfo) {
        delete m_lbInfo;
    }
    if(m_leInput) {
        delete m_leInput;
    }
    if(m_pbOK) {
        delete m_pbOK;
    }
    if(m_pbCancel) {
        delete m_pbCancel;
    }

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
}

void TAStandMsgBox::on_TimeOut()
{
    if(m_totalTime > 0)
    {
        m_totalTime--;

        if(m_type == 1) // is OK button dialog
        {
            m_pbOK->setText("OK(" + QString::number(m_totalTime) + ")");
        }
        else if(m_type == 2) // NA button Dialog
        {
            m_pbOK->setText("Cancel(" + QString::number(m_totalTime) + ")");
        }
        else    // 0/3 is Cancel | OK and Input Dialog
        {
            m_pbCancel->setText("Cancel(" + QString::number(m_totalTime) + ")");
        }
    }
    else
    {
        if(m_type == 1 || m_type == 2) // is OK and NA button dialog
        {
            on_pushButton_OK_clicked();
        }
        else    // 0/3 is Cancel | OK and Input Dialog
        {
            on_pushButton_Cancel_clicked();
        }
    }
}

QString TAStandMsgBox::GetRetValue()
{
    return m_strRetValue;
}

void TAStandMsgBox::on_pushButton_OK_clicked()
{
    QString strValue = m_leInput->text();
    if(!strValue.isEmpty()) {
        m_strRetValue = strValue;
    }
    else {
        m_strRetValue = "OK";
    }
    emit finishedWindow();
    hide();
}

void TAStandMsgBox::on_pushButton_Cancel_clicked()
{
    m_strRetValue = "Cancel";
    emit finishedWindow();
    hide();
}

bool TAStandMsgBox::CloseDialog()
{
    if(!isHidden()) {
        QEventLoop eloop;
        connect(this, SIGNAL(finishedWindow()), &eloop, SLOT(quit()));
        eloop.exec();
        hide();
    }
    return true;
}

void TAStandMsgBox::SetShowData(const QString& strPathPic, const QString& strMsg, int nType, int sec)
{
    m_type = nType;
    m_lbInfo->setText(strMsg);
    m_totalTime = sec;
    m_timer->start(1000);

    QFile f(strPathPic);
    if(f.exists())
    {
        if(m_movie != NULL) {
            m_movie->stop();
            m_lbPic->setMovie(NULL);
            delete m_movie;
            m_movie = NULL;
        }
        m_movie = new QMovie(strPathPic, QByteArray(), this);
        m_lbPic->setMovie(m_movie);
        m_movie->start();
        m_lbPic->show();
    }
    else{
        m_lbPic->hide();
    }

    if(nType == 0) {
        m_leInput->hide();
        m_pbOK->show();
        m_pbCancel->show();
    }
    else if(nType == 1)
    { // only ok
        m_pbOK->show();
        m_pbCancel->hide();
        m_leInput->hide();
    }
    else if(nType == 2)
    {
        m_leInput->hide();
        m_pbOK->hide();
        m_pbCancel->hide();
    }
    else if(nType == 3)
    {
        m_leInput->show();
        m_leInput->setFocus();
        m_pbOK->show();
        m_pbCancel->show();
    }

    show();
}
