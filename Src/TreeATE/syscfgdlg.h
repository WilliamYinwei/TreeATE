///
/// @brief         TreeATE system option
/// @author        David Yin  2018-12 willage.yin@163.com  2026-11-22 M2 语言清单与主题入口
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef SYSCFGDLG_H
#define SYSCFGDLG_H

#include <QDialog>
#include "languagemanager.h"

namespace Ui {
class SysCfgDlg;
}

class SysCfgDlg : public QDialog
{
    Q_OBJECT

public:
    explicit SysCfgDlg(QWidget *parent = 0);
    ~SysCfgDlg();

    void SetSysConfig(const QVariant& sysCfg);
    QVariantMap GetDataValue();
    void SetLanguageList(const QList<LanguageInfo>& lstLanguages);

protected:
    void changeEvent(QEvent* e);

private slots:
    void on_brownButton_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_del_clicked();

private:
    void populateThemeList();
    void selectLanguage(const QString& strCode);

private:
    Ui::SysCfgDlg *ui;
};

#endif // SYSCFGDLG_H
