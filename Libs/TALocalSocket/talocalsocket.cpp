///
/// @brief         Protocol of TreeATE between GUI and models
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "talocalsocket.h"

#include <QLocalSocket>

#define TA_LOCAL_ACK          "OK"

#define TA_LOCAL_START_REQ    0xFE
#define TA_LOCAL_START_REP    0xFC
#define TA_LOCAL_FLAG_SYNC    0x01
#define TA_LOCAL_FLAG_ASYN    0x0A


TALocalSocket::TALocalSocket()
{
    m_lsServer = new QLocalSocket();
    m_lsClient = new QLocalSocket();
}

TALocalSocket::~TALocalSocket()
{
    if(m_lsServer) {
        m_lsServer->close();
        delete m_lsServer;
    }
    if(m_lsClient) {
        m_lsClient->close();
        delete m_lsClient;
    }
}

// server
bool TALocalSocket::setSocketDescriptor(qintptr socketDescriptor)
{
    return m_lsServer->setSocketDescriptor(socketDescriptor);
}

bool TALocalSocket::receiveFromClient(int mSecs, QStringList& lstData)
{
    if(!m_lsServer->waitForReadyRead(mSecs)) {
        m_strErr = m_lsServer->errorString();
        return false;
    }

    QByteArray data = m_lsServer->readAll();
    qDebug() << "MsgDispatchThread read data: " << data.toHex();
    if((uchar)data.at(0) == TA_LOCAL_START_REQ) {
        int nLen = data.at(2);
        nLen = (nLen << 8) + data.at(3);

        lstData.append(data.mid(4, nLen));
    }

    return true;
}

bool TALocalSocket::replyToClient(int mSecs)
{
    QString strReply(TA_LOCAL_ACK);
    QByteArray baReply;
    baReply.append((char)TA_LOCAL_START_REP);
    baReply.append((char)TA_LOCAL_FLAG_ASYN);
    int nLen = strReply.length();
    baReply.append((uchar)(nLen >> 8));
    baReply.append((char)nLen);
    baReply.append(strReply.toUtf8());

    m_lsServer->write(baReply);
    return m_lsServer->waitForBytesWritten(mSecs);
}

bool TALocalSocket::returnToClient(const QString& data, int mSecs)
{
    QString strReply(data);
    QByteArray baReply;
    baReply.append((char)TA_LOCAL_START_REP);
    baReply.append((char)TA_LOCAL_FLAG_SYNC);
    int nLen = strReply.length();
    baReply.append((uchar)(nLen >> 8));
    baReply.append((char)nLen);
    baReply.append(strReply.toUtf8());

    m_lsServer->write(baReply);
    return m_lsServer->waitForBytesWritten(mSecs);
}

// client
bool TALocalSocket::connectToServer(int mSecs)
{
    m_lsClient->connectToServer(TA_LOCAL_SERVER_NAME);
    return m_lsClient->waitForConnected(mSecs);
}

bool TALocalSocket::sendToServer(const QString& data, int mSecs)
{
    QByteArray baHead;
    baHead.append((char)TA_LOCAL_START_REQ);
    baHead.append((char)TA_LOCAL_FLAG_SYNC);
    QByteArray bufData = data.toUtf8();
    int nLen = bufData.size();
    baHead.append((uchar)(nLen >> 8));
    baHead.append((char)nLen);
    QByteArray bufMsg;
    bufMsg.append(baHead);
    bufMsg.append(bufData);

    m_lsClient->write(bufMsg);
    if(!m_lsClient->waitForBytesWritten(mSecs))
    {
        m_strErr = m_lsClient->errorString();
        return false;
    }

    if(!m_lsClient->waitForReadyRead(mSecs))
    {
        m_strErr = m_lsClient->errorString();
        return false;
    }

    QByteArray buf = m_lsClient->readAll();
    qDebug() << "sendToServer Recieve: " << buf.toHex();
    // is Async Reply, success to receive at server
    if((uchar)buf.at(0) == TA_LOCAL_START_REP && buf.at(1) == TA_LOCAL_FLAG_ASYN) {
        int rLen = buf.at(2);
        rLen = (rLen << 8) + buf.at(3);
        if(QString(buf.mid(4, rLen)).compare(TA_LOCAL_ACK, Qt::CaseInsensitive) != 0)
        {
            m_strErr = "Failed to ACK";
            return false;
        }
    }

    return true;
}

bool TALocalSocket::returnFromServer(int mSecs, QString &data)
{
    if(!m_lsClient->waitForReadyRead(mSecs))
    {
        m_strErr = m_lsClient->errorString();
        return false;
    }

    QByteArray buf = m_lsClient->readAll();    
    // is Async Reply, success to receive at server
    if(((uchar)buf.at(0) == TA_LOCAL_START_REP) && buf.at(1) == TA_LOCAL_FLAG_SYNC) {
        int rLen = buf.at(2);
        rLen = (rLen << 8) + buf.at(3);
        data = QString(buf.mid(4, rLen));
        return true;
    }

    m_strErr = "No reply: " + buf.toHex();
    return false;
}

QString TALocalSocket::getLastError()
{
    return m_strErr;
}
