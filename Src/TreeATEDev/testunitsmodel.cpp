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
/// @brief         Test Unit's model for QTreeView
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#include "testunitsmodel.h"
#include "testunititem.h"
#include "tacsvparser.h"

TestUnitsModel::TestUnitsModel(const QStringList &headers, QObject *parent)
        : QAbstractItemModel(parent)
{
    QVector<QVariant> rootData;
    foreach (QString header, headers)
        rootData << header;

    m_rootUnit = new TestUnitItem(rootData);
}

TestUnitsModel::~TestUnitsModel()
{
    if(m_rootUnit)
        delete m_rootUnit;
}


int TestUnitsModel::columnCount(const QModelIndex &) const
{
    if(m_rootUnit)
        return m_rootUnit->columnCount();
    return 0;
}

QVariant TestUnitsModel::getDataForColumn(const QModelIndex &index, int column)
{
    TestUnitItem* item = getItem(index);
    if(item)
        return item->data(column);
    return QVariant();
}

QVariant TestUnitsModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role != Qt::DisplayRole && role != Qt::EditRole)
        return QVariant();

    TestUnitItem *item = getItem(index);

    return item->data(index.column());
}


Qt::ItemFlags TestUnitsModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;

    return Qt::ItemIsEditable | QAbstractItemModel::flags(index);
}

TestUnitItem *TestUnitsModel::getItem(const QModelIndex &index) const
{
    if (index.isValid()) {
        TestUnitItem *item = static_cast<TestUnitItem*>(index.internalPointer());
        if (item)
            return item;
    }
    return m_rootUnit;
}

QVariant TestUnitsModel::headerData(int section, Qt::Orientation orientation,
                               int role) const
{
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return m_rootUnit->data(section);

    return QVariant();
}


QModelIndex TestUnitsModel::index(int row, int column, const QModelIndex &parent) const
{
    if (parent.isValid() && parent.column() != 0)
        return QModelIndex();

    TestUnitItem *parentItem = getItem(parent);

    TestUnitItem *childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    else
        return QModelIndex();
}

bool TestUnitsModel::insertColumns(int position, int columns, const QModelIndex &parent)
{
    if(NULL == m_rootUnit)
        return false;

    bool success;

    beginInsertColumns(parent, position, position + columns - 1);
    success = m_rootUnit->insertColumns(position, columns);
    endInsertColumns();

    return success;
}

bool TestUnitsModel::insertRows(int position, int rows, const QModelIndex &parent)
{
    TestUnitItem *parentItem = getItem(parent);
    if(NULL == parentItem || NULL == m_rootUnit)
        return false;

    bool success;

    beginInsertRows(parent, position, position + rows - 1);
    success = parentItem->insertChildren(position, rows, m_rootUnit->columnCount());
    endInsertRows();

    return success;
}

QModelIndex TestUnitsModel::parent(const QModelIndex &index) const
{
    if (!index.isValid())
        return QModelIndex();

    TestUnitItem *childItem = getItem(index);
    TestUnitItem *parentItem = childItem->parent();

    if (parentItem == m_rootUnit)
        return QModelIndex();

    return createIndex(parentItem->childNumber(), 0, parentItem);
}

bool TestUnitsModel::removeColumns(int position, int columns, const QModelIndex &parent)
{
    bool success;

    beginRemoveColumns(parent, position, position + columns - 1);
    success = m_rootUnit->removeColumns(position, columns);
    endRemoveColumns();

    if (m_rootUnit->columnCount() == 0)
        removeRows(0, rowCount());

    return success;
}

bool TestUnitsModel::removeRows(int position, int rows, const QModelIndex &parent)
{
    TestUnitItem *parentItem = getItem(parent);
    if(NULL == parentItem)
        return false;

    bool success = true;

    beginRemoveRows(parent, position, position + rows - 1);
    success = parentItem->removeChildren(position, rows);
    endRemoveRows();

    return success;
}

bool TestUnitsModel::moveRows(const QModelIndex &sourceParent, int sourceRow, int count,
              const QModelIndex &destinationParent, int destinationChild)
{
    TestUnitItem *parentItem = getItem(sourceParent);
    if(NULL == parentItem)
        return false;

    bool success = true;
    int dest = (destinationChild - sourceRow > 0)
            ? destinationChild + 1 : destinationChild;
    beginMoveRows(sourceParent, sourceRow, sourceRow + count - 1,
                  destinationParent, dest);
    success = parentItem->moveRow(sourceRow, destinationChild);
    endMoveRows();
    return success;
}

int TestUnitsModel::rowCount(const QModelIndex &parent) const
{
    TestUnitItem *parentItem = getItem(parent);
    if(NULL == parentItem)
        return 0;

    return parentItem->childCount();
}

bool TestUnitsModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (role != Qt::EditRole)
        return false;

    TestUnitItem *item = getItem(index);
    bool result = item->setData(index.column(), value);

    if (result)
        emit dataChanged(index, index);

    return result;
}

bool TestUnitsModel::setHeaderData(int section, Qt::Orientation orientation,
                              const QVariant &value, int role)
{
    if (role != Qt::EditRole || orientation != Qt::Horizontal)
        return false;

    bool result = m_rootUnit->setData(section, value);

    if (result)
        emit headerDataChanged(orientation, section, section);

    return result;
}

QVector<QVariant> TestUnitsModel::getDataFromVM(const QVariantMap& vmData, bool isHeader)
{
    QVector<QVariant> columnData;
    if(!isHeader) {
        columnData << vmData["Name"].toString()
                   << vmData["Desc"].toString();
    }

    if(vmData["Parameter"].isValid()) {
         QVariantMap vmPara = vmData["Parameter"].toMap();
         for(auto itor = vmPara.begin(); itor != vmPara.end(); ++itor)
         {
             if(isHeader)
                 columnData << itor.key();
             else
                 columnData << itor.value();
         }
    }

    return columnData;
}

bool TestUnitsModel::SetPrjData(const QVariant& data)
{
    if(NULL == m_rootUnit)
        return false;

    blockSignals(true); // block begin

    m_rootUnit->removeChildren(0, 1); // only one
    if(m_rootUnit->columnCount() > 2) {
        m_rootUnit->removeColumns(2, m_rootUnit->columnCount() - 2);
    }

    blockSignals(false); // block end

    QVariantMap vmPrj = data.toMap();
    m_vaPrj = vmPrj;
    QVector<QVariant> headerData = getDataFromVM(vmPrj, true);
    int oldCnt = m_rootUnit->columnCount();
    m_rootUnit->insertColumns(m_rootUnit->columnCount(), headerData.count());
    for (int column = 0; column < headerData.size(); ++column) {
        setHeaderData(oldCnt + column, Qt::Horizontal, headerData[column]);
    }

    // Test Project data
    QVector<QVariant> prjData = getDataFromVM(vmPrj, false);
    int nCnt = m_rootUnit->childCount();
    m_rootUnit->insertChildren(nCnt, 1, m_rootUnit->columnCount());
    TestUnitItem* item = m_rootUnit->child(nCnt);
    for(int i = 0; i < prjData.size(); ++i) {
       item->setData(i, prjData[i]);
    }

    // Test Suite data
    QVariantList vlSuite = vmPrj["TestSuite"].toList();
    for(int x = 0; x < vlSuite.count(); ++x) {
        QVariantMap vmSuite = vlSuite.at(x).toMap();

        QVector<QVariant> suiteData = getDataFromVM(vmSuite, false);
        nCnt = item->childCount();
        item->insertChildren(nCnt, 1, m_rootUnit->columnCount());
        TestUnitItem* itemSuite = item->child(nCnt);
        for(int i = 0; i < suiteData.size(); ++i) {
            itemSuite->setData(i, suiteData[i]);
        }

        // Test Case data
        QVariantList vlCase = vmSuite["TestCase"].toList();
        for(int y = 0; y < vlCase.count(); ++y) {
            QVariantMap vmCase = vlCase.at(y).toMap();

            QVector<QVariant> caseData = getDataFromVM(vmCase, false);
            nCnt = itemSuite->childCount();
            itemSuite->insertChildren(nCnt, 1, m_rootUnit->columnCount());
            TestUnitItem* itemCase = itemSuite->child(nCnt);
            for(int j = 0; j < caseData.size(); ++j) {
                itemCase->setData(j, caseData[j]);
            }
        }
    }

    return true;
}

QVariant TestUnitsModel::GetPrjData()
{
    if(NULL == m_rootUnit)
        return m_vaPrj;

    QVariantMap vmPrj = m_vaPrj.toMap();

    // Test Project data
    for(int i = 0; i < m_rootUnit->childCount(); i++)
    {
        TestUnitItem* pPrjItem = m_rootUnit->child(i);
        if(NULL == pPrjItem)
            continue;
        vmPrj.insert("Name", pPrjItem->data(0));
        vmPrj.insert("Desc", pPrjItem->data(1));
        vmPrj.insert("Parameter", tranDataToVariant(pPrjItem));

        QVariantList vlSuite;
        for(int j = 0; j < pPrjItem->childCount(); j++)
        {
            // Test Suite data
            TestUnitItem* pSuiteItem = pPrjItem->child(j);
            if(NULL == pSuiteItem)
                continue;

            QVariantMap vmSuite;
            vmSuite.insert("Name", pSuiteItem->data(0));
            vmSuite.insert("Desc", pSuiteItem->data(1));
            vmSuite.insert("Parameter", tranDataToVariant(pSuiteItem));

            QVariantList vlCase;
            for(int k = 0; k < pSuiteItem->childCount(); k++)
            {
                // Test Case data
                TestUnitItem* pCaseItem = pSuiteItem->child(k);
                if(NULL == pCaseItem)
                    continue;

                QVariantMap vmCase;
                vmCase.insert("Name", pCaseItem->data(0));
                vmCase.insert("Desc", pCaseItem->data(1));
                vmCase.insert("Parameter", tranDataToVariant(pCaseItem));

                vlCase.append(vmCase);
            }

            vmSuite.insert("TestCase", vlCase);
            vlSuite.append(vmSuite);
        }

        vmPrj.insert("TestSuite", vlSuite);
    }

    m_vaPrj = vmPrj;

    return m_vaPrj;
}

QVariantMap TestUnitsModel::tranDataToVariant(TestUnitItem* item)
{
    QVariantMap vmPara;
    if(NULL != item) {
        for(int i = 2; i < item->columnCount(); i++)
        {
            vmPara.insert(m_rootUnit->data(i).toString(), item->data(i));
        }
    }

    return vmPara;
}

QStringList TestUnitsModel::GetParaApis()
{
    QStringList apis;
    QVariantMap vmPrj = m_vaPrj.toMap();
    QVariantMap vmPrjPara = vmPrj["Parameter"].toMap();
    for(QVariantMap::iterator itor = vmPrjPara.begin();
        itor != vmPrjPara.end(); ++itor) {
        apis << itor.key();
    }

    QVariantMap vmPrjPublic = vmPrj["Public"].toMap();
    QVariantList vlPublicPara = vmPrjPublic["Parameter"].toList();
    for(int i = 0; i < vlPublicPara.count(); i++) {
        QVariantMap vmPara = vlPublicPara.at(i).toMap();
        apis << vmPara["Name"].toString();
    }
    return apis;
}

QVariantList TestUnitsModel::GetPublicPara()
{
    QVariantMap vmPrj = m_vaPrj.toMap();
    QVariantMap vmPrjPublic = vmPrj["Public"].toMap();
    return vmPrjPublic["Parameter"].toList();
}

void TestUnitsModel::SetPublicPara(const QVariantList& lstPara)
{
    QVariantMap vmPrj = m_vaPrj.toMap();
    QVariantMap vmPrjPublic = vmPrj["Public"].toMap();
    vmPrjPublic.insert("Parameter", lstPara);
    vmPrj.insert("Public", vmPrjPublic);
    m_vaPrj = vmPrj;
}

QVariantList TestUnitsModel::GetPublicModels()
{
    QVariantMap vmPrj = m_vaPrj.toMap();
    QVariantMap vmPrjPublic = vmPrj["Public"].toMap();
    return vmPrjPublic["Models"].toList();
}

void TestUnitsModel::SetPublicModels(const QVariantList& lstModel)
{
    QVariantMap vmPrj = m_vaPrj.toMap();
    QVariantMap vmPrjPublic = vmPrj["Public"].toMap();
    vmPrjPublic.insert("Models", lstModel);
    vmPrj.insert("Public", vmPrjPublic);
    m_vaPrj = vmPrj;
}

void TestUnitsModel::SetPrjVersion(const QString &strVer)
{
    QVariantMap vmPrj = m_vaPrj.toMap();
    vmPrj.insert("Ver", strVer);
    m_vaPrj = vmPrj;
}

QString TestUnitsModel::GetPrjVersion()
{
    QVariantMap vmPrj = m_vaPrj.toMap();
    return vmPrj["Ver"].toString();
}

bool TestUnitsModel::ExportCSVFile(const QString& strFile, QString& err)
{
    TACsvParser csvFile(strFile);

    QList<TestUnitItem*> parents;
    QList<int> indentations;
    parents << m_rootUnit;
    indentations << 0;

    int row = 0;

    while(!parents.isEmpty()) {
        TestUnitItem* item = parents.first();
        parents.pop_front();
        int indent = indentations.first();
        indentations.pop_front();
        QByteArray baSpace;
        if(NULL == item)
            continue;

        const int childCnt = item->childCount();
        for(int i = childCnt - 1; i >= 0; i--) {
            parents.push_front(item->child(i));
            indentations.push_front(indent + 1);
        }

        // for item name
        QString itemName = QString(baSpace.append(indent, ' ')) + item->data(0).toString();
        csvFile.appendData(row, itemName);
        for(int column = 1; column < item->columnCount(); ++column)
            csvFile.appendData(row, item->data(column));

        row++;
    }

    if(!csvFile.saveFile()) {
        err = csvFile.errorString();
        return false;
    }

    return true;
}

bool TestUnitsModel::ImportCSVFile(const QString& strFile, QString& err)
{
    TACsvParser csvFile(strFile);
    if(!csvFile.parserFile()) {
        err = csvFile.errorString();
        return false;
    }

    QList<TestUnitItem*> parents;
    QList<int> indentations;
    parents << m_rootUnit;
    indentations << 0;

    int row = 1;

    blockSignals(true); // block begin
    m_rootUnit->removeChildren(0, 1); // only one
    blockSignals(false); // block end

    while (row < csvFile.rowCount()) {
        int position = 0;
        QString itemName = csvFile.data(row, 0);
        while (position < itemName.length()) {
            if (itemName.at(position) != ' ')
                break;
            ++position;
        }

        itemName = itemName.trimmed();

        if (!itemName.isEmpty()) {
            if (position > indentations.last()) {
                if (parents.last()->childCount() > 0) {
                    parents << parents.last()->child(parents.last()->childCount()-1);
                    indentations << position;
                }
            } else {
                while (position < indentations.last() && parents.count() > 0) {
                    parents.pop_back();
                    indentations.pop_back();
                }
            }

            TestUnitItem *parent = parents.last();
            parent->insertChildren(parent->childCount(), 1, m_rootUnit->columnCount());
            for (int column = 0; column < csvFile.columnCount(row); ++column)
                parent->child(parent->childCount() - 1)->setData(column,
                                                                 csvFile.data(row, column).trimmed());
        }

        ++row;
    }

    return true;
}
