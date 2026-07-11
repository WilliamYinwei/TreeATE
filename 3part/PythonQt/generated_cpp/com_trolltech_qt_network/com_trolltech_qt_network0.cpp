#include "com_trolltech_qt_network0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDateTime>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qdnslookup.h>
#include <qdtls.h>
#include <qformdatabuilder.h>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qhstspolicy.h>
#include <qhttp1configuration.h>
#include <qhttp2configuration.h>
#include <qhttpheaders.h>
#include <qhttpmultipart.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocalsocket.h>
#include <qmetaobject.h>
#include <qnetworkcookie.h>
#include <qnetworkcookiejar.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslpresharedkeyauthenticator.h>
#include <qthread.h>
#include <qudpsocket.h>
#include <qurl.h>

PythonQtShell_QAbstractNetworkCache::~PythonQtShell_QAbstractNetworkCache() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
qint64  PythonQtShell_QAbstractNetworkCache::cacheSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("cacheSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("cacheSize", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return qint64();
}
void PythonQtShell_QAbstractNetworkCache::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractNetworkCache::childEvent(event0);
}
void PythonQtShell_QAbstractNetworkCache::clear()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("clear");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QAbstractNetworkCache::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractNetworkCache::customEvent(event0);
}
QIODevice*  PythonQtShell_QAbstractNetworkCache::data(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QIODevice* returnValue{};
      void* args[2] = {nullptr, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return nullptr;
}
bool  PythonQtShell_QAbstractNetworkCache::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractNetworkCache::event(event0);
}
bool  PythonQtShell_QAbstractNetworkCache::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractNetworkCache::eventFilter(watched0, event1);
}
void PythonQtShell_QAbstractNetworkCache::insert(QIODevice*  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("insert");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QNetworkCacheMetaData  PythonQtShell_QAbstractNetworkCache::metaData(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("metaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QNetworkCacheMetaData" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QNetworkCacheMetaData returnValue{};
      void* args[2] = {nullptr, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaData", methodInfo, result);
          } else {
            returnValue = *((QNetworkCacheMetaData*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QNetworkCacheMetaData();
}
QIODevice*  PythonQtShell_QAbstractNetworkCache::prepare(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("prepare");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*" , "const QNetworkCacheMetaData&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QIODevice* returnValue{};
      void* args[2] = {nullptr, (void*)&metaData0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("prepare", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return nullptr;
}
bool  PythonQtShell_QAbstractNetworkCache::remove(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("remove");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("remove", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
void PythonQtShell_QAbstractNetworkCache::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractNetworkCache::timerEvent(event0);
}
void PythonQtShell_QAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateMetaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QNetworkCacheMetaData&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&metaData0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QAbstractNetworkCache* PythonQtWrapper_QAbstractNetworkCache::new_QAbstractNetworkCache(QObject*  parent)
{ 
return new PythonQtShell_QAbstractNetworkCache(parent); }

const QMetaObject* PythonQtShell_QAbstractNetworkCache::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractNetworkCache::staticMetaObject);
  } else {
    return &QAbstractNetworkCache::staticMetaObject;
  }
}
int PythonQtShell_QAbstractNetworkCache::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractNetworkCache::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
qint64  PythonQtWrapper_QAbstractNetworkCache::cacheSize(QAbstractNetworkCache* theWrappedObject) const
{
  return ( theWrappedObject->cacheSize());
}

QIODevice*  PythonQtWrapper_QAbstractNetworkCache::data(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( theWrappedObject->data(url));
}

void PythonQtWrapper_QAbstractNetworkCache::insert(QAbstractNetworkCache* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->insert(device));
}

QNetworkCacheMetaData  PythonQtWrapper_QAbstractNetworkCache::metaData(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( theWrappedObject->metaData(url));
}

QIODevice*  PythonQtWrapper_QAbstractNetworkCache::prepare(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  return ( theWrappedObject->prepare(metaData));
}

bool  PythonQtWrapper_QAbstractNetworkCache::remove(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( theWrappedObject->remove(url));
}

void PythonQtWrapper_QAbstractNetworkCache::updateMetaData(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  ( theWrappedObject->updateMetaData(metaData));
}



PythonQtShell_QAbstractSocket::~PythonQtShell_QAbstractSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QAbstractSocket::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::atEnd();
}
bool  PythonQtShell_QAbstractSocket::bind(const QHostAddress&  address0, unsigned short  port1, QAbstractSocket::BindMode  mode2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("bind");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QHostAddress&" , "unsigned short" , "QAbstractSocket::BindMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&address0, (void*)&port1, (void*)&mode2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bind", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::bind(address0, port1, mode2);
}
qint64  PythonQtShell_QAbstractSocket::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::bytesAvailable();
}
qint64  PythonQtShell_QAbstractSocket::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::bytesToWrite();
}
bool  PythonQtShell_QAbstractSocket::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::canReadLine();
}
void PythonQtShell_QAbstractSocket::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::childEvent(event0);
}
void PythonQtShell_QAbstractSocket::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::close();
}
void PythonQtShell_QAbstractSocket::connectToHost(const QString&  hostName0, unsigned short  port1, QIODeviceBase::OpenMode  mode2, QAbstractSocket::NetworkLayerProtocol  protocol3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("connectToHost");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&" , "unsigned short" , "QIODeviceBase::OpenMode" , "QAbstractSocket::NetworkLayerProtocol"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {nullptr, (void*)&hostName0, (void*)&port1, (void*)&mode2, (void*)&protocol3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::connectToHost(hostName0, port1, mode2, protocol3);
}
void PythonQtShell_QAbstractSocket::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::customEvent(event0);
}
void PythonQtShell_QAbstractSocket::disconnectFromHost()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("disconnectFromHost");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::disconnectFromHost();
}
bool  PythonQtShell_QAbstractSocket::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::event(event0);
}
bool  PythonQtShell_QAbstractSocket::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QAbstractSocket::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::isSequential();
}
bool  PythonQtShell_QAbstractSocket::open(QIODeviceBase::OpenMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODeviceBase::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::open(mode0);
}
qint64  PythonQtShell_QAbstractSocket::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::pos();
}
qint64  PythonQtShell_QAbstractSocket::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QAbstractSocket::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QAbstractSocket::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::reset();
}
void PythonQtShell_QAbstractSocket::resume()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resume");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::resume();
}
bool  PythonQtShell_QAbstractSocket::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::seek(pos0);
}
void PythonQtShell_QAbstractSocket::setReadBufferSize(qint64  size0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setReadBufferSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&size0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::setReadBufferSize(size0);
}
bool  PythonQtShell_QAbstractSocket::setSocketDescriptor(qintptr  socketDescriptor0, QAbstractSocket::SocketState  state1, QIODeviceBase::OpenMode  openMode2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setSocketDescriptor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qintptr" , "QAbstractSocket::SocketState" , "QIODeviceBase::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&socketDescriptor0, (void*)&state1, (void*)&openMode2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setSocketDescriptor", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::setSocketDescriptor(socketDescriptor0, state1, openMode2);
}
void PythonQtShell_QAbstractSocket::setSocketOption(QAbstractSocket::SocketOption  option0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setSocketOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractSocket::SocketOption" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&option0, (void*)&value1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::setSocketOption(option0, value1);
}
qint64  PythonQtShell_QAbstractSocket::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::size();
}
qint64  PythonQtShell_QAbstractSocket::skipData(qint64  maxSize0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("skipData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      qint64 returnValue{};
      void* args[2] = {nullptr, (void*)&maxSize0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("skipData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::skipData(maxSize0);
}
qintptr  PythonQtShell_QAbstractSocket::socketDescriptor() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("socketDescriptor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qintptr"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qintptr returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("socketDescriptor", methodInfo, result);
          } else {
            returnValue = *((qintptr*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::socketDescriptor();
}
QVariant  PythonQtShell_QAbstractSocket::socketOption(QAbstractSocket::SocketOption  option0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("socketOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "QAbstractSocket::SocketOption"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("socketOption", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::socketOption(option0);
}
void PythonQtShell_QAbstractSocket::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::timerEvent(event0);
}
bool  PythonQtShell_QAbstractSocket::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QAbstractSocket::waitForConnected(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("waitForConnected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForConnected", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::waitForConnected(msecs0);
}
bool  PythonQtShell_QAbstractSocket::waitForDisconnected(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("waitForDisconnected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForDisconnected", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::waitForDisconnected(msecs0);
}
bool  PythonQtShell_QAbstractSocket::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QAbstractSocket::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractSocket::writeData(data0, len1);
}
QAbstractSocket* PythonQtWrapper_QAbstractSocket::new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent)
{ 
return new PythonQtShell_QAbstractSocket(socketType, parent); }

const QMetaObject* PythonQtShell_QAbstractSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractSocket::staticMetaObject);
  } else {
    return &QAbstractSocket::staticMetaObject;
  }
}
int PythonQtShell_QAbstractSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QAbstractSocket::abort(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

bool  PythonQtWrapper_QAbstractSocket::bind(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QAbstractSocket::BindMode  mode)
{
  return ( theWrappedObject->bind(address, port, mode));
}

bool  PythonQtWrapper_QAbstractSocket::bind(QAbstractSocket* theWrappedObject, unsigned short  port, QAbstractSocket::BindMode  mode)
{
  return ( theWrappedObject->bind(port, mode));
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODeviceBase::OpenMode  mode)
{
  ( theWrappedObject->connectToHost(address, port, mode));
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODeviceBase::OpenMode  mode, QAbstractSocket::NetworkLayerProtocol  protocol)
{
  ( theWrappedObject->connectToHost(hostName, port, mode, protocol));
}

void PythonQtWrapper_QAbstractSocket::disconnectFromHost(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->disconnectFromHost());
}

QAbstractSocket::SocketError  PythonQtWrapper_QAbstractSocket::error(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QAbstractSocket::flush(QAbstractSocket* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

bool  PythonQtWrapper_QAbstractSocket::isValid(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QHostAddress  PythonQtWrapper_QAbstractSocket::localAddress(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->localAddress());
}

unsigned short  PythonQtWrapper_QAbstractSocket::localPort(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->localPort());
}

QAbstractSocket::PauseModes  PythonQtWrapper_QAbstractSocket::pauseMode(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->pauseMode());
}

QHostAddress  PythonQtWrapper_QAbstractSocket::peerAddress(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerAddress());
}

QString  PythonQtWrapper_QAbstractSocket::peerName(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerName());
}

unsigned short  PythonQtWrapper_QAbstractSocket::peerPort(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerPort());
}

QString  PythonQtWrapper_QAbstractSocket::protocolTag(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->protocolTag());
}

QNetworkProxy  PythonQtWrapper_QAbstractSocket::proxy(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

qint64  PythonQtWrapper_QAbstractSocket::readBufferSize(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

void PythonQtWrapper_QAbstractSocket::resume(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAbstractSocket::setLocalAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setLocalAddress(address));
}

void PythonQtWrapper_QAbstractSocket::setLocalPort(QAbstractSocket* theWrappedObject, unsigned short  port)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setLocalPort(port));
}

void PythonQtWrapper_QAbstractSocket::setPauseMode(QAbstractSocket* theWrappedObject, QAbstractSocket::PauseModes  pauseMode)
{
  ( theWrappedObject->setPauseMode(pauseMode));
}

void PythonQtWrapper_QAbstractSocket::setPeerAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setPeerAddress(address));
}

void PythonQtWrapper_QAbstractSocket::setPeerName(QAbstractSocket* theWrappedObject, const QString&  name)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setPeerName(name));
}

void PythonQtWrapper_QAbstractSocket::setPeerPort(QAbstractSocket* theWrappedObject, unsigned short  port)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setPeerPort(port));
}

void PythonQtWrapper_QAbstractSocket::setProtocolTag(QAbstractSocket* theWrappedObject, const QString&  tag)
{
  ( theWrappedObject->setProtocolTag(tag));
}

void PythonQtWrapper_QAbstractSocket::setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy)
{
  ( theWrappedObject->setProxy(networkProxy));
}

void PythonQtWrapper_QAbstractSocket::setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

bool  PythonQtWrapper_QAbstractSocket::setSocketDescriptor(QAbstractSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state, QIODeviceBase::OpenMode  openMode)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor, state, openMode));
}

void PythonQtWrapper_QAbstractSocket::setSocketError(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketError  socketError)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setSocketError(socketError));
}

void PythonQtWrapper_QAbstractSocket::setSocketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value)
{
  ( theWrappedObject->setSocketOption(option, value));
}

void PythonQtWrapper_QAbstractSocket::setSocketState(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketState  state)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setSocketState(state));
}

qintptr  PythonQtWrapper_QAbstractSocket::socketDescriptor(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

QVariant  PythonQtWrapper_QAbstractSocket::socketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option)
{
  return ( theWrappedObject->socketOption(option));
}

QAbstractSocket::SocketType  PythonQtWrapper_QAbstractSocket::socketType(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketType());
}

QAbstractSocket::SocketState  PythonQtWrapper_QAbstractSocket::state(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

bool  PythonQtWrapper_QAbstractSocket::waitForConnected(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForConnected(msecs));
}

bool  PythonQtWrapper_QAbstractSocket::waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDisconnected(msecs));
}



QAuthenticator* PythonQtWrapper_QAuthenticator::new_QAuthenticator()
{ 
return new QAuthenticator(); }

QAuthenticator* PythonQtWrapper_QAuthenticator::new_QAuthenticator(const QAuthenticator&  other)
{ 
return new QAuthenticator(other); }

void PythonQtWrapper_QAuthenticator::clear(QAuthenticator* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QAuthenticator::isNull(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QAuthenticator::__ne__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QAuthenticator::__eq__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const
{
  return ( (*theWrappedObject)== other);
}

QVariant  PythonQtWrapper_QAuthenticator::option(QAuthenticator* theWrappedObject, const QString&  opt) const
{
  return ( theWrappedObject->option(opt));
}

QHash<QString , QVariant >  PythonQtWrapper_QAuthenticator::options(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->options());
}

QString  PythonQtWrapper_QAuthenticator::password(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

QString  PythonQtWrapper_QAuthenticator::realm(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->realm());
}

void PythonQtWrapper_QAuthenticator::setOption(QAuthenticator* theWrappedObject, const QString&  opt, const QVariant&  value)
{
  ( theWrappedObject->setOption(opt, value));
}

void PythonQtWrapper_QAuthenticator::setPassword(QAuthenticator* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

void PythonQtWrapper_QAuthenticator::setRealm(QAuthenticator* theWrappedObject, const QString&  realm)
{
  ( theWrappedObject->setRealm(realm));
}

void PythonQtWrapper_QAuthenticator::setUser(QAuthenticator* theWrappedObject, const QString&  user)
{
  ( theWrappedObject->setUser(user));
}

QString  PythonQtWrapper_QAuthenticator::user(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->user());
}



QDnsDomainNameRecord* PythonQtWrapper_QDnsDomainNameRecord::new_QDnsDomainNameRecord()
{ 
return new QDnsDomainNameRecord(); }

QDnsDomainNameRecord* PythonQtWrapper_QDnsDomainNameRecord::new_QDnsDomainNameRecord(const QDnsDomainNameRecord&  other)
{ 
return new QDnsDomainNameRecord(other); }

QString  PythonQtWrapper_QDnsDomainNameRecord::name(QDnsDomainNameRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsDomainNameRecord*  PythonQtWrapper_QDnsDomainNameRecord::operator_assign(QDnsDomainNameRecord* theWrappedObject, const QDnsDomainNameRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QDnsDomainNameRecord::swap(QDnsDomainNameRecord* theWrappedObject, QDnsDomainNameRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsDomainNameRecord::timeToLive(QDnsDomainNameRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

QString  PythonQtWrapper_QDnsDomainNameRecord::value(QDnsDomainNameRecord* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QDnsHostAddressRecord* PythonQtWrapper_QDnsHostAddressRecord::new_QDnsHostAddressRecord()
{ 
return new QDnsHostAddressRecord(); }

QDnsHostAddressRecord* PythonQtWrapper_QDnsHostAddressRecord::new_QDnsHostAddressRecord(const QDnsHostAddressRecord&  other)
{ 
return new QDnsHostAddressRecord(other); }

QString  PythonQtWrapper_QDnsHostAddressRecord::name(QDnsHostAddressRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsHostAddressRecord*  PythonQtWrapper_QDnsHostAddressRecord::operator_assign(QDnsHostAddressRecord* theWrappedObject, const QDnsHostAddressRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QDnsHostAddressRecord::swap(QDnsHostAddressRecord* theWrappedObject, QDnsHostAddressRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsHostAddressRecord::timeToLive(QDnsHostAddressRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

QHostAddress  PythonQtWrapper_QDnsHostAddressRecord::value(QDnsHostAddressRecord* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



PythonQtShell_QDnsLookup::~PythonQtShell_QDnsLookup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QDnsLookup::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDnsLookup::childEvent(event0);
}
void PythonQtShell_QDnsLookup::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDnsLookup::customEvent(event0);
}
bool  PythonQtShell_QDnsLookup::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDnsLookup::event(event0);
}
bool  PythonQtShell_QDnsLookup::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDnsLookup::eventFilter(watched0, event1);
}
void PythonQtShell_QDnsLookup::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDnsLookup::timerEvent(event0);
}
QDnsLookup* PythonQtWrapper_QDnsLookup::new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, QDnsLookup::Protocol  protocol, const QHostAddress&  nameserver, unsigned short  port, QObject*  parent)
{ 
return new PythonQtShell_QDnsLookup(type, name, protocol, nameserver, port, parent); }

QDnsLookup* PythonQtWrapper_QDnsLookup::new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, QObject*  parent)
{ 
return new PythonQtShell_QDnsLookup(type, name, parent); }

QDnsLookup* PythonQtWrapper_QDnsLookup::new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, const QHostAddress&  nameserver, QObject*  parent)
{ 
return new PythonQtShell_QDnsLookup(type, name, nameserver, parent); }

QDnsLookup* PythonQtWrapper_QDnsLookup::new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, const QHostAddress&  nameserver, unsigned short  port, QObject*  parent)
{ 
return new PythonQtShell_QDnsLookup(type, name, nameserver, port, parent); }

QDnsLookup* PythonQtWrapper_QDnsLookup::new_QDnsLookup(QObject*  parent)
{ 
return new PythonQtShell_QDnsLookup(parent); }

const QMetaObject* PythonQtShell_QDnsLookup::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QDnsLookup::staticMetaObject);
  } else {
    return &QDnsLookup::staticMetaObject;
  }
}
int PythonQtShell_QDnsLookup::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QDnsLookup::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QDnsDomainNameRecord >  PythonQtWrapper_QDnsLookup::canonicalNameRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->canonicalNameRecords());
}

unsigned short  PythonQtWrapper_QDnsLookup::static_QDnsLookup_defaultPortForProtocol(QDnsLookup::Protocol  protocol)
{
  return (QDnsLookup::defaultPortForProtocol(protocol));
}

QDnsLookup::Error  PythonQtWrapper_QDnsLookup::error(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QDnsLookup::errorString(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QList<QDnsHostAddressRecord >  PythonQtWrapper_QDnsLookup::hostAddressRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->hostAddressRecords());
}

bool  PythonQtWrapper_QDnsLookup::isAuthenticData(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->isAuthenticData());
}

bool  PythonQtWrapper_QDnsLookup::isFinished(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

bool  PythonQtWrapper_QDnsLookup::static_QDnsLookup_isProtocolSupported(QDnsLookup::Protocol  protocol)
{
  return (QDnsLookup::isProtocolSupported(protocol));
}

QList<QDnsMailExchangeRecord >  PythonQtWrapper_QDnsLookup::mailExchangeRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->mailExchangeRecords());
}

QString  PythonQtWrapper_QDnsLookup::name(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QList<QDnsDomainNameRecord >  PythonQtWrapper_QDnsLookup::nameServerRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->nameServerRecords());
}

QHostAddress  PythonQtWrapper_QDnsLookup::nameserver(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->nameserver());
}

unsigned short  PythonQtWrapper_QDnsLookup::nameserverPort(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->nameserverPort());
}

QDnsLookup::Protocol  PythonQtWrapper_QDnsLookup::nameserverProtocol(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->nameserverProtocol());
}

QList<QDnsDomainNameRecord >  PythonQtWrapper_QDnsLookup::pointerRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->pointerRecords());
}

QList<QDnsServiceRecord >  PythonQtWrapper_QDnsLookup::serviceRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->serviceRecords());
}

void PythonQtWrapper_QDnsLookup::setName(QDnsLookup* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}

void PythonQtWrapper_QDnsLookup::setNameserver(QDnsLookup* theWrappedObject, QDnsLookup::Protocol  protocol, const QHostAddress&  nameserver, unsigned short  port)
{
  ( theWrappedObject->setNameserver(protocol, nameserver, port));
}

void PythonQtWrapper_QDnsLookup::setNameserver(QDnsLookup* theWrappedObject, const QHostAddress&  nameserver)
{
  ( theWrappedObject->setNameserver(nameserver));
}

void PythonQtWrapper_QDnsLookup::setNameserver(QDnsLookup* theWrappedObject, const QHostAddress&  nameserver, unsigned short  port)
{
  ( theWrappedObject->setNameserver(nameserver, port));
}

void PythonQtWrapper_QDnsLookup::setNameserverPort(QDnsLookup* theWrappedObject, unsigned short  port)
{
  ( theWrappedObject->setNameserverPort(port));
}

void PythonQtWrapper_QDnsLookup::setNameserverProtocol(QDnsLookup* theWrappedObject, QDnsLookup::Protocol  protocol)
{
  ( theWrappedObject->setNameserverProtocol(protocol));
}

void PythonQtWrapper_QDnsLookup::setSslConfiguration(QDnsLookup* theWrappedObject, const QSslConfiguration&  sslConfiguration)
{
  ( theWrappedObject->setSslConfiguration(sslConfiguration));
}

void PythonQtWrapper_QDnsLookup::setType(QDnsLookup* theWrappedObject, QDnsLookup::Type  arg__1)
{
  ( theWrappedObject->setType(arg__1));
}

QSslConfiguration  PythonQtWrapper_QDnsLookup::sslConfiguration(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->sslConfiguration());
}

QList<QDnsTextRecord >  PythonQtWrapper_QDnsLookup::textRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->textRecords());
}

QList<QDnsTlsAssociationRecord >  PythonQtWrapper_QDnsLookup::tlsAssociationRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->tlsAssociationRecords());
}

QDnsLookup::Type  PythonQtWrapper_QDnsLookup::type(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



QDnsMailExchangeRecord* PythonQtWrapper_QDnsMailExchangeRecord::new_QDnsMailExchangeRecord()
{ 
return new QDnsMailExchangeRecord(); }

QDnsMailExchangeRecord* PythonQtWrapper_QDnsMailExchangeRecord::new_QDnsMailExchangeRecord(const QDnsMailExchangeRecord&  other)
{ 
return new QDnsMailExchangeRecord(other); }

QString  PythonQtWrapper_QDnsMailExchangeRecord::exchange(QDnsMailExchangeRecord* theWrappedObject) const
{
  return ( theWrappedObject->exchange());
}

QString  PythonQtWrapper_QDnsMailExchangeRecord::name(QDnsMailExchangeRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsMailExchangeRecord*  PythonQtWrapper_QDnsMailExchangeRecord::operator_assign(QDnsMailExchangeRecord* theWrappedObject, const QDnsMailExchangeRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

unsigned short  PythonQtWrapper_QDnsMailExchangeRecord::preference(QDnsMailExchangeRecord* theWrappedObject) const
{
  return ( theWrappedObject->preference());
}

void PythonQtWrapper_QDnsMailExchangeRecord::swap(QDnsMailExchangeRecord* theWrappedObject, QDnsMailExchangeRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsMailExchangeRecord::timeToLive(QDnsMailExchangeRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}



QDnsServiceRecord* PythonQtWrapper_QDnsServiceRecord::new_QDnsServiceRecord()
{ 
return new QDnsServiceRecord(); }

QDnsServiceRecord* PythonQtWrapper_QDnsServiceRecord::new_QDnsServiceRecord(const QDnsServiceRecord&  other)
{ 
return new QDnsServiceRecord(other); }

QString  PythonQtWrapper_QDnsServiceRecord::name(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsServiceRecord*  PythonQtWrapper_QDnsServiceRecord::operator_assign(QDnsServiceRecord* theWrappedObject, const QDnsServiceRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

unsigned short  PythonQtWrapper_QDnsServiceRecord::port(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

unsigned short  PythonQtWrapper_QDnsServiceRecord::priority(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->priority());
}

void PythonQtWrapper_QDnsServiceRecord::swap(QDnsServiceRecord* theWrappedObject, QDnsServiceRecord&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QDnsServiceRecord::target(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->target());
}

unsigned int  PythonQtWrapper_QDnsServiceRecord::timeToLive(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

unsigned short  PythonQtWrapper_QDnsServiceRecord::weight(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->weight());
}



QDnsTextRecord* PythonQtWrapper_QDnsTextRecord::new_QDnsTextRecord()
{ 
return new QDnsTextRecord(); }

QDnsTextRecord* PythonQtWrapper_QDnsTextRecord::new_QDnsTextRecord(const QDnsTextRecord&  other)
{ 
return new QDnsTextRecord(other); }

QString  PythonQtWrapper_QDnsTextRecord::name(QDnsTextRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsTextRecord*  PythonQtWrapper_QDnsTextRecord::operator_assign(QDnsTextRecord* theWrappedObject, const QDnsTextRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QDnsTextRecord::swap(QDnsTextRecord* theWrappedObject, QDnsTextRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsTextRecord::timeToLive(QDnsTextRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

QList<QByteArray >  PythonQtWrapper_QDnsTextRecord::values(QDnsTextRecord* theWrappedObject) const
{
  return ( theWrappedObject->values());
}



QDnsTlsAssociationRecord* PythonQtWrapper_QDnsTlsAssociationRecord::new_QDnsTlsAssociationRecord()
{ 
return new QDnsTlsAssociationRecord(); }

QDnsTlsAssociationRecord* PythonQtWrapper_QDnsTlsAssociationRecord::new_QDnsTlsAssociationRecord(const QDnsTlsAssociationRecord&  other)
{ 
return new QDnsTlsAssociationRecord(other); }

QDnsTlsAssociationRecord::MatchingType  PythonQtWrapper_QDnsTlsAssociationRecord::matchType(QDnsTlsAssociationRecord* theWrappedObject) const
{
  return ( theWrappedObject->matchType());
}

QString  PythonQtWrapper_QDnsTlsAssociationRecord::name(QDnsTlsAssociationRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsTlsAssociationRecord*  PythonQtWrapper_QDnsTlsAssociationRecord::operator_assign(QDnsTlsAssociationRecord* theWrappedObject, const QDnsTlsAssociationRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

QDnsTlsAssociationRecord::Selector  PythonQtWrapper_QDnsTlsAssociationRecord::selector(QDnsTlsAssociationRecord* theWrappedObject) const
{
  return ( theWrappedObject->selector());
}

void PythonQtWrapper_QDnsTlsAssociationRecord::swap(QDnsTlsAssociationRecord* theWrappedObject, QDnsTlsAssociationRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsTlsAssociationRecord::timeToLive(QDnsTlsAssociationRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

QDnsTlsAssociationRecord::CertificateUsage  PythonQtWrapper_QDnsTlsAssociationRecord::usage(QDnsTlsAssociationRecord* theWrappedObject) const
{
  return ( theWrappedObject->usage());
}

QByteArray  PythonQtWrapper_QDnsTlsAssociationRecord::value(QDnsTlsAssociationRecord* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



PythonQtShell_QDtls::~PythonQtShell_QDtls() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QDtls::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDtls::childEvent(event0);
}
void PythonQtShell_QDtls::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDtls::customEvent(event0);
}
bool  PythonQtShell_QDtls::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDtls::event(event0);
}
bool  PythonQtShell_QDtls::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDtls::eventFilter(watched0, event1);
}
void PythonQtShell_QDtls::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDtls::timerEvent(event0);
}
QDtls* PythonQtWrapper_QDtls::new_QDtls(QSslSocket::SslMode  mode, QObject*  parent)
{ 
return new PythonQtShell_QDtls(mode, parent); }

const QMetaObject* PythonQtShell_QDtls::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QDtls::staticMetaObject);
  } else {
    return &QDtls::staticMetaObject;
  }
}
int PythonQtShell_QDtls::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QDtls::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QDtls::abortHandshake(QDtls* theWrappedObject, QUdpSocket*  socket)
{
  return ( theWrappedObject->abortHandshake(socket));
}

QDtlsClientVerifier::GeneratorParameters  PythonQtWrapper_QDtls::cookieGeneratorParameters(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->cookieGeneratorParameters());
}

QByteArray  PythonQtWrapper_QDtls::decryptDatagram(QDtls* theWrappedObject, QUdpSocket*  socket, const QByteArray&  dgram)
{
  return ( theWrappedObject->decryptDatagram(socket, dgram));
}

bool  PythonQtWrapper_QDtls::doHandshake(QDtls* theWrappedObject, QUdpSocket*  socket, const QByteArray&  dgram)
{
  return ( theWrappedObject->doHandshake(socket, dgram));
}

QSslConfiguration  PythonQtWrapper_QDtls::dtlsConfiguration(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->dtlsConfiguration());
}

QDtlsError  PythonQtWrapper_QDtls::dtlsError(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->dtlsError());
}

QString  PythonQtWrapper_QDtls::dtlsErrorString(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->dtlsErrorString());
}

bool  PythonQtWrapper_QDtls::handleTimeout(QDtls* theWrappedObject, QUdpSocket*  socket)
{
  return ( theWrappedObject->handleTimeout(socket));
}

QDtls::HandshakeState  PythonQtWrapper_QDtls::handshakeState(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->handshakeState());
}

void PythonQtWrapper_QDtls::ignoreVerificationErrors(QDtls* theWrappedObject, const QList<QSslError >&  errorsToIgnore)
{
  ( theWrappedObject->ignoreVerificationErrors(errorsToIgnore));
}

bool  PythonQtWrapper_QDtls::isConnectionEncrypted(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->isConnectionEncrypted());
}

unsigned short  PythonQtWrapper_QDtls::mtuHint(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->mtuHint());
}

QHostAddress  PythonQtWrapper_QDtls::peerAddress(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->peerAddress());
}

unsigned short  PythonQtWrapper_QDtls::peerPort(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->peerPort());
}

QList<QSslError >  PythonQtWrapper_QDtls::peerVerificationErrors(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->peerVerificationErrors());
}

QString  PythonQtWrapper_QDtls::peerVerificationName(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->peerVerificationName());
}

bool  PythonQtWrapper_QDtls::resumeHandshake(QDtls* theWrappedObject, QUdpSocket*  socket)
{
  return ( theWrappedObject->resumeHandshake(socket));
}

QSslCipher  PythonQtWrapper_QDtls::sessionCipher(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->sessionCipher());
}

QSsl::SslProtocol  PythonQtWrapper_QDtls::sessionProtocol(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->sessionProtocol());
}

bool  PythonQtWrapper_QDtls::setCookieGeneratorParameters(QDtls* theWrappedObject, const QDtlsClientVerifier::GeneratorParameters&  params)
{
  return ( theWrappedObject->setCookieGeneratorParameters(params));
}

bool  PythonQtWrapper_QDtls::setDtlsConfiguration(QDtls* theWrappedObject, const QSslConfiguration&  configuration)
{
  return ( theWrappedObject->setDtlsConfiguration(configuration));
}

void PythonQtWrapper_QDtls::setMtuHint(QDtls* theWrappedObject, unsigned short  mtuHint)
{
  ( theWrappedObject->setMtuHint(mtuHint));
}

bool  PythonQtWrapper_QDtls::setPeer(QDtls* theWrappedObject, const QHostAddress&  address, unsigned short  port, const QString&  verificationName)
{
  return ( theWrappedObject->setPeer(address, port, verificationName));
}

bool  PythonQtWrapper_QDtls::setPeerVerificationName(QDtls* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->setPeerVerificationName(name));
}

bool  PythonQtWrapper_QDtls::shutdown(QDtls* theWrappedObject, QUdpSocket*  socket)
{
  return ( theWrappedObject->shutdown(socket));
}

QSslSocket::SslMode  PythonQtWrapper_QDtls::sslMode(QDtls* theWrappedObject) const
{
  return ( theWrappedObject->sslMode());
}

qint64  PythonQtWrapper_QDtls::writeDatagramEncrypted(QDtls* theWrappedObject, QUdpSocket*  socket, const QByteArray&  dgram)
{
  return ( theWrappedObject->writeDatagramEncrypted(socket, dgram));
}



PythonQtShell_QDtlsClientVerifier::~PythonQtShell_QDtlsClientVerifier() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QDtlsClientVerifier::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDtlsClientVerifier::childEvent(event0);
}
void PythonQtShell_QDtlsClientVerifier::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDtlsClientVerifier::customEvent(event0);
}
bool  PythonQtShell_QDtlsClientVerifier::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDtlsClientVerifier::event(event0);
}
bool  PythonQtShell_QDtlsClientVerifier::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDtlsClientVerifier::eventFilter(watched0, event1);
}
void PythonQtShell_QDtlsClientVerifier::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QDtlsClientVerifier::timerEvent(event0);
}
QDtlsClientVerifier* PythonQtWrapper_QDtlsClientVerifier::new_QDtlsClientVerifier(QObject*  parent)
{ 
return new PythonQtShell_QDtlsClientVerifier(parent); }

const QMetaObject* PythonQtShell_QDtlsClientVerifier::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QDtlsClientVerifier::staticMetaObject);
  } else {
    return &QDtlsClientVerifier::staticMetaObject;
  }
}
int PythonQtShell_QDtlsClientVerifier::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QDtlsClientVerifier::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QDtlsClientVerifier::GeneratorParameters  PythonQtWrapper_QDtlsClientVerifier::cookieGeneratorParameters(QDtlsClientVerifier* theWrappedObject) const
{
  return ( theWrappedObject->cookieGeneratorParameters());
}

QDtlsError  PythonQtWrapper_QDtlsClientVerifier::dtlsError(QDtlsClientVerifier* theWrappedObject) const
{
  return ( theWrappedObject->dtlsError());
}

QString  PythonQtWrapper_QDtlsClientVerifier::dtlsErrorString(QDtlsClientVerifier* theWrappedObject) const
{
  return ( theWrappedObject->dtlsErrorString());
}

bool  PythonQtWrapper_QDtlsClientVerifier::setCookieGeneratorParameters(QDtlsClientVerifier* theWrappedObject, const QDtlsClientVerifier::GeneratorParameters&  params)
{
  return ( theWrappedObject->setCookieGeneratorParameters(params));
}

QByteArray  PythonQtWrapper_QDtlsClientVerifier::verifiedHello(QDtlsClientVerifier* theWrappedObject) const
{
  return ( theWrappedObject->verifiedHello());
}

bool  PythonQtWrapper_QDtlsClientVerifier::verifyClient(QDtlsClientVerifier* theWrappedObject, QUdpSocket*  socket, const QByteArray&  dgram, const QHostAddress&  address, unsigned short  port)
{
  return ( theWrappedObject->verifyClient(socket, dgram, address, port));
}



PythonQtShell_QDtlsClientVerifier__GeneratorParameters::~PythonQtShell_QDtlsClientVerifier__GeneratorParameters() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDtlsClientVerifier::GeneratorParameters* PythonQtWrapper_QDtlsClientVerifier__GeneratorParameters::new_QDtlsClientVerifier__GeneratorParameters()
{ 
return new PythonQtShell_QDtlsClientVerifier__GeneratorParameters(); }

QDtlsClientVerifier::GeneratorParameters* PythonQtWrapper_QDtlsClientVerifier__GeneratorParameters::new_QDtlsClientVerifier__GeneratorParameters(QCryptographicHash::Algorithm  a, const QByteArray&  s)
{ 
return new PythonQtShell_QDtlsClientVerifier__GeneratorParameters(a, s); }



QFormDataBuilder* PythonQtWrapper_QFormDataBuilder::new_QFormDataBuilder()
{ 
return new QFormDataBuilder(); }

QFormDataPartBuilder  PythonQtWrapper_QFormDataBuilder::part(QFormDataBuilder* theWrappedObject, QAnyStringView  name)
{
  return ( theWrappedObject->part(name));
}

void PythonQtWrapper_QFormDataBuilder::swap(QFormDataBuilder* theWrappedObject, QFormDataBuilder&  other)
{
  ( theWrappedObject->swap(other));
}



QFormDataPartBuilder* PythonQtWrapper_QFormDataPartBuilder::new_QFormDataPartBuilder()
{ 
return new QFormDataPartBuilder(); }

QFormDataPartBuilder  PythonQtWrapper_QFormDataPartBuilder::setBody(QFormDataPartBuilder* theWrappedObject, QByteArrayView  data, QAnyStringView  fileName, QAnyStringView  mimeType)
{
  return ( theWrappedObject->setBody(data, fileName, mimeType));
}

QFormDataPartBuilder  PythonQtWrapper_QFormDataPartBuilder::setBodyDevice(QFormDataPartBuilder* theWrappedObject, QIODevice*  body, QAnyStringView  fileName, QAnyStringView  mimeType)
{
  return ( theWrappedObject->setBodyDevice(body, fileName, mimeType));
}

QFormDataPartBuilder  PythonQtWrapper_QFormDataPartBuilder::setHeaders(QFormDataPartBuilder* theWrappedObject, const QHttpHeaders&  headers)
{
  return ( theWrappedObject->setHeaders(headers));
}

void PythonQtWrapper_QFormDataPartBuilder::swap(QFormDataPartBuilder* theWrappedObject, QFormDataPartBuilder&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QHostAddress::~PythonQtShell_QHostAddress() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress()
{ 
return new PythonQtShell_QHostAddress(); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(QHostAddress::SpecialAddress  address)
{ 
return new PythonQtShell_QHostAddress(address); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QHostAddress&  copy)
{ 
return new PythonQtShell_QHostAddress(copy); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QIPv6Address&  ip6Addr)
{ 
return new PythonQtShell_QHostAddress(ip6Addr); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QString&  address)
{ 
return new PythonQtShell_QHostAddress(address); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const unsigned char*  ip6Addr)
{ 
return new PythonQtShell_QHostAddress(ip6Addr); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(unsigned int  ip4Addr)
{ 
return new PythonQtShell_QHostAddress(ip4Addr); }

void PythonQtWrapper_QHostAddress::clear(QHostAddress* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QHostAddress::isBroadcast(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isBroadcast());
}

bool  PythonQtWrapper_QHostAddress::isGlobal(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isGlobal());
}

bool  PythonQtWrapper_QHostAddress::isInSubnet(QHostAddress* theWrappedObject, const QHostAddress&  subnet, int  netmask) const
{
  return ( theWrappedObject->isInSubnet(subnet, netmask));
}

bool  PythonQtWrapper_QHostAddress::isInSubnet(QHostAddress* theWrappedObject, const std::pair<QHostAddress , int >&  subnet) const
{
  return ( theWrappedObject->isInSubnet(subnet));
}

bool  PythonQtWrapper_QHostAddress::isLinkLocal(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isLinkLocal());
}

bool  PythonQtWrapper_QHostAddress::isLoopback(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isLoopback());
}

bool  PythonQtWrapper_QHostAddress::isMulticast(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isMulticast());
}

bool  PythonQtWrapper_QHostAddress::isNull(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QHostAddress::isPrivateUse(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isPrivateUse());
}

bool  PythonQtWrapper_QHostAddress::isSiteLocal(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isSiteLocal());
}

bool  PythonQtWrapper_QHostAddress::isUniqueLocalUnicast(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isUniqueLocalUnicast());
}

bool  PythonQtWrapper_QHostAddress::__ne__(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const
{
  return ( (*theWrappedObject)!= address);
}

bool  PythonQtWrapper_QHostAddress::__ne__(QHostAddress* theWrappedObject, const QHostAddress&  address) const
{
  return ( (*theWrappedObject)!= address);
}

void PythonQtWrapper_QHostAddress::writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QHostAddress*  PythonQtWrapper_QHostAddress::operator_assign(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address)
{
  return &( (*theWrappedObject)= address);
}

bool  PythonQtWrapper_QHostAddress::__eq__(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const
{
  return ( (*theWrappedObject)== address);
}

bool  PythonQtWrapper_QHostAddress::__eq__(QHostAddress* theWrappedObject, const QHostAddress&  address) const
{
  return ( (*theWrappedObject)== address);
}

void PythonQtWrapper_QHostAddress::readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

std::pair<QHostAddress , int >  PythonQtWrapper_QHostAddress::static_QHostAddress_parseSubnet(const QString&  subnet)
{
  return (QHostAddress::parseSubnet(subnet));
}

QAbstractSocket::NetworkLayerProtocol  PythonQtWrapper_QHostAddress::protocol(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

QString  PythonQtWrapper_QHostAddress::scopeId(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->scopeId());
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address)
{
  ( theWrappedObject->setAddress(address));
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr)
{
  ( theWrappedObject->setAddress(ip6Addr));
}

bool  PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const QString&  address)
{
  return ( theWrappedObject->setAddress(address));
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const unsigned char*  ip6Addr)
{
  ( theWrappedObject->setAddress(ip6Addr));
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr)
{
  ( theWrappedObject->setAddress(ip4Addr));
}

void PythonQtWrapper_QHostAddress::setScopeId(QHostAddress* theWrappedObject, const QString&  id)
{
  ( theWrappedObject->setScopeId(id));
}

void PythonQtWrapper_QHostAddress::swap(QHostAddress* theWrappedObject, QHostAddress&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QHostAddress::toIPv4Address(QHostAddress* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->toIPv4Address(ok));
}

QIPv6Address  PythonQtWrapper_QHostAddress::toIPv6Address(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toIPv6Address());
}

QString  PythonQtWrapper_QHostAddress::toString(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QString PythonQtWrapper_QHostAddress::py_toString(QHostAddress* obj) { return obj->toString(); }


QHostInfo* PythonQtWrapper_QHostInfo::new_QHostInfo(const QHostInfo&  d)
{ 
return new QHostInfo(d); }

QHostInfo* PythonQtWrapper_QHostInfo::new_QHostInfo(int  lookupId)
{ 
return new QHostInfo(lookupId); }

void PythonQtWrapper_QHostInfo::static_QHostInfo_abortHostLookup(int  lookupId)
{
  (QHostInfo::abortHostLookup(lookupId));
}

QList<QHostAddress >  PythonQtWrapper_QHostInfo::addresses(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->addresses());
}

QHostInfo::HostInfoError  PythonQtWrapper_QHostInfo::error(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QHostInfo::errorString(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QHostInfo  PythonQtWrapper_QHostInfo::static_QHostInfo_fromName(const QString&  name)
{
  return (QHostInfo::fromName(name));
}

QString  PythonQtWrapper_QHostInfo::hostName(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

QString  PythonQtWrapper_QHostInfo::static_QHostInfo_localDomainName()
{
  return (QHostInfo::localDomainName());
}

QString  PythonQtWrapper_QHostInfo::static_QHostInfo_localHostName()
{
  return (QHostInfo::localHostName());
}

int  PythonQtWrapper_QHostInfo::static_QHostInfo_lookupHost(const QString&  name, const QObject*  receiver, const char*  member)
{
  return (QHostInfo::lookupHost(name, receiver, member));
}

int  PythonQtWrapper_QHostInfo::lookupId(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->lookupId());
}

void PythonQtWrapper_QHostInfo::setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses)
{
  ( theWrappedObject->setAddresses(addresses));
}

void PythonQtWrapper_QHostInfo::setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error)
{
  ( theWrappedObject->setError(error));
}

void PythonQtWrapper_QHostInfo::setErrorString(QHostInfo* theWrappedObject, const QString&  errorString)
{
  ( theWrappedObject->setErrorString(errorString));
}

void PythonQtWrapper_QHostInfo::setHostName(QHostInfo* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setHostName(name));
}

void PythonQtWrapper_QHostInfo::setLookupId(QHostInfo* theWrappedObject, int  id)
{
  ( theWrappedObject->setLookupId(id));
}

void PythonQtWrapper_QHostInfo::swap(QHostInfo* theWrappedObject, QHostInfo&  other)
{
  ( theWrappedObject->swap(other));
}



QHstsPolicy* PythonQtWrapper_QHstsPolicy::new_QHstsPolicy()
{ 
return new QHstsPolicy(); }

QHstsPolicy* PythonQtWrapper_QHstsPolicy::new_QHstsPolicy(const QHstsPolicy&  rhs)
{ 
return new QHstsPolicy(rhs); }

QDateTime  PythonQtWrapper_QHstsPolicy::expiry(QHstsPolicy* theWrappedObject) const
{
  return ( theWrappedObject->expiry());
}

QString  PythonQtWrapper_QHstsPolicy::host(QHstsPolicy* theWrappedObject, QUrl::ComponentFormattingOptions  options) const
{
  return ( theWrappedObject->host(options));
}

bool  PythonQtWrapper_QHstsPolicy::includesSubDomains(QHstsPolicy* theWrappedObject) const
{
  return ( theWrappedObject->includesSubDomains());
}

bool  PythonQtWrapper_QHstsPolicy::isExpired(QHstsPolicy* theWrappedObject) const
{
  return ( theWrappedObject->isExpired());
}

bool  PythonQtWrapper_QHstsPolicy::__ne__(QHstsPolicy* theWrappedObject, const QHstsPolicy&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QHstsPolicy*  PythonQtWrapper_QHstsPolicy::operator_assign(QHstsPolicy* theWrappedObject, const QHstsPolicy&  rhs)
{
  return &( (*theWrappedObject)= rhs);
}

bool  PythonQtWrapper_QHstsPolicy::__eq__(QHstsPolicy* theWrappedObject, const QHstsPolicy&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QHstsPolicy::setExpiry(QHstsPolicy* theWrappedObject, const QDateTime&  expiry)
{
  ( theWrappedObject->setExpiry(expiry));
}

void PythonQtWrapper_QHstsPolicy::setHost(QHstsPolicy* theWrappedObject, const QString&  host, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setHost(host, mode));
}

void PythonQtWrapper_QHstsPolicy::setIncludesSubDomains(QHstsPolicy* theWrappedObject, bool  include)
{
  ( theWrappedObject->setIncludesSubDomains(include));
}

void PythonQtWrapper_QHstsPolicy::swap(QHstsPolicy* theWrappedObject, QHstsPolicy&  other)
{
  ( theWrappedObject->swap(other));
}



QHttp1Configuration* PythonQtWrapper_QHttp1Configuration::new_QHttp1Configuration()
{ 
return new QHttp1Configuration(); }

QHttp1Configuration* PythonQtWrapper_QHttp1Configuration::new_QHttp1Configuration(const QHttp1Configuration&  other)
{ 
return new QHttp1Configuration(other); }

qsizetype  PythonQtWrapper_QHttp1Configuration::numberOfConnectionsPerHost(QHttp1Configuration* theWrappedObject) const
{
  return ( theWrappedObject->numberOfConnectionsPerHost());
}

bool  PythonQtWrapper_QHttp1Configuration::__ne__(QHttp1Configuration* theWrappedObject, const QHttp1Configuration&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QHttp1Configuration*  PythonQtWrapper_QHttp1Configuration::operator_assign(QHttp1Configuration* theWrappedObject, const QHttp1Configuration&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QHttp1Configuration::__eq__(QHttp1Configuration* theWrappedObject, const QHttp1Configuration&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QHttp1Configuration::setNumberOfConnectionsPerHost(QHttp1Configuration* theWrappedObject, qsizetype  amount)
{
  ( theWrappedObject->setNumberOfConnectionsPerHost(amount));
}

void PythonQtWrapper_QHttp1Configuration::swap(QHttp1Configuration* theWrappedObject, QHttp1Configuration&  other)
{
  ( theWrappedObject->swap(other));
}



QHttp2Configuration* PythonQtWrapper_QHttp2Configuration::new_QHttp2Configuration()
{ 
return new QHttp2Configuration(); }

QHttp2Configuration* PythonQtWrapper_QHttp2Configuration::new_QHttp2Configuration(const QHttp2Configuration&  other)
{ 
return new QHttp2Configuration(other); }

bool  PythonQtWrapper_QHttp2Configuration::huffmanCompressionEnabled(QHttp2Configuration* theWrappedObject) const
{
  return ( theWrappedObject->huffmanCompressionEnabled());
}

bool  PythonQtWrapper_QHttp2Configuration::__ne__(QHttp2Configuration* theWrappedObject, const QHttp2Configuration&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QHttp2Configuration*  PythonQtWrapper_QHttp2Configuration::operator_assign(QHttp2Configuration* theWrappedObject, const QHttp2Configuration&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QHttp2Configuration::__eq__(QHttp2Configuration* theWrappedObject, const QHttp2Configuration&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QHttp2Configuration::serverPushEnabled(QHttp2Configuration* theWrappedObject) const
{
  return ( theWrappedObject->serverPushEnabled());
}

void PythonQtWrapper_QHttp2Configuration::setHuffmanCompressionEnabled(QHttp2Configuration* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setHuffmanCompressionEnabled(enable));
}

void PythonQtWrapper_QHttp2Configuration::setServerPushEnabled(QHttp2Configuration* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setServerPushEnabled(enable));
}

void PythonQtWrapper_QHttp2Configuration::swap(QHttp2Configuration* theWrappedObject, QHttp2Configuration&  other)
{
  ( theWrappedObject->swap(other));
}



QHttpHeaders* PythonQtWrapper_QHttpHeaders::new_QHttpHeaders()
{ 
return new QHttpHeaders(); }

QHttpHeaders* PythonQtWrapper_QHttpHeaders::new_QHttpHeaders(const QHttpHeaders&  other)
{ 
return new QHttpHeaders(other); }

bool  PythonQtWrapper_QHttpHeaders::append(QHttpHeaders* theWrappedObject, QAnyStringView  name, QAnyStringView  value)
{
  return ( theWrappedObject->append(name, value));
}

bool  PythonQtWrapper_QHttpHeaders::append(QHttpHeaders* theWrappedObject, QHttpHeaders::WellKnownHeader  name, QAnyStringView  value)
{
  return ( theWrappedObject->append(name, value));
}

void PythonQtWrapper_QHttpHeaders::clear(QHttpHeaders* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QByteArray  PythonQtWrapper_QHttpHeaders::combinedValue(QHttpHeaders* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->combinedValue(name));
}

QByteArray  PythonQtWrapper_QHttpHeaders::combinedValue(QHttpHeaders* theWrappedObject, QHttpHeaders::WellKnownHeader  name) const
{
  return ( theWrappedObject->combinedValue(name));
}

bool  PythonQtWrapper_QHttpHeaders::contains(QHttpHeaders* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->contains(name));
}

bool  PythonQtWrapper_QHttpHeaders::contains(QHttpHeaders* theWrappedObject, QHttpHeaders::WellKnownHeader  name) const
{
  return ( theWrappedObject->contains(name));
}

QHttpHeaders  PythonQtWrapper_QHttpHeaders::static_QHttpHeaders_fromListOfPairs(const QList<std::pair<QByteArray , QByteArray >  >&  headers)
{
  return (QHttpHeaders::fromListOfPairs(headers));
}

QHttpHeaders  PythonQtWrapper_QHttpHeaders::static_QHttpHeaders_fromMultiMap(const QMultiMap<QByteArray , QByteArray >&  headers)
{
  return (QHttpHeaders::fromMultiMap(headers));
}

bool  PythonQtWrapper_QHttpHeaders::insert(QHttpHeaders* theWrappedObject, qsizetype  i, QAnyStringView  name, QAnyStringView  value)
{
  return ( theWrappedObject->insert(i, name, value));
}

bool  PythonQtWrapper_QHttpHeaders::insert(QHttpHeaders* theWrappedObject, qsizetype  i, QHttpHeaders::WellKnownHeader  name, QAnyStringView  value)
{
  return ( theWrappedObject->insert(i, name, value));
}

bool  PythonQtWrapper_QHttpHeaders::isEmpty(QHttpHeaders* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QLatin1String  PythonQtWrapper_QHttpHeaders::nameAt(QHttpHeaders* theWrappedObject, qsizetype  i) const
{
  return ( theWrappedObject->nameAt(i));
}

QHttpHeaders*  PythonQtWrapper_QHttpHeaders::operator_assign(QHttpHeaders* theWrappedObject, const QHttpHeaders&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QHttpHeaders::removeAll(QHttpHeaders* theWrappedObject, QAnyStringView  name)
{
  ( theWrappedObject->removeAll(name));
}

void PythonQtWrapper_QHttpHeaders::removeAll(QHttpHeaders* theWrappedObject, QHttpHeaders::WellKnownHeader  name)
{
  ( theWrappedObject->removeAll(name));
}

void PythonQtWrapper_QHttpHeaders::removeAt(QHttpHeaders* theWrappedObject, qsizetype  i)
{
  ( theWrappedObject->removeAt(i));
}

bool  PythonQtWrapper_QHttpHeaders::replace(QHttpHeaders* theWrappedObject, qsizetype  i, QAnyStringView  name, QAnyStringView  newValue)
{
  return ( theWrappedObject->replace(i, name, newValue));
}

bool  PythonQtWrapper_QHttpHeaders::replace(QHttpHeaders* theWrappedObject, qsizetype  i, QHttpHeaders::WellKnownHeader  name, QAnyStringView  newValue)
{
  return ( theWrappedObject->replace(i, name, newValue));
}

bool  PythonQtWrapper_QHttpHeaders::replaceOrAppend(QHttpHeaders* theWrappedObject, QAnyStringView  name, QAnyStringView  newValue)
{
  return ( theWrappedObject->replaceOrAppend(name, newValue));
}

bool  PythonQtWrapper_QHttpHeaders::replaceOrAppend(QHttpHeaders* theWrappedObject, QHttpHeaders::WellKnownHeader  name, QAnyStringView  newValue)
{
  return ( theWrappedObject->replaceOrAppend(name, newValue));
}

void PythonQtWrapper_QHttpHeaders::reserve(QHttpHeaders* theWrappedObject, qsizetype  size)
{
  ( theWrappedObject->reserve(size));
}

void PythonQtWrapper_QHttpHeaders::setDateTimeValue(QHttpHeaders* theWrappedObject, QAnyStringView  name, const QDateTime&  dateTime)
{
  ( theWrappedObject->setDateTimeValue(name, dateTime));
}

void PythonQtWrapper_QHttpHeaders::setDateTimeValue(QHttpHeaders* theWrappedObject, QHttpHeaders::WellKnownHeader  name, const QDateTime&  dateTime)
{
  ( theWrappedObject->setDateTimeValue(name, dateTime));
}

qsizetype  PythonQtWrapper_QHttpHeaders::size(QHttpHeaders* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QHttpHeaders::swap(QHttpHeaders* theWrappedObject, QHttpHeaders&  other)
{
  ( theWrappedObject->swap(other));
}

QList<std::pair<QByteArray , QByteArray >  >  PythonQtWrapper_QHttpHeaders::toListOfPairs(QHttpHeaders* theWrappedObject) const
{
  return ( theWrappedObject->toListOfPairs());
}

QMultiMap<QByteArray , QByteArray >  PythonQtWrapper_QHttpHeaders::toMultiMap(QHttpHeaders* theWrappedObject) const
{
  return ( theWrappedObject->toMultiMap());
}

QByteArrayView  PythonQtWrapper_QHttpHeaders::value(QHttpHeaders* theWrappedObject, QAnyStringView  name, QByteArrayView  defaultValue) const
{
  return ( theWrappedObject->value(name, defaultValue));
}

QByteArrayView  PythonQtWrapper_QHttpHeaders::value(QHttpHeaders* theWrappedObject, QHttpHeaders::WellKnownHeader  name, QByteArrayView  defaultValue) const
{
  return ( theWrappedObject->value(name, defaultValue));
}

QByteArrayView  PythonQtWrapper_QHttpHeaders::valueAt(QHttpHeaders* theWrappedObject, qsizetype  i) const
{
  return ( theWrappedObject->valueAt(i));
}

QList<QByteArray >  PythonQtWrapper_QHttpHeaders::values(QHttpHeaders* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->values(name));
}

QList<QByteArray >  PythonQtWrapper_QHttpHeaders::values(QHttpHeaders* theWrappedObject, QHttpHeaders::WellKnownHeader  name) const
{
  return ( theWrappedObject->values(name));
}

QByteArrayView  PythonQtWrapper_QHttpHeaders::static_QHttpHeaders_wellKnownHeaderName(QHttpHeaders::WellKnownHeader  name)
{
  return (QHttpHeaders::wellKnownHeaderName(name));
}

QString PythonQtWrapper_QHttpHeaders::py_toString(QHttpHeaders* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QHttpMultiPart::~PythonQtShell_QHttpMultiPart() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHttpMultiPart::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHttpMultiPart::childEvent(event0);
}
void PythonQtShell_QHttpMultiPart::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHttpMultiPart::customEvent(event0);
}
bool  PythonQtShell_QHttpMultiPart::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHttpMultiPart::event(event0);
}
bool  PythonQtShell_QHttpMultiPart::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHttpMultiPart::eventFilter(watched0, event1);
}
void PythonQtShell_QHttpMultiPart::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHttpMultiPart::timerEvent(event0);
}
QHttpMultiPart* PythonQtWrapper_QHttpMultiPart::new_QHttpMultiPart(QHttpMultiPart::ContentType  contentType, QObject*  parent)
{ 
return new PythonQtShell_QHttpMultiPart(contentType, parent); }

QHttpMultiPart* PythonQtWrapper_QHttpMultiPart::new_QHttpMultiPart(QObject*  parent)
{ 
return new PythonQtShell_QHttpMultiPart(parent); }

const QMetaObject* PythonQtShell_QHttpMultiPart::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QHttpMultiPart::staticMetaObject);
  } else {
    return &QHttpMultiPart::staticMetaObject;
  }
}
int PythonQtShell_QHttpMultiPart::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QHttpMultiPart::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QHttpMultiPart::append(QHttpMultiPart* theWrappedObject, const QHttpPart&  httpPart)
{
  ( theWrappedObject->append(httpPart));
}

QByteArray  PythonQtWrapper_QHttpMultiPart::boundary(QHttpMultiPart* theWrappedObject) const
{
  return ( theWrappedObject->boundary());
}

void PythonQtWrapper_QHttpMultiPart::setBoundary(QHttpMultiPart* theWrappedObject, const QByteArray&  boundary)
{
  ( theWrappedObject->setBoundary(boundary));
}

void PythonQtWrapper_QHttpMultiPart::setContentType(QHttpMultiPart* theWrappedObject, QHttpMultiPart::ContentType  contentType)
{
  ( theWrappedObject->setContentType(contentType));
}



QHttpPart* PythonQtWrapper_QHttpPart::new_QHttpPart()
{ 
return new QHttpPart(); }

QHttpPart* PythonQtWrapper_QHttpPart::new_QHttpPart(const QHttpPart&  other)
{ 
return new QHttpPart(other); }

bool  PythonQtWrapper_QHttpPart::__ne__(QHttpPart* theWrappedObject, const QHttpPart&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QHttpPart*  PythonQtWrapper_QHttpPart::operator_assign(QHttpPart* theWrappedObject, const QHttpPart&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QHttpPart::__eq__(QHttpPart* theWrappedObject, const QHttpPart&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QHttpPart::setBody(QHttpPart* theWrappedObject, const QByteArray&  body)
{
  ( theWrappedObject->setBody(body));
}

void PythonQtWrapper_QHttpPart::setBodyDevice(QHttpPart* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setBodyDevice(device));
}

void PythonQtWrapper_QHttpPart::setHeader(QHttpPart* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( theWrappedObject->setHeader(header, value));
}

void PythonQtWrapper_QHttpPart::setRawHeader(QHttpPart* theWrappedObject, const QByteArray&  headerName, const QByteArray&  headerValue)
{
  ( theWrappedObject->setRawHeader(headerName, headerValue));
}

void PythonQtWrapper_QHttpPart::swap(QHttpPart* theWrappedObject, QHttpPart&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QHttpPart::py_toString(QHttpPart* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QIPv6Address::~PythonQtShell_QIPv6Address() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QIPv6Address* PythonQtWrapper_QIPv6Address::new_QIPv6Address()
{ 
return new PythonQtShell_QIPv6Address(); }



PythonQtShell_QLocalServer::~PythonQtShell_QLocalServer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QLocalServer::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalServer::childEvent(event0);
}
void PythonQtShell_QLocalServer::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalServer::customEvent(event0);
}
bool  PythonQtShell_QLocalServer::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalServer::event(event0);
}
bool  PythonQtShell_QLocalServer::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalServer::eventFilter(watched0, event1);
}
bool  PythonQtShell_QLocalServer::hasPendingConnections() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hasPendingConnections");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasPendingConnections", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalServer::hasPendingConnections();
}
void PythonQtShell_QLocalServer::incomingConnection(quintptr  socketDescriptor0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("incomingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "quintptr"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&socketDescriptor0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalServer::incomingConnection(socketDescriptor0);
}
QLocalSocket*  PythonQtShell_QLocalServer::nextPendingConnection()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("nextPendingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLocalSocket*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLocalSocket* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("nextPendingConnection", methodInfo, result);
          } else {
            returnValue = *((QLocalSocket**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalServer::nextPendingConnection();
}
void PythonQtShell_QLocalServer::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalServer::timerEvent(event0);
}
QLocalServer* PythonQtWrapper_QLocalServer::new_QLocalServer(QObject*  parent)
{ 
return new PythonQtShell_QLocalServer(parent); }

const QMetaObject* PythonQtShell_QLocalServer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLocalServer::staticMetaObject);
  } else {
    return &QLocalServer::staticMetaObject;
  }
}
int PythonQtShell_QLocalServer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLocalServer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QLocalServer::addPendingConnection(QLocalServer* theWrappedObject, QLocalSocket*  socket)
{
  ( ((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->promoted_addPendingConnection(socket));
}

void PythonQtWrapper_QLocalServer::close(QLocalServer* theWrappedObject)
{
  ( theWrappedObject->close());
}

QString  PythonQtWrapper_QLocalServer::errorString(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QLocalServer::fullServerName(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->fullServerName());
}

bool  PythonQtWrapper_QLocalServer::hasPendingConnections(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingConnections());
}

void PythonQtWrapper_QLocalServer::incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor)
{
  ( ((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->promoted_incomingConnection(socketDescriptor));
}

bool  PythonQtWrapper_QLocalServer::isListening(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->isListening());
}

bool  PythonQtWrapper_QLocalServer::listen(QLocalServer* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->listen(name));
}

bool  PythonQtWrapper_QLocalServer::listen(QLocalServer* theWrappedObject, qintptr  socketDescriptor)
{
  return ( theWrappedObject->listen(socketDescriptor));
}

int  PythonQtWrapper_QLocalServer::listenBacklogSize(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->listenBacklogSize());
}

int  PythonQtWrapper_QLocalServer::maxPendingConnections(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->maxPendingConnections());
}

QLocalSocket*  PythonQtWrapper_QLocalServer::nextPendingConnection(QLocalServer* theWrappedObject)
{
  return ( theWrappedObject->nextPendingConnection());
}

bool  PythonQtWrapper_QLocalServer::static_QLocalServer_removeServer(const QString&  name)
{
  return (QLocalServer::removeServer(name));
}

QAbstractSocket::SocketError  PythonQtWrapper_QLocalServer::serverError(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->serverError());
}

QString  PythonQtWrapper_QLocalServer::serverName(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->serverName());
}

void PythonQtWrapper_QLocalServer::setListenBacklogSize(QLocalServer* theWrappedObject, int  size)
{
  ( theWrappedObject->setListenBacklogSize(size));
}

void PythonQtWrapper_QLocalServer::setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections)
{
  ( theWrappedObject->setMaxPendingConnections(numConnections));
}

void PythonQtWrapper_QLocalServer::setSocketOptions(QLocalServer* theWrappedObject, QLocalServer::SocketOptions  options)
{
  ( theWrappedObject->setSocketOptions(options));
}

qintptr  PythonQtWrapper_QLocalServer::socketDescriptor(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

QLocalServer::SocketOptions  PythonQtWrapper_QLocalServer::socketOptions(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->socketOptions());
}

bool  PythonQtWrapper_QLocalServer::waitForNewConnection(QLocalServer* theWrappedObject, int  msec, bool*  timedOut)
{
  return ( theWrappedObject->waitForNewConnection(msec, timedOut));
}



PythonQtShell_QLocalSocket::~PythonQtShell_QLocalSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QLocalSocket::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::atEnd();
}
qint64  PythonQtShell_QLocalSocket::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::bytesAvailable();
}
qint64  PythonQtShell_QLocalSocket::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::bytesToWrite();
}
bool  PythonQtShell_QLocalSocket::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::canReadLine();
}
void PythonQtShell_QLocalSocket::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalSocket::childEvent(event0);
}
void PythonQtShell_QLocalSocket::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalSocket::close();
}
void PythonQtShell_QLocalSocket::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalSocket::customEvent(event0);
}
bool  PythonQtShell_QLocalSocket::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::event(event0);
}
bool  PythonQtShell_QLocalSocket::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QLocalSocket::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::isSequential();
}
bool  PythonQtShell_QLocalSocket::open(QIODeviceBase::OpenMode  openMode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODeviceBase::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&openMode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::open(openMode0);
}
qint64  PythonQtShell_QLocalSocket::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::pos();
}
qint64  PythonQtShell_QLocalSocket::readData(char*  arg__1, qint64  arg__2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&arg__1, (void*)&arg__2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::readData(arg__1, arg__2);
}
qint64  PythonQtShell_QLocalSocket::readLineData(char*  data0, qint64  maxSize1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxSize1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::readLineData(data0, maxSize1);
}
bool  PythonQtShell_QLocalSocket::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::reset();
}
bool  PythonQtShell_QLocalSocket::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::seek(pos0);
}
qint64  PythonQtShell_QLocalSocket::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::size();
}
qint64  PythonQtShell_QLocalSocket::skipData(qint64  maxSize0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("skipData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      qint64 returnValue{};
      void* args[2] = {nullptr, (void*)&maxSize0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("skipData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::skipData(maxSize0);
}
void PythonQtShell_QLocalSocket::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalSocket::timerEvent(event0);
}
bool  PythonQtShell_QLocalSocket::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QLocalSocket::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QLocalSocket::writeData(const char*  arg__1, qint64  arg__2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&arg__1, (void*)&arg__2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLocalSocket::writeData(arg__1, arg__2);
}
QLocalSocket* PythonQtWrapper_QLocalSocket::new_QLocalSocket(QObject*  parent)
{ 
return new PythonQtShell_QLocalSocket(parent); }

const QMetaObject* PythonQtShell_QLocalSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLocalSocket::staticMetaObject);
  } else {
    return &QLocalSocket::staticMetaObject;
  }
}
int PythonQtShell_QLocalSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLocalSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QLocalSocket::abort(QLocalSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

void PythonQtWrapper_QLocalSocket::connectToServer(QLocalSocket* theWrappedObject, QIODeviceBase::OpenMode  openMode)
{
  ( theWrappedObject->connectToServer(openMode));
}

void PythonQtWrapper_QLocalSocket::connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODeviceBase::OpenMode  openMode)
{
  ( theWrappedObject->connectToServer(name, openMode));
}

void PythonQtWrapper_QLocalSocket::disconnectFromServer(QLocalSocket* theWrappedObject)
{
  ( theWrappedObject->disconnectFromServer());
}

QLocalSocket::LocalSocketError  PythonQtWrapper_QLocalSocket::error(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QLocalSocket::flush(QLocalSocket* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

QString  PythonQtWrapper_QLocalSocket::fullServerName(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->fullServerName());
}

bool  PythonQtWrapper_QLocalSocket::isValid(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qint64  PythonQtWrapper_QLocalSocket::readBufferSize(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

QString  PythonQtWrapper_QLocalSocket::serverName(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->serverName());
}

void PythonQtWrapper_QLocalSocket::setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

void PythonQtWrapper_QLocalSocket::setServerName(QLocalSocket* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setServerName(name));
}

bool  PythonQtWrapper_QLocalSocket::setSocketDescriptor(QLocalSocket* theWrappedObject, qintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState, QIODeviceBase::OpenMode  openMode)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor, socketState, openMode));
}

void PythonQtWrapper_QLocalSocket::setSocketOptions(QLocalSocket* theWrappedObject, QLocalSocket::SocketOptions  option)
{
  ( theWrappedObject->setSocketOptions(option));
}

qintptr  PythonQtWrapper_QLocalSocket::socketDescriptor(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

QLocalSocket::SocketOptions  PythonQtWrapper_QLocalSocket::socketOptions(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketOptions());
}

QLocalSocket::LocalSocketState  PythonQtWrapper_QLocalSocket::state(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

bool  PythonQtWrapper_QLocalSocket::waitForConnected(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForConnected(msecs));
}

bool  PythonQtWrapper_QLocalSocket::waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDisconnected(msecs));
}



PythonQtShell_QNetworkAccessManager::~PythonQtShell_QNetworkAccessManager() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkAccessManager::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkAccessManager::childEvent(event0);
}
QNetworkReply*  PythonQtShell_QNetworkAccessManager::createRequest(QNetworkAccessManager::Operation  op0, const QNetworkRequest&  request1, QIODevice*  outgoingData2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("createRequest");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QNetworkReply*" , "QNetworkAccessManager::Operation" , "const QNetworkRequest&" , "QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QNetworkReply* returnValue{};
      void* args[4] = {nullptr, (void*)&op0, (void*)&request1, (void*)&outgoingData2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createRequest", methodInfo, result);
          } else {
            returnValue = *((QNetworkReply**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QNetworkAccessManager::createRequest(op0, request1, outgoingData2);
}
void PythonQtShell_QNetworkAccessManager::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkAccessManager::customEvent(event0);
}
bool  PythonQtShell_QNetworkAccessManager::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QNetworkAccessManager::event(event0);
}
bool  PythonQtShell_QNetworkAccessManager::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QNetworkAccessManager::eventFilter(watched0, event1);
}
QStringList  PythonQtShell_QNetworkAccessManager::supportedSchemes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("supportedSchemes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedSchemes", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QNetworkAccessManager::supportedSchemes();
}
void PythonQtShell_QNetworkAccessManager::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkAccessManager::timerEvent(event0);
}
QNetworkAccessManager* PythonQtWrapper_QNetworkAccessManager::new_QNetworkAccessManager(QObject*  parent)
{ 
return new PythonQtShell_QNetworkAccessManager(parent); }

const QMetaObject* PythonQtShell_QNetworkAccessManager::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkAccessManager::staticMetaObject);
  } else {
    return &QNetworkAccessManager::staticMetaObject;
  }
}
int PythonQtShell_QNetworkAccessManager::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkAccessManager::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QNetworkAccessManager::addStrictTransportSecurityHosts(QNetworkAccessManager* theWrappedObject, const QList<QHstsPolicy >&  knownHosts)
{
  ( theWrappedObject->addStrictTransportSecurityHosts(knownHosts));
}

bool  PythonQtWrapper_QNetworkAccessManager::autoDeleteReplies(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->autoDeleteReplies());
}

QAbstractNetworkCache*  PythonQtWrapper_QNetworkAccessManager::cache(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->cache());
}

void PythonQtWrapper_QNetworkAccessManager::clearAccessCache(QNetworkAccessManager* theWrappedObject)
{
  ( theWrappedObject->clearAccessCache());
}

void PythonQtWrapper_QNetworkAccessManager::clearConnectionCache(QNetworkAccessManager* theWrappedObject)
{
  ( theWrappedObject->clearConnectionCache());
}

void PythonQtWrapper_QNetworkAccessManager::connectToHost(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port)
{
  ( theWrappedObject->connectToHost(hostName, port));
}

void PythonQtWrapper_QNetworkAccessManager::connectToHostEncrypted(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port, const QSslConfiguration&  sslConfiguration)
{
  ( theWrappedObject->connectToHostEncrypted(hostName, port, sslConfiguration));
}

void PythonQtWrapper_QNetworkAccessManager::connectToHostEncrypted(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port, const QSslConfiguration&  sslConfiguration, const QString&  peerName)
{
  ( theWrappedObject->connectToHostEncrypted(hostName, port, sslConfiguration, peerName));
}

QNetworkCookieJar*  PythonQtWrapper_QNetworkAccessManager::cookieJar(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->cookieJar());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData)
{
  return ( ((PythonQtPublicPromoter_QNetworkAccessManager*)theWrappedObject)->promoted_createRequest(op, request, outgoingData));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::deleteResource(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->deleteResource(request));
}

void PythonQtWrapper_QNetworkAccessManager::enableStrictTransportSecurityStore(QNetworkAccessManager* theWrappedObject, bool  enabled, const QString&  storeDir)
{
  ( theWrappedObject->enableStrictTransportSecurityStore(enabled, storeDir));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->get(request));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->get(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->get(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->head(request));
}

bool  PythonQtWrapper_QNetworkAccessManager::isStrictTransportSecurityEnabled(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->isStrictTransportSecurityEnabled());
}

bool  PythonQtWrapper_QNetworkAccessManager::isStrictTransportSecurityStoreEnabled(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->isStrictTransportSecurityStoreEnabled());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart)
{
  return ( theWrappedObject->post(request, multiPart));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkProxy  PythonQtWrapper_QNetworkAccessManager::proxy(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

QNetworkProxyFactory*  PythonQtWrapper_QNetworkAccessManager::proxyFactory(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->proxyFactory());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart)
{
  return ( theWrappedObject->put(request, multiPart));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkRequest::RedirectPolicy  PythonQtWrapper_QNetworkAccessManager::redirectPolicy(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->redirectPolicy());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, QHttpMultiPart*  multiPart)
{
  return ( theWrappedObject->sendCustomRequest(request, verb, multiPart));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, QIODevice*  data)
{
  return ( theWrappedObject->sendCustomRequest(request, verb, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, const QByteArray&  data)
{
  return ( theWrappedObject->sendCustomRequest(request, verb, data));
}

void PythonQtWrapper_QNetworkAccessManager::setAutoDeleteReplies(QNetworkAccessManager* theWrappedObject, bool  autoDelete)
{
  ( theWrappedObject->setAutoDeleteReplies(autoDelete));
}

void PythonQtWrapper_QNetworkAccessManager::setCache(QNetworkAccessManager* theWrappedObject, QAbstractNetworkCache*  cache)
{
  ( theWrappedObject->setCache(cache));
}

void PythonQtWrapper_QNetworkAccessManager::setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar)
{
  ( theWrappedObject->setCookieJar(cookieJar));
}

void PythonQtWrapper_QNetworkAccessManager::setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy)
{
  ( theWrappedObject->setProxy(proxy));
}

void PythonQtWrapper_QNetworkAccessManager::setProxyFactory(QNetworkAccessManager* theWrappedObject, QNetworkProxyFactory*  factory)
{
  ( theWrappedObject->setProxyFactory(factory));
}

void PythonQtWrapper_QNetworkAccessManager::setRedirectPolicy(QNetworkAccessManager* theWrappedObject, QNetworkRequest::RedirectPolicy  policy)
{
  ( theWrappedObject->setRedirectPolicy(policy));
}

void PythonQtWrapper_QNetworkAccessManager::setStrictTransportSecurityEnabled(QNetworkAccessManager* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setStrictTransportSecurityEnabled(enabled));
}

void PythonQtWrapper_QNetworkAccessManager::setTransferTimeout(QNetworkAccessManager* theWrappedObject, int  timeout)
{
  ( theWrappedObject->setTransferTimeout(timeout));
}

QList<QHstsPolicy >  PythonQtWrapper_QNetworkAccessManager::strictTransportSecurityHosts(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->strictTransportSecurityHosts());
}

QStringList  PythonQtWrapper_QNetworkAccessManager::supportedSchemes(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->supportedSchemes());
}

int  PythonQtWrapper_QNetworkAccessManager::transferTimeout(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->transferTimeout());
}



QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry()
{ 
return new QNetworkAddressEntry(); }

QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry(const QNetworkAddressEntry&  other)
{ 
return new QNetworkAddressEntry(other); }

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::broadcast(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->broadcast());
}

void PythonQtWrapper_QNetworkAddressEntry::clearAddressLifetime(QNetworkAddressEntry* theWrappedObject)
{
  ( theWrappedObject->clearAddressLifetime());
}

QNetworkAddressEntry::DnsEligibilityStatus  PythonQtWrapper_QNetworkAddressEntry::dnsEligibility(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->dnsEligibility());
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::ip(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->ip());
}

bool  PythonQtWrapper_QNetworkAddressEntry::isLifetimeKnown(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->isLifetimeKnown());
}

bool  PythonQtWrapper_QNetworkAddressEntry::isPermanent(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->isPermanent());
}

bool  PythonQtWrapper_QNetworkAddressEntry::isTemporary(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->isTemporary());
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::netmask(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->netmask());
}

bool  PythonQtWrapper_QNetworkAddressEntry::__ne__(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkAddressEntry::__eq__(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const
{
  return ( (*theWrappedObject)== other);
}

QDeadlineTimer  PythonQtWrapper_QNetworkAddressEntry::preferredLifetime(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->preferredLifetime());
}

int  PythonQtWrapper_QNetworkAddressEntry::prefixLength(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->prefixLength());
}

void PythonQtWrapper_QNetworkAddressEntry::setAddressLifetime(QNetworkAddressEntry* theWrappedObject, QDeadlineTimer  preferred, QDeadlineTimer  validity)
{
  ( theWrappedObject->setAddressLifetime(preferred, validity));
}

void PythonQtWrapper_QNetworkAddressEntry::setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast)
{
  ( theWrappedObject->setBroadcast(newBroadcast));
}

void PythonQtWrapper_QNetworkAddressEntry::setDnsEligibility(QNetworkAddressEntry* theWrappedObject, QNetworkAddressEntry::DnsEligibilityStatus  status)
{
  ( theWrappedObject->setDnsEligibility(status));
}

void PythonQtWrapper_QNetworkAddressEntry::setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp)
{
  ( theWrappedObject->setIp(newIp));
}

void PythonQtWrapper_QNetworkAddressEntry::setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask)
{
  ( theWrappedObject->setNetmask(newNetmask));
}

void PythonQtWrapper_QNetworkAddressEntry::setPrefixLength(QNetworkAddressEntry* theWrappedObject, int  length)
{
  ( theWrappedObject->setPrefixLength(length));
}

void PythonQtWrapper_QNetworkAddressEntry::swap(QNetworkAddressEntry* theWrappedObject, QNetworkAddressEntry&  other)
{
  ( theWrappedObject->swap(other));
}

QDeadlineTimer  PythonQtWrapper_QNetworkAddressEntry::validityLifetime(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->validityLifetime());
}

QString PythonQtWrapper_QNetworkAddressEntry::py_toString(QNetworkAddressEntry* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QNetworkCacheMetaData* PythonQtWrapper_QNetworkCacheMetaData::new_QNetworkCacheMetaData()
{ 
return new QNetworkCacheMetaData(); }

QNetworkCacheMetaData* PythonQtWrapper_QNetworkCacheMetaData::new_QNetworkCacheMetaData(const QNetworkCacheMetaData&  other)
{ 
return new QNetworkCacheMetaData(other); }

QHash<QNetworkRequest::Attribute , QVariant >  PythonQtWrapper_QNetworkCacheMetaData::attributes(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

QDateTime  PythonQtWrapper_QNetworkCacheMetaData::expirationDate(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->expirationDate());
}

QHttpHeaders  PythonQtWrapper_QNetworkCacheMetaData::headers(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->headers());
}

bool  PythonQtWrapper_QNetworkCacheMetaData::isValid(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QDateTime  PythonQtWrapper_QNetworkCacheMetaData::lastModified(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

bool  PythonQtWrapper_QNetworkCacheMetaData::__ne__(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QNetworkCacheMetaData::writeTo(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QNetworkCacheMetaData::__eq__(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QNetworkCacheMetaData::readFrom(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QList<std::pair<QByteArray , QByteArray >  >  PythonQtWrapper_QNetworkCacheMetaData::rawHeaders(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaders());
}

bool  PythonQtWrapper_QNetworkCacheMetaData::saveToDisk(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->saveToDisk());
}

void PythonQtWrapper_QNetworkCacheMetaData::setAttributes(QNetworkCacheMetaData* theWrappedObject, const QHash<QNetworkRequest::Attribute , QVariant >&  attributes)
{
  ( theWrappedObject->setAttributes(attributes));
}

void PythonQtWrapper_QNetworkCacheMetaData::setExpirationDate(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime)
{
  ( theWrappedObject->setExpirationDate(dateTime));
}

void PythonQtWrapper_QNetworkCacheMetaData::setHeaders(QNetworkCacheMetaData* theWrappedObject, const QHttpHeaders&  headers)
{
  ( theWrappedObject->setHeaders(headers));
}

void PythonQtWrapper_QNetworkCacheMetaData::setLastModified(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime)
{
  ( theWrappedObject->setLastModified(dateTime));
}

void PythonQtWrapper_QNetworkCacheMetaData::setRawHeaders(QNetworkCacheMetaData* theWrappedObject, const QList<std::pair<QByteArray , QByteArray >  >&  headers)
{
  ( theWrappedObject->setRawHeaders(headers));
}

void PythonQtWrapper_QNetworkCacheMetaData::setSaveToDisk(QNetworkCacheMetaData* theWrappedObject, bool  allow)
{
  ( theWrappedObject->setSaveToDisk(allow));
}

void PythonQtWrapper_QNetworkCacheMetaData::setUrl(QNetworkCacheMetaData* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QNetworkCacheMetaData::swap(QNetworkCacheMetaData* theWrappedObject, QNetworkCacheMetaData&  other)
{
  ( theWrappedObject->swap(other));
}

QUrl  PythonQtWrapper_QNetworkCacheMetaData::url(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QNetworkCookie* PythonQtWrapper_QNetworkCookie::new_QNetworkCookie(const QByteArray&  name, const QByteArray&  value)
{ 
return new QNetworkCookie(name, value); }

QNetworkCookie* PythonQtWrapper_QNetworkCookie::new_QNetworkCookie(const QNetworkCookie&  other)
{ 
return new QNetworkCookie(other); }

QString  PythonQtWrapper_QNetworkCookie::domain(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->domain());
}

QDateTime  PythonQtWrapper_QNetworkCookie::expirationDate(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->expirationDate());
}

bool  PythonQtWrapper_QNetworkCookie::hasSameIdentifier(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const
{
  return ( theWrappedObject->hasSameIdentifier(other));
}

bool  PythonQtWrapper_QNetworkCookie::isHttpOnly(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isHttpOnly());
}

bool  PythonQtWrapper_QNetworkCookie::isSecure(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isSecure());
}

bool  PythonQtWrapper_QNetworkCookie::isSessionCookie(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isSessionCookie());
}

QByteArray  PythonQtWrapper_QNetworkCookie::name(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QNetworkCookie::normalize(QNetworkCookie* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->normalize(url));
}

bool  PythonQtWrapper_QNetworkCookie::__ne__(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkCookie::__eq__(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const
{
  return ( (*theWrappedObject)== other);
}

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookie::static_QNetworkCookie_parseCookies(QByteArrayView  cookieString)
{
  return (QNetworkCookie::parseCookies(cookieString));
}

QString  PythonQtWrapper_QNetworkCookie::path(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

QNetworkCookie::SameSite  PythonQtWrapper_QNetworkCookie::sameSitePolicy(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->sameSitePolicy());
}

void PythonQtWrapper_QNetworkCookie::setDomain(QNetworkCookie* theWrappedObject, const QString&  domain)
{
  ( theWrappedObject->setDomain(domain));
}

void PythonQtWrapper_QNetworkCookie::setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date)
{
  ( theWrappedObject->setExpirationDate(date));
}

void PythonQtWrapper_QNetworkCookie::setHttpOnly(QNetworkCookie* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setHttpOnly(enable));
}

void PythonQtWrapper_QNetworkCookie::setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName)
{
  ( theWrappedObject->setName(cookieName));
}

void PythonQtWrapper_QNetworkCookie::setPath(QNetworkCookie* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPath(path));
}

void PythonQtWrapper_QNetworkCookie::setSameSitePolicy(QNetworkCookie* theWrappedObject, QNetworkCookie::SameSite  sameSite)
{
  ( theWrappedObject->setSameSitePolicy(sameSite));
}

void PythonQtWrapper_QNetworkCookie::setSecure(QNetworkCookie* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setSecure(enable));
}

void PythonQtWrapper_QNetworkCookie::setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value)
{
  ( theWrappedObject->setValue(value));
}

void PythonQtWrapper_QNetworkCookie::swap(QNetworkCookie* theWrappedObject, QNetworkCookie&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QNetworkCookie::toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form) const
{
  return ( theWrappedObject->toRawForm(form));
}

QByteArray  PythonQtWrapper_QNetworkCookie::value(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

QString PythonQtWrapper_QNetworkCookie::py_toString(QNetworkCookie* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}


