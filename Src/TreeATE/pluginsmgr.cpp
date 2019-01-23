///
/// @brief         Plugins Manger
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "pluginsmgr.h"
#include "talocalsocket.h"

#include <QLocalSocket>
#include <QLibrary>
#include <QFileInfo>
#include <QThread>
#include <QDebug>
#include <QWaitCondition>
#include <QMetaType>

QMutex g_mutex;

typedef void* (*CreateInst)(const void*);

////////////////////////////////////////////////////////////////
/// \brief MsgDispatchThread::MsgDispatchThread
/// \param socket
///
MsgDispatchThread::MsgDispatchThread(int socket)
{
    m_socket = socket;
}

void MsgDispatchThread::run()
{
    TALocalSocket objSocket;
    if(!objSocket.setSocketDescriptor(m_socket)) {
        qDebug() << objSocket.getLastError();
        return;
    }
    QStringList lstData;
    if(!objSocket.receiveFromClient(200, lstData)) {
        qDebug() << objSocket.getLastError();
        return;
    }

    foreach (QString cmd, lstData) {
        if(!objSocket.replyToClient(100)) {
            qDebug() << objSocket.getLastError();
            continue;
        }

        QString ret = msgRecived(cmd);
        qDebug() << "msgRecived return: " << ret;

        if(!objSocket.returnToClient(ret, 100)) {
            qDebug() << objSocket.getLastError();
        }
    }
}


///////////////////////////////////////////////////////////////
/// \brief MsgDispatchSvr::MsgDispatchSvr
///
MsgDispatchSvr::MsgDispatchSvr(QObject *parent)
{
    m_pParent = parent;
}

MsgDispatchSvr::~MsgDispatchSvr()
{

}

void MsgDispatchSvr::incomingConnection(quintptr socketDescriptor)
{
    MsgDispatchThread *thread = new MsgDispatchThread(socketDescriptor);
    // delete later when finished
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    connect(thread, SIGNAL(msgRecived(QString)),
            m_pParent, SLOT(on_msg_process(QString)), Qt::BlockingQueuedConnection);
    thread->start();
}

QString MsgDispatchSvr::GetLastError()
{
    return m_strLastErr;
}

///////////////////////////////////////////////////////////////
/// \brief PluginsMgr::PluginsMgr
/// \param parent
///
PluginsMgr::PluginsMgr(QWidget* parent) : m_engine(parent)
{
    m_pParent = parent;
    m_pMsgServer = new MsgDispatchSvr(this);
}

PluginsMgr::~PluginsMgr()
{
    if(m_pMsgServer) {
        m_pMsgServer->close();
        delete m_pMsgServer;
    }
}

QString PluginsMgr::GetLastError()
{
    return m_strLastErr;
}

void PluginsMgr::UnloadPluginObj()
{
    foreach(QObject* obj, m_lstObj) {
        if(obj) {
            delete obj;
        }
    }
    m_lstObj.clear();
}

bool PluginsMgr::StartMsgListen(const QVariantList& lstPlugin,
                            const QString& strPath)
{
    if(NULL == m_pMsgServer) {
        m_strLastErr = tr("MsgServer was not init.");
        return false;
    }

    UnloadPluginObj();


    QVariantList vlObj = lstPlugin;
    for(int i = 0; i < vlObj.count(); i++)
    {
        QVariantMap vmModel = vlObj.at(i).toMap();
        QString strModelObj = vmModel["Name"].toString();

        QString strDllFile = vmModel["Com"].toString();
        QFileInfo fInfo(strDllFile);
        if(fInfo.suffix().compare("dll", Qt::CaseInsensitive) != 0)
            continue;

        strDllFile = strPath + "/libs/" + strDllFile;

        QLibrary myLib(strDllFile);
        if(!myLib.load()) {
            m_strLastErr = tr("Failed to load the ") + strDllFile;
            return false;
        }

        CreateInst myFunction = (CreateInst) myLib.resolve("CreateGuiInst");
        if (NULL == myFunction)
        {
            m_strLastErr = tr("Failed to resolve the ") + strDllFile;
            return false;
        }

        QObject* pObj = (QObject*)myFunction(m_pParent);
        if(NULL == pObj)
        {
            m_strLastErr = tr("Failed to create the instance.");
            return false;
        }

        m_lstObj.append(pObj);
        QScriptValue scriptObj = m_engine.newQObject(pObj);
        m_engine.globalObject().setProperty(strModelObj, scriptObj);
    }

    if(!m_pMsgServer->isListening()) {
        QLocalServer::removeServer(TA_LOCAL_SERVER_NAME);
        m_pMsgServer->listen(TA_LOCAL_SERVER_NAME);
    }
    return true;
}

QString PluginsMgr::on_msg_process(const QString& strCmd)
{
    QString script = "(function() {" + strCmd + "})";
    qDebug() << "Msg Process: " << script;
    QScriptValue func = m_engine.evaluate(script);

    QScriptValue ret = func.call(QScriptValue());
    if (m_engine.hasUncaughtException())
    {
        int line = m_engine.uncaughtExceptionLineNumber();
        m_strLastErr = tr("Script exception at line(%1):%2")
                .arg(QString::number(line))
                .arg(ret.toString());
        qDebug() << m_strLastErr;
        m_engine.clearExceptions();
    }

    return ret.toString();
}
