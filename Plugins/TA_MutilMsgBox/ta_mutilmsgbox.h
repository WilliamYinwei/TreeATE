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

#ifndef TA_MUTILMSGBOX_H
#define TA_MUTILMSGBOX_H

#include "ta_mutilmsgbox_global.h"

#include <QObject>

extern "C" TA_MUTILMSGBOXSHARED_EXPORT void* CreateDeviceInst(const char *strPara);

class TA_MUTILMSGBOXSHARED_EXPORT TA_MutilMsgBox : public QObject
{
    Q_OBJECT
public:
    TA_MutilMsgBox();

public slots:
    QString MsgBox(const QString& strPic, const QString& strMsg, const int type, const int mSec);
    int AsyncMsgBox(const QString& strPic, const QString& strMsg, const int type, const int mSec);
    QString CloseAsyncMsgBox(int nMsgBoxId);

protected:
    QString cmdProcess(const QString& strCmd, int mSec);

private:
    QString m_strObj;
    QString m_strLstErr;
    qint64  m_processId;
};

#endif // TA_MSGBOX_H
