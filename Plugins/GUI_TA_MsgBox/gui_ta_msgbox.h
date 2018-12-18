///
/// @brief         Plugin of the MsgBox GUI Instance
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef GUI_TA_MSGBOX_H
#define GUI_TA_MSGBOX_H

#include "gui_ta_msgbox_global.h"

#include <QObject>
#include <QWidget>
#include <QMap>

extern "C" GUI_TA_MSGBOXSHARED_EXPORT void* CreateGuiInst(const void *strPara);

class GUI_TA_MSGBOXSHARED_EXPORT GUI_TA_MsgBox : public QWidget
{
    Q_OBJECT
public:
    explicit GUI_TA_MsgBox(QWidget* parent = 0, Qt::WindowFlags f = 0);
    ~GUI_TA_MsgBox();

public slots:
    QString MsgBox(const QString& strPic, const QString& strMsg, const int nType, const int mSec);
    int AsyncMsgBox(const QString& strPic, const QString& strMsg, const int nType, const int mSec);
    bool CloseAsyncMsgBox(int msgBoxId);

private:
    QWidget* m_pParent;
    QMap<int, class MsgBoxDlg*> m_lstDlg;
};

#endif // GUI_TA_MSGBOX_H
