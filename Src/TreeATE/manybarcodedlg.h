///
/// @brief         Scan the barcode for every one of the test project
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef MANYBARCODEDLG_H
#define MANYBARCODEDLG_H

#include <QDialog>

class QTableWidget;
namespace Ui {
class ManyBarcodeDlg;
}

class ManyBarcodeDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ManyBarcodeDlg(QWidget *parent = 0);
    ~ManyBarcodeDlg();
    void SetProjectName(const QStringList& lstName);
    void SetBarcodeReg(const QString& strReg);
    QMap<QString, QString> GetPrjsBarcodes();

public slots:
    virtual void accept();

protected:
    bool isSampleBarcode(const QString& barcode);
    QStringList GetProjectSN();

private:
    Ui::ManyBarcodeDlg *ui;
    QString     m_strSNReg;
};

#endif // MANYBARCODEDLG_H
