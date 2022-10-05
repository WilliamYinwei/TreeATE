#ifndef TAHEARTBEAT_H
#define TAHEARTBEAT_H

#include <QString>

class TaHeartbeat
{
public:
    TaHeartbeat();

    bool heartbeat(const QString& prjName, const QString& prjVer,
                   const int status);

    QString guid() const;

    void setHost(const QString &host);

protected:
    void genGUID();

private:
    QString m_guid;
    QString m_host;
};

#endif // TAHEARTBEAT_H
