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

#ifndef TESTUNITITEM_H
#define TESTUNITITEM_H

#include <QVariant>
#include <QVector>

class TestUnitItem
{
public:
    TestUnitItem(const QVector<QVariant> &data, TestUnitItem *parent = 0);
    ~TestUnitItem();

    TestUnitItem *child(int number);
    int childCount() const;
    int columnCount() const;
    QVariant data(int column) const;
    bool insertChildren(int position, int count, int columns);
    bool insertColumns(int position, int columns);
    TestUnitItem *parent();
    bool removeChildren(int position, int count);
    bool removeColumns(int position, int columns);
    int childNumber() const;
    bool setData(int column, const QVariant &value);
    bool moveRow(int from, int to);

private:
    QList<TestUnitItem*> m_childItems;
    QVector<QVariant>   m_itemData;
    TestUnitItem *      m_parentItem;
};

#endif // TESTUNITITEM_H
