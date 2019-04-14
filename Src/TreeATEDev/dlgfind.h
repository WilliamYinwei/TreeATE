#ifndef DLGFIND_H
#define DLGFIND_H

#include <QDialog>
#include <QAbstractButton>
namespace Ui {
class DlgFind;
}

class DlgFind : public QDialog
{
    Q_OBJECT

public:
    explicit DlgFind(QWidget *parent = 0);
    ~DlgFind();
signals:
    void seachForText(const QString& text, bool wo, bool ca, bool re);

protected:
    QString GetFindText();
    bool IsForward();
    bool IsWhole();
    bool IsCase();
    bool IsRegEx();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::DlgFind *ui;    
};

#endif // DLGFIND_H
