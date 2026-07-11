///
/// @project       TreeATE
/// @brief         Unified DLL plugin loader with library lifetime management
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef TAPLUGINLOADER_H
#define TAPLUGINLOADER_H

#include <QLibrary>
#include <QList>
#include <QString>

class QObject;

class TAPluginLoader
{
public:
    static QString findFirstDll(const QString& dir, const QString& namePattern);

    static QLibrary* loadAndKeep(const QString& dllPath, QList<QLibrary*>& keepAlive,
                                 QString& error);

    static void* createInstance(const QString& dllPath, const char* symbol,
                                const char* arg, QList<QLibrary*>& keepAlive,
                                QString& error);

    static void* createInstance(const QString& dllPath, const char* symbol,
                                const void* arg, QList<QLibrary*>& keepAlive,
                                QString& error);

    static void* createInstanceNoArg(const QString& dllPath, const char* symbol,
                                     QList<QLibrary*>& keepAlive, QString& error);

    static void unloadAll(QList<QLibrary*>& keepAlive);
};

#endif // TAPLUGINLOADER_H
