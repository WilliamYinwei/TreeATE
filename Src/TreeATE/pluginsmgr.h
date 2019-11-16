///
/// @brief         Plugins Manager
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///


#ifndef PLUGINSMGR_H
#define PLUGINSMGR_H

#include <QWidget>
#include <QThread>
#include <QLocalServer>
#include <QScriptEngine>
#include <QSharedPointer>


class MsgDispatchThread : public QThread
{
    Q_OBJECT
public:
    MsgDispatchThread(int socket);
    ~MsgDispatchThread();
    
signals:
    QString msgRecived(const QString& strCmd);

protected:
    void run();

private:
    int             m_socket;
};

class MsgDispatchSvr : public QLocalServer
{
    Q_OBJECT
public:
    MsgDispatchSvr(QObject* parent);
    ~MsgDispatchSvr();
    bool LoadPlugins(const QVariantList& lstPlugin,
                    const QString& strPath);
    QString GetLastError();

protected:
    void incomingConnection(quintptr socketDescriptor);

private:
    QObject*    m_pParent;
    QString     m_strLastErr;
};

class PluginsMgr : public QObject
{
    Q_OBJECT
public:
    PluginsMgr(QWidget* parent = 0);
    virtual ~PluginsMgr();

    bool StartMsgListen(const QVariantList& lstPlugin,
                    const QString& strPath);
    void UnloadPluginObj();
    QString GetLastError();
    void AddModelObj(QString strModelObj, QObject* pObj);

public slots:
    QString on_msg_process(const QString& strCmd);

private:
    MsgDispatchSvr* m_pMsgServer;
    QWidget*        m_pParent;
    QString         m_strLastErr;
    QScriptEngine   m_engine;
    QList<QObject*> m_lstObj;
};

#endif // PLUGINSMGR_H
