///
/// @project       TreeATE Dev
/// @brief         Test Project Configure (TPX) file Widget
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TAPRJCFGWIDGET_H
#define TAPRJCFGWIDGET_H

#include <QWidget>

#include <QVariantMap>

class QStandardItemModel;
class QLineEdit;
class QSpinBox;
class QCheckBox;
class QAbstractItemModel;

class TAPrjCfgWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TAPrjCfgWidget(QWidget *parent = 0);
    ~TAPrjCfgWidget();

    bool OpenPrjCfgFile(const QString& strFile);
    bool SavePrjCfgFile();
    QVariantList CopyPublicPara(const QString &strTPFileName);

    QAbstractItemModel* GetPluginModel();
    QAbstractItemModel* GetPrjInstModel();

signals:
    void dataHasChanged();

private slots:
    void on_dataHasChanged();

private:
    QStandardItemModel* m_guiPluginModel;
    QStandardItemModel* m_prjInstModel;
    QString             m_strFileName;
    QVariantMap         m_vmPrjCfg;
    QLineEdit*          m_editName;
    QLineEdit*          m_editDesc;
    QLineEdit*          m_editRegex;
    QSpinBox*           m_spinBoxCnt;
    QCheckBox*          m_stopCurrentChk;
    QCheckBox*          m_stopLoopChk;
};

#endif // TAPRJCFGWIDGET_H
