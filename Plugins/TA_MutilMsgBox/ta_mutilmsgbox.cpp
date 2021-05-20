///
/// @brief         common of the MutilMessageBox
/// @author        David Yin  2021-05 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#include "ta_mutilmsgbox.h"
#include "../../Libs/TALocalSocket/talocalsocket.h"

#include <QLocalSocket>
#include <QCoreApplication>

#define TA_MSGBOX_OK        "OK"
#define TA_MSGBOX_TIMEOUT   "Timeout"
// Not modified, The same name fixed in TreeATE mainwindow
#define TA_MUTIL_OBJ    "TreeATE_Mutil_Sub"

void* CreateDeviceInst(const char *strPara)
{
    Q_UNUSED(strPara)
    return new TA_MutilMsgBox();
}

TA_MutilMsgBox::TA_MutilMsgBox()
{
    m_strObj = TA_MUTIL_OBJ;  // Not modified, The same name fixed in TreeATE mainwindow
    m_processId = qApp->applicationPid();
}

QString TA_MutilMsgBox::cmdProcess(const QString &strCmd, int mSec)
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

    qDebug() << "MutilMsgBox Recieve: " << retData;

    return retData;
}

QString TA_MutilMsgBox::MsgBox(const QString& strPic, const QString& strMsg,
                          const int type, const int mSec)
{
    QString strCmd = "return " + m_strObj + ".MsgBox(" + QString::number(m_processId)
            + ",'" + strPic + "', '" + strMsg + "', "
            + QString::number(type) + ", " + QString::number(mSec) + ")";

    return cmdProcess(strCmd, mSec);
}

int TA_MutilMsgBox::AsyncMsgBox(const QString& strPic, const QString& strMsg,
                               const int type, const int mSec)
{
    QString strCmd = "return " + m_strObj + ".AsyncMsgBox(" + QString::number(m_processId)
            + ",'" + strPic + "', '" + strMsg + "', "
            + QString::number(type) + ", " + QString::number(mSec) + ")";

    return cmdProcess(strCmd, mSec).toInt();
}

QString TA_MutilMsgBox::CloseAsyncMsgBox(int nMsgBoxId)
{
    QString strCmd = "return " + m_strObj + ".CloseAsyncMsgBox(" + QString::number(m_processId)
            + "," + QString::number(nMsgBoxId) + ")";

    return cmdProcess(strCmd, 200);
}
