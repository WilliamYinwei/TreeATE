#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <QtMultimedia/qcapturablewindow.h>
#include <QtMultimedia/qmediacapturesession.h>
#include <QtMultimedia/qvideoframe.h>
#include <QtMultimedia/qvideoframeformat.h>
#include <QtMultimedia/qvideoframeinput.h>
#include <QtMultimedia/qvideosink.h>
#include <QtMultimedia/qwindowcapture.h>
#include <QtMultimediaWidgets/qvideowidget.h>
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



class PythonQtShell_QVideoFrameInput : public QVideoFrameInput
{
public:
    PythonQtShell_QVideoFrameInput(QObject*  parent = nullptr):QVideoFrameInput(parent),_wrapper(nullptr) {};
    PythonQtShell_QVideoFrameInput(const QVideoFrameFormat&  format, QObject*  parent = nullptr):QVideoFrameInput(format, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoFrameInput() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QVideoFrameInput : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QVideoFrameInput* new_QVideoFrameInput(QObject*  parent = nullptr);
QVideoFrameInput* new_QVideoFrameInput(const QVideoFrameFormat&  format, QObject*  parent = nullptr);
void delete_QVideoFrameInput(QVideoFrameInput* obj) { delete obj; }
   QMediaCaptureSession*  captureSession(QVideoFrameInput* theWrappedObject) const;
   QVideoFrameFormat  format(QVideoFrameInput* theWrappedObject) const;
   bool  sendVideoFrame(QVideoFrameInput* theWrappedObject, const QVideoFrame&  frame);
};





class PythonQtShell_QVideoFrame__PaintOptions : public QVideoFrame::PaintOptions
{
public:
    PythonQtShell_QVideoFrame__PaintOptions():QVideoFrame::PaintOptions(),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoFrame__PaintOptions();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QVideoFrame__PaintOptions : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PaintFlag )
Q_FLAGS(PaintFlags )
enum PaintFlag{
  DontDrawSubtitles = QVideoFrame::PaintOptions::DontDrawSubtitles};
Q_DECLARE_FLAGS(PaintFlags, PaintFlag)
public Q_SLOTS:
QVideoFrame::PaintOptions* new_QVideoFrame__PaintOptions();
void delete_QVideoFrame__PaintOptions(QVideoFrame::PaintOptions* obj) { delete obj; }
void py_set_aspectRatioMode(QVideoFrame::PaintOptions* theWrappedObject, Qt::AspectRatioMode  aspectRatioMode){ theWrappedObject->aspectRatioMode = aspectRatioMode; }
Qt::AspectRatioMode  py_get_aspectRatioMode(QVideoFrame::PaintOptions* theWrappedObject){ return theWrappedObject->aspectRatioMode; }
void py_set_backgroundColor(QVideoFrame::PaintOptions* theWrappedObject, QColor  backgroundColor){ theWrappedObject->backgroundColor = backgroundColor; }
QColor  py_get_backgroundColor(QVideoFrame::PaintOptions* theWrappedObject){ return theWrappedObject->backgroundColor; }
void py_set_paintFlags(QVideoFrame::PaintOptions* theWrappedObject, QVideoFrame::PaintOptions::PaintFlags  paintFlags){ theWrappedObject->paintFlags = paintFlags; }
QVideoFrame::PaintOptions::PaintFlags  py_get_paintFlags(QVideoFrame::PaintOptions* theWrappedObject){ return theWrappedObject->paintFlags; }
};





class PythonQtShell_QVideoSink : public QVideoSink
{
public:
    PythonQtShell_QVideoSink(QObject*  parent = nullptr):QVideoSink(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoSink() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QVideoSink : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QVideoSink* new_QVideoSink(QObject*  parent = nullptr);
void delete_QVideoSink(QVideoSink* obj) { delete obj; }
   void setSubtitleText(QVideoSink* theWrappedObject, const QString&  subtitle);
   void setVideoFrame(QVideoSink* theWrappedObject, const QVideoFrame&  frame);
   QString  subtitleText(QVideoSink* theWrappedObject) const;
   QVideoFrame  videoFrame(QVideoSink* theWrappedObject) const;
   QSize  videoSize(QVideoSink* theWrappedObject) const;
};





class PythonQtShell_QVideoWidget : public QVideoWidget
{
public:
    PythonQtShell_QVideoWidget(QWidget*  parent = nullptr):QVideoWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QVideoWidget : public QVideoWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_moveEvent(QMoveEvent*  event) { this->moveEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QVideoWidget::event(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QVideoWidget::hideEvent(event); }
inline void py_q_moveEvent(QMoveEvent*  event) { QVideoWidget::moveEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QVideoWidget::resizeEvent(event); }
inline void py_q_showEvent(QShowEvent*  event) { QVideoWidget::showEvent(event); }
inline QSize  py_q_sizeHint() const { return QVideoWidget::sizeHint(); }
};

class PythonQtWrapper_QVideoWidget : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QVideoWidget* new_QVideoWidget(QWidget*  parent = nullptr);
void delete_QVideoWidget(QVideoWidget* obj) { delete obj; }
   Qt::AspectRatioMode  aspectRatioMode(QVideoWidget* theWrappedObject) const;
   bool  py_q_event(QVideoWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_event(event));}
   void py_q_hideEvent(QVideoWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void py_q_moveEvent(QVideoWidget* theWrappedObject, QMoveEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_moveEvent(event));}
   void py_q_resizeEvent(QVideoWidget* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   void py_q_showEvent(QVideoWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSize  py_q_sizeHint(QVideoWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_sizeHint());}
   QVideoSink*  videoSink(QVideoWidget* theWrappedObject) const;
};





class PythonQtShell_QWindowCapture : public QWindowCapture
{
public:
    PythonQtShell_QWindowCapture(QObject*  parent = nullptr):QWindowCapture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWindowCapture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWindowCapture : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QWindowCapture* new_QWindowCapture(QObject*  parent = nullptr);
void delete_QWindowCapture(QWindowCapture* obj) { delete obj; }
   QList<QCapturableWindow >  static_QWindowCapture_capturableWindows();
   QMediaCaptureSession*  captureSession(QWindowCapture* theWrappedObject) const;
   QWindowCapture::Error  error(QWindowCapture* theWrappedObject) const;
   QString  errorString(QWindowCapture* theWrappedObject) const;
   bool  isActive(QWindowCapture* theWrappedObject) const;
   void setWindow(QWindowCapture* theWrappedObject, QCapturableWindow  window);
   QCapturableWindow  window(QWindowCapture* theWrappedObject) const;
};


