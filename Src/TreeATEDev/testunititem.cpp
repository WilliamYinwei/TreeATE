///
/// @project       TreeATE
/// @brief         TestUnitItem class for TestUnitModel
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#include "testunititem.h"

#include <QStringList>

TestUnitItem::TestUnitItem(const QVector<QVariant> &data, TestUnitItem *parent)
{
    m_parentItem = parent;
    m_itemData = data;
}


TestUnitItem::~TestUnitItem()
{
    qDeleteAll(m_childItems);
}

TestUnitItem *TestUnitItem::child(int number)
{
    return m_childItems.value(number);
}

int TestUnitItem::childCount() const
{
    return m_childItems.count();
}

int TestUnitItem::childNumber() const
{
    if (m_parentItem)
        return m_parentItem->m_childItems.indexOf(const_cast<TestUnitItem*>(this));

    return 0;
}

int TestUnitItem::columnCount() const
{
    return m_itemData.count();
}

QVariant TestUnitItem::data(int column) const
{
    return m_itemData.value(column);
}

bool TestUnitItem::insertChildren(int position, int count, int columns)
{
    if (position < 0 || position > m_childItems.size())
        return false;

    for (int row = 0; row < count; ++row) {
        QVector<QVariant> data(columns);
        TestUnitItem *item = new TestUnitItem(data, this);
        m_childItems.insert(position, item);
    }

    return true;
}

bool TestUnitItem::insertColumns(int position, int columns)
{
    if (position < 0 || position > m_itemData.size())
        return false;

    for (int column = 0; column < columns; ++column)
        m_itemData.insert(position, QVariant());

    foreach (TestUnitItem *child, m_childItems)
        child->insertColumns(position, columns);

    return true;
}

TestUnitItem *TestUnitItem::parent()
{
    return m_parentItem;
}

bool TestUnitItem::removeChildren(int position, int count)
{
    if (position < 0 || position + count > m_childItems.size())
        return false;

    for (int row = 0; row < count; ++row)
        delete m_childItems.takeAt(position);

    return true;
}

bool TestUnitItem::removeColumns(int position, int columns)
{
    if (position < 0 || position + columns > m_itemData.size())
        return false;

    for (int column = 0; column < columns; ++column)
        m_itemData.remove(position);

    foreach (TestUnitItem *child, m_childItems)
        child->removeColumns(position, columns);

    return true;
}

bool TestUnitItem::setData(int column, const QVariant &value)
{
    if (column < 0 || column >= m_itemData.size())
        return false;

    m_itemData[column] = value;
    return true;
}

bool TestUnitItem::moveRow(int from, int to)
{
    if(from < 0 || from >= m_childItems.count())
        return false;
    if(to < 0 || to >= m_childItems.count())
        return false;

    m_childItems.move(from, to);
    return true;
}
