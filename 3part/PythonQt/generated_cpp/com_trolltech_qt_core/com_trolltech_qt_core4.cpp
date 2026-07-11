#include "com_trolltech_qt_core4.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qcborcommon.h>
#include <qdatastream.h>
#include <qdeadlinetimer.h>
#include <qlist.h>
#include <qlogging.h>
#include <qmutex.h>
#include <qreadwritelock.h>
#include <qversionnumber.h>

QVersionNumber* PythonQtWrapper_QVersionNumber::new_QVersionNumber()
{ 
return new QVersionNumber(); }

QVersionNumber* PythonQtWrapper_QVersionNumber::new_QVersionNumber(int  maj)
{ 
return new QVersionNumber(maj); }

QVersionNumber* PythonQtWrapper_QVersionNumber::new_QVersionNumber(int  maj, int  min)
{ 
return new QVersionNumber(maj, min); }

QVersionNumber* PythonQtWrapper_QVersionNumber::new_QVersionNumber(int  maj, int  min, int  mic)
{ 
return new QVersionNumber(maj, min, mic); }

QVersionNumber  PythonQtWrapper_QVersionNumber::static_QVersionNumber_commonPrefix(const QVersionNumber&  v1, const QVersionNumber&  v2)
{
  return (QVersionNumber::commonPrefix(v1, v2));
}

int  PythonQtWrapper_QVersionNumber::static_QVersionNumber_compare(const QVersionNumber&  v1, const QVersionNumber&  v2)
{
  return (QVersionNumber::compare(v1, v2));
}

QVersionNumber  PythonQtWrapper_QVersionNumber::static_QVersionNumber_fromString(QAnyStringView  string, qsizetype*  suffixIndex)
{
  return (QVersionNumber::fromString(string, suffixIndex));
}

bool  PythonQtWrapper_QVersionNumber::isNormalized(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->isNormalized());
}

bool  PythonQtWrapper_QVersionNumber::isNull(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QVersionNumber::isPrefixOf(QVersionNumber* theWrappedObject, const QVersionNumber&  other) const
{
  return ( theWrappedObject->isPrefixOf(other));
}

int  PythonQtWrapper_QVersionNumber::majorVersion(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->majorVersion());
}

int  PythonQtWrapper_QVersionNumber::microVersion(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->microVersion());
}

int  PythonQtWrapper_QVersionNumber::minorVersion(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->minorVersion());
}

QVersionNumber  PythonQtWrapper_QVersionNumber::normalized(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

bool  PythonQtWrapper_QVersionNumber::__ne__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QVersionNumber::__lt__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

void PythonQtWrapper_QVersionNumber::writeTo(QVersionNumber* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QVersionNumber::__le__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QVersionNumber::__eq__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QVersionNumber::__gt__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QVersionNumber::__ge__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

void PythonQtWrapper_QVersionNumber::readFrom(QVersionNumber* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

int  PythonQtWrapper_QVersionNumber::segmentAt(QVersionNumber* theWrappedObject, qsizetype  index) const
{
  return ( theWrappedObject->segmentAt(index));
}

qsizetype  PythonQtWrapper_QVersionNumber::segmentCount(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->segmentCount());
}

QList<int >  PythonQtWrapper_QVersionNumber::segments(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->segments());
}

QString  PythonQtWrapper_QVersionNumber::toString(QVersionNumber* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QString PythonQtWrapper_QVersionNumber::py_toString(QVersionNumber* obj) { return obj->toString(); }


QWaitCondition* PythonQtWrapper_QWaitCondition::new_QWaitCondition()
{ 
return new QWaitCondition(); }

void PythonQtWrapper_QWaitCondition::notify_all(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->notify_all());
}

void PythonQtWrapper_QWaitCondition::notify_one(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->notify_one());
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(lockedMutex, deadline));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedMutex, time));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, deadline));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, time));
}

void PythonQtWrapper_QWaitCondition::wakeAll(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeAll());
}

void PythonQtWrapper_QWaitCondition::wakeOne(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeOne());
}



QWriteLocker* PythonQtWrapper_QWriteLocker::new_QWriteLocker(QReadWriteLock*  readWriteLock)
{ 
return new QWriteLocker(readWriteLock); }

QReadWriteLock*  PythonQtWrapper_QWriteLocker::readWriteLock(QWriteLocker* theWrappedObject) const
{
  return ( theWrappedObject->readWriteLock());
}

void PythonQtWrapper_QWriteLocker::relock(QWriteLocker* theWrappedObject)
{
  ( theWrappedObject->relock());
}

void PythonQtWrapper_QWriteLocker::unlock(QWriteLocker* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QXmlStreamEntityResolver::~PythonQtShell_QXmlStreamEntityResolver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveEntity(const QString&  publicId0, const QString&  systemId1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resolveEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue{};
      void* args[3] = {nullptr, (void*)&publicId0, (void*)&systemId1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
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
  return QXmlStreamEntityResolver::resolveEntity(publicId0, systemId1);
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resolveUndeclaredEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue{};
      void* args[2] = {nullptr, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveUndeclaredEntity", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
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
  return QXmlStreamEntityResolver::resolveUndeclaredEntity(name0);
}
QXmlStreamEntityResolver* PythonQtWrapper_QXmlStreamEntityResolver::new_QXmlStreamEntityResolver()
{ 
return new PythonQtShell_QXmlStreamEntityResolver(); }

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->resolveEntity(publicId, systemId));
}

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->resolveUndeclaredEntity(name));
}




