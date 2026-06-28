///
/// @brief         Plugins Manger
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#include "tadefine.h"
#include "pluginsmgr.h"
#include "talocalsocket.h"
#include "tapluginloader.h"

#include <QLocalSocket>
#include <QLibrary>
#include <QFileInfo>
#include <QThread>
#include <QDebug>
#include <QWaitCondition>
#include <QMetaType>

////////////////////////////////////////////////////////////////
/// \brief MsgDispatchThread::MsgDispatchThread
/// \param socket
///
MsgDispatchThread::MsgDispatchThread(int socket)
{
    m_socket = socket;
}

MsgDispatchThread::~MsgDispatchThread()
{
    requestInterruption();
    quit();
    wait();
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
    UnloadPluginObj();
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
    TAPluginLoader::unloadAll(m_lstLibs);
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
        if(fInfo.suffix().compare(TA_TEST_COM_SUFFIX, Qt::CaseInsensitive) != 0)
            continue;

        strDllFile = strPath + "/libs/" + strDllFile;

        void* inst = TAPluginLoader::createInstance(strDllFile, "CreateGuiInst",
                                                    m_pParent, m_lstLibs, m_strLastErr);
        QObject* pObj = reinterpret_cast<QObject*>(inst);
        if(NULL == pObj)
        {
            if(m_strLastErr.isEmpty())
                m_strLastErr = tr("Failed to create the instance.");
            return false;
        }

        m_lstObj.append(pObj);
        AddModelObj(strModelObj, pObj);
    }

    if(!m_pMsgServer->isListening()) {
        QLocalServer::removeServer(TA_LOCAL_SERVER_NAME);
        m_pMsgServer->listen(TA_LOCAL_SERVER_NAME);
    }
    return true;
}

void PluginsMgr::AddModelObj(QString strModelObj, QObject* pObj)
{
    QScriptValue scriptObj = m_engine.newQObject(pObj);
    m_engine.globalObject().setProperty(strModelObj, scriptObj);
}

bool PluginsMgr::isSafePluginCommand(const QString& strCmd) const
{
    static const QStringList blockedPatterns = QStringList()
            << "eval(" << "Function(" << "import " << "require("
            << "XMLHttpRequest" << "ActiveXObject";

    foreach(const QString& pattern, blockedPatterns) {
        if(strCmd.contains(pattern, Qt::CaseInsensitive))
            return false;
    }

    return true;
}

QString PluginsMgr::on_msg_process(const QString& strCmd)
{
    if(!isSafePluginCommand(strCmd)) {
        m_strLastErr = tr("Rejected unsafe plugin command.");
        qWarning() << m_strLastErr << strCmd;
        return QString();
    }

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
