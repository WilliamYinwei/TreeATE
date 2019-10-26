///
/// @brief         common of the MessageBox
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TA_MSGBOX_H
#define TA_MSGBOX_H

#include "ta_msgbox_global.h"

#include <QObject>

extern "C" TA_MSGBOXSHARED_EXPORT void* CreateDeviceInst(const char *strPara);

class TA_MSGBOXSHARED_EXPORT TA_MsgBox : public QObject
{
    Q_OBJECT
public:
    TA_MsgBox();

public slots:
    bool BandObj(const QString& obj);
    QString MsgBox(const QString& strPic, const QString& strMsg, const int type, const int mSec);
    int AsyncMsgBox(const QString& strPic, const QString& strMsg, const int type, const int mSec);
    QString CloseAsyncMsgBox(int nMsgBoxId);
    QString GuiCmdProcess(const QString& cmd, int mSec);

protected:
    QString cmdProcess(const QString& strCmd, int mSec);

private:
    QString m_strObj;
    QString m_strLstErr;
};

#endif // TA_MSGBOX_H
