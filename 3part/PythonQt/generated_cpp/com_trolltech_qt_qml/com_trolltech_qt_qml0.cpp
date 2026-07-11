#include "com_trolltech_qt_qml0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsmanagedvalue.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlabstracturlinterceptor.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmlerror.h>
#include <QtQml/qqmlfileselector.h>
#include <QtQml/qqmlincubator.h>
#include <QtQml/qqmlinfo.h>
#include <QtQml/qqmllist.h>
#include <QtQml/qqmlnetworkaccessmanagerfactory.h>
#include <QtQml/qqmlproperty.h>
#include <QtQml/qqmlpropertymap.h>
#include <QtQml/qqmlscriptstring.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qfileselector.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qnetworkaccessmanager.h>
#include <qobject.h>
#include <qregularexpression.h>
#include <qthread.h>
#include <qurl.h>

PythonQtShell_QJSEngine::~PythonQtShell_QJSEngine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QJSEngine::childEvent(QChildEvent*  event0)
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
  QJSEngine::childEvent(event0);
}
void PythonQtShell_QJSEngine::customEvent(QEvent*  event0)
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
  QJSEngine::customEvent(event0);
}
bool  PythonQtShell_QJSEngine::event(QEvent*  event0)
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
  return QJSEngine::event(event0);
}
bool  PythonQtShell_QJSEngine::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QJSEngine::eventFilter(watched0, event1);
}
void PythonQtShell_QJSEngine::timerEvent(QTimerEvent*  event0)
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
  QJSEngine::timerEvent(event0);
}
QJSEngine* PythonQtWrapper_QJSEngine::new_QJSEngine()
{ 
return new PythonQtShell_QJSEngine(); }

QJSEngine* PythonQtWrapper_QJSEngine::new_QJSEngine(QObject*  parent)
{ 
return new PythonQtShell_QJSEngine(parent); }

const QMetaObject* PythonQtShell_QJSEngine::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QJSEngine::staticMetaObject);
  } else {
    return &QJSEngine::staticMetaObject;
  }
}
int PythonQtShell_QJSEngine::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QJSEngine::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QJSValue  PythonQtWrapper_QJSEngine::catchError(QJSEngine* theWrappedObject)
{
  return ( theWrappedObject->catchError());
}

void PythonQtWrapper_QJSEngine::collectGarbage(QJSEngine* theWrappedObject)
{
  ( theWrappedObject->collectGarbage());
}

QJSValue  PythonQtWrapper_QJSEngine::evaluate(QJSEngine* theWrappedObject, const QString&  program, const QString&  fileName, int  lineNumber, QStringList*  exceptionStackTrace)
{
  return ( theWrappedObject->evaluate(program, fileName, lineNumber, exceptionStackTrace));
}

QJSValue  PythonQtWrapper_QJSEngine::globalObject(QJSEngine* theWrappedObject) const
{
  return ( theWrappedObject->globalObject());
}

bool  PythonQtWrapper_QJSEngine::hasError(QJSEngine* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

QJSValue  PythonQtWrapper_QJSEngine::importModule(QJSEngine* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->importModule(fileName));
}

bool  PythonQtWrapper_QJSEngine::isInterrupted(QJSEngine* theWrappedObject) const
{
  return ( theWrappedObject->isInterrupted());
}

QJSValue  PythonQtWrapper_QJSEngine::newArray(QJSEngine* theWrappedObject, uint  length)
{
  return ( theWrappedObject->newArray(length));
}

QJSValue  PythonQtWrapper_QJSEngine::newErrorObject(QJSEngine* theWrappedObject, QJSValue::ErrorType  errorType, const QString&  message)
{
  return ( theWrappedObject->newErrorObject(errorType, message));
}

QJSValue  PythonQtWrapper_QJSEngine::newObject(QJSEngine* theWrappedObject)
{
  return ( theWrappedObject->newObject());
}

QJSValue  PythonQtWrapper_QJSEngine::newQMetaObject(QJSEngine* theWrappedObject, const QMetaObject*  metaObject)
{
  return ( theWrappedObject->newQMetaObject(metaObject));
}

QJSValue  PythonQtWrapper_QJSEngine::newQObject(QJSEngine* theWrappedObject, QObject*  object)
{
  return ( theWrappedObject->newQObject(object));
}

QJSValue  PythonQtWrapper_QJSEngine::newSymbol(QJSEngine* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->newSymbol(name));
}

QJSEngine::ObjectOwnership  PythonQtWrapper_QJSEngine::static_QJSEngine_objectOwnership(QObject*  arg__1)
{
  return (QJSEngine::objectOwnership(arg__1));
}

bool  PythonQtWrapper_QJSEngine::registerModule(QJSEngine* theWrappedObject, const QString&  moduleName, const QJSValue&  value)
{
  return ( theWrappedObject->registerModule(moduleName, value));
}

void PythonQtWrapper_QJSEngine::setInterrupted(QJSEngine* theWrappedObject, bool  interrupted)
{
  ( theWrappedObject->setInterrupted(interrupted));
}

void PythonQtWrapper_QJSEngine::static_QJSEngine_setObjectOwnership(QObject*  arg__1, QJSEngine::ObjectOwnership  arg__2)
{
  (QJSEngine::setObjectOwnership(arg__1, arg__2));
}

void PythonQtWrapper_QJSEngine::setUiLanguage(QJSEngine* theWrappedObject, const QString&  language)
{
  ( theWrappedObject->setUiLanguage(language));
}

void PythonQtWrapper_QJSEngine::throwError(QJSEngine* theWrappedObject, QJSValue::ErrorType  errorType, const QString&  message)
{
  ( theWrappedObject->throwError(errorType, message));
}

void PythonQtWrapper_QJSEngine::throwError(QJSEngine* theWrappedObject, const QJSValue&  error)
{
  ( theWrappedObject->throwError(error));
}

void PythonQtWrapper_QJSEngine::throwError(QJSEngine* theWrappedObject, const QString&  message)
{
  ( theWrappedObject->throwError(message));
}

QString  PythonQtWrapper_QJSEngine::uiLanguage(QJSEngine* theWrappedObject) const
{
  return ( theWrappedObject->uiLanguage());
}



QJSManagedValue* PythonQtWrapper_QJSManagedValue::new_QJSManagedValue()
{ 
return new QJSManagedValue(); }

QJSManagedValue* PythonQtWrapper_QJSManagedValue::new_QJSManagedValue(QJSValue  value, QJSEngine*  engine)
{ 
return new QJSManagedValue(value, engine); }

QJSManagedValue* PythonQtWrapper_QJSManagedValue::new_QJSManagedValue(const QJSPrimitiveValue&  value, QJSEngine*  engine)
{ 
return new QJSManagedValue(value, engine); }

QJSManagedValue* PythonQtWrapper_QJSManagedValue::new_QJSManagedValue(const QString&  string, QJSEngine*  engine)
{ 
return new QJSManagedValue(string, engine); }

QJSManagedValue* PythonQtWrapper_QJSManagedValue::new_QJSManagedValue(const QVariant&  variant, QJSEngine*  engine)
{ 
return new QJSManagedValue(variant, engine); }

QJSValue  PythonQtWrapper_QJSManagedValue::call(QJSManagedValue* theWrappedObject, const QList<QJSValue >&  arguments) const
{
  return ( theWrappedObject->call(arguments));
}

QJSValue  PythonQtWrapper_QJSManagedValue::callAsConstructor(QJSManagedValue* theWrappedObject, const QList<QJSValue >&  arguments) const
{
  return ( theWrappedObject->callAsConstructor(arguments));
}

QJSValue  PythonQtWrapper_QJSManagedValue::callWithInstance(QJSManagedValue* theWrappedObject, const QJSValue&  instance, const QList<QJSValue >&  arguments) const
{
  return ( theWrappedObject->callWithInstance(instance, arguments));
}

bool  PythonQtWrapper_QJSManagedValue::deleteProperty(QJSManagedValue* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->deleteProperty(name));
}

bool  PythonQtWrapper_QJSManagedValue::deleteProperty(QJSManagedValue* theWrappedObject, unsigned int  arrayIndex)
{
  return ( theWrappedObject->deleteProperty(arrayIndex));
}

QJSEngine*  PythonQtWrapper_QJSManagedValue::engine(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->engine());
}

bool  PythonQtWrapper_QJSManagedValue::equals(QJSManagedValue* theWrappedObject, const QJSManagedValue&  other) const
{
  return ( theWrappedObject->equals(other));
}

bool  PythonQtWrapper_QJSManagedValue::hasOwnProperty(QJSManagedValue* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasOwnProperty(name));
}

bool  PythonQtWrapper_QJSManagedValue::hasOwnProperty(QJSManagedValue* theWrappedObject, unsigned int  arrayIndex) const
{
  return ( theWrappedObject->hasOwnProperty(arrayIndex));
}

bool  PythonQtWrapper_QJSManagedValue::hasProperty(QJSManagedValue* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasProperty(name));
}

bool  PythonQtWrapper_QJSManagedValue::hasProperty(QJSManagedValue* theWrappedObject, unsigned int  arrayIndex) const
{
  return ( theWrappedObject->hasProperty(arrayIndex));
}

bool  PythonQtWrapper_QJSManagedValue::isArray(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isArray());
}

bool  PythonQtWrapper_QJSManagedValue::isBoolean(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isBoolean());
}

bool  PythonQtWrapper_QJSManagedValue::isDate(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isDate());
}

bool  PythonQtWrapper_QJSManagedValue::isError(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isError());
}

bool  PythonQtWrapper_QJSManagedValue::isFunction(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isFunction());
}

bool  PythonQtWrapper_QJSManagedValue::isInteger(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isInteger());
}

bool  PythonQtWrapper_QJSManagedValue::isJsMetaType(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isJsMetaType());
}

bool  PythonQtWrapper_QJSManagedValue::isNull(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QJSManagedValue::isNumber(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isNumber());
}

bool  PythonQtWrapper_QJSManagedValue::isObject(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isObject());
}

bool  PythonQtWrapper_QJSManagedValue::isQMetaObject(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isQMetaObject());
}

bool  PythonQtWrapper_QJSManagedValue::isQObject(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isQObject());
}

bool  PythonQtWrapper_QJSManagedValue::isRegularExpression(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isRegularExpression());
}

bool  PythonQtWrapper_QJSManagedValue::isString(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isString());
}

bool  PythonQtWrapper_QJSManagedValue::isSymbol(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isSymbol());
}

bool  PythonQtWrapper_QJSManagedValue::isUndefined(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isUndefined());
}

bool  PythonQtWrapper_QJSManagedValue::isUrl(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isUrl());
}

bool  PythonQtWrapper_QJSManagedValue::isVariant(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->isVariant());
}

QJSManagedValue  PythonQtWrapper_QJSManagedValue::jsMetaInstantiate(QJSManagedValue* theWrappedObject, const QList<QJSValue >&  values) const
{
  return ( theWrappedObject->jsMetaInstantiate(values));
}

QStringList  PythonQtWrapper_QJSManagedValue::jsMetaMembers(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->jsMetaMembers());
}

QJSManagedValue  PythonQtWrapper_QJSManagedValue::jsMetaType(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->jsMetaType());
}

QJSValue  PythonQtWrapper_QJSManagedValue::property(QJSManagedValue* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->property(name));
}

QJSValue  PythonQtWrapper_QJSManagedValue::property(QJSManagedValue* theWrappedObject, unsigned int  arrayIndex) const
{
  return ( theWrappedObject->property(arrayIndex));
}

QJSManagedValue  PythonQtWrapper_QJSManagedValue::prototype(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->prototype());
}

void PythonQtWrapper_QJSManagedValue::setProperty(QJSManagedValue* theWrappedObject, const QString&  name, const QJSValue&  value)
{
  ( theWrappedObject->setProperty(name, value));
}

void PythonQtWrapper_QJSManagedValue::setProperty(QJSManagedValue* theWrappedObject, unsigned int  arrayIndex, const QJSValue&  value)
{
  ( theWrappedObject->setProperty(arrayIndex, value));
}

void PythonQtWrapper_QJSManagedValue::setPrototype(QJSManagedValue* theWrappedObject, const QJSManagedValue&  prototype)
{
  ( theWrappedObject->setPrototype(prototype));
}

bool  PythonQtWrapper_QJSManagedValue::strictlyEquals(QJSManagedValue* theWrappedObject, const QJSManagedValue&  other) const
{
  return ( theWrappedObject->strictlyEquals(other));
}

bool  PythonQtWrapper_QJSManagedValue::toBoolean(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toBoolean());
}

QDateTime  PythonQtWrapper_QJSManagedValue::toDateTime(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toDateTime());
}

int  PythonQtWrapper_QJSManagedValue::toInteger(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toInteger());
}

QJSValue  PythonQtWrapper_QJSManagedValue::toJSValue(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toJSValue());
}

double  PythonQtWrapper_QJSManagedValue::toNumber(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toNumber());
}

QJSPrimitiveValue  PythonQtWrapper_QJSManagedValue::toPrimitive(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toPrimitive());
}

const QMetaObject*  PythonQtWrapper_QJSManagedValue::toQMetaObject(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toQMetaObject());
}

QObject*  PythonQtWrapper_QJSManagedValue::toQObject(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toQObject());
}

QRegularExpression  PythonQtWrapper_QJSManagedValue::toRegularExpression(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toRegularExpression());
}

QString  PythonQtWrapper_QJSManagedValue::toString(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QUrl  PythonQtWrapper_QJSManagedValue::toUrl(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toUrl());
}

QVariant  PythonQtWrapper_QJSManagedValue::toVariant(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->toVariant());
}

QJSManagedValue::Type  PythonQtWrapper_QJSManagedValue::type(QJSManagedValue* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QJSManagedValue::py_toString(QJSManagedValue* obj) { return obj->toString(); }


PythonQtShell_QJSPrimitiveNull::~PythonQtShell_QJSPrimitiveNull() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QJSPrimitiveNull* PythonQtWrapper_QJSPrimitiveNull::new_QJSPrimitiveNull()
{ 
return new PythonQtShell_QJSPrimitiveNull(); }



PythonQtShell_QJSPrimitiveUndefined::~PythonQtShell_QJSPrimitiveUndefined() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QJSPrimitiveUndefined* PythonQtWrapper_QJSPrimitiveUndefined::new_QJSPrimitiveUndefined()
{ 
return new PythonQtShell_QJSPrimitiveUndefined(); }



QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue()
{ 
return new QJSPrimitiveValue(); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(QJSPrimitiveNull  null)
{ 
return new QJSPrimitiveValue(null); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(QJSPrimitiveUndefined  undefined)
{ 
return new QJSPrimitiveValue(undefined); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(QMetaType  type)
{ 
return new QJSPrimitiveValue(type); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(QString  string)
{ 
return new QJSPrimitiveValue(string); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(bool  value)
{ 
return new QJSPrimitiveValue(value); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(const QMetaType  type, const void*  value)
{ 
return new QJSPrimitiveValue(type, value); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(const QVariant&  variant)
{ 
return new QJSPrimitiveValue(variant); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(double  value)
{ 
return new QJSPrimitiveValue(value); }

QJSPrimitiveValue* PythonQtWrapper_QJSPrimitiveValue::new_QJSPrimitiveValue(int  value)
{ 
return new QJSPrimitiveValue(value); }

const void*  PythonQtWrapper_QJSPrimitiveValue::constData(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->constData());
}

void*  PythonQtWrapper_QJSPrimitiveValue::data(QJSPrimitiveValue* theWrappedObject)
{
  return ( theWrappedObject->data());
}

const void*  PythonQtWrapper_QJSPrimitiveValue::data(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

bool  PythonQtWrapper_QJSPrimitiveValue::equals(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  other) const
{
  return ( theWrappedObject->equals(other));
}

QMetaType  PythonQtWrapper_QJSPrimitiveValue::metaType(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->metaType());
}

bool  PythonQtWrapper_QJSPrimitiveValue::__ne__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QJSPrimitiveValue  PythonQtWrapper_QJSPrimitiveValue::__mod__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)% rhs);
}

QJSPrimitiveValue  PythonQtWrapper_QJSPrimitiveValue::__mul__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)* rhs);
}

QJSPrimitiveValue  PythonQtWrapper_QJSPrimitiveValue::__add__(QJSPrimitiveValue* theWrappedObject)
{
  return (+  (*theWrappedObject));
}

QJSPrimitiveValue  PythonQtWrapper_QJSPrimitiveValue::__add__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QJSPrimitiveValue*  PythonQtWrapper_QJSPrimitiveValue::operator_increment(QJSPrimitiveValue* theWrappedObject)
{
  return &( theWrappedObject->operator++());
}

QJSPrimitiveValue  PythonQtWrapper_QJSPrimitiveValue::__sub__(QJSPrimitiveValue* theWrappedObject)
{
  return (-  (*theWrappedObject));
}

QJSPrimitiveValue  PythonQtWrapper_QJSPrimitiveValue::__sub__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)- rhs);
}

QJSPrimitiveValue*  PythonQtWrapper_QJSPrimitiveValue::operator_decrement(QJSPrimitiveValue* theWrappedObject)
{
  return &( theWrappedObject->operator--());
}

QJSPrimitiveValue  PythonQtWrapper_QJSPrimitiveValue::__div__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)/ rhs);
}

bool  PythonQtWrapper_QJSPrimitiveValue::__lt__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QJSPrimitiveValue::__le__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QJSPrimitiveValue::__eq__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QJSPrimitiveValue::__gt__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QJSPrimitiveValue::__ge__(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

bool  PythonQtWrapper_QJSPrimitiveValue::strictlyEquals(QJSPrimitiveValue* theWrappedObject, const QJSPrimitiveValue&  other) const
{
  return ( theWrappedObject->strictlyEquals(other));
}

bool  PythonQtWrapper_QJSPrimitiveValue::toBoolean(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->toBoolean());
}

double  PythonQtWrapper_QJSPrimitiveValue::toDouble(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->toDouble());
}

int  PythonQtWrapper_QJSPrimitiveValue::toInteger(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->toInteger());
}

QString  PythonQtWrapper_QJSPrimitiveValue::toString(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QVariant  PythonQtWrapper_QJSPrimitiveValue::toVariant(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->toVariant());
}

QJSPrimitiveValue::Type  PythonQtWrapper_QJSPrimitiveValue::type(QJSPrimitiveValue* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QJSPrimitiveValue::py_toString(QJSPrimitiveValue* obj) { return obj->toString(); }


QJSValue* PythonQtWrapper_QJSValue::new_QJSValue(QJSValue::SpecialValue  value)
{ 
return new QJSValue(value); }

QJSValue* PythonQtWrapper_QJSValue::new_QJSValue(bool  value)
{ 
return new QJSValue(value); }

QJSValue* PythonQtWrapper_QJSValue::new_QJSValue(const QJSValue&  other)
{ 
return new QJSValue(other); }

QJSValue* PythonQtWrapper_QJSValue::new_QJSValue(const QString&  value)
{ 
return new QJSValue(value); }

QJSValue* PythonQtWrapper_QJSValue::new_QJSValue(const char*  str)
{ 
return new QJSValue(str); }

QJSValue* PythonQtWrapper_QJSValue::new_QJSValue(double  value)
{ 
return new QJSValue(value); }

QJSValue* PythonQtWrapper_QJSValue::new_QJSValue(int  value)
{ 
return new QJSValue(value); }

QJSValue* PythonQtWrapper_QJSValue::new_QJSValue(uint  value)
{ 
return new QJSValue(value); }

QJSValue  PythonQtWrapper_QJSValue::call(QJSValue* theWrappedObject, const QList<QJSValue >&  args) const
{
  return ( theWrappedObject->call(args));
}

QJSValue  PythonQtWrapper_QJSValue::callAsConstructor(QJSValue* theWrappedObject, const QList<QJSValue >&  args) const
{
  return ( theWrappedObject->callAsConstructor(args));
}

QJSValue  PythonQtWrapper_QJSValue::callWithInstance(QJSValue* theWrappedObject, const QJSValue&  instance, const QList<QJSValue >&  args) const
{
  return ( theWrappedObject->callWithInstance(instance, args));
}

bool  PythonQtWrapper_QJSValue::deleteProperty(QJSValue* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->deleteProperty(name));
}

bool  PythonQtWrapper_QJSValue::equals(QJSValue* theWrappedObject, const QJSValue&  other) const
{
  return ( theWrappedObject->equals(other));
}

QJSValue::ErrorType  PythonQtWrapper_QJSValue::errorType(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->errorType());
}

bool  PythonQtWrapper_QJSValue::hasOwnProperty(QJSValue* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasOwnProperty(name));
}

bool  PythonQtWrapper_QJSValue::hasProperty(QJSValue* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasProperty(name));
}

bool  PythonQtWrapper_QJSValue::isArray(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isArray());
}

bool  PythonQtWrapper_QJSValue::isBool(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isBool());
}

bool  PythonQtWrapper_QJSValue::isCallable(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isCallable());
}

bool  PythonQtWrapper_QJSValue::isDate(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isDate());
}

bool  PythonQtWrapper_QJSValue::isError(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isError());
}

bool  PythonQtWrapper_QJSValue::isNull(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QJSValue::isNumber(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isNumber());
}

bool  PythonQtWrapper_QJSValue::isObject(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isObject());
}

bool  PythonQtWrapper_QJSValue::isQMetaObject(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isQMetaObject());
}

bool  PythonQtWrapper_QJSValue::isQObject(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isQObject());
}

bool  PythonQtWrapper_QJSValue::isRegExp(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isRegExp());
}

bool  PythonQtWrapper_QJSValue::isString(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isString());
}

bool  PythonQtWrapper_QJSValue::isUndefined(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isUndefined());
}

bool  PythonQtWrapper_QJSValue::isUrl(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isUrl());
}

bool  PythonQtWrapper_QJSValue::isVariant(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->isVariant());
}

void PythonQtWrapper_QJSValue::writeTo(QJSValue* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QJSValue*  PythonQtWrapper_QJSValue::operator_assign(QJSValue* theWrappedObject, const QJSValue&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QJSValue::readFrom(QJSValue* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QJSValue  PythonQtWrapper_QJSValue::property(QJSValue* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->property(name));
}

QJSValue  PythonQtWrapper_QJSValue::property(QJSValue* theWrappedObject, unsigned int  arrayIndex) const
{
  return ( theWrappedObject->property(arrayIndex));
}

QJSValue  PythonQtWrapper_QJSValue::prototype(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->prototype());
}

void PythonQtWrapper_QJSValue::setProperty(QJSValue* theWrappedObject, const QString&  name, const QJSValue&  value)
{
  ( theWrappedObject->setProperty(name, value));
}

void PythonQtWrapper_QJSValue::setProperty(QJSValue* theWrappedObject, unsigned int  arrayIndex, const QJSValue&  value)
{
  ( theWrappedObject->setProperty(arrayIndex, value));
}

void PythonQtWrapper_QJSValue::setPrototype(QJSValue* theWrappedObject, const QJSValue&  prototype)
{
  ( theWrappedObject->setPrototype(prototype));
}

bool  PythonQtWrapper_QJSValue::strictlyEquals(QJSValue* theWrappedObject, const QJSValue&  other) const
{
  return ( theWrappedObject->strictlyEquals(other));
}

bool  PythonQtWrapper_QJSValue::toBool(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toBool());
}

QDateTime  PythonQtWrapper_QJSValue::toDateTime(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toDateTime());
}

int  PythonQtWrapper_QJSValue::toInt(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toInt());
}

double  PythonQtWrapper_QJSValue::toNumber(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toNumber());
}

QJSPrimitiveValue  PythonQtWrapper_QJSValue::toPrimitive(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toPrimitive());
}

const QMetaObject*  PythonQtWrapper_QJSValue::toQMetaObject(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toQMetaObject());
}

QObject*  PythonQtWrapper_QJSValue::toQObject(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toQObject());
}

QString  PythonQtWrapper_QJSValue::toString(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

unsigned int  PythonQtWrapper_QJSValue::toUInt(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toUInt());
}

QVariant  PythonQtWrapper_QJSValue::toVariant(QJSValue* theWrappedObject) const
{
  return ( theWrappedObject->toVariant());
}

QVariant  PythonQtWrapper_QJSValue::toVariant(QJSValue* theWrappedObject, QJSValue::ObjectConversionBehavior  behavior) const
{
  return ( theWrappedObject->toVariant(behavior));
}

QString PythonQtWrapper_QJSValue::py_toString(QJSValue* obj) { return obj->toString(); }


PythonQtShell_QQmlAbstractUrlInterceptor::~PythonQtShell_QQmlAbstractUrlInterceptor() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QUrl  PythonQtShell_QQmlAbstractUrlInterceptor::intercept(const QUrl&  path0, QQmlAbstractUrlInterceptor::DataType  type1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("intercept");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QUrl" , "const QUrl&" , "QQmlAbstractUrlInterceptor::DataType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QUrl returnValue{};
      void* args[3] = {nullptr, (void*)&path0, (void*)&type1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("intercept", methodInfo, result);
          } else {
            returnValue = *((QUrl*)args[0]);
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
  return QUrl();
}
QQmlAbstractUrlInterceptor* PythonQtWrapper_QQmlAbstractUrlInterceptor::new_QQmlAbstractUrlInterceptor()
{ 
return new PythonQtShell_QQmlAbstractUrlInterceptor(); }

QUrl  PythonQtWrapper_QQmlAbstractUrlInterceptor::intercept(QQmlAbstractUrlInterceptor* theWrappedObject, const QUrl&  path, QQmlAbstractUrlInterceptor::DataType  type)
{
  return ( theWrappedObject->intercept(path, type));
}



PythonQtShell_QQmlApplicationEngine::~PythonQtShell_QQmlApplicationEngine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlApplicationEngine::childEvent(QChildEvent*  event0)
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
  QQmlApplicationEngine::childEvent(event0);
}
void PythonQtShell_QQmlApplicationEngine::customEvent(QEvent*  event0)
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
  QQmlApplicationEngine::customEvent(event0);
}
bool  PythonQtShell_QQmlApplicationEngine::event(QEvent*  arg__1)
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
      void* args[2] = {nullptr, (void*)&arg__1};
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
  return QQmlApplicationEngine::event(arg__1);
}
bool  PythonQtShell_QQmlApplicationEngine::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QQmlApplicationEngine::eventFilter(watched0, event1);
}
void PythonQtShell_QQmlApplicationEngine::timerEvent(QTimerEvent*  event0)
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
  QQmlApplicationEngine::timerEvent(event0);
}
QQmlApplicationEngine* PythonQtWrapper_QQmlApplicationEngine::new_QQmlApplicationEngine(QAnyStringView  uri, QAnyStringView  typeName, QObject*  parent)
{ 
return new PythonQtShell_QQmlApplicationEngine(uri, typeName, parent); }

QQmlApplicationEngine* PythonQtWrapper_QQmlApplicationEngine::new_QQmlApplicationEngine(QObject*  parent)
{ 
return new PythonQtShell_QQmlApplicationEngine(parent); }

QQmlApplicationEngine* PythonQtWrapper_QQmlApplicationEngine::new_QQmlApplicationEngine(const QString&  filePath, QObject*  parent)
{ 
return new PythonQtShell_QQmlApplicationEngine(filePath, parent); }

QQmlApplicationEngine* PythonQtWrapper_QQmlApplicationEngine::new_QQmlApplicationEngine(const QUrl&  url, QObject*  parent)
{ 
return new PythonQtShell_QQmlApplicationEngine(url, parent); }

const QMetaObject* PythonQtShell_QQmlApplicationEngine::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QQmlApplicationEngine::staticMetaObject);
  } else {
    return &QQmlApplicationEngine::staticMetaObject;
  }
}
int PythonQtShell_QQmlApplicationEngine::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QQmlApplicationEngine::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QObject* >  PythonQtWrapper_QQmlApplicationEngine::rootObjects(QQmlApplicationEngine* theWrappedObject) const
{
  return ( theWrappedObject->rootObjects());
}



PythonQtShell_QQmlComponent::~PythonQtShell_QQmlComponent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QObject*  PythonQtShell_QQmlComponent::beginCreate(QQmlContext*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("beginCreate");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QObject*" , "QQmlContext*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QObject* returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("beginCreate", methodInfo, result);
          } else {
            returnValue = *((QObject**)args[0]);
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
  return QQmlComponent::beginCreate(arg__1);
}
void PythonQtShell_QQmlComponent::childEvent(QChildEvent*  event0)
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
  QQmlComponent::childEvent(event0);
}
void PythonQtShell_QQmlComponent::completeCreate()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("completeCreate");
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
  QQmlComponent::completeCreate();
}
QObject*  PythonQtShell_QQmlComponent::create(QQmlContext*  context0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QObject*" , "QQmlContext*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QObject* returnValue{};
      void* args[2] = {nullptr, (void*)&context0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
          } else {
            returnValue = *((QObject**)args[0]);
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
  return QQmlComponent::create(context0);
}
void PythonQtShell_QQmlComponent::customEvent(QEvent*  event0)
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
  QQmlComponent::customEvent(event0);
}
bool  PythonQtShell_QQmlComponent::event(QEvent*  event0)
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
  return QQmlComponent::event(event0);
}
bool  PythonQtShell_QQmlComponent::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QQmlComponent::eventFilter(watched0, event1);
}
void PythonQtShell_QQmlComponent::timerEvent(QTimerEvent*  event0)
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
  QQmlComponent::timerEvent(event0);
}
QQmlComponent* PythonQtWrapper_QQmlComponent::new_QQmlComponent(QObject*  parent)
{ 
return new PythonQtShell_QQmlComponent(parent); }

QQmlComponent* PythonQtWrapper_QQmlComponent::new_QQmlComponent(QQmlEngine*  arg__1, QObject*  parent)
{ 
return new PythonQtShell_QQmlComponent(arg__1, parent); }

QQmlComponent* PythonQtWrapper_QQmlComponent::new_QQmlComponent(QQmlEngine*  arg__1, const QString&  fileName, QObject*  parent)
{ 
return new PythonQtShell_QQmlComponent(arg__1, fileName, parent); }

QQmlComponent* PythonQtWrapper_QQmlComponent::new_QQmlComponent(QQmlEngine*  arg__1, const QString&  fileName, QQmlComponent::CompilationMode  mode, QObject*  parent)
{ 
return new PythonQtShell_QQmlComponent(arg__1, fileName, mode, parent); }

QQmlComponent* PythonQtWrapper_QQmlComponent::new_QQmlComponent(QQmlEngine*  arg__1, const QUrl&  url, QObject*  parent)
{ 
return new PythonQtShell_QQmlComponent(arg__1, url, parent); }

QQmlComponent* PythonQtWrapper_QQmlComponent::new_QQmlComponent(QQmlEngine*  arg__1, const QUrl&  url, QQmlComponent::CompilationMode  mode, QObject*  parent)
{ 
return new PythonQtShell_QQmlComponent(arg__1, url, mode, parent); }

QQmlComponent* PythonQtWrapper_QQmlComponent::new_QQmlComponent(QQmlEngine*  engine, QAnyStringView  uri, QAnyStringView  typeName, QObject*  parent)
{ 
return new PythonQtShell_QQmlComponent(engine, uri, typeName, parent); }

QQmlComponent* PythonQtWrapper_QQmlComponent::new_QQmlComponent(QQmlEngine*  engine, QAnyStringView  uri, QAnyStringView  typeName, QQmlComponent::CompilationMode  mode, QObject*  parent)
{ 
return new PythonQtShell_QQmlComponent(engine, uri, typeName, mode, parent); }

const QMetaObject* PythonQtShell_QQmlComponent::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QQmlComponent::staticMetaObject);
  } else {
    return &QQmlComponent::staticMetaObject;
  }
}
int PythonQtShell_QQmlComponent::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QQmlComponent::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QObject*  PythonQtWrapper_QQmlComponent::beginCreate(QQmlComponent* theWrappedObject, QQmlContext*  arg__1)
{
  return ( theWrappedObject->beginCreate(arg__1));
}

void PythonQtWrapper_QQmlComponent::completeCreate(QQmlComponent* theWrappedObject)
{
  ( theWrappedObject->completeCreate());
}

QObject*  PythonQtWrapper_QQmlComponent::create(QQmlComponent* theWrappedObject, QQmlContext*  context)
{
  return ( theWrappedObject->create(context));
}

void PythonQtWrapper_QQmlComponent::create(QQmlComponent* theWrappedObject, QQmlIncubator&  arg__1, QQmlContext*  context, QQmlContext*  forContext)
{
  ( theWrappedObject->create(arg__1, context, forContext));
}

QObject*  PythonQtWrapper_QQmlComponent::createObject(QQmlComponent* theWrappedObject, QObject*  parent, const QMap<QString , QVariant >&  properties)
{
  return ( ((PythonQtPublicPromoter_QQmlComponent*)theWrappedObject)->promoted_createObject(parent, properties));
}

QObject*  PythonQtWrapper_QQmlComponent::createWithInitialProperties(QQmlComponent* theWrappedObject, const QMap<QString , QVariant >&  initialProperties, QQmlContext*  context)
{
  return ( theWrappedObject->createWithInitialProperties(initialProperties, context));
}

QQmlContext*  PythonQtWrapper_QQmlComponent::creationContext(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->creationContext());
}

QQmlEngine*  PythonQtWrapper_QQmlComponent::engine(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->engine());
}

QString  PythonQtWrapper_QQmlComponent::errorString(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QList<QQmlError >  PythonQtWrapper_QQmlComponent::errors(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->errors());
}

bool  PythonQtWrapper_QQmlComponent::isBound(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->isBound());
}

bool  PythonQtWrapper_QQmlComponent::isError(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->isError());
}

bool  PythonQtWrapper_QQmlComponent::isLoading(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->isLoading());
}

bool  PythonQtWrapper_QQmlComponent::isNull(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QQmlComponent::isReady(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->isReady());
}

qreal  PythonQtWrapper_QQmlComponent::progress(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->progress());
}

void PythonQtWrapper_QQmlComponent::setInitialProperties(QQmlComponent* theWrappedObject, QObject*  component, const QMap<QString , QVariant >&  properties)
{
  ( theWrappedObject->setInitialProperties(component, properties));
}

QQmlComponent::Status  PythonQtWrapper_QQmlComponent::status(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QUrl  PythonQtWrapper_QQmlComponent::url(QQmlComponent* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



PythonQtShell_QQmlContext::~PythonQtShell_QQmlContext() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlContext::childEvent(QChildEvent*  event0)
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
  QQmlContext::childEvent(event0);
}
void PythonQtShell_QQmlContext::customEvent(QEvent*  event0)
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
  QQmlContext::customEvent(event0);
}
bool  PythonQtShell_QQmlContext::event(QEvent*  event0)
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
  return QQmlContext::event(event0);
}
bool  PythonQtShell_QQmlContext::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QQmlContext::eventFilter(watched0, event1);
}
void PythonQtShell_QQmlContext::timerEvent(QTimerEvent*  event0)
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
  QQmlContext::timerEvent(event0);
}
QQmlContext* PythonQtWrapper_QQmlContext::new_QQmlContext(QQmlContext*  parent, QObject*  objParent)
{ 
return new PythonQtShell_QQmlContext(parent, objParent); }

QQmlContext* PythonQtWrapper_QQmlContext::new_QQmlContext(QQmlEngine*  parent, QObject*  objParent)
{ 
return new PythonQtShell_QQmlContext(parent, objParent); }

const QMetaObject* PythonQtShell_QQmlContext::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QQmlContext::staticMetaObject);
  } else {
    return &QQmlContext::staticMetaObject;
  }
}
int PythonQtShell_QQmlContext::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QQmlContext::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QUrl  PythonQtWrapper_QQmlContext::baseUrl(QQmlContext* theWrappedObject) const
{
  return ( theWrappedObject->baseUrl());
}

QList<QQmlContext* >  PythonQtWrapper_QQmlContext::childContexts(QQmlContext* theWrappedObject) const
{
  return ( theWrappedObject->childContexts());
}

QObject*  PythonQtWrapper_QQmlContext::contextObject(QQmlContext* theWrappedObject) const
{
  return ( theWrappedObject->contextObject());
}

QVariant  PythonQtWrapper_QQmlContext::contextProperty(QQmlContext* theWrappedObject, const QString&  arg__1) const
{
  return ( theWrappedObject->contextProperty(arg__1));
}

QQmlEngine*  PythonQtWrapper_QQmlContext::engine(QQmlContext* theWrappedObject) const
{
  return ( theWrappedObject->engine());
}

QObject*  PythonQtWrapper_QQmlContext::findObjectRecursively(QQmlContext* theWrappedObject, const QString&  id) const
{
  return ( theWrappedObject->findObjectRecursively(id));
}

QList<QObject* >  PythonQtWrapper_QQmlContext::findObjectsRecursively(QQmlContext* theWrappedObject, const QString&  id) const
{
  return ( theWrappedObject->findObjectsRecursively(id));
}

QJSValue  PythonQtWrapper_QQmlContext::importedScript(QQmlContext* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->importedScript(name));
}

bool  PythonQtWrapper_QQmlContext::isValid(QQmlContext* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QQmlContext::nameForObject(QQmlContext* theWrappedObject, const QObject*  arg__1) const
{
  return ( theWrappedObject->nameForObject(arg__1));
}

QObject*  PythonQtWrapper_QQmlContext::objectForName(QQmlContext* theWrappedObject, const QString&  arg__1) const
{
  return ( theWrappedObject->objectForName(arg__1));
}

QQmlContext*  PythonQtWrapper_QQmlContext::parentContext(QQmlContext* theWrappedObject) const
{
  return ( theWrappedObject->parentContext());
}

QUrl  PythonQtWrapper_QQmlContext::resolvedUrl(QQmlContext* theWrappedObject, const QUrl&  arg__1) const
{
  return ( theWrappedObject->resolvedUrl(arg__1));
}

void PythonQtWrapper_QQmlContext::setBaseUrl(QQmlContext* theWrappedObject, const QUrl&  arg__1)
{
  ( theWrappedObject->setBaseUrl(arg__1));
}

void PythonQtWrapper_QQmlContext::setContextObject(QQmlContext* theWrappedObject, QObject*  arg__1)
{
  ( theWrappedObject->setContextObject(arg__1));
}

void PythonQtWrapper_QQmlContext::setContextProperty(QQmlContext* theWrappedObject, const QString&  arg__1, QObject*  arg__2)
{
  ( theWrappedObject->setContextProperty(arg__1, arg__2));
}

void PythonQtWrapper_QQmlContext::setContextProperty(QQmlContext* theWrappedObject, const QString&  arg__1, const QVariant&  arg__2)
{
  ( theWrappedObject->setContextProperty(arg__1, arg__2));
}



QQmlDebuggingEnabler* PythonQtWrapper_QQmlDebuggingEnabler::new_QQmlDebuggingEnabler(bool  printWarning)
{ 
return new QQmlDebuggingEnabler(printWarning); }

bool  PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_connectToLocalDebugger(const QString&  socketFileName, QQmlDebuggingEnabler::StartMode  mode)
{
  return (QQmlDebuggingEnabler::connectToLocalDebugger(socketFileName, mode));
}

QStringList  PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_debuggerServices()
{
  return (QQmlDebuggingEnabler::debuggerServices());
}

void PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_enableDebugging(bool  printWarning)
{
  (QQmlDebuggingEnabler::enableDebugging(printWarning));
}

QStringList  PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_inspectorServices()
{
  return (QQmlDebuggingEnabler::inspectorServices());
}

QStringList  PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_nativeDebuggerServices()
{
  return (QQmlDebuggingEnabler::nativeDebuggerServices());
}

QStringList  PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_profilerServices()
{
  return (QQmlDebuggingEnabler::profilerServices());
}

void PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_setServices(const QStringList&  services)
{
  (QQmlDebuggingEnabler::setServices(services));
}

bool  PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_startDebugConnector(const QString&  pluginName, const QHash<QString , QVariant >&  configuration)
{
  return (QQmlDebuggingEnabler::startDebugConnector(pluginName, configuration));
}

bool  PythonQtWrapper_QQmlDebuggingEnabler::static_QQmlDebuggingEnabler_startTcpDebugServer(int  port, QQmlDebuggingEnabler::StartMode  mode, const QString&  hostName)
{
  return (QQmlDebuggingEnabler::startTcpDebugServer(port, mode, hostName));
}



PythonQtShell_QQmlEngine::~PythonQtShell_QQmlEngine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlEngine::childEvent(QChildEvent*  event0)
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
  QQmlEngine::childEvent(event0);
}
void PythonQtShell_QQmlEngine::customEvent(QEvent*  event0)
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
  QQmlEngine::customEvent(event0);
}
bool  PythonQtShell_QQmlEngine::event(QEvent*  arg__1)
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
      void* args[2] = {nullptr, (void*)&arg__1};
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
  return QQmlEngine::event(arg__1);
}
bool  PythonQtShell_QQmlEngine::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QQmlEngine::eventFilter(watched0, event1);
}
void PythonQtShell_QQmlEngine::timerEvent(QTimerEvent*  event0)
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
  QQmlEngine::timerEvent(event0);
}
QQmlEngine* PythonQtWrapper_QQmlEngine::new_QQmlEngine(QObject*  p)
{ 
return new PythonQtShell_QQmlEngine(p); }

const QMetaObject* PythonQtShell_QQmlEngine::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QQmlEngine::staticMetaObject);
  } else {
    return &QQmlEngine::staticMetaObject;
  }
}
int PythonQtShell_QQmlEngine::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QQmlEngine::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QQmlEngine::addImportPath(QQmlEngine* theWrappedObject, const QString&  dir)
{
  ( theWrappedObject->addImportPath(dir));
}

bool  PythonQtWrapper_QQmlEngine::addNamedBundle(QQmlEngine* theWrappedObject, const QString&  arg__1, const QString&  arg__2)
{
  return ( theWrappedObject->addNamedBundle(arg__1, arg__2));
}

void PythonQtWrapper_QQmlEngine::addPluginPath(QQmlEngine* theWrappedObject, const QString&  dir)
{
  ( theWrappedObject->addPluginPath(dir));
}

void PythonQtWrapper_QQmlEngine::addUrlInterceptor(QQmlEngine* theWrappedObject, QQmlAbstractUrlInterceptor*  urlInterceptor)
{
  ( theWrappedObject->addUrlInterceptor(urlInterceptor));
}

QUrl  PythonQtWrapper_QQmlEngine::baseUrl(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->baseUrl());
}

void PythonQtWrapper_QQmlEngine::captureProperty(QQmlEngine* theWrappedObject, QObject*  object, const QMetaProperty&  property) const
{
  ( theWrappedObject->captureProperty(object, property));
}

void PythonQtWrapper_QQmlEngine::clearComponentCache(QQmlEngine* theWrappedObject)
{
  ( theWrappedObject->clearComponentCache());
}

void PythonQtWrapper_QQmlEngine::clearSingletons(QQmlEngine* theWrappedObject)
{
  ( theWrappedObject->clearSingletons());
}

QQmlContext*  PythonQtWrapper_QQmlEngine::static_QQmlEngine_contextForObject(const QObject*  arg__1)
{
  return (QQmlEngine::contextForObject(arg__1));
}

QStringList  PythonQtWrapper_QQmlEngine::importPathList(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->importPathList());
}

bool  PythonQtWrapper_QQmlEngine::importPlugin(QQmlEngine* theWrappedObject, const QString&  filePath, const QString&  uri, QList<QQmlError >*  errors)
{
  return ( theWrappedObject->importPlugin(filePath, uri, errors));
}

QQmlIncubationController*  PythonQtWrapper_QQmlEngine::incubationController(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->incubationController());
}

QUrl  PythonQtWrapper_QQmlEngine::interceptUrl(QQmlEngine* theWrappedObject, const QUrl&  url, QQmlAbstractUrlInterceptor::DataType  type) const
{
  return ( theWrappedObject->interceptUrl(url, type));
}

void PythonQtWrapper_QQmlEngine::markCurrentFunctionAsTranslationBinding(QQmlEngine* theWrappedObject)
{
  ( theWrappedObject->markCurrentFunctionAsTranslationBinding());
}

QNetworkAccessManager*  PythonQtWrapper_QQmlEngine::networkAccessManager(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

QQmlNetworkAccessManagerFactory*  PythonQtWrapper_QQmlEngine::networkAccessManagerFactory(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManagerFactory());
}

QString  PythonQtWrapper_QQmlEngine::offlineStorageDatabaseFilePath(QQmlEngine* theWrappedObject, const QString&  databaseName) const
{
  return ( theWrappedObject->offlineStorageDatabaseFilePath(databaseName));
}

QString  PythonQtWrapper_QQmlEngine::offlineStoragePath(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->offlineStoragePath());
}

bool  PythonQtWrapper_QQmlEngine::outputWarningsToStandardError(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->outputWarningsToStandardError());
}

QStringList  PythonQtWrapper_QQmlEngine::pluginPathList(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->pluginPathList());
}

void PythonQtWrapper_QQmlEngine::removeImageProvider(QQmlEngine* theWrappedObject, const QString&  id)
{
  ( theWrappedObject->removeImageProvider(id));
}

void PythonQtWrapper_QQmlEngine::removeUrlInterceptor(QQmlEngine* theWrappedObject, QQmlAbstractUrlInterceptor*  urlInterceptor)
{
  ( theWrappedObject->removeUrlInterceptor(urlInterceptor));
}

QQmlContext*  PythonQtWrapper_QQmlEngine::rootContext(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->rootContext());
}

void PythonQtWrapper_QQmlEngine::setBaseUrl(QQmlEngine* theWrappedObject, const QUrl&  arg__1)
{
  ( theWrappedObject->setBaseUrl(arg__1));
}

void PythonQtWrapper_QQmlEngine::static_QQmlEngine_setContextForObject(QObject*  arg__1, QQmlContext*  arg__2)
{
  (QQmlEngine::setContextForObject(arg__1, arg__2));
}

void PythonQtWrapper_QQmlEngine::setImportPathList(QQmlEngine* theWrappedObject, const QStringList&  paths)
{
  ( theWrappedObject->setImportPathList(paths));
}

void PythonQtWrapper_QQmlEngine::setIncubationController(QQmlEngine* theWrappedObject, QQmlIncubationController*  arg__1)
{
  ( theWrappedObject->setIncubationController(arg__1));
}

void PythonQtWrapper_QQmlEngine::setNetworkAccessManagerFactory(QQmlEngine* theWrappedObject, QQmlNetworkAccessManagerFactory*  arg__1)
{
  ( theWrappedObject->setNetworkAccessManagerFactory(arg__1));
}

void PythonQtWrapper_QQmlEngine::setOfflineStoragePath(QQmlEngine* theWrappedObject, const QString&  dir)
{
  ( theWrappedObject->setOfflineStoragePath(dir));
}

void PythonQtWrapper_QQmlEngine::setOutputWarningsToStandardError(QQmlEngine* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setOutputWarningsToStandardError(arg__1));
}

void PythonQtWrapper_QQmlEngine::setPluginPathList(QQmlEngine* theWrappedObject, const QStringList&  paths)
{
  ( theWrappedObject->setPluginPathList(paths));
}

void PythonQtWrapper_QQmlEngine::setUrlInterceptor(QQmlEngine* theWrappedObject, QQmlAbstractUrlInterceptor*  urlInterceptor)
{
  ( theWrappedObject->setUrlInterceptor(urlInterceptor));
}

void PythonQtWrapper_QQmlEngine::trimComponentCache(QQmlEngine* theWrappedObject)
{
  ( theWrappedObject->trimComponentCache());
}

QQmlAbstractUrlInterceptor*  PythonQtWrapper_QQmlEngine::urlInterceptor(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->urlInterceptor());
}

QList<QQmlAbstractUrlInterceptor* >  PythonQtWrapper_QQmlEngine::urlInterceptors(QQmlEngine* theWrappedObject) const
{
  return ( theWrappedObject->urlInterceptors());
}



QQmlError* PythonQtWrapper_QQmlError::new_QQmlError()
{ 
return new QQmlError(); }

QQmlError* PythonQtWrapper_QQmlError::new_QQmlError(const QQmlError&  arg__1)
{ 
return new QQmlError(arg__1); }

int  PythonQtWrapper_QQmlError::column(QQmlError* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

QString  PythonQtWrapper_QQmlError::description(QQmlError* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

bool  PythonQtWrapper_QQmlError::isValid(QQmlError* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QQmlError::line(QQmlError* theWrappedObject) const
{
  return ( theWrappedObject->line());
}

QtMsgType  PythonQtWrapper_QQmlError::messageType(QQmlError* theWrappedObject) const
{
  return ( theWrappedObject->messageType());
}

QObject*  PythonQtWrapper_QQmlError::object(QQmlError* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

QQmlError*  PythonQtWrapper_QQmlError::operator_assign(QQmlError* theWrappedObject, const QQmlError&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QQmlError::__eq__(QQmlError* theWrappedObject, const QQmlError&  b)
{
  return ( (*theWrappedObject)== b);
}

void PythonQtWrapper_QQmlError::setColumn(QQmlError* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setColumn(arg__1));
}

void PythonQtWrapper_QQmlError::setDescription(QQmlError* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setDescription(arg__1));
}

void PythonQtWrapper_QQmlError::setLine(QQmlError* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setLine(arg__1));
}

void PythonQtWrapper_QQmlError::setMessageType(QQmlError* theWrappedObject, QtMsgType  messageType)
{
  ( theWrappedObject->setMessageType(messageType));
}

void PythonQtWrapper_QQmlError::setObject(QQmlError* theWrappedObject, QObject*  arg__1)
{
  ( theWrappedObject->setObject(arg__1));
}

void PythonQtWrapper_QQmlError::setUrl(QQmlError* theWrappedObject, const QUrl&  arg__1)
{
  ( theWrappedObject->setUrl(arg__1));
}

void PythonQtWrapper_QQmlError::swap(QQmlError* theWrappedObject, QQmlError&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QQmlError::toString(QQmlError* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QUrl  PythonQtWrapper_QQmlError::url(QQmlError* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QString PythonQtWrapper_QQmlError::py_toString(QQmlError* obj) { return obj->toString(); }


PythonQtShell_QQmlExpression::~PythonQtShell_QQmlExpression() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlExpression::childEvent(QChildEvent*  event0)
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
  QQmlExpression::childEvent(event0);
}
void PythonQtShell_QQmlExpression::customEvent(QEvent*  event0)
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
  QQmlExpression::customEvent(event0);
}
bool  PythonQtShell_QQmlExpression::event(QEvent*  event0)
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
  return QQmlExpression::event(event0);
}
bool  PythonQtShell_QQmlExpression::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QQmlExpression::eventFilter(watched0, event1);
}
void PythonQtShell_QQmlExpression::timerEvent(QTimerEvent*  event0)
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
  QQmlExpression::timerEvent(event0);
}
QQmlExpression* PythonQtWrapper_QQmlExpression::new_QQmlExpression()
{ 
return new PythonQtShell_QQmlExpression(); }

QQmlExpression* PythonQtWrapper_QQmlExpression::new_QQmlExpression(QQmlContext*  arg__1, QObject*  arg__2, const QString&  arg__3, QObject*  arg__4)
{ 
return new PythonQtShell_QQmlExpression(arg__1, arg__2, arg__3, arg__4); }

QQmlExpression* PythonQtWrapper_QQmlExpression::new_QQmlExpression(const QQmlScriptString&  arg__1, QQmlContext*  arg__2, QObject*  arg__3, QObject*  arg__4)
{ 
return new PythonQtShell_QQmlExpression(arg__1, arg__2, arg__3, arg__4); }

const QMetaObject* PythonQtShell_QQmlExpression::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QQmlExpression::staticMetaObject);
  } else {
    return &QQmlExpression::staticMetaObject;
  }
}
int PythonQtShell_QQmlExpression::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QQmlExpression::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QQmlExpression::clearError(QQmlExpression* theWrappedObject)
{
  ( theWrappedObject->clearError());
}

int  PythonQtWrapper_QQmlExpression::columnNumber(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QQmlContext*  PythonQtWrapper_QQmlExpression::context(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->context());
}

QQmlEngine*  PythonQtWrapper_QQmlExpression::engine(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->engine());
}

QQmlError  PythonQtWrapper_QQmlExpression::error(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QVariant  PythonQtWrapper_QQmlExpression::evaluate(QQmlExpression* theWrappedObject, bool*  valueIsUndefined)
{
  return ( theWrappedObject->evaluate(valueIsUndefined));
}

QString  PythonQtWrapper_QQmlExpression::expression(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->expression());
}

bool  PythonQtWrapper_QQmlExpression::hasError(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

int  PythonQtWrapper_QQmlExpression::lineNumber(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

bool  PythonQtWrapper_QQmlExpression::notifyOnValueChanged(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->notifyOnValueChanged());
}

QObject*  PythonQtWrapper_QQmlExpression::scopeObject(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->scopeObject());
}

void PythonQtWrapper_QQmlExpression::setExpression(QQmlExpression* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setExpression(arg__1));
}

void PythonQtWrapper_QQmlExpression::setNotifyOnValueChanged(QQmlExpression* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setNotifyOnValueChanged(arg__1));
}

void PythonQtWrapper_QQmlExpression::setSourceLocation(QQmlExpression* theWrappedObject, const QString&  fileName, int  line, int  column)
{
  ( theWrappedObject->setSourceLocation(fileName, line, column));
}

QString  PythonQtWrapper_QQmlExpression::sourceFile(QQmlExpression* theWrappedObject) const
{
  return ( theWrappedObject->sourceFile());
}



PythonQtShell_QQmlExtensionInterface::~PythonQtShell_QQmlExtensionInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlExtensionInterface::initializeEngine(QQmlEngine*  engine0, const char*  uri1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initializeEngine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QQmlEngine*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&engine0, (void*)&uri1};
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
void PythonQtShell_QQmlExtensionInterface::registerTypes(const char*  uri0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("registerTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&uri0};
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
QQmlExtensionInterface* PythonQtWrapper_QQmlExtensionInterface::new_QQmlExtensionInterface()
{ 
return new PythonQtShell_QQmlExtensionInterface(); }

void PythonQtWrapper_QQmlExtensionInterface::initializeEngine(QQmlExtensionInterface* theWrappedObject, QQmlEngine*  engine, const char*  uri)
{
  ( theWrappedObject->initializeEngine(engine, uri));
}



PythonQtShell_QQmlExtensionPlugin::~PythonQtShell_QQmlExtensionPlugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlExtensionPlugin::initializeEngine(QQmlEngine*  engine0, const char*  uri1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initializeEngine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QQmlEngine*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&engine0, (void*)&uri1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QQmlExtensionPlugin::initializeEngine(engine0, uri1);
}
void PythonQtShell_QQmlExtensionPlugin::registerTypes(const char*  uri0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("registerTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&uri0};
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
void PythonQtShell_QQmlExtensionPlugin::unregisterTypes()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("unregisterTypes");
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
  QQmlExtensionPlugin::unregisterTypes();
}
QQmlExtensionPlugin* PythonQtWrapper_QQmlExtensionPlugin::new_QQmlExtensionPlugin(QObject*  parent)
{ 
return new PythonQtShell_QQmlExtensionPlugin(parent); }

const QMetaObject* PythonQtShell_QQmlExtensionPlugin::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QQmlExtensionPlugin::staticMetaObject);
  } else {
    return &QQmlExtensionPlugin::staticMetaObject;
  }
}
int PythonQtShell_QQmlExtensionPlugin::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QQmlExtensionPlugin::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QUrl  PythonQtWrapper_QQmlExtensionPlugin::baseUrl(QQmlExtensionPlugin* theWrappedObject) const
{
  return ( theWrappedObject->baseUrl());
}

void PythonQtWrapper_QQmlExtensionPlugin::initializeEngine(QQmlExtensionPlugin* theWrappedObject, QQmlEngine*  engine, const char*  uri)
{
  ( theWrappedObject->initializeEngine(engine, uri));
}

void PythonQtWrapper_QQmlExtensionPlugin::registerTypes(QQmlExtensionPlugin* theWrappedObject, const char*  uri)
{
  ( theWrappedObject->registerTypes(uri));
}

void PythonQtWrapper_QQmlExtensionPlugin::unregisterTypes(QQmlExtensionPlugin* theWrappedObject)
{
  ( theWrappedObject->unregisterTypes());
}



QQmlFile* PythonQtWrapper_QQmlFile::new_QQmlFile()
{ 
return new QQmlFile(); }

QQmlFile* PythonQtWrapper_QQmlFile::new_QQmlFile(QQmlEngine*  engine, const QString&  url)
{ 
return new QQmlFile(engine, url); }

QQmlFile* PythonQtWrapper_QQmlFile::new_QQmlFile(QQmlEngine*  engine, const QUrl&  url)
{ 
return new QQmlFile(engine, url); }

void PythonQtWrapper_QQmlFile::clear(QQmlFile* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QQmlFile::clear(QQmlFile* theWrappedObject, QObject*  object)
{
  ( theWrappedObject->clear(object));
}

bool  PythonQtWrapper_QQmlFile::connectDownloadProgress(QQmlFile* theWrappedObject, QObject*  arg__1, const char*  arg__2)
{
  return ( theWrappedObject->connectDownloadProgress(arg__1, arg__2));
}

bool  PythonQtWrapper_QQmlFile::connectDownloadProgress(QQmlFile* theWrappedObject, QObject*  arg__1, int  arg__2)
{
  return ( theWrappedObject->connectDownloadProgress(arg__1, arg__2));
}

bool  PythonQtWrapper_QQmlFile::connectFinished(QQmlFile* theWrappedObject, QObject*  arg__1, const char*  arg__2)
{
  return ( theWrappedObject->connectFinished(arg__1, arg__2));
}

bool  PythonQtWrapper_QQmlFile::connectFinished(QQmlFile* theWrappedObject, QObject*  arg__1, int  arg__2)
{
  return ( theWrappedObject->connectFinished(arg__1, arg__2));
}

const char*  PythonQtWrapper_QQmlFile::data(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QByteArray  PythonQtWrapper_QQmlFile::dataByteArray(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->dataByteArray());
}

QString  PythonQtWrapper_QQmlFile::error(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QQmlFile::isError(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->isError());
}

bool  PythonQtWrapper_QQmlFile::isLoading(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->isLoading());
}

bool  PythonQtWrapper_QQmlFile::static_QQmlFile_isLocalFile(const QString&  url)
{
  return (QQmlFile::isLocalFile(url));
}

bool  PythonQtWrapper_QQmlFile::static_QQmlFile_isLocalFile(const QUrl&  url)
{
  return (QQmlFile::isLocalFile(url));
}

bool  PythonQtWrapper_QQmlFile::isNull(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QQmlFile::isReady(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->isReady());
}

bool  PythonQtWrapper_QQmlFile::static_QQmlFile_isSynchronous(const QString&  url)
{
  return (QQmlFile::isSynchronous(url));
}

bool  PythonQtWrapper_QQmlFile::static_QQmlFile_isSynchronous(const QUrl&  url)
{
  return (QQmlFile::isSynchronous(url));
}

void PythonQtWrapper_QQmlFile::load(QQmlFile* theWrappedObject, QQmlEngine*  arg__1, const QString&  arg__2)
{
  ( theWrappedObject->load(arg__1, arg__2));
}

void PythonQtWrapper_QQmlFile::load(QQmlFile* theWrappedObject, QQmlEngine*  arg__1, const QUrl&  arg__2)
{
  ( theWrappedObject->load(arg__1, arg__2));
}

qint64  PythonQtWrapper_QQmlFile::size(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QQmlFile::Status  PythonQtWrapper_QQmlFile::status(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QUrl  PythonQtWrapper_QQmlFile::url(QQmlFile* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QString  PythonQtWrapper_QQmlFile::static_QQmlFile_urlToLocalFileOrQrc(const QString&  arg__1)
{
  return (QQmlFile::urlToLocalFileOrQrc(arg__1));
}

QString  PythonQtWrapper_QQmlFile::static_QQmlFile_urlToLocalFileOrQrc(const QUrl&  arg__1)
{
  return (QQmlFile::urlToLocalFileOrQrc(arg__1));
}



PythonQtShell_QQmlFileSelector::~PythonQtShell_QQmlFileSelector() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlFileSelector::childEvent(QChildEvent*  event0)
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
  QQmlFileSelector::childEvent(event0);
}
void PythonQtShell_QQmlFileSelector::customEvent(QEvent*  event0)
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
  QQmlFileSelector::customEvent(event0);
}
bool  PythonQtShell_QQmlFileSelector::event(QEvent*  event0)
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
  return QQmlFileSelector::event(event0);
}
bool  PythonQtShell_QQmlFileSelector::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QQmlFileSelector::eventFilter(watched0, event1);
}
void PythonQtShell_QQmlFileSelector::timerEvent(QTimerEvent*  event0)
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
  QQmlFileSelector::timerEvent(event0);
}
QQmlFileSelector* PythonQtWrapper_QQmlFileSelector::new_QQmlFileSelector(QQmlEngine*  engine, QObject*  parent)
{ 
return new PythonQtShell_QQmlFileSelector(engine, parent); }

const QMetaObject* PythonQtShell_QQmlFileSelector::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QQmlFileSelector::staticMetaObject);
  } else {
    return &QQmlFileSelector::staticMetaObject;
  }
}
int PythonQtShell_QQmlFileSelector::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QQmlFileSelector::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QQmlFileSelector*  PythonQtWrapper_QQmlFileSelector::static_QQmlFileSelector_get(QQmlEngine*  arg__1)
{
  return (QQmlFileSelector::get(arg__1));
}

QFileSelector*  PythonQtWrapper_QQmlFileSelector::selector(QQmlFileSelector* theWrappedObject) const
{
  return ( theWrappedObject->selector());
}

void PythonQtWrapper_QQmlFileSelector::setExtraSelectors(QQmlFileSelector* theWrappedObject, const QStringList&  strings)
{
  ( theWrappedObject->setExtraSelectors(strings));
}

void PythonQtWrapper_QQmlFileSelector::setSelector(QQmlFileSelector* theWrappedObject, QFileSelector*  selector)
{
  ( theWrappedObject->setSelector(selector));
}



PythonQtShell_QQmlIncubationController::~PythonQtShell_QQmlIncubationController() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlIncubationController::incubatingObjectCountChanged(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("incubatingObjectCountChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
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
  QQmlIncubationController::incubatingObjectCountChanged(arg__1);
}
QQmlIncubationController* PythonQtWrapper_QQmlIncubationController::new_QQmlIncubationController()
{ 
return new PythonQtShell_QQmlIncubationController(); }

QQmlEngine*  PythonQtWrapper_QQmlIncubationController::engine(QQmlIncubationController* theWrappedObject) const
{
  return ( theWrappedObject->engine());
}

void PythonQtWrapper_QQmlIncubationController::incubateFor(QQmlIncubationController* theWrappedObject, int  msecs)
{
  ( theWrappedObject->incubateFor(msecs));
}

int  PythonQtWrapper_QQmlIncubationController::incubatingObjectCount(QQmlIncubationController* theWrappedObject) const
{
  return ( theWrappedObject->incubatingObjectCount());
}

void PythonQtWrapper_QQmlIncubationController::incubatingObjectCountChanged(QQmlIncubationController* theWrappedObject, int  arg__1)
{
  ( ((PythonQtPublicPromoter_QQmlIncubationController*)theWrappedObject)->promoted_incubatingObjectCountChanged(arg__1));
}



PythonQtShell_QQmlIncubator::~PythonQtShell_QQmlIncubator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlIncubator::setInitialState(QObject*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setInitialState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QObject*"};
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
  QQmlIncubator::setInitialState(arg__1);
}
void PythonQtShell_QQmlIncubator::statusChanged(QQmlIncubator::Status  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("statusChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QQmlIncubator::Status"};
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
  QQmlIncubator::statusChanged(arg__1);
}
QQmlIncubator* PythonQtWrapper_QQmlIncubator::new_QQmlIncubator(QQmlIncubator::IncubationMode  arg__1)
{ 
return new PythonQtShell_QQmlIncubator(arg__1); }

void PythonQtWrapper_QQmlIncubator::clear(QQmlIncubator* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QList<QQmlError >  PythonQtWrapper_QQmlIncubator::errors(QQmlIncubator* theWrappedObject) const
{
  return ( theWrappedObject->errors());
}

void PythonQtWrapper_QQmlIncubator::forceCompletion(QQmlIncubator* theWrappedObject)
{
  ( theWrappedObject->forceCompletion());
}

QQmlIncubator::IncubationMode  PythonQtWrapper_QQmlIncubator::incubationMode(QQmlIncubator* theWrappedObject) const
{
  return ( theWrappedObject->incubationMode());
}

bool  PythonQtWrapper_QQmlIncubator::isError(QQmlIncubator* theWrappedObject) const
{
  return ( theWrappedObject->isError());
}

bool  PythonQtWrapper_QQmlIncubator::isLoading(QQmlIncubator* theWrappedObject) const
{
  return ( theWrappedObject->isLoading());
}

bool  PythonQtWrapper_QQmlIncubator::isNull(QQmlIncubator* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QQmlIncubator::isReady(QQmlIncubator* theWrappedObject) const
{
  return ( theWrappedObject->isReady());
}

QObject*  PythonQtWrapper_QQmlIncubator::object(QQmlIncubator* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

void PythonQtWrapper_QQmlIncubator::setInitialProperties(QQmlIncubator* theWrappedObject, const QMap<QString , QVariant >&  initialProperties)
{
  ( theWrappedObject->setInitialProperties(initialProperties));
}

void PythonQtWrapper_QQmlIncubator::setInitialState(QQmlIncubator* theWrappedObject, QObject*  arg__1)
{
  ( ((PythonQtPublicPromoter_QQmlIncubator*)theWrappedObject)->promoted_setInitialState(arg__1));
}

QQmlIncubator::Status  PythonQtWrapper_QQmlIncubator::status(QQmlIncubator* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

void PythonQtWrapper_QQmlIncubator::statusChanged(QQmlIncubator* theWrappedObject, QQmlIncubator::Status  arg__1)
{
  ( ((PythonQtPublicPromoter_QQmlIncubator*)theWrappedObject)->promoted_statusChanged(arg__1));
}



QQmlInfo* PythonQtWrapper_QQmlInfo::new_QQmlInfo(const QQmlInfo&  arg__1)
{ 
return new QQmlInfo(arg__1); }

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, QChar  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, bool  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, char  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, const QByteArray&  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, const QString&  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, const QUrl&  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, const char*  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, const void*  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, double  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, float  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, qint64  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, quint64  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, signed int  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, signed long  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, signed short  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, unsigned int  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, unsigned long  t)
{
  return &( (*theWrappedObject) <<t);
}

QQmlInfo*  PythonQtWrapper_QQmlInfo::__lshift__(QQmlInfo* theWrappedObject, unsigned short  t)
{
  return &( (*theWrappedObject) <<t);
}



QQmlListReference* PythonQtWrapper_QQmlListReference::new_QQmlListReference()
{ 
return new QQmlListReference(); }

QQmlListReference* PythonQtWrapper_QQmlListReference::new_QQmlListReference(QObject*  o, const char*  property)
{ 
return new QQmlListReference(o, property); }

QQmlListReference* PythonQtWrapper_QQmlListReference::new_QQmlListReference(QObject*  o, const char*  property, QQmlEngine*  engine)
{ 
return new QQmlListReference(o, property, engine); }

QQmlListReference* PythonQtWrapper_QQmlListReference::new_QQmlListReference(const QQmlListReference&  arg__1)
{ 
return new QQmlListReference(arg__1); }

QQmlListReference* PythonQtWrapper_QQmlListReference::new_QQmlListReference(const QVariant&  variant)
{ 
return new QQmlListReference(variant); }

QQmlListReference* PythonQtWrapper_QQmlListReference::new_QQmlListReference(const QVariant&  variant, QQmlEngine*  engine)
{ 
return new QQmlListReference(variant, engine); }

bool  PythonQtWrapper_QQmlListReference::append(QQmlListReference* theWrappedObject, QObject*  arg__1) const
{
  return ( theWrappedObject->append(arg__1));
}

QObject*  PythonQtWrapper_QQmlListReference::at(QQmlListReference* theWrappedObject, qsizetype  arg__1) const
{
  return ( theWrappedObject->at(arg__1));
}

bool  PythonQtWrapper_QQmlListReference::canAppend(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->canAppend());
}

bool  PythonQtWrapper_QQmlListReference::canAt(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->canAt());
}

bool  PythonQtWrapper_QQmlListReference::canClear(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->canClear());
}

bool  PythonQtWrapper_QQmlListReference::canCount(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->canCount());
}

bool  PythonQtWrapper_QQmlListReference::canRemoveLast(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->canRemoveLast());
}

bool  PythonQtWrapper_QQmlListReference::canReplace(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->canReplace());
}

bool  PythonQtWrapper_QQmlListReference::clear(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->clear());
}

qsizetype  PythonQtWrapper_QQmlListReference::count(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QQmlListReference::isManipulable(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->isManipulable());
}

bool  PythonQtWrapper_QQmlListReference::isReadable(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QQmlListReference::isValid(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QMetaObject*  PythonQtWrapper_QQmlListReference::listElementType(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->listElementType());
}

QObject*  PythonQtWrapper_QQmlListReference::object(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

QQmlListReference*  PythonQtWrapper_QQmlListReference::operator_assign(QQmlListReference* theWrappedObject, const QQmlListReference&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QQmlListReference::__eq__(QQmlListReference* theWrappedObject, const QQmlListReference&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QQmlListReference::removeLast(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->removeLast());
}

bool  PythonQtWrapper_QQmlListReference::replace(QQmlListReference* theWrappedObject, qsizetype  arg__1, QObject*  arg__2) const
{
  return ( theWrappedObject->replace(arg__1, arg__2));
}

qsizetype  PythonQtWrapper_QQmlListReference::size(QQmlListReference* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



PythonQtShell_QQmlNetworkAccessManagerFactory::~PythonQtShell_QQmlNetworkAccessManagerFactory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QNetworkAccessManager*  PythonQtShell_QQmlNetworkAccessManagerFactory::create(QObject*  parent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QNetworkAccessManager*" , "QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QNetworkAccessManager* returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
          } else {
            returnValue = *((QNetworkAccessManager**)args[0]);
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
QQmlNetworkAccessManagerFactory* PythonQtWrapper_QQmlNetworkAccessManagerFactory::new_QQmlNetworkAccessManagerFactory()
{ 
return new PythonQtShell_QQmlNetworkAccessManagerFactory(); }

QNetworkAccessManager*  PythonQtWrapper_QQmlNetworkAccessManagerFactory::create(QQmlNetworkAccessManagerFactory* theWrappedObject, QObject*  parent)
{
  return ( theWrappedObject->create(parent));
}



PythonQtShell_QQmlParserStatus::~PythonQtShell_QQmlParserStatus() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlParserStatus::classBegin()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("classBegin");
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
void PythonQtShell_QQmlParserStatus::componentComplete()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("componentComplete");
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
QQmlParserStatus* PythonQtWrapper_QQmlParserStatus::new_QQmlParserStatus()
{ 
return new PythonQtShell_QQmlParserStatus(); }

void PythonQtWrapper_QQmlParserStatus::classBegin(QQmlParserStatus* theWrappedObject)
{
  ( theWrappedObject->classBegin());
}

void PythonQtWrapper_QQmlParserStatus::componentComplete(QQmlParserStatus* theWrappedObject)
{
  ( theWrappedObject->componentComplete());
}



QQmlProperty* PythonQtWrapper_QQmlProperty::new_QQmlProperty()
{ 
return new QQmlProperty(); }

QQmlProperty* PythonQtWrapper_QQmlProperty::new_QQmlProperty(QObject*  arg__1)
{ 
return new QQmlProperty(arg__1); }

QQmlProperty* PythonQtWrapper_QQmlProperty::new_QQmlProperty(QObject*  arg__1, QQmlContext*  arg__2)
{ 
return new QQmlProperty(arg__1, arg__2); }

QQmlProperty* PythonQtWrapper_QQmlProperty::new_QQmlProperty(QObject*  arg__1, QQmlEngine*  arg__2)
{ 
return new QQmlProperty(arg__1, arg__2); }

QQmlProperty* PythonQtWrapper_QQmlProperty::new_QQmlProperty(QObject*  arg__1, const QString&  arg__2)
{ 
return new QQmlProperty(arg__1, arg__2); }

QQmlProperty* PythonQtWrapper_QQmlProperty::new_QQmlProperty(QObject*  arg__1, const QString&  arg__2, QQmlContext*  arg__3)
{ 
return new QQmlProperty(arg__1, arg__2, arg__3); }

QQmlProperty* PythonQtWrapper_QQmlProperty::new_QQmlProperty(QObject*  arg__1, const QString&  arg__2, QQmlEngine*  arg__3)
{ 
return new QQmlProperty(arg__1, arg__2, arg__3); }

QQmlProperty* PythonQtWrapper_QQmlProperty::new_QQmlProperty(const QQmlProperty&  arg__1)
{ 
return new QQmlProperty(arg__1); }

bool  PythonQtWrapper_QQmlProperty::connectNotifySignal(QQmlProperty* theWrappedObject, QObject*  dest, const char*  slot) const
{
  return ( theWrappedObject->connectNotifySignal(dest, slot));
}

bool  PythonQtWrapper_QQmlProperty::connectNotifySignal(QQmlProperty* theWrappedObject, QObject*  dest, int  method) const
{
  return ( theWrappedObject->connectNotifySignal(dest, method));
}

bool  PythonQtWrapper_QQmlProperty::hasNotifySignal(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasNotifySignal());
}

int  PythonQtWrapper_QQmlProperty::index(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->index());
}

bool  PythonQtWrapper_QQmlProperty::isBindable(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->isBindable());
}

bool  PythonQtWrapper_QQmlProperty::isDesignable(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->isDesignable());
}

bool  PythonQtWrapper_QQmlProperty::isProperty(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->isProperty());
}

bool  PythonQtWrapper_QQmlProperty::isResettable(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->isResettable());
}

bool  PythonQtWrapper_QQmlProperty::isSignalProperty(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->isSignalProperty());
}

bool  PythonQtWrapper_QQmlProperty::isValid(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QQmlProperty::isWritable(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QMetaMethod  PythonQtWrapper_QQmlProperty::method(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->method());
}

QString  PythonQtWrapper_QQmlProperty::name(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QQmlProperty::needsNotifySignal(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->needsNotifySignal());
}

QObject*  PythonQtWrapper_QQmlProperty::object(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

QQmlProperty*  PythonQtWrapper_QQmlProperty::operator_assign(QQmlProperty* theWrappedObject, const QQmlProperty&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QQmlProperty::__eq__(QQmlProperty* theWrappedObject, const QQmlProperty&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

QMetaProperty  PythonQtWrapper_QQmlProperty::property(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->property());
}

QMetaType  PythonQtWrapper_QQmlProperty::propertyMetaType(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyMetaType());
}

int  PythonQtWrapper_QQmlProperty::propertyType(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyType());
}

QQmlProperty::PropertyTypeCategory  PythonQtWrapper_QQmlProperty::propertyTypeCategory(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyTypeCategory());
}

const char*  PythonQtWrapper_QQmlProperty::propertyTypeName(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyTypeName());
}

QVariant  PythonQtWrapper_QQmlProperty::read(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->read());
}

QVariant  PythonQtWrapper_QQmlProperty::static_QQmlProperty_read(const QObject*  arg__1, const QString&  arg__2)
{
  return (QQmlProperty::read(arg__1, arg__2));
}

QVariant  PythonQtWrapper_QQmlProperty::static_QQmlProperty_read(const QObject*  arg__1, const QString&  arg__2, QQmlContext*  arg__3)
{
  return (QQmlProperty::read(arg__1, arg__2, arg__3));
}

QVariant  PythonQtWrapper_QQmlProperty::static_QQmlProperty_read(const QObject*  arg__1, const QString&  arg__2, QQmlEngine*  arg__3)
{
  return (QQmlProperty::read(arg__1, arg__2, arg__3));
}

bool  PythonQtWrapper_QQmlProperty::reset(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->reset());
}

void PythonQtWrapper_QQmlProperty::swap(QQmlProperty* theWrappedObject, QQmlProperty&  other)
{
  ( theWrappedObject->swap(other));
}

QQmlProperty::Type  PythonQtWrapper_QQmlProperty::type(QQmlProperty* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

bool  PythonQtWrapper_QQmlProperty::static_QQmlProperty_write(QObject*  arg__1, const QString&  arg__2, const QVariant&  arg__3)
{
  return (QQmlProperty::write(arg__1, arg__2, arg__3));
}

bool  PythonQtWrapper_QQmlProperty::static_QQmlProperty_write(QObject*  arg__1, const QString&  arg__2, const QVariant&  arg__3, QQmlContext*  arg__4)
{
  return (QQmlProperty::write(arg__1, arg__2, arg__3, arg__4));
}

bool  PythonQtWrapper_QQmlProperty::static_QQmlProperty_write(QObject*  arg__1, const QString&  arg__2, const QVariant&  arg__3, QQmlEngine*  arg__4)
{
  return (QQmlProperty::write(arg__1, arg__2, arg__3, arg__4));
}

bool  PythonQtWrapper_QQmlProperty::write(QQmlProperty* theWrappedObject, const QVariant&  arg__1) const
{
  return ( theWrappedObject->write(arg__1));
}



PythonQtShell_QQmlPropertyMap::~PythonQtShell_QQmlPropertyMap() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlPropertyMap::childEvent(QChildEvent*  event0)
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
  QQmlPropertyMap::childEvent(event0);
}
void PythonQtShell_QQmlPropertyMap::customEvent(QEvent*  event0)
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
  QQmlPropertyMap::customEvent(event0);
}
bool  PythonQtShell_QQmlPropertyMap::event(QEvent*  event0)
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
  return QQmlPropertyMap::event(event0);
}
bool  PythonQtShell_QQmlPropertyMap::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QQmlPropertyMap::eventFilter(watched0, event1);
}
void PythonQtShell_QQmlPropertyMap::timerEvent(QTimerEvent*  event0)
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
  QQmlPropertyMap::timerEvent(event0);
}
QVariant  PythonQtShell_QQmlPropertyMap::updateValue(const QString&  key0, const QVariant&  input1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QString&" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue{};
      void* args[3] = {nullptr, (void*)&key0, (void*)&input1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("updateValue", methodInfo, result);
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
  return QQmlPropertyMap::updateValue(key0, input1);
}
QQmlPropertyMap* PythonQtWrapper_QQmlPropertyMap::new_QQmlPropertyMap(QObject*  parent)
{ 
return new PythonQtShell_QQmlPropertyMap(parent); }

const QMetaObject* PythonQtShell_QQmlPropertyMap::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QQmlPropertyMap::staticMetaObject);
  } else {
    return &QQmlPropertyMap::staticMetaObject;
  }
}
int PythonQtShell_QQmlPropertyMap::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QQmlPropertyMap::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QQmlPropertyMap::clear(QQmlPropertyMap* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->clear(key));
}

bool  PythonQtWrapper_QQmlPropertyMap::contains(QQmlPropertyMap* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->contains(key));
}

int  PythonQtWrapper_QQmlPropertyMap::count(QQmlPropertyMap* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QQmlPropertyMap*  PythonQtWrapper_QQmlPropertyMap::static_QQmlPropertyMap_create(QObject*  parent)
{
  return (QQmlPropertyMap::create(parent));
}

void PythonQtWrapper_QQmlPropertyMap::freeze(QQmlPropertyMap* theWrappedObject)
{
  ( theWrappedObject->freeze());
}

void PythonQtWrapper_QQmlPropertyMap::insert(QQmlPropertyMap* theWrappedObject, const QHash<QString , QVariant >&  values)
{
  ( theWrappedObject->insert(values));
}

void PythonQtWrapper_QQmlPropertyMap::insert(QQmlPropertyMap* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->insert(key, value));
}

bool  PythonQtWrapper_QQmlPropertyMap::isEmpty(QQmlPropertyMap* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QStringList  PythonQtWrapper_QQmlPropertyMap::keys(QQmlPropertyMap* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

QVariant  PythonQtWrapper_QQmlPropertyMap::operator_subscript(QQmlPropertyMap* theWrappedObject, const QString&  key) const
{
  return ( (*theWrappedObject)[key]);
}

int  PythonQtWrapper_QQmlPropertyMap::size(QQmlPropertyMap* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QVariant  PythonQtWrapper_QQmlPropertyMap::updateValue(QQmlPropertyMap* theWrappedObject, const QString&  key, const QVariant&  input)
{
  return ( ((PythonQtPublicPromoter_QQmlPropertyMap*)theWrappedObject)->promoted_updateValue(key, input));
}

QVariant  PythonQtWrapper_QQmlPropertyMap::value(QQmlPropertyMap* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->value(key));
}



PythonQtShell_QQmlPropertyValueSource::~PythonQtShell_QQmlPropertyValueSource() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlPropertyValueSource::setTarget(const QQmlProperty&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setTarget");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QQmlProperty&"};
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
  
}
QQmlPropertyValueSource* PythonQtWrapper_QQmlPropertyValueSource::new_QQmlPropertyValueSource()
{ 
return new PythonQtShell_QQmlPropertyValueSource(); }

void PythonQtWrapper_QQmlPropertyValueSource::setTarget(QQmlPropertyValueSource* theWrappedObject, const QQmlProperty&  arg__1)
{
  ( theWrappedObject->setTarget(arg__1));
}



QQmlScriptString* PythonQtWrapper_QQmlScriptString::new_QQmlScriptString()
{ 
return new QQmlScriptString(); }

QQmlScriptString* PythonQtWrapper_QQmlScriptString::new_QQmlScriptString(const QQmlScriptString&  arg__1)
{ 
return new QQmlScriptString(arg__1); }

bool  PythonQtWrapper_QQmlScriptString::booleanLiteral(QQmlScriptString* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->booleanLiteral(ok));
}

bool  PythonQtWrapper_QQmlScriptString::isEmpty(QQmlScriptString* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QQmlScriptString::isNullLiteral(QQmlScriptString* theWrappedObject) const
{
  return ( theWrappedObject->isNullLiteral());
}

bool  PythonQtWrapper_QQmlScriptString::isUndefinedLiteral(QQmlScriptString* theWrappedObject) const
{
  return ( theWrappedObject->isUndefinedLiteral());
}

qreal  PythonQtWrapper_QQmlScriptString::numberLiteral(QQmlScriptString* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->numberLiteral(ok));
}

bool  PythonQtWrapper_QQmlScriptString::__ne__(QQmlScriptString* theWrappedObject, const QQmlScriptString&  arg__1) const
{
  return ( (*theWrappedObject)!= arg__1);
}

QQmlScriptString*  PythonQtWrapper_QQmlScriptString::operator_assign(QQmlScriptString* theWrappedObject, const QQmlScriptString&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QQmlScriptString::__eq__(QQmlScriptString* theWrappedObject, const QQmlScriptString&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

QString  PythonQtWrapper_QQmlScriptString::stringLiteral(QQmlScriptString* theWrappedObject) const
{
  return ( theWrappedObject->stringLiteral());
}



PythonQtShell_QQmlTypesExtensionInterface::~PythonQtShell_QQmlTypesExtensionInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QQmlTypesExtensionInterface::registerTypes(const char*  uri0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("registerTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&uri0};
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
QQmlTypesExtensionInterface* PythonQtWrapper_QQmlTypesExtensionInterface::new_QQmlTypesExtensionInterface()
{ 
return new PythonQtShell_QQmlTypesExtensionInterface(); }

void PythonQtWrapper_QQmlTypesExtensionInterface::registerTypes(QQmlTypesExtensionInterface* theWrappedObject, const char*  uri)
{
  ( theWrappedObject->registerTypes(uri));
}


