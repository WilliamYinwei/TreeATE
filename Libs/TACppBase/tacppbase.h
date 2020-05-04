///
/// @project       TreeATE
/// @brief         This is test item base class for cpp language
/// @author        David Yin  2020-05 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///
#ifndef TACPPBASE_H
#define TACPPBASE_H
#include <QObject>
#include <QMap>

class TACppBase : public QObject
{
    Q_OBJECT
public:
    TACppBase();

public slots:
    void addModel(const QString &strObjName, QObject* obj);
    void addPublicPara(const QString& strName, const QString& strValue);
    void setLocalPara(const QString& strName, const QString& strValue);

protected:
    QObject* getObj(const QString& strName);
    QString getParaValue(const QString& strName);

    // __ate object
    bool OutputRst(const QString& strName, const QString& strValue, const QString& strStand);
    bool OutputRstEx(const QString& strName, const QString& strValue, const QString& strStand, int nRst);
    void OutputError(const QString& strOutput);
    QString GetProjectName();
    QString GetProjectVer();
    QString GetProjectBarcode();
    QString GetProjectDesc();
    QString GetWorkLine();
    QString GetWorkStation();
    QString GetUserName();
    int GetTotalRst();

    // __aterun object
    bool IsStopped();

private:
    QMap<QString, QObject*> m_models;
    QMap<QString, QString> m_publicPara;
    QMap<QString, QString> m_localPara;
    QObject* m_ate;
    QObject* m_ateRun;
};

#endif // TACPPBASE_H
