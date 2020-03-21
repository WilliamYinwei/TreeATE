/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/
///
/// @project       TreeATE
/// @brief         TestUnitItem class for TestUnitModel
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "testunititem.h"

#include <QStringList>
#include <QDebug>

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
    QT_TRY {
        if (position < 0 || position + count > m_childItems.size())
            return false;

        for (int row = 0; row < count; ++row) {
            TestUnitItem* item = m_childItems.takeAt(position);
            if(item) {
                item->removeChildren(0, item->childCount());
                //delete item;
            }
        }
    }
    QT_CATCH(...)
    {
        qDebug() << "exception remove Children of the TestUnitItem";
    }
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
    QT_TRY {
        if (column < 0 || column >= m_itemData.size())
            return false;

        m_itemData[column] = value;
    }
    QT_CATCH(...)
    {
        qDebug() << "exception: " + QString::number(column);
    }

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
