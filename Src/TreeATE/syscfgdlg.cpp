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

#include "syscfgdlg.h"
#include "ui_syscfgdlg.h"
#include "thememanager.h"

#include <QFileDialog>
#include <QEvent>

SysCfgDlg::SysCfgDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SysCfgDlg)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->pushButton_add->setIcon(QIcon(":/add.png"));
    ui->pushButton_del->setIcon(QIcon(":/minus.png"));
    populateThemeList();
}

SysCfgDlg::~SysCfgDlg()
{
    delete ui;
}

void SysCfgDlg::populateThemeList()
{
    ThemeManager* pThemeMgr = ThemeManager::instance();
    ui->comboBox_theme->clear();
    for(int i = 0; i < ThemeManager::ThemeCount; i++) {
        ui->comboBox_theme->addItem(pThemeMgr->themeName(i), pThemeMgr->themeKey(i));
    }
}

void SysCfgDlg::selectLanguage(const QString& strCode)
{
    int nIdx = ui->comboBox_lang->findData(strCode);
    if(nIdx >= 0)
        ui->comboBox_lang->setCurrentIndex(nIdx);
}

void SysCfgDlg::changeEvent(QEvent* e)
{
    QDialog::changeEvent(e);
    if(e->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
        const QString strTheme = ui->comboBox_theme->currentData().toString();
        populateThemeList();
        int nIdx = ui->comboBox_theme->findData(strTheme);
        if(nIdx >= 0)
            ui->comboBox_theme->setCurrentIndex(nIdx);
    }
}

void SysCfgDlg::on_brownButton_clicked()
{
    QString strPath = ui->lineEdit_Path->text();
    strPath = QFileDialog::getExistingDirectory(this, tr("Get Path"), strPath);
    if(!strPath.isEmpty())
        ui->lineEdit_Path->setText(strPath);
}

void SysCfgDlg::SetSysConfig(const QVariant &sysCfg)
{
    if(!sysCfg.isValid())
        return;

    QVariantMap varMapCfg = sysCfg.toMap();

    if(varMapCfg["Station"].isValid())
    {
        ui->lineEdit_Station->setText(varMapCfg["Station"].toString());
    }
    if(varMapCfg["LineName"].isValid())
    {
        ui->lineEdit_Line->setText(varMapCfg["LineName"].toString());
    }
    if(varMapCfg["WorkPath"].isValid())
    {
        ui->lineEdit_Path->setText(varMapCfg["WorkPath"].toString());
    }
    if(varMapCfg["Server"].isValid())
    {
        ui->lineEdit_Server->setText(varMapCfg["Server"].toString());
    }
    if(varMapCfg["Projects"].isValid())
    {
        QVariantList vlPrj = varMapCfg["Projects"].toList();
        for(int i = 0; i < vlPrj.count(); i++) {
            QVariantMap vmItem = vlPrj.at(i).toMap();

            QTableWidgetItem* item = new QTableWidgetItem();
            item->setText(vmItem["barcode"].toString());
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i, 0, item);

            item = new QTableWidgetItem();
            item->setText(vmItem["path"].toString());
            ui->tableWidget->setItem(i, 1, item);
        }
    }
    QString strLangCode = LanguageManager::normalizeCode(varMapCfg["LanguageCode"].toString());
    if(strLangCode.isEmpty())
        strLangCode = LanguageManager::normalizeCode(varMapCfg["Language"].toString());
    if(!strLangCode.isEmpty())
        selectLanguage(strLangCode);

    if(varMapCfg["Theme"].isValid())
    {
        int nIdx = ui->comboBox_theme->findData(varMapCfg["Theme"].toString());
        if(nIdx >= 0)
            ui->comboBox_theme->setCurrentIndex(nIdx);
    }
    if(varMapCfg["Logout"].isValid())
    {
        ui->spinBox->setValue(varMapCfg["Logout"].toInt());
    }
}


QVariantMap SysCfgDlg::GetDataValue()
{
    QVariantMap varMapCfg;

    varMapCfg.insert("LineName", ui->lineEdit_Line->text());
    varMapCfg.insert("WorkPath", ui->lineEdit_Path->text());
    varMapCfg.insert("Station", ui->lineEdit_Station->text());
    varMapCfg.insert("Server", ui->lineEdit_Server->text());
    const QString strLangCode = ui->comboBox_lang->currentData().toString();
    varMapCfg.insert("LanguageCode", strLangCode);
    if(strLangCode == "zh-CN")
        varMapCfg.insert("Language", "zh.qm");
    else if(strLangCode == "en-US")
        varMapCfg.insert("Language", "en.qm");
    else
        varMapCfg.insert("Language", strLangCode + ".qm");
    varMapCfg.insert("Theme", ui->comboBox_theme->currentData().toString());
    varMapCfg.insert("Logout", ui->spinBox->value());

    QVariantList vlPrj;
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        QVariantMap vmItem;
        QTableWidgetItem* item = ui->tableWidget->item(i, 0);
        if(item) {
            vmItem.insert("barcode", item->text());
        }
        item = ui->tableWidget->item(i, 1);
        if(item) {
            vmItem.insert("path", item->text());
        }
        vlPrj.append(vmItem);
    }
    varMapCfg.insert("Projects", vlPrj);

    return varMapCfg;
}

void SysCfgDlg::on_pushButton_add_clicked()
{
    QTableWidgetItem* item = new QTableWidgetItem();
    int nCnt = ui->tableWidget->rowCount();
    item->setText("No RegEx" + QString::number(nCnt));
    ui->tableWidget->insertRow(nCnt);
    ui->tableWidget->setItem(nCnt, 0, item);

    item = new QTableWidgetItem();
    item->setText("");
    ui->tableWidget->setItem(nCnt, 1, item);
}

void SysCfgDlg::on_pushButton_del_clicked()
{
    int row = ui->tableWidget->currentRow();
    if(row < 0 || row > ui->tableWidget->rowCount())
        return;
    ui->tableWidget->removeRow(row);
}

void SysCfgDlg::SetLanguageList(const QList<LanguageInfo>& lstLanguages)
{
    ui->comboBox_lang->clear();
    for(const LanguageInfo& info : lstLanguages) {
        ui->comboBox_lang->addItem(info.nativeName, info.code);
    }
}
