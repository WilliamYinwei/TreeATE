#include "com_trolltech_qt_gui5.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QColor>
#include <QImage>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVariant>
#include <QtWidgets/qabstractbutton.h>
#include <QtWidgets/qabstractitemdelegate.h>
#include <QtWidgets/qcheckbox.h>
#include <QtWidgets/qcompleter.h>
#include <QtWidgets/qdockwidget.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qlayoutitem.h>
#include <QtWidgets/qlistwidget.h>
#include <QtWidgets/qmdiarea.h>
#include <QtWidgets/qmdisubwindow.h>
#include <QtWidgets/qmenu.h>
#include <QtWidgets/qmenubar.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qscrollbar.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qstatusbar.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qstyleoption.h>
#include <QtWidgets/qtoolbar.h>
#include <QtWidgets/qwidget.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qeventpoint.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputdevice.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qmovie.h>
#include <qnamespace.h>
#include <qobject.h>
#include <qopenglbuffer.h>
#include <qopenglcontext.h>
#include <qopenglframebufferobject.h>
#include <qopenglshaderprogram.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpointingdevice.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsurface.h>
#include <qsurfaceformat.h>
#include <qthread.h>
#include <qtransform.h>
#include <qvalidator.h>
#include <qvectornd.h>
#include <qwindow.h>

PythonQtShell_QKeySequenceEdit::~PythonQtShell_QKeySequenceEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QKeySequenceEdit::actionEvent(QActionEvent*  event0)
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
  QKeySequenceEdit::actionEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::changeEvent(QEvent*  arg__1)
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
  QKeySequenceEdit::changeEvent(arg__1);
}
void PythonQtShell_QKeySequenceEdit::childEvent(QChildEvent*  event0)
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
  QKeySequenceEdit::childEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::closeEvent(QCloseEvent*  event0)
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
  QKeySequenceEdit::closeEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::contextMenuEvent(QContextMenuEvent*  event0)
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
  QKeySequenceEdit::contextMenuEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::customEvent(QEvent*  event0)
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
  QKeySequenceEdit::customEvent(event0);
}
int  PythonQtShell_QKeySequenceEdit::devType() const
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
  return QKeySequenceEdit::devType();
}
void PythonQtShell_QKeySequenceEdit::dragEnterEvent(QDragEnterEvent*  event0)
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
  QKeySequenceEdit::dragEnterEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QKeySequenceEdit::dragLeaveEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::dragMoveEvent(QDragMoveEvent*  event0)
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
  QKeySequenceEdit::dragMoveEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::dropEvent(QDropEvent*  event0)
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
  QKeySequenceEdit::dropEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::enterEvent(QEnterEvent*  event0)
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
  QKeySequenceEdit::enterEvent(event0);
}
bool  PythonQtShell_QKeySequenceEdit::event(QEvent*  arg__1)
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
  return QKeySequenceEdit::event(arg__1);
}
bool  PythonQtShell_QKeySequenceEdit::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QKeySequenceEdit::eventFilter(watched0, event1);
}
void PythonQtShell_QKeySequenceEdit::focusInEvent(QFocusEvent*  event0)
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
  QKeySequenceEdit::focusInEvent(event0);
}
bool  PythonQtShell_QKeySequenceEdit::focusNextPrevChild(bool  next0)
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
  return QKeySequenceEdit::focusNextPrevChild(next0);
}
void PythonQtShell_QKeySequenceEdit::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QKeySequenceEdit::focusOutEvent(arg__1);
}
bool  PythonQtShell_QKeySequenceEdit::hasHeightForWidth() const
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
  return QKeySequenceEdit::hasHeightForWidth();
}
int  PythonQtShell_QKeySequenceEdit::heightForWidth(int  arg__1) const
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
  return QKeySequenceEdit::heightForWidth(arg__1);
}
void PythonQtShell_QKeySequenceEdit::hideEvent(QHideEvent*  event0)
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
  QKeySequenceEdit::hideEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::initPainter(QPainter*  painter0) const
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
  QKeySequenceEdit::initPainter(painter0);
}
void PythonQtShell_QKeySequenceEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QKeySequenceEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QKeySequenceEdit::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QKeySequenceEdit::inputMethodQuery(arg__1);
}
void PythonQtShell_QKeySequenceEdit::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QKeySequenceEdit::keyPressEvent(arg__1);
}
void PythonQtShell_QKeySequenceEdit::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QKeySequenceEdit::keyReleaseEvent(arg__1);
}
void PythonQtShell_QKeySequenceEdit::leaveEvent(QEvent*  event0)
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
  QKeySequenceEdit::leaveEvent(event0);
}
int  PythonQtShell_QKeySequenceEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QKeySequenceEdit::metric(arg__1);
}
QSize  PythonQtShell_QKeySequenceEdit::minimumSizeHint() const
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
  return QKeySequenceEdit::minimumSizeHint();
}
void PythonQtShell_QKeySequenceEdit::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QKeySequenceEdit::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::mouseMoveEvent(QMouseEvent*  event0)
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
  QKeySequenceEdit::mouseMoveEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::mousePressEvent(QMouseEvent*  event0)
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
  QKeySequenceEdit::mousePressEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::mouseReleaseEvent(QMouseEvent*  event0)
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
  QKeySequenceEdit::mouseReleaseEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::moveEvent(QMoveEvent*  event0)
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
  QKeySequenceEdit::moveEvent(event0);
}
bool  PythonQtShell_QKeySequenceEdit::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QKeySequenceEdit::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QKeySequenceEdit::paintEngine() const
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
  return QKeySequenceEdit::paintEngine();
}
void PythonQtShell_QKeySequenceEdit::paintEvent(QPaintEvent*  event0)
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
  QKeySequenceEdit::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QKeySequenceEdit::redirected(QPoint*  offset0) const
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
  return QKeySequenceEdit::redirected(offset0);
}
void PythonQtShell_QKeySequenceEdit::resizeEvent(QResizeEvent*  event0)
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
  QKeySequenceEdit::resizeEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::setVisible(bool  visible0)
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
  QKeySequenceEdit::setVisible(visible0);
}
QPainter*  PythonQtShell_QKeySequenceEdit::sharedPainter() const
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
  return QKeySequenceEdit::sharedPainter();
}
void PythonQtShell_QKeySequenceEdit::showEvent(QShowEvent*  event0)
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
  QKeySequenceEdit::showEvent(event0);
}
QSize  PythonQtShell_QKeySequenceEdit::sizeHint() const
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
  return QKeySequenceEdit::sizeHint();
}
void PythonQtShell_QKeySequenceEdit::tabletEvent(QTabletEvent*  event0)
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
  QKeySequenceEdit::tabletEvent(event0);
}
void PythonQtShell_QKeySequenceEdit::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QKeySequenceEdit::timerEvent(arg__1);
}
void PythonQtShell_QKeySequenceEdit::wheelEvent(QWheelEvent*  event0)
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
  QKeySequenceEdit::wheelEvent(event0);
}
QKeySequenceEdit* PythonQtWrapper_QKeySequenceEdit::new_QKeySequenceEdit(QWidget*  parent)
{ 
return new PythonQtShell_QKeySequenceEdit(parent); }

QKeySequenceEdit* PythonQtWrapper_QKeySequenceEdit::new_QKeySequenceEdit(const QKeySequence&  keySequence, QWidget*  parent)
{ 
return new PythonQtShell_QKeySequenceEdit(keySequence, parent); }

const QMetaObject* PythonQtShell_QKeySequenceEdit::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QKeySequenceEdit::staticMetaObject);
  } else {
    return &QKeySequenceEdit::staticMetaObject;
  }
}
int PythonQtShell_QKeySequenceEdit::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QKeySequenceEdit::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QKeyCombination >  PythonQtWrapper_QKeySequenceEdit::finishingKeyCombinations(QKeySequenceEdit* theWrappedObject) const
{
  return ( theWrappedObject->finishingKeyCombinations());
}

bool  PythonQtWrapper_QKeySequenceEdit::isClearButtonEnabled(QKeySequenceEdit* theWrappedObject) const
{
  return ( theWrappedObject->isClearButtonEnabled());
}

QKeySequence  PythonQtWrapper_QKeySequenceEdit::keySequence(QKeySequenceEdit* theWrappedObject) const
{
  return ( theWrappedObject->keySequence());
}

qsizetype  PythonQtWrapper_QKeySequenceEdit::maximumSequenceLength(QKeySequenceEdit* theWrappedObject) const
{
  return ( theWrappedObject->maximumSequenceLength());
}

void PythonQtWrapper_QKeySequenceEdit::setClearButtonEnabled(QKeySequenceEdit* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setClearButtonEnabled(enable));
}

void PythonQtWrapper_QKeySequenceEdit::setFinishingKeyCombinations(QKeySequenceEdit* theWrappedObject, const QList<QKeyCombination >&  finishingKeyCombinations)
{
  ( theWrappedObject->setFinishingKeyCombinations(finishingKeyCombinations));
}



PythonQtShell_QLCDNumber::~PythonQtShell_QLCDNumber() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QLCDNumber::actionEvent(QActionEvent*  event0)
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
  QLCDNumber::actionEvent(event0);
}
void PythonQtShell_QLCDNumber::changeEvent(QEvent*  arg__1)
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
  QLCDNumber::changeEvent(arg__1);
}
void PythonQtShell_QLCDNumber::childEvent(QChildEvent*  event0)
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
  QLCDNumber::childEvent(event0);
}
void PythonQtShell_QLCDNumber::closeEvent(QCloseEvent*  event0)
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
  QLCDNumber::closeEvent(event0);
}
void PythonQtShell_QLCDNumber::contextMenuEvent(QContextMenuEvent*  event0)
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
  QLCDNumber::contextMenuEvent(event0);
}
void PythonQtShell_QLCDNumber::customEvent(QEvent*  event0)
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
  QLCDNumber::customEvent(event0);
}
int  PythonQtShell_QLCDNumber::devType() const
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
  return QLCDNumber::devType();
}
void PythonQtShell_QLCDNumber::dragEnterEvent(QDragEnterEvent*  event0)
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
  QLCDNumber::dragEnterEvent(event0);
}
void PythonQtShell_QLCDNumber::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QLCDNumber::dragLeaveEvent(event0);
}
void PythonQtShell_QLCDNumber::dragMoveEvent(QDragMoveEvent*  event0)
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
  QLCDNumber::dragMoveEvent(event0);
}
void PythonQtShell_QLCDNumber::dropEvent(QDropEvent*  event0)
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
  QLCDNumber::dropEvent(event0);
}
void PythonQtShell_QLCDNumber::enterEvent(QEnterEvent*  event0)
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
  QLCDNumber::enterEvent(event0);
}
bool  PythonQtShell_QLCDNumber::event(QEvent*  e0)
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
      void* args[2] = {nullptr, (void*)&e0};
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
  return QLCDNumber::event(e0);
}
bool  PythonQtShell_QLCDNumber::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QLCDNumber::eventFilter(watched0, event1);
}
void PythonQtShell_QLCDNumber::focusInEvent(QFocusEvent*  event0)
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
  QLCDNumber::focusInEvent(event0);
}
bool  PythonQtShell_QLCDNumber::focusNextPrevChild(bool  next0)
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
  return QLCDNumber::focusNextPrevChild(next0);
}
void PythonQtShell_QLCDNumber::focusOutEvent(QFocusEvent*  event0)
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
  QLCDNumber::focusOutEvent(event0);
}
bool  PythonQtShell_QLCDNumber::hasHeightForWidth() const
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
  return QLCDNumber::hasHeightForWidth();
}
int  PythonQtShell_QLCDNumber::heightForWidth(int  arg__1) const
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
  return QLCDNumber::heightForWidth(arg__1);
}
void PythonQtShell_QLCDNumber::hideEvent(QHideEvent*  event0)
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
  QLCDNumber::hideEvent(event0);
}
void PythonQtShell_QLCDNumber::initPainter(QPainter*  painter0) const
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
  QLCDNumber::initPainter(painter0);
}
void PythonQtShell_QLCDNumber::initStyleOption(QStyleOptionFrame*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initStyleOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionFrame*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLCDNumber::initStyleOption(option0);
}
void PythonQtShell_QLCDNumber::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QLCDNumber::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QLCDNumber::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QLCDNumber::inputMethodQuery(arg__1);
}
void PythonQtShell_QLCDNumber::keyPressEvent(QKeyEvent*  event0)
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
  QLCDNumber::keyPressEvent(event0);
}
void PythonQtShell_QLCDNumber::keyReleaseEvent(QKeyEvent*  event0)
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
  QLCDNumber::keyReleaseEvent(event0);
}
void PythonQtShell_QLCDNumber::leaveEvent(QEvent*  event0)
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
  QLCDNumber::leaveEvent(event0);
}
int  PythonQtShell_QLCDNumber::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QLCDNumber::metric(arg__1);
}
QSize  PythonQtShell_QLCDNumber::minimumSizeHint() const
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
  return QLCDNumber::minimumSizeHint();
}
void PythonQtShell_QLCDNumber::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QLCDNumber::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QLCDNumber::mouseMoveEvent(QMouseEvent*  event0)
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
  QLCDNumber::mouseMoveEvent(event0);
}
void PythonQtShell_QLCDNumber::mousePressEvent(QMouseEvent*  event0)
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
  QLCDNumber::mousePressEvent(event0);
}
void PythonQtShell_QLCDNumber::mouseReleaseEvent(QMouseEvent*  event0)
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
  QLCDNumber::mouseReleaseEvent(event0);
}
void PythonQtShell_QLCDNumber::moveEvent(QMoveEvent*  event0)
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
  QLCDNumber::moveEvent(event0);
}
bool  PythonQtShell_QLCDNumber::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QLCDNumber::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QLCDNumber::paintEngine() const
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
  return QLCDNumber::paintEngine();
}
void PythonQtShell_QLCDNumber::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
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
  QLCDNumber::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QLCDNumber::redirected(QPoint*  offset0) const
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
  return QLCDNumber::redirected(offset0);
}
void PythonQtShell_QLCDNumber::resizeEvent(QResizeEvent*  event0)
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
  QLCDNumber::resizeEvent(event0);
}
void PythonQtShell_QLCDNumber::setVisible(bool  visible0)
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
  QLCDNumber::setVisible(visible0);
}
QPainter*  PythonQtShell_QLCDNumber::sharedPainter() const
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
  return QLCDNumber::sharedPainter();
}
void PythonQtShell_QLCDNumber::showEvent(QShowEvent*  event0)
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
  QLCDNumber::showEvent(event0);
}
QSize  PythonQtShell_QLCDNumber::sizeHint() const
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
  return QLCDNumber::sizeHint();
}
void PythonQtShell_QLCDNumber::tabletEvent(QTabletEvent*  event0)
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
  QLCDNumber::tabletEvent(event0);
}
void PythonQtShell_QLCDNumber::timerEvent(QTimerEvent*  event0)
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
  QLCDNumber::timerEvent(event0);
}
void PythonQtShell_QLCDNumber::wheelEvent(QWheelEvent*  event0)
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
  QLCDNumber::wheelEvent(event0);
}
QLCDNumber* PythonQtWrapper_QLCDNumber::new_QLCDNumber(QWidget*  parent)
{ 
return new PythonQtShell_QLCDNumber(parent); }

QLCDNumber* PythonQtWrapper_QLCDNumber::new_QLCDNumber(uint  numDigits, QWidget*  parent)
{ 
return new PythonQtShell_QLCDNumber(numDigits, parent); }

const QMetaObject* PythonQtShell_QLCDNumber::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLCDNumber::staticMetaObject);
  } else {
    return &QLCDNumber::staticMetaObject;
  }
}
int PythonQtShell_QLCDNumber::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLCDNumber::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QLCDNumber::checkOverflow(QLCDNumber* theWrappedObject, double  num) const
{
  return ( theWrappedObject->checkOverflow(num));
}

bool  PythonQtWrapper_QLCDNumber::checkOverflow(QLCDNumber* theWrappedObject, int  num) const
{
  return ( theWrappedObject->checkOverflow(num));
}

int  PythonQtWrapper_QLCDNumber::digitCount(QLCDNumber* theWrappedObject) const
{
  return ( theWrappedObject->digitCount());
}

int  PythonQtWrapper_QLCDNumber::intValue(QLCDNumber* theWrappedObject) const
{
  return ( theWrappedObject->intValue());
}

QLCDNumber::Mode  PythonQtWrapper_QLCDNumber::mode(QLCDNumber* theWrappedObject) const
{
  return ( theWrappedObject->mode());
}

QLCDNumber::SegmentStyle  PythonQtWrapper_QLCDNumber::segmentStyle(QLCDNumber* theWrappedObject) const
{
  return ( theWrappedObject->segmentStyle());
}

void PythonQtWrapper_QLCDNumber::setDigitCount(QLCDNumber* theWrappedObject, int  nDigits)
{
  ( theWrappedObject->setDigitCount(nDigits));
}

void PythonQtWrapper_QLCDNumber::setMode(QLCDNumber* theWrappedObject, QLCDNumber::Mode  arg__1)
{
  ( theWrappedObject->setMode(arg__1));
}

void PythonQtWrapper_QLCDNumber::setSegmentStyle(QLCDNumber* theWrappedObject, QLCDNumber::SegmentStyle  arg__1)
{
  ( theWrappedObject->setSegmentStyle(arg__1));
}

bool  PythonQtWrapper_QLCDNumber::smallDecimalPoint(QLCDNumber* theWrappedObject) const
{
  return ( theWrappedObject->smallDecimalPoint());
}

double  PythonQtWrapper_QLCDNumber::value(QLCDNumber* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



PythonQtShell_QLabel::~PythonQtShell_QLabel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QLabel::actionEvent(QActionEvent*  event0)
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
  QLabel::actionEvent(event0);
}
void PythonQtShell_QLabel::changeEvent(QEvent*  arg__1)
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
  QLabel::changeEvent(arg__1);
}
void PythonQtShell_QLabel::childEvent(QChildEvent*  event0)
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
  QLabel::childEvent(event0);
}
void PythonQtShell_QLabel::closeEvent(QCloseEvent*  event0)
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
  QLabel::closeEvent(event0);
}
void PythonQtShell_QLabel::contextMenuEvent(QContextMenuEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLabel::contextMenuEvent(ev0);
}
void PythonQtShell_QLabel::customEvent(QEvent*  event0)
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
  QLabel::customEvent(event0);
}
int  PythonQtShell_QLabel::devType() const
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
  return QLabel::devType();
}
void PythonQtShell_QLabel::dragEnterEvent(QDragEnterEvent*  event0)
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
  QLabel::dragEnterEvent(event0);
}
void PythonQtShell_QLabel::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QLabel::dragLeaveEvent(event0);
}
void PythonQtShell_QLabel::dragMoveEvent(QDragMoveEvent*  event0)
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
  QLabel::dragMoveEvent(event0);
}
void PythonQtShell_QLabel::dropEvent(QDropEvent*  event0)
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
  QLabel::dropEvent(event0);
}
void PythonQtShell_QLabel::enterEvent(QEnterEvent*  event0)
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
  QLabel::enterEvent(event0);
}
bool  PythonQtShell_QLabel::event(QEvent*  e0)
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
      void* args[2] = {nullptr, (void*)&e0};
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
  return QLabel::event(e0);
}
bool  PythonQtShell_QLabel::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QLabel::eventFilter(watched0, event1);
}
void PythonQtShell_QLabel::focusInEvent(QFocusEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusInEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLabel::focusInEvent(ev0);
}
bool  PythonQtShell_QLabel::focusNextPrevChild(bool  next0)
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
  return QLabel::focusNextPrevChild(next0);
}
void PythonQtShell_QLabel::focusOutEvent(QFocusEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLabel::focusOutEvent(ev0);
}
bool  PythonQtShell_QLabel::hasHeightForWidth() const
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
  return QLabel::hasHeightForWidth();
}
int  PythonQtShell_QLabel::heightForWidth(int  arg__1) const
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
  return QLabel::heightForWidth(arg__1);
}
void PythonQtShell_QLabel::hideEvent(QHideEvent*  event0)
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
  QLabel::hideEvent(event0);
}
void PythonQtShell_QLabel::initPainter(QPainter*  painter0) const
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
  QLabel::initPainter(painter0);
}
void PythonQtShell_QLabel::initStyleOption(QStyleOptionFrame*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initStyleOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionFrame*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLabel::initStyleOption(option0);
}
void PythonQtShell_QLabel::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QLabel::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QLabel::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QLabel::inputMethodQuery(arg__1);
}
void PythonQtShell_QLabel::keyPressEvent(QKeyEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLabel::keyPressEvent(ev0);
}
void PythonQtShell_QLabel::keyReleaseEvent(QKeyEvent*  event0)
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
  QLabel::keyReleaseEvent(event0);
}
void PythonQtShell_QLabel::leaveEvent(QEvent*  event0)
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
  QLabel::leaveEvent(event0);
}
int  PythonQtShell_QLabel::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QLabel::metric(arg__1);
}
QSize  PythonQtShell_QLabel::minimumSizeHint() const
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
  return QLabel::minimumSizeHint();
}
void PythonQtShell_QLabel::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QLabel::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QLabel::mouseMoveEvent(QMouseEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLabel::mouseMoveEvent(ev0);
}
void PythonQtShell_QLabel::mousePressEvent(QMouseEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLabel::mousePressEvent(ev0);
}
void PythonQtShell_QLabel::mouseReleaseEvent(QMouseEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLabel::mouseReleaseEvent(ev0);
}
void PythonQtShell_QLabel::moveEvent(QMoveEvent*  event0)
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
  QLabel::moveEvent(event0);
}
bool  PythonQtShell_QLabel::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QLabel::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QLabel::paintEngine() const
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
  return QLabel::paintEngine();
}
void PythonQtShell_QLabel::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
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
  QLabel::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QLabel::redirected(QPoint*  offset0) const
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
  return QLabel::redirected(offset0);
}
void PythonQtShell_QLabel::resizeEvent(QResizeEvent*  event0)
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
  QLabel::resizeEvent(event0);
}
void PythonQtShell_QLabel::setVisible(bool  visible0)
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
  QLabel::setVisible(visible0);
}
QPainter*  PythonQtShell_QLabel::sharedPainter() const
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
  return QLabel::sharedPainter();
}
void PythonQtShell_QLabel::showEvent(QShowEvent*  event0)
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
  QLabel::showEvent(event0);
}
QSize  PythonQtShell_QLabel::sizeHint() const
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
  return QLabel::sizeHint();
}
void PythonQtShell_QLabel::tabletEvent(QTabletEvent*  event0)
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
  QLabel::tabletEvent(event0);
}
void PythonQtShell_QLabel::timerEvent(QTimerEvent*  event0)
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
  QLabel::timerEvent(event0);
}
void PythonQtShell_QLabel::wheelEvent(QWheelEvent*  event0)
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
  QLabel::wheelEvent(event0);
}
QLabel* PythonQtWrapper_QLabel::new_QLabel(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QLabel(parent, f); }

QLabel* PythonQtWrapper_QLabel::new_QLabel(const QString&  text, QWidget*  parent, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QLabel(text, parent, f); }

const QMetaObject* PythonQtShell_QLabel::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLabel::staticMetaObject);
  } else {
    return &QLabel::staticMetaObject;
  }
}
int PythonQtShell_QLabel::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLabel::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
Qt::Alignment  PythonQtWrapper_QLabel::alignment(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QWidget*  PythonQtWrapper_QLabel::buddy(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->buddy());
}

bool  PythonQtWrapper_QLabel::hasScaledContents(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->hasScaledContents());
}

bool  PythonQtWrapper_QLabel::hasSelectedText(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->hasSelectedText());
}

int  PythonQtWrapper_QLabel::indent(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->indent());
}

int  PythonQtWrapper_QLabel::margin(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->margin());
}

QMovie*  PythonQtWrapper_QLabel::movie(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->movie());
}

bool  PythonQtWrapper_QLabel::openExternalLinks(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

QPicture  PythonQtWrapper_QLabel::picture(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->picture());
}

QPixmap  PythonQtWrapper_QLabel::pixmap(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->pixmap());
}

QString  PythonQtWrapper_QLabel::selectedText(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

int  PythonQtWrapper_QLabel::selectionStart(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->selectionStart());
}

void PythonQtWrapper_QLabel::setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1)
{
  ( theWrappedObject->setAlignment(arg__1));
}

void PythonQtWrapper_QLabel::setBuddy(QLabel* theWrappedObject, QWidget*  arg__1)
{
  ( theWrappedObject->setBuddy(arg__1));
}

void PythonQtWrapper_QLabel::setIndent(QLabel* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setIndent(arg__1));
}

void PythonQtWrapper_QLabel::setMargin(QLabel* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setMargin(arg__1));
}

void PythonQtWrapper_QLabel::setOpenExternalLinks(QLabel* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenExternalLinks(open));
}

void PythonQtWrapper_QLabel::setScaledContents(QLabel* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setScaledContents(arg__1));
}

void PythonQtWrapper_QLabel::setSelection(QLabel* theWrappedObject, int  arg__1, int  arg__2)
{
  ( theWrappedObject->setSelection(arg__1, arg__2));
}

void PythonQtWrapper_QLabel::setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1)
{
  ( theWrappedObject->setTextFormat(arg__1));
}

void PythonQtWrapper_QLabel::setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QLabel::setWordWrap(QLabel* theWrappedObject, bool  on)
{
  ( theWrappedObject->setWordWrap(on));
}

QString  PythonQtWrapper_QLabel::text(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

Qt::TextFormat  PythonQtWrapper_QLabel::textFormat(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->textFormat());
}

Qt::TextInteractionFlags  PythonQtWrapper_QLabel::textInteractionFlags(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

bool  PythonQtWrapper_QLabel::wordWrap(QLabel* theWrappedObject) const
{
  return ( theWrappedObject->wordWrap());
}



PythonQtShell_QLayout::~PythonQtShell_QLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QLayout::addItem(QLayoutItem*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("addItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QLayoutItem*"};
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
void PythonQtShell_QLayout::childEvent(QChildEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLayout::childEvent(e0);
}
QSizePolicy::ControlTypes  PythonQtShell_QLayout::controlTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("controlTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSizePolicy::ControlTypes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizePolicy::ControlTypes returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("controlTypes", methodInfo, result);
          } else {
            returnValue = *((QSizePolicy::ControlTypes*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayout::controlTypes();
}
int  PythonQtShell_QLayout::count() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("count");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("count", methodInfo, result);
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
  return int();
}
void PythonQtShell_QLayout::customEvent(QEvent*  event0)
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
  QLayout::customEvent(event0);
}
bool  PythonQtShell_QLayout::event(QEvent*  event0)
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
  return QLayout::event(event0);
}
bool  PythonQtShell_QLayout::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QLayout::eventFilter(watched0, event1);
}
Qt::Orientations  PythonQtShell_QLayout::expandingDirections() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("expandingDirections");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::Orientations"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::Orientations returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("expandingDirections", methodInfo, result);
          } else {
            returnValue = *((Qt::Orientations*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayout::expandingDirections();
}
QRect  PythonQtShell_QLayout::geometry() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("geometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRect"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("geometry", methodInfo, result);
          } else {
            returnValue = *((QRect*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayout::geometry();
}
bool  PythonQtShell_QLayout::hasHeightForWidth() const
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
  return QLayout::hasHeightForWidth();
}
int  PythonQtShell_QLayout::heightForWidth(int  arg__1) const
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
  return QLayout::heightForWidth(arg__1);
}
int  PythonQtShell_QLayout::indexOf(const QLayoutItem*  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("indexOf");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QLayoutItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("indexOf", methodInfo, result);
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
  return QLayout::indexOf(arg__1);
}
int  PythonQtShell_QLayout::indexOf(const QWidget*  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("indexOf");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("indexOf", methodInfo, result);
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
  return QLayout::indexOf(arg__1);
}
void PythonQtShell_QLayout::invalidate()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("invalidate");
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
  QLayout::invalidate();
}
bool  PythonQtShell_QLayout::isEmpty() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isEmpty");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
  return QLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QLayout::itemAt(int  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("itemAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayoutItem*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
          } else {
            returnValue = *((QLayoutItem**)args[0]);
          }
        }
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
QLayout*  PythonQtShell_QLayout::layout()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("layout");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayout*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLayout* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("layout", methodInfo, result);
          } else {
            returnValue = *((QLayout**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayout::layout();
}
QSize  PythonQtShell_QLayout::maximumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("maximumSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("maximumSize", methodInfo, result);
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
  return QLayout::maximumSize();
}
int  PythonQtShell_QLayout::minimumHeightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("minimumHeightForWidth");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumHeightForWidth", methodInfo, result);
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
  return QLayout::minimumHeightForWidth(arg__1);
}
QSize  PythonQtShell_QLayout::minimumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("minimumSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumSize", methodInfo, result);
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
  return QLayout::minimumSize();
}
QLayoutItem*  PythonQtShell_QLayout::replaceWidget(QWidget*  from0, QWidget*  to1, Qt::FindChildOptions  options2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("replaceWidget");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayoutItem*" , "QWidget*" , "QWidget*" , "Qt::FindChildOptions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QLayoutItem* returnValue{};
      void* args[4] = {nullptr, (void*)&from0, (void*)&to1, (void*)&options2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("replaceWidget", methodInfo, result);
          } else {
            returnValue = *((QLayoutItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayout::replaceWidget(from0, to1, options2);
}
void PythonQtShell_QLayout::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setGeometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&"};
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
  QLayout::setGeometry(arg__1);
}
void PythonQtShell_QLayout::setSpacing(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setSpacing");
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
  QLayout::setSpacing(arg__1);
}
QSize  PythonQtShell_QLayout::sizeHint() const
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
  return QSize();
}
QSpacerItem*  PythonQtShell_QLayout::spacerItem()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("spacerItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSpacerItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSpacerItem* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("spacerItem", methodInfo, result);
          } else {
            returnValue = *((QSpacerItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayout::spacerItem();
}
int  PythonQtShell_QLayout::spacing() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("spacing");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("spacing", methodInfo, result);
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
  return QLayout::spacing();
}
QLayoutItem*  PythonQtShell_QLayout::takeAt(int  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("takeAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayoutItem*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("takeAt", methodInfo, result);
          } else {
            returnValue = *((QLayoutItem**)args[0]);
          }
        }
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
void PythonQtShell_QLayout::timerEvent(QTimerEvent*  event0)
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
  QLayout::timerEvent(event0);
}
QWidget*  PythonQtShell_QLayout::widget() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("widget");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QWidget* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("widget", methodInfo, result);
          } else {
            returnValue = *((QWidget**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayout::widget();
}
QLayout* PythonQtWrapper_QLayout::new_QLayout(QWidget*  parent)
{ 
return new PythonQtShell_QLayout(parent); }

const QMetaObject* PythonQtShell_QLayout::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLayout::staticMetaObject);
  } else {
    return &QLayout::staticMetaObject;
  }
}
int PythonQtShell_QLayout::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLayout::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QLayout::activate(QLayout* theWrappedObject)
{
  return ( theWrappedObject->activate());
}

void PythonQtWrapper_QLayout::addChildLayout(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  l)
{
  ( ((PythonQtPublicPromoter_QLayout*)theWrappedObject)->promoted_addChildLayout(l));
}

void PythonQtWrapper_QLayout::addChildWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w)
{
  ( ((PythonQtPublicPromoter_QLayout*)theWrappedObject)->promoted_addChildWidget(w));
}

void PythonQtWrapper_QLayout::addItem(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__1)
{
  ( theWrappedObject->addItem(arg__1));
}

void PythonQtWrapper_QLayout::addWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w)
{
  ( theWrappedObject->addWidget(w));
}

bool  PythonQtWrapper_QLayout::adoptLayout(QLayout* theWrappedObject, QLayout*  layout)
{
  return ( ((PythonQtPublicPromoter_QLayout*)theWrappedObject)->promoted_adoptLayout(layout));
}

QRect  PythonQtWrapper_QLayout::alignmentRect(QLayout* theWrappedObject, const QRect&  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QLayout*)theWrappedObject)->promoted_alignmentRect(arg__1));
}

QSize  PythonQtWrapper_QLayout::static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s)
{
  return (QLayout::closestAcceptableSize(w, s));
}

QMargins  PythonQtWrapper_QLayout::contentsMargins(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->contentsMargins());
}

QRect  PythonQtWrapper_QLayout::contentsRect(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->contentsRect());
}

int  PythonQtWrapper_QLayout::count(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QLayout::SizeConstraint  PythonQtWrapper_QLayout::horizontalSizeConstraint(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->horizontalSizeConstraint());
}

int  PythonQtWrapper_QLayout::indexOf(QLayout* theWrappedObject, const QLayoutItem*  arg__1) const
{
  return ( theWrappedObject->indexOf(arg__1));
}

int  PythonQtWrapper_QLayout::indexOf(QLayout* theWrappedObject, const QWidget*  arg__1) const
{
  return ( theWrappedObject->indexOf(arg__1));
}

bool  PythonQtWrapper_QLayout::isEnabled(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

QLayoutItem*  PythonQtWrapper_QLayout::itemAt(QLayout* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemAt(index));
}

QWidget*  PythonQtWrapper_QLayout::menuBar(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->menuBar());
}

QWidget*  PythonQtWrapper_QLayout::parentWidget(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->parentWidget());
}

void PythonQtWrapper_QLayout::removeItem(QLayout* theWrappedObject, PythonQtPassOwnershipToPython<QLayoutItem* >  arg__1)
{
  ( theWrappedObject->removeItem(arg__1));
}

void PythonQtWrapper_QLayout::removeWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToPython<QWidget* >  w)
{
  ( theWrappedObject->removeWidget(w));
}

QLayoutItem*  PythonQtWrapper_QLayout::replaceWidget(QLayout* theWrappedObject, QWidget*  from, QWidget*  to, Qt::FindChildOptions  options)
{
  return ( theWrappedObject->replaceWidget(from, to, options));
}

bool  PythonQtWrapper_QLayout::setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment)
{
  return ( theWrappedObject->setAlignment(l, alignment));
}

bool  PythonQtWrapper_QLayout::setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment)
{
  return ( theWrappedObject->setAlignment(w, alignment));
}

void PythonQtWrapper_QLayout::setContentsMargins(QLayout* theWrappedObject, const QMargins&  margins)
{
  ( theWrappedObject->setContentsMargins(margins));
}

void PythonQtWrapper_QLayout::setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom)
{
  ( theWrappedObject->setContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QLayout::setEnabled(QLayout* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setEnabled(arg__1));
}

void PythonQtWrapper_QLayout::setHorizontalSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  constraint)
{
  ( theWrappedObject->setHorizontalSizeConstraint(constraint));
}

void PythonQtWrapper_QLayout::setMenuBar(QLayout* theWrappedObject, QWidget*  w)
{
  ( theWrappedObject->setMenuBar(w));
}

void PythonQtWrapper_QLayout::setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  constraint)
{
  ( theWrappedObject->setSizeConstraint(constraint));
}

void PythonQtWrapper_QLayout::setSizeConstraints(QLayout* theWrappedObject, QLayout::SizeConstraint  horizontal, QLayout::SizeConstraint  vertical)
{
  ( theWrappedObject->setSizeConstraints(horizontal, vertical));
}

void PythonQtWrapper_QLayout::setSpacing(QLayout* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setSpacing(arg__1));
}

void PythonQtWrapper_QLayout::setVerticalSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  constraint)
{
  ( theWrappedObject->setVerticalSizeConstraint(constraint));
}

QLayout::SizeConstraint  PythonQtWrapper_QLayout::sizeConstraint(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->sizeConstraint());
}

int  PythonQtWrapper_QLayout::spacing(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

PythonQtPassOwnershipToPython<QLayoutItem*  > PythonQtWrapper_QLayout::takeAt(QLayout* theWrappedObject, int  index)
{
  return ( theWrappedObject->takeAt(index));
}

int  PythonQtWrapper_QLayout::totalHeightForWidth(QLayout* theWrappedObject, int  w) const
{
  return ( theWrappedObject->totalHeightForWidth(w));
}

QSize  PythonQtWrapper_QLayout::totalMaximumSize(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->totalMaximumSize());
}

int  PythonQtWrapper_QLayout::totalMinimumHeightForWidth(QLayout* theWrappedObject, int  w) const
{
  return ( theWrappedObject->totalMinimumHeightForWidth(w));
}

QSize  PythonQtWrapper_QLayout::totalMinimumSize(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->totalMinimumSize());
}

QSize  PythonQtWrapper_QLayout::totalSizeHint(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->totalSizeHint());
}

void PythonQtWrapper_QLayout::unsetContentsMargins(QLayout* theWrappedObject)
{
  ( theWrappedObject->unsetContentsMargins());
}

void PythonQtWrapper_QLayout::update(QLayout* theWrappedObject)
{
  ( theWrappedObject->update());
}

QLayout::SizeConstraint  PythonQtWrapper_QLayout::verticalSizeConstraint(QLayout* theWrappedObject) const
{
  return ( theWrappedObject->verticalSizeConstraint());
}

void PythonQtWrapper_QLayout::widgetEvent(QLayout* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QLayout*)theWrappedObject)->promoted_widgetEvent(arg__1));
}



PythonQtShell_QLayoutItem::~PythonQtShell_QLayoutItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSizePolicy::ControlTypes  PythonQtShell_QLayoutItem::controlTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("controlTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSizePolicy::ControlTypes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizePolicy::ControlTypes returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("controlTypes", methodInfo, result);
          } else {
            returnValue = *((QSizePolicy::ControlTypes*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayoutItem::controlTypes();
}
Qt::Orientations  PythonQtShell_QLayoutItem::expandingDirections() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("expandingDirections");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::Orientations"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::Orientations returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("expandingDirections", methodInfo, result);
          } else {
            returnValue = *((Qt::Orientations*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return Qt::Orientations();
}
QRect  PythonQtShell_QLayoutItem::geometry() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("geometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRect"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("geometry", methodInfo, result);
          } else {
            returnValue = *((QRect*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QRect();
}
bool  PythonQtShell_QLayoutItem::hasHeightForWidth() const
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
  return QLayoutItem::hasHeightForWidth();
}
int  PythonQtShell_QLayoutItem::heightForWidth(int  arg__1) const
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
  return QLayoutItem::heightForWidth(arg__1);
}
void PythonQtShell_QLayoutItem::invalidate()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("invalidate");
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
  QLayoutItem::invalidate();
}
bool  PythonQtShell_QLayoutItem::isEmpty() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isEmpty");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
QLayout*  PythonQtShell_QLayoutItem::layout()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("layout");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayout*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLayout* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("layout", methodInfo, result);
          } else {
            returnValue = *((QLayout**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayoutItem::layout();
}
QSize  PythonQtShell_QLayoutItem::maximumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("maximumSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("maximumSize", methodInfo, result);
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
  return QSize();
}
int  PythonQtShell_QLayoutItem::minimumHeightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("minimumHeightForWidth");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumHeightForWidth", methodInfo, result);
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
  return QLayoutItem::minimumHeightForWidth(arg__1);
}
QSize  PythonQtShell_QLayoutItem::minimumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("minimumSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumSize", methodInfo, result);
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
  return QSize();
}
void PythonQtShell_QLayoutItem::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setGeometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&"};
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
QSize  PythonQtShell_QLayoutItem::sizeHint() const
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
  return QSize();
}
QSpacerItem*  PythonQtShell_QLayoutItem::spacerItem()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("spacerItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSpacerItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSpacerItem* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("spacerItem", methodInfo, result);
          } else {
            returnValue = *((QSpacerItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayoutItem::spacerItem();
}
QWidget*  PythonQtShell_QLayoutItem::widget() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("widget");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QWidget* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("widget", methodInfo, result);
          } else {
            returnValue = *((QWidget**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLayoutItem::widget();
}
QLayoutItem* PythonQtWrapper_QLayoutItem::new_QLayoutItem(Qt::Alignment  alignment)
{ 
return new PythonQtShell_QLayoutItem(alignment); }

Qt::Alignment  PythonQtWrapper_QLayoutItem::alignment(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QSizePolicy::ControlTypes  PythonQtWrapper_QLayoutItem::controlTypes(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->controlTypes());
}

Qt::Orientations  PythonQtWrapper_QLayoutItem::expandingDirections(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->expandingDirections());
}

QRect  PythonQtWrapper_QLayoutItem::geometry(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

bool  PythonQtWrapper_QLayoutItem::hasHeightForWidth(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->hasHeightForWidth());
}

int  PythonQtWrapper_QLayoutItem::heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->heightForWidth(arg__1));
}

void PythonQtWrapper_QLayoutItem::invalidate(QLayoutItem* theWrappedObject)
{
  ( theWrappedObject->invalidate());
}

bool  PythonQtWrapper_QLayoutItem::isEmpty(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QLayout*  PythonQtWrapper_QLayoutItem::layout(QLayoutItem* theWrappedObject)
{
  return ( theWrappedObject->layout());
}

QSize  PythonQtWrapper_QLayoutItem::maximumSize(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumSize());
}

int  PythonQtWrapper_QLayoutItem::minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->minimumHeightForWidth(arg__1));
}

QSize  PythonQtWrapper_QLayoutItem::minimumSize(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumSize());
}

void PythonQtWrapper_QLayoutItem::setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a)
{
  ( theWrappedObject->setAlignment(a));
}

void PythonQtWrapper_QLayoutItem::setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1)
{
  ( theWrappedObject->setGeometry(arg__1));
}

QSize  PythonQtWrapper_QLayoutItem::sizeHint(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QSpacerItem*  PythonQtWrapper_QLayoutItem::spacerItem(QLayoutItem* theWrappedObject)
{
  return ( theWrappedObject->spacerItem());
}

QWidget*  PythonQtWrapper_QLayoutItem::widget(QLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



PythonQtShell_QLineEdit::~PythonQtShell_QLineEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QLineEdit::actionEvent(QActionEvent*  event0)
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
  QLineEdit::actionEvent(event0);
}
void PythonQtShell_QLineEdit::changeEvent(QEvent*  arg__1)
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
  QLineEdit::changeEvent(arg__1);
}
void PythonQtShell_QLineEdit::childEvent(QChildEvent*  event0)
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
  QLineEdit::childEvent(event0);
}
void PythonQtShell_QLineEdit::closeEvent(QCloseEvent*  event0)
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
  QLineEdit::closeEvent(event0);
}
void PythonQtShell_QLineEdit::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QLineEdit::contextMenuEvent(arg__1);
}
void PythonQtShell_QLineEdit::customEvent(QEvent*  event0)
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
  QLineEdit::customEvent(event0);
}
int  PythonQtShell_QLineEdit::devType() const
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
  return QLineEdit::devType();
}
void PythonQtShell_QLineEdit::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QLineEdit::dragEnterEvent(arg__1);
}
void PythonQtShell_QLineEdit::dragLeaveEvent(QDragLeaveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLineEdit::dragLeaveEvent(e0);
}
void PythonQtShell_QLineEdit::dragMoveEvent(QDragMoveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLineEdit::dragMoveEvent(e0);
}
void PythonQtShell_QLineEdit::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QLineEdit::dropEvent(arg__1);
}
void PythonQtShell_QLineEdit::enterEvent(QEnterEvent*  event0)
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
  QLineEdit::enterEvent(event0);
}
bool  PythonQtShell_QLineEdit::event(QEvent*  arg__1)
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
  return QLineEdit::event(arg__1);
}
bool  PythonQtShell_QLineEdit::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QLineEdit::eventFilter(watched0, event1);
}
void PythonQtShell_QLineEdit::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusInEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QLineEdit::focusInEvent(arg__1);
}
bool  PythonQtShell_QLineEdit::focusNextPrevChild(bool  next0)
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
  return QLineEdit::focusNextPrevChild(next0);
}
void PythonQtShell_QLineEdit::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QLineEdit::focusOutEvent(arg__1);
}
bool  PythonQtShell_QLineEdit::hasHeightForWidth() const
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
  return QLineEdit::hasHeightForWidth();
}
int  PythonQtShell_QLineEdit::heightForWidth(int  arg__1) const
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
  return QLineEdit::heightForWidth(arg__1);
}
void PythonQtShell_QLineEdit::hideEvent(QHideEvent*  event0)
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
  QLineEdit::hideEvent(event0);
}
void PythonQtShell_QLineEdit::initPainter(QPainter*  painter0) const
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
  QLineEdit::initPainter(painter0);
}
void PythonQtShell_QLineEdit::initStyleOption(QStyleOptionFrame*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initStyleOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionFrame*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLineEdit::initStyleOption(option0);
}
void PythonQtShell_QLineEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QLineEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QLineEdit::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QLineEdit::inputMethodQuery(arg__1);
}
void PythonQtShell_QLineEdit::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QLineEdit::keyPressEvent(arg__1);
}
void PythonQtShell_QLineEdit::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QLineEdit::keyReleaseEvent(arg__1);
}
void PythonQtShell_QLineEdit::leaveEvent(QEvent*  event0)
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
  QLineEdit::leaveEvent(event0);
}
int  PythonQtShell_QLineEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QLineEdit::metric(arg__1);
}
QSize  PythonQtShell_QLineEdit::minimumSizeHint() const
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
  return QLineEdit::minimumSizeHint();
}
void PythonQtShell_QLineEdit::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QLineEdit::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QLineEdit::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QLineEdit::mouseMoveEvent(arg__1);
}
void PythonQtShell_QLineEdit::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QLineEdit::mousePressEvent(arg__1);
}
void PythonQtShell_QLineEdit::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QLineEdit::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QLineEdit::moveEvent(QMoveEvent*  event0)
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
  QLineEdit::moveEvent(event0);
}
bool  PythonQtShell_QLineEdit::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QLineEdit::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QLineEdit::paintEngine() const
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
  return QLineEdit::paintEngine();
}
void PythonQtShell_QLineEdit::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
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
  QLineEdit::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QLineEdit::redirected(QPoint*  offset0) const
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
  return QLineEdit::redirected(offset0);
}
void PythonQtShell_QLineEdit::resizeEvent(QResizeEvent*  event0)
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
  QLineEdit::resizeEvent(event0);
}
void PythonQtShell_QLineEdit::setVisible(bool  visible0)
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
  QLineEdit::setVisible(visible0);
}
QPainter*  PythonQtShell_QLineEdit::sharedPainter() const
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
  return QLineEdit::sharedPainter();
}
void PythonQtShell_QLineEdit::showEvent(QShowEvent*  event0)
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
  QLineEdit::showEvent(event0);
}
QSize  PythonQtShell_QLineEdit::sizeHint() const
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
  return QLineEdit::sizeHint();
}
void PythonQtShell_QLineEdit::tabletEvent(QTabletEvent*  event0)
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
  QLineEdit::tabletEvent(event0);
}
void PythonQtShell_QLineEdit::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QLineEdit::timerEvent(arg__1);
}
void PythonQtShell_QLineEdit::wheelEvent(QWheelEvent*  event0)
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
  QLineEdit::wheelEvent(event0);
}
QLineEdit* PythonQtWrapper_QLineEdit::new_QLineEdit(QWidget*  parent)
{ 
return new PythonQtShell_QLineEdit(parent); }

QLineEdit* PythonQtWrapper_QLineEdit::new_QLineEdit(const QString&  arg__1, QWidget*  parent)
{ 
return new PythonQtShell_QLineEdit(arg__1, parent); }

const QMetaObject* PythonQtShell_QLineEdit::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLineEdit::staticMetaObject);
  } else {
    return &QLineEdit::staticMetaObject;
  }
}
int PythonQtShell_QLineEdit::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLineEdit::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QLineEdit::addAction(QLineEdit* theWrappedObject, QAction*  action, QLineEdit::ActionPosition  position)
{
  ( theWrappedObject->addAction(action, position));
}

QAction*  PythonQtWrapper_QLineEdit::addAction(QLineEdit* theWrappedObject, const QIcon&  icon, QLineEdit::ActionPosition  position)
{
  return ( theWrappedObject->addAction(icon, position));
}

Qt::Alignment  PythonQtWrapper_QLineEdit::alignment(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

void PythonQtWrapper_QLineEdit::backspace(QLineEdit* theWrappedObject)
{
  ( theWrappedObject->backspace());
}

QCompleter*  PythonQtWrapper_QLineEdit::completer(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->completer());
}

QMenu*  PythonQtWrapper_QLineEdit::createStandardContextMenu(QLineEdit* theWrappedObject)
{
  return ( theWrappedObject->createStandardContextMenu());
}

void PythonQtWrapper_QLineEdit::cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps)
{
  ( theWrappedObject->cursorBackward(mark, steps));
}

void PythonQtWrapper_QLineEdit::cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps)
{
  ( theWrappedObject->cursorForward(mark, steps));
}

Qt::CursorMoveStyle  PythonQtWrapper_QLineEdit::cursorMoveStyle(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorMoveStyle());
}

int  PythonQtWrapper_QLineEdit::cursorPosition(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorPosition());
}

int  PythonQtWrapper_QLineEdit::cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos)
{
  return ( theWrappedObject->cursorPositionAt(pos));
}

QRect  PythonQtWrapper_QLineEdit::cursorRect(QLineEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_cursorRect());
}

void PythonQtWrapper_QLineEdit::cursorWordBackward(QLineEdit* theWrappedObject, bool  mark)
{
  ( theWrappedObject->cursorWordBackward(mark));
}

void PythonQtWrapper_QLineEdit::cursorWordForward(QLineEdit* theWrappedObject, bool  mark)
{
  ( theWrappedObject->cursorWordForward(mark));
}

void PythonQtWrapper_QLineEdit::del(QLineEdit* theWrappedObject)
{
  ( theWrappedObject->del());
}

void PythonQtWrapper_QLineEdit::deselect(QLineEdit* theWrappedObject)
{
  ( theWrappedObject->deselect());
}

QString  PythonQtWrapper_QLineEdit::displayText(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->displayText());
}

bool  PythonQtWrapper_QLineEdit::dragEnabled(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->dragEnabled());
}

QLineEdit::EchoMode  PythonQtWrapper_QLineEdit::echoMode(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->echoMode());
}

void PythonQtWrapper_QLineEdit::end(QLineEdit* theWrappedObject, bool  mark)
{
  ( theWrappedObject->end(mark));
}

bool  PythonQtWrapper_QLineEdit::hasAcceptableInput(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->hasAcceptableInput());
}

bool  PythonQtWrapper_QLineEdit::hasFrame(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->hasFrame());
}

bool  PythonQtWrapper_QLineEdit::hasSelectedText(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->hasSelectedText());
}

void PythonQtWrapper_QLineEdit::home(QLineEdit* theWrappedObject, bool  mark)
{
  ( theWrappedObject->home(mark));
}

void PythonQtWrapper_QLineEdit::initStyleOption(QLineEdit* theWrappedObject, QStyleOptionFrame*  option) const
{
  ( ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_initStyleOption(option));
}

QString  PythonQtWrapper_QLineEdit::inputMask(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->inputMask());
}

QVariant  PythonQtWrapper_QLineEdit::inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  property, QVariant  argument) const
{
  return ( theWrappedObject->inputMethodQuery(property, argument));
}

void PythonQtWrapper_QLineEdit::insert(QLineEdit* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->insert(arg__1));
}

bool  PythonQtWrapper_QLineEdit::isClearButtonEnabled(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->isClearButtonEnabled());
}

bool  PythonQtWrapper_QLineEdit::isModified(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->isModified());
}

bool  PythonQtWrapper_QLineEdit::isReadOnly(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

bool  PythonQtWrapper_QLineEdit::isRedoAvailable(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->isRedoAvailable());
}

bool  PythonQtWrapper_QLineEdit::isUndoAvailable(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->isUndoAvailable());
}

int  PythonQtWrapper_QLineEdit::maxLength(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->maxLength());
}

QString  PythonQtWrapper_QLineEdit::placeholderText(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->placeholderText());
}

QString  PythonQtWrapper_QLineEdit::selectedText(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

int  PythonQtWrapper_QLineEdit::selectionEnd(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->selectionEnd());
}

int  PythonQtWrapper_QLineEdit::selectionLength(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->selectionLength());
}

int  PythonQtWrapper_QLineEdit::selectionStart(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->selectionStart());
}

void PythonQtWrapper_QLineEdit::setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag)
{
  ( theWrappedObject->setAlignment(flag));
}

void PythonQtWrapper_QLineEdit::setClearButtonEnabled(QLineEdit* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setClearButtonEnabled(enable));
}

void PythonQtWrapper_QLineEdit::setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer)
{
  ( theWrappedObject->setCompleter(completer));
}

void PythonQtWrapper_QLineEdit::setCursorMoveStyle(QLineEdit* theWrappedObject, Qt::CursorMoveStyle  style)
{
  ( theWrappedObject->setCursorMoveStyle(style));
}

void PythonQtWrapper_QLineEdit::setCursorPosition(QLineEdit* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setCursorPosition(arg__1));
}

void PythonQtWrapper_QLineEdit::setDragEnabled(QLineEdit* theWrappedObject, bool  b)
{
  ( theWrappedObject->setDragEnabled(b));
}

void PythonQtWrapper_QLineEdit::setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1)
{
  ( theWrappedObject->setEchoMode(arg__1));
}

void PythonQtWrapper_QLineEdit::setFrame(QLineEdit* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setFrame(arg__1));
}

void PythonQtWrapper_QLineEdit::setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask)
{
  ( theWrappedObject->setInputMask(inputMask));
}

void PythonQtWrapper_QLineEdit::setMaxLength(QLineEdit* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setMaxLength(arg__1));
}

void PythonQtWrapper_QLineEdit::setModified(QLineEdit* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setModified(arg__1));
}

void PythonQtWrapper_QLineEdit::setPlaceholderText(QLineEdit* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setPlaceholderText(arg__1));
}

void PythonQtWrapper_QLineEdit::setReadOnly(QLineEdit* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setReadOnly(arg__1));
}

void PythonQtWrapper_QLineEdit::setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2)
{
  ( theWrappedObject->setSelection(arg__1, arg__2));
}

void PythonQtWrapper_QLineEdit::setTextMargins(QLineEdit* theWrappedObject, const QMargins&  margins)
{
  ( theWrappedObject->setTextMargins(margins));
}

void PythonQtWrapper_QLineEdit::setTextMargins(QLineEdit* theWrappedObject, int  left, int  top, int  right, int  bottom)
{
  ( theWrappedObject->setTextMargins(left, top, right, bottom));
}

void PythonQtWrapper_QLineEdit::setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1)
{
  ( theWrappedObject->setValidator(arg__1));
}

QString  PythonQtWrapper_QLineEdit::text(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QMargins  PythonQtWrapper_QLineEdit::textMargins(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->textMargins());
}

const QValidator*  PythonQtWrapper_QLineEdit::validator(QLineEdit* theWrappedObject) const
{
  return ( theWrappedObject->validator());
}



QLinearGradient* PythonQtWrapper_QLinearGradient::new_QLinearGradient()
{ 
return new QLinearGradient(); }

QLinearGradient* PythonQtWrapper_QLinearGradient::new_QLinearGradient(const QPointF&  start, const QPointF&  finalStop)
{ 
return new QLinearGradient(start, finalStop); }

QLinearGradient* PythonQtWrapper_QLinearGradient::new_QLinearGradient(qreal  xStart, qreal  yStart, qreal  xFinalStop, qreal  yFinalStop)
{ 
return new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop); }

QPointF  PythonQtWrapper_QLinearGradient::finalStop(QLinearGradient* theWrappedObject) const
{
  return ( theWrappedObject->finalStop());
}

void PythonQtWrapper_QLinearGradient::setFinalStop(QLinearGradient* theWrappedObject, const QPointF&  stop)
{
  ( theWrappedObject->setFinalStop(stop));
}

void PythonQtWrapper_QLinearGradient::setFinalStop(QLinearGradient* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setFinalStop(x, y));
}

void PythonQtWrapper_QLinearGradient::setStart(QLinearGradient* theWrappedObject, const QPointF&  start)
{
  ( theWrappedObject->setStart(start));
}

void PythonQtWrapper_QLinearGradient::setStart(QLinearGradient* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setStart(x, y));
}

QPointF  PythonQtWrapper_QLinearGradient::start(QLinearGradient* theWrappedObject) const
{
  return ( theWrappedObject->start());
}



PythonQtShell_QListView::~PythonQtShell_QListView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QListView::actionEvent(QActionEvent*  event0)
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
  QListView::actionEvent(event0);
}
void PythonQtShell_QListView::changeEvent(QEvent*  arg__1)
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
  QListView::changeEvent(arg__1);
}
void PythonQtShell_QListView::childEvent(QChildEvent*  event0)
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
  QListView::childEvent(event0);
}
void PythonQtShell_QListView::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("closeEditor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*" , "QAbstractItemDelegate::EndEditHint"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&editor0, (void*)&hint1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::closeEditor(editor0, hint1);
}
void PythonQtShell_QListView::closeEvent(QCloseEvent*  event0)
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
  QListView::closeEvent(event0);
}
void PythonQtShell_QListView::commitData(QWidget*  editor0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("commitData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&editor0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::commitData(editor0);
}
void PythonQtShell_QListView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QListView::contextMenuEvent(arg__1);
}
void PythonQtShell_QListView::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("currentChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&current0, (void*)&previous1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::currentChanged(current0, previous1);
}
void PythonQtShell_QListView::customEvent(QEvent*  event0)
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
  QListView::customEvent(event0);
}
void PythonQtShell_QListView::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, const QList<int >&  roles2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dataChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&" , "const QList<int >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {nullptr, (void*)&topLeft0, (void*)&bottomRight1, (void*)&roles2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::dataChanged(topLeft0, bottomRight1, roles2);
}
int  PythonQtShell_QListView::devType() const
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
  return QListView::devType();
}
void PythonQtShell_QListView::doItemsLayout()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("doItemsLayout");
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
  QListView::doItemsLayout();
}
void PythonQtShell_QListView::dragEnterEvent(QDragEnterEvent*  event0)
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
  QListView::dragEnterEvent(event0);
}
void PythonQtShell_QListView::dragLeaveEvent(QDragLeaveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::dragLeaveEvent(e0);
}
void PythonQtShell_QListView::dragMoveEvent(QDragMoveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::dragMoveEvent(e0);
}
void PythonQtShell_QListView::dropEvent(QDropEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::dropEvent(e0);
}
bool  PythonQtShell_QListView::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("edit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "QAbstractItemView::EditTrigger" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&index0, (void*)&trigger1, (void*)&event2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("edit", methodInfo, result);
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
  return QListView::edit(index0, trigger1, event2);
}
void PythonQtShell_QListView::editorDestroyed(QObject*  editor0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("editorDestroyed");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&editor0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::editorDestroyed(editor0);
}
void PythonQtShell_QListView::enterEvent(QEnterEvent*  event0)
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
  QListView::enterEvent(event0);
}
bool  PythonQtShell_QListView::event(QEvent*  e0)
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
      void* args[2] = {nullptr, (void*)&e0};
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
  return QListView::event(e0);
}
bool  PythonQtShell_QListView::eventFilter(QObject*  object0, QEvent*  event1)
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
      void* args[3] = {nullptr, (void*)&object0, (void*)&event1};
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
  return QListView::eventFilter(object0, event1);
}
void PythonQtShell_QListView::focusInEvent(QFocusEvent*  event0)
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
  QListView::focusInEvent(event0);
}
bool  PythonQtShell_QListView::focusNextPrevChild(bool  next0)
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
  return QListView::focusNextPrevChild(next0);
}
void PythonQtShell_QListView::focusOutEvent(QFocusEvent*  event0)
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
  QListView::focusOutEvent(event0);
}
bool  PythonQtShell_QListView::hasHeightForWidth() const
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
  return QListView::hasHeightForWidth();
}
int  PythonQtShell_QListView::heightForWidth(int  arg__1) const
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
  return QListView::heightForWidth(arg__1);
}
void PythonQtShell_QListView::hideEvent(QHideEvent*  event0)
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
  QListView::hideEvent(event0);
}
int  PythonQtShell_QListView::horizontalOffset() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("horizontalOffset");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("horizontalOffset", methodInfo, result);
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
  return QListView::horizontalOffset();
}
void PythonQtShell_QListView::horizontalScrollbarAction(int  action0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("horizontalScrollbarAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&action0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::horizontalScrollbarAction(action0);
}
void PythonQtShell_QListView::horizontalScrollbarValueChanged(int  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("horizontalScrollbarValueChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&value0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::horizontalScrollbarValueChanged(value0);
}
QModelIndex  PythonQtShell_QListView::indexAt(const QPoint&  p0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("indexAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QPoint&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&p0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("indexAt", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListView::indexAt(p0);
}
void PythonQtShell_QListView::initPainter(QPainter*  painter0) const
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
  QListView::initPainter(painter0);
}
void PythonQtShell_QListView::initStyleOption(QStyleOptionFrame*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initStyleOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionFrame*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::initStyleOption(option0);
}
void PythonQtShell_QListView::initViewItemOption(QStyleOptionViewItem*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initViewItemOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionViewItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::initViewItemOption(option0);
}
void PythonQtShell_QListView::inputMethodEvent(QInputMethodEvent*  event0)
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
  QListView::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QListView::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QListView::inputMethodQuery(query0);
}
bool  PythonQtShell_QListView::isIndexHidden(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isIndexHidden");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isIndexHidden", methodInfo, result);
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
  return QListView::isIndexHidden(index0);
}
QAbstractItemDelegate*  PythonQtShell_QListView::itemDelegateForIndex(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("itemDelegateForIndex");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractItemDelegate*" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QAbstractItemDelegate* returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemDelegateForIndex", methodInfo, result);
          } else {
            returnValue = *((QAbstractItemDelegate**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListView::itemDelegateForIndex(index0);
}
void PythonQtShell_QListView::keyPressEvent(QKeyEvent*  event0)
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
  QListView::keyPressEvent(event0);
}
void PythonQtShell_QListView::keyReleaseEvent(QKeyEvent*  event0)
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
  QListView::keyReleaseEvent(event0);
}
void PythonQtShell_QListView::keyboardSearch(const QString&  search0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyboardSearch");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&search0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::keyboardSearch(search0);
}
void PythonQtShell_QListView::leaveEvent(QEvent*  event0)
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
  QListView::leaveEvent(event0);
}
int  PythonQtShell_QListView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QListView::metric(arg__1);
}
QSize  PythonQtShell_QListView::minimumSizeHint() const
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
  return QListView::minimumSizeHint();
}
void PythonQtShell_QListView::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QListView::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QListView::mouseMoveEvent(QMouseEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::mouseMoveEvent(e0);
}
void PythonQtShell_QListView::mousePressEvent(QMouseEvent*  event0)
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
  QListView::mousePressEvent(event0);
}
void PythonQtShell_QListView::mouseReleaseEvent(QMouseEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::mouseReleaseEvent(e0);
}
QModelIndex  PythonQtShell_QListView::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("moveCursor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "QAbstractItemView::CursorAction" , "Qt::KeyboardModifiers"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QModelIndex returnValue{};
      void* args[3] = {nullptr, (void*)&cursorAction0, (void*)&modifiers1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("moveCursor", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListView::moveCursor(cursorAction0, modifiers1);
}
void PythonQtShell_QListView::moveEvent(QMoveEvent*  event0)
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
  QListView::moveEvent(event0);
}
bool  PythonQtShell_QListView::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QListView::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QListView::paintEngine() const
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
  return QListView::paintEngine();
}
void PythonQtShell_QListView::paintEvent(QPaintEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::paintEvent(e0);
}
QPaintDevice*  PythonQtShell_QListView::redirected(QPoint*  offset0) const
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
  return QListView::redirected(offset0);
}
void PythonQtShell_QListView::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("reset");
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
  QListView::reset();
}
void PythonQtShell_QListView::resizeEvent(QResizeEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resizeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QResizeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::resizeEvent(e0);
}
void PythonQtShell_QListView::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("rowsAboutToBeRemoved");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {nullptr, (void*)&parent0, (void*)&start1, (void*)&end2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::rowsAboutToBeRemoved(parent0, start1, end2);
}
void PythonQtShell_QListView::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("rowsInserted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {nullptr, (void*)&parent0, (void*)&start1, (void*)&end2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::rowsInserted(parent0, start1, end2);
}
void PythonQtShell_QListView::scrollContentsBy(int  dx0, int  dy1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("scrollContentsBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&dx0, (void*)&dy1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QListView::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("scrollTo");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "QAbstractItemView::ScrollHint"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&index0, (void*)&hint1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::scrollTo(index0, hint1);
}
void PythonQtShell_QListView::selectAll()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("selectAll");
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
  QListView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QListView::selectedIndexes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("selectedIndexes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QModelIndex >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QModelIndex > returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("selectedIndexes", methodInfo, result);
          } else {
            returnValue = *((QList<QModelIndex >*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListView::selectedIndexes();
}
void PythonQtShell_QListView::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("selectionChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QItemSelection&" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&selected0, (void*)&deselected1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::selectionChanged(selected0, deselected1);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QListView::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("selectionCommand");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QItemSelectionModel::SelectionFlags" , "const QModelIndex&" , "const QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QItemSelectionModel::SelectionFlags returnValue{};
      void* args[3] = {nullptr, (void*)&index0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("selectionCommand", methodInfo, result);
          } else {
            returnValue = *((QItemSelectionModel::SelectionFlags*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListView::selectionCommand(index0, event1);
}
void PythonQtShell_QListView::setModel(QAbstractItemModel*  model0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setModel");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractItemModel*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&model0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::setModel(model0);
}
void PythonQtShell_QListView::setRootIndex(const QModelIndex&  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setRootIndex");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::setRootIndex(index0);
}
void PythonQtShell_QListView::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setSelection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&" , "QItemSelectionModel::SelectionFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&rect0, (void*)&command1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::setSelection(rect0, command1);
}
void PythonQtShell_QListView::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setSelectionModel");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QItemSelectionModel*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&selectionModel0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::setSelectionModel(selectionModel0);
}
void PythonQtShell_QListView::setVisible(bool  visible0)
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
  QListView::setVisible(visible0);
}
void PythonQtShell_QListView::setupViewport(QWidget*  viewport0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setupViewport");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&viewport0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QListView::sharedPainter() const
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
  return QListView::sharedPainter();
}
void PythonQtShell_QListView::showEvent(QShowEvent*  event0)
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
  QListView::showEvent(event0);
}
QSize  PythonQtShell_QListView::sizeHint() const
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
  return QListView::sizeHint();
}
int  PythonQtShell_QListView::sizeHintForColumn(int  column0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sizeHintForColumn");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&column0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForColumn", methodInfo, result);
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
  return QListView::sizeHintForColumn(column0);
}
int  PythonQtShell_QListView::sizeHintForRow(int  row0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sizeHintForRow");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&row0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForRow", methodInfo, result);
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
  return QListView::sizeHintForRow(row0);
}
void PythonQtShell_QListView::startDrag(Qt::DropActions  supportedActions0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("startDrag");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&supportedActions0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::startDrag(supportedActions0);
}
void PythonQtShell_QListView::tabletEvent(QTabletEvent*  event0)
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
  QListView::tabletEvent(event0);
}
void PythonQtShell_QListView::timerEvent(QTimerEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::timerEvent(e0);
}
void PythonQtShell_QListView::updateEditorData()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateEditorData");
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
  QListView::updateEditorData();
}
void PythonQtShell_QListView::updateEditorGeometries()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateEditorGeometries");
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
  QListView::updateEditorGeometries();
}
void PythonQtShell_QListView::updateGeometries()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateGeometries");
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
  QListView::updateGeometries();
}
int  PythonQtShell_QListView::verticalOffset() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("verticalOffset");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("verticalOffset", methodInfo, result);
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
  return QListView::verticalOffset();
}
void PythonQtShell_QListView::verticalScrollbarAction(int  action0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("verticalScrollbarAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&action0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::verticalScrollbarAction(action0);
}
void PythonQtShell_QListView::verticalScrollbarValueChanged(int  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("verticalScrollbarValueChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&value0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::verticalScrollbarValueChanged(value0);
}
bool  PythonQtShell_QListView::viewportEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("viewportEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
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
  return QListView::viewportEvent(event0);
}
QSize  PythonQtShell_QListView::viewportSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("viewportSizeHint");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("viewportSizeHint", methodInfo, result);
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
  return QListView::viewportSizeHint();
}
QRect  PythonQtShell_QListView::visualRect(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("visualRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRect" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRect returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("visualRect", methodInfo, result);
          } else {
            returnValue = *((QRect*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListView::visualRect(index0);
}
QRegion  PythonQtShell_QListView::visualRegionForSelection(const QItemSelection&  selection0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("visualRegionForSelection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRegion" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRegion returnValue{};
      void* args[2] = {nullptr, (void*)&selection0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("visualRegionForSelection", methodInfo, result);
          } else {
            returnValue = *((QRegion*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListView::visualRegionForSelection(selection0);
}
void PythonQtShell_QListView::wheelEvent(QWheelEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWheelEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListView::wheelEvent(e0);
}
QListView* PythonQtWrapper_QListView::new_QListView(QWidget*  parent)
{ 
return new PythonQtShell_QListView(parent); }

const QMetaObject* PythonQtShell_QListView::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QListView::staticMetaObject);
  } else {
    return &QListView::staticMetaObject;
  }
}
int PythonQtShell_QListView::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QListView::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QListView::batchSize(QListView* theWrappedObject) const
{
  return ( theWrappedObject->batchSize());
}

void PythonQtWrapper_QListView::clearPropertyFlags(QListView* theWrappedObject)
{
  ( theWrappedObject->clearPropertyFlags());
}

QSize  PythonQtWrapper_QListView::contentsSize(QListView* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QListView*)theWrappedObject)->promoted_contentsSize());
}

QListView::Flow  PythonQtWrapper_QListView::flow(QListView* theWrappedObject) const
{
  return ( theWrappedObject->flow());
}

QSize  PythonQtWrapper_QListView::gridSize(QListView* theWrappedObject) const
{
  return ( theWrappedObject->gridSize());
}

bool  PythonQtWrapper_QListView::isRowHidden(QListView* theWrappedObject, int  row) const
{
  return ( theWrappedObject->isRowHidden(row));
}

bool  PythonQtWrapper_QListView::isSelectionRectVisible(QListView* theWrappedObject) const
{
  return ( theWrappedObject->isSelectionRectVisible());
}

bool  PythonQtWrapper_QListView::isWrapping(QListView* theWrappedObject) const
{
  return ( theWrappedObject->isWrapping());
}

Qt::Alignment  PythonQtWrapper_QListView::itemAlignment(QListView* theWrappedObject) const
{
  return ( theWrappedObject->itemAlignment());
}

QListView::LayoutMode  PythonQtWrapper_QListView::layoutMode(QListView* theWrappedObject) const
{
  return ( theWrappedObject->layoutMode());
}

int  PythonQtWrapper_QListView::modelColumn(QListView* theWrappedObject) const
{
  return ( theWrappedObject->modelColumn());
}

QListView::Movement  PythonQtWrapper_QListView::movement(QListView* theWrappedObject) const
{
  return ( theWrappedObject->movement());
}

QRect  PythonQtWrapper_QListView::rectForIndex(QListView* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QListView*)theWrappedObject)->promoted_rectForIndex(index));
}

void PythonQtWrapper_QListView::resizeContents(QListView* theWrappedObject, int  width, int  height)
{
  ( ((PythonQtPublicPromoter_QListView*)theWrappedObject)->promoted_resizeContents(width, height));
}

QListView::ResizeMode  PythonQtWrapper_QListView::resizeMode(QListView* theWrappedObject) const
{
  return ( theWrappedObject->resizeMode());
}

void PythonQtWrapper_QListView::setBatchSize(QListView* theWrappedObject, int  batchSize)
{
  ( theWrappedObject->setBatchSize(batchSize));
}

void PythonQtWrapper_QListView::setFlow(QListView* theWrappedObject, QListView::Flow  flow)
{
  ( theWrappedObject->setFlow(flow));
}

void PythonQtWrapper_QListView::setGridSize(QListView* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setGridSize(size));
}

void PythonQtWrapper_QListView::setItemAlignment(QListView* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setItemAlignment(alignment));
}

void PythonQtWrapper_QListView::setLayoutMode(QListView* theWrappedObject, QListView::LayoutMode  mode)
{
  ( theWrappedObject->setLayoutMode(mode));
}

void PythonQtWrapper_QListView::setModelColumn(QListView* theWrappedObject, int  column)
{
  ( theWrappedObject->setModelColumn(column));
}

void PythonQtWrapper_QListView::setMovement(QListView* theWrappedObject, QListView::Movement  movement)
{
  ( theWrappedObject->setMovement(movement));
}

void PythonQtWrapper_QListView::setPositionForIndex(QListView* theWrappedObject, const QPoint&  position, const QModelIndex&  index)
{
  ( ((PythonQtPublicPromoter_QListView*)theWrappedObject)->promoted_setPositionForIndex(position, index));
}

void PythonQtWrapper_QListView::setResizeMode(QListView* theWrappedObject, QListView::ResizeMode  mode)
{
  ( theWrappedObject->setResizeMode(mode));
}

void PythonQtWrapper_QListView::setRowHidden(QListView* theWrappedObject, int  row, bool  hide)
{
  ( theWrappedObject->setRowHidden(row, hide));
}

void PythonQtWrapper_QListView::setSelectionRectVisible(QListView* theWrappedObject, bool  show)
{
  ( theWrappedObject->setSelectionRectVisible(show));
}

void PythonQtWrapper_QListView::setSpacing(QListView* theWrappedObject, int  space)
{
  ( theWrappedObject->setSpacing(space));
}

void PythonQtWrapper_QListView::setUniformItemSizes(QListView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setUniformItemSizes(enable));
}

void PythonQtWrapper_QListView::setViewMode(QListView* theWrappedObject, QListView::ViewMode  mode)
{
  ( theWrappedObject->setViewMode(mode));
}

void PythonQtWrapper_QListView::setWordWrap(QListView* theWrappedObject, bool  on)
{
  ( theWrappedObject->setWordWrap(on));
}

void PythonQtWrapper_QListView::setWrapping(QListView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setWrapping(enable));
}

int  PythonQtWrapper_QListView::spacing(QListView* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

bool  PythonQtWrapper_QListView::uniformItemSizes(QListView* theWrappedObject) const
{
  return ( theWrappedObject->uniformItemSizes());
}

QListView::ViewMode  PythonQtWrapper_QListView::viewMode(QListView* theWrappedObject) const
{
  return ( theWrappedObject->viewMode());
}

bool  PythonQtWrapper_QListView::wordWrap(QListView* theWrappedObject) const
{
  return ( theWrappedObject->wordWrap());
}



PythonQtShell_QListWidget::~PythonQtShell_QListWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QListWidget::actionEvent(QActionEvent*  event0)
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
  QListWidget::actionEvent(event0);
}
void PythonQtShell_QListWidget::changeEvent(QEvent*  arg__1)
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
  QListWidget::changeEvent(arg__1);
}
void PythonQtShell_QListWidget::childEvent(QChildEvent*  event0)
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
  QListWidget::childEvent(event0);
}
void PythonQtShell_QListWidget::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("closeEditor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*" , "QAbstractItemDelegate::EndEditHint"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&editor0, (void*)&hint1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::closeEditor(editor0, hint1);
}
void PythonQtShell_QListWidget::closeEvent(QCloseEvent*  event0)
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
  QListWidget::closeEvent(event0);
}
void PythonQtShell_QListWidget::commitData(QWidget*  editor0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("commitData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&editor0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::commitData(editor0);
}
void PythonQtShell_QListWidget::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QListWidget::contextMenuEvent(arg__1);
}
void PythonQtShell_QListWidget::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("currentChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&current0, (void*)&previous1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::currentChanged(current0, previous1);
}
void PythonQtShell_QListWidget::customEvent(QEvent*  event0)
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
  QListWidget::customEvent(event0);
}
void PythonQtShell_QListWidget::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, const QList<int >&  roles2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dataChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&" , "const QList<int >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {nullptr, (void*)&topLeft0, (void*)&bottomRight1, (void*)&roles2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::dataChanged(topLeft0, bottomRight1, roles2);
}
int  PythonQtShell_QListWidget::devType() const
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
  return QListWidget::devType();
}
void PythonQtShell_QListWidget::doItemsLayout()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("doItemsLayout");
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
  QListWidget::doItemsLayout();
}
void PythonQtShell_QListWidget::dragEnterEvent(QDragEnterEvent*  event0)
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
  QListWidget::dragEnterEvent(event0);
}
void PythonQtShell_QListWidget::dragLeaveEvent(QDragLeaveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::dragLeaveEvent(e0);
}
void PythonQtShell_QListWidget::dragMoveEvent(QDragMoveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::dragMoveEvent(e0);
}
void PythonQtShell_QListWidget::dropEvent(QDropEvent*  event0)
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
  QListWidget::dropEvent(event0);
}
bool  PythonQtShell_QListWidget::dropMimeData(int  index0, const QMimeData*  data1, Qt::DropAction  action2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "const QMimeData*" , "Qt::DropAction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&index0, (void*)&data1, (void*)&action2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
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
  return QListWidget::dropMimeData(index0, data1, action2);
}
bool  PythonQtShell_QListWidget::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("edit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "QAbstractItemView::EditTrigger" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&index0, (void*)&trigger1, (void*)&event2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("edit", methodInfo, result);
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
  return QListWidget::edit(index0, trigger1, event2);
}
void PythonQtShell_QListWidget::editorDestroyed(QObject*  editor0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("editorDestroyed");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&editor0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::editorDestroyed(editor0);
}
void PythonQtShell_QListWidget::enterEvent(QEnterEvent*  event0)
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
  QListWidget::enterEvent(event0);
}
bool  PythonQtShell_QListWidget::event(QEvent*  e0)
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
      void* args[2] = {nullptr, (void*)&e0};
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
  return QListWidget::event(e0);
}
bool  PythonQtShell_QListWidget::eventFilter(QObject*  object0, QEvent*  event1)
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
      void* args[3] = {nullptr, (void*)&object0, (void*)&event1};
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
  return QListWidget::eventFilter(object0, event1);
}
void PythonQtShell_QListWidget::focusInEvent(QFocusEvent*  event0)
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
  QListWidget::focusInEvent(event0);
}
bool  PythonQtShell_QListWidget::focusNextPrevChild(bool  next0)
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
  return QListWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QListWidget::focusOutEvent(QFocusEvent*  event0)
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
  QListWidget::focusOutEvent(event0);
}
bool  PythonQtShell_QListWidget::hasHeightForWidth() const
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
  return QListWidget::hasHeightForWidth();
}
int  PythonQtShell_QListWidget::heightForWidth(int  arg__1) const
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
  return QListWidget::heightForWidth(arg__1);
}
void PythonQtShell_QListWidget::hideEvent(QHideEvent*  event0)
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
  QListWidget::hideEvent(event0);
}
int  PythonQtShell_QListWidget::horizontalOffset() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("horizontalOffset");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("horizontalOffset", methodInfo, result);
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
  return QListWidget::horizontalOffset();
}
void PythonQtShell_QListWidget::horizontalScrollbarAction(int  action0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("horizontalScrollbarAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&action0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::horizontalScrollbarAction(action0);
}
void PythonQtShell_QListWidget::horizontalScrollbarValueChanged(int  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("horizontalScrollbarValueChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&value0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::horizontalScrollbarValueChanged(value0);
}
QModelIndex  PythonQtShell_QListWidget::indexAt(const QPoint&  p0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("indexAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QPoint&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&p0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("indexAt", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::indexAt(p0);
}
void PythonQtShell_QListWidget::initPainter(QPainter*  painter0) const
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
  QListWidget::initPainter(painter0);
}
void PythonQtShell_QListWidget::initStyleOption(QStyleOptionFrame*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initStyleOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionFrame*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::initStyleOption(option0);
}
void PythonQtShell_QListWidget::initViewItemOption(QStyleOptionViewItem*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initViewItemOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionViewItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::initViewItemOption(option0);
}
void PythonQtShell_QListWidget::inputMethodEvent(QInputMethodEvent*  event0)
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
  QListWidget::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QListWidget::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QListWidget::inputMethodQuery(query0);
}
bool  PythonQtShell_QListWidget::isIndexHidden(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isIndexHidden");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isIndexHidden", methodInfo, result);
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
  return QListWidget::isIndexHidden(index0);
}
QAbstractItemDelegate*  PythonQtShell_QListWidget::itemDelegateForIndex(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("itemDelegateForIndex");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractItemDelegate*" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QAbstractItemDelegate* returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemDelegateForIndex", methodInfo, result);
          } else {
            returnValue = *((QAbstractItemDelegate**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::itemDelegateForIndex(index0);
}
void PythonQtShell_QListWidget::keyPressEvent(QKeyEvent*  event0)
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
  QListWidget::keyPressEvent(event0);
}
void PythonQtShell_QListWidget::keyReleaseEvent(QKeyEvent*  event0)
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
  QListWidget::keyReleaseEvent(event0);
}
void PythonQtShell_QListWidget::keyboardSearch(const QString&  search0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyboardSearch");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&search0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::keyboardSearch(search0);
}
void PythonQtShell_QListWidget::leaveEvent(QEvent*  event0)
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
  QListWidget::leaveEvent(event0);
}
int  PythonQtShell_QListWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QListWidget::metric(arg__1);
}
QMimeData*  PythonQtShell_QListWidget::mimeData(const QList<QListWidgetItem* >&  items0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMimeData*" , "const QList<QListWidgetItem* >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue{};
      void* args[2] = {nullptr, (void*)&items0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mimeData", methodInfo, result);
          } else {
            returnValue = *((QMimeData**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::mimeData(items0);
}
QStringList  PythonQtShell_QListWidget::mimeTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mimeTypes");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("mimeTypes", methodInfo, result);
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
  return QListWidget::mimeTypes();
}
QSize  PythonQtShell_QListWidget::minimumSizeHint() const
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
  return QListWidget::minimumSizeHint();
}
void PythonQtShell_QListWidget::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QListWidget::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QListWidget::mouseMoveEvent(QMouseEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::mouseMoveEvent(e0);
}
void PythonQtShell_QListWidget::mousePressEvent(QMouseEvent*  event0)
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
  QListWidget::mousePressEvent(event0);
}
void PythonQtShell_QListWidget::mouseReleaseEvent(QMouseEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::mouseReleaseEvent(e0);
}
QModelIndex  PythonQtShell_QListWidget::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("moveCursor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "QAbstractItemView::CursorAction" , "Qt::KeyboardModifiers"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QModelIndex returnValue{};
      void* args[3] = {nullptr, (void*)&cursorAction0, (void*)&modifiers1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("moveCursor", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::moveCursor(cursorAction0, modifiers1);
}
void PythonQtShell_QListWidget::moveEvent(QMoveEvent*  event0)
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
  QListWidget::moveEvent(event0);
}
bool  PythonQtShell_QListWidget::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QListWidget::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QListWidget::paintEngine() const
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
  return QListWidget::paintEngine();
}
void PythonQtShell_QListWidget::paintEvent(QPaintEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::paintEvent(e0);
}
QPaintDevice*  PythonQtShell_QListWidget::redirected(QPoint*  offset0) const
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
  return QListWidget::redirected(offset0);
}
void PythonQtShell_QListWidget::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("reset");
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
  QListWidget::reset();
}
void PythonQtShell_QListWidget::resizeEvent(QResizeEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resizeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QResizeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::resizeEvent(e0);
}
void PythonQtShell_QListWidget::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("rowsAboutToBeRemoved");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {nullptr, (void*)&parent0, (void*)&start1, (void*)&end2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::rowsAboutToBeRemoved(parent0, start1, end2);
}
void PythonQtShell_QListWidget::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("rowsInserted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {nullptr, (void*)&parent0, (void*)&start1, (void*)&end2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::rowsInserted(parent0, start1, end2);
}
void PythonQtShell_QListWidget::scrollContentsBy(int  dx0, int  dy1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("scrollContentsBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&dx0, (void*)&dy1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QListWidget::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("scrollTo");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "QAbstractItemView::ScrollHint"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&index0, (void*)&hint1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::scrollTo(index0, hint1);
}
void PythonQtShell_QListWidget::selectAll()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("selectAll");
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
  QListWidget::selectAll();
}
QList<QModelIndex >  PythonQtShell_QListWidget::selectedIndexes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("selectedIndexes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QModelIndex >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QModelIndex > returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("selectedIndexes", methodInfo, result);
          } else {
            returnValue = *((QList<QModelIndex >*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::selectedIndexes();
}
void PythonQtShell_QListWidget::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("selectionChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QItemSelection&" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&selected0, (void*)&deselected1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::selectionChanged(selected0, deselected1);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QListWidget::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("selectionCommand");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QItemSelectionModel::SelectionFlags" , "const QModelIndex&" , "const QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QItemSelectionModel::SelectionFlags returnValue{};
      void* args[3] = {nullptr, (void*)&index0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("selectionCommand", methodInfo, result);
          } else {
            returnValue = *((QItemSelectionModel::SelectionFlags*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::selectionCommand(index0, event1);
}
void PythonQtShell_QListWidget::setRootIndex(const QModelIndex&  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setRootIndex");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::setRootIndex(index0);
}
void PythonQtShell_QListWidget::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setSelection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&" , "QItemSelectionModel::SelectionFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&rect0, (void*)&command1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::setSelection(rect0, command1);
}
void PythonQtShell_QListWidget::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setSelectionModel");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QItemSelectionModel*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&selectionModel0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::setSelectionModel(selectionModel0);
}
void PythonQtShell_QListWidget::setVisible(bool  visible0)
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
  QListWidget::setVisible(visible0);
}
void PythonQtShell_QListWidget::setupViewport(QWidget*  viewport0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setupViewport");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&viewport0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QListWidget::sharedPainter() const
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
  return QListWidget::sharedPainter();
}
void PythonQtShell_QListWidget::showEvent(QShowEvent*  event0)
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
  QListWidget::showEvent(event0);
}
QSize  PythonQtShell_QListWidget::sizeHint() const
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
  return QListWidget::sizeHint();
}
int  PythonQtShell_QListWidget::sizeHintForColumn(int  column0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sizeHintForColumn");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&column0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForColumn", methodInfo, result);
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
  return QListWidget::sizeHintForColumn(column0);
}
int  PythonQtShell_QListWidget::sizeHintForRow(int  row0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("sizeHintForRow");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&row0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForRow", methodInfo, result);
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
  return QListWidget::sizeHintForRow(row0);
}
void PythonQtShell_QListWidget::startDrag(Qt::DropActions  supportedActions0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("startDrag");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&supportedActions0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::startDrag(supportedActions0);
}
Qt::DropActions  PythonQtShell_QListWidget::supportedDropActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("supportedDropActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
          } else {
            returnValue = *((Qt::DropActions*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::supportedDropActions();
}
void PythonQtShell_QListWidget::tabletEvent(QTabletEvent*  event0)
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
  QListWidget::tabletEvent(event0);
}
void PythonQtShell_QListWidget::timerEvent(QTimerEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::timerEvent(e0);
}
void PythonQtShell_QListWidget::updateEditorData()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateEditorData");
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
  QListWidget::updateEditorData();
}
void PythonQtShell_QListWidget::updateEditorGeometries()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateEditorGeometries");
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
  QListWidget::updateEditorGeometries();
}
void PythonQtShell_QListWidget::updateGeometries()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateGeometries");
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
  QListWidget::updateGeometries();
}
int  PythonQtShell_QListWidget::verticalOffset() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("verticalOffset");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("verticalOffset", methodInfo, result);
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
  return QListWidget::verticalOffset();
}
void PythonQtShell_QListWidget::verticalScrollbarAction(int  action0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("verticalScrollbarAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&action0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::verticalScrollbarAction(action0);
}
void PythonQtShell_QListWidget::verticalScrollbarValueChanged(int  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("verticalScrollbarValueChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&value0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::verticalScrollbarValueChanged(value0);
}
bool  PythonQtShell_QListWidget::viewportEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("viewportEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
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
  return QListWidget::viewportEvent(event0);
}
QSize  PythonQtShell_QListWidget::viewportSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("viewportSizeHint");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("viewportSizeHint", methodInfo, result);
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
  return QListWidget::viewportSizeHint();
}
QRect  PythonQtShell_QListWidget::visualRect(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("visualRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRect" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRect returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("visualRect", methodInfo, result);
          } else {
            returnValue = *((QRect*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::visualRect(index0);
}
QRegion  PythonQtShell_QListWidget::visualRegionForSelection(const QItemSelection&  selection0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("visualRegionForSelection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRegion" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRegion returnValue{};
      void* args[2] = {nullptr, (void*)&selection0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("visualRegionForSelection", methodInfo, result);
          } else {
            returnValue = *((QRegion*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidget::visualRegionForSelection(selection0);
}
void PythonQtShell_QListWidget::wheelEvent(QWheelEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWheelEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidget::wheelEvent(e0);
}
QListWidget* PythonQtWrapper_QListWidget::new_QListWidget(QWidget*  parent)
{ 
return new PythonQtShell_QListWidget(parent); }

const QMetaObject* PythonQtShell_QListWidget::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QListWidget::staticMetaObject);
  } else {
    return &QListWidget::staticMetaObject;
  }
}
int PythonQtShell_QListWidget::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QListWidget::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QListWidget::addItem(QListWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QListWidgetItem* >  item)
{
  ( theWrappedObject->addItem(item));
}

void PythonQtWrapper_QListWidget::addItem(QListWidget* theWrappedObject, const QString&  label)
{
  ( theWrappedObject->addItem(label));
}

void PythonQtWrapper_QListWidget::addItems(QListWidget* theWrappedObject, const QStringList&  labels)
{
  ( theWrappedObject->addItems(labels));
}

void PythonQtWrapper_QListWidget::closePersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
  ( theWrappedObject->closePersistentEditor(item));
}

int  PythonQtWrapper_QListWidget::count(QListWidget* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QListWidgetItem*  PythonQtWrapper_QListWidget::currentItem(QListWidget* theWrappedObject) const
{
  return ( theWrappedObject->currentItem());
}

int  PythonQtWrapper_QListWidget::currentRow(QListWidget* theWrappedObject) const
{
  return ( theWrappedObject->currentRow());
}

bool  PythonQtWrapper_QListWidget::dropMimeData(QListWidget* theWrappedObject, int  index, const QMimeData*  data, Qt::DropAction  action)
{
  return ( ((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->promoted_dropMimeData(index, data, action));
}

void PythonQtWrapper_QListWidget::editItem(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
  ( theWrappedObject->editItem(item));
}

QList<QListWidgetItem* >  PythonQtWrapper_QListWidget::findItems(QListWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const
{
  return ( theWrappedObject->findItems(text, flags));
}

QModelIndex  PythonQtWrapper_QListWidget::indexFromItem(QListWidget* theWrappedObject, const QListWidgetItem*  item) const
{
  return ( theWrappedObject->indexFromItem(item));
}

void PythonQtWrapper_QListWidget::insertItem(QListWidget* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QListWidgetItem* >  item)
{
  ( theWrappedObject->insertItem(row, item));
}

void PythonQtWrapper_QListWidget::insertItem(QListWidget* theWrappedObject, int  row, const QString&  label)
{
  ( theWrappedObject->insertItem(row, label));
}

void PythonQtWrapper_QListWidget::insertItems(QListWidget* theWrappedObject, int  row, const QStringList&  labels)
{
  ( theWrappedObject->insertItems(row, labels));
}

bool  PythonQtWrapper_QListWidget::isPersistentEditorOpen(QListWidget* theWrappedObject, QListWidgetItem*  item) const
{
  return ( theWrappedObject->isPersistentEditorOpen(item));
}

bool  PythonQtWrapper_QListWidget::isSortingEnabled(QListWidget* theWrappedObject) const
{
  return ( theWrappedObject->isSortingEnabled());
}

QListWidgetItem*  PythonQtWrapper_QListWidget::item(QListWidget* theWrappedObject, int  row) const
{
  return ( theWrappedObject->item(row));
}

QListWidgetItem*  PythonQtWrapper_QListWidget::itemAt(QListWidget* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->itemAt(p));
}

QListWidgetItem*  PythonQtWrapper_QListWidget::itemAt(QListWidget* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->itemAt(x, y));
}

QListWidgetItem*  PythonQtWrapper_QListWidget::itemFromIndex(QListWidget* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->itemFromIndex(index));
}

QWidget*  PythonQtWrapper_QListWidget::itemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item) const
{
  return ( theWrappedObject->itemWidget(item));
}

QList<QListWidgetItem* >  PythonQtWrapper_QListWidget::items(QListWidget* theWrappedObject, const QMimeData*  data) const
{
  return ( theWrappedObject->items(data));
}

PythonQtPassOwnershipToPython<QMimeData*  > PythonQtWrapper_QListWidget::mimeData(QListWidget* theWrappedObject, const QList<QListWidgetItem* >&  items) const
{
  return ( ((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->promoted_mimeData(items));
}

QStringList  PythonQtWrapper_QListWidget::mimeTypes(QListWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->promoted_mimeTypes());
}

void PythonQtWrapper_QListWidget::openPersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
  ( theWrappedObject->openPersistentEditor(item));
}

void PythonQtWrapper_QListWidget::removeItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
  ( theWrappedObject->removeItemWidget(item));
}

int  PythonQtWrapper_QListWidget::row(QListWidget* theWrappedObject, const QListWidgetItem*  item) const
{
  return ( theWrappedObject->row(item));
}

QList<QListWidgetItem* >  PythonQtWrapper_QListWidget::selectedItems(QListWidget* theWrappedObject) const
{
  return ( theWrappedObject->selectedItems());
}

void PythonQtWrapper_QListWidget::setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
  ( theWrappedObject->setCurrentItem(item));
}

void PythonQtWrapper_QListWidget::setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item, QItemSelectionModel::SelectionFlags  command)
{
  ( theWrappedObject->setCurrentItem(item, command));
}

void PythonQtWrapper_QListWidget::setCurrentRow(QListWidget* theWrappedObject, int  row)
{
  ( theWrappedObject->setCurrentRow(row));
}

void PythonQtWrapper_QListWidget::setCurrentRow(QListWidget* theWrappedObject, int  row, QItemSelectionModel::SelectionFlags  command)
{
  ( theWrappedObject->setCurrentRow(row, command));
}

void PythonQtWrapper_QListWidget::setItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item, PythonQtPassOwnershipToCPP<QWidget* >  widget)
{
  ( theWrappedObject->setItemWidget(item, widget));
}

void PythonQtWrapper_QListWidget::setSortingEnabled(QListWidget* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setSortingEnabled(enable));
}

void PythonQtWrapper_QListWidget::setSupportedDragActions(QListWidget* theWrappedObject, Qt::DropActions  actions)
{
  ( theWrappedObject->setSupportedDragActions(actions));
}

void PythonQtWrapper_QListWidget::sortItems(QListWidget* theWrappedObject, Qt::SortOrder  order)
{
  ( theWrappedObject->sortItems(order));
}

Qt::DropActions  PythonQtWrapper_QListWidget::supportedDragActions(QListWidget* theWrappedObject) const
{
  return ( theWrappedObject->supportedDragActions());
}

Qt::DropActions  PythonQtWrapper_QListWidget::supportedDropActions(QListWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->promoted_supportedDropActions());
}

PythonQtPassOwnershipToPython<QListWidgetItem*  > PythonQtWrapper_QListWidget::takeItem(QListWidget* theWrappedObject, int  row)
{
  return ( theWrappedObject->takeItem(row));
}

QRect  PythonQtWrapper_QListWidget::visualItemRect(QListWidget* theWrappedObject, const QListWidgetItem*  item) const
{
  return ( theWrappedObject->visualItemRect(item));
}



PythonQtShell_QListWidgetItem::~PythonQtShell_QListWidgetItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QListWidgetItem*  PythonQtShell_QListWidgetItem::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QListWidgetItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QListWidgetItem* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QListWidgetItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QListWidgetItem::clone();
}
QVariant  PythonQtShell_QListWidgetItem::data(int  role0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {nullptr, (void*)&role0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
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
  return QListWidgetItem::data(role0);
}
void PythonQtShell_QListWidgetItem::read(QDataStream&  in0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("read");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDataStream&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&in0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidgetItem::read(in0);
}
void PythonQtShell_QListWidgetItem::setData(int  role0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&role0, (void*)&value1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidgetItem::setData(role0, value1);
}
void PythonQtShell_QListWidgetItem::write(QDataStream&  out0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("write");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDataStream&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&out0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QListWidgetItem::write(out0);
}
QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(PythonQtNewOwnerOfThis<QListWidget* >  listview, int  type)
{ 
return new PythonQtShell_QListWidgetItem(listview, type); }

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(const QIcon&  icon, const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  listview, int  type)
{ 
return new PythonQtShell_QListWidgetItem(icon, text, listview, type); }

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  listview, int  type)
{ 
return new PythonQtShell_QListWidgetItem(text, listview, type); }

QBrush  PythonQtWrapper_QListWidgetItem::background(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->background());
}

Qt::CheckState  PythonQtWrapper_QListWidgetItem::checkState(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->checkState());
}

QListWidgetItem*  PythonQtWrapper_QListWidgetItem::clone(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QVariant  PythonQtWrapper_QListWidgetItem::data(QListWidgetItem* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

Qt::ItemFlags  PythonQtWrapper_QListWidgetItem::flags(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QFont  PythonQtWrapper_QListWidgetItem::font(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QBrush  PythonQtWrapper_QListWidgetItem::foreground(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->foreground());
}

QIcon  PythonQtWrapper_QListWidgetItem::icon(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

bool  PythonQtWrapper_QListWidgetItem::isHidden(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

bool  PythonQtWrapper_QListWidgetItem::isSelected(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

QListWidget*  PythonQtWrapper_QListWidgetItem::listWidget(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->listWidget());
}

void PythonQtWrapper_QListWidgetItem::writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

void PythonQtWrapper_QListWidgetItem::readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

void PythonQtWrapper_QListWidgetItem::read(QListWidgetItem* theWrappedObject, QDataStream&  in)
{
  ( theWrappedObject->read(in));
}

void PythonQtWrapper_QListWidgetItem::setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackground(brush));
}

void PythonQtWrapper_QListWidgetItem::setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state)
{
  ( theWrappedObject->setCheckState(state));
}

void PythonQtWrapper_QListWidgetItem::setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value)
{
  ( theWrappedObject->setData(role, value));
}

void PythonQtWrapper_QListWidgetItem::setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QListWidgetItem::setFont(QListWidgetItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QListWidgetItem::setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForeground(brush));
}

void PythonQtWrapper_QListWidgetItem::setHidden(QListWidgetItem* theWrappedObject, bool  hide)
{
  ( theWrappedObject->setHidden(hide));
}

void PythonQtWrapper_QListWidgetItem::setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(icon));
}

void PythonQtWrapper_QListWidgetItem::setSelected(QListWidgetItem* theWrappedObject, bool  select)
{
  ( theWrappedObject->setSelected(select));
}

void PythonQtWrapper_QListWidgetItem::setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setSizeHint(size));
}

void PythonQtWrapper_QListWidgetItem::setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip)
{
  ( theWrappedObject->setStatusTip(statusTip));
}

void PythonQtWrapper_QListWidgetItem::setText(QListWidgetItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QListWidgetItem::setTextAlignment(QListWidgetItem* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setTextAlignment(alignment));
}

void PythonQtWrapper_QListWidgetItem::setTextAlignment(QListWidgetItem* theWrappedObject, Qt::AlignmentFlag  alignment)
{
  ( theWrappedObject->setTextAlignment(alignment));
}

void PythonQtWrapper_QListWidgetItem::setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment)
{
  ( theWrappedObject->setTextAlignment(alignment));
}

void PythonQtWrapper_QListWidgetItem::setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip)
{
  ( theWrappedObject->setToolTip(toolTip));
}

void PythonQtWrapper_QListWidgetItem::setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis)
{
  ( theWrappedObject->setWhatsThis(whatsThis));
}

QSize  PythonQtWrapper_QListWidgetItem::sizeHint(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QString  PythonQtWrapper_QListWidgetItem::statusTip(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->statusTip());
}

QString  PythonQtWrapper_QListWidgetItem::text(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

int  PythonQtWrapper_QListWidgetItem::textAlignment(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->textAlignment());
}

QString  PythonQtWrapper_QListWidgetItem::toolTip(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

int  PythonQtWrapper_QListWidgetItem::type(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString  PythonQtWrapper_QListWidgetItem::whatsThis(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->whatsThis());
}

void PythonQtWrapper_QListWidgetItem::write(QListWidgetItem* theWrappedObject, QDataStream&  out) const
{
  ( theWrappedObject->write(out));
}



PythonQtShell_QMainWindow::~PythonQtShell_QMainWindow() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMainWindow::actionEvent(QActionEvent*  event0)
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
  QMainWindow::actionEvent(event0);
}
void PythonQtShell_QMainWindow::changeEvent(QEvent*  arg__1)
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
  QMainWindow::changeEvent(arg__1);
}
void PythonQtShell_QMainWindow::childEvent(QChildEvent*  event0)
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
  QMainWindow::childEvent(event0);
}
void PythonQtShell_QMainWindow::closeEvent(QCloseEvent*  event0)
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
  QMainWindow::closeEvent(event0);
}
void PythonQtShell_QMainWindow::contextMenuEvent(QContextMenuEvent*  event0)
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
  QMainWindow::contextMenuEvent(event0);
}
QMenu*  PythonQtShell_QMainWindow::createPopupMenu()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("createPopupMenu");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMenu*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMenu* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createPopupMenu", methodInfo, result);
          } else {
            returnValue = *((QMenu**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QMainWindow::createPopupMenu();
}
void PythonQtShell_QMainWindow::customEvent(QEvent*  event0)
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
  QMainWindow::customEvent(event0);
}
int  PythonQtShell_QMainWindow::devType() const
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
  return QMainWindow::devType();
}
void PythonQtShell_QMainWindow::dragEnterEvent(QDragEnterEvent*  event0)
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
  QMainWindow::dragEnterEvent(event0);
}
void PythonQtShell_QMainWindow::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QMainWindow::dragLeaveEvent(event0);
}
void PythonQtShell_QMainWindow::dragMoveEvent(QDragMoveEvent*  event0)
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
  QMainWindow::dragMoveEvent(event0);
}
void PythonQtShell_QMainWindow::dropEvent(QDropEvent*  event0)
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
  QMainWindow::dropEvent(event0);
}
void PythonQtShell_QMainWindow::enterEvent(QEnterEvent*  event0)
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
  QMainWindow::enterEvent(event0);
}
bool  PythonQtShell_QMainWindow::event(QEvent*  event0)
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
  return QMainWindow::event(event0);
}
bool  PythonQtShell_QMainWindow::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMainWindow::eventFilter(watched0, event1);
}
void PythonQtShell_QMainWindow::focusInEvent(QFocusEvent*  event0)
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
  QMainWindow::focusInEvent(event0);
}
bool  PythonQtShell_QMainWindow::focusNextPrevChild(bool  next0)
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
  return QMainWindow::focusNextPrevChild(next0);
}
void PythonQtShell_QMainWindow::focusOutEvent(QFocusEvent*  event0)
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
  QMainWindow::focusOutEvent(event0);
}
bool  PythonQtShell_QMainWindow::hasHeightForWidth() const
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
  return QMainWindow::hasHeightForWidth();
}
int  PythonQtShell_QMainWindow::heightForWidth(int  arg__1) const
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
  return QMainWindow::heightForWidth(arg__1);
}
void PythonQtShell_QMainWindow::hideEvent(QHideEvent*  event0)
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
  QMainWindow::hideEvent(event0);
}
void PythonQtShell_QMainWindow::initPainter(QPainter*  painter0) const
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
  QMainWindow::initPainter(painter0);
}
void PythonQtShell_QMainWindow::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMainWindow::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMainWindow::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMainWindow::inputMethodQuery(arg__1);
}
void PythonQtShell_QMainWindow::keyPressEvent(QKeyEvent*  event0)
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
  QMainWindow::keyPressEvent(event0);
}
void PythonQtShell_QMainWindow::keyReleaseEvent(QKeyEvent*  event0)
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
  QMainWindow::keyReleaseEvent(event0);
}
void PythonQtShell_QMainWindow::leaveEvent(QEvent*  event0)
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
  QMainWindow::leaveEvent(event0);
}
int  PythonQtShell_QMainWindow::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMainWindow::metric(arg__1);
}
QSize  PythonQtShell_QMainWindow::minimumSizeHint() const
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
  return QMainWindow::minimumSizeHint();
}
void PythonQtShell_QMainWindow::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QMainWindow::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QMainWindow::mouseMoveEvent(QMouseEvent*  event0)
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
  QMainWindow::mouseMoveEvent(event0);
}
void PythonQtShell_QMainWindow::mousePressEvent(QMouseEvent*  event0)
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
  QMainWindow::mousePressEvent(event0);
}
void PythonQtShell_QMainWindow::mouseReleaseEvent(QMouseEvent*  event0)
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
  QMainWindow::mouseReleaseEvent(event0);
}
void PythonQtShell_QMainWindow::moveEvent(QMoveEvent*  event0)
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
  QMainWindow::moveEvent(event0);
}
bool  PythonQtShell_QMainWindow::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QMainWindow::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QMainWindow::paintEngine() const
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
  return QMainWindow::paintEngine();
}
void PythonQtShell_QMainWindow::paintEvent(QPaintEvent*  event0)
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
  QMainWindow::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QMainWindow::redirected(QPoint*  offset0) const
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
  return QMainWindow::redirected(offset0);
}
void PythonQtShell_QMainWindow::resizeEvent(QResizeEvent*  event0)
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
  QMainWindow::resizeEvent(event0);
}
void PythonQtShell_QMainWindow::setVisible(bool  visible0)
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
  QMainWindow::setVisible(visible0);
}
QPainter*  PythonQtShell_QMainWindow::sharedPainter() const
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
  return QMainWindow::sharedPainter();
}
void PythonQtShell_QMainWindow::showEvent(QShowEvent*  event0)
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
  QMainWindow::showEvent(event0);
}
QSize  PythonQtShell_QMainWindow::sizeHint() const
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
  return QMainWindow::sizeHint();
}
void PythonQtShell_QMainWindow::tabletEvent(QTabletEvent*  event0)
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
  QMainWindow::tabletEvent(event0);
}
void PythonQtShell_QMainWindow::timerEvent(QTimerEvent*  event0)
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
  QMainWindow::timerEvent(event0);
}
void PythonQtShell_QMainWindow::wheelEvent(QWheelEvent*  event0)
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
  QMainWindow::wheelEvent(event0);
}
QMainWindow* PythonQtWrapper_QMainWindow::new_QMainWindow(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QMainWindow(parent, flags); }

const QMetaObject* PythonQtShell_QMainWindow::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMainWindow::staticMetaObject);
  } else {
    return &QMainWindow::staticMetaObject;
  }
}
int PythonQtShell_QMainWindow::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMainWindow::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QMainWindow::addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget)
{
  ( theWrappedObject->addDockWidget(area, dockwidget));
}

void PythonQtWrapper_QMainWindow::addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation)
{
  ( theWrappedObject->addDockWidget(area, dockwidget, orientation));
}

void PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar)
{
  ( theWrappedObject->addToolBar(toolbar));
}

void PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar)
{
  ( theWrappedObject->addToolBar(area, toolbar));
}

QToolBar*  PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, const QString&  title)
{
  return ( theWrappedObject->addToolBar(title));
}

void PythonQtWrapper_QMainWindow::addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area)
{
  ( theWrappedObject->addToolBarBreak(area));
}

QWidget*  PythonQtWrapper_QMainWindow::centralWidget(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->centralWidget());
}

Qt::DockWidgetArea  PythonQtWrapper_QMainWindow::corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const
{
  return ( theWrappedObject->corner(corner));
}

QMenu*  PythonQtWrapper_QMainWindow::createPopupMenu(QMainWindow* theWrappedObject)
{
  return ( theWrappedObject->createPopupMenu());
}

QMainWindow::DockOptions  PythonQtWrapper_QMainWindow::dockOptions(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->dockOptions());
}

Qt::DockWidgetArea  PythonQtWrapper_QMainWindow::dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const
{
  return ( theWrappedObject->dockWidgetArea(dockwidget));
}

bool  PythonQtWrapper_QMainWindow::documentMode(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->documentMode());
}

QSize  PythonQtWrapper_QMainWindow::iconSize(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->iconSize());
}

void PythonQtWrapper_QMainWindow::insertToolBar(QMainWindow* theWrappedObject, QToolBar*  before, QToolBar*  toolbar)
{
  ( theWrappedObject->insertToolBar(before, toolbar));
}

void PythonQtWrapper_QMainWindow::insertToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before)
{
  ( theWrappedObject->insertToolBarBreak(before));
}

bool  PythonQtWrapper_QMainWindow::isAnimated(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->isAnimated());
}

bool  PythonQtWrapper_QMainWindow::isDockNestingEnabled(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->isDockNestingEnabled());
}

bool  PythonQtWrapper_QMainWindow::isSeparator(QMainWindow* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->isSeparator(pos));
}

QMenuBar*  PythonQtWrapper_QMainWindow::menuBar(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->menuBar());
}

QWidget*  PythonQtWrapper_QMainWindow::menuWidget(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->menuWidget());
}

void PythonQtWrapper_QMainWindow::removeDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget)
{
  ( theWrappedObject->removeDockWidget(dockwidget));
}

void PythonQtWrapper_QMainWindow::removeToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar)
{
  ( theWrappedObject->removeToolBar(toolbar));
}

void PythonQtWrapper_QMainWindow::removeToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before)
{
  ( theWrappedObject->removeToolBarBreak(before));
}

void PythonQtWrapper_QMainWindow::resizeDocks(QMainWindow* theWrappedObject, const QList<QDockWidget* >&  docks, const QList<int >&  sizes, Qt::Orientation  orientation)
{
  ( theWrappedObject->resizeDocks(docks, sizes, orientation));
}

bool  PythonQtWrapper_QMainWindow::restoreDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget)
{
  return ( theWrappedObject->restoreDockWidget(dockwidget));
}

bool  PythonQtWrapper_QMainWindow::restoreState(QMainWindow* theWrappedObject, const QByteArray&  state, int  version)
{
  return ( theWrappedObject->restoreState(state, version));
}

QByteArray  PythonQtWrapper_QMainWindow::saveState(QMainWindow* theWrappedObject, int  version) const
{
  return ( theWrappedObject->saveState(version));
}

void PythonQtWrapper_QMainWindow::setCentralWidget(QMainWindow* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setCentralWidget(widget));
}

void PythonQtWrapper_QMainWindow::setCorner(QMainWindow* theWrappedObject, Qt::Corner  corner, Qt::DockWidgetArea  area)
{
  ( theWrappedObject->setCorner(corner, area));
}

void PythonQtWrapper_QMainWindow::setDockOptions(QMainWindow* theWrappedObject, QMainWindow::DockOptions  options)
{
  ( theWrappedObject->setDockOptions(options));
}

void PythonQtWrapper_QMainWindow::setDocumentMode(QMainWindow* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setDocumentMode(enabled));
}

void PythonQtWrapper_QMainWindow::setIconSize(QMainWindow* theWrappedObject, const QSize&  iconSize)
{
  ( theWrappedObject->setIconSize(iconSize));
}

void PythonQtWrapper_QMainWindow::setMenuBar(QMainWindow* theWrappedObject, QMenuBar*  menubar)
{
  ( theWrappedObject->setMenuBar(menubar));
}

void PythonQtWrapper_QMainWindow::setMenuWidget(QMainWindow* theWrappedObject, QWidget*  menubar)
{
  ( theWrappedObject->setMenuWidget(menubar));
}

void PythonQtWrapper_QMainWindow::setStatusBar(QMainWindow* theWrappedObject, QStatusBar*  statusbar)
{
  ( theWrappedObject->setStatusBar(statusbar));
}

void PythonQtWrapper_QMainWindow::setTabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetAreas  areas, QTabWidget::TabPosition  tabPosition)
{
  ( theWrappedObject->setTabPosition(areas, tabPosition));
}

void PythonQtWrapper_QMainWindow::setTabShape(QMainWindow* theWrappedObject, QTabWidget::TabShape  tabShape)
{
  ( theWrappedObject->setTabShape(tabShape));
}

void PythonQtWrapper_QMainWindow::setToolButtonStyle(QMainWindow* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle)
{
  ( theWrappedObject->setToolButtonStyle(toolButtonStyle));
}

void PythonQtWrapper_QMainWindow::splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation)
{
  ( theWrappedObject->splitDockWidget(after, dockwidget, orientation));
}

QStatusBar*  PythonQtWrapper_QMainWindow::statusBar(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->statusBar());
}

QTabWidget::TabPosition  PythonQtWrapper_QMainWindow::tabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area) const
{
  return ( theWrappedObject->tabPosition(area));
}

QTabWidget::TabShape  PythonQtWrapper_QMainWindow::tabShape(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->tabShape());
}

QList<QDockWidget* >  PythonQtWrapper_QMainWindow::tabifiedDockWidgets(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const
{
  return ( theWrappedObject->tabifiedDockWidgets(dockwidget));
}

void PythonQtWrapper_QMainWindow::tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second)
{
  ( theWrappedObject->tabifyDockWidget(first, second));
}

QWidget*  PythonQtWrapper_QMainWindow::takeCentralWidget(QMainWindow* theWrappedObject)
{
  return ( theWrappedObject->takeCentralWidget());
}

Qt::ToolBarArea  PythonQtWrapper_QMainWindow::toolBarArea(QMainWindow* theWrappedObject, const QToolBar*  toolbar) const
{
  return ( theWrappedObject->toolBarArea(toolbar));
}

bool  PythonQtWrapper_QMainWindow::toolBarBreak(QMainWindow* theWrappedObject, QToolBar*  toolbar) const
{
  return ( theWrappedObject->toolBarBreak(toolbar));
}

Qt::ToolButtonStyle  PythonQtWrapper_QMainWindow::toolButtonStyle(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->toolButtonStyle());
}

bool  PythonQtWrapper_QMainWindow::unifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->unifiedTitleAndToolBarOnMac());
}



QMargins* PythonQtWrapper_QMargins::new_QMargins()
{ 
return new QMargins(); }

QMargins* PythonQtWrapper_QMargins::new_QMargins(int  left, int  top, int  right, int  bottom)
{ 
return new QMargins(left, top, right, bottom); }

int  PythonQtWrapper_QMargins::bottom(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

bool  PythonQtWrapper_QMargins::isNull(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QMargins::left(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

bool  PythonQtWrapper_QMargins::__ne__(QMargins* theWrappedObject, const QMargins&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QMargins::__ne__(QMargins* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QMargins  PythonQtWrapper_QMargins::__mul__(QMargins* theWrappedObject, int  factor)
{
  return ( (*theWrappedObject)* factor);
}

QMargins  PythonQtWrapper_QMargins::__mul__(QMargins* theWrappedObject, qreal  factor)
{
  return ( (*theWrappedObject)* factor);
}

QMargins*  PythonQtWrapper_QMargins::__imul__(QMargins* theWrappedObject, int  arg__1)
{
  return &( (*theWrappedObject)*= arg__1);
}

QMargins*  PythonQtWrapper_QMargins::__imul__(QMargins* theWrappedObject, qreal  arg__1)
{
  return &( (*theWrappedObject)*= arg__1);
}

QMargins  PythonQtWrapper_QMargins::__add__(QMargins* theWrappedObject)
{
  return (+  (*theWrappedObject));
}

QMargins  PythonQtWrapper_QMargins::__add__(QMargins* theWrappedObject, const QMargins&  m2)
{
  return ( (*theWrappedObject)+ m2);
}

QRect  PythonQtWrapper_QMargins::__add__(QMargins* theWrappedObject, const QRect&  rectangle)
{
  return ( (*theWrappedObject)+ rectangle);
}

QMargins  PythonQtWrapper_QMargins::__add__(QMargins* theWrappedObject, int  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QMargins*  PythonQtWrapper_QMargins::__iadd__(QMargins* theWrappedObject, const QMargins&  margins)
{
  return &( (*theWrappedObject)+= margins);
}

QMargins*  PythonQtWrapper_QMargins::__iadd__(QMargins* theWrappedObject, int  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QMargins  PythonQtWrapper_QMargins::__sub__(QMargins* theWrappedObject)
{
  return (-  (*theWrappedObject));
}

QMargins  PythonQtWrapper_QMargins::__sub__(QMargins* theWrappedObject, const QMargins&  m2)
{
  return ( (*theWrappedObject)- m2);
}

QMargins  PythonQtWrapper_QMargins::__sub__(QMargins* theWrappedObject, int  rhs)
{
  return ( (*theWrappedObject)- rhs);
}

QMargins*  PythonQtWrapper_QMargins::__isub__(QMargins* theWrappedObject, const QMargins&  margins)
{
  return &( (*theWrappedObject)-= margins);
}

QMargins*  PythonQtWrapper_QMargins::__isub__(QMargins* theWrappedObject, int  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QMargins  PythonQtWrapper_QMargins::__div__(QMargins* theWrappedObject, int  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QMargins  PythonQtWrapper_QMargins::__div__(QMargins* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QMargins*  PythonQtWrapper_QMargins::__idiv__(QMargins* theWrappedObject, int  arg__1)
{
  return &( (*theWrappedObject)/= arg__1);
}

QMargins*  PythonQtWrapper_QMargins::__idiv__(QMargins* theWrappedObject, qreal  arg__1)
{
  return &( (*theWrappedObject)/= arg__1);
}

void PythonQtWrapper_QMargins::writeTo(QMargins* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QMargins::__eq__(QMargins* theWrappedObject, const QMargins&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QMargins::__eq__(QMargins* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QMargins::readFrom(QMargins* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QMargins  PythonQtWrapper_QMargins::__or__(QMargins* theWrappedObject, const QMargins&  m2)
{
  return ( (*theWrappedObject)| m2);
}

int  PythonQtWrapper_QMargins::right(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

void PythonQtWrapper_QMargins::setBottom(QMargins* theWrappedObject, int  bottom)
{
  ( theWrappedObject->setBottom(bottom));
}

void PythonQtWrapper_QMargins::setLeft(QMargins* theWrappedObject, int  left)
{
  ( theWrappedObject->setLeft(left));
}

void PythonQtWrapper_QMargins::setRight(QMargins* theWrappedObject, int  right)
{
  ( theWrappedObject->setRight(right));
}

void PythonQtWrapper_QMargins::setTop(QMargins* theWrappedObject, int  top)
{
  ( theWrappedObject->setTop(top));
}

QMarginsF  PythonQtWrapper_QMargins::toMarginsF(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->toMarginsF());
}

int  PythonQtWrapper_QMargins::top(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

QString PythonQtWrapper_QMargins::py_toString(QMargins* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QMdiArea::~PythonQtShell_QMdiArea() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMdiArea::actionEvent(QActionEvent*  event0)
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
  QMdiArea::actionEvent(event0);
}
void PythonQtShell_QMdiArea::changeEvent(QEvent*  arg__1)
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
  QMdiArea::changeEvent(arg__1);
}
void PythonQtShell_QMdiArea::childEvent(QChildEvent*  childEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&childEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiArea::childEvent(childEvent0);
}
void PythonQtShell_QMdiArea::closeEvent(QCloseEvent*  event0)
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
  QMdiArea::closeEvent(event0);
}
void PythonQtShell_QMdiArea::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QMdiArea::contextMenuEvent(arg__1);
}
void PythonQtShell_QMdiArea::customEvent(QEvent*  event0)
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
  QMdiArea::customEvent(event0);
}
int  PythonQtShell_QMdiArea::devType() const
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
  return QMdiArea::devType();
}
void PythonQtShell_QMdiArea::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QMdiArea::dragEnterEvent(arg__1);
}
void PythonQtShell_QMdiArea::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QMdiArea::dragLeaveEvent(arg__1);
}
void PythonQtShell_QMdiArea::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QMdiArea::dragMoveEvent(arg__1);
}
void PythonQtShell_QMdiArea::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QMdiArea::dropEvent(arg__1);
}
void PythonQtShell_QMdiArea::enterEvent(QEnterEvent*  event0)
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
  QMdiArea::enterEvent(event0);
}
bool  PythonQtShell_QMdiArea::event(QEvent*  event0)
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
  return QMdiArea::event(event0);
}
bool  PythonQtShell_QMdiArea::eventFilter(QObject*  object0, QEvent*  event1)
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
      void* args[3] = {nullptr, (void*)&object0, (void*)&event1};
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
  return QMdiArea::eventFilter(object0, event1);
}
void PythonQtShell_QMdiArea::focusInEvent(QFocusEvent*  event0)
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
  QMdiArea::focusInEvent(event0);
}
bool  PythonQtShell_QMdiArea::focusNextPrevChild(bool  next0)
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
  return QMdiArea::focusNextPrevChild(next0);
}
void PythonQtShell_QMdiArea::focusOutEvent(QFocusEvent*  event0)
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
  QMdiArea::focusOutEvent(event0);
}
bool  PythonQtShell_QMdiArea::hasHeightForWidth() const
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
  return QMdiArea::hasHeightForWidth();
}
int  PythonQtShell_QMdiArea::heightForWidth(int  arg__1) const
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
  return QMdiArea::heightForWidth(arg__1);
}
void PythonQtShell_QMdiArea::hideEvent(QHideEvent*  event0)
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
  QMdiArea::hideEvent(event0);
}
void PythonQtShell_QMdiArea::initPainter(QPainter*  painter0) const
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
  QMdiArea::initPainter(painter0);
}
void PythonQtShell_QMdiArea::initStyleOption(QStyleOptionFrame*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initStyleOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionFrame*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiArea::initStyleOption(option0);
}
void PythonQtShell_QMdiArea::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMdiArea::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMdiArea::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMdiArea::inputMethodQuery(arg__1);
}
void PythonQtShell_QMdiArea::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QMdiArea::keyPressEvent(arg__1);
}
void PythonQtShell_QMdiArea::keyReleaseEvent(QKeyEvent*  event0)
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
  QMdiArea::keyReleaseEvent(event0);
}
void PythonQtShell_QMdiArea::leaveEvent(QEvent*  event0)
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
  QMdiArea::leaveEvent(event0);
}
int  PythonQtShell_QMdiArea::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMdiArea::metric(arg__1);
}
QSize  PythonQtShell_QMdiArea::minimumSizeHint() const
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
  return QMdiArea::minimumSizeHint();
}
void PythonQtShell_QMdiArea::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMdiArea::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QMdiArea::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMdiArea::mouseMoveEvent(arg__1);
}
void PythonQtShell_QMdiArea::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMdiArea::mousePressEvent(arg__1);
}
void PythonQtShell_QMdiArea::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMdiArea::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QMdiArea::moveEvent(QMoveEvent*  event0)
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
  QMdiArea::moveEvent(event0);
}
bool  PythonQtShell_QMdiArea::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QMdiArea::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QMdiArea::paintEngine() const
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
  return QMdiArea::paintEngine();
}
void PythonQtShell_QMdiArea::paintEvent(QPaintEvent*  paintEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&paintEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiArea::paintEvent(paintEvent0);
}
QPaintDevice*  PythonQtShell_QMdiArea::redirected(QPoint*  offset0) const
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
  return QMdiArea::redirected(offset0);
}
void PythonQtShell_QMdiArea::resizeEvent(QResizeEvent*  resizeEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resizeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QResizeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&resizeEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiArea::resizeEvent(resizeEvent0);
}
void PythonQtShell_QMdiArea::scrollContentsBy(int  dx0, int  dy1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("scrollContentsBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&dx0, (void*)&dy1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiArea::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QMdiArea::setVisible(bool  visible0)
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
  QMdiArea::setVisible(visible0);
}
void PythonQtShell_QMdiArea::setupViewport(QWidget*  viewport0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setupViewport");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&viewport0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiArea::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QMdiArea::sharedPainter() const
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
  return QMdiArea::sharedPainter();
}
void PythonQtShell_QMdiArea::showEvent(QShowEvent*  showEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("showEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QShowEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&showEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiArea::showEvent(showEvent0);
}
QSize  PythonQtShell_QMdiArea::sizeHint() const
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
  return QMdiArea::sizeHint();
}
void PythonQtShell_QMdiArea::tabletEvent(QTabletEvent*  event0)
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
  QMdiArea::tabletEvent(event0);
}
void PythonQtShell_QMdiArea::timerEvent(QTimerEvent*  timerEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&timerEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiArea::timerEvent(timerEvent0);
}
bool  PythonQtShell_QMdiArea::viewportEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("viewportEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
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
  return QMdiArea::viewportEvent(event0);
}
QSize  PythonQtShell_QMdiArea::viewportSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("viewportSizeHint");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("viewportSizeHint", methodInfo, result);
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
  return QMdiArea::viewportSizeHint();
}
void PythonQtShell_QMdiArea::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWheelEvent*"};
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
  QMdiArea::wheelEvent(arg__1);
}
QMdiArea* PythonQtWrapper_QMdiArea::new_QMdiArea(QWidget*  parent)
{ 
return new PythonQtShell_QMdiArea(parent); }

const QMetaObject* PythonQtShell_QMdiArea::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMdiArea::staticMetaObject);
  } else {
    return &QMdiArea::staticMetaObject;
  }
}
int PythonQtShell_QMdiArea::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMdiArea::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QMdiArea::WindowOrder  PythonQtWrapper_QMdiArea::activationOrder(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->activationOrder());
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::activeSubWindow(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->activeSubWindow());
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags)
{
  return ( theWrappedObject->addSubWindow(widget, flags));
}

QBrush  PythonQtWrapper_QMdiArea::background(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->background());
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::currentSubWindow(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->currentSubWindow());
}

bool  PythonQtWrapper_QMdiArea::documentMode(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->documentMode());
}

void PythonQtWrapper_QMdiArea::removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->removeSubWindow(widget));
}

void PythonQtWrapper_QMdiArea::setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order)
{
  ( theWrappedObject->setActivationOrder(order));
}

void PythonQtWrapper_QMdiArea::setBackground(QMdiArea* theWrappedObject, const QBrush&  background)
{
  ( theWrappedObject->setBackground(background));
}

void PythonQtWrapper_QMdiArea::setDocumentMode(QMdiArea* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setDocumentMode(enabled));
}

void PythonQtWrapper_QMdiArea::setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QMdiArea::setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position)
{
  ( theWrappedObject->setTabPosition(position));
}

void PythonQtWrapper_QMdiArea::setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape)
{
  ( theWrappedObject->setTabShape(shape));
}

void PythonQtWrapper_QMdiArea::setTabsClosable(QMdiArea* theWrappedObject, bool  closable)
{
  ( theWrappedObject->setTabsClosable(closable));
}

void PythonQtWrapper_QMdiArea::setTabsMovable(QMdiArea* theWrappedObject, bool  movable)
{
  ( theWrappedObject->setTabsMovable(movable));
}

void PythonQtWrapper_QMdiArea::setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode)
{
  ( theWrappedObject->setViewMode(mode));
}

QList<QMdiSubWindow* >  PythonQtWrapper_QMdiArea::subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order) const
{
  return ( theWrappedObject->subWindowList(order));
}

QTabWidget::TabPosition  PythonQtWrapper_QMdiArea::tabPosition(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->tabPosition());
}

QTabWidget::TabShape  PythonQtWrapper_QMdiArea::tabShape(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->tabShape());
}

bool  PythonQtWrapper_QMdiArea::tabsClosable(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->tabsClosable());
}

bool  PythonQtWrapper_QMdiArea::tabsMovable(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->tabsMovable());
}

bool  PythonQtWrapper_QMdiArea::testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const
{
  return ( theWrappedObject->testOption(opton));
}

QMdiArea::ViewMode  PythonQtWrapper_QMdiArea::viewMode(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->viewMode());
}



PythonQtShell_QMdiSubWindow::~PythonQtShell_QMdiSubWindow() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMdiSubWindow::actionEvent(QActionEvent*  event0)
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
  QMdiSubWindow::actionEvent(event0);
}
void PythonQtShell_QMdiSubWindow::changeEvent(QEvent*  changeEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("changeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&changeEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::changeEvent(changeEvent0);
}
void PythonQtShell_QMdiSubWindow::childEvent(QChildEvent*  childEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&childEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::childEvent(childEvent0);
}
void PythonQtShell_QMdiSubWindow::closeEvent(QCloseEvent*  closeEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("closeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCloseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&closeEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::closeEvent(closeEvent0);
}
void PythonQtShell_QMdiSubWindow::contextMenuEvent(QContextMenuEvent*  contextMenuEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&contextMenuEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::contextMenuEvent(contextMenuEvent0);
}
void PythonQtShell_QMdiSubWindow::customEvent(QEvent*  event0)
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
  QMdiSubWindow::customEvent(event0);
}
int  PythonQtShell_QMdiSubWindow::devType() const
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
  return QMdiSubWindow::devType();
}
void PythonQtShell_QMdiSubWindow::dragEnterEvent(QDragEnterEvent*  event0)
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
  QMdiSubWindow::dragEnterEvent(event0);
}
void PythonQtShell_QMdiSubWindow::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QMdiSubWindow::dragLeaveEvent(event0);
}
void PythonQtShell_QMdiSubWindow::dragMoveEvent(QDragMoveEvent*  event0)
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
  QMdiSubWindow::dragMoveEvent(event0);
}
void PythonQtShell_QMdiSubWindow::dropEvent(QDropEvent*  event0)
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
  QMdiSubWindow::dropEvent(event0);
}
void PythonQtShell_QMdiSubWindow::enterEvent(QEnterEvent*  event0)
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
  QMdiSubWindow::enterEvent(event0);
}
bool  PythonQtShell_QMdiSubWindow::event(QEvent*  event0)
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
  return QMdiSubWindow::event(event0);
}
bool  PythonQtShell_QMdiSubWindow::eventFilter(QObject*  object0, QEvent*  event1)
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
      void* args[3] = {nullptr, (void*)&object0, (void*)&event1};
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
  return QMdiSubWindow::eventFilter(object0, event1);
}
void PythonQtShell_QMdiSubWindow::focusInEvent(QFocusEvent*  focusInEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusInEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&focusInEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::focusInEvent(focusInEvent0);
}
bool  PythonQtShell_QMdiSubWindow::focusNextPrevChild(bool  next0)
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
  return QMdiSubWindow::focusNextPrevChild(next0);
}
void PythonQtShell_QMdiSubWindow::focusOutEvent(QFocusEvent*  focusOutEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&focusOutEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::focusOutEvent(focusOutEvent0);
}
bool  PythonQtShell_QMdiSubWindow::hasHeightForWidth() const
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
  return QMdiSubWindow::hasHeightForWidth();
}
int  PythonQtShell_QMdiSubWindow::heightForWidth(int  arg__1) const
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
  return QMdiSubWindow::heightForWidth(arg__1);
}
void PythonQtShell_QMdiSubWindow::hideEvent(QHideEvent*  hideEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hideEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QHideEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&hideEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::hideEvent(hideEvent0);
}
void PythonQtShell_QMdiSubWindow::initPainter(QPainter*  painter0) const
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
  QMdiSubWindow::initPainter(painter0);
}
void PythonQtShell_QMdiSubWindow::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMdiSubWindow::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMdiSubWindow::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMdiSubWindow::inputMethodQuery(arg__1);
}
void PythonQtShell_QMdiSubWindow::keyPressEvent(QKeyEvent*  keyEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&keyEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::keyPressEvent(keyEvent0);
}
void PythonQtShell_QMdiSubWindow::keyReleaseEvent(QKeyEvent*  event0)
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
  QMdiSubWindow::keyReleaseEvent(event0);
}
void PythonQtShell_QMdiSubWindow::leaveEvent(QEvent*  leaveEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("leaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&leaveEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::leaveEvent(leaveEvent0);
}
int  PythonQtShell_QMdiSubWindow::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMdiSubWindow::metric(arg__1);
}
QSize  PythonQtShell_QMdiSubWindow::minimumSizeHint() const
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
  return QMdiSubWindow::minimumSizeHint();
}
void PythonQtShell_QMdiSubWindow::mouseDoubleClickEvent(QMouseEvent*  mouseEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&mouseEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::mouseDoubleClickEvent(mouseEvent0);
}
void PythonQtShell_QMdiSubWindow::mouseMoveEvent(QMouseEvent*  mouseEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&mouseEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::mouseMoveEvent(mouseEvent0);
}
void PythonQtShell_QMdiSubWindow::mousePressEvent(QMouseEvent*  mouseEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&mouseEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::mousePressEvent(mouseEvent0);
}
void PythonQtShell_QMdiSubWindow::mouseReleaseEvent(QMouseEvent*  mouseEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&mouseEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::mouseReleaseEvent(mouseEvent0);
}
void PythonQtShell_QMdiSubWindow::moveEvent(QMoveEvent*  moveEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("moveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&moveEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::moveEvent(moveEvent0);
}
bool  PythonQtShell_QMdiSubWindow::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QMdiSubWindow::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QMdiSubWindow::paintEngine() const
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
  return QMdiSubWindow::paintEngine();
}
void PythonQtShell_QMdiSubWindow::paintEvent(QPaintEvent*  paintEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&paintEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::paintEvent(paintEvent0);
}
QPaintDevice*  PythonQtShell_QMdiSubWindow::redirected(QPoint*  offset0) const
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
  return QMdiSubWindow::redirected(offset0);
}
void PythonQtShell_QMdiSubWindow::resizeEvent(QResizeEvent*  resizeEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resizeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QResizeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&resizeEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::resizeEvent(resizeEvent0);
}
void PythonQtShell_QMdiSubWindow::setVisible(bool  visible0)
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
  QMdiSubWindow::setVisible(visible0);
}
QPainter*  PythonQtShell_QMdiSubWindow::sharedPainter() const
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
  return QMdiSubWindow::sharedPainter();
}
void PythonQtShell_QMdiSubWindow::showEvent(QShowEvent*  showEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("showEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QShowEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&showEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::showEvent(showEvent0);
}
QSize  PythonQtShell_QMdiSubWindow::sizeHint() const
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
  return QMdiSubWindow::sizeHint();
}
void PythonQtShell_QMdiSubWindow::tabletEvent(QTabletEvent*  event0)
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
  QMdiSubWindow::tabletEvent(event0);
}
void PythonQtShell_QMdiSubWindow::timerEvent(QTimerEvent*  timerEvent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&timerEvent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMdiSubWindow::timerEvent(timerEvent0);
}
void PythonQtShell_QMdiSubWindow::wheelEvent(QWheelEvent*  event0)
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
  QMdiSubWindow::wheelEvent(event0);
}
QMdiSubWindow* PythonQtWrapper_QMdiSubWindow::new_QMdiSubWindow(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QMdiSubWindow(parent, flags); }

const QMetaObject* PythonQtShell_QMdiSubWindow::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMdiSubWindow::staticMetaObject);
  } else {
    return &QMdiSubWindow::staticMetaObject;
  }
}
int PythonQtShell_QMdiSubWindow::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMdiSubWindow::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QMdiSubWindow::isShaded(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->isShaded());
}

int  PythonQtWrapper_QMdiSubWindow::keyboardPageStep(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->keyboardPageStep());
}

int  PythonQtWrapper_QMdiSubWindow::keyboardSingleStep(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->keyboardSingleStep());
}

QWidget*  PythonQtWrapper_QMdiSubWindow::maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->maximizedButtonsWidget());
}

QWidget*  PythonQtWrapper_QMdiSubWindow::maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->maximizedSystemMenuIconWidget());
}

QMdiArea*  PythonQtWrapper_QMdiSubWindow::mdiArea(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->mdiArea());
}

void PythonQtWrapper_QMdiSubWindow::setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step)
{
  ( theWrappedObject->setKeyboardPageStep(step));
}

void PythonQtWrapper_QMdiSubWindow::setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step)
{
  ( theWrappedObject->setKeyboardSingleStep(step));
}

void PythonQtWrapper_QMdiSubWindow::setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QMdiSubWindow::setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu)
{
  ( theWrappedObject->setSystemMenu(systemMenu));
}

void PythonQtWrapper_QMdiSubWindow::setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setWidget(widget));
}

QMenu*  PythonQtWrapper_QMdiSubWindow::systemMenu(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->systemMenu());
}

bool  PythonQtWrapper_QMdiSubWindow::testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const
{
  return ( theWrappedObject->testOption(arg__1));
}

QWidget*  PythonQtWrapper_QMdiSubWindow::widget(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



PythonQtShell_QMenu::~PythonQtShell_QMenu() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMenu::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("actionEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QActionEvent*"};
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
  QMenu::actionEvent(arg__1);
}
void PythonQtShell_QMenu::changeEvent(QEvent*  arg__1)
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
  QMenu::changeEvent(arg__1);
}
void PythonQtShell_QMenu::childEvent(QChildEvent*  event0)
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
  QMenu::childEvent(event0);
}
void PythonQtShell_QMenu::closeEvent(QCloseEvent*  event0)
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
  QMenu::closeEvent(event0);
}
void PythonQtShell_QMenu::contextMenuEvent(QContextMenuEvent*  event0)
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
  QMenu::contextMenuEvent(event0);
}
void PythonQtShell_QMenu::customEvent(QEvent*  event0)
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
  QMenu::customEvent(event0);
}
int  PythonQtShell_QMenu::devType() const
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
  return QMenu::devType();
}
void PythonQtShell_QMenu::dragEnterEvent(QDragEnterEvent*  event0)
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
  QMenu::dragEnterEvent(event0);
}
void PythonQtShell_QMenu::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QMenu::dragLeaveEvent(event0);
}
void PythonQtShell_QMenu::dragMoveEvent(QDragMoveEvent*  event0)
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
  QMenu::dragMoveEvent(event0);
}
void PythonQtShell_QMenu::dropEvent(QDropEvent*  event0)
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
  QMenu::dropEvent(event0);
}
void PythonQtShell_QMenu::enterEvent(QEnterEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("enterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEnterEvent*"};
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
  QMenu::enterEvent(arg__1);
}
bool  PythonQtShell_QMenu::event(QEvent*  arg__1)
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
  return QMenu::event(arg__1);
}
bool  PythonQtShell_QMenu::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMenu::eventFilter(watched0, event1);
}
void PythonQtShell_QMenu::focusInEvent(QFocusEvent*  event0)
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
  QMenu::focusInEvent(event0);
}
bool  PythonQtShell_QMenu::focusNextPrevChild(bool  next0)
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
  return QMenu::focusNextPrevChild(next0);
}
void PythonQtShell_QMenu::focusOutEvent(QFocusEvent*  event0)
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
  QMenu::focusOutEvent(event0);
}
bool  PythonQtShell_QMenu::hasHeightForWidth() const
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
  return QMenu::hasHeightForWidth();
}
int  PythonQtShell_QMenu::heightForWidth(int  arg__1) const
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
  return QMenu::heightForWidth(arg__1);
}
void PythonQtShell_QMenu::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hideEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QHideEvent*"};
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
  QMenu::hideEvent(arg__1);
}
void PythonQtShell_QMenu::initPainter(QPainter*  painter0) const
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
  QMenu::initPainter(painter0);
}
void PythonQtShell_QMenu::initStyleOption(QStyleOptionMenuItem*  option0, const QAction*  action1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initStyleOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionMenuItem*" , "const QAction*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&option0, (void*)&action1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMenu::initStyleOption(option0, action1);
}
void PythonQtShell_QMenu::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMenu::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMenu::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMenu::inputMethodQuery(arg__1);
}
void PythonQtShell_QMenu::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QMenu::keyPressEvent(arg__1);
}
void PythonQtShell_QMenu::keyReleaseEvent(QKeyEvent*  event0)
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
  QMenu::keyReleaseEvent(event0);
}
void PythonQtShell_QMenu::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("leaveEvent");
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
  QMenu::leaveEvent(arg__1);
}
int  PythonQtShell_QMenu::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMenu::metric(arg__1);
}
QSize  PythonQtShell_QMenu::minimumSizeHint() const
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
  return QMenu::minimumSizeHint();
}
void PythonQtShell_QMenu::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QMenu::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QMenu::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMenu::mouseMoveEvent(arg__1);
}
void PythonQtShell_QMenu::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMenu::mousePressEvent(arg__1);
}
void PythonQtShell_QMenu::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMenu::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QMenu::moveEvent(QMoveEvent*  event0)
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
  QMenu::moveEvent(event0);
}
bool  PythonQtShell_QMenu::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QMenu::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QMenu::paintEngine() const
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
  return QMenu::paintEngine();
}
void PythonQtShell_QMenu::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
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
  QMenu::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QMenu::redirected(QPoint*  offset0) const
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
  return QMenu::redirected(offset0);
}
void PythonQtShell_QMenu::resizeEvent(QResizeEvent*  event0)
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
  QMenu::resizeEvent(event0);
}
void PythonQtShell_QMenu::setVisible(bool  visible0)
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
  QMenu::setVisible(visible0);
}
QPainter*  PythonQtShell_QMenu::sharedPainter() const
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
  return QMenu::sharedPainter();
}
void PythonQtShell_QMenu::showEvent(QShowEvent*  event0)
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
  QMenu::showEvent(event0);
}
QSize  PythonQtShell_QMenu::sizeHint() const
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
  return QMenu::sizeHint();
}
void PythonQtShell_QMenu::tabletEvent(QTabletEvent*  event0)
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
  QMenu::tabletEvent(event0);
}
void PythonQtShell_QMenu::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QMenu::timerEvent(arg__1);
}
void PythonQtShell_QMenu::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWheelEvent*"};
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
  QMenu::wheelEvent(arg__1);
}
QMenu* PythonQtWrapper_QMenu::new_QMenu(QWidget*  parent)
{ 
return new PythonQtShell_QMenu(parent); }

QMenu* PythonQtWrapper_QMenu::new_QMenu(const QString&  title, QWidget*  parent)
{ 
return new PythonQtShell_QMenu(title, parent); }

const QMetaObject* PythonQtShell_QMenu::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMenu::staticMetaObject);
  } else {
    return &QMenu::staticMetaObject;
  }
}
int PythonQtShell_QMenu::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMenu::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAction*  PythonQtWrapper_QMenu::actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const
{
  return ( theWrappedObject->actionAt(arg__1));
}

QRect  PythonQtWrapper_QMenu::actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const
{
  return ( theWrappedObject->actionGeometry(arg__1));
}

QAction*  PythonQtWrapper_QMenu::activeAction(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->activeAction());
}

QAction*  PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut)
{
  return ( theWrappedObject->addAction(icon, text, receiver, member, shortcut));
}

QAction*  PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut)
{
  return ( theWrappedObject->addAction(text, receiver, member, shortcut));
}

QAction*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, QMenu*  menu)
{
  return ( theWrappedObject->addMenu(menu));
}

QMenu*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title)
{
  return ( theWrappedObject->addMenu(icon, title));
}

QMenu*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, const QString&  title)
{
  return ( theWrappedObject->addMenu(title));
}

QAction*  PythonQtWrapper_QMenu::addSection(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->addSection(icon, text));
}

QAction*  PythonQtWrapper_QMenu::addSection(QMenu* theWrappedObject, const QString&  text)
{
  return ( theWrappedObject->addSection(text));
}

QAction*  PythonQtWrapper_QMenu::addSeparator(QMenu* theWrappedObject)
{
  return ( theWrappedObject->addSeparator());
}

void PythonQtWrapper_QMenu::clear(QMenu* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QMenu::columnCount(QMenu* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_columnCount());
}

QAction*  PythonQtWrapper_QMenu::defaultAction(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->defaultAction());
}

QAction*  PythonQtWrapper_QMenu::exec(QMenu* theWrappedObject)
{
  return ( theWrappedObject->exec());
}

QAction*  PythonQtWrapper_QMenu::static_QMenu_exec(const QList<QAction* >&  actions, const QPoint&  pos, QAction*  at, QWidget*  parent)
{
  return (QMenu::exec(actions, pos, at, parent));
}

QAction*  PythonQtWrapper_QMenu::exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at)
{
  return ( theWrappedObject->exec(pos, at));
}

void PythonQtWrapper_QMenu::hideTearOffMenu(QMenu* theWrappedObject)
{
  ( theWrappedObject->hideTearOffMenu());
}

QIcon  PythonQtWrapper_QMenu::icon(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

void PythonQtWrapper_QMenu::initStyleOption(QMenu* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_initStyleOption(option, action));
}

QAction*  PythonQtWrapper_QMenu::insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu)
{
  return ( theWrappedObject->insertMenu(before, menu));
}

QAction*  PythonQtWrapper_QMenu::insertSection(QMenu* theWrappedObject, QAction*  before, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->insertSection(before, icon, text));
}

QAction*  PythonQtWrapper_QMenu::insertSection(QMenu* theWrappedObject, QAction*  before, const QString&  text)
{
  return ( theWrappedObject->insertSection(before, text));
}

QAction*  PythonQtWrapper_QMenu::insertSeparator(QMenu* theWrappedObject, QAction*  before)
{
  return ( theWrappedObject->insertSeparator(before));
}

bool  PythonQtWrapper_QMenu::isEmpty(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QMenu::isTearOffEnabled(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->isTearOffEnabled());
}

bool  PythonQtWrapper_QMenu::isTearOffMenuVisible(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->isTearOffMenuVisible());
}

QAction*  PythonQtWrapper_QMenu::menuAction(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->menuAction());
}

QMenu*  PythonQtWrapper_QMenu::static_QMenu_menuInAction(const QAction*  action)
{
  return (QMenu::menuInAction(action));
}

void PythonQtWrapper_QMenu::popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at)
{
  ( theWrappedObject->popup(pos, at));
}

bool  PythonQtWrapper_QMenu::separatorsCollapsible(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->separatorsCollapsible());
}

void PythonQtWrapper_QMenu::setActiveAction(QMenu* theWrappedObject, QAction*  act)
{
  ( theWrappedObject->setActiveAction(act));
}

void PythonQtWrapper_QMenu::setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1)
{
  ( theWrappedObject->setDefaultAction(arg__1));
}

void PythonQtWrapper_QMenu::setIcon(QMenu* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(icon));
}

void PythonQtWrapper_QMenu::setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse)
{
  ( theWrappedObject->setSeparatorsCollapsible(collapse));
}

void PythonQtWrapper_QMenu::setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setTearOffEnabled(arg__1));
}

void PythonQtWrapper_QMenu::setTitle(QMenu* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setTitle(title));
}

void PythonQtWrapper_QMenu::setToolTipsVisible(QMenu* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setToolTipsVisible(visible));
}

void PythonQtWrapper_QMenu::showTearOffMenu(QMenu* theWrappedObject)
{
  ( theWrappedObject->showTearOffMenu());
}

void PythonQtWrapper_QMenu::showTearOffMenu(QMenu* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->showTearOffMenu(pos));
}

QString  PythonQtWrapper_QMenu::title(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

bool  PythonQtWrapper_QMenu::toolTipsVisible(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->toolTipsVisible());
}



PythonQtShell_QMenuBar::~PythonQtShell_QMenuBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMenuBar::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("actionEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QActionEvent*"};
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
  QMenuBar::actionEvent(arg__1);
}
void PythonQtShell_QMenuBar::changeEvent(QEvent*  arg__1)
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
  QMenuBar::changeEvent(arg__1);
}
void PythonQtShell_QMenuBar::childEvent(QChildEvent*  event0)
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
  QMenuBar::childEvent(event0);
}
void PythonQtShell_QMenuBar::closeEvent(QCloseEvent*  event0)
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
  QMenuBar::closeEvent(event0);
}
void PythonQtShell_QMenuBar::contextMenuEvent(QContextMenuEvent*  event0)
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
  QMenuBar::contextMenuEvent(event0);
}
void PythonQtShell_QMenuBar::customEvent(QEvent*  event0)
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
  QMenuBar::customEvent(event0);
}
int  PythonQtShell_QMenuBar::devType() const
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
  return QMenuBar::devType();
}
void PythonQtShell_QMenuBar::dragEnterEvent(QDragEnterEvent*  event0)
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
  QMenuBar::dragEnterEvent(event0);
}
void PythonQtShell_QMenuBar::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QMenuBar::dragLeaveEvent(event0);
}
void PythonQtShell_QMenuBar::dragMoveEvent(QDragMoveEvent*  event0)
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
  QMenuBar::dragMoveEvent(event0);
}
void PythonQtShell_QMenuBar::dropEvent(QDropEvent*  event0)
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
  QMenuBar::dropEvent(event0);
}
void PythonQtShell_QMenuBar::enterEvent(QEnterEvent*  event0)
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
  QMenuBar::enterEvent(event0);
}
bool  PythonQtShell_QMenuBar::event(QEvent*  arg__1)
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
  return QMenuBar::event(arg__1);
}
bool  PythonQtShell_QMenuBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
      void* args[3] = {nullptr, (void*)&arg__1, (void*)&arg__2};
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
  return QMenuBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMenuBar::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusInEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QMenuBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QMenuBar::focusNextPrevChild(bool  next0)
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
  return QMenuBar::focusNextPrevChild(next0);
}
void PythonQtShell_QMenuBar::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QMenuBar::focusOutEvent(arg__1);
}
bool  PythonQtShell_QMenuBar::hasHeightForWidth() const
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
  return QMenuBar::hasHeightForWidth();
}
int  PythonQtShell_QMenuBar::heightForWidth(int  arg__1) const
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
  return QMenuBar::heightForWidth(arg__1);
}
void PythonQtShell_QMenuBar::hideEvent(QHideEvent*  event0)
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
  QMenuBar::hideEvent(event0);
}
void PythonQtShell_QMenuBar::initPainter(QPainter*  painter0) const
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
  QMenuBar::initPainter(painter0);
}
void PythonQtShell_QMenuBar::initStyleOption(QStyleOptionMenuItem*  option0, const QAction*  action1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("initStyleOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QStyleOptionMenuItem*" , "const QAction*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&option0, (void*)&action1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMenuBar::initStyleOption(option0, action1);
}
void PythonQtShell_QMenuBar::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMenuBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMenuBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMenuBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QMenuBar::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QMenuBar::keyPressEvent(arg__1);
}
void PythonQtShell_QMenuBar::keyReleaseEvent(QKeyEvent*  event0)
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
  QMenuBar::keyReleaseEvent(event0);
}
void PythonQtShell_QMenuBar::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("leaveEvent");
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
  QMenuBar::leaveEvent(arg__1);
}
int  PythonQtShell_QMenuBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMenuBar::metric(arg__1);
}
QSize  PythonQtShell_QMenuBar::minimumSizeHint() const
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
  return QMenuBar::minimumSizeHint();
}
void PythonQtShell_QMenuBar::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QMenuBar::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QMenuBar::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMenuBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QMenuBar::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMenuBar::mousePressEvent(arg__1);
}
void PythonQtShell_QMenuBar::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QMenuBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QMenuBar::moveEvent(QMoveEvent*  event0)
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
  QMenuBar::moveEvent(event0);
}
bool  PythonQtShell_QMenuBar::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QMenuBar::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QMenuBar::paintEngine() const
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
  return QMenuBar::paintEngine();
}
void PythonQtShell_QMenuBar::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
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
  QMenuBar::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QMenuBar::redirected(QPoint*  offset0) const
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
  return QMenuBar::redirected(offset0);
}
void PythonQtShell_QMenuBar::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resizeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QResizeEvent*"};
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
  QMenuBar::resizeEvent(arg__1);
}
void PythonQtShell_QMenuBar::setVisible(bool  visible0)
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
  QMenuBar::setVisible(visible0);
}
QPainter*  PythonQtShell_QMenuBar::sharedPainter() const
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
  return QMenuBar::sharedPainter();
}
void PythonQtShell_QMenuBar::showEvent(QShowEvent*  event0)
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
  QMenuBar::showEvent(event0);
}
QSize  PythonQtShell_QMenuBar::sizeHint() const
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
  return QMenuBar::sizeHint();
}
void PythonQtShell_QMenuBar::tabletEvent(QTabletEvent*  event0)
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
  QMenuBar::tabletEvent(event0);
}
void PythonQtShell_QMenuBar::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QMenuBar::timerEvent(arg__1);
}
void PythonQtShell_QMenuBar::wheelEvent(QWheelEvent*  event0)
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
  QMenuBar::wheelEvent(event0);
}
QMenuBar* PythonQtWrapper_QMenuBar::new_QMenuBar(QWidget*  parent)
{ 
return new PythonQtShell_QMenuBar(parent); }

const QMetaObject* PythonQtShell_QMenuBar::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMenuBar::staticMetaObject);
  } else {
    return &QMenuBar::staticMetaObject;
  }
}
int PythonQtShell_QMenuBar::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMenuBar::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAction*  PythonQtWrapper_QMenuBar::actionAt(QMenuBar* theWrappedObject, const QPoint&  arg__1) const
{
  return ( theWrappedObject->actionAt(arg__1));
}

QRect  PythonQtWrapper_QMenuBar::actionGeometry(QMenuBar* theWrappedObject, QAction*  arg__1) const
{
  return ( theWrappedObject->actionGeometry(arg__1));
}

QAction*  PythonQtWrapper_QMenuBar::activeAction(QMenuBar* theWrappedObject) const
{
  return ( theWrappedObject->activeAction());
}

QAction*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, QMenu*  menu)
{
  return ( theWrappedObject->addMenu(menu));
}

QMenu*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, const QIcon&  icon, const QString&  title)
{
  return ( theWrappedObject->addMenu(icon, title));
}

QMenu*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, const QString&  title)
{
  return ( theWrappedObject->addMenu(title));
}

QAction*  PythonQtWrapper_QMenuBar::addSeparator(QMenuBar* theWrappedObject)
{
  return ( theWrappedObject->addSeparator());
}

void PythonQtWrapper_QMenuBar::clear(QMenuBar* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QWidget*  PythonQtWrapper_QMenuBar::cornerWidget(QMenuBar* theWrappedObject, Qt::Corner  corner) const
{
  return ( theWrappedObject->cornerWidget(corner));
}

void PythonQtWrapper_QMenuBar::initStyleOption(QMenuBar* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_initStyleOption(option, action));
}

QAction*  PythonQtWrapper_QMenuBar::insertMenu(QMenuBar* theWrappedObject, QAction*  before, QMenu*  menu)
{
  return ( theWrappedObject->insertMenu(before, menu));
}

QAction*  PythonQtWrapper_QMenuBar::insertSeparator(QMenuBar* theWrappedObject, QAction*  before)
{
  return ( theWrappedObject->insertSeparator(before));
}

bool  PythonQtWrapper_QMenuBar::isDefaultUp(QMenuBar* theWrappedObject) const
{
  return ( theWrappedObject->isDefaultUp());
}

bool  PythonQtWrapper_QMenuBar::isNativeMenuBar(QMenuBar* theWrappedObject) const
{
  return ( theWrappedObject->isNativeMenuBar());
}

void PythonQtWrapper_QMenuBar::setActiveAction(QMenuBar* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->setActiveAction(action));
}

void PythonQtWrapper_QMenuBar::setCornerWidget(QMenuBar* theWrappedObject, QWidget*  w, Qt::Corner  corner)
{
  ( theWrappedObject->setCornerWidget(w, corner));
}

void PythonQtWrapper_QMenuBar::setDefaultUp(QMenuBar* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setDefaultUp(arg__1));
}

void PythonQtWrapper_QMenuBar::setNativeMenuBar(QMenuBar* theWrappedObject, bool  nativeMenuBar)
{
  ( theWrappedObject->setNativeMenuBar(nativeMenuBar));
}



PythonQtShell_QMessageBox::~PythonQtShell_QMessageBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMessageBox::accept()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("accept");
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
  QMessageBox::accept();
}
void PythonQtShell_QMessageBox::actionEvent(QActionEvent*  event0)
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
  QMessageBox::actionEvent(event0);
}
void PythonQtShell_QMessageBox::changeEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("changeEvent");
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
  QMessageBox::changeEvent(event0);
}
void PythonQtShell_QMessageBox::childEvent(QChildEvent*  event0)
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
  QMessageBox::childEvent(event0);
}
void PythonQtShell_QMessageBox::closeEvent(QCloseEvent*  event0)
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
  QMessageBox::closeEvent(event0);
}
void PythonQtShell_QMessageBox::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QMessageBox::contextMenuEvent(arg__1);
}
void PythonQtShell_QMessageBox::customEvent(QEvent*  event0)
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
  QMessageBox::customEvent(event0);
}
int  PythonQtShell_QMessageBox::devType() const
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
  return QMessageBox::devType();
}
void PythonQtShell_QMessageBox::done(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("done");
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
  QMessageBox::done(arg__1);
}
void PythonQtShell_QMessageBox::dragEnterEvent(QDragEnterEvent*  event0)
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
  QMessageBox::dragEnterEvent(event0);
}
void PythonQtShell_QMessageBox::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QMessageBox::dragLeaveEvent(event0);
}
void PythonQtShell_QMessageBox::dragMoveEvent(QDragMoveEvent*  event0)
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
  QMessageBox::dragMoveEvent(event0);
}
void PythonQtShell_QMessageBox::dropEvent(QDropEvent*  event0)
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
  QMessageBox::dropEvent(event0);
}
void PythonQtShell_QMessageBox::enterEvent(QEnterEvent*  event0)
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
  QMessageBox::enterEvent(event0);
}
bool  PythonQtShell_QMessageBox::event(QEvent*  e0)
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
      void* args[2] = {nullptr, (void*)&e0};
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
  return QMessageBox::event(e0);
}
bool  PythonQtShell_QMessageBox::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
      void* args[3] = {nullptr, (void*)&arg__1, (void*)&arg__2};
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
  return QMessageBox::eventFilter(arg__1, arg__2);
}
int  PythonQtShell_QMessageBox::exec()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("exec");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("exec", methodInfo, result);
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
  return QMessageBox::exec();
}
void PythonQtShell_QMessageBox::focusInEvent(QFocusEvent*  event0)
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
  QMessageBox::focusInEvent(event0);
}
bool  PythonQtShell_QMessageBox::focusNextPrevChild(bool  next0)
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
  return QMessageBox::focusNextPrevChild(next0);
}
void PythonQtShell_QMessageBox::focusOutEvent(QFocusEvent*  event0)
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
  QMessageBox::focusOutEvent(event0);
}
bool  PythonQtShell_QMessageBox::hasHeightForWidth() const
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
  return QMessageBox::hasHeightForWidth();
}
int  PythonQtShell_QMessageBox::heightForWidth(int  arg__1) const
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
  return QMessageBox::heightForWidth(arg__1);
}
void PythonQtShell_QMessageBox::hideEvent(QHideEvent*  event0)
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
  QMessageBox::hideEvent(event0);
}
void PythonQtShell_QMessageBox::initPainter(QPainter*  painter0) const
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
  QMessageBox::initPainter(painter0);
}
void PythonQtShell_QMessageBox::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMessageBox::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMessageBox::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMessageBox::inputMethodQuery(arg__1);
}
void PythonQtShell_QMessageBox::keyPressEvent(QKeyEvent*  event0)
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
  QMessageBox::keyPressEvent(event0);
}
void PythonQtShell_QMessageBox::keyReleaseEvent(QKeyEvent*  event0)
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
  QMessageBox::keyReleaseEvent(event0);
}
void PythonQtShell_QMessageBox::leaveEvent(QEvent*  event0)
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
  QMessageBox::leaveEvent(event0);
}
int  PythonQtShell_QMessageBox::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMessageBox::metric(arg__1);
}
QSize  PythonQtShell_QMessageBox::minimumSizeHint() const
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
  return QMessageBox::minimumSizeHint();
}
void PythonQtShell_QMessageBox::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QMessageBox::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QMessageBox::mouseMoveEvent(QMouseEvent*  event0)
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
  QMessageBox::mouseMoveEvent(event0);
}
void PythonQtShell_QMessageBox::mousePressEvent(QMouseEvent*  event0)
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
  QMessageBox::mousePressEvent(event0);
}
void PythonQtShell_QMessageBox::mouseReleaseEvent(QMouseEvent*  event0)
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
  QMessageBox::mouseReleaseEvent(event0);
}
void PythonQtShell_QMessageBox::moveEvent(QMoveEvent*  event0)
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
  QMessageBox::moveEvent(event0);
}
bool  PythonQtShell_QMessageBox::nativeEvent(const QByteArray&  eventType0, void*  message1, qintptr*  result2)
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
  return QMessageBox::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QMessageBox::paintEngine() const
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
  return QMessageBox::paintEngine();
}
void PythonQtShell_QMessageBox::paintEvent(QPaintEvent*  event0)
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
  QMessageBox::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QMessageBox::redirected(QPoint*  offset0) const
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
  return QMessageBox::redirected(offset0);
}
void PythonQtShell_QMessageBox::reject()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("reject");
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
  QMessageBox::reject();
}
void PythonQtShell_QMessageBox::resizeEvent(QResizeEvent*  event0)
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
  QMessageBox::resizeEvent(event0);
}
void PythonQtShell_QMessageBox::setVisible(bool  visible0)
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
  QMessageBox::setVisible(visible0);
}
QPainter*  PythonQtShell_QMessageBox::sharedPainter() const
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
  return QMessageBox::sharedPainter();
}
void PythonQtShell_QMessageBox::showEvent(QShowEvent*  event0)
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
  QMessageBox::showEvent(event0);
}
QSize  PythonQtShell_QMessageBox::sizeHint() const
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
  return QMessageBox::sizeHint();
}
void PythonQtShell_QMessageBox::tabletEvent(QTabletEvent*  event0)
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
  QMessageBox::tabletEvent(event0);
}
void PythonQtShell_QMessageBox::timerEvent(QTimerEvent*  event0)
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
  QMessageBox::timerEvent(event0);
}
void PythonQtShell_QMessageBox::wheelEvent(QWheelEvent*  event0)
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
  QMessageBox::wheelEvent(event0);
}
QMessageBox* PythonQtWrapper_QMessageBox::new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QMessageBox(icon, title, text, buttons, parent, flags); }

QMessageBox* PythonQtWrapper_QMessageBox::new_QMessageBox(QWidget*  parent)
{ 
return new PythonQtShell_QMessageBox(parent); }

const QMetaObject* PythonQtShell_QMessageBox::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMessageBox::staticMetaObject);
  } else {
    return &QMessageBox::staticMetaObject;
  }
}
int PythonQtShell_QMessageBox::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMessageBox::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QMessageBox::static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text)
{
  (QMessageBox::about(parent, title, text));
}

void PythonQtWrapper_QMessageBox::static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title)
{
  (QMessageBox::aboutQt(parent, title));
}

void PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role)
{
  ( theWrappedObject->addButton(button, role));
}

QPushButton*  PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
  return ( theWrappedObject->addButton(button));
}

QPushButton*  PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role)
{
  return ( theWrappedObject->addButton(text, role));
}

QAbstractButton*  PythonQtWrapper_QMessageBox::button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const
{
  return ( theWrappedObject->button(which));
}

QMessageBox::ButtonRole  PythonQtWrapper_QMessageBox::buttonRole(QMessageBox* theWrappedObject, QAbstractButton*  button) const
{
  return ( theWrappedObject->buttonRole(button));
}

QList<QAbstractButton* >  PythonQtWrapper_QMessageBox::buttons(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

QCheckBox*  PythonQtWrapper_QMessageBox::checkBox(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->checkBox());
}

QAbstractButton*  PythonQtWrapper_QMessageBox::clickedButton(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->clickedButton());
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
  return (QMessageBox::critical(parent, title, text, buttons, defaultButton));
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
  return (QMessageBox::critical(parent, title, text, button0, button1));
}

QPushButton*  PythonQtWrapper_QMessageBox::defaultButton(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->defaultButton());
}

QString  PythonQtWrapper_QMessageBox::detailedText(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->detailedText());
}

QAbstractButton*  PythonQtWrapper_QMessageBox::escapeButton(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->escapeButton());
}

QMessageBox::Icon  PythonQtWrapper_QMessageBox::icon(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QPixmap  PythonQtWrapper_QMessageBox::iconPixmap(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->iconPixmap());
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
  return (QMessageBox::information(parent, title, text, buttons, defaultButton));
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
  return (QMessageBox::information(parent, title, text, button0, button1));
}

QString  PythonQtWrapper_QMessageBox::informativeText(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->informativeText());
}

void PythonQtWrapper_QMessageBox::open(QMessageBox* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

QMessageBox::Options  PythonQtWrapper_QMessageBox::options(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->options());
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
  return (QMessageBox::question(parent, title, text, buttons, defaultButton));
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
  return (QMessageBox::question(parent, title, text, button0, button1));
}

void PythonQtWrapper_QMessageBox::removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button)
{
  ( theWrappedObject->removeButton(button));
}

void PythonQtWrapper_QMessageBox::setCheckBox(QMessageBox* theWrappedObject, QCheckBox*  cb)
{
  ( theWrappedObject->setCheckBox(cb));
}

void PythonQtWrapper_QMessageBox::setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
  ( theWrappedObject->setDefaultButton(button));
}

void PythonQtWrapper_QMessageBox::setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button)
{
  ( theWrappedObject->setDefaultButton(button));
}

void PythonQtWrapper_QMessageBox::setDetailedText(QMessageBox* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setDetailedText(text));
}

void PythonQtWrapper_QMessageBox::setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button)
{
  ( theWrappedObject->setEscapeButton(button));
}

void PythonQtWrapper_QMessageBox::setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
  ( theWrappedObject->setEscapeButton(button));
}

void PythonQtWrapper_QMessageBox::setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1)
{
  ( theWrappedObject->setIcon(arg__1));
}

void PythonQtWrapper_QMessageBox::setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap)
{
  ( theWrappedObject->setIconPixmap(pixmap));
}

void PythonQtWrapper_QMessageBox::setInformativeText(QMessageBox* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setInformativeText(text));
}

void PythonQtWrapper_QMessageBox::setOption(QMessageBox* theWrappedObject, QMessageBox::Option  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QMessageBox::setOptions(QMessageBox* theWrappedObject, QMessageBox::Options  options)
{
  ( theWrappedObject->setOptions(options));
}

void PythonQtWrapper_QMessageBox::setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons)
{
  ( theWrappedObject->setStandardButtons(buttons));
}

void PythonQtWrapper_QMessageBox::setText(QMessageBox* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QMessageBox::setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format)
{
  ( theWrappedObject->setTextFormat(format));
}

void PythonQtWrapper_QMessageBox::setTextInteractionFlags(QMessageBox* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const
{
  return ( theWrappedObject->standardButton(button));
}

QMessageBox::StandardButtons  PythonQtWrapper_QMessageBox::standardButtons(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->standardButtons());
}

bool  PythonQtWrapper_QMessageBox::testOption(QMessageBox* theWrappedObject, QMessageBox::Option  option) const
{
  return ( theWrappedObject->testOption(option));
}

QString  PythonQtWrapper_QMessageBox::text(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

Qt::TextFormat  PythonQtWrapper_QMessageBox::textFormat(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->textFormat());
}

Qt::TextInteractionFlags  PythonQtWrapper_QMessageBox::textInteractionFlags(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
  return (QMessageBox::warning(parent, title, text, buttons, defaultButton));
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
  return (QMessageBox::warning(parent, title, text, button0, button1));
}



PythonQtShell_QMouseEvent::~PythonQtShell_QMouseEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMouseEvent*  PythonQtShell_QMouseEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMouseEvent* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QMouseEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QMouseEvent::clone();
}
bool  PythonQtShell_QMouseEvent::isBeginEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isBeginEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isBeginEvent", methodInfo, result);
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
  return QMouseEvent::isBeginEvent();
}
bool  PythonQtShell_QMouseEvent::isEndEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isEndEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEndEvent", methodInfo, result);
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
  return QMouseEvent::isEndEvent();
}
bool  PythonQtShell_QMouseEvent::isUpdateEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isUpdateEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isUpdateEvent", methodInfo, result);
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
  return QMouseEvent::isUpdateEvent();
}
void PythonQtShell_QMouseEvent::setAccepted(bool  accepted0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setAccepted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&accepted0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMouseEvent::setAccepted(accepted0);
}
void PythonQtShell_QMouseEvent::setTimestamp(quint64  timestamp0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setTimestamp");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "quint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&timestamp0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMouseEvent::setTimestamp(timestamp0);
}
QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device)
{ 
return new PythonQtShell_QMouseEvent(type, localPos, button, buttons, modifiers, device); }

QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device)
{ 
return new PythonQtShell_QMouseEvent(type, localPos, globalPos, button, buttons, modifiers, device); }

QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source, const QPointingDevice*  device)
{ 
return new PythonQtShell_QMouseEvent(type, localPos, scenePos, globalPos, button, buttons, modifiers, source, device); }

QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device)
{ 
return new PythonQtShell_QMouseEvent(type, localPos, scenePos, globalPos, button, buttons, modifiers, device); }

QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(const QMouseEvent&  arg__1)
{ 
return new PythonQtShell_QMouseEvent(arg__1); }

Qt::MouseEventFlags  PythonQtWrapper_QMouseEvent::flags(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QPoint  PythonQtWrapper_QMouseEvent::globalPos(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalPos());
}

int  PythonQtWrapper_QMouseEvent::globalX(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QMouseEvent::globalY(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

QPointF  PythonQtWrapper_QMouseEvent::localPos(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->localPos());
}

QMouseEvent*  PythonQtWrapper_QMouseEvent::operator_assign(QMouseEvent* theWrappedObject, const QMouseEvent&  other)
{
  return &( ((PythonQtPublicPromoter_QMouseEvent*)theWrappedObject)->promoted_operator_assign(other));
}

QPoint  PythonQtWrapper_QMouseEvent::pos(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QMouseEvent::screenPos(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

Qt::MouseEventSource  PythonQtWrapper_QMouseEvent::source(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}

QPointF  PythonQtWrapper_QMouseEvent::windowPos(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->windowPos());
}

int  PythonQtWrapper_QMouseEvent::x(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QMouseEvent::y(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QMoveEvent::~PythonQtShell_QMoveEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMoveEvent*  PythonQtShell_QMoveEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMoveEvent* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QMoveEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QMoveEvent::clone();
}
void PythonQtShell_QMoveEvent::setAccepted(bool  accepted0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setAccepted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&accepted0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMoveEvent::setAccepted(accepted0);
}
QMoveEvent* PythonQtWrapper_QMoveEvent::new_QMoveEvent(const QMoveEvent&  arg__1)
{ 
return new PythonQtShell_QMoveEvent(arg__1); }

QMoveEvent* PythonQtWrapper_QMoveEvent::new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos)
{ 
return new PythonQtShell_QMoveEvent(pos, oldPos); }

const QPoint*  PythonQtWrapper_QMoveEvent::oldPos(QMoveEvent* theWrappedObject) const
{
  return &( theWrappedObject->oldPos());
}

QMoveEvent*  PythonQtWrapper_QMoveEvent::operator_assign(QMoveEvent* theWrappedObject, const QMoveEvent&  other)
{
  return &( ((PythonQtPublicPromoter_QMoveEvent*)theWrappedObject)->promoted_operator_assign(other));
}

const QPoint*  PythonQtWrapper_QMoveEvent::pos(QMoveEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}



PythonQtShell_QMovie::~PythonQtShell_QMovie() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMovie::childEvent(QChildEvent*  event0)
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
  QMovie::childEvent(event0);
}
void PythonQtShell_QMovie::customEvent(QEvent*  event0)
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
  QMovie::customEvent(event0);
}
bool  PythonQtShell_QMovie::event(QEvent*  event0)
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
  return QMovie::event(event0);
}
bool  PythonQtShell_QMovie::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMovie::eventFilter(watched0, event1);
}
void PythonQtShell_QMovie::timerEvent(QTimerEvent*  event0)
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
  QMovie::timerEvent(event0);
}
QMovie* PythonQtWrapper_QMovie::new_QMovie(QIODevice*  device, const QByteArray&  format, QObject*  parent)
{ 
return new PythonQtShell_QMovie(device, format, parent); }

QMovie* PythonQtWrapper_QMovie::new_QMovie(QObject*  parent)
{ 
return new PythonQtShell_QMovie(parent); }

QMovie* PythonQtWrapper_QMovie::new_QMovie(const QString&  fileName, const QByteArray&  format, QObject*  parent)
{ 
return new PythonQtShell_QMovie(fileName, format, parent); }

const QMetaObject* PythonQtShell_QMovie::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMovie::staticMetaObject);
  } else {
    return &QMovie::staticMetaObject;
  }
}
int PythonQtShell_QMovie::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMovie::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QColor  PythonQtWrapper_QMovie::backgroundColor(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->backgroundColor());
}

QMovie::CacheMode  PythonQtWrapper_QMovie::cacheMode(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->cacheMode());
}

int  PythonQtWrapper_QMovie::currentFrameNumber(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->currentFrameNumber());
}

QImage  PythonQtWrapper_QMovie::currentImage(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->currentImage());
}

QPixmap  PythonQtWrapper_QMovie::currentPixmap(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->currentPixmap());
}

QIODevice*  PythonQtWrapper_QMovie::device(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QString  PythonQtWrapper_QMovie::fileName(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QMovie::format(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QMovie::frameCount(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->frameCount());
}

QRect  PythonQtWrapper_QMovie::frameRect(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->frameRect());
}

bool  PythonQtWrapper_QMovie::isValid(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMovie::jumpToFrame(QMovie* theWrappedObject, int  frameNumber)
{
  return ( theWrappedObject->jumpToFrame(frameNumber));
}

QImageReader::ImageReaderError  PythonQtWrapper_QMovie::lastError(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QString  PythonQtWrapper_QMovie::lastErrorString(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->lastErrorString());
}

int  PythonQtWrapper_QMovie::loopCount(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QMovie::nextFrameDelay(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->nextFrameDelay());
}

QSize  PythonQtWrapper_QMovie::scaledSize(QMovie* theWrappedObject)
{
  return ( theWrappedObject->scaledSize());
}

void PythonQtWrapper_QMovie::setBackgroundColor(QMovie* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setBackgroundColor(color));
}

void PythonQtWrapper_QMovie::setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode)
{
  ( theWrappedObject->setCacheMode(mode));
}

void PythonQtWrapper_QMovie::setDevice(QMovie* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QMovie::setFileName(QMovie* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QMovie::setFormat(QMovie* theWrappedObject, const QByteArray&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QMovie::setScaledSize(QMovie* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setScaledSize(size));
}

int  PythonQtWrapper_QMovie::speed(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->speed());
}

QMovie::MovieState  PythonQtWrapper_QMovie::state(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QList<QByteArray >  PythonQtWrapper_QMovie::static_QMovie_supportedFormats()
{
  return (QMovie::supportedFormats());
}



PythonQtShell_QNativeGestureEvent::~PythonQtShell_QNativeGestureEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QNativeGestureEvent*  PythonQtShell_QNativeGestureEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QNativeGestureEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QNativeGestureEvent* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QNativeGestureEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QNativeGestureEvent::clone();
}
bool  PythonQtShell_QNativeGestureEvent::isBeginEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isBeginEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isBeginEvent", methodInfo, result);
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
  return QNativeGestureEvent::isBeginEvent();
}
bool  PythonQtShell_QNativeGestureEvent::isEndEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isEndEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEndEvent", methodInfo, result);
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
  return QNativeGestureEvent::isEndEvent();
}
bool  PythonQtShell_QNativeGestureEvent::isUpdateEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isUpdateEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isUpdateEvent", methodInfo, result);
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
  return QNativeGestureEvent::isUpdateEvent();
}
void PythonQtShell_QNativeGestureEvent::setAccepted(bool  accepted0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setAccepted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&accepted0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNativeGestureEvent::setAccepted(accepted0);
}
void PythonQtShell_QNativeGestureEvent::setTimestamp(quint64  timestamp0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("setTimestamp");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "quint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&timestamp0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNativeGestureEvent::setTimestamp(timestamp0);
}
QNativeGestureEvent* PythonQtWrapper_QNativeGestureEvent::new_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointingDevice*  dev, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, qreal  value, quint64  sequenceId, quint64  intArgument)
{ 
return new PythonQtShell_QNativeGestureEvent(type, dev, localPos, scenePos, globalPos, value, sequenceId, intArgument); }

QNativeGestureEvent* PythonQtWrapper_QNativeGestureEvent::new_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointingDevice*  dev, int  fingerCount, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, qreal  value, const QPointF&  delta, quint64  sequenceId)
{ 
return new PythonQtShell_QNativeGestureEvent(type, dev, fingerCount, localPos, scenePos, globalPos, value, delta, sequenceId); }

QNativeGestureEvent* PythonQtWrapper_QNativeGestureEvent::new_QNativeGestureEvent(const QNativeGestureEvent&  arg__1)
{ 
return new PythonQtShell_QNativeGestureEvent(arg__1); }

QPointF  PythonQtWrapper_QNativeGestureEvent::delta(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->delta());
}

int  PythonQtWrapper_QNativeGestureEvent::fingerCount(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->fingerCount());
}

Qt::NativeGestureType  PythonQtWrapper_QNativeGestureEvent::gestureType(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->gestureType());
}

const QPoint  PythonQtWrapper_QNativeGestureEvent::globalPos(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalPos());
}

QPointF  PythonQtWrapper_QNativeGestureEvent::localPos(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->localPos());
}

QNativeGestureEvent*  PythonQtWrapper_QNativeGestureEvent::operator_assign(QNativeGestureEvent* theWrappedObject, const QNativeGestureEvent&  other)
{
  return &( ((PythonQtPublicPromoter_QNativeGestureEvent*)theWrappedObject)->promoted_operator_assign(other));
}

const QPoint  PythonQtWrapper_QNativeGestureEvent::pos(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QNativeGestureEvent::screenPos(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

qreal  PythonQtWrapper_QNativeGestureEvent::value(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

QPointF  PythonQtWrapper_QNativeGestureEvent::windowPos(QNativeGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->windowPos());
}



PythonQtShell_QOffscreenSurface::~PythonQtShell_QOffscreenSurface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QOffscreenSurface::childEvent(QChildEvent*  event0)
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
  QOffscreenSurface::childEvent(event0);
}
void PythonQtShell_QOffscreenSurface::customEvent(QEvent*  event0)
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
  QOffscreenSurface::customEvent(event0);
}
bool  PythonQtShell_QOffscreenSurface::event(QEvent*  event0)
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
  return QOffscreenSurface::event(event0);
}
bool  PythonQtShell_QOffscreenSurface::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QOffscreenSurface::eventFilter(watched0, event1);
}
QSurfaceFormat  PythonQtShell_QOffscreenSurface::format() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("format");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSurfaceFormat"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSurfaceFormat returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("format", methodInfo, result);
          } else {
            returnValue = *((QSurfaceFormat*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QOffscreenSurface::format();
}
QSize  PythonQtShell_QOffscreenSurface::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("size");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
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
  return QOffscreenSurface::size();
}
QSurface::SurfaceType  PythonQtShell_QOffscreenSurface::surfaceType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("surfaceType");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSurface::SurfaceType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSurface::SurfaceType returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("surfaceType", methodInfo, result);
          } else {
            returnValue = *((QSurface::SurfaceType*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QOffscreenSurface::surfaceType();
}
void PythonQtShell_QOffscreenSurface::timerEvent(QTimerEvent*  event0)
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
  QOffscreenSurface::timerEvent(event0);
}
QOffscreenSurface* PythonQtWrapper_QOffscreenSurface::new_QOffscreenSurface(QScreen*  screen, QObject*  parent)
{ 
return new PythonQtShell_QOffscreenSurface(screen, parent); }

const QMetaObject* PythonQtShell_QOffscreenSurface::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QOffscreenSurface::staticMetaObject);
  } else {
    return &QOffscreenSurface::staticMetaObject;
  }
}
int PythonQtShell_QOffscreenSurface::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QOffscreenSurface::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QOffscreenSurface::create(QOffscreenSurface* theWrappedObject)
{
  ( theWrappedObject->create());
}

void PythonQtWrapper_QOffscreenSurface::destroy(QOffscreenSurface* theWrappedObject)
{
  ( theWrappedObject->destroy());
}

bool  PythonQtWrapper_QOffscreenSurface::isValid(QOffscreenSurface* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QSurfaceFormat  PythonQtWrapper_QOffscreenSurface::requestedFormat(QOffscreenSurface* theWrappedObject) const
{
  return ( theWrappedObject->requestedFormat());
}

void*  PythonQtWrapper_QOffscreenSurface::resolveInterface(QOffscreenSurface* theWrappedObject, const char*  name, int  revision) const
{
  return ( ((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->promoted_resolveInterface(name, revision));
}

QScreen*  PythonQtWrapper_QOffscreenSurface::screen(QOffscreenSurface* theWrappedObject) const
{
  return ( theWrappedObject->screen());
}

void PythonQtWrapper_QOffscreenSurface::setFormat(QOffscreenSurface* theWrappedObject, const QSurfaceFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QOffscreenSurface::setScreen(QOffscreenSurface* theWrappedObject, QScreen*  screen)
{
  ( theWrappedObject->setScreen(screen));
}



QOpenGLBuffer* PythonQtWrapper_QOpenGLBuffer::new_QOpenGLBuffer()
{ 
return new QOpenGLBuffer(); }

QOpenGLBuffer* PythonQtWrapper_QOpenGLBuffer::new_QOpenGLBuffer(QOpenGLBuffer::Type  type)
{ 
return new QOpenGLBuffer(type); }

QOpenGLBuffer* PythonQtWrapper_QOpenGLBuffer::new_QOpenGLBuffer(const QOpenGLBuffer&  other)
{ 
return new QOpenGLBuffer(other); }

void PythonQtWrapper_QOpenGLBuffer::allocate(QOpenGLBuffer* theWrappedObject, const void*  data, int  count)
{
  ( theWrappedObject->allocate(data, count));
}

void PythonQtWrapper_QOpenGLBuffer::allocate(QOpenGLBuffer* theWrappedObject, int  count)
{
  ( theWrappedObject->allocate(count));
}

bool  PythonQtWrapper_QOpenGLBuffer::bind(QOpenGLBuffer* theWrappedObject)
{
  return ( theWrappedObject->bind());
}

GLuint  PythonQtWrapper_QOpenGLBuffer::bufferId(QOpenGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->bufferId());
}

bool  PythonQtWrapper_QOpenGLBuffer::create(QOpenGLBuffer* theWrappedObject)
{
  return ( theWrappedObject->create());
}

void PythonQtWrapper_QOpenGLBuffer::destroy(QOpenGLBuffer* theWrappedObject)
{
  ( theWrappedObject->destroy());
}

bool  PythonQtWrapper_QOpenGLBuffer::isCreated(QOpenGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isCreated());
}

void*  PythonQtWrapper_QOpenGLBuffer::map(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer::Access  access)
{
  return ( theWrappedObject->map(access));
}

QOpenGLBuffer*  PythonQtWrapper_QOpenGLBuffer::operator_assign(QOpenGLBuffer* theWrappedObject, const QOpenGLBuffer&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QOpenGLBuffer::read(QOpenGLBuffer* theWrappedObject, int  offset, void*  data, int  count)
{
  return ( theWrappedObject->read(offset, data, count));
}

void PythonQtWrapper_QOpenGLBuffer::release(QOpenGLBuffer* theWrappedObject)
{
  ( theWrappedObject->release());
}

void PythonQtWrapper_QOpenGLBuffer::static_QOpenGLBuffer_release(QOpenGLBuffer::Type  type)
{
  (QOpenGLBuffer::release(type));
}

void PythonQtWrapper_QOpenGLBuffer::setUsagePattern(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer::UsagePattern  value)
{
  ( theWrappedObject->setUsagePattern(value));
}

int  PythonQtWrapper_QOpenGLBuffer::size(QOpenGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QOpenGLBuffer::swap(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer&  other)
{
  ( theWrappedObject->swap(other));
}

QOpenGLBuffer::Type  PythonQtWrapper_QOpenGLBuffer::type(QOpenGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

bool  PythonQtWrapper_QOpenGLBuffer::unmap(QOpenGLBuffer* theWrappedObject)
{
  return ( theWrappedObject->unmap());
}

QOpenGLBuffer::UsagePattern  PythonQtWrapper_QOpenGLBuffer::usagePattern(QOpenGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->usagePattern());
}

void PythonQtWrapper_QOpenGLBuffer::write(QOpenGLBuffer* theWrappedObject, int  offset, const void*  data, int  count)
{
  ( theWrappedObject->write(offset, data, count));
}



PythonQtShell_QOpenGLContext::~PythonQtShell_QOpenGLContext() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QOpenGLContext::childEvent(QChildEvent*  event0)
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
  QOpenGLContext::childEvent(event0);
}
void PythonQtShell_QOpenGLContext::customEvent(QEvent*  event0)
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
  QOpenGLContext::customEvent(event0);
}
bool  PythonQtShell_QOpenGLContext::event(QEvent*  event0)
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
  return QOpenGLContext::event(event0);
}
bool  PythonQtShell_QOpenGLContext::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QOpenGLContext::eventFilter(watched0, event1);
}
void PythonQtShell_QOpenGLContext::timerEvent(QTimerEvent*  event0)
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
  QOpenGLContext::timerEvent(event0);
}
QOpenGLContext* PythonQtWrapper_QOpenGLContext::new_QOpenGLContext(QObject*  parent)
{ 
return new PythonQtShell_QOpenGLContext(parent); }

const QMetaObject* PythonQtShell_QOpenGLContext::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QOpenGLContext::staticMetaObject);
  } else {
    return &QOpenGLContext::staticMetaObject;
  }
}
int PythonQtShell_QOpenGLContext::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QOpenGLContext::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QOpenGLContext::static_QOpenGLContext_areSharing(QOpenGLContext*  first, QOpenGLContext*  second)
{
  return (QOpenGLContext::areSharing(first, second));
}

bool  PythonQtWrapper_QOpenGLContext::create(QOpenGLContext* theWrappedObject)
{
  return ( theWrappedObject->create());
}

QOpenGLContext*  PythonQtWrapper_QOpenGLContext::static_QOpenGLContext_currentContext()
{
  return (QOpenGLContext::currentContext());
}

GLuint  PythonQtWrapper_QOpenGLContext::defaultFramebufferObject(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->defaultFramebufferObject());
}

void PythonQtWrapper_QOpenGLContext::doneCurrent(QOpenGLContext* theWrappedObject)
{
  ( theWrappedObject->doneCurrent());
}

QSet<QByteArray >  PythonQtWrapper_QOpenGLContext::extensions(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->extensions());
}

QSurfaceFormat  PythonQtWrapper_QOpenGLContext::format(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QOpenGLFunctions*  PythonQtWrapper_QOpenGLContext::functions(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->functions());
}

QOpenGLContext*  PythonQtWrapper_QOpenGLContext::static_QOpenGLContext_globalShareContext()
{
  return (QOpenGLContext::globalShareContext());
}

bool  PythonQtWrapper_QOpenGLContext::hasExtension(QOpenGLContext* theWrappedObject, const QByteArray&  extension) const
{
  return ( theWrappedObject->hasExtension(extension));
}

bool  PythonQtWrapper_QOpenGLContext::isOpenGLES(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->isOpenGLES());
}

bool  PythonQtWrapper_QOpenGLContext::isValid(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QOpenGLContext::makeCurrent(QOpenGLContext* theWrappedObject, QSurface*  surface)
{
  return ( theWrappedObject->makeCurrent(surface));
}

QOpenGLContext::OpenGLModuleType  PythonQtWrapper_QOpenGLContext::static_QOpenGLContext_openGLModuleType()
{
  return (QOpenGLContext::openGLModuleType());
}

void*  PythonQtWrapper_QOpenGLContext::resolveInterface(QOpenGLContext* theWrappedObject, const char*  name, int  revision) const
{
  return ( ((PythonQtPublicPromoter_QOpenGLContext*)theWrappedObject)->promoted_resolveInterface(name, revision));
}

QScreen*  PythonQtWrapper_QOpenGLContext::screen(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->screen());
}

void PythonQtWrapper_QOpenGLContext::setFormat(QOpenGLContext* theWrappedObject, const QSurfaceFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QOpenGLContext::setScreen(QOpenGLContext* theWrappedObject, QScreen*  screen)
{
  ( theWrappedObject->setScreen(screen));
}

void PythonQtWrapper_QOpenGLContext::setShareContext(QOpenGLContext* theWrappedObject, QOpenGLContext*  shareContext)
{
  ( theWrappedObject->setShareContext(shareContext));
}

QOpenGLContext*  PythonQtWrapper_QOpenGLContext::shareContext(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->shareContext());
}

QOpenGLContextGroup*  PythonQtWrapper_QOpenGLContext::shareGroup(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->shareGroup());
}

bool  PythonQtWrapper_QOpenGLContext::static_QOpenGLContext_supportsThreadedOpenGL()
{
  return (QOpenGLContext::supportsThreadedOpenGL());
}

QSurface*  PythonQtWrapper_QOpenGLContext::surface(QOpenGLContext* theWrappedObject) const
{
  return ( theWrappedObject->surface());
}

void PythonQtWrapper_QOpenGLContext::swapBuffers(QOpenGLContext* theWrappedObject, QSurface*  surface)
{
  ( theWrappedObject->swapBuffers(surface));
}

QString PythonQtWrapper_QOpenGLContext::py_toString(QOpenGLContext* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



QOpenGLContextGroup*  PythonQtWrapper_QOpenGLContextGroup::static_QOpenGLContextGroup_currentContextGroup()
{
  return (QOpenGLContextGroup::currentContextGroup());
}

QList<QOpenGLContext* >  PythonQtWrapper_QOpenGLContextGroup::shares(QOpenGLContextGroup* theWrappedObject) const
{
  return ( theWrappedObject->shares());
}

QString PythonQtWrapper_QOpenGLContextGroup::py_toString(QOpenGLContextGroup* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QOpenGLFramebufferObject::~PythonQtShell_QOpenGLFramebufferObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QOpenGLFramebufferObject* PythonQtWrapper_QOpenGLFramebufferObject::new_QOpenGLFramebufferObject(const QSize&  size, GLenum  target)
{ 
return new PythonQtShell_QOpenGLFramebufferObject(size, target); }

QOpenGLFramebufferObject* PythonQtWrapper_QOpenGLFramebufferObject::new_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target, GLenum  internalFormat)
{ 
return new PythonQtShell_QOpenGLFramebufferObject(size, attachment, target, internalFormat); }

QOpenGLFramebufferObject* PythonQtWrapper_QOpenGLFramebufferObject::new_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format)
{ 
return new PythonQtShell_QOpenGLFramebufferObject(size, format); }

QOpenGLFramebufferObject* PythonQtWrapper_QOpenGLFramebufferObject::new_QOpenGLFramebufferObject(int  width, int  height, GLenum  target)
{ 
return new PythonQtShell_QOpenGLFramebufferObject(width, height, target); }

QOpenGLFramebufferObject* PythonQtWrapper_QOpenGLFramebufferObject::new_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target, GLenum  internalFormat)
{ 
return new PythonQtShell_QOpenGLFramebufferObject(width, height, attachment, target, internalFormat); }

QOpenGLFramebufferObject* PythonQtWrapper_QOpenGLFramebufferObject::new_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format)
{ 
return new PythonQtShell_QOpenGLFramebufferObject(width, height, format); }

void PythonQtWrapper_QOpenGLFramebufferObject::addColorAttachment(QOpenGLFramebufferObject* theWrappedObject, const QSize&  size, GLenum  internalFormat)
{
  ( theWrappedObject->addColorAttachment(size, internalFormat));
}

void PythonQtWrapper_QOpenGLFramebufferObject::addColorAttachment(QOpenGLFramebufferObject* theWrappedObject, int  width, int  height, GLenum  internalFormat)
{
  ( theWrappedObject->addColorAttachment(width, height, internalFormat));
}

QOpenGLFramebufferObject::Attachment  PythonQtWrapper_QOpenGLFramebufferObject::attachment(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->attachment());
}

bool  PythonQtWrapper_QOpenGLFramebufferObject::bind(QOpenGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->bind());
}

bool  PythonQtWrapper_QOpenGLFramebufferObject::static_QOpenGLFramebufferObject_bindDefault()
{
  return (QOpenGLFramebufferObject::bindDefault());
}

void PythonQtWrapper_QOpenGLFramebufferObject::static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, QOpenGLFramebufferObject*  source, GLbitfield  buffers, GLenum  filter)
{
  (QOpenGLFramebufferObject::blitFramebuffer(target, source, buffers, filter));
}

void PythonQtWrapper_QOpenGLFramebufferObject::static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter)
{
  (QOpenGLFramebufferObject::blitFramebuffer(target, targetRect, source, sourceRect, buffers, filter));
}

void PythonQtWrapper_QOpenGLFramebufferObject::static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter, int  readColorAttachmentIndex, int  drawColorAttachmentIndex)
{
  (QOpenGLFramebufferObject::blitFramebuffer(target, targetRect, source, sourceRect, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex));
}

void PythonQtWrapper_QOpenGLFramebufferObject::static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter, int  readColorAttachmentIndex, int  drawColorAttachmentIndex, QOpenGLFramebufferObject::FramebufferRestorePolicy  restorePolicy)
{
  (QOpenGLFramebufferObject::blitFramebuffer(target, targetRect, source, sourceRect, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex, restorePolicy));
}

QOpenGLFramebufferObjectFormat  PythonQtWrapper_QOpenGLFramebufferObject::format(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

GLuint  PythonQtWrapper_QOpenGLFramebufferObject::handle(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

bool  PythonQtWrapper_QOpenGLFramebufferObject::static_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit()
{
  return (QOpenGLFramebufferObject::hasOpenGLFramebufferBlit());
}

bool  PythonQtWrapper_QOpenGLFramebufferObject::static_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects()
{
  return (QOpenGLFramebufferObject::hasOpenGLFramebufferObjects());
}

int  PythonQtWrapper_QOpenGLFramebufferObject::height(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QOpenGLFramebufferObject::isBound(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->isBound());
}

bool  PythonQtWrapper_QOpenGLFramebufferObject::isValid(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QOpenGLFramebufferObject::release(QOpenGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->release());
}

void PythonQtWrapper_QOpenGLFramebufferObject::setAttachment(QOpenGLFramebufferObject* theWrappedObject, QOpenGLFramebufferObject::Attachment  attachment)
{
  ( theWrappedObject->setAttachment(attachment));
}

QSize  PythonQtWrapper_QOpenGLFramebufferObject::size(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QList<QSize >  PythonQtWrapper_QOpenGLFramebufferObject::sizes(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->sizes());
}

GLuint  PythonQtWrapper_QOpenGLFramebufferObject::takeTexture(QOpenGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->takeTexture());
}

GLuint  PythonQtWrapper_QOpenGLFramebufferObject::takeTexture(QOpenGLFramebufferObject* theWrappedObject, int  colorAttachmentIndex)
{
  return ( theWrappedObject->takeTexture(colorAttachmentIndex));
}

GLuint  PythonQtWrapper_QOpenGLFramebufferObject::texture(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->texture());
}

QList<GLuint >  PythonQtWrapper_QOpenGLFramebufferObject::textures(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->textures());
}

QImage  PythonQtWrapper_QOpenGLFramebufferObject::toImage(QOpenGLFramebufferObject* theWrappedObject, bool  flipped) const
{
  return ( theWrappedObject->toImage(flipped));
}

QImage  PythonQtWrapper_QOpenGLFramebufferObject::toImage(QOpenGLFramebufferObject* theWrappedObject, bool  flipped, int  colorAttachmentIndex) const
{
  return ( theWrappedObject->toImage(flipped, colorAttachmentIndex));
}

int  PythonQtWrapper_QOpenGLFramebufferObject::width(QOpenGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QOpenGLFramebufferObjectFormat* PythonQtWrapper_QOpenGLFramebufferObjectFormat::new_QOpenGLFramebufferObjectFormat()
{ 
return new QOpenGLFramebufferObjectFormat(); }

QOpenGLFramebufferObjectFormat* PythonQtWrapper_QOpenGLFramebufferObjectFormat::new_QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat&  other)
{ 
return new QOpenGLFramebufferObjectFormat(other); }

QOpenGLFramebufferObject::Attachment  PythonQtWrapper_QOpenGLFramebufferObjectFormat::attachment(QOpenGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->attachment());
}

GLenum  PythonQtWrapper_QOpenGLFramebufferObjectFormat::internalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->internalTextureFormat());
}

bool  PythonQtWrapper_QOpenGLFramebufferObjectFormat::mipmap(QOpenGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->mipmap());
}

bool  PythonQtWrapper_QOpenGLFramebufferObjectFormat::__ne__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QOpenGLFramebufferObjectFormat*  PythonQtWrapper_QOpenGLFramebufferObjectFormat::operator_assign(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QOpenGLFramebufferObjectFormat::__eq__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QOpenGLFramebufferObjectFormat::samples(QOpenGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->samples());
}

void PythonQtWrapper_QOpenGLFramebufferObjectFormat::setAttachment(QOpenGLFramebufferObjectFormat* theWrappedObject, QOpenGLFramebufferObject::Attachment  attachment)
{
  ( theWrappedObject->setAttachment(attachment));
}

void PythonQtWrapper_QOpenGLFramebufferObjectFormat::setInternalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject, GLenum  internalTextureFormat)
{
  ( theWrappedObject->setInternalTextureFormat(internalTextureFormat));
}

void PythonQtWrapper_QOpenGLFramebufferObjectFormat::setMipmap(QOpenGLFramebufferObjectFormat* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setMipmap(enabled));
}

void PythonQtWrapper_QOpenGLFramebufferObjectFormat::setSamples(QOpenGLFramebufferObjectFormat* theWrappedObject, int  samples)
{
  ( theWrappedObject->setSamples(samples));
}

void PythonQtWrapper_QOpenGLFramebufferObjectFormat::setTextureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject, GLenum  target)
{
  ( theWrappedObject->setTextureTarget(target));
}

GLenum  PythonQtWrapper_QOpenGLFramebufferObjectFormat::textureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->textureTarget());
}



PythonQtShell_QOpenGLPaintDevice::~PythonQtShell_QOpenGLPaintDevice() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QOpenGLPaintDevice::devType() const
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
  return QOpenGLPaintDevice::devType();
}
void PythonQtShell_QOpenGLPaintDevice::ensureActiveTarget()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("ensureActiveTarget");
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
  QOpenGLPaintDevice::ensureActiveTarget();
}
void PythonQtShell_QOpenGLPaintDevice::initPainter(QPainter*  painter0) const
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
  QOpenGLPaintDevice::initPainter(painter0);
}
int  PythonQtShell_QOpenGLPaintDevice::metric(QPaintDevice::PaintDeviceMetric  metric0) const
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
      void* args[2] = {nullptr, (void*)&metric0};
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
  return QOpenGLPaintDevice::metric(metric0);
}
QPaintEngine*  PythonQtShell_QOpenGLPaintDevice::paintEngine() const
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
  return QOpenGLPaintDevice::paintEngine();
}
QPaintDevice*  PythonQtShell_QOpenGLPaintDevice::redirected(QPoint*  offset0) const
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
  return QOpenGLPaintDevice::redirected(offset0);
}
QPainter*  PythonQtShell_QOpenGLPaintDevice::sharedPainter() const
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
  return QOpenGLPaintDevice::sharedPainter();
}
QOpenGLPaintDevice* PythonQtWrapper_QOpenGLPaintDevice::new_QOpenGLPaintDevice()
{ 
return new PythonQtShell_QOpenGLPaintDevice(); }

QOpenGLPaintDevice* PythonQtWrapper_QOpenGLPaintDevice::new_QOpenGLPaintDevice(const QSize&  size)
{ 
return new PythonQtShell_QOpenGLPaintDevice(size); }

QOpenGLPaintDevice* PythonQtWrapper_QOpenGLPaintDevice::new_QOpenGLPaintDevice(int  width, int  height)
{ 
return new PythonQtShell_QOpenGLPaintDevice(width, height); }

QOpenGLContext*  PythonQtWrapper_QOpenGLPaintDevice::context(QOpenGLPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->context());
}

qreal  PythonQtWrapper_QOpenGLPaintDevice::dotsPerMeterX(QOpenGLPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->dotsPerMeterX());
}

qreal  PythonQtWrapper_QOpenGLPaintDevice::dotsPerMeterY(QOpenGLPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->dotsPerMeterY());
}

void PythonQtWrapper_QOpenGLPaintDevice::ensureActiveTarget(QOpenGLPaintDevice* theWrappedObject)
{
  ( theWrappedObject->ensureActiveTarget());
}

bool  PythonQtWrapper_QOpenGLPaintDevice::paintFlipped(QOpenGLPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->paintFlipped());
}

void PythonQtWrapper_QOpenGLPaintDevice::setDevicePixelRatio(QOpenGLPaintDevice* theWrappedObject, qreal  devicePixelRatio)
{
  ( theWrappedObject->setDevicePixelRatio(devicePixelRatio));
}

void PythonQtWrapper_QOpenGLPaintDevice::setDotsPerMeterX(QOpenGLPaintDevice* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setDotsPerMeterX(arg__1));
}

void PythonQtWrapper_QOpenGLPaintDevice::setDotsPerMeterY(QOpenGLPaintDevice* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setDotsPerMeterY(arg__1));
}

void PythonQtWrapper_QOpenGLPaintDevice::setPaintFlipped(QOpenGLPaintDevice* theWrappedObject, bool  flipped)
{
  ( theWrappedObject->setPaintFlipped(flipped));
}

void PythonQtWrapper_QOpenGLPaintDevice::setSize(QOpenGLPaintDevice* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setSize(size));
}

QSize  PythonQtWrapper_QOpenGLPaintDevice::size(QOpenGLPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



PythonQtShell_QOpenGLShader::~PythonQtShell_QOpenGLShader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QOpenGLShader::childEvent(QChildEvent*  event0)
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
  QOpenGLShader::childEvent(event0);
}
void PythonQtShell_QOpenGLShader::customEvent(QEvent*  event0)
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
  QOpenGLShader::customEvent(event0);
}
bool  PythonQtShell_QOpenGLShader::event(QEvent*  event0)
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
  return QOpenGLShader::event(event0);
}
bool  PythonQtShell_QOpenGLShader::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QOpenGLShader::eventFilter(watched0, event1);
}
void PythonQtShell_QOpenGLShader::timerEvent(QTimerEvent*  event0)
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
  QOpenGLShader::timerEvent(event0);
}
QOpenGLShader* PythonQtWrapper_QOpenGLShader::new_QOpenGLShader(QOpenGLShader::ShaderType  type, QObject*  parent)
{ 
return new PythonQtShell_QOpenGLShader(type, parent); }

const QMetaObject* PythonQtShell_QOpenGLShader::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QOpenGLShader::staticMetaObject);
  } else {
    return &QOpenGLShader::staticMetaObject;
  }
}
int PythonQtShell_QOpenGLShader::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QOpenGLShader::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QOpenGLShader::compileSourceCode(QOpenGLShader* theWrappedObject, const QByteArray&  source)
{
  return ( theWrappedObject->compileSourceCode(source));
}

bool  PythonQtWrapper_QOpenGLShader::compileSourceCode(QOpenGLShader* theWrappedObject, const QString&  source)
{
  return ( theWrappedObject->compileSourceCode(source));
}

bool  PythonQtWrapper_QOpenGLShader::compileSourceCode(QOpenGLShader* theWrappedObject, const char*  source)
{
  return ( theWrappedObject->compileSourceCode(source));
}

bool  PythonQtWrapper_QOpenGLShader::compileSourceFile(QOpenGLShader* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->compileSourceFile(fileName));
}

bool  PythonQtWrapper_QOpenGLShader::static_QOpenGLShader_hasOpenGLShaders(QOpenGLShader::ShaderType  type, QOpenGLContext*  context)
{
  return (QOpenGLShader::hasOpenGLShaders(type, context));
}

bool  PythonQtWrapper_QOpenGLShader::isCompiled(QOpenGLShader* theWrappedObject) const
{
  return ( theWrappedObject->isCompiled());
}

QString  PythonQtWrapper_QOpenGLShader::log(QOpenGLShader* theWrappedObject) const
{
  return ( theWrappedObject->log());
}

GLuint  PythonQtWrapper_QOpenGLShader::shaderId(QOpenGLShader* theWrappedObject) const
{
  return ( theWrappedObject->shaderId());
}

QOpenGLShader::ShaderType  PythonQtWrapper_QOpenGLShader::shaderType(QOpenGLShader* theWrappedObject) const
{
  return ( theWrappedObject->shaderType());
}

QByteArray  PythonQtWrapper_QOpenGLShader::sourceCode(QOpenGLShader* theWrappedObject) const
{
  return ( theWrappedObject->sourceCode());
}



PythonQtShell_QOpenGLShaderProgram::~PythonQtShell_QOpenGLShaderProgram() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QOpenGLShaderProgram::childEvent(QChildEvent*  event0)
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
  QOpenGLShaderProgram::childEvent(event0);
}
void PythonQtShell_QOpenGLShaderProgram::customEvent(QEvent*  event0)
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
  QOpenGLShaderProgram::customEvent(event0);
}
bool  PythonQtShell_QOpenGLShaderProgram::event(QEvent*  event0)
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
  return QOpenGLShaderProgram::event(event0);
}
bool  PythonQtShell_QOpenGLShaderProgram::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QOpenGLShaderProgram::eventFilter(watched0, event1);
}
bool  PythonQtShell_QOpenGLShaderProgram::link()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("link");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("link", methodInfo, result);
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
  return QOpenGLShaderProgram::link();
}
void PythonQtShell_QOpenGLShaderProgram::timerEvent(QTimerEvent*  event0)
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
  QOpenGLShaderProgram::timerEvent(event0);
}
QOpenGLShaderProgram* PythonQtWrapper_QOpenGLShaderProgram::new_QOpenGLShaderProgram(QObject*  parent)
{ 
return new PythonQtShell_QOpenGLShaderProgram(parent); }

const QMetaObject* PythonQtShell_QOpenGLShaderProgram::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QOpenGLShaderProgram::staticMetaObject);
  } else {
    return &QOpenGLShaderProgram::staticMetaObject;
  }
}
int PythonQtShell_QOpenGLShaderProgram::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QOpenGLShaderProgram::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QOpenGLShaderProgram::addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QByteArray&  source)
{
  return ( theWrappedObject->addCacheableShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  source)
{
  return ( theWrappedObject->addCacheableShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const char*  source)
{
  return ( theWrappedObject->addCacheableShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::addCacheableShaderFromSourceFile(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  fileName)
{
  return ( theWrappedObject->addCacheableShaderFromSourceFile(type, fileName));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::addShader(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader*  shader)
{
  return ( theWrappedObject->addShader(shader));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QByteArray&  source)
{
  return ( theWrappedObject->addShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  source)
{
  return ( theWrappedObject->addShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const char*  source)
{
  return ( theWrappedObject->addShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::addShaderFromSourceFile(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  fileName)
{
  return ( theWrappedObject->addShaderFromSourceFile(type, fileName));
}

int  PythonQtWrapper_QOpenGLShaderProgram::attributeLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name) const
{
  return ( theWrappedObject->attributeLocation(name));
}

int  PythonQtWrapper_QOpenGLShaderProgram::attributeLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->attributeLocation(name));
}

int  PythonQtWrapper_QOpenGLShaderProgram::attributeLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name) const
{
  return ( theWrappedObject->attributeLocation(name));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::bind(QOpenGLShaderProgram* theWrappedObject)
{
  return ( theWrappedObject->bind());
}

void PythonQtWrapper_QOpenGLShaderProgram::bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name, int  location)
{
  ( theWrappedObject->bindAttributeLocation(name, location));
}

void PythonQtWrapper_QOpenGLShaderProgram::bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name, int  location)
{
  ( theWrappedObject->bindAttributeLocation(name, location));
}

void PythonQtWrapper_QOpenGLShaderProgram::bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name, int  location)
{
  ( theWrappedObject->bindAttributeLocation(name, location));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::create(QOpenGLShaderProgram* theWrappedObject)
{
  return ( theWrappedObject->create());
}

QList<float >  PythonQtWrapper_QOpenGLShaderProgram::defaultInnerTessellationLevels(QOpenGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->defaultInnerTessellationLevels());
}

QList<float >  PythonQtWrapper_QOpenGLShaderProgram::defaultOuterTessellationLevels(QOpenGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->defaultOuterTessellationLevels());
}

void PythonQtWrapper_QOpenGLShaderProgram::disableAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name)
{
  ( theWrappedObject->disableAttributeArray(name));
}

void PythonQtWrapper_QOpenGLShaderProgram::disableAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location)
{
  ( theWrappedObject->disableAttributeArray(location));
}

void PythonQtWrapper_QOpenGLShaderProgram::enableAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name)
{
  ( theWrappedObject->enableAttributeArray(name));
}

void PythonQtWrapper_QOpenGLShaderProgram::enableAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location)
{
  ( theWrappedObject->enableAttributeArray(location));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::static_QOpenGLShaderProgram_hasOpenGLShaderPrograms(QOpenGLContext*  context)
{
  return (QOpenGLShaderProgram::hasOpenGLShaderPrograms(context));
}

bool  PythonQtWrapper_QOpenGLShaderProgram::isLinked(QOpenGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->isLinked());
}

bool  PythonQtWrapper_QOpenGLShaderProgram::link(QOpenGLShaderProgram* theWrappedObject)
{
  return ( theWrappedObject->link());
}

QString  PythonQtWrapper_QOpenGLShaderProgram::log(QOpenGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->log());
}

int  PythonQtWrapper_QOpenGLShaderProgram::maxGeometryOutputVertices(QOpenGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->maxGeometryOutputVertices());
}

int  PythonQtWrapper_QOpenGLShaderProgram::patchVertexCount(QOpenGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->patchVertexCount());
}

GLuint  PythonQtWrapper_QOpenGLShaderProgram::programId(QOpenGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->programId());
}

void PythonQtWrapper_QOpenGLShaderProgram::release(QOpenGLShaderProgram* theWrappedObject)
{
  ( theWrappedObject->release());
}

void PythonQtWrapper_QOpenGLShaderProgram::removeAllShaders(QOpenGLShaderProgram* theWrappedObject)
{
  ( theWrappedObject->removeAllShaders());
}

void PythonQtWrapper_QOpenGLShaderProgram::removeShader(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader*  shader)
{
  ( theWrappedObject->removeShader(shader));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, const void*  values, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, type, values, tupleSize, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, values, tupleSize, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, values, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, values, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, values, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, GLenum  type, const void*  values, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, type, values, tupleSize, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, values, tupleSize, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, values, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, values, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, values, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeBuffer(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, int  offset, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeBuffer(name, type, offset, tupleSize, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeBuffer(QOpenGLShaderProgram* theWrappedObject, int  location, GLenum  type, int  offset, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeBuffer(location, type, offset, tupleSize, stride));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->setAttributeValue(name, x, y));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->setAttributeValue(name, x, y, z));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->setAttributeValue(name, x, y, z, w));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  columns, int  rows)
{
  ( theWrappedObject->setAttributeValue(name, values, columns, rows));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QColor&  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->setAttributeValue(location, x, y));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->setAttributeValue(location, x, y, z));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->setAttributeValue(location, x, y, z, w));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  columns, int  rows)
{
  ( theWrappedObject->setAttributeValue(location, values, columns, rows));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QColor&  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setDefaultInnerTessellationLevels(QOpenGLShaderProgram* theWrappedObject, const QList<float >&  levels)
{
  ( theWrappedObject->setDefaultInnerTessellationLevels(levels));
}

void PythonQtWrapper_QOpenGLShaderProgram::setDefaultOuterTessellationLevels(QOpenGLShaderProgram* theWrappedObject, const QList<float >&  levels)
{
  ( theWrappedObject->setDefaultOuterTessellationLevels(levels));
}

void PythonQtWrapper_QOpenGLShaderProgram::setPatchVertexCount(QOpenGLShaderProgram* theWrappedObject, int  count)
{
  ( theWrappedObject->setPatchVertexCount(count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->setUniformValue(name, x, y));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->setUniformValue(name, x, y, z));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->setUniformValue(name, x, y, z, w));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLint  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLuint  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QColor&  color)
{
  ( theWrappedObject->setUniformValue(name, color));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QPoint&  point)
{
  ( theWrappedObject->setUniformValue(name, point));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QPointF&  point)
{
  ( theWrappedObject->setUniformValue(name, point));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QSize&  size)
{
  ( theWrappedObject->setUniformValue(name, size));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QSizeF&  size)
{
  ( theWrappedObject->setUniformValue(name, size));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QTransform&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->setUniformValue(location, x, y));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->setUniformValue(location, x, y, z));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->setUniformValue(location, x, y, z, w));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLint  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLuint  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QColor&  color)
{
  ( theWrappedObject->setUniformValue(location, color));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QPoint&  point)
{
  ( theWrappedObject->setUniformValue(location, point));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QPointF&  point)
{
  ( theWrappedObject->setUniformValue(location, point));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QSize&  size)
{
  ( theWrappedObject->setUniformValue(location, size));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QSizeF&  size)
{
  ( theWrappedObject->setUniformValue(location, size));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QTransform&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  count, int  tupleSize)
{
  ( theWrappedObject->setUniformValueArray(name, values, count, tupleSize));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLint*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLuint*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  count, int  tupleSize)
{
  ( theWrappedObject->setUniformValueArray(location, values, count, tupleSize));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLint*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLuint*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QOpenGLShaderProgram::setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

QList<QOpenGLShader* >  PythonQtWrapper_QOpenGLShaderProgram::shaders(QOpenGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->shaders());
}

int  PythonQtWrapper_QOpenGLShaderProgram::uniformLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name) const
{
  return ( theWrappedObject->uniformLocation(name));
}

int  PythonQtWrapper_QOpenGLShaderProgram::uniformLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->uniformLocation(name));
}

int  PythonQtWrapper_QOpenGLShaderProgram::uniformLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name) const
{
  return ( theWrappedObject->uniformLocation(name));
}


