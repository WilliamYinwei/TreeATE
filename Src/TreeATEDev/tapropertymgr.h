///
/// @project       TreeATE Dev
/// @brief         Property manager for different model
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
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
class QMenu;
class QCheckBox;
class QPushButton;
class TAPrjCfgWidget;

#ifdef WIN32
#define TA_TEST_COM_SUFFIX  "dll"
#else
#define TA_TEST_COM_SUFFIX  "so"
#endif

class TAPropertyMgrWidget : public QDockWidget
{
    Q_OBJECT
public:
    explicit TAPropertyMgrWidget(QWidget *parent = 0);
    ~TAPropertyMgrWidget();

    void SetProjectPath(const QString& strPrjPath);
    void SetPublicPara(const QVariantList& vlPara);
    QVariantList GetPublicPara();
    void SetCurrentView(const QString& strFileName);
    void SetModels(const QVariantList& vlModels);
    QVariantList GetModels();
    QStringList GetAPIsFromModels();
    void SetPrjVersion(const QString& strVer);
    QString GetPrjVersion();
    bool SavePrjCfgFile();
    void RenameFilePrj(const QString& strNewName);
    QString GetPrjName();

signals:
    void propertyIsChanged();

private slots:
    void MyDataChanged();
    void on_models_customContextMenuRequested(const QPoint&);
    void on_parameter_customContextMenuRequested(const QPoint&);
    void on_actionPara_Insert_clicked();
    void on_actionModel_Insert_clicked();
    void on_actionPara_Remove_clicked();
    void on_actionModel_Remove_clicked();
    void on_popMenuModel_Show();
    void on_popMenuPara_Show();
    void on_checkBox_allowEdit(bool bChk);
    void on_saveButton_clicked(bool bClicked);
    void on_propertyIsChanged();

protected:
    QStringList OpenDllFunc(const QString& strFile, bool bRet = true);
    bool OpenDllModel(const QString& strFile);
    void OpenScriptFile(const QString& strFile);
    bool OpenPrjCfgFile(const QString& strFile);

private:
    QString             m_strPrjPath;
    QString             m_strPrjName;
    QString             m_strCurrName;
    QListWidget*        m_lvFunction;   // function list of the test component
    QLabel*             m_labelImage;
    QTableView*         m_tvPublicPara; // This View is the test project's public parameter
    QTableView*         m_tvModels;     // test component view
    QStandardItemModel* m_tmPublicPara; // public parameter's model
    QStandardItemModel* m_tmModels;     // test component model
    TaScriptEdit*       m_scriptEdit;
    QStringList         m_lstApis;
    QSplitter*          m_splitter;
    QMenu*              m_popMenuModel;
    QMenu*              m_popMenuPara;
    QAction*            m_actionModelInsert;
    QAction*            m_actionModelRemove;
    QAction*            m_actionParaInsert;
    QAction*            m_actionParaRemove;
    QCheckBox*          m_cbOpenEdit;
    QPushButton*        m_saveButton;
    QMovie*             m_moveImage;
    QLineEdit*          m_leVersion;
    TAPrjCfgWidget*     m_prjCfgWidget;
};

#endif // TAPROPERTYMGR_H
