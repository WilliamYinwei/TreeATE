///
/// @brief         MsgBox GUI Instance
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#include "gui_ta_msgbox.h"
#include "msgboxdlg.h"

#include <QMessageBox>

void* CreateGuiInst(const void *strPara)
{
    return new GUI_TA_MsgBox((QWidget*)strPara);
}

GUI_TA_MsgBox::GUI_TA_MsgBox(QWidget* parent, Qt::WindowFlags f) : QWidget(parent, f)
{
    m_pParent = parent;

}

GUI_TA_MsgBox::~GUI_TA_MsgBox()
{
    foreach(auto itor, m_lstDlg) {
        if(itor) {
            itor->close();
            delete itor;
        }
    }
}

QString GUI_TA_MsgBox::MsgBox(const QString& strPic, const QString& strMsg,
                              const int nType, const int mSec)
{
    MsgBoxDlg dlg(m_pParent);
    dlg.SetShowData(strPic, strMsg, nType, mSec/1000);
    int ret = dlg.exec();

    QString strValue = dlg.GetRetValue();
    if(strValue.trimmed().isEmpty()) {
        if(QDialog::Accepted == ret) {
            return "OK";
        }
        else
            return "Cancel";
    }

    return strValue;
}


int GUI_TA_MsgBox::AsyncMsgBox(const QString& strPic, const QString& strMsg,
                              const int nType, const int mSec)
{
    if(nType >= 3 || nType < 0) {
        return 0;
    }

    MsgBoxDlg* pMsgDlg = new MsgBoxDlg(m_pParent);
    static int nId = 0;
    nId++;
    m_lstDlg.insert(nId, pMsgDlg);

    pMsgDlg->SetShowData(strPic, strMsg, nType, mSec/1000);
    pMsgDlg->show();

    return nId;
}

// close the current dialog on showed
bool GUI_TA_MsgBox::CloseAsyncMsgBox(int msgBoxId)
{
    auto itor = m_lstDlg.find(msgBoxId);
    if(itor != m_lstDlg.end()) {
        MsgBoxDlg* pDlg = itor.value();
        if(pDlg) {
            pDlg->close();
            delete pDlg;
        }
        m_lstDlg.remove(msgBoxId);
        return true;
    }
    return false;
}
