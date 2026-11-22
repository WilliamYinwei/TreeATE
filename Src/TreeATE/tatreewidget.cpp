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

#include <QTextStream>
#include <QHeaderView>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFrame>
#include <QPushButton>
#include <QTimer>
#include <QMessageBox>
#include <QFontMetrics>
#include <QStyle>
#include <QEvent>
#include <QResizeEvent>

#include "tatreewidget.h"
#include "statusdelegate.h"
#include "talabel.h"
#include "tacustomtreewidget.h"
#include "tastandmsgbox.h"

TATreeWidget::TATreeWidget(QWidget *parent):QWidget(parent),
    m_pHeader(NULL), m_lbEmptyHint(NULL), m_pOverlay(NULL),
    m_lbOverlayStatus(NULL), m_lbOverlayKpi(NULL), m_pOverlayDetail(NULL),
    m_pOverlayTimer(NULL), m_nPass(0), m_nFail(0), m_nExce(0)
{
    m_twTestPrj = new TAcustomTreeWidget(this);
    setContentsMargins(2, 2, 2, 2);
    m_twTestPrj->setObjectName("UutTree");
    m_twTestPrj->setColumnCount(TA_COLUMN_SPEND_TIME + 1);
    QTreeWidgetItem* itemHeader = m_twTestPrj->headerItem();
    itemHeader->setText(TA_COLUMN_UNIT_NAME, tr("Name"));
    itemHeader->setText(TA_COLUMN_UNIT_PATH, tr("Path"));
    itemHeader->setText(TA_COLUMN_UNIT_DESC, tr("Description"));
    itemHeader->setText(TA_COLUMN_TEST_STATUS, tr("Status"));
    itemHeader->setText(TA_COLUMN_TEST_RST, tr("Result"));
    itemHeader->setText(TA_COLUMN_TEST_STAND, tr("Standard"));
    itemHeader->setText(TA_COLUMN_START_TIME, tr("Start Time"));
    itemHeader->setText(TA_COLUMN_SPEND_TIME, tr("Elapsed Time"));

    // 2026-11-22 列宽：描述列改为按内容自适应，不再拉伸占满剩余宽度
    m_twTestPrj->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    m_twTestPrj->setUniformRowHeights(true);
    m_twTestPrj->setAlternatingRowColors(true);

    m_twTestPrj->hideColumn(TA_COLUMN_UNIT_PATH);
    m_twTestPrj->setItemDelegateForColumn(TA_COLUMN_TEST_STATUS, new StatusDelegate(parent));

    connect(m_twTestPrj, SIGNAL(itemClicked(QTreeWidgetItem*,int)), SLOT(on_itemClicked(QTreeWidgetItem*,int)));
    connect(m_twTestPrj, SIGNAL(itemChanged(QTreeWidgetItem*,int)), SLOT(on_itemChanged(QTreeWidgetItem*,int)));
    connect(m_twTestPrj, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), SLOT(on_itemDoubleClicked(QTreeWidgetItem*,int)));

    QVBoxLayout* pVLayout = new QVBoxLayout(this);
    pVLayout->setDirection(QBoxLayout::TopToBottom);
    pVLayout->setContentsMargins(0, 0, 0, 0);
    pVLayout->setSpacing(0);

    // UUT 页头：工程名 / SN / 状态徽标 / 耗时
    m_pHeader = new QWidget(this);
    m_pHeader->setObjectName("UutHeader");
    QHBoxLayout* pHeaderLayout = new QHBoxLayout(m_pHeader);
    pHeaderLayout->setContentsMargins(12, 6, 12, 6);
    pHeaderLayout->setSpacing(12);

    QVBoxLayout* pTitleLayout = new QVBoxLayout();
    pTitleLayout->setContentsMargins(0, 0, 0, 0);
    pTitleLayout->setSpacing(0);

    m_lbTitle = new TALabel(m_pHeader);
    m_lbTitle->setObjectName("UutTitle");
    m_lbTitle->setFixedHeight(TA_UUT_MAX_HEIGHT);
    m_lbTitle->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    m_lbSN = new TALabel(m_pHeader);
    m_lbSN->setObjectName("UutSN");
    m_lbSN->setFixedHeight(TA_UUT_SN_MAX_HEIGHT);
    m_lbSN->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    pTitleLayout->addWidget(m_lbTitle);
    pTitleLayout->addWidget(m_lbSN);
    pHeaderLayout->addLayout(pTitleLayout, 1);

    m_lbStatus = new TALabel(m_pHeader);
    m_lbStatus->setObjectName("UutStatus");
    m_lbStatus->setAlignment(Qt::AlignCenter);
    m_lbStatus->setMinimumWidth(120);
    m_lbStatus->setFixedHeight(40);
    m_lbStatus->hide();
    pHeaderLayout->addWidget(m_lbStatus);

    m_lbSpendTime = new TALabel(m_pHeader);
    m_lbSpendTime->setObjectName("UutSpendTime");
    m_lbSpendTime->setAlignment(Qt::AlignCenter);
    m_lbSpendTime->setFixedHeight(24);
    m_lbSpendTime->setToolTip(tr("Spend time"));
    m_lbSpendTime->hide();
    pHeaderLayout->addWidget(m_lbSpendTime);

    pVLayout->addWidget(m_pHeader);

    // 2026-11-22 统计条从测试工程窗口移除，统一由底部“统计”页签展示
    // Tree View
    pVLayout->addWidget(m_twTestPrj, 1);
    m_twTestPrj->show();

    // Mutil-Messagebox
    m_taMsgBox = new TAStandMsgBox(this);
    pVLayout->addWidget(m_taMsgBox);

    connect(m_lbStatus, SIGNAL(clicked()), this, SLOT(on_statusClicked()));
    connect(m_lbTitle, SIGNAL(clicked()), this, SLOT(on_statusClicked()));
    connect(m_lbSN, SIGNAL(clicked()), this, SLOT(on_statusClicked()));

    // 空状态提示：覆盖在树视口中央
    m_lbEmptyHint = new QLabel(m_twTestPrj->viewport());
    m_lbEmptyHint->setObjectName("EmptyHint");
    m_lbEmptyHint->setAlignment(Qt::AlignCenter);
    m_lbEmptyHint->setWordWrap(true);
    m_lbEmptyHint->setAttribute(Qt::WA_TransparentForMouseEvents);
    m_lbEmptyHint->setGeometry(m_twTestPrj->viewport()->rect());
    m_twTestPrj->viewport()->installEventFilter(this);

    // 结果浮层：覆盖树区域，不永久遮挡测试项
    m_pOverlay = new QFrame(this);
    m_pOverlay->setObjectName("ResultOverlay");
    m_pOverlay->setVisible(false);
    QVBoxLayout* pOverlayLayout = new QVBoxLayout(m_pOverlay);
    pOverlayLayout->setContentsMargins(24, 24, 24, 24);
    pOverlayLayout->setSpacing(12);
    pOverlayLayout->addStretch(1);
    m_lbOverlayStatus = new QLabel(m_pOverlay);
    m_lbOverlayStatus->setObjectName("OverlayStatus");
    m_lbOverlayStatus->setAlignment(Qt::AlignCenter);
    m_lbOverlayStatus->setProperty("state", "neutral");
    pOverlayLayout->addWidget(m_lbOverlayStatus);
    m_lbOverlayKpi = new QLabel(m_pOverlay);
    m_lbOverlayKpi->setObjectName("OverlayKpi");
    m_lbOverlayKpi->setAlignment(Qt::AlignCenter);
    pOverlayLayout->addWidget(m_lbOverlayKpi);
    m_pOverlayDetail = new QPushButton(tr("View details"), m_pOverlay);
    m_pOverlayDetail->setObjectName("OverlayDetail");
    connect(m_pOverlayDetail, SIGNAL(clicked()), this, SLOT(on_overlayDetailClicked()));
    pOverlayLayout->addWidget(m_pOverlayDetail, 0, Qt::AlignHCenter);
    pOverlayLayout->addStretch(1);

    m_pOverlayTimer = new QTimer(this);
    m_pOverlayTimer->setSingleShot(true);
    m_pOverlayTimer->setInterval(5000);
    connect(m_pOverlayTimer, SIGNAL(timeout()), this, SLOT(hideResultOverlay()));

    updateEmptyState();

    setContextMenuPolicy(Qt::CustomContextMenu);
}

TATreeWidget::~TATreeWidget()
{
    if(m_twTestPrj)
        delete m_twTestPrj;
    if(m_lbStatus)
        delete m_lbStatus;
}

void TATreeWidget::setSN(const QString &strSN)
{
    if(m_lbSN) {
        QFontMetrics fontMet(m_lbSN->font());
        QString strOmitSN = fontMet.elidedText(strSN, Qt::ElideMiddle, m_lbSN->width());
        m_lbSN->setText(strOmitSN);
        m_lbSN->setToolTip(strSN);
    }
}

void TATreeWidget::showTotalStatus(bool bShow, const QString& status, const QString& style)
{
    Q_UNUSED(style); // 2026-11-22 M2 D4：颜色改由主题 QSS 控制，保留参数兼容 testmanger

    if(!status.isEmpty()) {
        QString strState = "neutral";
        QString strText = status;
        if(status == TA_STATUS_EXCE) {
            strState = "exce";
            strText = tr("Exception");
        }
        else if(status == TA_STATUS_FAIL) {
            strState = "fail";
            strText = tr("Fail");
        }
        else if(status == TA_STATUS_PASS) {
            strState = "pass";
            strText = tr("Pass");
        }

        m_lbStatus->setProperty("state", strState);
        m_lbStatus->setText(strText);
        m_lbStatus->style()->unpolish(m_lbStatus);
        m_lbStatus->style()->polish(m_lbStatus);
        m_lbStatus->update();

        QTreeWidgetItem* item = m_twTestPrj->topLevelItem(0);
        if(item) {
            m_lbSpendTime->setText(item->text(TA_COLUMN_SPEND_TIME));
        }
        m_lbSpendTime->show();
        m_lbStatus->show();
    }

    if(bShow && !m_lbStatus->isHidden()) {
        // 2026-11-22 M3 结果浮层覆盖树区域，5 秒后自动收起，可点按钮手动关闭
        showResultOverlay(m_lbStatus->text(), m_lbStatus->property("state").toString());
    }
    else if(!bShow) {
        hideResultOverlay();
    }
}

void TATreeWidget::setCounts(quint32 nPass, quint32 nFail, quint32 nExce)
{
    m_nPass = nPass;
    m_nFail = nFail;
    m_nExce = nExce;
}

void TATreeWidget::hideResultOverlay()
{
    if(m_pOverlayTimer)
        m_pOverlayTimer->stop();
    if(m_pOverlay && m_pOverlay->isVisible())
        m_pOverlay->hide();
    updateEmptyState();
}

void TATreeWidget::showResultOverlay(const QString& strStatus, const QString& strState)
{
    if(!m_pOverlay || !m_lbOverlayStatus)
        return;

    m_lbOverlayStatus->setText(strStatus);
    m_lbOverlayStatus->setProperty("state", strState.isEmpty() ? "neutral" : strState);
    m_lbOverlayStatus->style()->unpolish(m_lbOverlayStatus);
    m_lbOverlayStatus->style()->polish(m_lbOverlayStatus);

    if(m_lbOverlayKpi) {
        m_lbOverlayKpi->setText(QString("%1: %2    %3: %4    %5: %6")
                                .arg(tr("Pass")).arg(m_nPass)
                                .arg(tr("Fail")).arg(m_nFail)
                                .arg(tr("Exception")).arg(m_nExce));
    }

    updateOverlayGeometry();
    m_pOverlay->raise();
    m_pOverlay->show();
    if(m_pOverlayTimer)
        m_pOverlayTimer->start();
    updateEmptyState();
}

void TATreeWidget::on_overlayDetailClicked()
{
    hideResultOverlay();
}

void TATreeWidget::updateOverlayGeometry()
{
    if(m_pOverlay && m_twTestPrj)
        m_pOverlay->setGeometry(m_twTestPrj->geometry());
}

void TATreeWidget::updateEmptyState()
{
    if(!m_lbEmptyHint || !m_twTestPrj)
        return;

    const bool bEmpty = (m_twTestPrj->topLevelItemCount() == 0);
    m_lbEmptyHint->setText(tr("Scan a barcode or load a test project to start."));
    m_lbEmptyHint->setGeometry(m_twTestPrj->viewport()->rect());
    m_lbEmptyHint->setVisible(bEmpty && (!m_pOverlay || !m_pOverlay->isVisible()));
    if(m_lbEmptyHint->isVisible())
        m_lbEmptyHint->raise();
}

bool TATreeWidget::eventFilter(QObject* watched, QEvent* e)
{
    if(m_twTestPrj && watched == m_twTestPrj->viewport() && e->type() == QEvent::Resize) {
        if(m_lbEmptyHint)
            m_lbEmptyHint->setGeometry(m_twTestPrj->viewport()->rect());
    }
    return QWidget::eventFilter(watched, e);
}

void TATreeWidget::resizeEvent(QResizeEvent* e)
{
    QWidget::resizeEvent(e);
    updateOverlayGeometry();
    if(m_lbEmptyHint && m_twTestPrj)
        m_lbEmptyHint->setGeometry(m_twTestPrj->viewport()->rect());
}

void TATreeWidget::updateHeaderText()
{
    QTreeWidgetItem* itemHeader = m_twTestPrj->headerItem();
    if(!itemHeader)
        return;
    itemHeader->setText(TA_COLUMN_UNIT_NAME, tr("Name"));
    itemHeader->setText(TA_COLUMN_UNIT_PATH, tr("Path"));
    itemHeader->setText(TA_COLUMN_UNIT_DESC, tr("Description"));
    itemHeader->setText(TA_COLUMN_TEST_STATUS, tr("Status"));
    itemHeader->setText(TA_COLUMN_TEST_RST, tr("Result"));
    itemHeader->setText(TA_COLUMN_TEST_STAND, tr("Standard"));
    itemHeader->setText(TA_COLUMN_START_TIME, tr("Start Time"));
    itemHeader->setText(TA_COLUMN_SPEND_TIME, tr("Elapsed Time"));

    m_lbSpendTime->setToolTip(tr("Spend time"));
}

void TATreeWidget::changeEvent(QEvent* e)
{
    QWidget::changeEvent(e);
    if(e->type() == QEvent::LanguageChange) {
        updateHeaderText();
        updateEmptyState();
        if(m_pOverlayDetail)
            m_pOverlayDetail->setText(tr("View details"));
        if(m_lbOverlayKpi && m_pOverlay && m_pOverlay->isVisible())
            showResultOverlay(m_lbOverlayStatus->text(), m_lbOverlayStatus->property("state").toString());
    }
}

void TATreeWidget::on_statusClicked()
{
    showTotalStatus(m_lbStatus->isHidden(), "", "");
}

TAcustomTreeWidget *TATreeWidget::twTestPrj() const
{
    return m_twTestPrj;
}

void TATreeWidget::on_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    Q_UNUSED(item)
    Q_UNUSED(column)
    showTotalStatus(true, "", "");
}

void TATreeWidget::on_itemClicked(QTreeWidgetItem* item, int column)
{
    if(NULL == item)
        return;

    if(column != 0)
        return;

    // clicked the items check box
    if(Qt::Checked == item->checkState(0))
    { // selected
        int count = item->childCount();
        if (count > 0)
        {
            for (int i = 0; i < count; i++)
            {
                //child items selected
                item->child(i)->setCheckState(0, Qt::Checked);
                int x = item->child(i)->childCount();
                for(int j = 0; j < x; j++)
                {
                    item->child(i)->child(j)->setCheckState(0, Qt::Checked);
                }
            }
        }
    }
    else if(Qt::Unchecked == item->checkState(0))
    { // unselected

        int count = item->childCount();
        if (count > 0)
        {
            for (int i = 0; i < count; i++)
            {
                item->child(i)->setCheckState(0, Qt::Unchecked);
                int x = item->child(i)->childCount();
                for(int j = 0; j < x; j++)
                {
                    item->child(i)->child(j)->setCheckState(0, Qt::Unchecked);
                }
            }
        }
    }

    updateParentItemClicked(item->parent());
}

void TATreeWidget::on_itemChanged(QTreeWidgetItem *item, int column)
{
    if(NULL == item)
        return;

    if(TA_COLUMN_TEST_STATUS == column)
    {
        showTotalStatus(false, "", "");
        m_twTestPrj->scrollTo(m_twTestPrj->getIndex(item, column), QAbstractItemView::PositionAtCenter);
    }
}

void TATreeWidget::updateParentItemClicked(QTreeWidgetItem *parent)
{
    if (parent == NULL)
    {
        return;
    }

    // count of checkd on childs
    int selectedCount = 0;
    int selPartially = 0;
    int childCount = parent->childCount();
    for (int i = 0; i < childCount; i++)
    {
        QTreeWidgetItem *childItem = parent->child(i);
        Qt::CheckState state = childItem->checkState(0);
        if (state == Qt::Checked)
        {
            selectedCount++;
        }
        else if(state == Qt::PartiallyChecked)
        {
            selPartially++;
        }
    }

    if (selectedCount <= 0 && selPartially <= 0)
    {
        parent->setCheckState(0, Qt::Unchecked);
    }else if((selectedCount > 0 && selectedCount < childCount) ||
             selPartially > 0)
    {
        //Partially Checked
        parent->setCheckState(0, Qt::PartiallyChecked);
    }else if(selectedCount == childCount)
    {
        //Checked
        parent->setCheckState(0, Qt::Checked);
    }

    updateParentItemClicked(parent->parent());
}

bool TATreeWidget::addUnitItems(const QString &who, const QJsonObject &objData)
{
    QString strDesc = objData["desc"].toString();
    QString strPath = objData["path"].toString();

    QStringList lstName = strPath.split('/');
    int n = lstName.size();
    if(n == 2)  // Test project
    {
        m_lbTitle->setText(who);
        QStringList lstTP;
        lstTP << who << strPath << strDesc;
        QTreeWidgetItem* item = NULL;
        lstTP << QString() << QString() << QString() << QString();
        item = new QTreeWidgetItem(m_twTestPrj, lstTP);
        if(item) {
            item->setCheckState(0, Qt::Checked);
        }
        else {
            return false;
        }
    }
    else if( n == 3) // Test suite
    {
        QStringList lstTP;
        lstTP << lstName.at(2) << strPath << strDesc;

        QTreeWidgetItem* parentItem = m_twTestPrj->topLevelItem(0);
        if(parentItem) {
            QTreeWidgetItem* item = NULL;
            lstTP << QString() << QString() << QString() << QString();
            item = new QTreeWidgetItem(parentItem, lstTP);
            if(item) {
                item->setCheckState(0, Qt::Checked);
                parentItem->addChild(item);
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else if( n == 4) // Test case
    {
        QStringList lstTP;
        lstTP << lstName.at(3) << strPath << strDesc;

        QTreeWidgetItem* parentItem = NULL;
        QTreeWidgetItem* rootItem = m_twTestPrj->topLevelItem(0);
        for(int i = 0; i < rootItem->childCount(); i++)
        {
            if(rootItem->child(i)->text(TA_COLUMN_UNIT_PATH) ==
                    "/" + lstName.at(1) + "/" + lstName.at(2))
            {
                parentItem = rootItem->child(i);
                break;
            }
        }

        if(parentItem)
        {
            QTreeWidgetItem* item = NULL;
            lstTP << QString() << QString() << QString() << QString();
            item = new QTreeWidgetItem(parentItem, lstTP);
            if(item) {
                item->setCheckState(0, Qt::Checked);
                parentItem->addChild(item);
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    updateEmptyState();
    return true;
}

QStringList TATreeWidget::seletedPrj()
{
    QStringList lstSel;
    const int topCnt = m_twTestPrj->topLevelItemCount();
    for(int i = 0; i < topCnt; i++) {
        QTreeWidgetItem* parentItem = m_twTestPrj->topLevelItem(i);
        if(NULL == parentItem)
            continue;
        if(parentItem->checkState(0) != Qt::Unchecked) {
            lstSel.append(parentItem->text(0));
        }
    }

    return lstSel;
}

int TATreeWidget::seletedUnitItems(QTemporaryFile* pFile, bool bCheckEnable)
{
    int nSelectedCnt = 0;
    QTextStream in(pFile);
    QTreeWidgetItemIterator itorItem(m_twTestPrj->topLevelItem(0));

    while(*itorItem) {
        QTreeWidgetItem* item = *itorItem;

        // path of test unit with selected
        if(bCheckEnable || (item && (item->checkState(0) != Qt::Unchecked))) {
            QString line = item->text(TA_COLUMN_UNIT_PATH) + "\r\n";
            in << line;
            nSelectedCnt++;
        }
        ++itorItem;
    }

    return nSelectedCnt;
}

void TATreeWidget::clearPrjStatus()
{
    showTotalStatus(false, "", "");

    QTreeWidgetItem* parentItem = m_twTestPrj->topLevelItem(0);
    if(NULL == parentItem)
        return;

    QTreeWidgetItemIterator itorItem(parentItem);
    while(*itorItem) {
        QTreeWidgetItem* item = *itorItem;
        if(item) {
            // clear old data before testing
            item->setText(TA_COLUMN_TEST_STATUS, "");
            item->setText(TA_COLUMN_TEST_RST, "");
            item->setText(TA_COLUMN_TEST_STAND, "");
            item->setText(TA_COLUMN_START_TIME, "");
            item->setText(TA_COLUMN_SPEND_TIME, "");
        }
        ++itorItem;
    }
}

QString TATreeWidget::currentPrjStatus()
{
    QString strStatus("");
    QTreeWidgetItem* item = m_twTestPrj->topLevelItem(0);
    if(item)
        strStatus = item->text(TA_COLUMN_TEST_STATUS);
    return strStatus;
}

void TATreeWidget::refreshExpandAll()
{
    m_twTestPrj->expandAll();
}

void TATreeWidget::spreadUnitItems()
{
    QTreeWidgetItemIterator itor(m_twTestPrj);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(item->parent() != NULL) {
            item->setExpanded(true);
        }
        ++itor;
    }
}

void TATreeWidget::shrinkUnitItems()
{
    QTreeWidgetItemIterator itor(m_twTestPrj);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(item->parent() != NULL) {
            item->setExpanded(false);
        }
        ++itor;
    }
}

void TATreeWidget::startItemsData(const QJsonObject& objData)
{
    QTreeWidgetItem* parentItem = m_twTestPrj->topLevelItem(0);
    if(NULL == parentItem)
        return;

    QTreeWidgetItemIterator itor(parentItem);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(NULL == item)
            break;
        QString strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_STATUS, objData["rst"].toString());
            item->setText(TA_COLUMN_START_TIME, objData["start"].toString());

            SALabel* label = new SALabel(m_twTestPrj);
            label->StartMovie(":/running.gif");
            label->setAlignment(Qt::AlignCenter);
            m_twTestPrj->setItemWidget(item, TA_COLUMN_TEST_STATUS, label);
        }
        ++itor;
    }
}

void TATreeWidget::updateItemsData(const QJsonObject& objData)
{
    QTreeWidgetItem* parentItem = m_twTestPrj->topLevelItem(0);
    if(NULL == parentItem)
        return;

    QTreeWidgetItemIterator itor(parentItem);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(NULL == item)
            break;

        QString strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_STATUS, objData["rst"].toString());
            item->setText(TA_COLUMN_SPEND_TIME, objData["spend"].toString());

            m_twTestPrj->setItemWidget(item, TA_COLUMN_TEST_STATUS, NULL);
        }
        ++itor;
    }
}

void TATreeWidget::detailItemsData(const QJsonObject& objData)
{
    QTreeWidgetItem* parentItem = m_twTestPrj->topLevelItem(0);
    if(NULL == parentItem)
        return;

    QTreeWidgetItemIterator itor(parentItem);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(NULL == item)
            break;

        QString strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_RST, objData["name"].toString() + "=" +
                    objData["value"].toString());
            item->setText(TA_COLUMN_TEST_STAND, objData["standard"].toString());
        }
        ++itor;
    }
}
