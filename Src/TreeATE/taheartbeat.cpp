#include "taheartbeat.h"
#include <QUuid>
#include <QFile>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QJsonParseError>
#include <QVariantMap>
#include <QNetworkAccessManager>

TaHeartbeat::TaHeartbeat()
{
    m_host = "";
    genGUID();
}

QString TaHeartbeat::guid() const
{
    return m_guid.toUpper();
}

void TaHeartbeat::setHost(const QString &host)
{
    m_host = host;
}

void TaHeartbeat::genGUID()
{
    QFile f("deviceid");
    if(f.open(QIODevice::ReadOnly)) {
        QString gid = f.readAll();
        QUuid uuid(gid);
        if(!uuid.isNull()) {
            m_guid = gid;
            f.close();
            return;
        }
    }
    f.close();

    m_guid = QUuid::createUuid().toString().toUpper();
    m_guid.remove('{');
    m_guid.remove('}');
    if(f.open(QIODevice::WriteOnly)) {
        f.write(m_guid.toUtf8());
        f.flush();
    }
    f.close();
}

bool TaHeartbeat::heartbeat(const QString& prjName, const QString& prjVer, const int status)
{
    if(m_host.isEmpty()) {
        qDebug() << "[Heartbeat] - host is null";
        return false;
    }

    QVariantMap vm;
    vm.insert("TreeATE", guid());
    vm.insert("PrjName", prjName);
    vm.insert("PrjVer", prjVer);
    vm.insert("Status", status);

    QNetworkAccessManager netmgr;
    QNetworkRequest request;
    request.setRawHeader("Content-Type", "application/json");
    request.setUrl(QUrl("http://" + m_host + "/system/ate_device_status/"));

    QJsonDocument jsDoc = QJsonDocument::fromVariant(vm);
    QNetworkReply* reply = netmgr.post(request, jsDoc.toJson());

    QEventLoop eloop;
    QEventLoop::connect(&netmgr, &QNetworkAccessManager::finished, &eloop, &QEventLoop::quit);
    eloop.processEvents(QEventLoop::AllEvents, 5000); // 5 second
    eloop.exec();

    QJsonParseError jsErr;
    QJsonDocument jsReply = QJsonDocument::fromJson(reply->readAll(), &jsErr);
    if(jsReply.isNull()) {
        qDebug() << "[Heartbeat] - " << reply->errorString() + ", or JSON: " + jsErr.errorString();
        return false;
    }

    QVariantMap vmReply = jsReply.toVariant().toMap();
    if(200 == vmReply["code"].toInt()) {
        return true;
    }

    qDebug() << "[Heartbeat] - " << vmReply["message"].toString();
    return false;
}
