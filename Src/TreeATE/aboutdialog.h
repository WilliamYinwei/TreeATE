///
/// @brief         about this system
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-22 版本行改为从单一版本源动态生成
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

class QEvent;

namespace Ui {
class AboutDialog;
}

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent = 0);
    ~AboutDialog();

protected:
    void changeEvent(QEvent* e) override;

private:
    void updateVersionText();

private:
    Ui::AboutDialog *ui;
};

#endif // ABOUTDIALOG_H
