///
/// @brief         Test Project option dialog
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef PRJOPTDLG_H
#define PRJOPTDLG_H

#include <QDialog>

namespace Ui {
class PrjOptDlg;
}

class PrjOptDlg : public QDialog
{
    Q_OBJECT

public:
    explicit PrjOptDlg(QWidget *parent = 0);
    ~PrjOptDlg();

    void SetFailedToStop(const bool bYes);
    void SetStopedForLoop(const bool bYes);
    void SetLoopCounts(const int nCnt);
    void SetRegSN(const QString& reg);
    void SetPrjName(const QString& strName);
    void SetPrjDesc(const QString& strDesc);
    void SetPrjVer(const QString& strVer);

    bool GetFailedToStop();
    bool GetStoppedForLoop();
    int GetLoopCounts();
    QString GetRegSN();

private:
    Ui::PrjOptDlg *ui;
};

#endif // PRJOPTDLG_H
