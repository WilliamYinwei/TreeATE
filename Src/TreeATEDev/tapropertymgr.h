///
/// @project       TreeATE
/// @brief         Property manager for different model
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#ifndef TAPROPERTYMGR_H
#define TAPROPERTYMGR_H

#include <QDockWidget>

class QListWidget;
class QStandardItemModel;
class QTableView;
class QLabel;
class QLineEdit;
class TaScriptEdit;
class QSplitter;

class TAPropertyMgrWidget : public QDockWidget
{
    Q_OBJECT
public:
    explicit TAPropertyMgrWidget(QWidget *parent = 0);

    void SetProjectPath(const QString& strPrjPath);
    void SetPublicPara(const QVariantList& vlPara);
    QVariantList GetPublicPara();
    void SetCurrentView(const QString& strFileName);
    void SetModels(const QVariantList& vlModels);
    QVariantList GetModels();
    QStringList GetAPIsFromModels();
    bool SaveData();
    bool IsChanged();

private slots:
    void MyDataChanged();

protected:
    QStringList OpenDllFunc(const QString& strFile, bool bRet = true);
    bool OpenDllModel(const QString& strFile);
    void OpenScriptFile(const QString& strFile);

private:
    QString             m_strPrjPath;
    QString             m_strCurrName;
    QListWidget*        m_lvFunction;
    QLabel*             m_labelImage;
    QTableView*         m_tvPublicPara;
    QTableView*         m_tvModels;
    QStandardItemModel* m_tmPublicPara;
    QStandardItemModel* m_tmModels;
    TaScriptEdit*       m_scriptEdit;
    bool                m_bIsChanged;
    QStringList         m_lstApis;
    QSplitter*          m_splitter;
};

#endif // TAPROPERTYMGR_H
