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

#ifndef MSGBOXDLG_H
#define MSGBOXDLG_H

#include <QDialog>

namespace Ui {
class MsgBoxDlg;
}

class MsgBoxDlg : public QDialog
{
    Q_OBJECT

public:
    explicit MsgBoxDlg(QWidget *parent = 0);
    ~MsgBoxDlg();

    void SetShowData(const QString& strPathPic, const QString& strMsg, int nType, int sec);
    QString GetRetValue();

private slots:
    void on_TimeOut();

    void on_pushButton_OK_clicked();

    void on_pushButton_Cancel_clicked();

private:
    Ui::MsgBoxDlg *ui;    
    int             m_type;
    class QTimer*   m_timer;
    class QThread*  m_pThreadTimer;
    int             m_totalTime;
    QString         m_strRetValue;
};

#endif // MSGBOXDLG_H
