///
/// @brief         common of the MessageBox
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#include "ta_msgbox.h"
#include "../../Libs/TALocalSocket/talocalsocket.h"

#include <QLocalSocket>
#include <QCoreApplication>

#define TA_MSGBOX_OK        "OK"
#define TA_MSGBOX_TIMEOUT   "Timeout"


void* CreateDeviceInst(const char *strPara)
{
    Q_UNUSED(strPara)
    return new TA_MsgBox();
}

TA_MsgBox::TA_MsgBox()
{
}

bool TA_MsgBox::BandObj(const QString &obj)
{
    m_strObj = obj;
    return true;
}

QString TA_MsgBox::cmdProcess(const QString &strCmd, int mSec)
{
    TALocalSocket taSocket;
    if(!taSocket.connectToServer(300)) {
        m_strLstErr = taSocket.getLastError();
        return TA_MSGBOX_TIMEOUT;
    }

    // send data to server
    if(!taSocket.sendToServer(strCmd, 200)) {
        m_strLstErr = taSocket.getLastError();
        return TA_MSGBOX_TIMEOUT;
    }

    QString retData;
    if(!taSocket.returnFromServer(mSec + 300, retData)) {
        m_strLstErr = taSocket.getLastError();
        qDebug() << "error at returnFromServer: " << taSocket.getLastError();
        return TA_MSGBOX_TIMEOUT;
    }

    qDebug() << "MsgBox Recieve: " << retData;

    return retData;
}

QString TA_MsgBox::MsgBox(const QString& strPic, const QString& strMsg,
                          const int type, const int mSec)
{
    QString strCmd = "return " + m_strObj + ".MsgBox('" + strPic + "', '" + strMsg + "', "
            + QString::number(type) + ", " + QString::number(mSec) + ")";

    return cmdProcess(strCmd, mSec);
}

int TA_MsgBox::AsyncMsgBox(const QString& strPic, const QString& strMsg,
                               const int type, const int mSec)
{
    QString strCmd = "return " + m_strObj + ".AsyncMsgBox('" + strPic + "', '" + strMsg + "', "
            + QString::number(type) + ", " + QString::number(mSec) + ")";

    return cmdProcess(strCmd, mSec).toInt();
}

QString TA_MsgBox::CloseAsyncMsgBox(int nMsgBoxId)
{
    QString strCmd = "return " + m_strObj + ".CloseAsyncMsgBox(" + QString::number(nMsgBoxId) + ")";

    return cmdProcess(strCmd, 200);
}
