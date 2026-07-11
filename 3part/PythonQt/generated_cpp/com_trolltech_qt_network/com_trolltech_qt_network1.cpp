#include "com_trolltech_qt_network1.h"
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
#include <qdatetime.h>
#include <qdtls.h>
#include <qhostaddress.h>
#include <qhttp1configuration.h>
#include <qhttp2configuration.h>
#include <qhttpheaders.h>
#include <qhttpmultipart.h>
#include <qiodevice.h>
#include <qjsondocument.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkcookie.h>
#include <qnetworkdatagram.h>
#include <qnetworkinformation.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qnetworkrequestfactory.h>
#include <qobject.h>
#include <qocspresponse.h>
#include <qrestreply.h>
#include <qssl.h>
#include <qsslcertificate.h>
#include <qsslcertificateextension.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qssldiffiehellmanparameters.h>
#include <qsslellipticcurve.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslpresharedkeyauthenticator.h>
#include <qsslsocket.h>
#include <qtcpsocket.h>
#include <qthread.h>
#include <qurl.h>
#include <qurlquery.h>

PythonQtShell_QNetworkCookieJar::~PythonQtShell_QNetworkCookieJar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkCookieJar::childEvent(QChildEvent*  event0)
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
  QNetworkCookieJar::childEvent(event0);
}
QList<QNetworkCookie >  PythonQtShell_QNetworkCookieJar::cookiesForUrl(const QUrl&  url0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("cookiesForUrl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QNetworkCookie >" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QNetworkCookie > returnValue{};
      void* args[2] = {nullptr, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("cookiesForUrl", methodInfo, result);
          } else {
            returnValue = *((QList<QNetworkCookie >*)args[0]);
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
  return QNetworkCookieJar::cookiesForUrl(url0);
}
void PythonQtShell_QNetworkCookieJar::customEvent(QEvent*  event0)
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
  QNetworkCookieJar::customEvent(event0);
}
bool  PythonQtShell_QNetworkCookieJar::deleteCookie(const QNetworkCookie&  cookie0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("deleteCookie");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QNetworkCookie&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&cookie0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("deleteCookie", methodInfo, result);
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
  return QNetworkCookieJar::deleteCookie(cookie0);
}
bool  PythonQtShell_QNetworkCookieJar::event(QEvent*  event0)
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
  return QNetworkCookieJar::event(event0);
}
bool  PythonQtShell_QNetworkCookieJar::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkCookieJar::eventFilter(watched0, event1);
}
bool  PythonQtShell_QNetworkCookieJar::insertCookie(const QNetworkCookie&  cookie0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("insertCookie");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QNetworkCookie&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&cookie0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("insertCookie", methodInfo, result);
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
  return QNetworkCookieJar::insertCookie(cookie0);
}
bool  PythonQtShell_QNetworkCookieJar::setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList0, const QUrl&  url1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setCookiesFromUrl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QList<QNetworkCookie >&" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&cookieList0, (void*)&url1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setCookiesFromUrl", methodInfo, result);
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
  return QNetworkCookieJar::setCookiesFromUrl(cookieList0, url1);
}
void PythonQtShell_QNetworkCookieJar::timerEvent(QTimerEvent*  event0)
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
  QNetworkCookieJar::timerEvent(event0);
}
bool  PythonQtShell_QNetworkCookieJar::updateCookie(const QNetworkCookie&  cookie0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateCookie");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QNetworkCookie&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&cookie0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("updateCookie", methodInfo, result);
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
  return QNetworkCookieJar::updateCookie(cookie0);
}
bool  PythonQtShell_QNetworkCookieJar::validateCookie(const QNetworkCookie&  cookie0, const QUrl&  url1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("validateCookie");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QNetworkCookie&" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&cookie0, (void*)&url1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("validateCookie", methodInfo, result);
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
  return QNetworkCookieJar::validateCookie(cookie0, url1);
}
QNetworkCookieJar* PythonQtWrapper_QNetworkCookieJar::new_QNetworkCookieJar(QObject*  parent)
{ 
return new PythonQtShell_QNetworkCookieJar(parent); }

const QMetaObject* PythonQtShell_QNetworkCookieJar::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkCookieJar::staticMetaObject);
  } else {
    return &QNetworkCookieJar::staticMetaObject;
  }
}
int PythonQtShell_QNetworkCookieJar::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkCookieJar::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookieJar::allCookies(QNetworkCookieJar* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_allCookies());
}

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookieJar::cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->cookiesForUrl(url));
}

bool  PythonQtWrapper_QNetworkCookieJar::deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie)
{
  return ( theWrappedObject->deleteCookie(cookie));
}

bool  PythonQtWrapper_QNetworkCookieJar::insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie)
{
  return ( theWrappedObject->insertCookie(cookie));
}

void PythonQtWrapper_QNetworkCookieJar::setAllCookies(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList)
{
  ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_setAllCookies(cookieList));
}

bool  PythonQtWrapper_QNetworkCookieJar::setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url)
{
  return ( theWrappedObject->setCookiesFromUrl(cookieList, url));
}

bool  PythonQtWrapper_QNetworkCookieJar::updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie)
{
  return ( theWrappedObject->updateCookie(cookie));
}

bool  PythonQtWrapper_QNetworkCookieJar::validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_validateCookie(cookie, url));
}



QNetworkDatagram* PythonQtWrapper_QNetworkDatagram::new_QNetworkDatagram()
{ 
return new QNetworkDatagram(); }

QNetworkDatagram* PythonQtWrapper_QNetworkDatagram::new_QNetworkDatagram(const QByteArray&  data, const QHostAddress&  destinationAddress, unsigned short  port)
{ 
return new QNetworkDatagram(data, destinationAddress, port); }

QNetworkDatagram* PythonQtWrapper_QNetworkDatagram::new_QNetworkDatagram(const QNetworkDatagram&  other)
{ 
return new QNetworkDatagram(other); }

void PythonQtWrapper_QNetworkDatagram::clear(QNetworkDatagram* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QByteArray  PythonQtWrapper_QNetworkDatagram::data(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QHostAddress  PythonQtWrapper_QNetworkDatagram::destinationAddress(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->destinationAddress());
}

int  PythonQtWrapper_QNetworkDatagram::destinationPort(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->destinationPort());
}

int  PythonQtWrapper_QNetworkDatagram::hopLimit(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->hopLimit());
}

uint  PythonQtWrapper_QNetworkDatagram::interfaceIndex(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->interfaceIndex());
}

bool  PythonQtWrapper_QNetworkDatagram::isNull(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QNetworkDatagram::isValid(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QNetworkDatagram  PythonQtWrapper_QNetworkDatagram::makeReply(QNetworkDatagram* theWrappedObject, const QByteArray&  paylaod) const
{
  return ( theWrappedObject->makeReply(paylaod));
}

QNetworkDatagram*  PythonQtWrapper_QNetworkDatagram::operator_assign(QNetworkDatagram* theWrappedObject, const QNetworkDatagram&  other)
{
  return &( (*theWrappedObject)= other);
}

QHostAddress  PythonQtWrapper_QNetworkDatagram::senderAddress(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->senderAddress());
}

int  PythonQtWrapper_QNetworkDatagram::senderPort(QNetworkDatagram* theWrappedObject) const
{
  return ( theWrappedObject->senderPort());
}

void PythonQtWrapper_QNetworkDatagram::setData(QNetworkDatagram* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->setData(data));
}

void PythonQtWrapper_QNetworkDatagram::setDestination(QNetworkDatagram* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
  ( theWrappedObject->setDestination(address, port));
}

void PythonQtWrapper_QNetworkDatagram::setHopLimit(QNetworkDatagram* theWrappedObject, int  count)
{
  ( theWrappedObject->setHopLimit(count));
}

void PythonQtWrapper_QNetworkDatagram::setInterfaceIndex(QNetworkDatagram* theWrappedObject, uint  index)
{
  ( theWrappedObject->setInterfaceIndex(index));
}

void PythonQtWrapper_QNetworkDatagram::setSender(QNetworkDatagram* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
  ( theWrappedObject->setSender(address, port));
}

void PythonQtWrapper_QNetworkDatagram::swap(QNetworkDatagram* theWrappedObject, QNetworkDatagram&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QNetworkDiskCache::~PythonQtShell_QNetworkDiskCache() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
qint64  PythonQtShell_QNetworkDiskCache::cacheSize() const
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
  return QNetworkDiskCache::cacheSize();
}
void PythonQtShell_QNetworkDiskCache::childEvent(QChildEvent*  event0)
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
  QNetworkDiskCache::childEvent(event0);
}
void PythonQtShell_QNetworkDiskCache::clear()
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
  QNetworkDiskCache::clear();
}
void PythonQtShell_QNetworkDiskCache::customEvent(QEvent*  event0)
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
  QNetworkDiskCache::customEvent(event0);
}
QIODevice*  PythonQtShell_QNetworkDiskCache::data(const QUrl&  url0)
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
  return QNetworkDiskCache::data(url0);
}
bool  PythonQtShell_QNetworkDiskCache::event(QEvent*  event0)
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
  return QNetworkDiskCache::event(event0);
}
bool  PythonQtShell_QNetworkDiskCache::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkDiskCache::eventFilter(watched0, event1);
}
qint64  PythonQtShell_QNetworkDiskCache::expire()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("expire");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("expire", methodInfo, result);
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
  return QNetworkDiskCache::expire();
}
void PythonQtShell_QNetworkDiskCache::insert(QIODevice*  device0)
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
  QNetworkDiskCache::insert(device0);
}
QNetworkCacheMetaData  PythonQtShell_QNetworkDiskCache::metaData(const QUrl&  url0)
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
  return QNetworkDiskCache::metaData(url0);
}
QIODevice*  PythonQtShell_QNetworkDiskCache::prepare(const QNetworkCacheMetaData&  metaData0)
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
  return QNetworkDiskCache::prepare(metaData0);
}
bool  PythonQtShell_QNetworkDiskCache::remove(const QUrl&  url0)
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
  return QNetworkDiskCache::remove(url0);
}
void PythonQtShell_QNetworkDiskCache::timerEvent(QTimerEvent*  event0)
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
  QNetworkDiskCache::timerEvent(event0);
}
void PythonQtShell_QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData&  metaData0)
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
  QNetworkDiskCache::updateMetaData(metaData0);
}
QNetworkDiskCache* PythonQtWrapper_QNetworkDiskCache::new_QNetworkDiskCache(QObject*  parent)
{ 
return new PythonQtShell_QNetworkDiskCache(parent); }

const QMetaObject* PythonQtShell_QNetworkDiskCache::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkDiskCache::staticMetaObject);
  } else {
    return &QNetworkDiskCache::staticMetaObject;
  }
}
int PythonQtShell_QNetworkDiskCache::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkDiskCache::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QNetworkDiskCache::cacheDirectory(QNetworkDiskCache* theWrappedObject) const
{
  return ( theWrappedObject->cacheDirectory());
}

qint64  PythonQtWrapper_QNetworkDiskCache::expire(QNetworkDiskCache* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_expire());
}

QNetworkCacheMetaData  PythonQtWrapper_QNetworkDiskCache::fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->fileMetaData(fileName));
}

qint64  PythonQtWrapper_QNetworkDiskCache::maximumCacheSize(QNetworkDiskCache* theWrappedObject) const
{
  return ( theWrappedObject->maximumCacheSize());
}

void PythonQtWrapper_QNetworkDiskCache::setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir)
{
  ( theWrappedObject->setCacheDirectory(cacheDir));
}

void PythonQtWrapper_QNetworkDiskCache::setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setMaximumCacheSize(size));
}



QStringList  PythonQtWrapper_QNetworkInformation::static_QNetworkInformation_availableBackends()
{
  return (QNetworkInformation::availableBackends());
}

QString  PythonQtWrapper_QNetworkInformation::backendName(QNetworkInformation* theWrappedObject) const
{
  return ( theWrappedObject->backendName());
}

QNetworkInformation*  PythonQtWrapper_QNetworkInformation::static_QNetworkInformation_instance()
{
  return (QNetworkInformation::instance());
}

bool  PythonQtWrapper_QNetworkInformation::isBehindCaptivePortal(QNetworkInformation* theWrappedObject) const
{
  return ( theWrappedObject->isBehindCaptivePortal());
}

bool  PythonQtWrapper_QNetworkInformation::isMetered(QNetworkInformation* theWrappedObject) const
{
  return ( theWrappedObject->isMetered());
}

bool  PythonQtWrapper_QNetworkInformation::static_QNetworkInformation_load(QNetworkInformation::Features  features)
{
  return (QNetworkInformation::load(features));
}

bool  PythonQtWrapper_QNetworkInformation::static_QNetworkInformation_load(QStringView  backend)
{
  return (QNetworkInformation::load(backend));
}

bool  PythonQtWrapper_QNetworkInformation::static_QNetworkInformation_loadBackendByFeatures(QNetworkInformation::Features  features)
{
  return (QNetworkInformation::loadBackendByFeatures(features));
}

bool  PythonQtWrapper_QNetworkInformation::static_QNetworkInformation_loadBackendByName(QStringView  backend)
{
  return (QNetworkInformation::loadBackendByName(backend));
}

bool  PythonQtWrapper_QNetworkInformation::static_QNetworkInformation_loadDefaultBackend()
{
  return (QNetworkInformation::loadDefaultBackend());
}

QNetworkInformation::Reachability  PythonQtWrapper_QNetworkInformation::reachability(QNetworkInformation* theWrappedObject) const
{
  return ( theWrappedObject->reachability());
}

QNetworkInformation::Features  PythonQtWrapper_QNetworkInformation::supportedFeatures(QNetworkInformation* theWrappedObject) const
{
  return ( theWrappedObject->supportedFeatures());
}

bool  PythonQtWrapper_QNetworkInformation::supports(QNetworkInformation* theWrappedObject, QNetworkInformation::Features  features) const
{
  return ( theWrappedObject->supports(features));
}

QNetworkInformation::TransportMedium  PythonQtWrapper_QNetworkInformation::transportMedium(QNetworkInformation* theWrappedObject) const
{
  return ( theWrappedObject->transportMedium());
}



QNetworkInterface* PythonQtWrapper_QNetworkInterface::new_QNetworkInterface()
{ 
return new QNetworkInterface(); }

QNetworkInterface* PythonQtWrapper_QNetworkInterface::new_QNetworkInterface(const QNetworkInterface&  other)
{ 
return new QNetworkInterface(other); }

QList<QNetworkAddressEntry >  PythonQtWrapper_QNetworkInterface::addressEntries(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->addressEntries());
}

QList<QHostAddress >  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_allAddresses()
{
  return (QNetworkInterface::allAddresses());
}

QList<QNetworkInterface >  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_allInterfaces()
{
  return (QNetworkInterface::allInterfaces());
}

QNetworkInterface::InterfaceFlags  PythonQtWrapper_QNetworkInterface::flags(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QString  PythonQtWrapper_QNetworkInterface::hardwareAddress(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->hardwareAddress());
}

QString  PythonQtWrapper_QNetworkInterface::humanReadableName(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->humanReadableName());
}

int  PythonQtWrapper_QNetworkInterface::index(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->index());
}

QNetworkInterface  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceFromIndex(int  index)
{
  return (QNetworkInterface::interfaceFromIndex(index));
}

QNetworkInterface  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceFromName(const QString&  name)
{
  return (QNetworkInterface::interfaceFromName(name));
}

int  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceIndexFromName(const QString&  name)
{
  return (QNetworkInterface::interfaceIndexFromName(name));
}

QString  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceNameFromIndex(int  index)
{
  return (QNetworkInterface::interfaceNameFromIndex(index));
}

bool  PythonQtWrapper_QNetworkInterface::isValid(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QNetworkInterface::maximumTransmissionUnit(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->maximumTransmissionUnit());
}

QString  PythonQtWrapper_QNetworkInterface::name(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QNetworkInterface::swap(QNetworkInterface* theWrappedObject, QNetworkInterface&  other)
{
  ( theWrappedObject->swap(other));
}

QNetworkInterface::InterfaceType  PythonQtWrapper_QNetworkInterface::type(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QNetworkInterface::py_toString(QNetworkInterface* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy()
{ 
return new QNetworkProxy(); }

QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName, unsigned short  port, const QString&  user, const QString&  password)
{ 
return new QNetworkProxy(type, hostName, port, user, password); }

QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy(const QNetworkProxy&  other)
{ 
return new QNetworkProxy(other); }

QNetworkProxy  PythonQtWrapper_QNetworkProxy::static_QNetworkProxy_applicationProxy()
{
  return (QNetworkProxy::applicationProxy());
}

QNetworkProxy::Capabilities  PythonQtWrapper_QNetworkProxy::capabilities(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->capabilities());
}

bool  PythonQtWrapper_QNetworkProxy::hasRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->hasRawHeader(headerName));
}

QVariant  PythonQtWrapper_QNetworkProxy::header(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
  return ( theWrappedObject->header(header));
}

QHttpHeaders  PythonQtWrapper_QNetworkProxy::headers(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->headers());
}

QString  PythonQtWrapper_QNetworkProxy::hostName(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

bool  PythonQtWrapper_QNetworkProxy::isCachingProxy(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->isCachingProxy());
}

bool  PythonQtWrapper_QNetworkProxy::isTransparentProxy(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->isTransparentProxy());
}

bool  PythonQtWrapper_QNetworkProxy::__ne__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkProxy::__eq__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QNetworkProxy::password(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

unsigned short  PythonQtWrapper_QNetworkProxy::port(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

QByteArray  PythonQtWrapper_QNetworkProxy::rawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->rawHeader(headerName));
}

QList<QByteArray >  PythonQtWrapper_QNetworkProxy::rawHeaderList(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaderList());
}

void PythonQtWrapper_QNetworkProxy::static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy)
{
  (QNetworkProxy::setApplicationProxy(proxy));
}

void PythonQtWrapper_QNetworkProxy::setCapabilities(QNetworkProxy* theWrappedObject, QNetworkProxy::Capabilities  capab)
{
  ( theWrappedObject->setCapabilities(capab));
}

void PythonQtWrapper_QNetworkProxy::setHeader(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( theWrappedObject->setHeader(header, value));
}

void PythonQtWrapper_QNetworkProxy::setHeaders(QNetworkProxy* theWrappedObject, const QHttpHeaders&  newHeaders)
{
  ( theWrappedObject->setHeaders(newHeaders));
}

void PythonQtWrapper_QNetworkProxy::setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName)
{
  ( theWrappedObject->setHostName(hostName));
}

void PythonQtWrapper_QNetworkProxy::setPassword(QNetworkProxy* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

void PythonQtWrapper_QNetworkProxy::setPort(QNetworkProxy* theWrappedObject, unsigned short  port)
{
  ( theWrappedObject->setPort(port));
}

void PythonQtWrapper_QNetworkProxy::setRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( theWrappedObject->setRawHeader(headerName, value));
}

void PythonQtWrapper_QNetworkProxy::setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type)
{
  ( theWrappedObject->setType(type));
}

void PythonQtWrapper_QNetworkProxy::setUser(QNetworkProxy* theWrappedObject, const QString&  userName)
{
  ( theWrappedObject->setUser(userName));
}

void PythonQtWrapper_QNetworkProxy::swap(QNetworkProxy* theWrappedObject, QNetworkProxy&  other)
{
  ( theWrappedObject->swap(other));
}

QNetworkProxy::ProxyType  PythonQtWrapper_QNetworkProxy::type(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString  PythonQtWrapper_QNetworkProxy::user(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->user());
}

QString PythonQtWrapper_QNetworkProxy::py_toString(QNetworkProxy* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QNetworkProxyFactory::~PythonQtShell_QNetworkProxyFactory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QList<QNetworkProxy >  PythonQtShell_QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery&  query0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("queryProxy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QNetworkProxy >" , "const QNetworkProxyQuery&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QNetworkProxy > returnValue{};
      void* args[2] = {nullptr, (void*)&query0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("queryProxy", methodInfo, result);
          } else {
            returnValue = *((QList<QNetworkProxy >*)args[0]);
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
  return QList<QNetworkProxy >();
}
QNetworkProxyFactory* PythonQtWrapper_QNetworkProxyFactory::new_QNetworkProxyFactory()
{ 
return new PythonQtShell_QNetworkProxyFactory(); }

QList<QNetworkProxy >  PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_proxyForQuery(const QNetworkProxyQuery&  query)
{
  return (QNetworkProxyFactory::proxyForQuery(query));
}

QList<QNetworkProxy >  PythonQtWrapper_QNetworkProxyFactory::queryProxy(QNetworkProxyFactory* theWrappedObject, const QNetworkProxyQuery&  query)
{
  return ( theWrappedObject->queryProxy(query));
}

void PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory*  factory)
{
  (QNetworkProxyFactory::setApplicationProxyFactory(factory));
}

void PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_setUseSystemConfiguration(bool  enable)
{
  (QNetworkProxyFactory::setUseSystemConfiguration(enable));
}

QList<QNetworkProxy >  PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_systemProxyForQuery(const QNetworkProxyQuery&  query)
{
  return (QNetworkProxyFactory::systemProxyForQuery(query));
}

bool  PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_usesSystemConfiguration()
{
  return (QNetworkProxyFactory::usesSystemConfiguration());
}



QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery()
{ 
return new QNetworkProxyQuery(); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QNetworkProxyQuery&  other)
{ 
return new QNetworkProxyQuery(other); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QString&  hostname, int  port, const QString&  protocolTag, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(hostname, port, protocolTag, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(requestUrl, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(unsigned short  bindPort, const QString&  protocolTag, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(bindPort, protocolTag, queryType); }

int  PythonQtWrapper_QNetworkProxyQuery::localPort(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->localPort());
}

bool  PythonQtWrapper_QNetworkProxyQuery::__ne__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkProxyQuery::__eq__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QNetworkProxyQuery::peerHostName(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->peerHostName());
}

int  PythonQtWrapper_QNetworkProxyQuery::peerPort(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->peerPort());
}

QString  PythonQtWrapper_QNetworkProxyQuery::protocolTag(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->protocolTag());
}

QNetworkProxyQuery::QueryType  PythonQtWrapper_QNetworkProxyQuery::queryType(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryType());
}

void PythonQtWrapper_QNetworkProxyQuery::setLocalPort(QNetworkProxyQuery* theWrappedObject, int  port)
{
  ( theWrappedObject->setLocalPort(port));
}

void PythonQtWrapper_QNetworkProxyQuery::setPeerHostName(QNetworkProxyQuery* theWrappedObject, const QString&  hostname)
{
  ( theWrappedObject->setPeerHostName(hostname));
}

void PythonQtWrapper_QNetworkProxyQuery::setPeerPort(QNetworkProxyQuery* theWrappedObject, int  port)
{
  ( theWrappedObject->setPeerPort(port));
}

void PythonQtWrapper_QNetworkProxyQuery::setProtocolTag(QNetworkProxyQuery* theWrappedObject, const QString&  protocolTag)
{
  ( theWrappedObject->setProtocolTag(protocolTag));
}

void PythonQtWrapper_QNetworkProxyQuery::setQueryType(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery::QueryType  type)
{
  ( theWrappedObject->setQueryType(type));
}

void PythonQtWrapper_QNetworkProxyQuery::setUrl(QNetworkProxyQuery* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QNetworkProxyQuery::swap(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery&  other)
{
  ( theWrappedObject->swap(other));
}

QUrl  PythonQtWrapper_QNetworkProxyQuery::url(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QString PythonQtWrapper_QNetworkProxyQuery::py_toString(QNetworkProxyQuery* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QNetworkReply::~PythonQtShell_QNetworkReply() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkReply::abort()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("abort");
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
bool  PythonQtShell_QNetworkReply::atEnd() const
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
  return QNetworkReply::atEnd();
}
qint64  PythonQtShell_QNetworkReply::bytesAvailable() const
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
  return QNetworkReply::bytesAvailable();
}
qint64  PythonQtShell_QNetworkReply::bytesToWrite() const
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
  return QNetworkReply::bytesToWrite();
}
bool  PythonQtShell_QNetworkReply::canReadLine() const
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
  return QNetworkReply::canReadLine();
}
void PythonQtShell_QNetworkReply::childEvent(QChildEvent*  event0)
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
  QNetworkReply::childEvent(event0);
}
void PythonQtShell_QNetworkReply::close()
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
  QNetworkReply::close();
}
void PythonQtShell_QNetworkReply::customEvent(QEvent*  event0)
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
  QNetworkReply::customEvent(event0);
}
bool  PythonQtShell_QNetworkReply::event(QEvent*  event0)
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
  return QNetworkReply::event(event0);
}
bool  PythonQtShell_QNetworkReply::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkReply::eventFilter(watched0, event1);
}
void PythonQtShell_QNetworkReply::ignoreSslErrors()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("ignoreSslErrors");
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
  QNetworkReply::ignoreSslErrors();
}
void PythonQtShell_QNetworkReply::ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("ignoreSslErrorsImplementation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QList<QSslError >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::ignoreSslErrorsImplementation(arg__1);
}
bool  PythonQtShell_QNetworkReply::isSequential() const
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
  return QNetworkReply::isSequential();
}
bool  PythonQtShell_QNetworkReply::open(QIODeviceBase::OpenMode  mode0)
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
  return QNetworkReply::open(mode0);
}
qint64  PythonQtShell_QNetworkReply::pos() const
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
  return QNetworkReply::pos();
}
qint64  PythonQtShell_QNetworkReply::readData(char*  data0, qint64  maxlen1)
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
  return qint64();
}
qint64  PythonQtShell_QNetworkReply::readLineData(char*  data0, qint64  maxlen1)
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
  return QNetworkReply::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QNetworkReply::reset()
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
  return QNetworkReply::reset();
}
bool  PythonQtShell_QNetworkReply::seek(qint64  pos0)
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
  return QNetworkReply::seek(pos0);
}
void PythonQtShell_QNetworkReply::setReadBufferSize(qint64  size0)
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
  QNetworkReply::setReadBufferSize(size0);
}
void PythonQtShell_QNetworkReply::setSslConfigurationImplementation(const QSslConfiguration&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setSslConfigurationImplementation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QSslConfiguration&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::setSslConfigurationImplementation(arg__1);
}
qint64  PythonQtShell_QNetworkReply::size() const
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
  return QNetworkReply::size();
}
qint64  PythonQtShell_QNetworkReply::skipData(qint64  maxSize0)
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
  return QNetworkReply::skipData(maxSize0);
}
void PythonQtShell_QNetworkReply::sslConfigurationImplementation(QSslConfiguration&  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sslConfigurationImplementation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QSslConfiguration&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::sslConfigurationImplementation(arg__1);
}
void PythonQtShell_QNetworkReply::timerEvent(QTimerEvent*  event0)
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
  QNetworkReply::timerEvent(event0);
}
bool  PythonQtShell_QNetworkReply::waitForBytesWritten(int  msecs0)
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
  return QNetworkReply::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QNetworkReply::waitForReadyRead(int  msecs0)
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
  return QNetworkReply::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QNetworkReply::writeData(const char*  data0, qint64  len1)
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
  return QNetworkReply::writeData(data0, len1);
}
QNetworkReply* PythonQtWrapper_QNetworkReply::new_QNetworkReply(QObject*  parent)
{ 
return new PythonQtShell_QNetworkReply(parent); }

const QMetaObject* PythonQtShell_QNetworkReply::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkReply::staticMetaObject);
  } else {
    return &QNetworkReply::staticMetaObject;
  }
}
int PythonQtShell_QNetworkReply::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkReply::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QVariant  PythonQtWrapper_QNetworkReply::attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const
{
  return ( theWrappedObject->attribute(code));
}

QNetworkReply::NetworkError  PythonQtWrapper_QNetworkReply::error(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QNetworkReply::hasRawHeader(QNetworkReply* theWrappedObject, QAnyStringView  headerName) const
{
  return ( theWrappedObject->hasRawHeader(headerName));
}

QVariant  PythonQtWrapper_QNetworkReply::header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
  return ( theWrappedObject->header(header));
}

QHttpHeaders  PythonQtWrapper_QNetworkReply::headers(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->headers());
}

void PythonQtWrapper_QNetworkReply::ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_ignoreSslErrorsImplementation(arg__1));
}

bool  PythonQtWrapper_QNetworkReply::isFinished(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

bool  PythonQtWrapper_QNetworkReply::isRunning(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

QNetworkAccessManager*  PythonQtWrapper_QNetworkReply::manager(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->manager());
}

QNetworkAccessManager::Operation  PythonQtWrapper_QNetworkReply::operation(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->operation());
}

QByteArray  PythonQtWrapper_QNetworkReply::rawHeader(QNetworkReply* theWrappedObject, QAnyStringView  headerName) const
{
  return ( theWrappedObject->rawHeader(headerName));
}

QList<QByteArray >  PythonQtWrapper_QNetworkReply::rawHeaderList(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaderList());
}

const QList<std::pair<QByteArray , QByteArray >  >*  PythonQtWrapper_QNetworkReply::rawHeaderPairs(QNetworkReply* theWrappedObject) const
{
  return &( theWrappedObject->rawHeaderPairs());
}

qint64  PythonQtWrapper_QNetworkReply::readBufferSize(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

QNetworkRequest  PythonQtWrapper_QNetworkReply::request(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->request());
}

void PythonQtWrapper_QNetworkReply::setAttribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setAttribute(code, value));
}

void PythonQtWrapper_QNetworkReply::setError(QNetworkReply* theWrappedObject, QNetworkReply::NetworkError  errorCode, const QString&  errorString)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setError(errorCode, errorString));
}

void PythonQtWrapper_QNetworkReply::setFinished(QNetworkReply* theWrappedObject, bool  arg__1)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setFinished(arg__1));
}

void PythonQtWrapper_QNetworkReply::setHeader(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setHeader(header, value));
}

void PythonQtWrapper_QNetworkReply::setHeaders(QNetworkReply* theWrappedObject, const QHttpHeaders&  newHeaders)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setHeaders(newHeaders));
}

void PythonQtWrapper_QNetworkReply::setOperation(QNetworkReply* theWrappedObject, QNetworkAccessManager::Operation  operation)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setOperation(operation));
}

void PythonQtWrapper_QNetworkReply::setRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setRawHeader(headerName, value));
}

void PythonQtWrapper_QNetworkReply::setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

void PythonQtWrapper_QNetworkReply::setRequest(QNetworkReply* theWrappedObject, const QNetworkRequest&  request)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setRequest(request));
}

void PythonQtWrapper_QNetworkReply::setSslConfiguration(QNetworkReply* theWrappedObject, const QSslConfiguration&  configuration)
{
  ( theWrappedObject->setSslConfiguration(configuration));
}

void PythonQtWrapper_QNetworkReply::setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setSslConfigurationImplementation(arg__1));
}

void PythonQtWrapper_QNetworkReply::setUrl(QNetworkReply* theWrappedObject, const QUrl&  url)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setUrl(url));
}

void PythonQtWrapper_QNetworkReply::setWellKnownHeader(QNetworkReply* theWrappedObject, QHttpHeaders::WellKnownHeader  name, QByteArrayView  value)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setWellKnownHeader(name, value));
}

QSslConfiguration  PythonQtWrapper_QNetworkReply::sslConfiguration(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->sslConfiguration());
}

void PythonQtWrapper_QNetworkReply::sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_sslConfigurationImplementation(arg__1));
}

QUrl  PythonQtWrapper_QNetworkReply::url(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



PythonQtShell_QNetworkRequest::~PythonQtShell_QNetworkRequest() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest()
{ 
return new PythonQtShell_QNetworkRequest(); }

QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest(const QNetworkRequest&  other)
{ 
return new PythonQtShell_QNetworkRequest(other); }

QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest(const QUrl&  url)
{ 
return new PythonQtShell_QNetworkRequest(url); }

QVariant  PythonQtWrapper_QNetworkRequest::attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue) const
{
  return ( theWrappedObject->attribute(code, defaultValue));
}

qint64  PythonQtWrapper_QNetworkRequest::decompressedSafetyCheckThreshold(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->decompressedSafetyCheckThreshold());
}

bool  PythonQtWrapper_QNetworkRequest::hasRawHeader(QNetworkRequest* theWrappedObject, QAnyStringView  headerName) const
{
  return ( theWrappedObject->hasRawHeader(headerName));
}

QVariant  PythonQtWrapper_QNetworkRequest::header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
  return ( theWrappedObject->header(header));
}

QHttpHeaders  PythonQtWrapper_QNetworkRequest::headers(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->headers());
}

QHttp1Configuration  PythonQtWrapper_QNetworkRequest::http1Configuration(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->http1Configuration());
}

QHttp2Configuration  PythonQtWrapper_QNetworkRequest::http2Configuration(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->http2Configuration());
}

int  PythonQtWrapper_QNetworkRequest::maximumRedirectsAllowed(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->maximumRedirectsAllowed());
}

bool  PythonQtWrapper_QNetworkRequest::__ne__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkRequest::__eq__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const
{
  return ( (*theWrappedObject)== other);
}

QObject*  PythonQtWrapper_QNetworkRequest::originatingObject(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->originatingObject());
}

QString  PythonQtWrapper_QNetworkRequest::peerVerifyName(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyName());
}

QNetworkRequest::Priority  PythonQtWrapper_QNetworkRequest::priority(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->priority());
}

QByteArray  PythonQtWrapper_QNetworkRequest::rawHeader(QNetworkRequest* theWrappedObject, QAnyStringView  headerName) const
{
  return ( theWrappedObject->rawHeader(headerName));
}

QList<QByteArray >  PythonQtWrapper_QNetworkRequest::rawHeaderList(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaderList());
}

void PythonQtWrapper_QNetworkRequest::setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value)
{
  ( theWrappedObject->setAttribute(code, value));
}

void PythonQtWrapper_QNetworkRequest::setDecompressedSafetyCheckThreshold(QNetworkRequest* theWrappedObject, qint64  threshold)
{
  ( theWrappedObject->setDecompressedSafetyCheckThreshold(threshold));
}

void PythonQtWrapper_QNetworkRequest::setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( theWrappedObject->setHeader(header, value));
}

void PythonQtWrapper_QNetworkRequest::setHeaders(QNetworkRequest* theWrappedObject, const QHttpHeaders&  newHeaders)
{
  ( theWrappedObject->setHeaders(newHeaders));
}

void PythonQtWrapper_QNetworkRequest::setHttp1Configuration(QNetworkRequest* theWrappedObject, const QHttp1Configuration&  configuration)
{
  ( theWrappedObject->setHttp1Configuration(configuration));
}

void PythonQtWrapper_QNetworkRequest::setHttp2Configuration(QNetworkRequest* theWrappedObject, const QHttp2Configuration&  configuration)
{
  ( theWrappedObject->setHttp2Configuration(configuration));
}

void PythonQtWrapper_QNetworkRequest::setMaximumRedirectsAllowed(QNetworkRequest* theWrappedObject, int  maximumRedirectsAllowed)
{
  ( theWrappedObject->setMaximumRedirectsAllowed(maximumRedirectsAllowed));
}

void PythonQtWrapper_QNetworkRequest::setOriginatingObject(QNetworkRequest* theWrappedObject, QObject*  object)
{
  ( theWrappedObject->setOriginatingObject(object));
}

void PythonQtWrapper_QNetworkRequest::setPeerVerifyName(QNetworkRequest* theWrappedObject, const QString&  peerName)
{
  ( theWrappedObject->setPeerVerifyName(peerName));
}

void PythonQtWrapper_QNetworkRequest::setPriority(QNetworkRequest* theWrappedObject, QNetworkRequest::Priority  priority)
{
  ( theWrappedObject->setPriority(priority));
}

void PythonQtWrapper_QNetworkRequest::setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( theWrappedObject->setRawHeader(headerName, value));
}

void PythonQtWrapper_QNetworkRequest::setSslConfiguration(QNetworkRequest* theWrappedObject, const QSslConfiguration&  configuration)
{
  ( theWrappedObject->setSslConfiguration(configuration));
}

void PythonQtWrapper_QNetworkRequest::setTcpKeepAliveProbeCount(QNetworkRequest* theWrappedObject, int  probes)
{
  ( theWrappedObject->setTcpKeepAliveProbeCount(probes));
}

void PythonQtWrapper_QNetworkRequest::setTransferTimeout(QNetworkRequest* theWrappedObject, int  timeout)
{
  ( theWrappedObject->setTransferTimeout(timeout));
}

void PythonQtWrapper_QNetworkRequest::setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

QSslConfiguration  PythonQtWrapper_QNetworkRequest::sslConfiguration(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->sslConfiguration());
}

void PythonQtWrapper_QNetworkRequest::swap(QNetworkRequest* theWrappedObject, QNetworkRequest&  other)
{
  ( theWrappedObject->swap(other));
}

int  PythonQtWrapper_QNetworkRequest::tcpKeepAliveProbeCount(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->tcpKeepAliveProbeCount());
}

int  PythonQtWrapper_QNetworkRequest::transferTimeout(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->transferTimeout());
}

QUrl  PythonQtWrapper_QNetworkRequest::url(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QNetworkRequestFactory* PythonQtWrapper_QNetworkRequestFactory::new_QNetworkRequestFactory()
{ 
return new QNetworkRequestFactory(); }

QNetworkRequestFactory* PythonQtWrapper_QNetworkRequestFactory::new_QNetworkRequestFactory(const QNetworkRequestFactory&  other)
{ 
return new QNetworkRequestFactory(other); }

QNetworkRequestFactory* PythonQtWrapper_QNetworkRequestFactory::new_QNetworkRequestFactory(const QUrl&  baseUrl)
{ 
return new QNetworkRequestFactory(baseUrl); }

QVariant  PythonQtWrapper_QNetworkRequestFactory::attribute(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Attribute  attribute) const
{
  return ( theWrappedObject->attribute(attribute));
}

QVariant  PythonQtWrapper_QNetworkRequestFactory::attribute(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Attribute  attribute, const QVariant&  defaultValue) const
{
  return ( theWrappedObject->attribute(attribute, defaultValue));
}

QUrl  PythonQtWrapper_QNetworkRequestFactory::baseUrl(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->baseUrl());
}

QByteArray  PythonQtWrapper_QNetworkRequestFactory::bearerToken(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->bearerToken());
}

void PythonQtWrapper_QNetworkRequestFactory::clearAttribute(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Attribute  attribute)
{
  ( theWrappedObject->clearAttribute(attribute));
}

void PythonQtWrapper_QNetworkRequestFactory::clearAttributes(QNetworkRequestFactory* theWrappedObject)
{
  ( theWrappedObject->clearAttributes());
}

void PythonQtWrapper_QNetworkRequestFactory::clearBearerToken(QNetworkRequestFactory* theWrappedObject)
{
  ( theWrappedObject->clearBearerToken());
}

void PythonQtWrapper_QNetworkRequestFactory::clearCommonHeaders(QNetworkRequestFactory* theWrappedObject)
{
  ( theWrappedObject->clearCommonHeaders());
}

void PythonQtWrapper_QNetworkRequestFactory::clearPassword(QNetworkRequestFactory* theWrappedObject)
{
  ( theWrappedObject->clearPassword());
}

void PythonQtWrapper_QNetworkRequestFactory::clearQueryParameters(QNetworkRequestFactory* theWrappedObject)
{
  ( theWrappedObject->clearQueryParameters());
}

void PythonQtWrapper_QNetworkRequestFactory::clearUserName(QNetworkRequestFactory* theWrappedObject)
{
  ( theWrappedObject->clearUserName());
}

QHttpHeaders  PythonQtWrapper_QNetworkRequestFactory::commonHeaders(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->commonHeaders());
}

QNetworkRequest  PythonQtWrapper_QNetworkRequestFactory::createRequest(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->createRequest());
}

QNetworkRequest  PythonQtWrapper_QNetworkRequestFactory::createRequest(QNetworkRequestFactory* theWrappedObject, const QString&  path) const
{
  return ( theWrappedObject->createRequest(path));
}

QNetworkRequest  PythonQtWrapper_QNetworkRequestFactory::createRequest(QNetworkRequestFactory* theWrappedObject, const QString&  path, const QUrlQuery&  query) const
{
  return ( theWrappedObject->createRequest(path, query));
}

QNetworkRequest  PythonQtWrapper_QNetworkRequestFactory::createRequest(QNetworkRequestFactory* theWrappedObject, const QUrlQuery&  query) const
{
  return ( theWrappedObject->createRequest(query));
}

QNetworkRequestFactory*  PythonQtWrapper_QNetworkRequestFactory::operator_assign(QNetworkRequestFactory* theWrappedObject, const QNetworkRequestFactory&  other)
{
  return &( (*theWrappedObject)= other);
}

QString  PythonQtWrapper_QNetworkRequestFactory::password(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

QNetworkRequest::Priority  PythonQtWrapper_QNetworkRequestFactory::priority(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->priority());
}

QUrlQuery  PythonQtWrapper_QNetworkRequestFactory::queryParameters(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->queryParameters());
}

void PythonQtWrapper_QNetworkRequestFactory::setAttribute(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Attribute  attribute, const QVariant&  value)
{
  ( theWrappedObject->setAttribute(attribute, value));
}

void PythonQtWrapper_QNetworkRequestFactory::setBaseUrl(QNetworkRequestFactory* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setBaseUrl(url));
}

void PythonQtWrapper_QNetworkRequestFactory::setBearerToken(QNetworkRequestFactory* theWrappedObject, const QByteArray&  token)
{
  ( theWrappedObject->setBearerToken(token));
}

void PythonQtWrapper_QNetworkRequestFactory::setCommonHeaders(QNetworkRequestFactory* theWrappedObject, const QHttpHeaders&  headers)
{
  ( theWrappedObject->setCommonHeaders(headers));
}

void PythonQtWrapper_QNetworkRequestFactory::setPassword(QNetworkRequestFactory* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

void PythonQtWrapper_QNetworkRequestFactory::setPriority(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Priority  priority)
{
  ( theWrappedObject->setPriority(priority));
}

void PythonQtWrapper_QNetworkRequestFactory::setQueryParameters(QNetworkRequestFactory* theWrappedObject, const QUrlQuery&  query)
{
  ( theWrappedObject->setQueryParameters(query));
}

void PythonQtWrapper_QNetworkRequestFactory::setSslConfiguration(QNetworkRequestFactory* theWrappedObject, const QSslConfiguration&  configuration)
{
  ( theWrappedObject->setSslConfiguration(configuration));
}

void PythonQtWrapper_QNetworkRequestFactory::setUserName(QNetworkRequestFactory* theWrappedObject, const QString&  userName)
{
  ( theWrappedObject->setUserName(userName));
}

QSslConfiguration  PythonQtWrapper_QNetworkRequestFactory::sslConfiguration(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->sslConfiguration());
}

void PythonQtWrapper_QNetworkRequestFactory::swap(QNetworkRequestFactory* theWrappedObject, QNetworkRequestFactory&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QNetworkRequestFactory::userName(QNetworkRequestFactory* theWrappedObject) const
{
  return ( theWrappedObject->userName());
}

QString PythonQtWrapper_QNetworkRequestFactory::py_toString(QNetworkRequestFactory* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QOcspResponse* PythonQtWrapper_QOcspResponse::new_QOcspResponse()
{ 
return new QOcspResponse(); }

QOcspResponse* PythonQtWrapper_QOcspResponse::new_QOcspResponse(const QOcspResponse&  other)
{ 
return new QOcspResponse(other); }

QOcspCertificateStatus  PythonQtWrapper_QOcspResponse::certificateStatus(QOcspResponse* theWrappedObject) const
{
  return ( theWrappedObject->certificateStatus());
}

bool  PythonQtWrapper_QOcspResponse::__ne__(QOcspResponse* theWrappedObject, const QOcspResponse&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QOcspResponse*  PythonQtWrapper_QOcspResponse::operator_assign(QOcspResponse* theWrappedObject, const QOcspResponse&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QOcspResponse::__eq__(QOcspResponse* theWrappedObject, const QOcspResponse&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QSslCertificate  PythonQtWrapper_QOcspResponse::responder(QOcspResponse* theWrappedObject) const
{
  return ( theWrappedObject->responder());
}

QOcspRevocationReason  PythonQtWrapper_QOcspResponse::revocationReason(QOcspResponse* theWrappedObject) const
{
  return ( theWrappedObject->revocationReason());
}

QSslCertificate  PythonQtWrapper_QOcspResponse::subject(QOcspResponse* theWrappedObject) const
{
  return ( theWrappedObject->subject());
}

void PythonQtWrapper_QOcspResponse::swap(QOcspResponse* theWrappedObject, QOcspResponse&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QRestAccessManager::~PythonQtShell_QRestAccessManager() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRestAccessManager::childEvent(QChildEvent*  event0)
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
  QRestAccessManager::childEvent(event0);
}
void PythonQtShell_QRestAccessManager::customEvent(QEvent*  event0)
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
  QRestAccessManager::customEvent(event0);
}
bool  PythonQtShell_QRestAccessManager::event(QEvent*  event0)
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
  return QRestAccessManager::event(event0);
}
bool  PythonQtShell_QRestAccessManager::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QRestAccessManager::eventFilter(watched0, event1);
}
void PythonQtShell_QRestAccessManager::timerEvent(QTimerEvent*  event0)
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
  QRestAccessManager::timerEvent(event0);
}
QRestAccessManager* PythonQtWrapper_QRestAccessManager::new_QRestAccessManager(QNetworkAccessManager*  manager, QObject*  parent)
{ 
return new PythonQtShell_QRestAccessManager(manager, parent); }

const QMetaObject* PythonQtShell_QRestAccessManager::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QRestAccessManager::staticMetaObject);
  } else {
    return &QRestAccessManager::staticMetaObject;
  }
}
int PythonQtShell_QRestAccessManager::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QRestAccessManager::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QNetworkReply*  PythonQtWrapper_QRestAccessManager::deleteResource(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->deleteResource(request));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::get(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->get(request));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::get(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->get(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::get(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->get(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::get(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QJsonDocument&  data)
{
  return ( theWrappedObject->get(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::head(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->head(request));
}

QNetworkAccessManager*  PythonQtWrapper_QRestAccessManager::networkAccessManager(QRestAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::patch(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->patch(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::patch(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->patch(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::patch(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QJsonDocument&  data)
{
  return ( theWrappedObject->patch(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::patch(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QMap<QString , QVariant >&  data)
{
  return ( theWrappedObject->patch(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QJsonDocument&  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QMap<QString , QVariant >&  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QJsonDocument&  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QMap<QString , QVariant >&  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::sendCustomRequest(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  method, QHttpMultiPart*  data)
{
  return ( theWrappedObject->sendCustomRequest(request, method, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::sendCustomRequest(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  method, QIODevice*  data)
{
  return ( theWrappedObject->sendCustomRequest(request, method, data));
}

QNetworkReply*  PythonQtWrapper_QRestAccessManager::sendCustomRequest(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  method, const QByteArray&  data)
{
  return ( theWrappedObject->sendCustomRequest(request, method, data));
}



QRestReply* PythonQtWrapper_QRestReply::new_QRestReply(QNetworkReply*  reply)
{ 
return new QRestReply(reply); }

QNetworkReply::NetworkError  PythonQtWrapper_QRestReply::error(QRestReply* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QRestReply::errorString(QRestReply* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QRestReply::hasError(QRestReply* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

int  PythonQtWrapper_QRestReply::httpStatus(QRestReply* theWrappedObject) const
{
  return ( theWrappedObject->httpStatus());
}

bool  PythonQtWrapper_QRestReply::isHttpStatusSuccess(QRestReply* theWrappedObject) const
{
  return ( theWrappedObject->isHttpStatusSuccess());
}

bool  PythonQtWrapper_QRestReply::isSuccess(QRestReply* theWrappedObject) const
{
  return ( theWrappedObject->isSuccess());
}

QNetworkReply*  PythonQtWrapper_QRestReply::networkReply(QRestReply* theWrappedObject) const
{
  return ( theWrappedObject->networkReply());
}

QByteArray  PythonQtWrapper_QRestReply::readBody(QRestReply* theWrappedObject)
{
  return ( theWrappedObject->readBody());
}

QString  PythonQtWrapper_QRestReply::readText(QRestReply* theWrappedObject)
{
  return ( theWrappedObject->readText());
}

void PythonQtWrapper_QRestReply::swap(QRestReply* theWrappedObject, QRestReply&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QRestReply::py_toString(QRestReply* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



#ifndef QT_NO_SSL
#endif


#ifndef QT_NO_SSL
QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(QIODevice*  device, QSsl::EncodingFormat  format)
{ 
return new QSslCertificate(device, format); }

QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(const QByteArray&  data, QSsl::EncodingFormat  format)
{ 
return new QSslCertificate(data, format); }

QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(const QSslCertificate&  other)
{ 
return new QSslCertificate(other); }

void PythonQtWrapper_QSslCertificate::clear(QSslCertificate* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QByteArray  PythonQtWrapper_QSslCertificate::digest(QSslCertificate* theWrappedObject, QCryptographicHash::Algorithm  algorithm) const
{
  return ( theWrappedObject->digest(algorithm));
}

QDateTime  PythonQtWrapper_QSslCertificate::effectiveDate(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->effectiveDate());
}

QDateTime  PythonQtWrapper_QSslCertificate::expiryDate(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->expiryDate());
}

QList<QSslCertificateExtension >  PythonQtWrapper_QSslCertificate::extensions(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->extensions());
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromData(const QByteArray&  data, QSsl::EncodingFormat  format)
{
  return (QSslCertificate::fromData(data, format));
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromDevice(QIODevice*  device, QSsl::EncodingFormat  format)
{
  return (QSslCertificate::fromDevice(device, format));
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromFile(const QString&  filePath, QSsl::EncodingFormat  format)
{
  return (QSslCertificate::fromFile(filePath, format));
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromPath(const QString&  path, QSsl::EncodingFormat  format, QSslCertificate::PatternSyntax  syntax)
{
  return (QSslCertificate::fromPath(path, format, syntax));
}

Qt::HANDLE  PythonQtWrapper_QSslCertificate::handle(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

bool  PythonQtWrapper_QSslCertificate::static_QSslCertificate_importPkcs12(QIODevice*  device, QSslKey*  key, QSslCertificate*  cert, QList<QSslCertificate >*  caCertificates, const QByteArray&  passPhrase)
{
  return (QSslCertificate::importPkcs12(device, key, cert, caCertificates, passPhrase));
}

bool  PythonQtWrapper_QSslCertificate::isBlacklisted(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->isBlacklisted());
}

bool  PythonQtWrapper_QSslCertificate::isNull(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QSslCertificate::isSelfSigned(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->isSelfSigned());
}

QString  PythonQtWrapper_QSslCertificate::issuerDisplayName(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->issuerDisplayName());
}

QStringList  PythonQtWrapper_QSslCertificate::issuerInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const
{
  return ( theWrappedObject->issuerInfo(info));
}

QStringList  PythonQtWrapper_QSslCertificate::issuerInfo(QSslCertificate* theWrappedObject, const QByteArray&  attribute) const
{
  return ( theWrappedObject->issuerInfo(attribute));
}

QList<QByteArray >  PythonQtWrapper_QSslCertificate::issuerInfoAttributes(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->issuerInfoAttributes());
}

bool  PythonQtWrapper_QSslCertificate::__ne__(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QSslCertificate*  PythonQtWrapper_QSslCertificate::operator_assign(QSslCertificate* theWrappedObject, const QSslCertificate&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslCertificate::__eq__(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const
{
  return ( (*theWrappedObject)== other);
}

QSslKey  PythonQtWrapper_QSslCertificate::publicKey(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->publicKey());
}

QByteArray  PythonQtWrapper_QSslCertificate::serialNumber(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->serialNumber());
}

QMultiMap<QSsl::AlternativeNameEntryType , QString >  PythonQtWrapper_QSslCertificate::subjectAlternativeNames(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->subjectAlternativeNames());
}

QString  PythonQtWrapper_QSslCertificate::subjectDisplayName(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->subjectDisplayName());
}

QStringList  PythonQtWrapper_QSslCertificate::subjectInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const
{
  return ( theWrappedObject->subjectInfo(info));
}

QStringList  PythonQtWrapper_QSslCertificate::subjectInfo(QSslCertificate* theWrappedObject, const QByteArray&  attribute) const
{
  return ( theWrappedObject->subjectInfo(attribute));
}

QList<QByteArray >  PythonQtWrapper_QSslCertificate::subjectInfoAttributes(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->subjectInfoAttributes());
}

void PythonQtWrapper_QSslCertificate::swap(QSslCertificate* theWrappedObject, QSslCertificate&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QSslCertificate::toDer(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->toDer());
}

QByteArray  PythonQtWrapper_QSslCertificate::toPem(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->toPem());
}

QString  PythonQtWrapper_QSslCertificate::toText(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->toText());
}

QList<QSslError >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_verify(const QList<QSslCertificate >&  certificateChain, const QString&  hostName)
{
  return (QSslCertificate::verify(certificateChain, hostName));
}

QByteArray  PythonQtWrapper_QSslCertificate::version(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->version());
}

QString PythonQtWrapper_QSslCertificate::py_toString(QSslCertificate* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslCertificateExtension* PythonQtWrapper_QSslCertificateExtension::new_QSslCertificateExtension()
{ 
return new QSslCertificateExtension(); }

QSslCertificateExtension* PythonQtWrapper_QSslCertificateExtension::new_QSslCertificateExtension(const QSslCertificateExtension&  other)
{ 
return new QSslCertificateExtension(other); }

bool  PythonQtWrapper_QSslCertificateExtension::isCritical(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->isCritical());
}

bool  PythonQtWrapper_QSslCertificateExtension::isSupported(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->isSupported());
}

QString  PythonQtWrapper_QSslCertificateExtension::name(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QString  PythonQtWrapper_QSslCertificateExtension::oid(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->oid());
}

QSslCertificateExtension*  PythonQtWrapper_QSslCertificateExtension::operator_assign(QSslCertificateExtension* theWrappedObject, const QSslCertificateExtension&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QSslCertificateExtension::swap(QSslCertificateExtension* theWrappedObject, QSslCertificateExtension&  other)
{
  ( theWrappedObject->swap(other));
}

QVariant  PythonQtWrapper_QSslCertificateExtension::value(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

#endif


#ifndef QT_NO_SSL
QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher()
{ 
return new QSslCipher(); }

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher(const QSslCipher&  other)
{ 
return new QSslCipher(other); }

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher(const QString&  name)
{ 
return new QSslCipher(name); }

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher(const QString&  name, QSsl::SslProtocol  protocol)
{ 
return new QSslCipher(name, protocol); }

QString  PythonQtWrapper_QSslCipher::authenticationMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->authenticationMethod());
}

QString  PythonQtWrapper_QSslCipher::encryptionMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->encryptionMethod());
}

bool  PythonQtWrapper_QSslCipher::isNull(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QSslCipher::keyExchangeMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->keyExchangeMethod());
}

QString  PythonQtWrapper_QSslCipher::name(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QSslCipher::__ne__(QSslCipher* theWrappedObject, const QSslCipher&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QSslCipher*  PythonQtWrapper_QSslCipher::operator_assign(QSslCipher* theWrappedObject, const QSslCipher&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslCipher::__eq__(QSslCipher* theWrappedObject, const QSslCipher&  other) const
{
  return ( (*theWrappedObject)== other);
}

QSsl::SslProtocol  PythonQtWrapper_QSslCipher::protocol(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

QString  PythonQtWrapper_QSslCipher::protocolString(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->protocolString());
}

int  PythonQtWrapper_QSslCipher::supportedBits(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->supportedBits());
}

void PythonQtWrapper_QSslCipher::swap(QSslCipher* theWrappedObject, QSslCipher&  other)
{
  ( theWrappedObject->swap(other));
}

int  PythonQtWrapper_QSslCipher::usedBits(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->usedBits());
}

QString PythonQtWrapper_QSslCipher::py_toString(QSslCipher* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
PythonQtShell_QSslConfiguration::~PythonQtShell_QSslConfiguration() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSslConfiguration* PythonQtWrapper_QSslConfiguration::new_QSslConfiguration()
{ 
return new PythonQtShell_QSslConfiguration(); }

QSslConfiguration* PythonQtWrapper_QSslConfiguration::new_QSslConfiguration(const QSslConfiguration&  other)
{ 
return new PythonQtShell_QSslConfiguration(other); }

void PythonQtWrapper_QSslConfiguration::addCaCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->addCaCertificate(certificate));
}

void PythonQtWrapper_QSslConfiguration::addCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates)
{
  ( theWrappedObject->addCaCertificates(certificates));
}

bool  PythonQtWrapper_QSslConfiguration::addCaCertificates(QSslConfiguration* theWrappedObject, const QString&  path, QSsl::EncodingFormat  format, QSslCertificate::PatternSyntax  syntax)
{
  return ( theWrappedObject->addCaCertificates(path, format, syntax));
}

QList<QByteArray >  PythonQtWrapper_QSslConfiguration::allowedNextProtocols(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->allowedNextProtocols());
}

QMap<QByteArray , QVariant >  PythonQtWrapper_QSslConfiguration::backendConfiguration(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->backendConfiguration());
}

QList<QSslCertificate >  PythonQtWrapper_QSslConfiguration::caCertificates(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->caCertificates());
}

QList<QSslCipher >  PythonQtWrapper_QSslConfiguration::ciphers(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->ciphers());
}

QSslConfiguration  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_defaultConfiguration()
{
  return (QSslConfiguration::defaultConfiguration());
}

QSslConfiguration  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_defaultDtlsConfiguration()
{
  return (QSslConfiguration::defaultDtlsConfiguration());
}

QSslDiffieHellmanParameters  PythonQtWrapper_QSslConfiguration::diffieHellmanParameters(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->diffieHellmanParameters());
}

bool  PythonQtWrapper_QSslConfiguration::dtlsCookieVerificationEnabled(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->dtlsCookieVerificationEnabled());
}

QList<QSslEllipticCurve >  PythonQtWrapper_QSslConfiguration::ellipticCurves(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->ellipticCurves());
}

QSslKey  PythonQtWrapper_QSslConfiguration::ephemeralServerKey(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->ephemeralServerKey());
}

bool  PythonQtWrapper_QSslConfiguration::handshakeMustInterruptOnError(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->handshakeMustInterruptOnError());
}

bool  PythonQtWrapper_QSslConfiguration::isNull(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QSslCertificate  PythonQtWrapper_QSslConfiguration::localCertificate(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->localCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QSslConfiguration::localCertificateChain(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->localCertificateChain());
}

bool  PythonQtWrapper_QSslConfiguration::missingCertificateIsFatal(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->missingCertificateIsFatal());
}

QByteArray  PythonQtWrapper_QSslConfiguration::nextNegotiatedProtocol(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->nextNegotiatedProtocol());
}

QSslConfiguration::NextProtocolNegotiationStatus  PythonQtWrapper_QSslConfiguration::nextProtocolNegotiationStatus(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->nextProtocolNegotiationStatus());
}

bool  PythonQtWrapper_QSslConfiguration::ocspStaplingEnabled(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->ocspStaplingEnabled());
}

bool  PythonQtWrapper_QSslConfiguration::__ne__(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QSslConfiguration*  PythonQtWrapper_QSslConfiguration::operator_assign(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslConfiguration::__eq__(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QSslCertificate  PythonQtWrapper_QSslConfiguration::peerCertificate(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->peerCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QSslConfiguration::peerCertificateChain(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->peerCertificateChain());
}

int  PythonQtWrapper_QSslConfiguration::peerVerifyDepth(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyDepth());
}

QSslSocket::PeerVerifyMode  PythonQtWrapper_QSslConfiguration::peerVerifyMode(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyMode());
}

QByteArray  PythonQtWrapper_QSslConfiguration::preSharedKeyIdentityHint(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->preSharedKeyIdentityHint());
}

QSslKey  PythonQtWrapper_QSslConfiguration::privateKey(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->privateKey());
}

QSsl::SslProtocol  PythonQtWrapper_QSslConfiguration::protocol(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

QSslCipher  PythonQtWrapper_QSslConfiguration::sessionCipher(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->sessionCipher());
}

QSsl::SslProtocol  PythonQtWrapper_QSslConfiguration::sessionProtocol(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->sessionProtocol());
}

QByteArray  PythonQtWrapper_QSslConfiguration::sessionTicket(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->sessionTicket());
}

int  PythonQtWrapper_QSslConfiguration::sessionTicketLifeTimeHint(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->sessionTicketLifeTimeHint());
}

void PythonQtWrapper_QSslConfiguration::setAllowedNextProtocols(QSslConfiguration* theWrappedObject, const QList<QByteArray >&  protocols)
{
  ( theWrappedObject->setAllowedNextProtocols(protocols));
}

void PythonQtWrapper_QSslConfiguration::setBackendConfiguration(QSslConfiguration* theWrappedObject, const QMap<QByteArray , QVariant >&  backendConfiguration)
{
  ( theWrappedObject->setBackendConfiguration(backendConfiguration));
}

void PythonQtWrapper_QSslConfiguration::setBackendConfigurationOption(QSslConfiguration* theWrappedObject, const QByteArray&  name, const QVariant&  value)
{
  ( theWrappedObject->setBackendConfigurationOption(name, value));
}

void PythonQtWrapper_QSslConfiguration::setCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates)
{
  ( theWrappedObject->setCaCertificates(certificates));
}

void PythonQtWrapper_QSslConfiguration::setCiphers(QSslConfiguration* theWrappedObject, const QList<QSslCipher >&  ciphers)
{
  ( theWrappedObject->setCiphers(ciphers));
}

void PythonQtWrapper_QSslConfiguration::setCiphers(QSslConfiguration* theWrappedObject, const QString&  ciphers)
{
  ( theWrappedObject->setCiphers(ciphers));
}

void PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_setDefaultConfiguration(const QSslConfiguration&  configuration)
{
  (QSslConfiguration::setDefaultConfiguration(configuration));
}

void PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_setDefaultDtlsConfiguration(const QSslConfiguration&  configuration)
{
  (QSslConfiguration::setDefaultDtlsConfiguration(configuration));
}

void PythonQtWrapper_QSslConfiguration::setDiffieHellmanParameters(QSslConfiguration* theWrappedObject, const QSslDiffieHellmanParameters&  dhparams)
{
  ( theWrappedObject->setDiffieHellmanParameters(dhparams));
}

void PythonQtWrapper_QSslConfiguration::setDtlsCookieVerificationEnabled(QSslConfiguration* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setDtlsCookieVerificationEnabled(enable));
}

void PythonQtWrapper_QSslConfiguration::setEllipticCurves(QSslConfiguration* theWrappedObject, const QList<QSslEllipticCurve >&  curves)
{
  ( theWrappedObject->setEllipticCurves(curves));
}

void PythonQtWrapper_QSslConfiguration::setHandshakeMustInterruptOnError(QSslConfiguration* theWrappedObject, bool  interrupt)
{
  ( theWrappedObject->setHandshakeMustInterruptOnError(interrupt));
}

void PythonQtWrapper_QSslConfiguration::setLocalCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->setLocalCertificate(certificate));
}

void PythonQtWrapper_QSslConfiguration::setLocalCertificateChain(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  localChain)
{
  ( theWrappedObject->setLocalCertificateChain(localChain));
}

void PythonQtWrapper_QSslConfiguration::setMissingCertificateIsFatal(QSslConfiguration* theWrappedObject, bool  cannotRecover)
{
  ( theWrappedObject->setMissingCertificateIsFatal(cannotRecover));
}

void PythonQtWrapper_QSslConfiguration::setOcspStaplingEnabled(QSslConfiguration* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setOcspStaplingEnabled(enable));
}

void PythonQtWrapper_QSslConfiguration::setPeerVerifyDepth(QSslConfiguration* theWrappedObject, int  depth)
{
  ( theWrappedObject->setPeerVerifyDepth(depth));
}

void PythonQtWrapper_QSslConfiguration::setPeerVerifyMode(QSslConfiguration* theWrappedObject, QSslSocket::PeerVerifyMode  mode)
{
  ( theWrappedObject->setPeerVerifyMode(mode));
}

void PythonQtWrapper_QSslConfiguration::setPreSharedKeyIdentityHint(QSslConfiguration* theWrappedObject, const QByteArray&  hint)
{
  ( theWrappedObject->setPreSharedKeyIdentityHint(hint));
}

void PythonQtWrapper_QSslConfiguration::setPrivateKey(QSslConfiguration* theWrappedObject, const QSslKey&  key)
{
  ( theWrappedObject->setPrivateKey(key));
}

void PythonQtWrapper_QSslConfiguration::setProtocol(QSslConfiguration* theWrappedObject, QSsl::SslProtocol  protocol)
{
  ( theWrappedObject->setProtocol(protocol));
}

void PythonQtWrapper_QSslConfiguration::setSessionTicket(QSslConfiguration* theWrappedObject, const QByteArray&  sessionTicket)
{
  ( theWrappedObject->setSessionTicket(sessionTicket));
}

void PythonQtWrapper_QSslConfiguration::setSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option, bool  on)
{
  ( theWrappedObject->setSslOption(option, on));
}

QList<QSslCipher >  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_supportedCiphers()
{
  return (QSslConfiguration::supportedCiphers());
}

QList<QSslEllipticCurve >  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_supportedEllipticCurves()
{
  return (QSslConfiguration::supportedEllipticCurves());
}

void PythonQtWrapper_QSslConfiguration::swap(QSslConfiguration* theWrappedObject, QSslConfiguration&  other)
{
  ( theWrappedObject->swap(other));
}

QList<QSslCertificate >  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_systemCaCertificates()
{
  return (QSslConfiguration::systemCaCertificates());
}

bool  PythonQtWrapper_QSslConfiguration::testSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option) const
{
  return ( theWrappedObject->testSslOption(option));
}

#endif


#ifndef QT_NO_SSL
QSslDiffieHellmanParameters* PythonQtWrapper_QSslDiffieHellmanParameters::new_QSslDiffieHellmanParameters()
{ 
return new QSslDiffieHellmanParameters(); }

QSslDiffieHellmanParameters* PythonQtWrapper_QSslDiffieHellmanParameters::new_QSslDiffieHellmanParameters(const QSslDiffieHellmanParameters&  other)
{ 
return new QSslDiffieHellmanParameters(other); }

QSslDiffieHellmanParameters  PythonQtWrapper_QSslDiffieHellmanParameters::static_QSslDiffieHellmanParameters_defaultParameters()
{
  return (QSslDiffieHellmanParameters::defaultParameters());
}

QSslDiffieHellmanParameters::Error  PythonQtWrapper_QSslDiffieHellmanParameters::error(QSslDiffieHellmanParameters* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSslDiffieHellmanParameters::errorString(QSslDiffieHellmanParameters* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QSslDiffieHellmanParameters  PythonQtWrapper_QSslDiffieHellmanParameters::static_QSslDiffieHellmanParameters_fromEncoded(QIODevice*  device, QSsl::EncodingFormat  format)
{
  return (QSslDiffieHellmanParameters::fromEncoded(device, format));
}

QSslDiffieHellmanParameters  PythonQtWrapper_QSslDiffieHellmanParameters::static_QSslDiffieHellmanParameters_fromEncoded(const QByteArray&  encoded, QSsl::EncodingFormat  format)
{
  return (QSslDiffieHellmanParameters::fromEncoded(encoded, format));
}

bool  PythonQtWrapper_QSslDiffieHellmanParameters::isEmpty(QSslDiffieHellmanParameters* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QSslDiffieHellmanParameters::isValid(QSslDiffieHellmanParameters* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QSslDiffieHellmanParameters::__ne__(QSslDiffieHellmanParameters* theWrappedObject, const QSslDiffieHellmanParameters&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QSslDiffieHellmanParameters*  PythonQtWrapper_QSslDiffieHellmanParameters::operator_assign(QSslDiffieHellmanParameters* theWrappedObject, const QSslDiffieHellmanParameters&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslDiffieHellmanParameters::__eq__(QSslDiffieHellmanParameters* theWrappedObject, const QSslDiffieHellmanParameters&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QSslDiffieHellmanParameters::swap(QSslDiffieHellmanParameters* theWrappedObject, QSslDiffieHellmanParameters&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QSslDiffieHellmanParameters::py_toString(QSslDiffieHellmanParameters* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslEllipticCurve* PythonQtWrapper_QSslEllipticCurve::new_QSslEllipticCurve()
{ 
return new QSslEllipticCurve(); }

QSslEllipticCurve  PythonQtWrapper_QSslEllipticCurve::static_QSslEllipticCurve_fromLongName(const QString&  name)
{
  return (QSslEllipticCurve::fromLongName(name));
}

QSslEllipticCurve  PythonQtWrapper_QSslEllipticCurve::static_QSslEllipticCurve_fromShortName(const QString&  name)
{
  return (QSslEllipticCurve::fromShortName(name));
}

bool  PythonQtWrapper_QSslEllipticCurve::isTlsNamedCurve(QSslEllipticCurve* theWrappedObject) const
{
  return ( theWrappedObject->isTlsNamedCurve());
}

bool  PythonQtWrapper_QSslEllipticCurve::isValid(QSslEllipticCurve* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QSslEllipticCurve::longName(QSslEllipticCurve* theWrappedObject) const
{
  return ( theWrappedObject->longName());
}

bool  PythonQtWrapper_QSslEllipticCurve::__ne__(QSslEllipticCurve* theWrappedObject, QSslEllipticCurve  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QSslEllipticCurve::__eq__(QSslEllipticCurve* theWrappedObject, QSslEllipticCurve  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QString  PythonQtWrapper_QSslEllipticCurve::shortName(QSslEllipticCurve* theWrappedObject) const
{
  return ( theWrappedObject->shortName());
}

QString PythonQtWrapper_QSslEllipticCurve::py_toString(QSslEllipticCurve* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslError* PythonQtWrapper_QSslError::new_QSslError()
{ 
return new QSslError(); }

QSslError* PythonQtWrapper_QSslError::new_QSslError(QSslError::SslError  error)
{ 
return new QSslError(error); }

QSslError* PythonQtWrapper_QSslError::new_QSslError(QSslError::SslError  error, const QSslCertificate&  certificate)
{ 
return new QSslError(error, certificate); }

QSslError* PythonQtWrapper_QSslError::new_QSslError(const QSslError&  other)
{ 
return new QSslError(other); }

QSslCertificate  PythonQtWrapper_QSslError::certificate(QSslError* theWrappedObject) const
{
  return ( theWrappedObject->certificate());
}

QSslError::SslError  PythonQtWrapper_QSslError::error(QSslError* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSslError::errorString(QSslError* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QSslError::__ne__(QSslError* theWrappedObject, const QSslError&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QSslError*  PythonQtWrapper_QSslError::operator_assign(QSslError* theWrappedObject, const QSslError&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslError::__eq__(QSslError* theWrappedObject, const QSslError&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QSslError::swap(QSslError* theWrappedObject, QSslError&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QSslError::py_toString(QSslError* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslKey* PythonQtWrapper_QSslKey::new_QSslKey()
{ 
return new QSslKey(); }

QSslKey* PythonQtWrapper_QSslKey::new_QSslKey(QIODevice*  device, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format, QSsl::KeyType  type, const QByteArray&  passPhrase)
{ 
return new QSslKey(device, algorithm, format, type, passPhrase); }

QSslKey* PythonQtWrapper_QSslKey::new_QSslKey(Qt::HANDLE  handle, QSsl::KeyType  type)
{ 
return new QSslKey(handle, type); }

QSslKey* PythonQtWrapper_QSslKey::new_QSslKey(const QByteArray&  encoded, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format, QSsl::KeyType  type, const QByteArray&  passPhrase)
{ 
return new QSslKey(encoded, algorithm, format, type, passPhrase); }

QSslKey* PythonQtWrapper_QSslKey::new_QSslKey(const QSslKey&  other)
{ 
return new QSslKey(other); }

QSsl::KeyAlgorithm  PythonQtWrapper_QSslKey::algorithm(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->algorithm());
}

void PythonQtWrapper_QSslKey::clear(QSslKey* theWrappedObject)
{
  ( theWrappedObject->clear());
}

Qt::HANDLE  PythonQtWrapper_QSslKey::handle(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

bool  PythonQtWrapper_QSslKey::isNull(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QSslKey::length(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QSslKey::__ne__(QSslKey* theWrappedObject, const QSslKey&  key) const
{
  return ( (*theWrappedObject)!= key);
}

QSslKey*  PythonQtWrapper_QSslKey::operator_assign(QSslKey* theWrappedObject, const QSslKey&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslKey::__eq__(QSslKey* theWrappedObject, const QSslKey&  key) const
{
  return ( (*theWrappedObject)== key);
}

void PythonQtWrapper_QSslKey::swap(QSslKey* theWrappedObject, QSslKey&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QSslKey::toDer(QSslKey* theWrappedObject, const QByteArray&  passPhrase) const
{
  return ( theWrappedObject->toDer(passPhrase));
}

QByteArray  PythonQtWrapper_QSslKey::toPem(QSslKey* theWrappedObject, const QByteArray&  passPhrase) const
{
  return ( theWrappedObject->toPem(passPhrase));
}

QSsl::KeyType  PythonQtWrapper_QSslKey::type(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QSslKey::py_toString(QSslKey* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslPreSharedKeyAuthenticator* PythonQtWrapper_QSslPreSharedKeyAuthenticator::new_QSslPreSharedKeyAuthenticator()
{ 
return new QSslPreSharedKeyAuthenticator(); }

QSslPreSharedKeyAuthenticator* PythonQtWrapper_QSslPreSharedKeyAuthenticator::new_QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator&  authenticator)
{ 
return new QSslPreSharedKeyAuthenticator(authenticator); }

QByteArray  PythonQtWrapper_QSslPreSharedKeyAuthenticator::identity(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->identity());
}

QByteArray  PythonQtWrapper_QSslPreSharedKeyAuthenticator::identityHint(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->identityHint());
}

int  PythonQtWrapper_QSslPreSharedKeyAuthenticator::maximumIdentityLength(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->maximumIdentityLength());
}

int  PythonQtWrapper_QSslPreSharedKeyAuthenticator::maximumPreSharedKeyLength(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->maximumPreSharedKeyLength());
}

bool  PythonQtWrapper_QSslPreSharedKeyAuthenticator::__ne__(QSslPreSharedKeyAuthenticator* theWrappedObject, const QSslPreSharedKeyAuthenticator&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QSslPreSharedKeyAuthenticator*  PythonQtWrapper_QSslPreSharedKeyAuthenticator::operator_assign(QSslPreSharedKeyAuthenticator* theWrappedObject, const QSslPreSharedKeyAuthenticator&  authenticator)
{
  return &( (*theWrappedObject)= authenticator);
}

bool  PythonQtWrapper_QSslPreSharedKeyAuthenticator::__eq__(QSslPreSharedKeyAuthenticator* theWrappedObject, const QSslPreSharedKeyAuthenticator&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QByteArray  PythonQtWrapper_QSslPreSharedKeyAuthenticator::preSharedKey(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->preSharedKey());
}

void PythonQtWrapper_QSslPreSharedKeyAuthenticator::setIdentity(QSslPreSharedKeyAuthenticator* theWrappedObject, const QByteArray&  identity)
{
  ( theWrappedObject->setIdentity(identity));
}

void PythonQtWrapper_QSslPreSharedKeyAuthenticator::setPreSharedKey(QSslPreSharedKeyAuthenticator* theWrappedObject, const QByteArray&  preSharedKey)
{
  ( theWrappedObject->setPreSharedKey(preSharedKey));
}

void PythonQtWrapper_QSslPreSharedKeyAuthenticator::swap(QSslPreSharedKeyAuthenticator* theWrappedObject, QSslPreSharedKeyAuthenticator&  other)
{
  ( theWrappedObject->swap(other));
}

#endif


#ifndef QT_NO_SSL
PythonQtShell_QSslServer::~PythonQtShell_QSslServer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSslServer::childEvent(QChildEvent*  event0)
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
  QSslServer::childEvent(event0);
}
void PythonQtShell_QSslServer::customEvent(QEvent*  event0)
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
  QSslServer::customEvent(event0);
}
bool  PythonQtShell_QSslServer::event(QEvent*  event0)
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
  return QSslServer::event(event0);
}
bool  PythonQtShell_QSslServer::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QSslServer::eventFilter(watched0, event1);
}
bool  PythonQtShell_QSslServer::hasPendingConnections() const
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
  return QSslServer::hasPendingConnections();
}
void PythonQtShell_QSslServer::incomingConnection(qintptr  socket0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("incomingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qintptr"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&socket0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSslServer::incomingConnection(socket0);
}
QTcpSocket*  PythonQtShell_QSslServer::nextPendingConnection()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("nextPendingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QTcpSocket*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTcpSocket* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("nextPendingConnection", methodInfo, result);
          } else {
            returnValue = *((QTcpSocket**)args[0]);
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
  return QSslServer::nextPendingConnection();
}
void PythonQtShell_QSslServer::timerEvent(QTimerEvent*  event0)
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
  QSslServer::timerEvent(event0);
}
QSslServer* PythonQtWrapper_QSslServer::new_QSslServer(QObject*  parent)
{ 
return new PythonQtShell_QSslServer(parent); }

const QMetaObject* PythonQtShell_QSslServer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSslServer::staticMetaObject);
  } else {
    return &QSslServer::staticMetaObject;
  }
}
int PythonQtShell_QSslServer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSslServer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QSslServer::handshakeTimeout(QSslServer* theWrappedObject) const
{
  return ( theWrappedObject->handshakeTimeout());
}

void PythonQtWrapper_QSslServer::setHandshakeTimeout(QSslServer* theWrappedObject, int  timeout)
{
  ( theWrappedObject->setHandshakeTimeout(timeout));
}

void PythonQtWrapper_QSslServer::setSslConfiguration(QSslServer* theWrappedObject, const QSslConfiguration&  sslConfiguration)
{
  ( theWrappedObject->setSslConfiguration(sslConfiguration));
}

QSslConfiguration  PythonQtWrapper_QSslServer::sslConfiguration(QSslServer* theWrappedObject) const
{
  return ( theWrappedObject->sslConfiguration());
}

#endif


#ifndef QT_NO_SSL
PythonQtShell_QSslSocket::~PythonQtShell_QSslSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QSslSocket::atEnd() const
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
  return QSslSocket::atEnd();
}
qint64  PythonQtShell_QSslSocket::bytesAvailable() const
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
  return QSslSocket::bytesAvailable();
}
qint64  PythonQtShell_QSslSocket::bytesToWrite() const
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
  return QSslSocket::bytesToWrite();
}
bool  PythonQtShell_QSslSocket::canReadLine() const
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
  return QSslSocket::canReadLine();
}
void PythonQtShell_QSslSocket::childEvent(QChildEvent*  event0)
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
  QSslSocket::childEvent(event0);
}
void PythonQtShell_QSslSocket::close()
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
  QSslSocket::close();
}
void PythonQtShell_QSslSocket::connectToHost(const QString&  hostName0, unsigned short  port1, QIODeviceBase::OpenMode  openMode2, QAbstractSocket::NetworkLayerProtocol  protocol3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("connectToHost");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&" , "unsigned short" , "QIODeviceBase::OpenMode" , "QAbstractSocket::NetworkLayerProtocol"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {nullptr, (void*)&hostName0, (void*)&port1, (void*)&openMode2, (void*)&protocol3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSslSocket::connectToHost(hostName0, port1, openMode2, protocol3);
}
void PythonQtShell_QSslSocket::customEvent(QEvent*  event0)
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
  QSslSocket::customEvent(event0);
}
void PythonQtShell_QSslSocket::disconnectFromHost()
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
  QSslSocket::disconnectFromHost();
}
bool  PythonQtShell_QSslSocket::event(QEvent*  event0)
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
  return QSslSocket::event(event0);
}
bool  PythonQtShell_QSslSocket::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QSslSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QSslSocket::isSequential() const
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
  return QSslSocket::isSequential();
}
bool  PythonQtShell_QSslSocket::open(QIODeviceBase::OpenMode  mode0)
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
  return QSslSocket::open(mode0);
}
qint64  PythonQtShell_QSslSocket::pos() const
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
  return QSslSocket::pos();
}
qint64  PythonQtShell_QSslSocket::readData(char*  data0, qint64  maxlen1)
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
  return QSslSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QSslSocket::readLineData(char*  data0, qint64  maxlen1)
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
  return QSslSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QSslSocket::reset()
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
  return QSslSocket::reset();
}
void PythonQtShell_QSslSocket::resume()
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
  QSslSocket::resume();
}
bool  PythonQtShell_QSslSocket::seek(qint64  pos0)
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
  return QSslSocket::seek(pos0);
}
void PythonQtShell_QSslSocket::setReadBufferSize(qint64  size0)
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
  QSslSocket::setReadBufferSize(size0);
}
bool  PythonQtShell_QSslSocket::setSocketDescriptor(qintptr  socketDescriptor0, QAbstractSocket::SocketState  state1, QIODeviceBase::OpenMode  openMode2)
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
  return QSslSocket::setSocketDescriptor(socketDescriptor0, state1, openMode2);
}
void PythonQtShell_QSslSocket::setSocketOption(QAbstractSocket::SocketOption  option0, const QVariant&  value1)
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
  QSslSocket::setSocketOption(option0, value1);
}
qint64  PythonQtShell_QSslSocket::size() const
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
  return QSslSocket::size();
}
qint64  PythonQtShell_QSslSocket::skipData(qint64  maxSize0)
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
  return QSslSocket::skipData(maxSize0);
}
qintptr  PythonQtShell_QSslSocket::socketDescriptor() const
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
  return QSslSocket::socketDescriptor();
}
QVariant  PythonQtShell_QSslSocket::socketOption(QAbstractSocket::SocketOption  option0)
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
  return QSslSocket::socketOption(option0);
}
void PythonQtShell_QSslSocket::timerEvent(QTimerEvent*  event0)
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
  QSslSocket::timerEvent(event0);
}
bool  PythonQtShell_QSslSocket::waitForBytesWritten(int  msecs0)
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
  return QSslSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QSslSocket::waitForConnected(int  msecs0)
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
  return QSslSocket::waitForConnected(msecs0);
}
bool  PythonQtShell_QSslSocket::waitForDisconnected(int  msecs0)
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
  return QSslSocket::waitForDisconnected(msecs0);
}
bool  PythonQtShell_QSslSocket::waitForReadyRead(int  msecs0)
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
  return QSslSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QSslSocket::writeData(const char*  data0, qint64  len1)
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
  return QSslSocket::writeData(data0, len1);
}
QSslSocket* PythonQtWrapper_QSslSocket::new_QSslSocket(QObject*  parent)
{ 
return new PythonQtShell_QSslSocket(parent); }

const QMetaObject* PythonQtShell_QSslSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSslSocket::staticMetaObject);
  } else {
    return &QSslSocket::staticMetaObject;
  }
}
int PythonQtShell_QSslSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSslSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QSslSocket::static_QSslSocket_activeBackend()
{
  return (QSslSocket::activeBackend());
}

QList<QString >  PythonQtWrapper_QSslSocket::static_QSslSocket_availableBackends()
{
  return (QSslSocket::availableBackends());
}

void PythonQtWrapper_QSslSocket::connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODeviceBase::OpenMode  mode, QAbstractSocket::NetworkLayerProtocol  protocol)
{
  ( theWrappedObject->connectToHostEncrypted(hostName, port, mode, protocol));
}

void PythonQtWrapper_QSslSocket::connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, const QString&  sslPeerName, QIODeviceBase::OpenMode  mode, QAbstractSocket::NetworkLayerProtocol  protocol)
{
  ( theWrappedObject->connectToHostEncrypted(hostName, port, sslPeerName, mode, protocol));
}

void PythonQtWrapper_QSslSocket::continueInterruptedHandshake(QSslSocket* theWrappedObject)
{
  ( theWrappedObject->continueInterruptedHandshake());
}

qint64  PythonQtWrapper_QSslSocket::encryptedBytesAvailable(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->encryptedBytesAvailable());
}

qint64  PythonQtWrapper_QSslSocket::encryptedBytesToWrite(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->encryptedBytesToWrite());
}

void PythonQtWrapper_QSslSocket::ignoreSslErrors(QSslSocket* theWrappedObject, const QList<QSslError >&  errors)
{
  ( theWrappedObject->ignoreSslErrors(errors));
}

QList<QSsl::ImplementedClass >  PythonQtWrapper_QSslSocket::static_QSslSocket_implementedClasses(const QString&  backendName)
{
  return (QSslSocket::implementedClasses(backendName));
}

bool  PythonQtWrapper_QSslSocket::static_QSslSocket_isClassImplemented(QSsl::ImplementedClass  cl, const QString&  backendName)
{
  return (QSslSocket::isClassImplemented(cl, backendName));
}

bool  PythonQtWrapper_QSslSocket::isEncrypted(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->isEncrypted());
}

bool  PythonQtWrapper_QSslSocket::static_QSslSocket_isFeatureSupported(QSsl::SupportedFeature  feat, const QString&  backendName)
{
  return (QSslSocket::isFeatureSupported(feat, backendName));
}

bool  PythonQtWrapper_QSslSocket::static_QSslSocket_isProtocolSupported(QSsl::SslProtocol  protocol, const QString&  backendName)
{
  return (QSslSocket::isProtocolSupported(protocol, backendName));
}

QSslCertificate  PythonQtWrapper_QSslSocket::localCertificate(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->localCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QSslSocket::localCertificateChain(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->localCertificateChain());
}

QSslSocket::SslMode  PythonQtWrapper_QSslSocket::mode(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->mode());
}

QList<QOcspResponse >  PythonQtWrapper_QSslSocket::ocspResponses(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->ocspResponses());
}

QSslCertificate  PythonQtWrapper_QSslSocket::peerCertificate(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QSslSocket::peerCertificateChain(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerCertificateChain());
}

int  PythonQtWrapper_QSslSocket::peerVerifyDepth(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyDepth());
}

QSslSocket::PeerVerifyMode  PythonQtWrapper_QSslSocket::peerVerifyMode(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyMode());
}

QString  PythonQtWrapper_QSslSocket::peerVerifyName(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyName());
}

QSslKey  PythonQtWrapper_QSslSocket::privateKey(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->privateKey());
}

QSsl::SslProtocol  PythonQtWrapper_QSslSocket::protocol(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

QSslCipher  PythonQtWrapper_QSslSocket::sessionCipher(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->sessionCipher());
}

QSsl::SslProtocol  PythonQtWrapper_QSslSocket::sessionProtocol(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->sessionProtocol());
}

bool  PythonQtWrapper_QSslSocket::static_QSslSocket_setActiveBackend(const QString&  backendName)
{
  return (QSslSocket::setActiveBackend(backendName));
}

void PythonQtWrapper_QSslSocket::setLocalCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->setLocalCertificate(certificate));
}

void PythonQtWrapper_QSslSocket::setLocalCertificate(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::EncodingFormat  format)
{
  ( theWrappedObject->setLocalCertificate(fileName, format));
}

void PythonQtWrapper_QSslSocket::setLocalCertificateChain(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  localChain)
{
  ( theWrappedObject->setLocalCertificateChain(localChain));
}

void PythonQtWrapper_QSslSocket::setPeerVerifyDepth(QSslSocket* theWrappedObject, int  depth)
{
  ( theWrappedObject->setPeerVerifyDepth(depth));
}

void PythonQtWrapper_QSslSocket::setPeerVerifyMode(QSslSocket* theWrappedObject, QSslSocket::PeerVerifyMode  mode)
{
  ( theWrappedObject->setPeerVerifyMode(mode));
}

void PythonQtWrapper_QSslSocket::setPeerVerifyName(QSslSocket* theWrappedObject, const QString&  hostName)
{
  ( theWrappedObject->setPeerVerifyName(hostName));
}

void PythonQtWrapper_QSslSocket::setPrivateKey(QSslSocket* theWrappedObject, const QSslKey&  key)
{
  ( theWrappedObject->setPrivateKey(key));
}

void PythonQtWrapper_QSslSocket::setPrivateKey(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format, const QByteArray&  passPhrase)
{
  ( theWrappedObject->setPrivateKey(fileName, algorithm, format, passPhrase));
}

void PythonQtWrapper_QSslSocket::setProtocol(QSslSocket* theWrappedObject, QSsl::SslProtocol  protocol)
{
  ( theWrappedObject->setProtocol(protocol));
}

void PythonQtWrapper_QSslSocket::setSslConfiguration(QSslSocket* theWrappedObject, const QSslConfiguration&  config)
{
  ( theWrappedObject->setSslConfiguration(config));
}

QSslConfiguration  PythonQtWrapper_QSslSocket::sslConfiguration(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->sslConfiguration());
}

QList<QSslError >  PythonQtWrapper_QSslSocket::sslHandshakeErrors(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->sslHandshakeErrors());
}

long  PythonQtWrapper_QSslSocket::static_QSslSocket_sslLibraryBuildVersionNumber()
{
  return (QSslSocket::sslLibraryBuildVersionNumber());
}

QString  PythonQtWrapper_QSslSocket::static_QSslSocket_sslLibraryBuildVersionString()
{
  return (QSslSocket::sslLibraryBuildVersionString());
}

long  PythonQtWrapper_QSslSocket::static_QSslSocket_sslLibraryVersionNumber()
{
  return (QSslSocket::sslLibraryVersionNumber());
}

QString  PythonQtWrapper_QSslSocket::static_QSslSocket_sslLibraryVersionString()
{
  return (QSslSocket::sslLibraryVersionString());
}

QList<QSsl::SupportedFeature >  PythonQtWrapper_QSslSocket::static_QSslSocket_supportedFeatures(const QString&  backendName)
{
  return (QSslSocket::supportedFeatures(backendName));
}

QList<QSsl::SslProtocol >  PythonQtWrapper_QSslSocket::static_QSslSocket_supportedProtocols(const QString&  backendName)
{
  return (QSslSocket::supportedProtocols(backendName));
}

bool  PythonQtWrapper_QSslSocket::static_QSslSocket_supportsSsl()
{
  return (QSslSocket::supportsSsl());
}

bool  PythonQtWrapper_QSslSocket::waitForEncrypted(QSslSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForEncrypted(msecs));
}

#endif


PythonQtShell_QTcpServer::~PythonQtShell_QTcpServer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTcpServer::childEvent(QChildEvent*  event0)
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
  QTcpServer::childEvent(event0);
}
void PythonQtShell_QTcpServer::customEvent(QEvent*  event0)
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
  QTcpServer::customEvent(event0);
}
bool  PythonQtShell_QTcpServer::event(QEvent*  event0)
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
  return QTcpServer::event(event0);
}
bool  PythonQtShell_QTcpServer::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QTcpServer::eventFilter(watched0, event1);
}
bool  PythonQtShell_QTcpServer::hasPendingConnections() const
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
  return QTcpServer::hasPendingConnections();
}
void PythonQtShell_QTcpServer::incomingConnection(qintptr  handle0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("incomingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qintptr"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&handle0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTcpServer::incomingConnection(handle0);
}
QTcpSocket*  PythonQtShell_QTcpServer::nextPendingConnection()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("nextPendingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QTcpSocket*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTcpSocket* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("nextPendingConnection", methodInfo, result);
          } else {
            returnValue = *((QTcpSocket**)args[0]);
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
  return QTcpServer::nextPendingConnection();
}
void PythonQtShell_QTcpServer::timerEvent(QTimerEvent*  event0)
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
  QTcpServer::timerEvent(event0);
}
QTcpServer* PythonQtWrapper_QTcpServer::new_QTcpServer(QObject*  parent)
{ 
return new PythonQtShell_QTcpServer(parent); }

const QMetaObject* PythonQtShell_QTcpServer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTcpServer::staticMetaObject);
  } else {
    return &QTcpServer::staticMetaObject;
  }
}
int PythonQtShell_QTcpServer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTcpServer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QTcpServer::addPendingConnection(QTcpServer* theWrappedObject, QTcpSocket*  socket)
{
  ( ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_addPendingConnection(socket));
}

void PythonQtWrapper_QTcpServer::close(QTcpServer* theWrappedObject)
{
  ( theWrappedObject->close());
}

QString  PythonQtWrapper_QTcpServer::errorString(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QTcpServer::hasPendingConnections(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingConnections());
}

void PythonQtWrapper_QTcpServer::incomingConnection(QTcpServer* theWrappedObject, qintptr  handle)
{
  ( ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_incomingConnection(handle));
}

bool  PythonQtWrapper_QTcpServer::isListening(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->isListening());
}

bool  PythonQtWrapper_QTcpServer::listen(QTcpServer* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
  return ( theWrappedObject->listen(address, port));
}

int  PythonQtWrapper_QTcpServer::listenBacklogSize(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->listenBacklogSize());
}

int  PythonQtWrapper_QTcpServer::maxPendingConnections(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->maxPendingConnections());
}

QTcpSocket*  PythonQtWrapper_QTcpServer::nextPendingConnection(QTcpServer* theWrappedObject)
{
  return ( theWrappedObject->nextPendingConnection());
}

void PythonQtWrapper_QTcpServer::pauseAccepting(QTcpServer* theWrappedObject)
{
  ( theWrappedObject->pauseAccepting());
}

QNetworkProxy  PythonQtWrapper_QTcpServer::proxy(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

void PythonQtWrapper_QTcpServer::resumeAccepting(QTcpServer* theWrappedObject)
{
  ( theWrappedObject->resumeAccepting());
}

QHostAddress  PythonQtWrapper_QTcpServer::serverAddress(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverAddress());
}

QAbstractSocket::SocketError  PythonQtWrapper_QTcpServer::serverError(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverError());
}

unsigned short  PythonQtWrapper_QTcpServer::serverPort(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverPort());
}

void PythonQtWrapper_QTcpServer::setListenBacklogSize(QTcpServer* theWrappedObject, int  size)
{
  ( theWrappedObject->setListenBacklogSize(size));
}

void PythonQtWrapper_QTcpServer::setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections)
{
  ( theWrappedObject->setMaxPendingConnections(numConnections));
}

void PythonQtWrapper_QTcpServer::setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy)
{
  ( theWrappedObject->setProxy(networkProxy));
}

bool  PythonQtWrapper_QTcpServer::setSocketDescriptor(QTcpServer* theWrappedObject, qintptr  socketDescriptor)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor));
}

qintptr  PythonQtWrapper_QTcpServer::socketDescriptor(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

bool  PythonQtWrapper_QTcpServer::waitForNewConnection(QTcpServer* theWrappedObject, int  msec, bool*  timedOut)
{
  return ( theWrappedObject->waitForNewConnection(msec, timedOut));
}



PythonQtShell_QTcpSocket::~PythonQtShell_QTcpSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QTcpSocket::atEnd() const
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
  return QTcpSocket::atEnd();
}
qint64  PythonQtShell_QTcpSocket::bytesAvailable() const
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
  return QTcpSocket::bytesAvailable();
}
qint64  PythonQtShell_QTcpSocket::bytesToWrite() const
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
  return QTcpSocket::bytesToWrite();
}
bool  PythonQtShell_QTcpSocket::canReadLine() const
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
  return QTcpSocket::canReadLine();
}
void PythonQtShell_QTcpSocket::childEvent(QChildEvent*  event0)
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
  QTcpSocket::childEvent(event0);
}
void PythonQtShell_QTcpSocket::close()
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
  QTcpSocket::close();
}
void PythonQtShell_QTcpSocket::connectToHost(const QString&  hostName0, unsigned short  port1, QIODeviceBase::OpenMode  mode2, QAbstractSocket::NetworkLayerProtocol  protocol3)
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
  QTcpSocket::connectToHost(hostName0, port1, mode2, protocol3);
}
void PythonQtShell_QTcpSocket::customEvent(QEvent*  event0)
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
  QTcpSocket::customEvent(event0);
}
void PythonQtShell_QTcpSocket::disconnectFromHost()
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
  QTcpSocket::disconnectFromHost();
}
bool  PythonQtShell_QTcpSocket::event(QEvent*  event0)
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
  return QTcpSocket::event(event0);
}
bool  PythonQtShell_QTcpSocket::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QTcpSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QTcpSocket::isSequential() const
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
  return QTcpSocket::isSequential();
}
bool  PythonQtShell_QTcpSocket::open(QIODeviceBase::OpenMode  mode0)
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
  return QTcpSocket::open(mode0);
}
qint64  PythonQtShell_QTcpSocket::pos() const
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
  return QTcpSocket::pos();
}
qint64  PythonQtShell_QTcpSocket::readData(char*  data0, qint64  maxlen1)
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
  return QTcpSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QTcpSocket::readLineData(char*  data0, qint64  maxlen1)
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
  return QTcpSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QTcpSocket::reset()
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
  return QTcpSocket::reset();
}
void PythonQtShell_QTcpSocket::resume()
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
  QTcpSocket::resume();
}
bool  PythonQtShell_QTcpSocket::seek(qint64  pos0)
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
  return QTcpSocket::seek(pos0);
}
void PythonQtShell_QTcpSocket::setReadBufferSize(qint64  size0)
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
  QTcpSocket::setReadBufferSize(size0);
}
bool  PythonQtShell_QTcpSocket::setSocketDescriptor(qintptr  socketDescriptor0, QAbstractSocket::SocketState  state1, QIODeviceBase::OpenMode  openMode2)
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
  return QTcpSocket::setSocketDescriptor(socketDescriptor0, state1, openMode2);
}
void PythonQtShell_QTcpSocket::setSocketOption(QAbstractSocket::SocketOption  option0, const QVariant&  value1)
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
  QTcpSocket::setSocketOption(option0, value1);
}
qint64  PythonQtShell_QTcpSocket::size() const
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
  return QTcpSocket::size();
}
qint64  PythonQtShell_QTcpSocket::skipData(qint64  maxSize0)
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
  return QTcpSocket::skipData(maxSize0);
}
qintptr  PythonQtShell_QTcpSocket::socketDescriptor() const
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
  return QTcpSocket::socketDescriptor();
}
QVariant  PythonQtShell_QTcpSocket::socketOption(QAbstractSocket::SocketOption  option0)
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
  return QTcpSocket::socketOption(option0);
}
void PythonQtShell_QTcpSocket::timerEvent(QTimerEvent*  event0)
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
  QTcpSocket::timerEvent(event0);
}
bool  PythonQtShell_QTcpSocket::waitForBytesWritten(int  msecs0)
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
  return QTcpSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QTcpSocket::waitForConnected(int  msecs0)
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
  return QTcpSocket::waitForConnected(msecs0);
}
bool  PythonQtShell_QTcpSocket::waitForDisconnected(int  msecs0)
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
  return QTcpSocket::waitForDisconnected(msecs0);
}
bool  PythonQtShell_QTcpSocket::waitForReadyRead(int  msecs0)
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
  return QTcpSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QTcpSocket::writeData(const char*  data0, qint64  len1)
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
  return QTcpSocket::writeData(data0, len1);
}
QTcpSocket* PythonQtWrapper_QTcpSocket::new_QTcpSocket(QObject*  parent)
{ 
return new PythonQtShell_QTcpSocket(parent); }

const QMetaObject* PythonQtShell_QTcpSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTcpSocket::staticMetaObject);
  } else {
    return &QTcpSocket::staticMetaObject;
  }
}
int PythonQtShell_QTcpSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTcpSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QTcpSocket::bind(QTcpSocket* theWrappedObject, QHostAddress::SpecialAddress  addr, unsigned short  port, QAbstractSocket::BindMode  mode)
{
  return ( theWrappedObject->bind(addr, port, mode));
}



PythonQtShell_QUdpSocket::~PythonQtShell_QUdpSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QUdpSocket::atEnd() const
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
  return QUdpSocket::atEnd();
}
qint64  PythonQtShell_QUdpSocket::bytesAvailable() const
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
  return QUdpSocket::bytesAvailable();
}
qint64  PythonQtShell_QUdpSocket::bytesToWrite() const
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
  return QUdpSocket::bytesToWrite();
}
bool  PythonQtShell_QUdpSocket::canReadLine() const
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
  return QUdpSocket::canReadLine();
}
void PythonQtShell_QUdpSocket::childEvent(QChildEvent*  event0)
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
  QUdpSocket::childEvent(event0);
}
void PythonQtShell_QUdpSocket::close()
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
  QUdpSocket::close();
}
void PythonQtShell_QUdpSocket::connectToHost(const QString&  hostName0, unsigned short  port1, QIODeviceBase::OpenMode  mode2, QAbstractSocket::NetworkLayerProtocol  protocol3)
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
  QUdpSocket::connectToHost(hostName0, port1, mode2, protocol3);
}
void PythonQtShell_QUdpSocket::customEvent(QEvent*  event0)
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
  QUdpSocket::customEvent(event0);
}
void PythonQtShell_QUdpSocket::disconnectFromHost()
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
  QUdpSocket::disconnectFromHost();
}
bool  PythonQtShell_QUdpSocket::event(QEvent*  event0)
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
  return QUdpSocket::event(event0);
}
bool  PythonQtShell_QUdpSocket::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QUdpSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QUdpSocket::isSequential() const
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
  return QUdpSocket::isSequential();
}
bool  PythonQtShell_QUdpSocket::open(QIODeviceBase::OpenMode  mode0)
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
  return QUdpSocket::open(mode0);
}
qint64  PythonQtShell_QUdpSocket::pos() const
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
  return QUdpSocket::pos();
}
qint64  PythonQtShell_QUdpSocket::readData(char*  data0, qint64  maxlen1)
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
  return QUdpSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QUdpSocket::readLineData(char*  data0, qint64  maxlen1)
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
  return QUdpSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QUdpSocket::reset()
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
  return QUdpSocket::reset();
}
void PythonQtShell_QUdpSocket::resume()
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
  QUdpSocket::resume();
}
bool  PythonQtShell_QUdpSocket::seek(qint64  pos0)
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
  return QUdpSocket::seek(pos0);
}
void PythonQtShell_QUdpSocket::setReadBufferSize(qint64  size0)
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
  QUdpSocket::setReadBufferSize(size0);
}
bool  PythonQtShell_QUdpSocket::setSocketDescriptor(qintptr  socketDescriptor0, QAbstractSocket::SocketState  state1, QIODeviceBase::OpenMode  openMode2)
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
  return QUdpSocket::setSocketDescriptor(socketDescriptor0, state1, openMode2);
}
void PythonQtShell_QUdpSocket::setSocketOption(QAbstractSocket::SocketOption  option0, const QVariant&  value1)
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
  QUdpSocket::setSocketOption(option0, value1);
}
qint64  PythonQtShell_QUdpSocket::size() const
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
  return QUdpSocket::size();
}
qint64  PythonQtShell_QUdpSocket::skipData(qint64  maxSize0)
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
  return QUdpSocket::skipData(maxSize0);
}
qintptr  PythonQtShell_QUdpSocket::socketDescriptor() const
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
  return QUdpSocket::socketDescriptor();
}
QVariant  PythonQtShell_QUdpSocket::socketOption(QAbstractSocket::SocketOption  option0)
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
  return QUdpSocket::socketOption(option0);
}
void PythonQtShell_QUdpSocket::timerEvent(QTimerEvent*  event0)
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
  QUdpSocket::timerEvent(event0);
}
bool  PythonQtShell_QUdpSocket::waitForBytesWritten(int  msecs0)
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
  return QUdpSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QUdpSocket::waitForConnected(int  msecs0)
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
  return QUdpSocket::waitForConnected(msecs0);
}
bool  PythonQtShell_QUdpSocket::waitForDisconnected(int  msecs0)
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
  return QUdpSocket::waitForDisconnected(msecs0);
}
bool  PythonQtShell_QUdpSocket::waitForReadyRead(int  msecs0)
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
  return QUdpSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QUdpSocket::writeData(const char*  data0, qint64  len1)
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
  return QUdpSocket::writeData(data0, len1);
}
QUdpSocket* PythonQtWrapper_QUdpSocket::new_QUdpSocket(QObject*  parent)
{ 
return new PythonQtShell_QUdpSocket(parent); }

const QMetaObject* PythonQtShell_QUdpSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QUdpSocket::staticMetaObject);
  } else {
    return &QUdpSocket::staticMetaObject;
  }
}
int PythonQtShell_QUdpSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QUdpSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, QHostAddress::SpecialAddress  addr, unsigned short  port, QAbstractSocket::BindMode  mode)
{
  return ( theWrappedObject->bind(addr, port, mode));
}

bool  PythonQtWrapper_QUdpSocket::hasPendingDatagrams(QUdpSocket* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingDatagrams());
}

bool  PythonQtWrapper_QUdpSocket::joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress)
{
  return ( theWrappedObject->joinMulticastGroup(groupAddress));
}

bool  PythonQtWrapper_QUdpSocket::joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface)
{
  return ( theWrappedObject->joinMulticastGroup(groupAddress, iface));
}

bool  PythonQtWrapper_QUdpSocket::leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress)
{
  return ( theWrappedObject->leaveMulticastGroup(groupAddress));
}

bool  PythonQtWrapper_QUdpSocket::leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface)
{
  return ( theWrappedObject->leaveMulticastGroup(groupAddress, iface));
}

QNetworkInterface  PythonQtWrapper_QUdpSocket::multicastInterface(QUdpSocket* theWrappedObject) const
{
  return ( theWrappedObject->multicastInterface());
}

qint64  PythonQtWrapper_QUdpSocket::pendingDatagramSize(QUdpSocket* theWrappedObject) const
{
  return ( theWrappedObject->pendingDatagramSize());
}

qint64  PythonQtWrapper_QUdpSocket::readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host, unsigned short*  port)
{
  return ( theWrappedObject->readDatagram(data, maxlen, host, port));
}

QNetworkDatagram  PythonQtWrapper_QUdpSocket::receiveDatagram(QUdpSocket* theWrappedObject, qint64  maxSize)
{
  return ( theWrappedObject->receiveDatagram(maxSize));
}

void PythonQtWrapper_QUdpSocket::setMulticastInterface(QUdpSocket* theWrappedObject, const QNetworkInterface&  iface)
{
  ( theWrappedObject->setMulticastInterface(iface));
}

qint64  PythonQtWrapper_QUdpSocket::writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port)
{
  return ( theWrappedObject->writeDatagram(datagram, host, port));
}

qint64  PythonQtWrapper_QUdpSocket::writeDatagram(QUdpSocket* theWrappedObject, const QNetworkDatagram&  datagram)
{
  return ( theWrappedObject->writeDatagram(datagram));
}




