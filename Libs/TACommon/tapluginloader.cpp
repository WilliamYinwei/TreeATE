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

#include "tapluginloader.h"

#include <QDir>
#include <QFileInfo>
#include <QObject>

typedef void* (*CreateInstChar)(const char*);
typedef void* (*CreateInstVoid)(const void*);
typedef void* (*CreateInstNoArg)();

QString TAPluginLoader::findFirstDll(const QString& dir, const QString& namePattern)
{
    QDir qdir(dir);
    const QStringList dlls = qdir.entryList(QStringList() << namePattern, QDir::Files);
    if(dlls.isEmpty())
        return QString();

    return qdir.filePath(dlls.first());
}

QLibrary* TAPluginLoader::loadAndKeep(const QString& dllPath, QList<QLibrary*>& keepAlive,
                                      QString& error)
{
    QFileInfo fi(dllPath);
    if(!fi.exists()) {
        error = QObject::tr("Plugin not found: %1").arg(dllPath);
        return NULL;
    }

    QLibrary* lib = new QLibrary(dllPath);
    lib->setLoadHints(QLibrary::ResolveAllSymbolsHint);
    if(!lib->load()) {
        error = QObject::tr("Failed to load %1: %2").arg(dllPath, lib->errorString());
        delete lib;
        return NULL;
    }

    keepAlive.append(lib);
    return lib;
}

void* TAPluginLoader::createInstance(const QString& dllPath, const char* symbol,
                                     const char* arg, QList<QLibrary*>& keepAlive,
                                     QString& error)
{
    QLibrary* lib = loadAndKeep(dllPath, keepAlive, error);
    if(NULL == lib)
        return NULL;

    CreateInstChar fn = reinterpret_cast<CreateInstChar>(lib->resolve(symbol));
    if(NULL == fn) {
        error = QObject::tr("Failed to resolve '%1' in %2: %3")
                .arg(symbol, dllPath, lib->errorString());
        return NULL;
    }

    return fn(arg);
}

void* TAPluginLoader::createInstance(const QString& dllPath, const char* symbol,
                                     const void* arg, QList<QLibrary*>& keepAlive,
                                     QString& error)
{
    QLibrary* lib = loadAndKeep(dllPath, keepAlive, error);
    if(NULL == lib)
        return NULL;

    CreateInstVoid fn = reinterpret_cast<CreateInstVoid>(lib->resolve(symbol));
    if(NULL == fn) {
        error = QObject::tr("Failed to resolve '%1' in %2: %3")
                .arg(symbol, dllPath, lib->errorString());
        return NULL;
    }

    return fn(arg);
}

void* TAPluginLoader::createInstanceNoArg(const QString& dllPath, const char* symbol,
                                          QList<QLibrary*>& keepAlive, QString& error)
{
    QLibrary* lib = loadAndKeep(dllPath, keepAlive, error);
    if(NULL == lib)
        return NULL;

    CreateInstNoArg fn = reinterpret_cast<CreateInstNoArg>(lib->resolve(symbol));
    if(NULL == fn) {
        error = QObject::tr("Failed to resolve '%1' in %2: %3")
                .arg(symbol, dllPath, lib->errorString());
        return NULL;
    }

    return fn();
}

void TAPluginLoader::unloadAll(QList<QLibrary*>& keepAlive)
{
    for(int i = 0; i < keepAlive.count(); ++i) {
        QLibrary* lib = keepAlive.at(i);
        if(lib) {
            lib->unload();
            delete lib;
        }
    }
    keepAlive.clear();
}
