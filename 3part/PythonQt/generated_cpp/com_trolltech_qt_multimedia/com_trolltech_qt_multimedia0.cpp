#include "com_trolltech_qt_multimedia0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <QtMultimedia/qaudio.h>
#include <QtMultimedia/qaudiobuffer.h>
#include <QtMultimedia/qaudiobufferinput.h>
#include <QtMultimedia/qaudiobufferoutput.h>
#include <QtMultimedia/qaudiodevice.h>
#include <QtMultimedia/qaudioformat.h>
#include <QtMultimedia/qaudioinput.h>
#include <QtMultimedia/qaudiooutput.h>
#include <QtMultimedia/qcamera.h>
#include <QtMultimedia/qcameradevice.h>
#include <QtMultimedia/qcapturablewindow.h>
#include <QtMultimedia/qimagecapture.h>
#include <QtMultimedia/qmediacapturesession.h>
#include <QtMultimedia/qmediaformat.h>
#include <QtMultimedia/qmediametadata.h>
#include <QtMultimedia/qmediarecorder.h>
#include <QtMultimedia/qmediatimerange.h>
#include <QtMultimedia/qplaybackoptions.h>
#include <QtMultimedia/qscreencapture.h>
#include <QtMultimedia/qvideoframe.h>
#include <QtMultimedia/qvideoframeformat.h>
#include <QtMultimedia/qvideoframeinput.h>
#include <QtMultimedia/qvideosink.h>
#include <QtMultimedia/qwindowcapture.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtWidgets/qgraphicsscene.h>
#include <QtWidgets/qgraphicssceneevent.h>
#include <QtWidgets/qgraphicstransform.h>
#include <QtWidgets/qgraphicswidget.h>
#include <QtWidgets/qstyleoption.h>
#include <QtWidgets/qwidget.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimetype.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qthread.h>
#include <qtransform.h>
#include <qurl.h>
#include <qwindow.h>



QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer()
{ 
return new QAudioBuffer(); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(const QAudioBuffer&  other)
{ 
return new QAudioBuffer(other); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(const QByteArray&  data, const QAudioFormat&  format, qint64  startTime)
{ 
return new QAudioBuffer(data, format, startTime); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(int  numFrames, const QAudioFormat&  format, qint64  startTime)
{ 
return new QAudioBuffer(numFrames, format, startTime); }

qsizetype  PythonQtWrapper_QAudioBuffer::byteCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->byteCount());
}

qint64  PythonQtWrapper_QAudioBuffer::duration(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAudioFormat  PythonQtWrapper_QAudioBuffer::format(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

qsizetype  PythonQtWrapper_QAudioBuffer::frameCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->frameCount());
}

bool  PythonQtWrapper_QAudioBuffer::isValid(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QAudioBuffer*  PythonQtWrapper_QAudioBuffer::operator_assign(QAudioBuffer* theWrappedObject, const QAudioBuffer&  other)
{
  return &( (*theWrappedObject)= other);
}

qsizetype  PythonQtWrapper_QAudioBuffer::sampleCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->sampleCount());
}

qint64  PythonQtWrapper_QAudioBuffer::startTime(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->startTime());
}

void PythonQtWrapper_QAudioBuffer::swap(QAudioBuffer* theWrappedObject, QAudioBuffer&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QAudioBufferInput::~PythonQtShell_QAudioBufferInput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioBufferInput::childEvent(QChildEvent*  event0)
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
  QAudioBufferInput::childEvent(event0);
}
void PythonQtShell_QAudioBufferInput::customEvent(QEvent*  event0)
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
  QAudioBufferInput::customEvent(event0);
}
bool  PythonQtShell_QAudioBufferInput::event(QEvent*  event0)
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
  return QAudioBufferInput::event(event0);
}
bool  PythonQtShell_QAudioBufferInput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioBufferInput::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioBufferInput::timerEvent(QTimerEvent*  event0)
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
  QAudioBufferInput::timerEvent(event0);
}
QAudioBufferInput* PythonQtWrapper_QAudioBufferInput::new_QAudioBufferInput(QObject*  parent)
{ 
return new PythonQtShell_QAudioBufferInput(parent); }

QAudioBufferInput* PythonQtWrapper_QAudioBufferInput::new_QAudioBufferInput(const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioBufferInput(format, parent); }

const QMetaObject* PythonQtShell_QAudioBufferInput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioBufferInput::staticMetaObject);
  } else {
    return &QAudioBufferInput::staticMetaObject;
  }
}
int PythonQtShell_QAudioBufferInput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioBufferInput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QMediaCaptureSession*  PythonQtWrapper_QAudioBufferInput::captureSession(QAudioBufferInput* theWrappedObject) const
{
  return ( theWrappedObject->captureSession());
}

QAudioFormat  PythonQtWrapper_QAudioBufferInput::format(QAudioBufferInput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QAudioBufferInput::sendAudioBuffer(QAudioBufferInput* theWrappedObject, const QAudioBuffer&  audioBuffer)
{
  return ( theWrappedObject->sendAudioBuffer(audioBuffer));
}



PythonQtShell_QAudioBufferOutput::~PythonQtShell_QAudioBufferOutput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioBufferOutput::childEvent(QChildEvent*  event0)
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
  QAudioBufferOutput::childEvent(event0);
}
void PythonQtShell_QAudioBufferOutput::customEvent(QEvent*  event0)
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
  QAudioBufferOutput::customEvent(event0);
}
bool  PythonQtShell_QAudioBufferOutput::event(QEvent*  event0)
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
  return QAudioBufferOutput::event(event0);
}
bool  PythonQtShell_QAudioBufferOutput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioBufferOutput::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioBufferOutput::timerEvent(QTimerEvent*  event0)
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
  QAudioBufferOutput::timerEvent(event0);
}
QAudioBufferOutput* PythonQtWrapper_QAudioBufferOutput::new_QAudioBufferOutput(QObject*  parent)
{ 
return new PythonQtShell_QAudioBufferOutput(parent); }

QAudioBufferOutput* PythonQtWrapper_QAudioBufferOutput::new_QAudioBufferOutput(const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioBufferOutput(format, parent); }

const QMetaObject* PythonQtShell_QAudioBufferOutput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioBufferOutput::staticMetaObject);
  } else {
    return &QAudioBufferOutput::staticMetaObject;
  }
}
int PythonQtShell_QAudioBufferOutput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioBufferOutput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioFormat  PythonQtWrapper_QAudioBufferOutput::format(QAudioBufferOutput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}



PythonQtShell_QAudioDecoder::~PythonQtShell_QAudioDecoder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioDecoder::childEvent(QChildEvent*  event0)
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
  QAudioDecoder::childEvent(event0);
}
void PythonQtShell_QAudioDecoder::customEvent(QEvent*  event0)
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
  QAudioDecoder::customEvent(event0);
}
bool  PythonQtShell_QAudioDecoder::event(QEvent*  event0)
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
  return QAudioDecoder::event(event0);
}
bool  PythonQtShell_QAudioDecoder::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioDecoder::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioDecoder::timerEvent(QTimerEvent*  event0)
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
  QAudioDecoder::timerEvent(event0);
}
QAudioDecoder* PythonQtWrapper_QAudioDecoder::new_QAudioDecoder(QObject*  parent)
{ 
return new PythonQtShell_QAudioDecoder(parent); }

const QMetaObject* PythonQtShell_QAudioDecoder::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioDecoder::staticMetaObject);
  } else {
    return &QAudioDecoder::staticMetaObject;
  }
}
int PythonQtShell_QAudioDecoder::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioDecoder::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioFormat  PythonQtWrapper_QAudioDecoder::audioFormat(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->audioFormat());
}

bool  PythonQtWrapper_QAudioDecoder::bufferAvailable(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->bufferAvailable());
}

qint64  PythonQtWrapper_QAudioDecoder::duration(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAudioDecoder::Error  PythonQtWrapper_QAudioDecoder::error(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QAudioDecoder::errorString(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QAudioDecoder::isDecoding(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->isDecoding());
}

bool  PythonQtWrapper_QAudioDecoder::isSupported(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->isSupported());
}

qint64  PythonQtWrapper_QAudioDecoder::position(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QAudioBuffer  PythonQtWrapper_QAudioDecoder::read(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->read());
}

void PythonQtWrapper_QAudioDecoder::setAudioFormat(QAudioDecoder* theWrappedObject, const QAudioFormat&  format)
{
  ( theWrappedObject->setAudioFormat(format));
}

void PythonQtWrapper_QAudioDecoder::setSource(QAudioDecoder* theWrappedObject, const QUrl&  fileName)
{
  ( theWrappedObject->setSource(fileName));
}

void PythonQtWrapper_QAudioDecoder::setSourceDevice(QAudioDecoder* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setSourceDevice(device));
}

QUrl  PythonQtWrapper_QAudioDecoder::source(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->source());
}

QIODevice*  PythonQtWrapper_QAudioDecoder::sourceDevice(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->sourceDevice());
}



QAudioDevice* PythonQtWrapper_QAudioDevice::new_QAudioDevice()
{ 
return new QAudioDevice(); }

QAudioDevice* PythonQtWrapper_QAudioDevice::new_QAudioDevice(const QAudioDevice&  other)
{ 
return new QAudioDevice(other); }

QAudioFormat::ChannelConfig  PythonQtWrapper_QAudioDevice::channelConfiguration(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->channelConfiguration());
}

QString  PythonQtWrapper_QAudioDevice::description(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

QByteArray  PythonQtWrapper_QAudioDevice::id(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QAudioDevice::isDefault(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

bool  PythonQtWrapper_QAudioDevice::isFormatSupported(QAudioDevice* theWrappedObject, const QAudioFormat&  format) const
{
  return ( theWrappedObject->isFormatSupported(format));
}

bool  PythonQtWrapper_QAudioDevice::isNull(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QAudioDevice::maximumChannelCount(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->maximumChannelCount());
}

int  PythonQtWrapper_QAudioDevice::maximumSampleRate(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->maximumSampleRate());
}

int  PythonQtWrapper_QAudioDevice::minimumChannelCount(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->minimumChannelCount());
}

int  PythonQtWrapper_QAudioDevice::minimumSampleRate(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->minimumSampleRate());
}

QAudioDevice::Mode  PythonQtWrapper_QAudioDevice::mode(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->mode());
}

bool  PythonQtWrapper_QAudioDevice::__ne__(QAudioDevice* theWrappedObject, const QAudioDevice&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QAudioDevice*  PythonQtWrapper_QAudioDevice::operator_assign(QAudioDevice* theWrappedObject, const QAudioDevice&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QAudioDevice::__eq__(QAudioDevice* theWrappedObject, const QAudioDevice&  other) const
{
  return ( (*theWrappedObject)== other);
}

QAudioFormat  PythonQtWrapper_QAudioDevice::preferredFormat(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->preferredFormat());
}

QList<QAudioFormat::SampleFormat >  PythonQtWrapper_QAudioDevice::supportedSampleFormats(QAudioDevice* theWrappedObject) const
{
  return ( theWrappedObject->supportedSampleFormats());
}

void PythonQtWrapper_QAudioDevice::swap(QAudioDevice* theWrappedObject, QAudioDevice&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QAudioFormat::~PythonQtShell_QAudioFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QAudioFormat* PythonQtWrapper_QAudioFormat::new_QAudioFormat()
{ 
return new PythonQtShell_QAudioFormat(); }

int  PythonQtWrapper_QAudioFormat::bytesForDuration(QAudioFormat* theWrappedObject, qint64  microseconds) const
{
  return ( theWrappedObject->bytesForDuration(microseconds));
}

int  PythonQtWrapper_QAudioFormat::bytesForFrames(QAudioFormat* theWrappedObject, int  frameCount) const
{
  return ( theWrappedObject->bytesForFrames(frameCount));
}

int  PythonQtWrapper_QAudioFormat::bytesPerFrame(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->bytesPerFrame());
}

int  PythonQtWrapper_QAudioFormat::bytesPerSample(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->bytesPerSample());
}

QAudioFormat::ChannelConfig  PythonQtWrapper_QAudioFormat::channelConfig(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->channelConfig());
}

int  PythonQtWrapper_QAudioFormat::channelCount(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->channelCount());
}

int  PythonQtWrapper_QAudioFormat::channelOffset(QAudioFormat* theWrappedObject, QAudioFormat::AudioChannelPosition  channel) const
{
  return ( theWrappedObject->channelOffset(channel));
}

QAudioFormat::ChannelConfig  PythonQtWrapper_QAudioFormat::static_QAudioFormat_defaultChannelConfigForChannelCount(int  channelCount)
{
  return (QAudioFormat::defaultChannelConfigForChannelCount(channelCount));
}

qint64  PythonQtWrapper_QAudioFormat::durationForBytes(QAudioFormat* theWrappedObject, int  byteCount) const
{
  return ( theWrappedObject->durationForBytes(byteCount));
}

qint64  PythonQtWrapper_QAudioFormat::durationForFrames(QAudioFormat* theWrappedObject, int  frameCount) const
{
  return ( theWrappedObject->durationForFrames(frameCount));
}

int  PythonQtWrapper_QAudioFormat::framesForBytes(QAudioFormat* theWrappedObject, int  byteCount) const
{
  return ( theWrappedObject->framesForBytes(byteCount));
}

int  PythonQtWrapper_QAudioFormat::framesForDuration(QAudioFormat* theWrappedObject, qint64  microseconds) const
{
  return ( theWrappedObject->framesForDuration(microseconds));
}

bool  PythonQtWrapper_QAudioFormat::isValid(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

float  PythonQtWrapper_QAudioFormat::normalizedSampleValue(QAudioFormat* theWrappedObject, const void*  sample) const
{
  return ( theWrappedObject->normalizedSampleValue(sample));
}

bool  PythonQtWrapper_QAudioFormat::__ne__(QAudioFormat* theWrappedObject, const QAudioFormat&  b)
{
  return ( (*theWrappedObject)!= b);
}

bool  PythonQtWrapper_QAudioFormat::__eq__(QAudioFormat* theWrappedObject, const QAudioFormat&  b)
{
  return ( (*theWrappedObject)== b);
}

QAudioFormat::SampleFormat  PythonQtWrapper_QAudioFormat::sampleFormat(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleFormat());
}

int  PythonQtWrapper_QAudioFormat::sampleRate(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleRate());
}

void PythonQtWrapper_QAudioFormat::setChannelConfig(QAudioFormat* theWrappedObject, QAudioFormat::ChannelConfig  config)
{
  ( theWrappedObject->setChannelConfig(config));
}

void PythonQtWrapper_QAudioFormat::setChannelCount(QAudioFormat* theWrappedObject, int  channelCount)
{
  ( theWrappedObject->setChannelCount(channelCount));
}

void PythonQtWrapper_QAudioFormat::setSampleFormat(QAudioFormat* theWrappedObject, QAudioFormat::SampleFormat  f)
{
  ( theWrappedObject->setSampleFormat(f));
}

void PythonQtWrapper_QAudioFormat::setSampleRate(QAudioFormat* theWrappedObject, int  sampleRate)
{
  ( theWrappedObject->setSampleRate(sampleRate));
}

QString PythonQtWrapper_QAudioFormat::py_toString(QAudioFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QAudioInput::~PythonQtShell_QAudioInput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioInput::childEvent(QChildEvent*  event0)
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
  QAudioInput::childEvent(event0);
}
void PythonQtShell_QAudioInput::customEvent(QEvent*  event0)
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
  QAudioInput::customEvent(event0);
}
bool  PythonQtShell_QAudioInput::event(QEvent*  event0)
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
  return QAudioInput::event(event0);
}
bool  PythonQtShell_QAudioInput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioInput::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioInput::timerEvent(QTimerEvent*  event0)
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
  QAudioInput::timerEvent(event0);
}
QAudioInput* PythonQtWrapper_QAudioInput::new_QAudioInput(QObject*  parent)
{ 
return new PythonQtShell_QAudioInput(parent); }

QAudioInput* PythonQtWrapper_QAudioInput::new_QAudioInput(const QAudioDevice&  deviceInfo, QObject*  parent)
{ 
return new PythonQtShell_QAudioInput(deviceInfo, parent); }

const QMetaObject* PythonQtShell_QAudioInput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioInput::staticMetaObject);
  } else {
    return &QAudioInput::staticMetaObject;
  }
}
int PythonQtShell_QAudioInput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioInput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioDevice  PythonQtWrapper_QAudioInput::device(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

bool  PythonQtWrapper_QAudioInput::isMuted(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

float  PythonQtWrapper_QAudioInput::volume(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAudioOutput::~PythonQtShell_QAudioOutput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioOutput::childEvent(QChildEvent*  event0)
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
  QAudioOutput::childEvent(event0);
}
void PythonQtShell_QAudioOutput::customEvent(QEvent*  event0)
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
  QAudioOutput::customEvent(event0);
}
bool  PythonQtShell_QAudioOutput::event(QEvent*  event0)
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
  return QAudioOutput::event(event0);
}
bool  PythonQtShell_QAudioOutput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioOutput::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioOutput::timerEvent(QTimerEvent*  event0)
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
  QAudioOutput::timerEvent(event0);
}
QAudioOutput* PythonQtWrapper_QAudioOutput::new_QAudioOutput(QObject*  parent)
{ 
return new PythonQtShell_QAudioOutput(parent); }

QAudioOutput* PythonQtWrapper_QAudioOutput::new_QAudioOutput(const QAudioDevice&  device, QObject*  parent)
{ 
return new PythonQtShell_QAudioOutput(device, parent); }

const QMetaObject* PythonQtShell_QAudioOutput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioOutput::staticMetaObject);
  } else {
    return &QAudioOutput::staticMetaObject;
  }
}
int PythonQtShell_QAudioOutput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioOutput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioDevice  PythonQtWrapper_QAudioOutput::device(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

bool  PythonQtWrapper_QAudioOutput::isMuted(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

float  PythonQtWrapper_QAudioOutput::volume(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAudioSink::~PythonQtShell_QAudioSink() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioSink::childEvent(QChildEvent*  event0)
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
  QAudioSink::childEvent(event0);
}
void PythonQtShell_QAudioSink::customEvent(QEvent*  event0)
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
  QAudioSink::customEvent(event0);
}
bool  PythonQtShell_QAudioSink::event(QEvent*  event0)
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
  return QAudioSink::event(event0);
}
bool  PythonQtShell_QAudioSink::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioSink::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioSink::timerEvent(QTimerEvent*  event0)
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
  QAudioSink::timerEvent(event0);
}
QAudioSink* PythonQtWrapper_QAudioSink::new_QAudioSink(const QAudioDevice&  audioDeviceInfo, const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioSink(audioDeviceInfo, format, parent); }

QAudioSink* PythonQtWrapper_QAudioSink::new_QAudioSink(const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioSink(format, parent); }

const QMetaObject* PythonQtShell_QAudioSink::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioSink::staticMetaObject);
  } else {
    return &QAudioSink::staticMetaObject;
  }
}
int PythonQtShell_QAudioSink::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioSink::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
qsizetype  PythonQtWrapper_QAudioSink::bufferFrameCount(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->bufferFrameCount());
}

qsizetype  PythonQtWrapper_QAudioSink::bufferSize(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->bufferSize());
}

qsizetype  PythonQtWrapper_QAudioSink::bytesFree(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->bytesFree());
}

qint64  PythonQtWrapper_QAudioSink::elapsedUSecs(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->elapsedUSecs());
}

QAudio::Error  PythonQtWrapper_QAudioSink::error(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QAudioFormat  PythonQtWrapper_QAudioSink::format(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

qsizetype  PythonQtWrapper_QAudioSink::framesFree(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->framesFree());
}

bool  PythonQtWrapper_QAudioSink::isNull(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qint64  PythonQtWrapper_QAudioSink::processedUSecs(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->processedUSecs());
}

void PythonQtWrapper_QAudioSink::reset(QAudioSink* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QAudioSink::resume(QAudioSink* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAudioSink::setBufferFrameCount(QAudioSink* theWrappedObject, qsizetype  framesCount)
{
  ( theWrappedObject->setBufferFrameCount(framesCount));
}

void PythonQtWrapper_QAudioSink::setBufferSize(QAudioSink* theWrappedObject, qsizetype  bytes)
{
  ( theWrappedObject->setBufferSize(bytes));
}

void PythonQtWrapper_QAudioSink::setVolume(QAudioSink* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setVolume(arg__1));
}

QIODevice*  PythonQtWrapper_QAudioSink::start(QAudioSink* theWrappedObject)
{
  return ( theWrappedObject->start());
}

void PythonQtWrapper_QAudioSink::start(QAudioSink* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->start(device));
}

QAudio::State  PythonQtWrapper_QAudioSink::state(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAudioSink::stop(QAudioSink* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QAudioSink::suspend(QAudioSink* theWrappedObject)
{
  ( theWrappedObject->suspend());
}

qreal  PythonQtWrapper_QAudioSink::volume(QAudioSink* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAudioSource::~PythonQtShell_QAudioSource() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioSource::childEvent(QChildEvent*  event0)
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
  QAudioSource::childEvent(event0);
}
void PythonQtShell_QAudioSource::customEvent(QEvent*  event0)
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
  QAudioSource::customEvent(event0);
}
bool  PythonQtShell_QAudioSource::event(QEvent*  event0)
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
  return QAudioSource::event(event0);
}
bool  PythonQtShell_QAudioSource::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioSource::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioSource::timerEvent(QTimerEvent*  event0)
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
  QAudioSource::timerEvent(event0);
}
QAudioSource* PythonQtWrapper_QAudioSource::new_QAudioSource(const QAudioDevice&  audioDeviceInfo, const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioSource(audioDeviceInfo, format, parent); }

QAudioSource* PythonQtWrapper_QAudioSource::new_QAudioSource(const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioSource(format, parent); }

const QMetaObject* PythonQtShell_QAudioSource::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioSource::staticMetaObject);
  } else {
    return &QAudioSource::staticMetaObject;
  }
}
int PythonQtShell_QAudioSource::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioSource::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
qsizetype  PythonQtWrapper_QAudioSource::bufferFrameCount(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->bufferFrameCount());
}

qsizetype  PythonQtWrapper_QAudioSource::bufferSize(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->bufferSize());
}

qsizetype  PythonQtWrapper_QAudioSource::bytesAvailable(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->bytesAvailable());
}

qint64  PythonQtWrapper_QAudioSource::elapsedUSecs(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->elapsedUSecs());
}

QAudio::Error  PythonQtWrapper_QAudioSource::error(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QAudioFormat  PythonQtWrapper_QAudioSource::format(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

qsizetype  PythonQtWrapper_QAudioSource::framesAvailable(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->framesAvailable());
}

bool  PythonQtWrapper_QAudioSource::isNull(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qint64  PythonQtWrapper_QAudioSource::processedUSecs(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->processedUSecs());
}

void PythonQtWrapper_QAudioSource::reset(QAudioSource* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QAudioSource::resume(QAudioSource* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAudioSource::setBufferFrameCount(QAudioSource* theWrappedObject, qsizetype  frames)
{
  ( theWrappedObject->setBufferFrameCount(frames));
}

void PythonQtWrapper_QAudioSource::setBufferSize(QAudioSource* theWrappedObject, qsizetype  bytes)
{
  ( theWrappedObject->setBufferSize(bytes));
}

void PythonQtWrapper_QAudioSource::setVolume(QAudioSource* theWrappedObject, qreal  volume)
{
  ( theWrappedObject->setVolume(volume));
}

QIODevice*  PythonQtWrapper_QAudioSource::start(QAudioSource* theWrappedObject)
{
  return ( theWrappedObject->start());
}

void PythonQtWrapper_QAudioSource::start(QAudioSource* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->start(device));
}

QAudio::State  PythonQtWrapper_QAudioSource::state(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAudioSource::stop(QAudioSource* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QAudioSource::suspend(QAudioSource* theWrappedObject)
{
  ( theWrappedObject->suspend());
}

qreal  PythonQtWrapper_QAudioSource::volume(QAudioSource* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QCamera::~PythonQtShell_QCamera() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QCamera::childEvent(QChildEvent*  event0)
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
  QCamera::childEvent(event0);
}
void PythonQtShell_QCamera::customEvent(QEvent*  event0)
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
  QCamera::customEvent(event0);
}
bool  PythonQtShell_QCamera::event(QEvent*  event0)
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
  return QCamera::event(event0);
}
bool  PythonQtShell_QCamera::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCamera::eventFilter(watched0, event1);
}
void PythonQtShell_QCamera::timerEvent(QTimerEvent*  event0)
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
  QCamera::timerEvent(event0);
}
QCamera* PythonQtWrapper_QCamera::new_QCamera(QCameraDevice::Position  position, QObject*  parent)
{ 
return new PythonQtShell_QCamera(position, parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(QObject*  parent)
{ 
return new PythonQtShell_QCamera(parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(const QCameraDevice&  cameraDevice, QObject*  parent)
{ 
return new PythonQtShell_QCamera(cameraDevice, parent); }

const QMetaObject* PythonQtShell_QCamera::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCamera::staticMetaObject);
  } else {
    return &QCamera::staticMetaObject;
  }
}
int PythonQtShell_QCamera::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCamera::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QCameraDevice  PythonQtWrapper_QCamera::cameraDevice(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->cameraDevice());
}

QCameraFormat  PythonQtWrapper_QCamera::cameraFormat(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->cameraFormat());
}

QMediaCaptureSession*  PythonQtWrapper_QCamera::captureSession(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->captureSession());
}

int  PythonQtWrapper_QCamera::colorTemperature(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->colorTemperature());
}

QPointF  PythonQtWrapper_QCamera::customFocusPoint(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->customFocusPoint());
}

QCamera::Error  PythonQtWrapper_QCamera::error(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QCamera::errorString(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

float  PythonQtWrapper_QCamera::exposureCompensation(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->exposureCompensation());
}

QCamera::ExposureMode  PythonQtWrapper_QCamera::exposureMode(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->exposureMode());
}

float  PythonQtWrapper_QCamera::exposureTime(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->exposureTime());
}

QCamera::FlashMode  PythonQtWrapper_QCamera::flashMode(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->flashMode());
}

float  PythonQtWrapper_QCamera::focusDistance(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->focusDistance());
}

QCamera::FocusMode  PythonQtWrapper_QCamera::focusMode(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->focusMode());
}

QPointF  PythonQtWrapper_QCamera::focusPoint(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->focusPoint());
}

bool  PythonQtWrapper_QCamera::isActive(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QCamera::isAvailable(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QCamera::isExposureModeSupported(QCamera* theWrappedObject, QCamera::ExposureMode  mode) const
{
  return ( theWrappedObject->isExposureModeSupported(mode));
}

bool  PythonQtWrapper_QCamera::isFlashModeSupported(QCamera* theWrappedObject, QCamera::FlashMode  mode) const
{
  return ( theWrappedObject->isFlashModeSupported(mode));
}

bool  PythonQtWrapper_QCamera::isFlashReady(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->isFlashReady());
}

bool  PythonQtWrapper_QCamera::isFocusModeSupported(QCamera* theWrappedObject, QCamera::FocusMode  mode) const
{
  return ( theWrappedObject->isFocusModeSupported(mode));
}

bool  PythonQtWrapper_QCamera::isTorchModeSupported(QCamera* theWrappedObject, QCamera::TorchMode  mode) const
{
  return ( theWrappedObject->isTorchModeSupported(mode));
}

bool  PythonQtWrapper_QCamera::isWhiteBalanceModeSupported(QCamera* theWrappedObject, QCamera::WhiteBalanceMode  mode) const
{
  return ( theWrappedObject->isWhiteBalanceModeSupported(mode));
}

int  PythonQtWrapper_QCamera::isoSensitivity(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->isoSensitivity());
}

float  PythonQtWrapper_QCamera::manualExposureTime(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->manualExposureTime());
}

int  PythonQtWrapper_QCamera::manualIsoSensitivity(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->manualIsoSensitivity());
}

float  PythonQtWrapper_QCamera::maximumExposureTime(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->maximumExposureTime());
}

int  PythonQtWrapper_QCamera::maximumIsoSensitivity(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->maximumIsoSensitivity());
}

float  PythonQtWrapper_QCamera::maximumZoomFactor(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->maximumZoomFactor());
}

float  PythonQtWrapper_QCamera::minimumExposureTime(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->minimumExposureTime());
}

int  PythonQtWrapper_QCamera::minimumIsoSensitivity(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->minimumIsoSensitivity());
}

float  PythonQtWrapper_QCamera::minimumZoomFactor(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->minimumZoomFactor());
}

void PythonQtWrapper_QCamera::setCameraDevice(QCamera* theWrappedObject, const QCameraDevice&  cameraDevice)
{
  ( theWrappedObject->setCameraDevice(cameraDevice));
}

void PythonQtWrapper_QCamera::setCameraFormat(QCamera* theWrappedObject, const QCameraFormat&  format)
{
  ( theWrappedObject->setCameraFormat(format));
}

void PythonQtWrapper_QCamera::setCustomFocusPoint(QCamera* theWrappedObject, const QPointF&  point)
{
  ( theWrappedObject->setCustomFocusPoint(point));
}

void PythonQtWrapper_QCamera::setFocusDistance(QCamera* theWrappedObject, float  d)
{
  ( theWrappedObject->setFocusDistance(d));
}

void PythonQtWrapper_QCamera::setFocusMode(QCamera* theWrappedObject, QCamera::FocusMode  mode)
{
  ( theWrappedObject->setFocusMode(mode));
}

void PythonQtWrapper_QCamera::setZoomFactor(QCamera* theWrappedObject, float  factor)
{
  ( theWrappedObject->setZoomFactor(factor));
}

QCamera::Features  PythonQtWrapper_QCamera::supportedFeatures(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->supportedFeatures());
}

QCamera::TorchMode  PythonQtWrapper_QCamera::torchMode(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->torchMode());
}

QCamera::WhiteBalanceMode  PythonQtWrapper_QCamera::whiteBalanceMode(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->whiteBalanceMode());
}

float  PythonQtWrapper_QCamera::zoomFactor(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}



QCameraDevice* PythonQtWrapper_QCameraDevice::new_QCameraDevice()
{ 
return new QCameraDevice(); }

QCameraDevice* PythonQtWrapper_QCameraDevice::new_QCameraDevice(const QCameraDevice&  other)
{ 
return new QCameraDevice(other); }

QString  PythonQtWrapper_QCameraDevice::description(QCameraDevice* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

QByteArray  PythonQtWrapper_QCameraDevice::id(QCameraDevice* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QCameraDevice::isDefault(QCameraDevice* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

bool  PythonQtWrapper_QCameraDevice::isNull(QCameraDevice* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QCameraDevice::__ne__(QCameraDevice* theWrappedObject, const QCameraDevice&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QCameraDevice*  PythonQtWrapper_QCameraDevice::operator_assign(QCameraDevice* theWrappedObject, const QCameraDevice&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QCameraDevice::__eq__(QCameraDevice* theWrappedObject, const QCameraDevice&  other) const
{
  return ( (*theWrappedObject)== other);
}

QList<QSize >  PythonQtWrapper_QCameraDevice::photoResolutions(QCameraDevice* theWrappedObject) const
{
  return ( theWrappedObject->photoResolutions());
}

QCameraDevice::Position  PythonQtWrapper_QCameraDevice::position(QCameraDevice* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QList<QCameraFormat >  PythonQtWrapper_QCameraDevice::videoFormats(QCameraDevice* theWrappedObject) const
{
  return ( theWrappedObject->videoFormats());
}

QString PythonQtWrapper_QCameraDevice::py_toString(QCameraDevice* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QCameraFormat* PythonQtWrapper_QCameraFormat::new_QCameraFormat()
{ 
return new QCameraFormat(); }

QCameraFormat* PythonQtWrapper_QCameraFormat::new_QCameraFormat(const QCameraFormat&  other)
{ 
return new QCameraFormat(other); }

bool  PythonQtWrapper_QCameraFormat::isNull(QCameraFormat* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

float  PythonQtWrapper_QCameraFormat::maxFrameRate(QCameraFormat* theWrappedObject) const
{
  return ( theWrappedObject->maxFrameRate());
}

float  PythonQtWrapper_QCameraFormat::minFrameRate(QCameraFormat* theWrappedObject) const
{
  return ( theWrappedObject->minFrameRate());
}

bool  PythonQtWrapper_QCameraFormat::__ne__(QCameraFormat* theWrappedObject, const QCameraFormat&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QCameraFormat*  PythonQtWrapper_QCameraFormat::operator_assign(QCameraFormat* theWrappedObject, const QCameraFormat&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QCameraFormat::__eq__(QCameraFormat* theWrappedObject, const QCameraFormat&  other) const
{
  return ( (*theWrappedObject)== other);
}

QVideoFrameFormat::PixelFormat  PythonQtWrapper_QCameraFormat::pixelFormat(QCameraFormat* theWrappedObject) const
{
  return ( theWrappedObject->pixelFormat());
}

QSize  PythonQtWrapper_QCameraFormat::resolution(QCameraFormat* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

QString PythonQtWrapper_QCameraFormat::py_toString(QCameraFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QCapturableWindow* PythonQtWrapper_QCapturableWindow::new_QCapturableWindow()
{ 
return new QCapturableWindow(); }

QCapturableWindow* PythonQtWrapper_QCapturableWindow::new_QCapturableWindow(QWindow*  window)
{ 
return new QCapturableWindow(window); }

QCapturableWindow* PythonQtWrapper_QCapturableWindow::new_QCapturableWindow(const QCapturableWindow&  other)
{ 
return new QCapturableWindow(other); }

QString  PythonQtWrapper_QCapturableWindow::description(QCapturableWindow* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

bool  PythonQtWrapper_QCapturableWindow::isValid(QCapturableWindow* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QCapturableWindow::__ne__(QCapturableWindow* theWrappedObject, const QCapturableWindow&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QCapturableWindow*  PythonQtWrapper_QCapturableWindow::operator_assign(QCapturableWindow* theWrappedObject, const QCapturableWindow&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QCapturableWindow::__eq__(QCapturableWindow* theWrappedObject, const QCapturableWindow&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QCapturableWindow::swap(QCapturableWindow* theWrappedObject, QCapturableWindow&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QCapturableWindow::py_toString(QCapturableWindow* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QGraphicsVideoItem::~PythonQtShell_QGraphicsVideoItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsVideoItem::advance(int  phase0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("advance");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&phase0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsVideoItem::advance(phase0);
}
QRectF  PythonQtShell_QGraphicsVideoItem::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
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
  return QGraphicsVideoItem::boundingRect();
}
void PythonQtShell_QGraphicsVideoItem::childEvent(QChildEvent*  event0)
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
  QGraphicsVideoItem::childEvent(event0);
}
bool  PythonQtShell_QGraphicsVideoItem::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("collidesWithItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&other0, (void*)&mode1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
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
  return QGraphicsVideoItem::collidesWithItem(other0, mode1);
}
bool  PythonQtShell_QGraphicsVideoItem::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("collidesWithPath");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&path0, (void*)&mode1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
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
  return QGraphicsVideoItem::collidesWithPath(path0, mode1);
}
bool  PythonQtShell_QGraphicsVideoItem::contains(const QPointF&  point0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contains");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPointF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&point0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
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
  return QGraphicsVideoItem::contains(point0);
}
void PythonQtShell_QGraphicsVideoItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
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
  QGraphicsVideoItem::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::customEvent(QEvent*  event0)
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
  QGraphicsVideoItem::customEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
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
  QGraphicsVideoItem::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
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
  QGraphicsVideoItem::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
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
  QGraphicsVideoItem::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
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
  QGraphicsVideoItem::dropEvent(event0);
}
bool  PythonQtShell_QGraphicsVideoItem::event(QEvent*  ev0)
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
      void* args[2] = {nullptr, (void*)&ev0};
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
  return QGraphicsVideoItem::event(ev0);
}
bool  PythonQtShell_QGraphicsVideoItem::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsVideoItem::eventFilter(watched0, event1);
}
QVariant  PythonQtShell_QGraphicsVideoItem::extension(const QVariant&  variant0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("extension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {nullptr, (void*)&variant0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
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
  return QGraphicsVideoItem::extension(variant0);
}
void PythonQtShell_QGraphicsVideoItem::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusInEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QGraphicsVideoItem::focusInEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QGraphicsVideoItem::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hoverEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
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
  QGraphicsVideoItem::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hoverLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
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
  QGraphicsVideoItem::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hoverMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
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
  QGraphicsVideoItem::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::inputMethodEvent(QInputMethodEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("inputMethodEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QInputMethodEvent*"};
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
  QGraphicsVideoItem::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsVideoItem::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("inputMethodQuery");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {nullptr, (void*)&query0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
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
  return QGraphicsVideoItem::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsVideoItem::isObscuredBy(const QGraphicsItem*  item0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isObscuredBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
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
  return QGraphicsVideoItem::isObscuredBy(item0);
}
QVariant  PythonQtShell_QGraphicsVideoItem::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("itemChange");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue{};
      void* args[3] = {nullptr, (void*)&change0, (void*)&value1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      if (change0 == QGraphicsItem::ItemParentChange || change0 == QGraphicsItem::ItemSceneChange) {
        returnValue = value1;
      } 
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsVideoItem::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsVideoItem::keyPressEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QGraphicsVideoItem::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QGraphicsVideoItem::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
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
  QGraphicsVideoItem::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
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
  QGraphicsVideoItem::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
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
  QGraphicsVideoItem::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsVideoItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
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
  QGraphicsVideoItem::mouseReleaseEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsVideoItem::opaqueArea() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("opaqueArea");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
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
  return QGraphicsVideoItem::opaqueArea();
}
void PythonQtShell_QGraphicsVideoItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {nullptr, (void*)&painter0, (void*)&option1, (void*)&widget2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsVideoItem::paint(painter0, option1, widget2);
}
bool  PythonQtShell_QGraphicsVideoItem::sceneEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sceneEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
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
  return QGraphicsVideoItem::sceneEvent(event0);
}
bool  PythonQtShell_QGraphicsVideoItem::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sceneEventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
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
  return QGraphicsVideoItem::sceneEventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsVideoItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&extension0, (void*)&variant1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsVideoItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsVideoItem::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
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
  return QGraphicsVideoItem::shape();
}
bool  PythonQtShell_QGraphicsVideoItem::supportsExtension(QGraphicsItem::Extension  extension0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("supportsExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&extension0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
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
  return QGraphicsVideoItem::supportsExtension(extension0);
}
void PythonQtShell_QGraphicsVideoItem::timerEvent(QTimerEvent*  event0)
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
  QGraphicsVideoItem::timerEvent(event0);
}
int  PythonQtShell_QGraphicsVideoItem::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("type");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
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
  return QGraphicsVideoItem::type();
}
void PythonQtShell_QGraphicsVideoItem::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
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
  QGraphicsVideoItem::wheelEvent(event0);
}
QGraphicsVideoItem* PythonQtWrapper_QGraphicsVideoItem::new_QGraphicsVideoItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsVideoItem(parent); }

const QMetaObject* PythonQtShell_QGraphicsVideoItem::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsVideoItem::staticMetaObject);
  } else {
    return &QGraphicsVideoItem::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsVideoItem::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsVideoItem::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
Qt::AspectRatioMode  PythonQtWrapper_QGraphicsVideoItem::aspectRatioMode(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->aspectRatioMode());
}

QSizeF  PythonQtWrapper_QGraphicsVideoItem::nativeSize(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->nativeSize());
}

QPointF  PythonQtWrapper_QGraphicsVideoItem::offset(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

void PythonQtWrapper_QGraphicsVideoItem::setAspectRatioMode(QGraphicsVideoItem* theWrappedObject, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->setAspectRatioMode(mode));
}

void PythonQtWrapper_QGraphicsVideoItem::setOffset(QGraphicsVideoItem* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->setOffset(offset));
}

void PythonQtWrapper_QGraphicsVideoItem::setSize(QGraphicsVideoItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setSize(size));
}

QSizeF  PythonQtWrapper_QGraphicsVideoItem::size(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QVideoSink*  PythonQtWrapper_QGraphicsVideoItem::videoSink(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->videoSink());
}



PythonQtShell_QImageCapture::~PythonQtShell_QImageCapture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QImageCapture::childEvent(QChildEvent*  event0)
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
  QImageCapture::childEvent(event0);
}
void PythonQtShell_QImageCapture::customEvent(QEvent*  event0)
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
  QImageCapture::customEvent(event0);
}
bool  PythonQtShell_QImageCapture::event(QEvent*  event0)
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
  return QImageCapture::event(event0);
}
bool  PythonQtShell_QImageCapture::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QImageCapture::eventFilter(watched0, event1);
}
void PythonQtShell_QImageCapture::timerEvent(QTimerEvent*  event0)
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
  QImageCapture::timerEvent(event0);
}
QImageCapture* PythonQtWrapper_QImageCapture::new_QImageCapture(QObject*  parent)
{ 
return new PythonQtShell_QImageCapture(parent); }

const QMetaObject* PythonQtShell_QImageCapture::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QImageCapture::staticMetaObject);
  } else {
    return &QImageCapture::staticMetaObject;
  }
}
int PythonQtShell_QImageCapture::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QImageCapture::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QImageCapture::addMetaData(QImageCapture* theWrappedObject, const QMediaMetaData&  metaData)
{
  ( theWrappedObject->addMetaData(metaData));
}

QMediaCaptureSession*  PythonQtWrapper_QImageCapture::captureSession(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->captureSession());
}

QImageCapture::Error  PythonQtWrapper_QImageCapture::error(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QImageCapture::errorString(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QImageCapture::FileFormat  PythonQtWrapper_QImageCapture::fileFormat(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->fileFormat());
}

QString  PythonQtWrapper_QImageCapture::static_QImageCapture_fileFormatDescription(QImageCapture::FileFormat  c)
{
  return (QImageCapture::fileFormatDescription(c));
}

QString  PythonQtWrapper_QImageCapture::static_QImageCapture_fileFormatName(QImageCapture::FileFormat  c)
{
  return (QImageCapture::fileFormatName(c));
}

bool  PythonQtWrapper_QImageCapture::isAvailable(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QImageCapture::isReadyForCapture(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->isReadyForCapture());
}

QMediaMetaData  PythonQtWrapper_QImageCapture::metaData(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->metaData());
}

QImageCapture::Quality  PythonQtWrapper_QImageCapture::quality(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

QSize  PythonQtWrapper_QImageCapture::resolution(QImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

void PythonQtWrapper_QImageCapture::setFileFormat(QImageCapture* theWrappedObject, QImageCapture::FileFormat  format)
{
  ( theWrappedObject->setFileFormat(format));
}

void PythonQtWrapper_QImageCapture::setMetaData(QImageCapture* theWrappedObject, const QMediaMetaData&  metaData)
{
  ( theWrappedObject->setMetaData(metaData));
}

void PythonQtWrapper_QImageCapture::setQuality(QImageCapture* theWrappedObject, QImageCapture::Quality  quality)
{
  ( theWrappedObject->setQuality(quality));
}

void PythonQtWrapper_QImageCapture::setResolution(QImageCapture* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setResolution(arg__1));
}

void PythonQtWrapper_QImageCapture::setResolution(QImageCapture* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setResolution(width, height));
}

QList<QImageCapture::FileFormat >  PythonQtWrapper_QImageCapture::static_QImageCapture_supportedFormats()
{
  return (QImageCapture::supportedFormats());
}



PythonQtShell_QMediaCaptureSession::~PythonQtShell_QMediaCaptureSession() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaCaptureSession::childEvent(QChildEvent*  event0)
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
  QMediaCaptureSession::childEvent(event0);
}
void PythonQtShell_QMediaCaptureSession::customEvent(QEvent*  event0)
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
  QMediaCaptureSession::customEvent(event0);
}
bool  PythonQtShell_QMediaCaptureSession::event(QEvent*  event0)
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
  return QMediaCaptureSession::event(event0);
}
bool  PythonQtShell_QMediaCaptureSession::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaCaptureSession::eventFilter(watched0, event1);
}
void PythonQtShell_QMediaCaptureSession::timerEvent(QTimerEvent*  event0)
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
  QMediaCaptureSession::timerEvent(event0);
}
QMediaCaptureSession* PythonQtWrapper_QMediaCaptureSession::new_QMediaCaptureSession(QObject*  parent)
{ 
return new PythonQtShell_QMediaCaptureSession(parent); }

const QMetaObject* PythonQtShell_QMediaCaptureSession::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaCaptureSession::staticMetaObject);
  } else {
    return &QMediaCaptureSession::staticMetaObject;
  }
}
int PythonQtShell_QMediaCaptureSession::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaCaptureSession::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioBufferInput*  PythonQtWrapper_QMediaCaptureSession::audioBufferInput(QMediaCaptureSession* theWrappedObject) const
{
  return ( theWrappedObject->audioBufferInput());
}

QAudioInput*  PythonQtWrapper_QMediaCaptureSession::audioInput(QMediaCaptureSession* theWrappedObject) const
{
  return ( theWrappedObject->audioInput());
}

QAudioOutput*  PythonQtWrapper_QMediaCaptureSession::audioOutput(QMediaCaptureSession* theWrappedObject) const
{
  return ( theWrappedObject->audioOutput());
}

QCamera*  PythonQtWrapper_QMediaCaptureSession::camera(QMediaCaptureSession* theWrappedObject) const
{
  return ( theWrappedObject->camera());
}

QImageCapture*  PythonQtWrapper_QMediaCaptureSession::imageCapture(QMediaCaptureSession* theWrappedObject)
{
  return ( theWrappedObject->imageCapture());
}

QMediaRecorder*  PythonQtWrapper_QMediaCaptureSession::recorder(QMediaCaptureSession* theWrappedObject)
{
  return ( theWrappedObject->recorder());
}

QScreenCapture*  PythonQtWrapper_QMediaCaptureSession::screenCapture(QMediaCaptureSession* theWrappedObject)
{
  return ( theWrappedObject->screenCapture());
}

void PythonQtWrapper_QMediaCaptureSession::setAudioBufferInput(QMediaCaptureSession* theWrappedObject, QAudioBufferInput*  input)
{
  ( theWrappedObject->setAudioBufferInput(input));
}

void PythonQtWrapper_QMediaCaptureSession::setAudioInput(QMediaCaptureSession* theWrappedObject, QAudioInput*  input)
{
  ( theWrappedObject->setAudioInput(input));
}

void PythonQtWrapper_QMediaCaptureSession::setAudioOutput(QMediaCaptureSession* theWrappedObject, QAudioOutput*  output)
{
  ( theWrappedObject->setAudioOutput(output));
}

void PythonQtWrapper_QMediaCaptureSession::setCamera(QMediaCaptureSession* theWrappedObject, QCamera*  camera)
{
  ( theWrappedObject->setCamera(camera));
}

void PythonQtWrapper_QMediaCaptureSession::setImageCapture(QMediaCaptureSession* theWrappedObject, QImageCapture*  imageCapture)
{
  ( theWrappedObject->setImageCapture(imageCapture));
}

void PythonQtWrapper_QMediaCaptureSession::setRecorder(QMediaCaptureSession* theWrappedObject, QMediaRecorder*  recorder)
{
  ( theWrappedObject->setRecorder(recorder));
}

void PythonQtWrapper_QMediaCaptureSession::setScreenCapture(QMediaCaptureSession* theWrappedObject, QScreenCapture*  screenCapture)
{
  ( theWrappedObject->setScreenCapture(screenCapture));
}

void PythonQtWrapper_QMediaCaptureSession::setVideoFrameInput(QMediaCaptureSession* theWrappedObject, QVideoFrameInput*  input)
{
  ( theWrappedObject->setVideoFrameInput(input));
}

void PythonQtWrapper_QMediaCaptureSession::setVideoOutput(QMediaCaptureSession* theWrappedObject, QObject*  output)
{
  ( theWrappedObject->setVideoOutput(output));
}

void PythonQtWrapper_QMediaCaptureSession::setVideoSink(QMediaCaptureSession* theWrappedObject, QVideoSink*  sink)
{
  ( theWrappedObject->setVideoSink(sink));
}

void PythonQtWrapper_QMediaCaptureSession::setWindowCapture(QMediaCaptureSession* theWrappedObject, QWindowCapture*  windowCapture)
{
  ( theWrappedObject->setWindowCapture(windowCapture));
}

QVideoFrameInput*  PythonQtWrapper_QMediaCaptureSession::videoFrameInput(QMediaCaptureSession* theWrappedObject) const
{
  return ( theWrappedObject->videoFrameInput());
}

QObject*  PythonQtWrapper_QMediaCaptureSession::videoOutput(QMediaCaptureSession* theWrappedObject) const
{
  return ( theWrappedObject->videoOutput());
}

QVideoSink*  PythonQtWrapper_QMediaCaptureSession::videoSink(QMediaCaptureSession* theWrappedObject) const
{
  return ( theWrappedObject->videoSink());
}

QWindowCapture*  PythonQtWrapper_QMediaCaptureSession::windowCapture(QMediaCaptureSession* theWrappedObject)
{
  return ( theWrappedObject->windowCapture());
}



PythonQtShell_QMediaDevices::~PythonQtShell_QMediaDevices() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaDevices::childEvent(QChildEvent*  event0)
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
  QMediaDevices::childEvent(event0);
}
void PythonQtShell_QMediaDevices::connectNotify(const QMetaMethod&  signal0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("connectNotify");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QMetaMethod&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&signal0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMediaDevices::connectNotify(signal0);
}
void PythonQtShell_QMediaDevices::customEvent(QEvent*  event0)
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
  QMediaDevices::customEvent(event0);
}
bool  PythonQtShell_QMediaDevices::event(QEvent*  event0)
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
  return QMediaDevices::event(event0);
}
bool  PythonQtShell_QMediaDevices::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaDevices::eventFilter(watched0, event1);
}
void PythonQtShell_QMediaDevices::timerEvent(QTimerEvent*  event0)
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
  QMediaDevices::timerEvent(event0);
}
QMediaDevices* PythonQtWrapper_QMediaDevices::new_QMediaDevices(QObject*  parent)
{ 
return new PythonQtShell_QMediaDevices(parent); }

const QMetaObject* PythonQtShell_QMediaDevices::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaDevices::staticMetaObject);
  } else {
    return &QMediaDevices::staticMetaObject;
  }
}
int PythonQtShell_QMediaDevices::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaDevices::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QAudioDevice >  PythonQtWrapper_QMediaDevices::static_QMediaDevices_audioInputs()
{
  return (QMediaDevices::audioInputs());
}

QList<QAudioDevice >  PythonQtWrapper_QMediaDevices::static_QMediaDevices_audioOutputs()
{
  return (QMediaDevices::audioOutputs());
}

void PythonQtWrapper_QMediaDevices::connectNotify(QMediaDevices* theWrappedObject, const QMetaMethod&  signal)
{
  ( ((PythonQtPublicPromoter_QMediaDevices*)theWrappedObject)->promoted_connectNotify(signal));
}

QAudioDevice  PythonQtWrapper_QMediaDevices::static_QMediaDevices_defaultAudioInput()
{
  return (QMediaDevices::defaultAudioInput());
}

QAudioDevice  PythonQtWrapper_QMediaDevices::static_QMediaDevices_defaultAudioOutput()
{
  return (QMediaDevices::defaultAudioOutput());
}

QCameraDevice  PythonQtWrapper_QMediaDevices::static_QMediaDevices_defaultVideoInput()
{
  return (QMediaDevices::defaultVideoInput());
}

QList<QCameraDevice >  PythonQtWrapper_QMediaDevices::static_QMediaDevices_videoInputs()
{
  return (QMediaDevices::videoInputs());
}



PythonQtShell_QMediaFormat::~PythonQtShell_QMediaFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMediaFormat* PythonQtWrapper_QMediaFormat::new_QMediaFormat(QMediaFormat::FileFormat  format)
{ 
return new PythonQtShell_QMediaFormat(format); }

QMediaFormat* PythonQtWrapper_QMediaFormat::new_QMediaFormat(const QMediaFormat&  other)
{ 
return new PythonQtShell_QMediaFormat(other); }

QMediaFormat::AudioCodec  PythonQtWrapper_QMediaFormat::audioCodec(QMediaFormat* theWrappedObject) const
{
  return ( theWrappedObject->audioCodec());
}

QString  PythonQtWrapper_QMediaFormat::static_QMediaFormat_audioCodecDescription(QMediaFormat::AudioCodec  codec)
{
  return (QMediaFormat::audioCodecDescription(codec));
}

QString  PythonQtWrapper_QMediaFormat::static_QMediaFormat_audioCodecName(QMediaFormat::AudioCodec  codec)
{
  return (QMediaFormat::audioCodecName(codec));
}

QMediaFormat::FileFormat  PythonQtWrapper_QMediaFormat::fileFormat(QMediaFormat* theWrappedObject) const
{
  return ( theWrappedObject->fileFormat());
}

QString  PythonQtWrapper_QMediaFormat::static_QMediaFormat_fileFormatDescription(QMediaFormat::FileFormat  fileFormat)
{
  return (QMediaFormat::fileFormatDescription(fileFormat));
}

QString  PythonQtWrapper_QMediaFormat::static_QMediaFormat_fileFormatName(QMediaFormat::FileFormat  fileFormat)
{
  return (QMediaFormat::fileFormatName(fileFormat));
}

bool  PythonQtWrapper_QMediaFormat::isSupported(QMediaFormat* theWrappedObject, QMediaFormat::ConversionMode  mode) const
{
  return ( theWrappedObject->isSupported(mode));
}

QMimeType  PythonQtWrapper_QMediaFormat::mimeType(QMediaFormat* theWrappedObject) const
{
  return ( theWrappedObject->mimeType());
}

bool  PythonQtWrapper_QMediaFormat::__ne__(QMediaFormat* theWrappedObject, const QMediaFormat&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QMediaFormat*  PythonQtWrapper_QMediaFormat::operator_assign(QMediaFormat* theWrappedObject, const QMediaFormat&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QMediaFormat::__eq__(QMediaFormat* theWrappedObject, const QMediaFormat&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QMediaFormat::resolveForEncoding(QMediaFormat* theWrappedObject, QMediaFormat::ResolveFlags  flags)
{
  ( theWrappedObject->resolveForEncoding(flags));
}

void PythonQtWrapper_QMediaFormat::setAudioCodec(QMediaFormat* theWrappedObject, QMediaFormat::AudioCodec  codec)
{
  ( theWrappedObject->setAudioCodec(codec));
}

void PythonQtWrapper_QMediaFormat::setFileFormat(QMediaFormat* theWrappedObject, QMediaFormat::FileFormat  f)
{
  ( theWrappedObject->setFileFormat(f));
}

void PythonQtWrapper_QMediaFormat::setVideoCodec(QMediaFormat* theWrappedObject, QMediaFormat::VideoCodec  codec)
{
  ( theWrappedObject->setVideoCodec(codec));
}

QList<QMediaFormat::AudioCodec >  PythonQtWrapper_QMediaFormat::supportedAudioCodecs(QMediaFormat* theWrappedObject, QMediaFormat::ConversionMode  m)
{
  return ( theWrappedObject->supportedAudioCodecs(m));
}

QList<QMediaFormat::FileFormat >  PythonQtWrapper_QMediaFormat::supportedFileFormats(QMediaFormat* theWrappedObject, QMediaFormat::ConversionMode  m)
{
  return ( theWrappedObject->supportedFileFormats(m));
}

QList<QMediaFormat::VideoCodec >  PythonQtWrapper_QMediaFormat::supportedVideoCodecs(QMediaFormat* theWrappedObject, QMediaFormat::ConversionMode  m)
{
  return ( theWrappedObject->supportedVideoCodecs(m));
}

void PythonQtWrapper_QMediaFormat::swap(QMediaFormat* theWrappedObject, QMediaFormat&  other)
{
  ( theWrappedObject->swap(other));
}

QMediaFormat::VideoCodec  PythonQtWrapper_QMediaFormat::videoCodec(QMediaFormat* theWrappedObject) const
{
  return ( theWrappedObject->videoCodec());
}

QString  PythonQtWrapper_QMediaFormat::static_QMediaFormat_videoCodecDescription(QMediaFormat::VideoCodec  codec)
{
  return (QMediaFormat::videoCodecDescription(codec));
}

QString  PythonQtWrapper_QMediaFormat::static_QMediaFormat_videoCodecName(QMediaFormat::VideoCodec  codec)
{
  return (QMediaFormat::videoCodecName(codec));
}



PythonQtShell_QMediaMetaData::~PythonQtShell_QMediaMetaData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMediaMetaData* PythonQtWrapper_QMediaMetaData::new_QMediaMetaData()
{ 
return new PythonQtShell_QMediaMetaData(); }

void PythonQtWrapper_QMediaMetaData::clear(QMediaMetaData* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QMediaMetaData::insert(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k, const QVariant&  value)
{
  ( theWrappedObject->insert(k, value));
}

bool  PythonQtWrapper_QMediaMetaData::isEmpty(QMediaMetaData* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QMetaType  PythonQtWrapper_QMediaMetaData::static_QMediaMetaData_keyType(QMediaMetaData::Key  key)
{
  return (PythonQtPublicPromoter_QMediaMetaData::promoted_keyType(key));
}

QList<QMediaMetaData::Key >  PythonQtWrapper_QMediaMetaData::keys(QMediaMetaData* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

QString  PythonQtWrapper_QMediaMetaData::static_QMediaMetaData_metaDataKeyToString(QMediaMetaData::Key  k)
{
  return (QMediaMetaData::metaDataKeyToString(k));
}

bool  PythonQtWrapper_QMediaMetaData::__ne__(QMediaMetaData* theWrappedObject, const QMediaMetaData&  b)
{
  return ( (*theWrappedObject)!= b);
}

bool  PythonQtWrapper_QMediaMetaData::__eq__(QMediaMetaData* theWrappedObject, const QMediaMetaData&  b)
{
  return ( (*theWrappedObject)== b);
}

QVariant*  PythonQtWrapper_QMediaMetaData::operator_subscript(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k)
{
  return &( (*theWrappedObject)[k]);
}

void PythonQtWrapper_QMediaMetaData::remove(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k)
{
  ( theWrappedObject->remove(k));
}

QString  PythonQtWrapper_QMediaMetaData::stringValue(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k) const
{
  return ( theWrappedObject->stringValue(k));
}

QVariant  PythonQtWrapper_QMediaMetaData::value(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k) const
{
  return ( theWrappedObject->value(k));
}

QString PythonQtWrapper_QMediaMetaData::py_toString(QMediaMetaData* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QMediaPlayer::~PythonQtShell_QMediaPlayer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaPlayer::childEvent(QChildEvent*  event0)
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
  QMediaPlayer::childEvent(event0);
}
void PythonQtShell_QMediaPlayer::customEvent(QEvent*  event0)
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
  QMediaPlayer::customEvent(event0);
}
bool  PythonQtShell_QMediaPlayer::event(QEvent*  event0)
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
  return QMediaPlayer::event(event0);
}
bool  PythonQtShell_QMediaPlayer::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaPlayer::eventFilter(watched0, event1);
}
void PythonQtShell_QMediaPlayer::timerEvent(QTimerEvent*  event0)
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
  QMediaPlayer::timerEvent(event0);
}
QMediaPlayer* PythonQtWrapper_QMediaPlayer::new_QMediaPlayer(QObject*  parent)
{ 
return new PythonQtShell_QMediaPlayer(parent); }

const QMetaObject* PythonQtShell_QMediaPlayer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaPlayer::staticMetaObject);
  } else {
    return &QMediaPlayer::staticMetaObject;
  }
}
int PythonQtShell_QMediaPlayer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaPlayer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QMediaPlayer::activeAudioTrack(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->activeAudioTrack());
}

int  PythonQtWrapper_QMediaPlayer::activeSubtitleTrack(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->activeSubtitleTrack());
}

int  PythonQtWrapper_QMediaPlayer::activeVideoTrack(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->activeVideoTrack());
}

QAudioBufferOutput*  PythonQtWrapper_QMediaPlayer::audioBufferOutput(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->audioBufferOutput());
}

QAudioOutput*  PythonQtWrapper_QMediaPlayer::audioOutput(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->audioOutput());
}

QList<QMediaMetaData >  PythonQtWrapper_QMediaPlayer::audioTracks(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->audioTracks());
}

float  PythonQtWrapper_QMediaPlayer::bufferProgress(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->bufferProgress());
}

QMediaTimeRange  PythonQtWrapper_QMediaPlayer::bufferedTimeRange(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->bufferedTimeRange());
}

qint64  PythonQtWrapper_QMediaPlayer::duration(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QMediaPlayer::Error  PythonQtWrapper_QMediaPlayer::error(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QMediaPlayer::errorString(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QMediaPlayer::hasAudio(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->hasAudio());
}

bool  PythonQtWrapper_QMediaPlayer::hasVideo(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->hasVideo());
}

bool  PythonQtWrapper_QMediaPlayer::isAvailable(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QMediaPlayer::isPlaying(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->isPlaying());
}

bool  PythonQtWrapper_QMediaPlayer::isSeekable(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->isSeekable());
}

int  PythonQtWrapper_QMediaPlayer::loops(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->loops());
}

QMediaPlayer::MediaStatus  PythonQtWrapper_QMediaPlayer::mediaStatus(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->mediaStatus());
}

QMediaMetaData  PythonQtWrapper_QMediaPlayer::metaData(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->metaData());
}

bool  PythonQtWrapper_QMediaPlayer::pitchCompensation(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->pitchCompensation());
}

QMediaPlayer::PitchCompensationAvailability  PythonQtWrapper_QMediaPlayer::pitchCompensationAvailability(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->pitchCompensationAvailability());
}

QPlaybackOptions  PythonQtWrapper_QMediaPlayer::playbackOptions(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->playbackOptions());
}

qreal  PythonQtWrapper_QMediaPlayer::playbackRate(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->playbackRate());
}

QMediaPlayer::PlaybackState  PythonQtWrapper_QMediaPlayer::playbackState(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->playbackState());
}

qint64  PythonQtWrapper_QMediaPlayer::position(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QMediaPlayer::setActiveAudioTrack(QMediaPlayer* theWrappedObject, int  index)
{
  ( theWrappedObject->setActiveAudioTrack(index));
}

void PythonQtWrapper_QMediaPlayer::setActiveSubtitleTrack(QMediaPlayer* theWrappedObject, int  index)
{
  ( theWrappedObject->setActiveSubtitleTrack(index));
}

void PythonQtWrapper_QMediaPlayer::setActiveVideoTrack(QMediaPlayer* theWrappedObject, int  index)
{
  ( theWrappedObject->setActiveVideoTrack(index));
}

void PythonQtWrapper_QMediaPlayer::setAudioBufferOutput(QMediaPlayer* theWrappedObject, QAudioBufferOutput*  output)
{
  ( theWrappedObject->setAudioBufferOutput(output));
}

void PythonQtWrapper_QMediaPlayer::setAudioOutput(QMediaPlayer* theWrappedObject, QAudioOutput*  output)
{
  ( theWrappedObject->setAudioOutput(output));
}

void PythonQtWrapper_QMediaPlayer::setLoops(QMediaPlayer* theWrappedObject, int  loops)
{
  ( theWrappedObject->setLoops(loops));
}

void PythonQtWrapper_QMediaPlayer::setVideoOutput(QMediaPlayer* theWrappedObject, QObject*  arg__1)
{
  ( theWrappedObject->setVideoOutput(arg__1));
}

void PythonQtWrapper_QMediaPlayer::setVideoSink(QMediaPlayer* theWrappedObject, QVideoSink*  sink)
{
  ( theWrappedObject->setVideoSink(sink));
}

QUrl  PythonQtWrapper_QMediaPlayer::source(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->source());
}

const QIODevice*  PythonQtWrapper_QMediaPlayer::sourceDevice(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->sourceDevice());
}

QList<QMediaMetaData >  PythonQtWrapper_QMediaPlayer::subtitleTracks(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->subtitleTracks());
}

QObject*  PythonQtWrapper_QMediaPlayer::videoOutput(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->videoOutput());
}

QVideoSink*  PythonQtWrapper_QMediaPlayer::videoSink(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->videoSink());
}

QList<QMediaMetaData >  PythonQtWrapper_QMediaPlayer::videoTracks(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->videoTracks());
}



PythonQtShell_QMediaRecorder::~PythonQtShell_QMediaRecorder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaRecorder::childEvent(QChildEvent*  event0)
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
  QMediaRecorder::childEvent(event0);
}
void PythonQtShell_QMediaRecorder::customEvent(QEvent*  event0)
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
  QMediaRecorder::customEvent(event0);
}
bool  PythonQtShell_QMediaRecorder::event(QEvent*  event0)
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
  return QMediaRecorder::event(event0);
}
bool  PythonQtShell_QMediaRecorder::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaRecorder::eventFilter(watched0, event1);
}
void PythonQtShell_QMediaRecorder::timerEvent(QTimerEvent*  event0)
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
  QMediaRecorder::timerEvent(event0);
}
QMediaRecorder* PythonQtWrapper_QMediaRecorder::new_QMediaRecorder(QObject*  parent)
{ 
return new PythonQtShell_QMediaRecorder(parent); }

const QMetaObject* PythonQtShell_QMediaRecorder::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaRecorder::staticMetaObject);
  } else {
    return &QMediaRecorder::staticMetaObject;
  }
}
int PythonQtShell_QMediaRecorder::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaRecorder::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QUrl  PythonQtWrapper_QMediaRecorder::actualLocation(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->actualLocation());
}

void PythonQtWrapper_QMediaRecorder::addMetaData(QMediaRecorder* theWrappedObject, const QMediaMetaData&  metaData)
{
  ( theWrappedObject->addMetaData(metaData));
}

int  PythonQtWrapper_QMediaRecorder::audioBitRate(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioBitRate());
}

int  PythonQtWrapper_QMediaRecorder::audioChannelCount(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioChannelCount());
}

int  PythonQtWrapper_QMediaRecorder::audioSampleRate(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioSampleRate());
}

bool  PythonQtWrapper_QMediaRecorder::autoStop(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->autoStop());
}

QMediaCaptureSession*  PythonQtWrapper_QMediaRecorder::captureSession(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->captureSession());
}

qint64  PythonQtWrapper_QMediaRecorder::duration(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QMediaRecorder::EncodingMode  PythonQtWrapper_QMediaRecorder::encodingMode(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->encodingMode());
}

QMediaRecorder::Error  PythonQtWrapper_QMediaRecorder::error(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QMediaRecorder::errorString(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QMediaRecorder::isAvailable(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

QMediaFormat  PythonQtWrapper_QMediaRecorder::mediaFormat(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->mediaFormat());
}

QMediaMetaData  PythonQtWrapper_QMediaRecorder::metaData(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->metaData());
}

QIODevice*  PythonQtWrapper_QMediaRecorder::outputDevice(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->outputDevice());
}

QUrl  PythonQtWrapper_QMediaRecorder::outputLocation(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->outputLocation());
}

QMediaRecorder::Quality  PythonQtWrapper_QMediaRecorder::quality(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

QMediaRecorder::RecorderState  PythonQtWrapper_QMediaRecorder::recorderState(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->recorderState());
}

void PythonQtWrapper_QMediaRecorder::setAudioBitRate(QMediaRecorder* theWrappedObject, int  bitRate)
{
  ( theWrappedObject->setAudioBitRate(bitRate));
}

void PythonQtWrapper_QMediaRecorder::setAudioChannelCount(QMediaRecorder* theWrappedObject, int  channels)
{
  ( theWrappedObject->setAudioChannelCount(channels));
}

void PythonQtWrapper_QMediaRecorder::setAudioSampleRate(QMediaRecorder* theWrappedObject, int  sampleRate)
{
  ( theWrappedObject->setAudioSampleRate(sampleRate));
}

void PythonQtWrapper_QMediaRecorder::setAutoStop(QMediaRecorder* theWrappedObject, bool  autoStop)
{
  ( theWrappedObject->setAutoStop(autoStop));
}

void PythonQtWrapper_QMediaRecorder::setEncodingMode(QMediaRecorder* theWrappedObject, QMediaRecorder::EncodingMode  arg__1)
{
  ( theWrappedObject->setEncodingMode(arg__1));
}

void PythonQtWrapper_QMediaRecorder::setMediaFormat(QMediaRecorder* theWrappedObject, const QMediaFormat&  format)
{
  ( theWrappedObject->setMediaFormat(format));
}

void PythonQtWrapper_QMediaRecorder::setMetaData(QMediaRecorder* theWrappedObject, const QMediaMetaData&  metaData)
{
  ( theWrappedObject->setMetaData(metaData));
}

void PythonQtWrapper_QMediaRecorder::setOutputDevice(QMediaRecorder* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setOutputDevice(device));
}

void PythonQtWrapper_QMediaRecorder::setOutputLocation(QMediaRecorder* theWrappedObject, const QUrl&  location)
{
  ( theWrappedObject->setOutputLocation(location));
}

void PythonQtWrapper_QMediaRecorder::setQuality(QMediaRecorder* theWrappedObject, QMediaRecorder::Quality  quality)
{
  ( theWrappedObject->setQuality(quality));
}

void PythonQtWrapper_QMediaRecorder::setVideoBitRate(QMediaRecorder* theWrappedObject, int  bitRate)
{
  ( theWrappedObject->setVideoBitRate(bitRate));
}

void PythonQtWrapper_QMediaRecorder::setVideoFrameRate(QMediaRecorder* theWrappedObject, qreal  frameRate)
{
  ( theWrappedObject->setVideoFrameRate(frameRate));
}

void PythonQtWrapper_QMediaRecorder::setVideoResolution(QMediaRecorder* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setVideoResolution(arg__1));
}

void PythonQtWrapper_QMediaRecorder::setVideoResolution(QMediaRecorder* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setVideoResolution(width, height));
}

int  PythonQtWrapper_QMediaRecorder::videoBitRate(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->videoBitRate());
}

qreal  PythonQtWrapper_QMediaRecorder::videoFrameRate(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->videoFrameRate());
}

QSize  PythonQtWrapper_QMediaRecorder::videoResolution(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->videoResolution());
}



QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange()
{ 
return new QMediaTimeRange(); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(const QMediaTimeRange&  range)
{ 
return new QMediaTimeRange(range); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(const QMediaTimeRange::Interval&  arg__1)
{ 
return new QMediaTimeRange(arg__1); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(qint64  start, qint64  end)
{ 
return new QMediaTimeRange(start, end); }

void PythonQtWrapper_QMediaTimeRange::addInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  interval)
{
  ( theWrappedObject->addInterval(interval));
}

void PythonQtWrapper_QMediaTimeRange::addInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end)
{
  ( theWrappedObject->addInterval(start, end));
}

void PythonQtWrapper_QMediaTimeRange::addTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  ( theWrappedObject->addTimeRange(arg__1));
}

void PythonQtWrapper_QMediaTimeRange::clear(QMediaTimeRange* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QMediaTimeRange::contains(QMediaTimeRange* theWrappedObject, qint64  time) const
{
  return ( theWrappedObject->contains(time));
}

qint64  PythonQtWrapper_QMediaTimeRange::earliestTime(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->earliestTime());
}

QList<QMediaTimeRange::Interval >  PythonQtWrapper_QMediaTimeRange::intervals(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->intervals());
}

bool  PythonQtWrapper_QMediaTimeRange::isContinuous(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->isContinuous());
}

bool  PythonQtWrapper_QMediaTimeRange::isEmpty(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

qint64  PythonQtWrapper_QMediaTimeRange::latestTime(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->latestTime());
}

bool  PythonQtWrapper_QMediaTimeRange::__ne__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QMediaTimeRange  PythonQtWrapper_QMediaTimeRange::__add__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  r2)
{
  return ( (*theWrappedObject)+ r2);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QMediaTimeRange  PythonQtWrapper_QMediaTimeRange::__sub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  r2)
{
  return ( (*theWrappedObject)- r2);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QMediaTimeRange::__eq__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QMediaTimeRange::removeInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  interval)
{
  ( theWrappedObject->removeInterval(interval));
}

void PythonQtWrapper_QMediaTimeRange::removeInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end)
{
  ( theWrappedObject->removeInterval(start, end));
}

void PythonQtWrapper_QMediaTimeRange::removeTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  ( theWrappedObject->removeTimeRange(arg__1));
}

void PythonQtWrapper_QMediaTimeRange::swap(QMediaTimeRange* theWrappedObject, QMediaTimeRange&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QMediaTimeRange::py_toString(QMediaTimeRange* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QMediaTimeRange::Interval* PythonQtWrapper_QMediaTimeRange__Interval::new_QMediaTimeRange__Interval()
{ 
return new QMediaTimeRange::Interval(); }

QMediaTimeRange::Interval* PythonQtWrapper_QMediaTimeRange__Interval::new_QMediaTimeRange__Interval(qint64  start, qint64  end)
{ 
return new QMediaTimeRange::Interval(start, end); }

bool  PythonQtWrapper_QMediaTimeRange__Interval::contains(QMediaTimeRange::Interval* theWrappedObject, qint64  time) const
{
  return ( theWrappedObject->contains(time));
}

qint64  PythonQtWrapper_QMediaTimeRange__Interval::end(QMediaTimeRange::Interval* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

bool  PythonQtWrapper_QMediaTimeRange__Interval::isNormal(QMediaTimeRange::Interval* theWrappedObject) const
{
  return ( theWrappedObject->isNormal());
}

QMediaTimeRange::Interval  PythonQtWrapper_QMediaTimeRange__Interval::normalized(QMediaTimeRange::Interval* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

qint64  PythonQtWrapper_QMediaTimeRange__Interval::start(QMediaTimeRange::Interval* theWrappedObject) const
{
  return ( theWrappedObject->start());
}

QMediaTimeRange::Interval  PythonQtWrapper_QMediaTimeRange__Interval::translated(QMediaTimeRange::Interval* theWrappedObject, qint64  offset) const
{
  return ( theWrappedObject->translated(offset));
}

QString PythonQtWrapper_QMediaTimeRange__Interval::py_toString(QMediaTimeRange::Interval* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QPlaybackOptions* PythonQtWrapper_QPlaybackOptions::new_QPlaybackOptions()
{ 
return new QPlaybackOptions(); }

QPlaybackOptions* PythonQtWrapper_QPlaybackOptions::new_QPlaybackOptions(const QPlaybackOptions&  arg__1)
{ 
return new QPlaybackOptions(arg__1); }

bool  PythonQtWrapper_QPlaybackOptions::__ne__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QPlaybackOptions::__lt__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QPlaybackOptions::__le__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

QPlaybackOptions*  PythonQtWrapper_QPlaybackOptions::operator_assign(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QPlaybackOptions::__eq__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QPlaybackOptions::__gt__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QPlaybackOptions::__ge__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

QPlaybackOptions::PlaybackIntent  PythonQtWrapper_QPlaybackOptions::playbackIntent(QPlaybackOptions* theWrappedObject) const
{
  return ( theWrappedObject->playbackIntent());
}

qsizetype  PythonQtWrapper_QPlaybackOptions::probeSize(QPlaybackOptions* theWrappedObject) const
{
  return ( theWrappedObject->probeSize());
}

void PythonQtWrapper_QPlaybackOptions::resetNetworkTimeout(QPlaybackOptions* theWrappedObject)
{
  ( theWrappedObject->resetNetworkTimeout());
}

void PythonQtWrapper_QPlaybackOptions::resetPlaybackIntent(QPlaybackOptions* theWrappedObject)
{
  ( theWrappedObject->resetPlaybackIntent());
}

void PythonQtWrapper_QPlaybackOptions::resetProbeSize(QPlaybackOptions* theWrappedObject)
{
  ( theWrappedObject->resetProbeSize());
}

void PythonQtWrapper_QPlaybackOptions::setPlaybackIntent(QPlaybackOptions* theWrappedObject, QPlaybackOptions::PlaybackIntent  intent)
{
  ( theWrappedObject->setPlaybackIntent(intent));
}

void PythonQtWrapper_QPlaybackOptions::setProbeSize(QPlaybackOptions* theWrappedObject, qsizetype  probeSizeBytes)
{
  ( theWrappedObject->setProbeSize(probeSizeBytes));
}

void PythonQtWrapper_QPlaybackOptions::swap(QPlaybackOptions* theWrappedObject, QPlaybackOptions&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QScreenCapture::~PythonQtShell_QScreenCapture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QScreenCapture::childEvent(QChildEvent*  event0)
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
  QScreenCapture::childEvent(event0);
}
void PythonQtShell_QScreenCapture::customEvent(QEvent*  event0)
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
  QScreenCapture::customEvent(event0);
}
bool  PythonQtShell_QScreenCapture::event(QEvent*  event0)
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
  return QScreenCapture::event(event0);
}
bool  PythonQtShell_QScreenCapture::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QScreenCapture::eventFilter(watched0, event1);
}
void PythonQtShell_QScreenCapture::timerEvent(QTimerEvent*  event0)
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
  QScreenCapture::timerEvent(event0);
}
QScreenCapture* PythonQtWrapper_QScreenCapture::new_QScreenCapture(QObject*  parent)
{ 
return new PythonQtShell_QScreenCapture(parent); }

const QMetaObject* PythonQtShell_QScreenCapture::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QScreenCapture::staticMetaObject);
  } else {
    return &QScreenCapture::staticMetaObject;
  }
}
int PythonQtShell_QScreenCapture::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QScreenCapture::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QMediaCaptureSession*  PythonQtWrapper_QScreenCapture::captureSession(QScreenCapture* theWrappedObject) const
{
  return ( theWrappedObject->captureSession());
}

QScreenCapture::Error  PythonQtWrapper_QScreenCapture::error(QScreenCapture* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QScreenCapture::errorString(QScreenCapture* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QScreenCapture::isActive(QScreenCapture* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

QScreen*  PythonQtWrapper_QScreenCapture::screen(QScreenCapture* theWrappedObject) const
{
  return ( theWrappedObject->screen());
}

void PythonQtWrapper_QScreenCapture::setScreen(QScreenCapture* theWrappedObject, QScreen*  screen)
{
  ( theWrappedObject->setScreen(screen));
}



PythonQtShell_QSoundEffect::~PythonQtShell_QSoundEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSoundEffect::childEvent(QChildEvent*  event0)
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
  QSoundEffect::childEvent(event0);
}
void PythonQtShell_QSoundEffect::customEvent(QEvent*  event0)
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
  QSoundEffect::customEvent(event0);
}
bool  PythonQtShell_QSoundEffect::event(QEvent*  event0)
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
  return QSoundEffect::event(event0);
}
bool  PythonQtShell_QSoundEffect::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QSoundEffect::eventFilter(watched0, event1);
}
void PythonQtShell_QSoundEffect::timerEvent(QTimerEvent*  event0)
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
  QSoundEffect::timerEvent(event0);
}
QSoundEffect* PythonQtWrapper_QSoundEffect::new_QSoundEffect(QObject*  parent)
{ 
return new PythonQtShell_QSoundEffect(parent); }

QSoundEffect* PythonQtWrapper_QSoundEffect::new_QSoundEffect(const QAudioDevice&  audioDevice, QObject*  parent)
{ 
return new PythonQtShell_QSoundEffect(audioDevice, parent); }

const QMetaObject* PythonQtShell_QSoundEffect::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSoundEffect::staticMetaObject);
  } else {
    return &QSoundEffect::staticMetaObject;
  }
}
int PythonQtShell_QSoundEffect::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSoundEffect::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioDevice  PythonQtWrapper_QSoundEffect::audioDevice(QSoundEffect* theWrappedObject)
{
  return ( theWrappedObject->audioDevice());
}

bool  PythonQtWrapper_QSoundEffect::isLoaded(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isLoaded());
}

bool  PythonQtWrapper_QSoundEffect::isMuted(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

bool  PythonQtWrapper_QSoundEffect::isPlaying(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isPlaying());
}

int  PythonQtWrapper_QSoundEffect::loopCount(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QSoundEffect::loopsRemaining(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->loopsRemaining());
}

void PythonQtWrapper_QSoundEffect::setAudioDevice(QSoundEffect* theWrappedObject, const QAudioDevice&  device)
{
  ( theWrappedObject->setAudioDevice(device));
}

void PythonQtWrapper_QSoundEffect::setLoopCount(QSoundEffect* theWrappedObject, int  loopCount)
{
  ( theWrappedObject->setLoopCount(loopCount));
}

void PythonQtWrapper_QSoundEffect::setMuted(QSoundEffect* theWrappedObject, bool  muted)
{
  ( theWrappedObject->setMuted(muted));
}

void PythonQtWrapper_QSoundEffect::setSource(QSoundEffect* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setSource(url));
}

void PythonQtWrapper_QSoundEffect::setVolume(QSoundEffect* theWrappedObject, float  volume)
{
  ( theWrappedObject->setVolume(volume));
}

QUrl  PythonQtWrapper_QSoundEffect::source(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->source());
}

QSoundEffect::Status  PythonQtWrapper_QSoundEffect::status(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QStringList  PythonQtWrapper_QSoundEffect::static_QSoundEffect_supportedMimeTypes()
{
  return (QSoundEffect::supportedMimeTypes());
}

float  PythonQtWrapper_QSoundEffect::volume(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame()
{ 
return new QVideoFrame(); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(const QImage&  image)
{ 
return new QVideoFrame(image); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(const QVideoFrame&  other)
{ 
return new QVideoFrame(other); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(const QVideoFrameFormat&  format)
{ 
return new QVideoFrame(format); }

uchar*  PythonQtWrapper_QVideoFrame::bits(QVideoFrame* theWrappedObject, int  plane)
{
  return ( theWrappedObject->bits(plane));
}

const uchar*  PythonQtWrapper_QVideoFrame::bits(QVideoFrame* theWrappedObject, int  plane) const
{
  return ( theWrappedObject->bits(plane));
}

int  PythonQtWrapper_QVideoFrame::bytesPerLine(QVideoFrame* theWrappedObject, int  plane) const
{
  return ( theWrappedObject->bytesPerLine(plane));
}

qint64  PythonQtWrapper_QVideoFrame::endTime(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->endTime());
}

QVideoFrame::HandleType  PythonQtWrapper_QVideoFrame::handleType(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->handleType());
}

int  PythonQtWrapper_QVideoFrame::height(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QVideoFrame::isMapped(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isMapped());
}

bool  PythonQtWrapper_QVideoFrame::isReadable(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QVideoFrame::isValid(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QVideoFrame::isWritable(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

bool  PythonQtWrapper_QVideoFrame::map(QVideoFrame* theWrappedObject, QVideoFrame::MapMode  mode)
{
  return ( theWrappedObject->map(mode));
}

QVideoFrame::MapMode  PythonQtWrapper_QVideoFrame::mapMode(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->mapMode());
}

int  PythonQtWrapper_QVideoFrame::mappedBytes(QVideoFrame* theWrappedObject, int  plane) const
{
  return ( theWrappedObject->mappedBytes(plane));
}

bool  PythonQtWrapper_QVideoFrame::mirrored(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->mirrored());
}

bool  PythonQtWrapper_QVideoFrame::__ne__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QVideoFrame*  PythonQtWrapper_QVideoFrame::operator_assign(QVideoFrame* theWrappedObject, const QVideoFrame&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QVideoFrame::__eq__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QVideoFrame::paint(QVideoFrame* theWrappedObject, QPainter*  painter, const QRectF&  rect, const QVideoFrame::PaintOptions&  options)
{
  ( theWrappedObject->paint(painter, rect, options));
}

QVideoFrameFormat::PixelFormat  PythonQtWrapper_QVideoFrame::pixelFormat(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->pixelFormat());
}

int  PythonQtWrapper_QVideoFrame::planeCount(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->planeCount());
}

QVideoFrame::RotationAngle  PythonQtWrapper_QVideoFrame::rotationAngle(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->rotationAngle());
}

void PythonQtWrapper_QVideoFrame::setEndTime(QVideoFrame* theWrappedObject, qint64  time)
{
  ( theWrappedObject->setEndTime(time));
}

void PythonQtWrapper_QVideoFrame::setMirrored(QVideoFrame* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setMirrored(arg__1));
}

void PythonQtWrapper_QVideoFrame::setRotationAngle(QVideoFrame* theWrappedObject, QVideoFrame::RotationAngle  angle)
{
  ( theWrappedObject->setRotationAngle(angle));
}

void PythonQtWrapper_QVideoFrame::setStartTime(QVideoFrame* theWrappedObject, qint64  time)
{
  ( theWrappedObject->setStartTime(time));
}

void PythonQtWrapper_QVideoFrame::setStreamFrameRate(QVideoFrame* theWrappedObject, qreal  rate)
{
  ( theWrappedObject->setStreamFrameRate(rate));
}

void PythonQtWrapper_QVideoFrame::setSubtitleText(QVideoFrame* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setSubtitleText(text));
}

QSize  PythonQtWrapper_QVideoFrame::size(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

qint64  PythonQtWrapper_QVideoFrame::startTime(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->startTime());
}

qreal  PythonQtWrapper_QVideoFrame::streamFrameRate(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->streamFrameRate());
}

QString  PythonQtWrapper_QVideoFrame::subtitleText(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->subtitleText());
}

QVideoFrameFormat  PythonQtWrapper_QVideoFrame::surfaceFormat(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->surfaceFormat());
}

void PythonQtWrapper_QVideoFrame::swap(QVideoFrame* theWrappedObject, QVideoFrame&  other)
{
  ( theWrappedObject->swap(other));
}

QImage  PythonQtWrapper_QVideoFrame::toImage(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->toImage());
}

void PythonQtWrapper_QVideoFrame::unmap(QVideoFrame* theWrappedObject)
{
  ( theWrappedObject->unmap());
}

int  PythonQtWrapper_QVideoFrame::width(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QString PythonQtWrapper_QVideoFrame::py_toString(QVideoFrame* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QVideoFrameFormat::~PythonQtShell_QVideoFrameFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QVideoFrameFormat* PythonQtWrapper_QVideoFrameFormat::new_QVideoFrameFormat()
{ 
return new PythonQtShell_QVideoFrameFormat(); }

QVideoFrameFormat* PythonQtWrapper_QVideoFrameFormat::new_QVideoFrameFormat(const QSize&  size, QVideoFrameFormat::PixelFormat  pixelFormat)
{ 
return new PythonQtShell_QVideoFrameFormat(size, pixelFormat); }

QVideoFrameFormat* PythonQtWrapper_QVideoFrameFormat::new_QVideoFrameFormat(const QVideoFrameFormat&  format)
{ 
return new PythonQtShell_QVideoFrameFormat(format); }

QVideoFrameFormat::ColorRange  PythonQtWrapper_QVideoFrameFormat::colorRange(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->colorRange());
}

QVideoFrameFormat::ColorSpace  PythonQtWrapper_QVideoFrameFormat::colorSpace(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->colorSpace());
}

QVideoFrameFormat::ColorTransfer  PythonQtWrapper_QVideoFrameFormat::colorTransfer(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->colorTransfer());
}

QString  PythonQtWrapper_QVideoFrameFormat::fragmentShaderFileName(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->fragmentShaderFileName());
}

int  PythonQtWrapper_QVideoFrameFormat::frameHeight(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->frameHeight());
}

qreal  PythonQtWrapper_QVideoFrameFormat::frameRate(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->frameRate());
}

QSize  PythonQtWrapper_QVideoFrameFormat::frameSize(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->frameSize());
}

int  PythonQtWrapper_QVideoFrameFormat::frameWidth(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->frameWidth());
}

QImage::Format  PythonQtWrapper_QVideoFrameFormat::static_QVideoFrameFormat_imageFormatFromPixelFormat(QVideoFrameFormat::PixelFormat  format)
{
  return (QVideoFrameFormat::imageFormatFromPixelFormat(format));
}

bool  PythonQtWrapper_QVideoFrameFormat::isMirrored(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->isMirrored());
}

bool  PythonQtWrapper_QVideoFrameFormat::isValid(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

float  PythonQtWrapper_QVideoFrameFormat::maxLuminance(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->maxLuminance());
}

bool  PythonQtWrapper_QVideoFrameFormat::__ne__(QVideoFrameFormat* theWrappedObject, const QVideoFrameFormat&  format) const
{
  return ( (*theWrappedObject)!= format);
}

QVideoFrameFormat*  PythonQtWrapper_QVideoFrameFormat::operator_assign(QVideoFrameFormat* theWrappedObject, const QVideoFrameFormat&  format)
{
  return &( (*theWrappedObject)= format);
}

bool  PythonQtWrapper_QVideoFrameFormat::__eq__(QVideoFrameFormat* theWrappedObject, const QVideoFrameFormat&  format) const
{
  return ( (*theWrappedObject)== format);
}

QVideoFrameFormat::PixelFormat  PythonQtWrapper_QVideoFrameFormat::pixelFormat(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->pixelFormat());
}

QVideoFrameFormat::PixelFormat  PythonQtWrapper_QVideoFrameFormat::static_QVideoFrameFormat_pixelFormatFromImageFormat(QImage::Format  format)
{
  return (QVideoFrameFormat::pixelFormatFromImageFormat(format));
}

QString  PythonQtWrapper_QVideoFrameFormat::static_QVideoFrameFormat_pixelFormatToString(QVideoFrameFormat::PixelFormat  pixelFormat)
{
  return (QVideoFrameFormat::pixelFormatToString(pixelFormat));
}

int  PythonQtWrapper_QVideoFrameFormat::planeCount(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->planeCount());
}

QVideoFrameFormat::Direction  PythonQtWrapper_QVideoFrameFormat::scanLineDirection(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->scanLineDirection());
}

void PythonQtWrapper_QVideoFrameFormat::setColorRange(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::ColorRange  range)
{
  ( theWrappedObject->setColorRange(range));
}

void PythonQtWrapper_QVideoFrameFormat::setColorSpace(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::ColorSpace  colorSpace)
{
  ( theWrappedObject->setColorSpace(colorSpace));
}

void PythonQtWrapper_QVideoFrameFormat::setColorTransfer(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::ColorTransfer  colorTransfer)
{
  ( theWrappedObject->setColorTransfer(colorTransfer));
}

void PythonQtWrapper_QVideoFrameFormat::setFrameRate(QVideoFrameFormat* theWrappedObject, qreal  rate)
{
  ( theWrappedObject->setFrameRate(rate));
}

void PythonQtWrapper_QVideoFrameFormat::setFrameSize(QVideoFrameFormat* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setFrameSize(size));
}

void PythonQtWrapper_QVideoFrameFormat::setFrameSize(QVideoFrameFormat* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setFrameSize(width, height));
}

void PythonQtWrapper_QVideoFrameFormat::setMaxLuminance(QVideoFrameFormat* theWrappedObject, float  lum)
{
  ( theWrappedObject->setMaxLuminance(lum));
}

void PythonQtWrapper_QVideoFrameFormat::setMirrored(QVideoFrameFormat* theWrappedObject, bool  mirrored)
{
  ( theWrappedObject->setMirrored(mirrored));
}

void PythonQtWrapper_QVideoFrameFormat::setScanLineDirection(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::Direction  direction)
{
  ( theWrappedObject->setScanLineDirection(direction));
}

void PythonQtWrapper_QVideoFrameFormat::setStreamFrameRate(QVideoFrameFormat* theWrappedObject, qreal  rate)
{
  ( theWrappedObject->setStreamFrameRate(rate));
}

void PythonQtWrapper_QVideoFrameFormat::setViewport(QVideoFrameFormat* theWrappedObject, const QRect&  viewport)
{
  ( theWrappedObject->setViewport(viewport));
}

void PythonQtWrapper_QVideoFrameFormat::setYCbCrColorSpace(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::YCbCrColorSpace  colorSpace)
{
  ( theWrappedObject->setYCbCrColorSpace(colorSpace));
}

qreal  PythonQtWrapper_QVideoFrameFormat::streamFrameRate(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->streamFrameRate());
}

void PythonQtWrapper_QVideoFrameFormat::swap(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat&  other)
{
  ( theWrappedObject->swap(other));
}

void PythonQtWrapper_QVideoFrameFormat::updateUniformData(QVideoFrameFormat* theWrappedObject, QByteArray*  dst, const QVideoFrame&  frame, const QMatrix4x4&  transform, float  opacity) const
{
  ( theWrappedObject->updateUniformData(dst, frame, transform, opacity));
}

QString  PythonQtWrapper_QVideoFrameFormat::vertexShaderFileName(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->vertexShaderFileName());
}

QRect  PythonQtWrapper_QVideoFrameFormat::viewport(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->viewport());
}

QVideoFrameFormat::YCbCrColorSpace  PythonQtWrapper_QVideoFrameFormat::yCbCrColorSpace(QVideoFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->yCbCrColorSpace());
}

QString PythonQtWrapper_QVideoFrameFormat::py_toString(QVideoFrameFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}


