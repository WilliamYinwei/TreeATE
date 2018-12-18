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

#ifndef TALOCALSOCKET_H
#define TALOCALSOCKET_H

#include <QStringList>

#define TA_LOCAL_SERVER_NAME    "treeate_msg_channel"

class TALocalSocket
{

public:
    TALocalSocket();
    ~TALocalSocket();

    // server
    bool setSocketDescriptor(qintptr socketDescriptor);
    bool receiveFromClient(int mSecs, QStringList &lstData);
    bool replyToClient(int mSecs);
    bool returnToClient(const QString& data, int mSecs);

    // client
    bool connectToServer(int mSecs);
    bool sendToServer(const QString& data, int mSecs);
    bool returnFromServer(int mSecs, QString& data);

    QString getLastError();

private:
    class QLocalSocket* m_lsServer;
    class QLocalSocket* m_lsClient;
    QString m_strErr;
};

#endif // TALOCALSOCKET_H
