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
#ifndef TASTANDMSGBOX_H
#define TASTANDMSGBOX_H

#include <QWidget>
#include <QMutex>
#include <QWaitCondition>

class QLabel;
class QLineEdit;
class QPushButton;
class QTimer;

class TAStandMsgBox : public QWidget
{
    Q_OBJECT
public:
    explicit TAStandMsgBox(QWidget *parent = 0);
    ~TAStandMsgBox();

    QString GetRetValue();
    void SetShowData(const QString& strPathPic, const QString& strMsg, int nType, int sec);
    bool CloseDialog();

signals:
    void finishedWindow();

private slots:
    void on_TimeOut();
    void on_pushButton_OK_clicked();
    void on_pushButton_Cancel_clicked();

private:
    QLabel* m_lbPic;
    QLabel* m_lbInfo;
    QLineEdit* m_leInput;
    QPushButton* m_pbCancel;
    QPushButton* m_pbOK;
    QTimer*      m_timer;
    class QThread*  m_pThreadTimer;
    int             m_type;
    int             m_totalTime;
    QString         m_strRetValue;
    class QMovie *  m_movie;
};

#endif // TASTANDMSGBOX_H
