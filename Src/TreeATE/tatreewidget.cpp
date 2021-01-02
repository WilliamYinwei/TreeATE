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

#include "tatreewidget.h"
#include "statusdelegate.h"

TATreeWidget::TATreeWidget(QWidget *parent):QTreeWidget(parent)
{
    setColumnCount(TA_COLUMN_SPEND_TIME + 1);
    QTreeWidgetItem* itemHeader = headerItem();
    itemHeader->setText(TA_COLUMN_UNIT_NAME, tr("Name"));
    itemHeader->setText(TA_COLUMN_UNIT_PATH, tr("Path"));
    itemHeader->setText(TA_COLUMN_UNIT_DESC, tr("Description"));
    itemHeader->setText(TA_COLUMN_TEST_STATUS, tr("Status"));
    itemHeader->setText(TA_COLUMN_TEST_RST, tr("Result"));
    itemHeader->setText(TA_COLUMN_TEST_STAND, tr("Standard"));
    itemHeader->setText(TA_COLUMN_START_TIME, tr("Start Time"));
    itemHeader->setText(TA_COLUMN_SPEND_TIME, tr("Elapsed Time"));

    header()->setSectionResizeMode(QHeaderView::ResizeToContents);

    hideColumn(TA_COLUMN_UNIT_PATH);
    setContextMenuPolicy(Qt::CustomContextMenu);
    setItemDelegateForColumn(TA_COLUMN_TEST_STATUS, new StatusDelegate(parent));

    connect(this, SIGNAL(itemClicked(QTreeWidgetItem*,int)), SLOT(on_itemClicked(QTreeWidgetItem*,int)));
    connect(this, SIGNAL(itemChanged(QTreeWidgetItem*,int)), SLOT(on_itemChanged(QTreeWidgetItem*,int)));    
}

TATreeWidget::~TATreeWidget()
{

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
        scrollTo(indexFromItem(item, column), QAbstractItemView::PositionAtCenter);
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
        QStringList lstTP;
        lstTP << who << strPath << strDesc;
        QTreeWidgetItem* item = NULL;
        lstTP << tr("") << tr("") << tr("") << tr("");
        item = new QTreeWidgetItem(this, lstTP);
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

        QTreeWidgetItem* parentItem = topLevelItem(0);
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
        QTreeWidgetItem* rootItem = topLevelItem(0);
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
    const int topCnt = topLevelItemCount();
    for(int i = 0; i < topCnt; i++) {
        QTreeWidgetItem* parentItem = topLevelItem(i);
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
    QTreeWidgetItemIterator itorItem(topLevelItem(0));

    while(*itorItem) {
        QTreeWidgetItem* item = *itorItem;

        // path of test unit with selected
        if(bCheckEnable || item && (item->checkState(0) != Qt::Unchecked)) {
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
    QTreeWidgetItem* parentItem = topLevelItem(0);
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
    QTreeWidgetItem* item = topLevelItem(0);
    if(item)
        strStatus = item->text(TA_COLUMN_TEST_STATUS);
    return strStatus;
}

void TATreeWidget::refreshExpandAll()
{    
    expandAll();
}

void TATreeWidget::spreadUnitItems()
{
    QTreeWidgetItemIterator itor(this);
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
    QTreeWidgetItemIterator itor(this);
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
    QTreeWidgetItem* parentItem = topLevelItem(0);
    if(NULL == parentItem)
        return;

    QTreeWidgetItemIterator itor(parentItem);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(NULL == item)
            break;
        QString& strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_STATUS, objData["rst"].toString());
            item->setText(TA_COLUMN_START_TIME, objData["start"].toString());

            SALabel* label = new SALabel(this);
            label->StartMovie(":/running.gif");
            label->setAlignment(Qt::AlignCenter);
            setItemWidget(item, TA_COLUMN_TEST_STATUS, label);
        }
        ++itor;
    }
}

void TATreeWidget::updateItemsData(const QJsonObject& objData)
{
    QTreeWidgetItem* parentItem = topLevelItem(0);
    if(NULL == parentItem)
        return;

    QTreeWidgetItemIterator itor(parentItem);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(NULL == item)
            break;

        QString& strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_STATUS, objData["rst"].toString());
            item->setText(TA_COLUMN_SPEND_TIME, objData["spend"].toString());

            setItemWidget(item, TA_COLUMN_TEST_STATUS, NULL);
        }
        ++itor;
    }
}

void TATreeWidget::detailItemsData(const QJsonObject& objData)
{
    QTreeWidgetItem* parentItem = topLevelItem(0);
    if(NULL == parentItem)
        return;

    QTreeWidgetItemIterator itor(parentItem);
    while(*itor) {
        QTreeWidgetItem* item = *itor;
        if(NULL == item)
            break;

        QString& strPath = item->text(TA_COLUMN_UNIT_PATH);   // text(1) is path of test unit
        if(strPath.compare(objData["path"].toString(), Qt::CaseInsensitive) == 0) {
            item->setText(TA_COLUMN_TEST_RST, objData["name"].toString() + "=" +
                    objData["value"].toString());
            item->setText(TA_COLUMN_TEST_STAND, objData["standard"].toString());
        }
        ++itor;
    }
}
