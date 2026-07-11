#include "com_trolltech_qt_multimedia1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <QtMultimedia/qcapturablewindow.h>
#include <QtMultimedia/qmediacapturesession.h>
#include <QtMultimedia/qvideoframe.h>
#include <QtMultimedia/qvideoframeformat.h>
#include <QtMultimedia/qvideosink.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qwidget.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qthread.h>
#include <qwindow.h>

PythonQtShell_QVideoFrameInput::~PythonQtShell_QVideoFrameInput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVideoFrameInput::childEvent(QChildEvent*  event0)
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
  QVideoFrameInput::childEvent(event0);
}
void PythonQtShell_QVideoFrameInput::customEvent(QEvent*  event0)
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
  QVideoFrameInput::customEvent(event0);
}
bool  PythonQtShell_QVideoFrameInput::event(QEvent*  event0)
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
  return QVideoFrameInput::event(event0);
}
bool  PythonQtShell_QVideoFrameInput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QVideoFrameInput::eventFilter(watched0, event1);
}
void PythonQtShell_QVideoFrameInput::timerEvent(QTimerEvent*  event0)
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
  QVideoFrameInput::timerEvent(event0);
}
QVideoFrameInput* PythonQtWrapper_QVideoFrameInput::new_QVideoFrameInput(QObject*  parent)
{ 
return new PythonQtShell_QVideoFrameInput(parent); }

QVideoFrameInput* PythonQtWrapper_QVideoFrameInput::new_QVideoFrameInput(const QVideoFrameFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QVideoFrameInput(format, parent); }

const QMetaObject* PythonQtShell_QVideoFrameInput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVideoFrameInput::staticMetaObject);
  } else {
    return &QVideoFrameInput::staticMetaObject;
  }
}
int PythonQtShell_QVideoFrameInput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVideoFrameInput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QMediaCaptureSession*  PythonQtWrapper_QVideoFrameInput::captureSession(QVideoFrameInput* theWrappedObject) const
{
  return ( theWrappedObject->captureSession());
}

QVideoFrameFormat  PythonQtWrapper_QVideoFrameInput::format(QVideoFrameInput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QVideoFrameInput::sendVideoFrame(QVideoFrameInput* theWrappedObject, const QVideoFrame&  frame)
{
  return ( theWrappedObject->sendVideoFrame(frame));
}



PythonQtShell_QVideoFrame__PaintOptions::~PythonQtShell_QVideoFrame__PaintOptions() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QVideoFrame::PaintOptions* PythonQtWrapper_QVideoFrame__PaintOptions::new_QVideoFrame__PaintOptions()
{ 
return new PythonQtShell_QVideoFrame__PaintOptions(); }



PythonQtShell_QVideoSink::~PythonQtShell_QVideoSink() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVideoSink::childEvent(QChildEvent*  event0)
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
  QVideoSink::childEvent(event0);
}
void PythonQtShell_QVideoSink::customEvent(QEvent*  event0)
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
  QVideoSink::customEvent(event0);
}
bool  PythonQtShell_QVideoSink::event(QEvent*  event0)
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
  return QVideoSink::event(event0);
}
bool  PythonQtShell_QVideoSink::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QVideoSink::eventFilter(watched0, event1);
}
void PythonQtShell_QVideoSink::timerEvent(QTimerEvent*  event0)
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
  QVideoSink::timerEvent(event0);
}
QVideoSink* PythonQtWrapper_QVideoSink::new_QVideoSink(QObject*  parent)
{ 
return new PythonQtShell_QVideoSink(parent); }

const QMetaObject* PythonQtShell_QVideoSink::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVideoSink::staticMetaObject);
  } else {
    return &QVideoSink::staticMetaObject;
  }
}
int PythonQtShell_QVideoSink::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVideoSink::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QVideoSink::setSubtitleText(QVideoSink* theWrappedObject, const QString&  subtitle)
{
  ( theWrappedObject->setSubtitleText(subtitle));
}

void PythonQtWrapper_QVideoSink::setVideoFrame(QVideoSink* theWrappedObject, const QVideoFrame&  frame)
{
  ( theWrappedObject->setVideoFrame(frame));
}

QString  PythonQtWrapper_QVideoSink::subtitleText(QVideoSink* theWrappedObject) const
{
  return ( theWrappedObject->subtitleText());
}

QVideoFrame  PythonQtWrapper_QVideoSink::videoFrame(QVideoSink* theWrappedObject) const
{
  return ( theWrappedObject->videoFrame());
}

QSize  PythonQtWrapper_QVideoSink::videoSize(QVideoSink* theWrappedObject) const
{
  return ( theWrappedObject->videoSize());
}



PythonQtShell_QVideoWidget::~PythonQtShell_QVideoWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVideoWidget::actionEvent(QActionEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("actionEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QActionEvent*"};
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
  QVideoWidget::actionEvent(event0);
}
void PythonQtShell_QVideoWidget::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("changeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
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
  QVideoWidget::changeEvent(arg__1);
}
void PythonQtShell_QVideoWidget::childEvent(QChildEvent*  event0)
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
  QVideoWidget::childEvent(event0);
}
void PythonQtShell_QVideoWidget::closeEvent(QCloseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("closeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCloseEvent*"};
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
  QVideoWidget::closeEvent(event0);
}
void PythonQtShell_QVideoWidget::contextMenuEvent(QContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QVideoWidget::contextMenuEvent(event0);
}
void PythonQtShell_QVideoWidget::customEvent(QEvent*  event0)
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
  QVideoWidget::customEvent(event0);
}
int  PythonQtShell_QVideoWidget::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("devType");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
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
  return QVideoWidget::devType();
}
void PythonQtShell_QVideoWidget::dragEnterEvent(QDragEnterEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QVideoWidget::dragEnterEvent(event0);
}
void PythonQtShell_QVideoWidget::dragLeaveEvent(QDragLeaveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QVideoWidget::dragLeaveEvent(event0);
}
void PythonQtShell_QVideoWidget::dragMoveEvent(QDragMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QVideoWidget::dragMoveEvent(event0);
}
void PythonQtShell_QVideoWidget::dropEvent(QDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QVideoWidget::dropEvent(event0);
}
void PythonQtShell_QVideoWidget::enterEvent(QEnterEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("enterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEnterEvent*"};
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
  QVideoWidget::enterEvent(event0);
}
bool  PythonQtShell_QVideoWidget::event(QEvent*  event0)
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
  return QVideoWidget::event(event0);
}
bool  PythonQtShell_QVideoWidget::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QVideoWidget::eventFilter(watched0, event1);
}
void PythonQtShell_QVideoWidget::focusInEvent(QFocusEvent*  event0)
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
  QVideoWidget::focusInEvent(event0);
}
bool  PythonQtShell_QVideoWidget::focusNextPrevChild(bool  next0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusNextPrevChild");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&next0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
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
  return QVideoWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QVideoWidget::focusOutEvent(QFocusEvent*  event0)
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
  QVideoWidget::focusOutEvent(event0);
}
bool  PythonQtShell_QVideoWidget::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hasHeightForWidth");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("hasHeightForWidth", methodInfo, result);
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
  return QVideoWidget::hasHeightForWidth();
}
int  PythonQtShell_QVideoWidget::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
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
  return QVideoWidget::heightForWidth(arg__1);
}
void PythonQtShell_QVideoWidget::hideEvent(QHideEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hideEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QHideEvent*"};
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
  QVideoWidget::hideEvent(event0);
}
void PythonQtShell_QVideoWidget::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&painter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVideoWidget::initPainter(painter0);
}
void PythonQtShell_QVideoWidget::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("inputMethodEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QInputMethodEvent*"};
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
  QVideoWidget::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QVideoWidget::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
      void* args[2] = {nullptr, (void*)&arg__1};
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
  return QVideoWidget::inputMethodQuery(arg__1);
}
void PythonQtShell_QVideoWidget::keyPressEvent(QKeyEvent*  event0)
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
  QVideoWidget::keyPressEvent(event0);
}
void PythonQtShell_QVideoWidget::keyReleaseEvent(QKeyEvent*  event0)
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
  QVideoWidget::keyReleaseEvent(event0);
}
void PythonQtShell_QVideoWidget::leaveEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("leaveEvent");
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
  QVideoWidget::leaveEvent(event0);
}
int  PythonQtShell_QVideoWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
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
  return QVideoWidget::metric(arg__1);
}
QSize  PythonQtShell_QVideoWidget::minimumSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("minimumSizeHint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumSizeHint", methodInfo, result);
          } else {
            returnValue = *((QSize*)args[0]);
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
  return QVideoWidget::minimumSizeHint();
}
void PythonQtShell_QVideoWidget::mouseDoubleClickEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QVideoWidget::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QVideoWidget::mouseMoveEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QVideoWidget::mouseMoveEvent(event0);
}
void PythonQtShell_QVideoWidget::mousePressEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QVideoWidget::mousePressEvent(event0);
}
void PythonQtShell_QVideoWidget::mouseReleaseEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QVideoWidget::mouseReleaseEvent(event0);
}
void PythonQtShell_QVideoWidget::moveEvent(QMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("moveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMoveEvent*"};
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
  QVideoWidget::moveEvent(event0);
}
bool  PythonQtShell_QVideoWidget::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("nativeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "qintptr*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&eventType0, (void*)&message1, (void*)&result2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("nativeEvent", methodInfo, result);
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
  return QVideoWidget::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QVideoWidget::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEngine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintEngine*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
          } else {
            returnValue = *((QPaintEngine**)args[0]);
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
  return QVideoWidget::paintEngine();
}
void PythonQtShell_QVideoWidget::paintEvent(QPaintEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
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
  QVideoWidget::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QVideoWidget::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("redirected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue{};
      void* args[2] = {nullptr, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
          } else {
            returnValue = *((QPaintDevice**)args[0]);
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
  return QVideoWidget::redirected(offset0);
}
void PythonQtShell_QVideoWidget::resizeEvent(QResizeEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resizeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QResizeEvent*"};
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
  QVideoWidget::resizeEvent(event0);
}
void PythonQtShell_QVideoWidget::setVisible(bool  visible0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setVisible");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&visible0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVideoWidget::setVisible(visible0);
}
QPainter*  PythonQtShell_QVideoWidget::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sharedPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
          } else {
            returnValue = *((QPainter**)args[0]);
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
  return QVideoWidget::sharedPainter();
}
void PythonQtShell_QVideoWidget::showEvent(QShowEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("showEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QShowEvent*"};
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
  QVideoWidget::showEvent(event0);
}
QSize  PythonQtShell_QVideoWidget::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sizeHint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
          } else {
            returnValue = *((QSize*)args[0]);
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
  return QVideoWidget::sizeHint();
}
void PythonQtShell_QVideoWidget::tabletEvent(QTabletEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("tabletEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QVideoWidget::tabletEvent(event0);
}
void PythonQtShell_QVideoWidget::timerEvent(QTimerEvent*  event0)
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
  QVideoWidget::timerEvent(event0);
}
void PythonQtShell_QVideoWidget::wheelEvent(QWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWheelEvent*"};
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
  QVideoWidget::wheelEvent(event0);
}
QVideoWidget* PythonQtWrapper_QVideoWidget::new_QVideoWidget(QWidget*  parent)
{ 
return new PythonQtShell_QVideoWidget(parent); }

const QMetaObject* PythonQtShell_QVideoWidget::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVideoWidget::staticMetaObject);
  } else {
    return &QVideoWidget::staticMetaObject;
  }
}
int PythonQtShell_QVideoWidget::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVideoWidget::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
Qt::AspectRatioMode  PythonQtWrapper_QVideoWidget::aspectRatioMode(QVideoWidget* theWrappedObject) const
{
  return ( theWrappedObject->aspectRatioMode());
}

QVideoSink*  PythonQtWrapper_QVideoWidget::videoSink(QVideoWidget* theWrappedObject) const
{
  return ( theWrappedObject->videoSink());
}



PythonQtShell_QWindowCapture::~PythonQtShell_QWindowCapture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWindowCapture::childEvent(QChildEvent*  event0)
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
  QWindowCapture::childEvent(event0);
}
void PythonQtShell_QWindowCapture::customEvent(QEvent*  event0)
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
  QWindowCapture::customEvent(event0);
}
bool  PythonQtShell_QWindowCapture::event(QEvent*  event0)
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
  return QWindowCapture::event(event0);
}
bool  PythonQtShell_QWindowCapture::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QWindowCapture::eventFilter(watched0, event1);
}
void PythonQtShell_QWindowCapture::timerEvent(QTimerEvent*  event0)
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
  QWindowCapture::timerEvent(event0);
}
QWindowCapture* PythonQtWrapper_QWindowCapture::new_QWindowCapture(QObject*  parent)
{ 
return new PythonQtShell_QWindowCapture(parent); }

const QMetaObject* PythonQtShell_QWindowCapture::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWindowCapture::staticMetaObject);
  } else {
    return &QWindowCapture::staticMetaObject;
  }
}
int PythonQtShell_QWindowCapture::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWindowCapture::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QCapturableWindow >  PythonQtWrapper_QWindowCapture::static_QWindowCapture_capturableWindows()
{
  return (QWindowCapture::capturableWindows());
}

QMediaCaptureSession*  PythonQtWrapper_QWindowCapture::captureSession(QWindowCapture* theWrappedObject) const
{
  return ( theWrappedObject->captureSession());
}

QWindowCapture::Error  PythonQtWrapper_QWindowCapture::error(QWindowCapture* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QWindowCapture::errorString(QWindowCapture* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QWindowCapture::isActive(QWindowCapture* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

void PythonQtWrapper_QWindowCapture::setWindow(QWindowCapture* theWrappedObject, QCapturableWindow  window)
{
  ( theWrappedObject->setWindow(window));
}

QCapturableWindow  PythonQtWrapper_QWindowCapture::window(QWindowCapture* theWrappedObject) const
{
  return ( theWrappedObject->window());
}


