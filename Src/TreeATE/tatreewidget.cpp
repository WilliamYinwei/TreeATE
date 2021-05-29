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

#include <QTextStream>
#include <QHeaderView>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QFontMetrics>

#include "tatreewidget.h"
#include "statusdelegate.h"
#include "talabel.h"
#include "tacustomtreewidget.h"
#include "tastandmsgbox.h"

TATreeWidget::TATreeWidget(QWidget *parent):QWidget(parent)
{
    m_twTestPrj = new TAcustomTreeWidget(this);
    setContentsMargins(2, 2, 2, 2);
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

    m_twTestPrj->header()->setSectionResizeMode(QHeaderView::ResizeToContents);

    m_twTestPrj->hideColumn(TA_COLUMN_UNIT_PATH);
    m_twTestPrj->setContextMenuPolicy(Qt::CustomContextMenu);
    m_twTestPrj->setItemDelegateForColumn(TA_COLUMN_TEST_STATUS, new StatusDelegate(parent));

    connect(m_twTestPrj, SIGNAL(itemClicked(QTreeWidgetItem*,int)), SLOT(on_itemClicked(QTreeWidgetItem*,int)));
    connect(m_twTestPrj, SIGNAL(itemChanged(QTreeWidgetItem*,int)), SLOT(on_itemChanged(QTreeWidgetItem*,int)));
    connect(m_twTestPrj, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), SLOT(on_itemDoubleClicked(QTreeWidgetItem*,int)));

    QVBoxLayout* pVLayout = new QVBoxLayout(this);
    pVLayout->setDirection(QBoxLayout::TopToBottom);
    pVLayout->setContentsMargins(0, 0, 0, 0);
    m_lbTitle = new TALabel(this);
    m_lbTitle->setFixedHeight(TA_UUT_MAX_HEIGHT);
    m_lbTitle->setAlignment(Qt::AlignCenter);
    m_lbTitle->setStyleSheet("font: 24pt \"Arial\";");

    m_lbSN = new TALabel(this);
    m_lbSN->setFixedHeight(TA_UUT_SN_MAX_HEIGHT);
    m_lbSN->setAlignment(Qt::AlignCenter);
    m_lbSN->setStyleSheet("font: 14pt \"Arial\";");

    QVBoxLayout* pHVLayout = new QVBoxLayout(this);
    pHVLayout->setContentsMargins(6, 6, 6, 6);
    pHVLayout->addWidget(m_lbTitle);
    pHVLayout->addWidget(m_lbSN);

    pVLayout->addLayout(pHVLayout);

    // Tree View
    pVLayout->addWidget(m_twTestPrj);
    m_twTestPrj->show();

    // Mutil-Messagebox
    m_taMsgBox = new TAStandMsgBox(this);
    pVLayout->addWidget(m_taMsgBox);

    // Status window
    m_lbStatus = new TALabel(this);
    m_lbStatus->setAlignment(Qt::AlignCenter);
    pVLayout->addWidget(m_lbStatus);
    m_lbStatus->hide();

    // Spend time
    m_lbSpendTime = new TALabel(this);
    m_lbSpendTime->setAlignment(Qt::AlignCenter);
    m_lbSpendTime->setFixedHeight(24);
    m_lbSpendTime->setStyleSheet("font: 12pt \"Arial\";");
    m_lbSpendTime->setToolTip(tr("Spend time"));
    pVLayout->addWidget(m_lbSpendTime);
    m_lbSpendTime->hide();

    connect(m_lbStatus, SIGNAL(clicked()), this, SLOT(on_statusClicked()));
    connect(m_lbTitle, SIGNAL(clicked()), this, SLOT(on_statusClicked()));
    connect(m_lbSN, SIGNAL(clicked()), this, SLOT(on_statusClicked()));
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
    if(!status.isEmpty() && !style.isEmpty()) {
        m_lbStatus->setStyleSheet(style);
        m_lbStatus->setText(status);

        QTreeWidgetItem* item = m_twTestPrj->topLevelItem(0);
        if(item) {
            m_lbSpendTime->setText(item->text(TA_COLUMN_SPEND_TIME));
        }
    }
    if(bShow) {
        m_lbSpendTime->show();
        m_lbStatus->show();
        m_twTestPrj->hide();
    }
    else {
        m_lbSpendTime->hide();
        m_lbStatus->hide();
        m_twTestPrj->show();
    }
}

void TATreeWidget::on_statusClicked()
{
    showTotalStatus(m_lbStatus->isHidden(), "", "");
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
        lstTP << tr("") << tr("") << tr("") << tr("");
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
            lstTP << tr("") << tr("") << tr("") << tr("");
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
            lstTP << tr("") << tr("") << tr("") << tr("");
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
