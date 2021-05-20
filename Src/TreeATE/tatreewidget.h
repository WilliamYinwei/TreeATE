///
/// @brief         Show test item from TestEngine with TreeWidget
/// @author        David Yin  2020-12 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef TATREEWIDGET_H
#define TATREEWIDGET_H

#include <QTreeWidget>
#include <QTemporaryFile>
#include <QLabel>

#include "tadefine.h"

#define TA_UUT_MAX_HEIGHT  60
#define TA_UUT_SN_MAX_HEIGHT  20

class TALabel;
class TAcustomTreeWidget;
class TAStandMsgBox;

class TATreeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TATreeWidget(QWidget *parent = Q_NULLPTR);
    ~TATreeWidget();

    bool addUnitItems(const QString& who, const QJsonObject &objData);
    QStringList seletedPrj();
    int seletedUnitItems(QTemporaryFile* pFile, bool bCheckEnable);

    void clearPrjStatus();
    QString currentPrjStatus();
    void refreshExpandAll();

    void spreadUnitItems();
    void shrinkUnitItems();

    void startItemsData(const QJsonObject& objData);
    void updateItemsData(const QJsonObject& objData);
    void detailItemsData(const QJsonObject& objData);

    void showTotalStatus(bool bShow, const QString& status, const QString& style);

    void setSN(const QString& strSN);

private:
    void updateParentItemClicked(QTreeWidgetItem *parent);

private slots:
    void on_itemClicked(QTreeWidgetItem* item, int column);
    void on_itemChanged(QTreeWidgetItem *item, int column);
    void on_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_statusClicked();

public:
    TAStandMsgBox* m_taMsgBox;

private:
    TALabel* m_lbStatus;
    TALabel*  m_lbTitle;
    TALabel*  m_lbSN;
    TALabel*  m_lbSpendTime;
    TAcustomTreeWidget* m_twTestPrj;
};

#endif // TATREEWIDGET_H
