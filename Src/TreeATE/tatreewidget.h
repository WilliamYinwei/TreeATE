///
/// @brief         Show test item from TestEngine with TreeWidget
/// @author        David Yin  2020-12 willage.yin@163.com  2026-11-22 M2 状态色改为主题动态属性，动态重翻译  2026-11-22 M3 UUT 页头/KPI/结果浮层/空状态
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
class QFrame;
class QPushButton;
class QTimer;

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
    void setCounts(quint32 nPass, quint32 nFail, quint32 nExce);
    void hideResultOverlay();

protected:
    void changeEvent(QEvent* e);
    bool eventFilter(QObject* watched, QEvent* e);
    void resizeEvent(QResizeEvent* e);

private:
    void updateHeaderText();
    void updateParentItemClicked(QTreeWidgetItem *parent);
    void updateEmptyState();
    void updateOverlayGeometry();
    void showResultOverlay(const QString& strStatus, const QString& strState);

private slots:
    void on_itemClicked(QTreeWidgetItem* item, int column);
    void on_itemChanged(QTreeWidgetItem *item, int column);
    void on_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_statusClicked();
    void on_overlayDetailClicked();

public:
    TAStandMsgBox* m_taMsgBox;

    TAcustomTreeWidget *twTestPrj() const;

private:
    TALabel* m_lbStatus;
    TALabel*  m_lbTitle;
    TALabel*  m_lbSN;
    TALabel*  m_lbSpendTime;
    TAcustomTreeWidget* m_twTestPrj;

    QWidget*    m_pHeader;
    QLabel*     m_lbEmptyHint;
    QFrame*     m_pOverlay;
    QLabel*     m_lbOverlayStatus;
    QLabel*     m_lbOverlayKpi;
    QPushButton* m_pOverlayDetail;
    QTimer*     m_pOverlayTimer;
    quint32     m_nPass;
    quint32     m_nFail;
    quint32     m_nExce;
};

#endif // TATREEWIDGET_H
