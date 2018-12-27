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

#ifndef TESTUNITSMODEL_H
#define TESTUNITSMODEL_H

#include <QAbstractItemModel>

class TestUnitItem;

class TestUnitsModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    TestUnitsModel(const QStringList &headers, QObject *parent = 0);
    ~TestUnitsModel();

    bool SetPrjData(const QVariant& data);
    QVariant GetPrjData();

    QVariant data(const QModelIndex &index, int role) const Q_DECL_OVERRIDE;
    QVariant headerData(int section, Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    QModelIndex parent(const QModelIndex &index) const Q_DECL_OVERRIDE;

    int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    int columnCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;

    Qt::ItemFlags flags(const QModelIndex &index) const Q_DECL_OVERRIDE;
    bool setData(const QModelIndex &index, const QVariant &value,
                 int role = Qt::EditRole) Q_DECL_OVERRIDE;
    bool setHeaderData(int section, Qt::Orientation orientation,
                       const QVariant &value, int role = Qt::EditRole) Q_DECL_OVERRIDE;
    bool insertColumns(int position, int columns,
                       const QModelIndex &parent = QModelIndex()) Q_DECL_OVERRIDE;
    bool removeColumns(int position, int columns,
                       const QModelIndex &parent = QModelIndex()) Q_DECL_OVERRIDE;
    bool insertRows(int position, int rows,
                    const QModelIndex &parent = QModelIndex()) Q_DECL_OVERRIDE;
    bool removeRows(int position, int rows,
                    const QModelIndex &parent = QModelIndex()) Q_DECL_OVERRIDE;
    bool moveRows(const QModelIndex &sourceParent, int sourceRow, int count,
                  const QModelIndex &destinationParent, int destinationChild) Q_DECL_OVERRIDE;

    // for Test Project
    QVariant getDataForColumn(const QModelIndex &index, int column);
    QStringList GetParaApis();
    QVariantList GetPublicPara();
    void SetPublicPara(const QVariantList& lstPara);
    QVariantList GetPublicModels();
    void SetPublicModels(const QVariantList& lstModel);

private:
    QVariantMap tranDataToVariant(TestUnitItem* item);
    TestUnitItem *getItem(const QModelIndex &index) const;
    QVector<QVariant> getDataFromVM(const QVariantMap& vmData, bool isKey);
    TestUnitItem* m_rootUnit;
    QVariant        m_vaPrj;
};

#endif // TESTUNITSMODEL_H
