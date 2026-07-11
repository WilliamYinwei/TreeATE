#include <PythonQt.h>
#include <QItemSelection>
#include <QObject>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qlayoutitem.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qmenu.h>
#include <QtWidgets/qrubberband.h>
#include <QtWidgets/qscrollarea.h>
#include <QtWidgets/qscrollbar.h>
#include <QtWidgets/qscroller.h>
#include <QtWidgets/qscrollerproperties.h>
#include <QtWidgets/qsizegrip.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qslider.h>
#include <QtWidgets/qspinbox.h>
#include <QtWidgets/qsplashscreen.h>
#include <QtWidgets/qsplitter.h>
#include <QtWidgets/qstackedlayout.h>
#include <QtWidgets/qstackedwidget.h>
#include <QtWidgets/qstatusbar.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qstyleoption.h>
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
#include <qinputdevice.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpointingdevice.h>
#include <qrect.h>
#include <qregion.h>
#include <qregularexpression.h>
#include <qrgba64.h>
#include <qscreen.h>
#include <qsessionmanager.h>
#include <qshortcut.h>
#include <qsize.h>
#include <qsortfilterproxymodel.h>
#include <qstandarditemmodel.h>
#include <qstatictext.h>
#include <qtextoption.h>
#include <qthread.h>
#include <qtransform.h>
#include <qwindow.h>



class PythonQtWrapper_QRgba64 : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRgba64* new_QRgba64();
QRgba64* new_QRgba64(const QRgba64& other) {
QRgba64* a = new QRgba64();
*((QRgba64*)a) = other;
return a; }
void delete_QRgba64(QRgba64* obj) { delete obj; }
   unsigned short  alpha(QRgba64* theWrappedObject) const;
   unsigned char  alpha8(QRgba64* theWrappedObject) const;
   unsigned short  blue(QRgba64* theWrappedObject) const;
   unsigned char  blue8(QRgba64* theWrappedObject) const;
   QRgba64  static_QRgba64_fromArgb32(uint  rgb);
   QRgba64  static_QRgba64_fromRgba(unsigned char  red, unsigned char  green, unsigned char  blue, unsigned char  alpha);
   QRgba64  static_QRgba64_fromRgba64(quint64  c);
   QRgba64  static_QRgba64_fromRgba64(unsigned short  red, unsigned short  green, unsigned short  blue, unsigned short  alpha);
   unsigned short  green(QRgba64* theWrappedObject) const;
   unsigned char  green8(QRgba64* theWrappedObject) const;
   bool  isOpaque(QRgba64* theWrappedObject) const;
   bool  isTransparent(QRgba64* theWrappedObject) const;
   QRgba64*  operator_assign(QRgba64* theWrappedObject, quint64  _rgba);
   QRgba64  premultiplied(QRgba64* theWrappedObject) const;
   unsigned short  red(QRgba64* theWrappedObject) const;
   unsigned char  red8(QRgba64* theWrappedObject) const;
   void setAlpha(QRgba64* theWrappedObject, unsigned short  _alpha);
   void setBlue(QRgba64* theWrappedObject, unsigned short  _blue);
   void setGreen(QRgba64* theWrappedObject, unsigned short  _green);
   void setRed(QRgba64* theWrappedObject, unsigned short  _red);
   uint  toArgb32(QRgba64* theWrappedObject) const;
   ushort  toRgb16(QRgba64* theWrappedObject) const;
   QRgba64  unpremultiplied(QRgba64* theWrappedObject) const;
};





class PythonQtShell_QRubberBand : public QRubberBand
{
public:
    PythonQtShell_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2 = nullptr):QRubberBand(arg__1, arg__2),_wrapper(nullptr) {};

   ~PythonQtShell_QRubberBand() override;

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
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionRubberBand*  option) const override;
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
void moveEvent(QMoveEvent*  arg__1) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QRubberBand : public QRubberBand
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initStyleOption(QStyleOptionRubberBand*  option) const { this->initStyleOption(option); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { this->moveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QRubberBand::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QRubberBand::event(e); }
inline void py_q_initStyleOption(QStyleOptionRubberBand*  option) const { QRubberBand::initStyleOption(option); }
inline void py_q_moveEvent(QMoveEvent*  arg__1) { QRubberBand::moveEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QRubberBand::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QRubberBand::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QRubberBand::showEvent(arg__1); }
};

class PythonQtWrapper_QRubberBand : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Shape )
enum Shape{
  Line = QRubberBand::Line,   Rectangle = QRubberBand::Rectangle};
public Q_SLOTS:
QRubberBand* new_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2 = nullptr);
void delete_QRubberBand(QRubberBand* obj) { delete obj; }
   void py_q_changeEvent(QRubberBand* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_changeEvent(arg__1));}
   bool  py_q_event(QRubberBand* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_event(e));}
   void initStyleOption(QRubberBand* theWrappedObject, QStyleOptionRubberBand*  option) const;
   void py_q_initStyleOption(QRubberBand* theWrappedObject, QStyleOptionRubberBand*  option) const{  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_initStyleOption(option));}
   void move(QRubberBand* theWrappedObject, const QPoint&  p);
   void move(QRubberBand* theWrappedObject, int  x, int  y);
   void py_q_moveEvent(QRubberBand* theWrappedObject, QMoveEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_moveEvent(arg__1));}
   void py_q_paintEvent(QRubberBand* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void resize(QRubberBand* theWrappedObject, const QSize&  s);
   void resize(QRubberBand* theWrappedObject, int  w, int  h);
   void py_q_resizeEvent(QRubberBand* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setGeometry(QRubberBand* theWrappedObject, const QRect&  r);
   void setGeometry(QRubberBand* theWrappedObject, int  x, int  y, int  w, int  h);
   QRubberBand::Shape  shape(QRubberBand* theWrappedObject) const;
   void py_q_showEvent(QRubberBand* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_showEvent(arg__1));}
};





class PythonQtPublicPromoter_QScreen : public QScreen
{ public:
inline void*  promoted_resolveInterface(const char*  name, int  revision) const { return this->resolveInterface(name, revision); }
};

class PythonQtWrapper_QScreen : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
void delete_QScreen(QScreen* obj) { delete obj; }
   int  angleBetween(QScreen* theWrappedObject, Qt::ScreenOrientation  a, Qt::ScreenOrientation  b) const;
   QRect  availableGeometry(QScreen* theWrappedObject) const;
   QSize  availableSize(QScreen* theWrappedObject) const;
   QRect  availableVirtualGeometry(QScreen* theWrappedObject) const;
   QSize  availableVirtualSize(QScreen* theWrappedObject) const;
   int  depth(QScreen* theWrappedObject) const;
   qreal  devicePixelRatio(QScreen* theWrappedObject) const;
   QRect  geometry(QScreen* theWrappedObject) const;
   QPixmap  grabWindow(QScreen* theWrappedObject, WId  window = 0, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   bool  isLandscape(QScreen* theWrappedObject, Qt::ScreenOrientation  orientation) const;
   bool  isPortrait(QScreen* theWrappedObject, Qt::ScreenOrientation  orientation) const;
   qreal  logicalDotsPerInch(QScreen* theWrappedObject) const;
   qreal  logicalDotsPerInchX(QScreen* theWrappedObject) const;
   qreal  logicalDotsPerInchY(QScreen* theWrappedObject) const;
   QString  manufacturer(QScreen* theWrappedObject) const;
   QRect  mapBetween(QScreen* theWrappedObject, Qt::ScreenOrientation  a, Qt::ScreenOrientation  b, const QRect&  rect) const;
   QString  model(QScreen* theWrappedObject) const;
   QString  name(QScreen* theWrappedObject) const;
   Qt::ScreenOrientation  nativeOrientation(QScreen* theWrappedObject) const;
   Qt::ScreenOrientation  orientation(QScreen* theWrappedObject) const;
   qreal  physicalDotsPerInch(QScreen* theWrappedObject) const;
   qreal  physicalDotsPerInchX(QScreen* theWrappedObject) const;
   qreal  physicalDotsPerInchY(QScreen* theWrappedObject) const;
   QSizeF  physicalSize(QScreen* theWrappedObject) const;
   Qt::ScreenOrientation  primaryOrientation(QScreen* theWrappedObject) const;
   qreal  refreshRate(QScreen* theWrappedObject) const;
   void*  resolveInterface(QScreen* theWrappedObject, const char*  name, int  revision) const;
   QString  serialNumber(QScreen* theWrappedObject) const;
   QSize  size(QScreen* theWrappedObject) const;
   QTransform  transformBetween(QScreen* theWrappedObject, Qt::ScreenOrientation  a, Qt::ScreenOrientation  b, const QRect&  target) const;
   QRect  virtualGeometry(QScreen* theWrappedObject) const;
   QScreen*  virtualSiblingAt(QScreen* theWrappedObject, QPoint  point);
   QList<QScreen* >  virtualSiblings(QScreen* theWrappedObject) const;
   QSize  virtualSize(QScreen* theWrappedObject) const;
    QString py_toString(QScreen*);
};





class PythonQtShell_QScreenOrientationChangeEvent : public QScreenOrientationChangeEvent
{
public:
    PythonQtShell_QScreenOrientationChangeEvent(QScreen*  screen, Qt::ScreenOrientation  orientation):QScreenOrientationChangeEvent(screen, orientation),_wrapper(nullptr) {};
    PythonQtShell_QScreenOrientationChangeEvent(const QScreenOrientationChangeEvent&  arg__1):QScreenOrientationChangeEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QScreenOrientationChangeEvent() override;

QScreenOrientationChangeEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScreenOrientationChangeEvent : public QScreenOrientationChangeEvent
{ public:
inline QScreenOrientationChangeEvent&  promoted_operator_assign(const QScreenOrientationChangeEvent&  other) { return this->QScreenOrientationChangeEvent::operator=(other); }
inline QScreenOrientationChangeEvent*  py_q_clone() const { return QScreenOrientationChangeEvent::clone(); }
};

class PythonQtWrapper_QScreenOrientationChangeEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QScreenOrientationChangeEvent* new_QScreenOrientationChangeEvent(QScreen*  screen, Qt::ScreenOrientation  orientation);
QScreenOrientationChangeEvent* new_QScreenOrientationChangeEvent(const QScreenOrientationChangeEvent&  arg__1);
void delete_QScreenOrientationChangeEvent(QScreenOrientationChangeEvent* obj) { delete obj; }
   QScreenOrientationChangeEvent*  py_q_clone(QScreenOrientationChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScreenOrientationChangeEvent*)theWrappedObject)->py_q_clone());}
   QScreenOrientationChangeEvent*  operator_assign(QScreenOrientationChangeEvent* theWrappedObject, const QScreenOrientationChangeEvent&  other);
   Qt::ScreenOrientation  orientation(QScreenOrientationChangeEvent* theWrappedObject) const;
   QScreen*  screen(QScreenOrientationChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QScrollArea : public QScrollArea
{
public:
    PythonQtShell_QScrollArea(QWidget*  parent = nullptr):QScrollArea(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QScrollArea() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  arg__1) override;
void dragLeaveEvent(QDragLeaveEvent*  arg__1) override;
void dragMoveEvent(QDragMoveEvent*  arg__1) override;
void dropEvent(QDropEvent*  arg__1) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  arg__1) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void scrollContentsBy(int  dx, int  dy) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  viewportEvent(QEvent*  arg__1) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScrollArea : public QScrollArea
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline bool  py_q_event(QEvent*  arg__1) { return QScrollArea::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QScrollArea::eventFilter(arg__1, arg__2); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QScrollArea::focusNextPrevChild(next); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QScrollArea::resizeEvent(arg__1); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QScrollArea::scrollContentsBy(dx, dy); }
inline QSize  py_q_sizeHint() const { return QScrollArea::sizeHint(); }
inline QSize  py_q_viewportSizeHint() const { return QScrollArea::viewportSizeHint(); }
};

class PythonQtWrapper_QScrollArea : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QScrollArea* new_QScrollArea(QWidget*  parent = nullptr);
void delete_QScrollArea(QScrollArea* obj) { delete obj; }
   Qt::Alignment  alignment(QScrollArea* theWrappedObject) const;
   void ensureVisible(QScrollArea* theWrappedObject, int  x, int  y, int  xmargin = 50, int  ymargin = 50);
   void ensureWidgetVisible(QScrollArea* theWrappedObject, QWidget*  childWidget, int  xmargin = 50, int  ymargin = 50);
   bool  py_q_event(QScrollArea* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QScrollArea* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   bool  py_q_focusNextPrevChild(QScrollArea* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_resizeEvent(QScrollArea* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void py_q_scrollContentsBy(QScrollArea* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setAlignment(QScrollArea* theWrappedObject, Qt::Alignment  arg__1);
   void setWidget(QScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setWidgetResizable(QScrollArea* theWrappedObject, bool  resizable);
   QSize  py_q_sizeHint(QScrollArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_sizeHint());}
   QWidget*  takeWidget(QScrollArea* theWrappedObject);
   QSize  py_q_viewportSizeHint(QScrollArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_viewportSizeHint());}
   QWidget*  widget(QScrollArea* theWrappedObject) const;
   bool  widgetResizable(QScrollArea* theWrappedObject) const;
};





class PythonQtShell_QScrollBar : public QScrollBar
{
public:
    PythonQtShell_QScrollBar(QWidget*  parent = nullptr):QScrollBar(parent),_wrapper(nullptr) {};
    PythonQtShell_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = nullptr):QScrollBar(arg__1, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QScrollBar() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
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
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionSlider*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  ev) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void sliderChange(QAbstractSlider::SliderChange  change) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScrollBar : public QScrollBar
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionSlider*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_sliderChange(int  change) { this->sliderChange((QAbstractSlider::SliderChange)change); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QScrollBar::contextMenuEvent(arg__1); }
inline bool  py_q_event(QEvent*  event) { return QScrollBar::event(event); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QScrollBar::hideEvent(arg__1); }
inline void py_q_initStyleOption(QStyleOptionSlider*  option) const { QScrollBar::initStyleOption(option); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QScrollBar::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QScrollBar::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QScrollBar::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QScrollBar::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QScrollBar::sizeHint(); }
inline void py_q_sliderChange(int  change) { QScrollBar::sliderChange((QAbstractSlider::SliderChange)change); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QScrollBar::wheelEvent(arg__1); }
};

class PythonQtWrapper_QScrollBar : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QScrollBar* new_QScrollBar(QWidget*  parent = nullptr);
QScrollBar* new_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = nullptr);
void delete_QScrollBar(QScrollBar* obj) { delete obj; }
   void py_q_contextMenuEvent(QScrollBar* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   QMenu*  createStandardContextMenu(QScrollBar* theWrappedObject, QPoint  position);
   bool  py_q_event(QScrollBar* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_event(event));}
   void py_q_hideEvent(QScrollBar* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_hideEvent(arg__1));}
   void initStyleOption(QScrollBar* theWrappedObject, QStyleOptionSlider*  option) const;
   void py_q_initStyleOption(QScrollBar* theWrappedObject, QStyleOptionSlider*  option) const{  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_initStyleOption(option));}
   void py_q_mouseMoveEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QScrollBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QSize  py_q_sizeHint(QScrollBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_sizeHint());}
   void py_q_sliderChange(QScrollBar* theWrappedObject, int  change){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_sliderChange(change));}
   void py_q_wheelEvent(QScrollBar* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_wheelEvent(arg__1));}
};





class PythonQtShell_QScrollEvent : public QScrollEvent
{
public:
    PythonQtShell_QScrollEvent(const QPointF&  contentPos, const QPointF&  overshoot, QScrollEvent::ScrollState  scrollState):QScrollEvent(contentPos, overshoot, scrollState),_wrapper(nullptr) {};
    PythonQtShell_QScrollEvent(const QScrollEvent&  arg__1):QScrollEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QScrollEvent() override;

QScrollEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScrollEvent : public QScrollEvent
{ public:
inline QScrollEvent&  promoted_operator_assign(const QScrollEvent&  other) { return this->QScrollEvent::operator=(other); }
inline QScrollEvent*  py_q_clone() const { return QScrollEvent::clone(); }
};

class PythonQtWrapper_QScrollEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ScrollState )
enum ScrollState{
  ScrollStarted = QScrollEvent::ScrollStarted,   ScrollUpdated = QScrollEvent::ScrollUpdated,   ScrollFinished = QScrollEvent::ScrollFinished};
public Q_SLOTS:
QScrollEvent* new_QScrollEvent(const QPointF&  contentPos, const QPointF&  overshoot, QScrollEvent::ScrollState  scrollState);
QScrollEvent* new_QScrollEvent(const QScrollEvent&  arg__1);
void delete_QScrollEvent(QScrollEvent* obj) { delete obj; }
   QScrollEvent*  py_q_clone(QScrollEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScrollEvent*)theWrappedObject)->py_q_clone());}
   QPointF  contentPos(QScrollEvent* theWrappedObject) const;
   QScrollEvent*  operator_assign(QScrollEvent* theWrappedObject, const QScrollEvent&  other);
   QPointF  overshootDistance(QScrollEvent* theWrappedObject) const;
   QScrollEvent::ScrollState  scrollState(QScrollEvent* theWrappedObject) const;
};





class PythonQtShell_QScrollPrepareEvent : public QScrollPrepareEvent
{
public:
    PythonQtShell_QScrollPrepareEvent(const QPointF&  startPos):QScrollPrepareEvent(startPos),_wrapper(nullptr) {};
    PythonQtShell_QScrollPrepareEvent(const QScrollPrepareEvent&  arg__1):QScrollPrepareEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QScrollPrepareEvent() override;

QScrollPrepareEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScrollPrepareEvent : public QScrollPrepareEvent
{ public:
inline QScrollPrepareEvent&  promoted_operator_assign(const QScrollPrepareEvent&  other) { return this->QScrollPrepareEvent::operator=(other); }
inline QScrollPrepareEvent*  py_q_clone() const { return QScrollPrepareEvent::clone(); }
};

class PythonQtWrapper_QScrollPrepareEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QScrollPrepareEvent* new_QScrollPrepareEvent(const QPointF&  startPos);
QScrollPrepareEvent* new_QScrollPrepareEvent(const QScrollPrepareEvent&  arg__1);
void delete_QScrollPrepareEvent(QScrollPrepareEvent* obj) { delete obj; }
   QScrollPrepareEvent*  py_q_clone(QScrollPrepareEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScrollPrepareEvent*)theWrappedObject)->py_q_clone());}
   QPointF  contentPos(QScrollPrepareEvent* theWrappedObject) const;
   QRectF  contentPosRange(QScrollPrepareEvent* theWrappedObject) const;
   QScrollPrepareEvent*  operator_assign(QScrollPrepareEvent* theWrappedObject, const QScrollPrepareEvent&  other);
   void setContentPos(QScrollPrepareEvent* theWrappedObject, const QPointF&  pos);
   void setContentPosRange(QScrollPrepareEvent* theWrappedObject, const QRectF&  rect);
   void setViewportSize(QScrollPrepareEvent* theWrappedObject, const QSizeF&  size);
   QPointF  startPos(QScrollPrepareEvent* theWrappedObject) const;
   QSizeF  viewportSize(QScrollPrepareEvent* theWrappedObject) const;
};





class PythonQtWrapper_QScroller : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Input ScrollerGestureType )
enum Input{
  InputPress = QScroller::InputPress,   InputMove = QScroller::InputMove,   InputRelease = QScroller::InputRelease};
enum ScrollerGestureType{
  TouchGesture = QScroller::TouchGesture,   LeftMouseButtonGesture = QScroller::LeftMouseButtonGesture,   RightMouseButtonGesture = QScroller::RightMouseButtonGesture,   MiddleMouseButtonGesture = QScroller::MiddleMouseButtonGesture};
public Q_SLOTS:
   QList<QScroller* >  static_QScroller_activeScrollers();
   QPointF  finalPosition(QScroller* theWrappedObject) const;
   Qt::GestureType  static_QScroller_grabGesture(QObject*  target, QScroller::ScrollerGestureType  gestureType = QScroller::TouchGesture);
   Qt::GestureType  static_QScroller_grabbedGesture(QObject*  target);
   bool  handleInput(QScroller* theWrappedObject, QScroller::Input  input, const QPointF&  position, qint64  timestamp = 0);
   bool  static_QScroller_hasScroller(QObject*  target);
   QPointF  pixelPerMeter(QScroller* theWrappedObject) const;
   QScroller*  static_QScroller_scroller(QObject*  target);
   const QScroller*  static_QScroller_scroller(const QObject*  target);
   QScrollerProperties  scrollerProperties(QScroller* theWrappedObject) const;
   void setSnapPositionsX(QScroller* theWrappedObject, const QList<qreal >&  positions);
   void setSnapPositionsX(QScroller* theWrappedObject, qreal  first, qreal  interval);
   void setSnapPositionsY(QScroller* theWrappedObject, const QList<qreal >&  positions);
   void setSnapPositionsY(QScroller* theWrappedObject, qreal  first, qreal  interval);
   QScroller::State  state(QScroller* theWrappedObject) const;
   void stop(QScroller* theWrappedObject);
   QObject*  target(QScroller* theWrappedObject) const;
   void static_QScroller_ungrabGesture(QObject*  target);
   QPointF  velocity(QScroller* theWrappedObject) const;
};





class PythonQtShell_QScrollerProperties : public QScrollerProperties
{
public:
    PythonQtShell_QScrollerProperties():QScrollerProperties(),_wrapper(nullptr) {};
    PythonQtShell_QScrollerProperties(const QScrollerProperties&  sp):QScrollerProperties(sp),_wrapper(nullptr) {};

   ~PythonQtShell_QScrollerProperties() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QScrollerProperties : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FrameRates OvershootPolicy ScrollMetric )
enum FrameRates{
  Standard = QScrollerProperties::Standard,   Fps60 = QScrollerProperties::Fps60,   Fps30 = QScrollerProperties::Fps30,   Fps20 = QScrollerProperties::Fps20};
enum OvershootPolicy{
  OvershootWhenScrollable = QScrollerProperties::OvershootWhenScrollable,   OvershootAlwaysOff = QScrollerProperties::OvershootAlwaysOff,   OvershootAlwaysOn = QScrollerProperties::OvershootAlwaysOn};
enum ScrollMetric{
  MousePressEventDelay = QScrollerProperties::MousePressEventDelay,   DragStartDistance = QScrollerProperties::DragStartDistance,   DragVelocitySmoothingFactor = QScrollerProperties::DragVelocitySmoothingFactor,   AxisLockThreshold = QScrollerProperties::AxisLockThreshold,   ScrollingCurve = QScrollerProperties::ScrollingCurve,   DecelerationFactor = QScrollerProperties::DecelerationFactor,   MinimumVelocity = QScrollerProperties::MinimumVelocity,   MaximumVelocity = QScrollerProperties::MaximumVelocity,   MaximumClickThroughVelocity = QScrollerProperties::MaximumClickThroughVelocity,   AcceleratingFlickMaximumTime = QScrollerProperties::AcceleratingFlickMaximumTime,   AcceleratingFlickSpeedupFactor = QScrollerProperties::AcceleratingFlickSpeedupFactor,   SnapPositionRatio = QScrollerProperties::SnapPositionRatio,   SnapTime = QScrollerProperties::SnapTime,   OvershootDragResistanceFactor = QScrollerProperties::OvershootDragResistanceFactor,   OvershootDragDistanceFactor = QScrollerProperties::OvershootDragDistanceFactor,   OvershootScrollDistanceFactor = QScrollerProperties::OvershootScrollDistanceFactor,   OvershootScrollTime = QScrollerProperties::OvershootScrollTime,   HorizontalOvershootPolicy = QScrollerProperties::HorizontalOvershootPolicy,   VerticalOvershootPolicy = QScrollerProperties::VerticalOvershootPolicy,   FrameRate = QScrollerProperties::FrameRate,   ScrollMetricCount = QScrollerProperties::ScrollMetricCount};
public Q_SLOTS:
QScrollerProperties* new_QScrollerProperties();
QScrollerProperties* new_QScrollerProperties(const QScrollerProperties&  sp);
void delete_QScrollerProperties(QScrollerProperties* obj) { delete obj; }
   bool  __ne__(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp) const;
   QScrollerProperties*  operator_assign(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp);
   bool  __eq__(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp) const;
   QVariant  scrollMetric(QScrollerProperties* theWrappedObject, QScrollerProperties::ScrollMetric  metric) const;
   void static_QScrollerProperties_setDefaultScrollerProperties(const QScrollerProperties&  sp);
   void setScrollMetric(QScrollerProperties* theWrappedObject, QScrollerProperties::ScrollMetric  metric, const QVariant&  value);
   void static_QScrollerProperties_unsetDefaultScrollerProperties();
};





class PythonQtWrapper_QSessionManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RestartHint )
enum RestartHint{
  RestartIfRunning = QSessionManager::RestartIfRunning,   RestartAnyway = QSessionManager::RestartAnyway,   RestartImmediately = QSessionManager::RestartImmediately,   RestartNever = QSessionManager::RestartNever};
public Q_SLOTS:
   bool  allowsErrorInteraction(QSessionManager* theWrappedObject);
   bool  allowsInteraction(QSessionManager* theWrappedObject);
   void cancel(QSessionManager* theWrappedObject);
   QStringList  discardCommand(QSessionManager* theWrappedObject) const;
   bool  isPhase2(QSessionManager* theWrappedObject) const;
   void release(QSessionManager* theWrappedObject);
   void requestPhase2(QSessionManager* theWrappedObject);
   QStringList  restartCommand(QSessionManager* theWrappedObject) const;
   QSessionManager::RestartHint  restartHint(QSessionManager* theWrappedObject) const;
   QString  sessionId(QSessionManager* theWrappedObject) const;
   QString  sessionKey(QSessionManager* theWrappedObject) const;
   void setDiscardCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
   void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QString&  value);
   void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QStringList&  value);
   void setRestartCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
   void setRestartHint(QSessionManager* theWrappedObject, QSessionManager::RestartHint  arg__1);
};





class PythonQtShell_QShortcut : public QShortcut
{
public:
    PythonQtShell_QShortcut(QKeySequence::StandardKey  key, QObject*  parent, const char*  member = nullptr, const char*  ambiguousMember = nullptr, Qt::ShortcutContext  context = Qt::WindowShortcut):QShortcut(key, parent, member, ambiguousMember, context),_wrapper(nullptr) {};
    PythonQtShell_QShortcut(QObject*  parent):QShortcut(parent),_wrapper(nullptr) {};
    PythonQtShell_QShortcut(const QKeySequence&  key, QObject*  parent, const char*  member = nullptr, const char*  ambiguousMember = nullptr, Qt::ShortcutContext  context = Qt::WindowShortcut):QShortcut(key, parent, member, ambiguousMember, context),_wrapper(nullptr) {};

   ~PythonQtShell_QShortcut() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QShortcut : public QShortcut
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  py_q_event(QEvent*  e) { return QShortcut::event(e); }
};

class PythonQtWrapper_QShortcut : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QShortcut* new_QShortcut(QKeySequence::StandardKey  key, QObject*  parent, const char*  member = nullptr, const char*  ambiguousMember = nullptr, Qt::ShortcutContext  context = Qt::WindowShortcut);
QShortcut* new_QShortcut(QObject*  parent);
QShortcut* new_QShortcut(const QKeySequence&  key, QObject*  parent, const char*  member = nullptr, const char*  ambiguousMember = nullptr, Qt::ShortcutContext  context = Qt::WindowShortcut);
void delete_QShortcut(QShortcut* obj) { delete obj; }
   bool  autoRepeat(QShortcut* theWrappedObject) const;
   Qt::ShortcutContext  context(QShortcut* theWrappedObject) const;
   bool  py_q_event(QShortcut* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QShortcut*)theWrappedObject)->py_q_event(e));}
   int  id(QShortcut* theWrappedObject) const;
   bool  isEnabled(QShortcut* theWrappedObject) const;
   QKeySequence  key(QShortcut* theWrappedObject) const;
   QList<QKeySequence >  keys(QShortcut* theWrappedObject) const;
   void setAutoRepeat(QShortcut* theWrappedObject, bool  on);
   void setContext(QShortcut* theWrappedObject, Qt::ShortcutContext  context);
   void setEnabled(QShortcut* theWrappedObject, bool  enable);
   void setKey(QShortcut* theWrappedObject, const QKeySequence&  key);
   void setKeys(QShortcut* theWrappedObject, QKeySequence::StandardKey  key);
   void setKeys(QShortcut* theWrappedObject, const QList<QKeySequence >&  keys);
   void setWhatsThis(QShortcut* theWrappedObject, const QString&  text);
   QString  whatsThis(QShortcut* theWrappedObject) const;
};





class PythonQtShell_QShortcutEvent : public QShortcutEvent
{
public:
    PythonQtShell_QShortcutEvent(const QKeySequence&  key, const QShortcut*  shortcut = nullptr, bool  ambiguous = false):QShortcutEvent(key, shortcut, ambiguous),_wrapper(nullptr) {};
    PythonQtShell_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous = false):QShortcutEvent(key, id, ambiguous),_wrapper(nullptr) {};
    PythonQtShell_QShortcutEvent(const QShortcutEvent&  arg__1):QShortcutEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QShortcutEvent() override;

QShortcutEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QShortcutEvent : public QShortcutEvent
{ public:
inline QShortcutEvent&  promoted_operator_assign(const QShortcutEvent&  other) { return this->QShortcutEvent::operator=(other); }
inline QShortcutEvent*  py_q_clone() const { return QShortcutEvent::clone(); }
};

class PythonQtWrapper_QShortcutEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QShortcutEvent* new_QShortcutEvent(const QKeySequence&  key, const QShortcut*  shortcut = nullptr, bool  ambiguous = false);
QShortcutEvent* new_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous = false);
QShortcutEvent* new_QShortcutEvent(const QShortcutEvent&  arg__1);
void delete_QShortcutEvent(QShortcutEvent* obj) { delete obj; }
   QShortcutEvent*  py_q_clone(QShortcutEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QShortcutEvent*)theWrappedObject)->py_q_clone());}
   bool  isAmbiguous(QShortcutEvent* theWrappedObject) const;
   const QKeySequence*  key(QShortcutEvent* theWrappedObject) const;
   QShortcutEvent*  operator_assign(QShortcutEvent* theWrappedObject, const QShortcutEvent&  other);
   int  shortcutId(QShortcutEvent* theWrappedObject) const;
};





class PythonQtShell_QShowEvent : public QShowEvent
{
public:
    PythonQtShell_QShowEvent():QShowEvent(),_wrapper(nullptr) {};
    PythonQtShell_QShowEvent(const QShowEvent&  arg__1):QShowEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QShowEvent() override;

QShowEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QShowEvent : public QShowEvent
{ public:
inline QShowEvent&  promoted_operator_assign(const QShowEvent&  other) { return this->QShowEvent::operator=(other); }
inline QShowEvent*  py_q_clone() const { return QShowEvent::clone(); }
};

class PythonQtWrapper_QShowEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QShowEvent* new_QShowEvent();
QShowEvent* new_QShowEvent(const QShowEvent&  arg__1);
void delete_QShowEvent(QShowEvent* obj) { delete obj; }
   QShowEvent*  py_q_clone(QShowEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QShowEvent*)theWrappedObject)->py_q_clone());}
   QShowEvent*  operator_assign(QShowEvent* theWrappedObject, const QShowEvent&  other);
};





class PythonQtShell_QSinglePointEvent : public QSinglePointEvent
{
public:
    PythonQtShell_QSinglePointEvent(QEvent::Type  type, const QPointingDevice*  dev, const QEventPoint&  point, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source):QSinglePointEvent(type, dev, point, button, buttons, modifiers, source),_wrapper(nullptr) {};
    PythonQtShell_QSinglePointEvent(QEvent::Type  type, const QPointingDevice*  dev, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source = Qt::MouseEventNotSynthesized):QSinglePointEvent(type, dev, localPos, scenePos, globalPos, button, buttons, modifiers, source),_wrapper(nullptr) {};
    PythonQtShell_QSinglePointEvent(const QSinglePointEvent&  arg__1):QSinglePointEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QSinglePointEvent() override;

QSinglePointEvent*  clone() const override;
bool  isBeginEvent() const override;
bool  isEndEvent() const override;
bool  isUpdateEvent() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSinglePointEvent : public QSinglePointEvent
{ public:
inline QSinglePointEvent&  promoted_operator_assign(const QSinglePointEvent&  other) { return this->QSinglePointEvent::operator=(other); }
inline QSinglePointEvent*  py_q_clone() const { return QSinglePointEvent::clone(); }
inline bool  py_q_isBeginEvent() const { return QSinglePointEvent::isBeginEvent(); }
inline bool  py_q_isEndEvent() const { return QSinglePointEvent::isEndEvent(); }
inline bool  py_q_isUpdateEvent() const { return QSinglePointEvent::isUpdateEvent(); }
};

class PythonQtWrapper_QSinglePointEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSinglePointEvent* new_QSinglePointEvent(QEvent::Type  type, const QPointingDevice*  dev, const QEventPoint&  point, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source);
QSinglePointEvent* new_QSinglePointEvent(QEvent::Type  type, const QPointingDevice*  dev, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source = Qt::MouseEventNotSynthesized);
QSinglePointEvent* new_QSinglePointEvent(const QSinglePointEvent&  arg__1);
void delete_QSinglePointEvent(QSinglePointEvent* obj) { delete obj; }
   Qt::MouseButton  button(QSinglePointEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QSinglePointEvent* theWrappedObject) const;
   QSinglePointEvent*  py_q_clone(QSinglePointEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSinglePointEvent*)theWrappedObject)->py_q_clone());}
   QObject*  exclusivePointGrabber(QSinglePointEvent* theWrappedObject) const;
   QPointF  globalPosition(QSinglePointEvent* theWrappedObject) const;
   bool  py_q_isBeginEvent(QSinglePointEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSinglePointEvent*)theWrappedObject)->py_q_isBeginEvent());}
   bool  py_q_isEndEvent(QSinglePointEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSinglePointEvent*)theWrappedObject)->py_q_isEndEvent());}
   bool  py_q_isUpdateEvent(QSinglePointEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSinglePointEvent*)theWrappedObject)->py_q_isUpdateEvent());}
   QSinglePointEvent*  operator_assign(QSinglePointEvent* theWrappedObject, const QSinglePointEvent&  other);
   QPointF  position(QSinglePointEvent* theWrappedObject) const;
   QPointF  scenePosition(QSinglePointEvent* theWrappedObject) const;
   void setExclusivePointGrabber(QSinglePointEvent* theWrappedObject, QObject*  exclusiveGrabber);
};





class PythonQtShell_QSizeGrip : public QSizeGrip
{
public:
    PythonQtShell_QSizeGrip(QWidget*  parent):QSizeGrip(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSizeGrip() override;

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
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  hideEvent) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  mouseEvent) override;
void moveEvent(QMoveEvent*  moveEvent) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  arg__1) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  showEvent) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSizeGrip : public QSizeGrip
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { this->hideEvent(hideEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { this->mouseReleaseEvent(mouseEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { this->moveEvent(moveEvent); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  showEvent) { this->showEvent(showEvent); }
inline bool  py_q_event(QEvent*  arg__1) { return QSizeGrip::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QSizeGrip::eventFilter(arg__1, arg__2); }
inline void py_q_hideEvent(QHideEvent*  hideEvent) { QSizeGrip::hideEvent(hideEvent); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QSizeGrip::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QSizeGrip::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QSizeGrip::mouseReleaseEvent(mouseEvent); }
inline void py_q_moveEvent(QMoveEvent*  moveEvent) { QSizeGrip::moveEvent(moveEvent); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QSizeGrip::paintEvent(arg__1); }
inline void py_q_setVisible(bool  arg__1) { QSizeGrip::setVisible(arg__1); }
inline void py_q_showEvent(QShowEvent*  showEvent) { QSizeGrip::showEvent(showEvent); }
inline QSize  py_q_sizeHint() const { return QSizeGrip::sizeHint(); }
};

class PythonQtWrapper_QSizeGrip : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSizeGrip* new_QSizeGrip(QWidget*  parent);
void delete_QSizeGrip(QSizeGrip* obj) { delete obj; }
   bool  py_q_event(QSizeGrip* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QSizeGrip* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   void py_q_hideEvent(QSizeGrip* theWrappedObject, QHideEvent*  hideEvent){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_hideEvent(hideEvent));}
   void py_q_mouseMoveEvent(QSizeGrip* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QSizeGrip* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QSizeGrip* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_mouseReleaseEvent(mouseEvent));}
   void py_q_moveEvent(QSizeGrip* theWrappedObject, QMoveEvent*  moveEvent){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_moveEvent(moveEvent));}
   void py_q_paintEvent(QSizeGrip* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void py_q_setVisible(QSizeGrip* theWrappedObject, bool  arg__1){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_setVisible(arg__1));}
   void py_q_showEvent(QSizeGrip* theWrappedObject, QShowEvent*  showEvent){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_showEvent(showEvent));}
   QSize  py_q_sizeHint(QSizeGrip* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QSlider : public QSlider
{
public:
    PythonQtShell_QSlider(QWidget*  parent = nullptr):QSlider(parent),_wrapper(nullptr) {};
    PythonQtShell_QSlider(Qt::Orientation  orientation, QWidget*  parent = nullptr):QSlider(orientation, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSlider() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
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
void initStyleOption(QStyleOptionSlider*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  ev) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  ev) override;
void mousePressEvent(QMouseEvent*  ev) override;
void mouseReleaseEvent(QMouseEvent*  ev) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  ev) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void sliderChange(QAbstractSlider::SliderChange  change) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSlider : public QSlider
{ public:
inline void promoted_initStyleOption(QStyleOptionSlider*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { this->mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { this->mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { this->mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  ev) { this->paintEvent(ev); }
inline bool  py_q_event(QEvent*  event) { return QSlider::event(event); }
inline void py_q_initStyleOption(QStyleOptionSlider*  option) const { QSlider::initStyleOption(option); }
inline QSize  py_q_minimumSizeHint() const { return QSlider::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  ev) { QSlider::mouseMoveEvent(ev); }
inline void py_q_mousePressEvent(QMouseEvent*  ev) { QSlider::mousePressEvent(ev); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  ev) { QSlider::mouseReleaseEvent(ev); }
inline void py_q_paintEvent(QPaintEvent*  ev) { QSlider::paintEvent(ev); }
inline QSize  py_q_sizeHint() const { return QSlider::sizeHint(); }
};

class PythonQtWrapper_QSlider : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSlider* new_QSlider(QWidget*  parent = nullptr);
QSlider* new_QSlider(Qt::Orientation  orientation, QWidget*  parent = nullptr);
void delete_QSlider(QSlider* obj) { delete obj; }
   bool  py_q_event(QSlider* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_event(event));}
   void initStyleOption(QSlider* theWrappedObject, QStyleOptionSlider*  option) const;
   void py_q_initStyleOption(QSlider* theWrappedObject, QStyleOptionSlider*  option) const{  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_initStyleOption(option));}
   QSize  py_q_minimumSizeHint(QSlider* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QSlider* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_mouseMoveEvent(ev));}
   void py_q_mousePressEvent(QSlider* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_mousePressEvent(ev));}
   void py_q_mouseReleaseEvent(QSlider* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_mouseReleaseEvent(ev));}
   void py_q_paintEvent(QSlider* theWrappedObject, QPaintEvent*  ev){  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_paintEvent(ev));}
   void setTickInterval(QSlider* theWrappedObject, int  ti);
   void setTickPosition(QSlider* theWrappedObject, QSlider::TickPosition  position);
   QSize  py_q_sizeHint(QSlider* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_sizeHint());}
   int  tickInterval(QSlider* theWrappedObject) const;
   QSlider::TickPosition  tickPosition(QSlider* theWrappedObject) const;
};





class PythonQtShell_QSortFilterProxyModel : public QSortFilterProxyModel
{
public:
    PythonQtShell_QSortFilterProxyModel(QObject*  parent = nullptr):QSortFilterProxyModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSortFilterProxyModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
bool  clearItemData(const QModelIndex&  index) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
bool  filterAcceptsColumn(int  source_column, const QModelIndex&  source_parent) const override;
bool  filterAcceptsRow(int  source_row, const QModelIndex&  source_parent) const override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
bool  lessThan(const QModelIndex&  source_left, const QModelIndex&  source_right) const override;
QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const override;
QItemSelection  mapSelectionFromSource(const QItemSelection&  sourceSelection) const override;
QItemSelection  mapSelectionToSource(const QItemSelection&  proxySelection) const override;
QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
void multiData(const QModelIndex&  index, QModelRoleDataSpan  roleDataSpan) const override;
QModelIndex  parent(const QModelIndex&  child) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void resetInternalData() override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
void setSourceModel(QAbstractItemModel*  sourceModel) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSortFilterProxyModel : public QSortFilterProxyModel
{ public:
inline void promoted_beginFilterChange() { this->beginFilterChange(); }
inline bool  promoted_filterAcceptsColumn(int  source_column, const QModelIndex&  source_parent) const { return this->filterAcceptsColumn(source_column, source_parent); }
inline bool  promoted_filterAcceptsRow(int  source_row, const QModelIndex&  source_parent) const { return this->filterAcceptsRow(source_row, source_parent); }
inline void promoted_invalidateColumnsFilter() { this->invalidateColumnsFilter(); }
inline void promoted_invalidateFilter() { this->invalidateFilter(); }
inline void promoted_invalidateRowsFilter() { this->invalidateRowsFilter(); }
inline bool  promoted_lessThan(const QModelIndex&  source_left, const QModelIndex&  source_right) const { return this->lessThan(source_left, source_right); }
inline QModelIndex  py_q_buddy(const QModelIndex&  index) const { return QSortFilterProxyModel::buddy(index); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent) const { return QSortFilterProxyModel::canFetchMore(parent); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QSortFilterProxyModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QSortFilterProxyModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent); }
inline void py_q_fetchMore(const QModelIndex&  parent) { QSortFilterProxyModel::fetchMore(parent); }
inline bool  py_q_filterAcceptsColumn(int  source_column, const QModelIndex&  source_parent) const { return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent); }
inline bool  py_q_filterAcceptsRow(int  source_row, const QModelIndex&  source_parent) const { return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QSortFilterProxyModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QSortFilterProxyModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QSortFilterProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QSortFilterProxyModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSortFilterProxyModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSortFilterProxyModel::insertRows(row, count, parent); }
inline bool  py_q_lessThan(const QModelIndex&  source_left, const QModelIndex&  source_right) const { return QSortFilterProxyModel::lessThan(source_left, source_right); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return QSortFilterProxyModel::mapFromSource(sourceIndex); }
inline QItemSelection  py_q_mapSelectionFromSource(const QItemSelection&  sourceSelection) const { return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection); }
inline QItemSelection  py_q_mapSelectionToSource(const QItemSelection&  proxySelection) const { return QSortFilterProxyModel::mapSelectionToSource(proxySelection); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return QSortFilterProxyModel::mapToSource(proxyIndex); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QSortFilterProxyModel::match(start, role, value, hits, flags); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QSortFilterProxyModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QSortFilterProxyModel::mimeTypes(); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QSortFilterProxyModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSortFilterProxyModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSortFilterProxyModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QSortFilterProxyModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QSortFilterProxyModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QSortFilterProxyModel::setHeaderData(section, orientation, value, role); }
inline void py_q_setSourceModel(QAbstractItemModel*  sourceModel) { QSortFilterProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QSortFilterProxyModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QSortFilterProxyModel::sort(column, order); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QSortFilterProxyModel::span(index); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QSortFilterProxyModel::supportedDropActions(); }
};

class PythonQtWrapper_QSortFilterProxyModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction )
enum class Direction{
  Rows = static_cast<int>(QSortFilterProxyModel::Direction::Rows),   Columns = static_cast<int>(QSortFilterProxyModel::Direction::Columns),   Both = static_cast<int>(QSortFilterProxyModel::Direction::Both)};
public Q_SLOTS:
QSortFilterProxyModel* new_QSortFilterProxyModel(QObject*  parent = nullptr);
void delete_QSortFilterProxyModel(QSortFilterProxyModel* obj) { delete obj; }
   bool  autoAcceptChildRows(QSortFilterProxyModel* theWrappedObject) const;
   void beginFilterChange(QSortFilterProxyModel* theWrappedObject);
   QModelIndex  py_q_buddy(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_buddy(index));}
   bool  py_q_canFetchMore(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   int  py_q_columnCount(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QSortFilterProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   bool  dynamicSortFilter(QSortFilterProxyModel* theWrappedObject) const;
   void py_q_fetchMore(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent){  (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_fetchMore(parent));}
   bool  filterAcceptsColumn(QSortFilterProxyModel* theWrappedObject, int  source_column, const QModelIndex&  source_parent) const;
   bool  py_q_filterAcceptsColumn(QSortFilterProxyModel* theWrappedObject, int  source_column, const QModelIndex&  source_parent) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_filterAcceptsColumn(source_column, source_parent));}
   bool  filterAcceptsRow(QSortFilterProxyModel* theWrappedObject, int  source_row, const QModelIndex&  source_parent) const;
   bool  py_q_filterAcceptsRow(QSortFilterProxyModel* theWrappedObject, int  source_row, const QModelIndex&  source_parent) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_filterAcceptsRow(source_row, source_parent));}
   Qt::CaseSensitivity  filterCaseSensitivity(QSortFilterProxyModel* theWrappedObject) const;
   int  filterKeyColumn(QSortFilterProxyModel* theWrappedObject) const;
   QRegularExpression  filterRegularExpression(QSortFilterProxyModel* theWrappedObject) const;
   int  filterRole(QSortFilterProxyModel* theWrappedObject) const;
   Qt::ItemFlags  py_q_flags(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_hasChildren(parent));}
   QVariant  py_q_headerData(QSortFilterProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QSortFilterProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  py_q_insertColumns(QSortFilterProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  py_q_insertRows(QSortFilterProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   void invalidateColumnsFilter(QSortFilterProxyModel* theWrappedObject);
   void invalidateFilter(QSortFilterProxyModel* theWrappedObject);
   void invalidateRowsFilter(QSortFilterProxyModel* theWrappedObject);
   bool  isRecursiveFilteringEnabled(QSortFilterProxyModel* theWrappedObject) const;
   bool  isSortLocaleAware(QSortFilterProxyModel* theWrappedObject) const;
   bool  lessThan(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  source_left, const QModelIndex&  source_right) const;
   bool  py_q_lessThan(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  source_left, const QModelIndex&  source_right) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_lessThan(source_left, source_right));}
   QModelIndex  py_q_mapFromSource(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QItemSelection  py_q_mapSelectionFromSource(QSortFilterProxyModel* theWrappedObject, const QItemSelection&  sourceSelection) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mapSelectionFromSource(sourceSelection));}
   QItemSelection  py_q_mapSelectionToSource(QSortFilterProxyModel* theWrappedObject, const QItemSelection&  proxySelection) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mapSelectionToSource(proxySelection));}
   QModelIndex  py_q_mapToSource(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   QList<QModelIndex >  py_q_match(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   QMimeData*  py_q_mimeData(QSortFilterProxyModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QSortFilterProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mimeTypes());}
   QModelIndex  py_q_parent(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QSortFilterProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QSortFilterProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   void setAutoAcceptChildRows(QSortFilterProxyModel* theWrappedObject, bool  accept);
   bool  py_q_setData(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_setData(index, value, role));}
   void setDynamicSortFilter(QSortFilterProxyModel* theWrappedObject, bool  enable);
   void setFilterCaseSensitivity(QSortFilterProxyModel* theWrappedObject, Qt::CaseSensitivity  cs);
   void setFilterKeyColumn(QSortFilterProxyModel* theWrappedObject, int  column);
   void setFilterRole(QSortFilterProxyModel* theWrappedObject, int  role);
   bool  py_q_setHeaderData(QSortFilterProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   void setRecursiveFilteringEnabled(QSortFilterProxyModel* theWrappedObject, bool  recursive);
   void setSortCaseSensitivity(QSortFilterProxyModel* theWrappedObject, Qt::CaseSensitivity  cs);
   void setSortLocaleAware(QSortFilterProxyModel* theWrappedObject, bool  on);
   void setSortRole(QSortFilterProxyModel* theWrappedObject, int  role);
   void py_q_setSourceModel(QSortFilterProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel){  (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_setSourceModel(sourceModel));}
   QModelIndex  py_q_sibling(QSortFilterProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void py_q_sort(QSortFilterProxyModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_sort(column, order));}
   Qt::CaseSensitivity  sortCaseSensitivity(QSortFilterProxyModel* theWrappedObject) const;
   int  sortColumn(QSortFilterProxyModel* theWrappedObject) const;
   Qt::SortOrder  sortOrder(QSortFilterProxyModel* theWrappedObject) const;
   int  sortRole(QSortFilterProxyModel* theWrappedObject) const;
   QSize  py_q_span(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_span(index));}
   Qt::DropActions  py_q_supportedDropActions(QSortFilterProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtShell_QSpacerItem : public QSpacerItem
{
public:
    PythonQtShell_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum):QSpacerItem(w, h, hData, vData),_wrapper(nullptr) {};

   ~PythonQtShell_QSpacerItem() override;

QSizePolicy::ControlTypes  controlTypes() const override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
void setGeometry(const QRect&  arg__1) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
QWidget*  widget() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSpacerItem : public QSpacerItem
{ public:
inline Qt::Orientations  py_q_expandingDirections() const { return QSpacerItem::expandingDirections(); }
inline QRect  py_q_geometry() const { return QSpacerItem::geometry(); }
inline bool  py_q_isEmpty() const { return QSpacerItem::isEmpty(); }
inline QSize  py_q_maximumSize() const { return QSpacerItem::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QSpacerItem::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QSpacerItem::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QSpacerItem::sizeHint(); }
inline QSpacerItem*  py_q_spacerItem() { return QSpacerItem::spacerItem(); }
};

class PythonQtWrapper_QSpacerItem : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSpacerItem* new_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
void delete_QSpacerItem(QSpacerItem* obj) { delete obj; }
   void changeSize(QSpacerItem* theWrappedObject, int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
   Qt::Orientations  py_q_expandingDirections(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_geometry());}
   bool  py_q_isEmpty(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_isEmpty());}
   QSize  py_q_maximumSize(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_maximumSize());}
   QSize  py_q_minimumSize(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QSpacerItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  py_q_sizeHint(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_sizeHint());}
   QSizePolicy  sizePolicy(QSpacerItem* theWrappedObject) const;
   QSpacerItem*  py_q_spacerItem(QSpacerItem* theWrappedObject){  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_spacerItem());}
    bool __nonzero__(QSpacerItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QSpinBox : public QSpinBox
{
public:
    PythonQtShell_QSpinBox(QWidget*  parent = nullptr):QSpinBox(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSpinBox() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void clear() override;
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
void fixup(QString&  str) const override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionSpinBox*  option) const override;
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
void stepBy(int  steps) override;
QAbstractSpinBox::StepEnabled  stepEnabled() const override;
void tabletEvent(QTabletEvent*  event) override;
QString  textFromValue(int  val) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  input, int&  pos) const override;
int  valueFromText(const QString&  text) const override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSpinBox : public QSpinBox
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_fixup(QString&  str) const { this->fixup(str); }
inline QString  promoted_textFromValue(int  val) const { return this->textFromValue(val); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return this->validate(input, pos); }
inline int  promoted_valueFromText(const QString&  text) const { return this->valueFromText(text); }
inline bool  py_q_event(QEvent*  event) { return QSpinBox::event(event); }
inline void py_q_fixup(QString&  str) const { QSpinBox::fixup(str); }
inline QString  py_q_textFromValue(int  val) const { return QSpinBox::textFromValue(val); }
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QSpinBox::validate(input, pos); }
inline int  py_q_valueFromText(const QString&  text) const { return QSpinBox::valueFromText(text); }
};

class PythonQtWrapper_QSpinBox : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSpinBox* new_QSpinBox(QWidget*  parent = nullptr);
void delete_QSpinBox(QSpinBox* obj) { delete obj; }
   QString  cleanText(QSpinBox* theWrappedObject) const;
   int  displayIntegerBase(QSpinBox* theWrappedObject) const;
   bool  py_q_event(QSpinBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_event(event));}
   void py_q_fixup(QSpinBox* theWrappedObject, QString&  str) const{  (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_fixup(str));}
   int  maximum(QSpinBox* theWrappedObject) const;
   int  minimum(QSpinBox* theWrappedObject) const;
   QString  prefix(QSpinBox* theWrappedObject) const;
   void setDisplayIntegerBase(QSpinBox* theWrappedObject, int  base);
   void setMaximum(QSpinBox* theWrappedObject, int  max);
   void setMinimum(QSpinBox* theWrappedObject, int  min);
   void setPrefix(QSpinBox* theWrappedObject, const QString&  prefix);
   void setRange(QSpinBox* theWrappedObject, int  min, int  max);
   void setSingleStep(QSpinBox* theWrappedObject, int  val);
   void setStepType(QSpinBox* theWrappedObject, QAbstractSpinBox::StepType  stepType);
   void setSuffix(QSpinBox* theWrappedObject, const QString&  suffix);
   int  singleStep(QSpinBox* theWrappedObject) const;
   QAbstractSpinBox::StepType  stepType(QSpinBox* theWrappedObject) const;
   QString  suffix(QSpinBox* theWrappedObject) const;
   QString  textFromValue(QSpinBox* theWrappedObject, int  val) const;
   QString  py_q_textFromValue(QSpinBox* theWrappedObject, int  val) const{  return (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_textFromValue(val));}
   QValidator::State  py_q_validate(QSpinBox* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_validate(input, pos));}
   int  value(QSpinBox* theWrappedObject) const;
   int  valueFromText(QSpinBox* theWrappedObject, const QString&  text) const;
   int  py_q_valueFromText(QSpinBox* theWrappedObject, const QString&  text) const{  return (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_valueFromText(text));}
};





class PythonQtShell_QSplashScreen : public QSplashScreen
{
public:
    PythonQtShell_QSplashScreen(QScreen*  screen, const QPixmap&  pixmap = QPixmap(), Qt::WindowFlags  f = Qt::WindowFlags()):QSplashScreen(screen, pixmap, f),_wrapper(nullptr) {};
    PythonQtShell_QSplashScreen(const QPixmap&  pixmap = QPixmap(), Qt::WindowFlags  f = Qt::WindowFlags()):QSplashScreen(pixmap, f),_wrapper(nullptr) {};

   ~PythonQtShell_QSplashScreen() override;

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
void drawContents(QPainter*  painter) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  e) override;
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
void mousePressEvent(QMouseEvent*  arg__1) override;
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

class PythonQtPublicPromoter_QSplashScreen : public QSplashScreen
{ public:
inline void promoted_drawContents(QPainter*  painter) { this->drawContents(painter); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void py_q_drawContents(QPainter*  painter) { QSplashScreen::drawContents(painter); }
inline bool  py_q_event(QEvent*  e) { return QSplashScreen::event(e); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QSplashScreen::mousePressEvent(arg__1); }
};

class PythonQtWrapper_QSplashScreen : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSplashScreen* new_QSplashScreen(QScreen*  screen, const QPixmap&  pixmap = QPixmap(), Qt::WindowFlags  f = Qt::WindowFlags());
QSplashScreen* new_QSplashScreen(const QPixmap&  pixmap = QPixmap(), Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QSplashScreen(QSplashScreen* obj) { delete obj; }
   void drawContents(QSplashScreen* theWrappedObject, QPainter*  painter);
   void py_q_drawContents(QSplashScreen* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QSplashScreen*)theWrappedObject)->py_q_drawContents(painter));}
   bool  py_q_event(QSplashScreen* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QSplashScreen*)theWrappedObject)->py_q_event(e));}
   void finish(QSplashScreen* theWrappedObject, QWidget*  w);
   QString  message(QSplashScreen* theWrappedObject) const;
   void py_q_mousePressEvent(QSplashScreen* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplashScreen*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   const QPixmap  pixmap(QSplashScreen* theWrappedObject) const;
   void setPixmap(QSplashScreen* theWrappedObject, const QPixmap&  pixmap);
};





class PythonQtShell_QSplitter : public QSplitter
{
public:
    PythonQtShell_QSplitter(QWidget*  parent = nullptr):QSplitter(parent),_wrapper(nullptr) {};
    PythonQtShell_QSplitter(Qt::Orientation  arg__1, QWidget*  parent = nullptr):QSplitter(arg__1, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSplitter() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  arg__1) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
QSplitterHandle*  createHandle() override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
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
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
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

class PythonQtPublicPromoter_QSplitter : public QSplitter
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_childEvent(QChildEvent*  arg__1) { this->childEvent(arg__1); }
inline int  promoted_closestLegalPosition(int  arg__1, int  arg__2) { return this->closestLegalPosition(arg__1, arg__2); }
inline QSplitterHandle*  promoted_createHandle() { return this->createHandle(); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_moveSplitter(int  pos, int  index) { this->moveSplitter(pos, index); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_setRubberBand(int  position) { this->setRubberBand(position); }
inline void py_q_changeEvent(QEvent*  arg__1) { QSplitter::changeEvent(arg__1); }
inline void py_q_childEvent(QChildEvent*  arg__1) { QSplitter::childEvent(arg__1); }
inline QSplitterHandle*  py_q_createHandle() { return QSplitter::createHandle(); }
inline bool  py_q_event(QEvent*  arg__1) { return QSplitter::event(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QSplitter::minimumSizeHint(); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QSplitter::resizeEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QSplitter::sizeHint(); }
};

class PythonQtWrapper_QSplitter : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSplitter* new_QSplitter(QWidget*  parent = nullptr);
QSplitter* new_QSplitter(Qt::Orientation  arg__1, QWidget*  parent = nullptr);
void delete_QSplitter(QSplitter* obj) { delete obj; }
   void addWidget(QSplitter* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void py_q_changeEvent(QSplitter* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void py_q_childEvent(QSplitter* theWrappedObject, QChildEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_childEvent(arg__1));}
   bool  childrenCollapsible(QSplitter* theWrappedObject) const;
   int  closestLegalPosition(QSplitter* theWrappedObject, int  arg__1, int  arg__2);
   int  count(QSplitter* theWrappedObject) const;
   QSplitterHandle*  createHandle(QSplitter* theWrappedObject);
   QSplitterHandle*  py_q_createHandle(QSplitter* theWrappedObject){  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_createHandle());}
   bool  py_q_event(QSplitter* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_event(arg__1));}
   QSplitterHandle*  handle(QSplitter* theWrappedObject, int  index) const;
   int  handleWidth(QSplitter* theWrappedObject) const;
   int  indexOf(QSplitter* theWrappedObject, QWidget*  w) const;
   void insertWidget(QSplitter* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   bool  isCollapsible(QSplitter* theWrappedObject, int  index) const;
   QSize  py_q_minimumSizeHint(QSplitter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_minimumSizeHint());}
   void moveSplitter(QSplitter* theWrappedObject, int  pos, int  index);
   bool  opaqueResize(QSplitter* theWrappedObject) const;
   Qt::Orientation  orientation(QSplitter* theWrappedObject) const;
   void refresh(QSplitter* theWrappedObject);
   QWidget*  replaceWidget(QSplitter* theWrappedObject, int  index, QWidget*  widget);
   void py_q_resizeEvent(QSplitter* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   bool  restoreState(QSplitter* theWrappedObject, const QByteArray&  state);
   QByteArray  saveState(QSplitter* theWrappedObject) const;
   void setChildrenCollapsible(QSplitter* theWrappedObject, bool  arg__1);
   void setCollapsible(QSplitter* theWrappedObject, int  index, bool  arg__2);
   void setHandleWidth(QSplitter* theWrappedObject, int  arg__1);
   void setOpaqueResize(QSplitter* theWrappedObject, bool  opaque = true);
   void setOrientation(QSplitter* theWrappedObject, Qt::Orientation  arg__1);
   void setRubberBand(QSplitter* theWrappedObject, int  position);
   void setSizes(QSplitter* theWrappedObject, const QList<int >&  list);
   void setStretchFactor(QSplitter* theWrappedObject, int  index, int  stretch);
   QSize  py_q_sizeHint(QSplitter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_sizeHint());}
   QList<int >  sizes(QSplitter* theWrappedObject) const;
   QWidget*  widget(QSplitter* theWrappedObject, int  index) const;
};





class PythonQtShell_QSplitterHandle : public QSplitterHandle
{
public:
    PythonQtShell_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent):QSplitterHandle(o, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSplitterHandle() override;

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
bool  event(QEvent*  arg__1) override;
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
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
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

class PythonQtPublicPromoter_QSplitterHandle : public QSplitterHandle
{ public:
inline int  promoted_closestLegalPosition(int  p) { return this->closestLegalPosition(p); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_moveSplitter(int  p) { this->moveSplitter(p); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QSplitterHandle::event(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QSplitterHandle::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QSplitterHandle::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QSplitterHandle::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QSplitterHandle::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QSplitterHandle::resizeEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QSplitterHandle::sizeHint(); }
};

class PythonQtWrapper_QSplitterHandle : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSplitterHandle* new_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent);
void delete_QSplitterHandle(QSplitterHandle* obj) { delete obj; }
   int  closestLegalPosition(QSplitterHandle* theWrappedObject, int  p);
   bool  py_q_event(QSplitterHandle* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_event(arg__1));}
   void py_q_mouseMoveEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void moveSplitter(QSplitterHandle* theWrappedObject, int  p);
   bool  opaqueResize(QSplitterHandle* theWrappedObject) const;
   Qt::Orientation  orientation(QSplitterHandle* theWrappedObject) const;
   void py_q_paintEvent(QSplitterHandle* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void py_q_resizeEvent(QSplitterHandle* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setOrientation(QSplitterHandle* theWrappedObject, Qt::Orientation  o);
   QSize  py_q_sizeHint(QSplitterHandle* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_sizeHint());}
   QSplitter*  splitter(QSplitterHandle* theWrappedObject) const;
};





class PythonQtShell_QStackedLayout : public QStackedLayout
{
public:
    PythonQtShell_QStackedLayout():QStackedLayout(),_wrapper(nullptr) {};
    PythonQtShell_QStackedLayout(QLayout*  parentLayout):QStackedLayout(parentLayout),_wrapper(nullptr) {};
    PythonQtShell_QStackedLayout(QWidget*  parent):QStackedLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStackedLayout() override;

void addItem(QLayoutItem*  item) override;
void childEvent(QChildEvent*  e) override;
QSizePolicy::ControlTypes  controlTypes() const override;
int  count() const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  width) const override;
int  indexOf(const QLayoutItem*  arg__1) const override;
int  indexOf(const QWidget*  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayoutItem*  itemAt(int  arg__1) const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
QLayoutItem*  replaceWidget(QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively) override;
void setGeometry(const QRect&  rect) override;
void setSpacing(int  arg__1) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
int  spacing() const override;
QLayoutItem*  takeAt(int  arg__1) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStackedLayout : public QStackedLayout
{ public:
inline void py_q_addItem(QLayoutItem*  item) { QStackedLayout::addItem(item); }
inline int  py_q_count() const { return QStackedLayout::count(); }
inline bool  py_q_hasHeightForWidth() const { return QStackedLayout::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  width) const { return QStackedLayout::heightForWidth(width); }
inline QLayoutItem*  py_q_itemAt(int  arg__1) const { return QStackedLayout::itemAt(arg__1); }
inline QSize  py_q_minimumSize() const { return QStackedLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  rect) { QStackedLayout::setGeometry(rect); }
inline QSize  py_q_sizeHint() const { return QStackedLayout::sizeHint(); }
inline QLayoutItem*  py_q_takeAt(int  arg__1) { return QStackedLayout::takeAt(arg__1); }
};

class PythonQtWrapper_QStackedLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QStackedLayout* new_QStackedLayout();
QStackedLayout* new_QStackedLayout(QLayout*  parentLayout);
QStackedLayout* new_QStackedLayout(QWidget*  parent);
void delete_QStackedLayout(QStackedLayout* obj) { delete obj; }
   void py_q_addItem(QStackedLayout* theWrappedObject, QLayoutItem*  item){  (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_addItem(item));}
   int  addWidget(QStackedLayout* theWrappedObject, QWidget*  w);
   int  py_q_count(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_count());}
   int  currentIndex(QStackedLayout* theWrappedObject) const;
   QWidget*  currentWidget(QStackedLayout* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QStackedLayout* theWrappedObject, int  width) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_heightForWidth(width));}
   int  insertWidget(QStackedLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  w);
   QLayoutItem*  py_q_itemAt(QStackedLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_itemAt(arg__1));}
   QSize  py_q_minimumSize(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QStackedLayout* theWrappedObject, const QRect&  rect){  (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setStackingMode(QStackedLayout* theWrappedObject, QStackedLayout::StackingMode  stackingMode);
   QSize  py_q_sizeHint(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_sizeHint());}
   QStackedLayout::StackingMode  stackingMode(QStackedLayout* theWrappedObject) const;
   QLayoutItem*  py_q_takeAt(QStackedLayout* theWrappedObject, int  arg__1){  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_takeAt(arg__1));}
   QWidget*  widget(QStackedLayout* theWrappedObject, int  arg__1) const;
    bool __nonzero__(QStackedLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QStackedWidget : public QStackedWidget
{
public:
    PythonQtShell_QStackedWidget(QWidget*  parent = nullptr):QStackedWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStackedWidget() override;

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
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
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
void paintEvent(QPaintEvent*  arg__1) override;
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

class PythonQtPublicPromoter_QStackedWidget : public QStackedWidget
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  py_q_event(QEvent*  e) { return QStackedWidget::event(e); }
};

class PythonQtWrapper_QStackedWidget : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QStackedWidget* new_QStackedWidget(QWidget*  parent = nullptr);
void delete_QStackedWidget(QStackedWidget* obj) { delete obj; }
   int  addWidget(QStackedWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   int  count(QStackedWidget* theWrappedObject) const;
   int  currentIndex(QStackedWidget* theWrappedObject) const;
   QWidget*  currentWidget(QStackedWidget* theWrappedObject) const;
   bool  py_q_event(QStackedWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QStackedWidget*)theWrappedObject)->py_q_event(e));}
   int  indexOf(QStackedWidget* theWrappedObject, const QWidget*  arg__1) const;
   int  insertWidget(QStackedWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  w);
   void removeWidget(QStackedWidget* theWrappedObject, PythonQtPassOwnershipToPython<QWidget* >  w);
   QWidget*  widget(QStackedWidget* theWrappedObject, int  arg__1) const;
};





class PythonQtShell_QStandardItem : public QStandardItem
{
public:
    PythonQtShell_QStandardItem():QStandardItem(),_wrapper(nullptr) {};
    PythonQtShell_QStandardItem(const QIcon&  icon, const QString&  text):QStandardItem(icon, text),_wrapper(nullptr) {};
    PythonQtShell_QStandardItem(const QStandardItem&  other):QStandardItem(other),_wrapper(nullptr) {};
    PythonQtShell_QStandardItem(const QString&  text):QStandardItem(text),_wrapper(nullptr) {};
    PythonQtShell_QStandardItem(int  rows, int  columns = 1):QStandardItem(rows, columns),_wrapper(nullptr) {};

   ~PythonQtShell_QStandardItem() override;

QStandardItem*  clone() const override;
QVariant  data(int  role = Qt::UserRole+1) const override;
void multiData(QModelRoleDataSpan  roleDataSpan) const override;
void read(QDataStream&  in) override;
void setData(const QVariant&  value, int  role = Qt::UserRole+1) override;
int  type() const override;
void write(QDataStream&  out) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStandardItem : public QStandardItem
{ public:
inline void promoted_emitDataChanged() { this->emitDataChanged(); }
inline QStandardItem*  py_q_clone() const { return QStandardItem::clone(); }
inline QVariant  py_q_data(int  role = Qt::UserRole+1) const { return QStandardItem::data(role); }
inline void py_q_multiData(QModelRoleDataSpan  roleDataSpan) const { QStandardItem::multiData(roleDataSpan); }
inline void py_q_read(QDataStream&  in) { QStandardItem::read(in); }
inline void py_q_setData(const QVariant&  value, int  role = Qt::UserRole+1) { QStandardItem::setData(value, role); }
inline int  py_q_type() const { return QStandardItem::type(); }
inline void py_q_write(QDataStream&  out) const { QStandardItem::write(out); }
};

class PythonQtWrapper_QStandardItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QStandardItem::Type,   UserType = QStandardItem::UserType};
public Q_SLOTS:
QStandardItem* new_QStandardItem();
QStandardItem* new_QStandardItem(const QIcon&  icon, const QString&  text);
QStandardItem* new_QStandardItem(const QStandardItem&  other);
QStandardItem* new_QStandardItem(const QString&  text);
QStandardItem* new_QStandardItem(int  rows, int  columns = 1);
void delete_QStandardItem(QStandardItem* obj) { delete obj; }
   QString  accessibleDescription(QStandardItem* theWrappedObject) const;
   QString  accessibleText(QStandardItem* theWrappedObject) const;
   void appendColumn(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRow(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void appendRow(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRows(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   QBrush  background(QStandardItem* theWrappedObject) const;
   Qt::CheckState  checkState(QStandardItem* theWrappedObject) const;
   QStandardItem*  child(QStandardItem* theWrappedObject, int  row, int  column = 0) const;
   void clearData(QStandardItem* theWrappedObject);
   QStandardItem*  clone(QStandardItem* theWrappedObject) const;
   QStandardItem*  py_q_clone(QStandardItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_clone());}
   int  column(QStandardItem* theWrappedObject) const;
   int  columnCount(QStandardItem* theWrappedObject) const;
   QVariant  data(QStandardItem* theWrappedObject, int  role = Qt::UserRole+1) const;
   QVariant  py_q_data(QStandardItem* theWrappedObject, int  role = Qt::UserRole+1) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_data(role));}
   void emitDataChanged(QStandardItem* theWrappedObject);
   Qt::ItemFlags  flags(QStandardItem* theWrappedObject) const;
   QFont  font(QStandardItem* theWrappedObject) const;
   QBrush  foreground(QStandardItem* theWrappedObject) const;
   bool  hasChildren(QStandardItem* theWrappedObject) const;
   QIcon  icon(QStandardItem* theWrappedObject) const;
   QModelIndex  index(QStandardItem* theWrappedObject) const;
   void insertColumn(QStandardItem* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   void insertRow(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertRows(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertRows(QStandardItem* theWrappedObject, int  row, int  count);
   bool  isAutoTristate(QStandardItem* theWrappedObject) const;
   bool  isCheckable(QStandardItem* theWrappedObject) const;
   bool  isDragEnabled(QStandardItem* theWrappedObject) const;
   bool  isDropEnabled(QStandardItem* theWrappedObject) const;
   bool  isEditable(QStandardItem* theWrappedObject) const;
   bool  isEnabled(QStandardItem* theWrappedObject) const;
   bool  isSelectable(QStandardItem* theWrappedObject) const;
   bool  isUserTristate(QStandardItem* theWrappedObject) const;
   QStandardItemModel*  model(QStandardItem* theWrappedObject) const;
   void multiData(QStandardItem* theWrappedObject, QModelRoleDataSpan  roleDataSpan) const;
   void py_q_multiData(QStandardItem* theWrappedObject, QModelRoleDataSpan  roleDataSpan) const{  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_multiData(roleDataSpan));}
   void writeTo(QStandardItem* theWrappedObject, QDataStream&  out);
   void readFrom(QStandardItem* theWrappedObject, QDataStream&  in);
   QStandardItem*  parent(QStandardItem* theWrappedObject) const;
   void read(QStandardItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QStandardItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_read(in));}
   void removeColumn(QStandardItem* theWrappedObject, int  column);
   void removeColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void removeRow(QStandardItem* theWrappedObject, int  row);
   void removeRows(QStandardItem* theWrappedObject, int  row, int  count);
   int  row(QStandardItem* theWrappedObject) const;
   int  rowCount(QStandardItem* theWrappedObject) const;
   void setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription);
   void setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText);
   void setAutoTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setBackground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState);
   void setCheckable(QStandardItem* theWrappedObject, bool  checkable);
   void setChild(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setChild(QStandardItem* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setColumnCount(QStandardItem* theWrappedObject, int  columns);
   void setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole+1);
   void py_q_setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole+1){  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_setData(value, role));}
   void setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled);
   void setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled);
   void setEditable(QStandardItem* theWrappedObject, bool  editable);
   void setEnabled(QStandardItem* theWrappedObject, bool  enabled);
   void setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QStandardItem* theWrappedObject, const QFont&  font);
   void setForeground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void setIcon(QStandardItem* theWrappedObject, const QIcon&  icon);
   void setRowCount(QStandardItem* theWrappedObject, int  rows);
   void setSelectable(QStandardItem* theWrappedObject, bool  selectable);
   void setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint);
   void setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip);
   void setText(QStandardItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment);
   void setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip);
   void setUserTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QStandardItem* theWrappedObject) const;
   void sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   QString  statusTip(QStandardItem* theWrappedObject) const;
   PythonQtPassOwnershipToPython<QStandardItem*  > takeChild(QStandardItem* theWrappedObject, int  row, int  column = 0);
   QList<QStandardItem* >  takeColumn(QStandardItem* theWrappedObject, int  column);
   QList<QStandardItem* >  takeRow(QStandardItem* theWrappedObject, int  row);
   QString  text(QStandardItem* theWrappedObject) const;
   Qt::Alignment  textAlignment(QStandardItem* theWrappedObject) const;
   QString  toolTip(QStandardItem* theWrappedObject) const;
   int  type(QStandardItem* theWrappedObject) const;
   int  py_q_type(QStandardItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_type());}
   QString  whatsThis(QStandardItem* theWrappedObject) const;
   void write(QStandardItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QStandardItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtShell_QStandardItemModel : public QStandardItemModel
{
public:
    PythonQtShell_QStandardItemModel(QObject*  parent = nullptr):QStandardItemModel(parent),_wrapper(nullptr) {};
    PythonQtShell_QStandardItemModel(int  rows, int  columns, QObject*  parent = nullptr):QStandardItemModel(rows, columns, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStandardItemModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
bool  clearItemData(const QModelIndex&  index) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
void multiData(const QModelIndex&  index, QModelRoleDataSpan  roleDataSpan) const override;
QModelIndex  parent(const QModelIndex&  child) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void resetInternalData() override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStandardItemModel : public QStandardItemModel
{ public:
inline bool  py_q_clearItemData(const QModelIndex&  index) { return QStandardItemModel::clearItemData(index); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QStandardItemModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QStandardItemModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QStandardItemModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QStandardItemModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QStandardItemModel::itemData(index); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QStandardItemModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QStandardItemModel::mimeTypes(); }
inline void py_q_multiData(const QModelIndex&  index, QModelRoleDataSpan  roleDataSpan) const { QStandardItemModel::multiData(index, roleDataSpan); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QStandardItemModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::removeRows(row, count, parent); }
inline QHash<int , QByteArray >  py_q_roleNames() const { return QStandardItemModel::roleNames(); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QStandardItemModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QStandardItemModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QStandardItemModel::setItemData(index, roles); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QStandardItemModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QStandardItemModel::supportedDropActions(); }
};

class PythonQtWrapper_QStandardItemModel : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QStandardItemModel* new_QStandardItemModel(QObject*  parent = nullptr);
QStandardItemModel* new_QStandardItemModel(int  rows, int  columns, QObject*  parent = nullptr);
void delete_QStandardItemModel(QStandardItemModel* obj) { delete obj; }
   void appendColumn(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRow(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void appendRow(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void clear(QStandardItemModel* theWrappedObject);
   bool  py_q_clearItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_clearItemData(index));}
   int  py_q_columnCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QStandardItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QStandardItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   QList<QStandardItem* >  findItems(QStandardItemModel* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly, int  column = 0) const;
   Qt::ItemFlags  py_q_flags(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_hasChildren(parent));}
   QVariant  py_q_headerData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QStandardItem*  horizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column) const;
   QModelIndex  py_q_index(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_index(row, column, parent));}
   QModelIndex  indexFromItem(QStandardItemModel* theWrappedObject, const QStandardItem*  item) const;
   void insertColumn(QStandardItemModel* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   bool  py_q_insertColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   void insertRow(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void insertRow(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   bool  py_q_insertRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QStandardItem*  invisibleRootItem(QStandardItemModel* theWrappedObject) const;
   QStandardItem*  item(QStandardItemModel* theWrappedObject, int  row, int  column = 0) const;
   QMap<int , QVariant >  py_q_itemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_itemData(index));}
   QStandardItem*  itemFromIndex(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   const QStandardItem*  itemPrototype(QStandardItemModel* theWrappedObject) const;
   QMimeData*  py_q_mimeData(QStandardItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QStandardItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_mimeTypes());}
   void py_q_multiData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, QModelRoleDataSpan  roleDataSpan) const{  (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_multiData(index, roleDataSpan));}
   QModelIndex  py_q_parent(QStandardItemModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   QHash<int , QByteArray >  py_q_roleNames(QStandardItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_roleNames());}
   int  py_q_rowCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_rowCount(parent));}
   void setColumnCount(QStandardItemModel* theWrappedObject, int  columns);
   bool  py_q_setData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  py_q_setHeaderData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   void setHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setHorizontalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   void setItem(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setItem(QStandardItemModel* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   bool  py_q_setItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   void setItemPrototype(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<const QStandardItem* >  item);
   void setItemRoleNames(QStandardItemModel* theWrappedObject, const QHash<int , QByteArray >&  roleNames);
   void setRowCount(QStandardItemModel* theWrappedObject, int  rows);
   void setSortRole(QStandardItemModel* theWrappedObject, int  role);
   void setVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setVerticalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   void py_q_sort(QStandardItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_sort(column, order));}
   int  sortRole(QStandardItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QStandardItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QList<QStandardItem* >  > takeColumn(QStandardItemModel* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeItem(QStandardItemModel* theWrappedObject, int  row, int  column = 0);
   PythonQtPassOwnershipToPython<QList<QStandardItem* >  > takeRow(QStandardItemModel* theWrappedObject, int  row);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row);
   QStandardItem*  verticalHeaderItem(QStandardItemModel* theWrappedObject, int  row) const;
};





class PythonQtWrapper_QStaticText : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PerformanceHint )
enum PerformanceHint{
  ModerateCaching = QStaticText::ModerateCaching,   AggressiveCaching = QStaticText::AggressiveCaching};
public Q_SLOTS:
QStaticText* new_QStaticText();
QStaticText* new_QStaticText(const QStaticText&  other);
QStaticText* new_QStaticText(const QString&  text);
void delete_QStaticText(QStaticText* obj) { delete obj; }
   bool  __ne__(QStaticText* theWrappedObject, const QStaticText&  arg__1) const;
   QStaticText*  operator_assign(QStaticText* theWrappedObject, const QStaticText&  arg__1);
   bool  __eq__(QStaticText* theWrappedObject, const QStaticText&  arg__1) const;
   QStaticText::PerformanceHint  performanceHint(QStaticText* theWrappedObject) const;
   void prepare(QStaticText* theWrappedObject, const QTransform&  matrix = QTransform(), const QFont&  font = QFont());
   void setPerformanceHint(QStaticText* theWrappedObject, QStaticText::PerformanceHint  performanceHint);
   void setText(QStaticText* theWrappedObject, const QString&  text);
   void setTextFormat(QStaticText* theWrappedObject, Qt::TextFormat  textFormat);
   void setTextOption(QStaticText* theWrappedObject, const QTextOption&  textOption);
   void setTextWidth(QStaticText* theWrappedObject, qreal  textWidth);
   QSizeF  size(QStaticText* theWrappedObject) const;
   void swap(QStaticText* theWrappedObject, QStaticText&  other);
   QString  text(QStaticText* theWrappedObject) const;
   Qt::TextFormat  textFormat(QStaticText* theWrappedObject) const;
   QTextOption  textOption(QStaticText* theWrappedObject) const;
   qreal  textWidth(QStaticText* theWrappedObject) const;
};





class PythonQtShell_QStatusBar : public QStatusBar
{
public:
    PythonQtShell_QStatusBar(QWidget*  parent = nullptr):QStatusBar(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStatusBar() override;

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
bool  event(QEvent*  arg__1) override;
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
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStatusBar : public QStatusBar
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_hideOrShow() { this->hideOrShow(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_reformat() { this->reformat(); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QStatusBar::event(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QStatusBar::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QStatusBar::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QStatusBar::showEvent(arg__1); }
};

class PythonQtWrapper_QStatusBar : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QStatusBar* new_QStatusBar(QWidget*  parent = nullptr);
void delete_QStatusBar(QStatusBar* obj) { delete obj; }
   void addPermanentWidget(QStatusBar* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   void addWidget(QStatusBar* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   QString  currentMessage(QStatusBar* theWrappedObject) const;
   bool  py_q_event(QStatusBar* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_event(arg__1));}
   void hideOrShow(QStatusBar* theWrappedObject);
   int  insertPermanentWidget(QStatusBar* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   int  insertWidget(QStatusBar* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   bool  isSizeGripEnabled(QStatusBar* theWrappedObject) const;
   void py_q_paintEvent(QStatusBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void reformat(QStatusBar* theWrappedObject);
   void removeWidget(QStatusBar* theWrappedObject, QWidget*  widget);
   void py_q_resizeEvent(QStatusBar* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setSizeGripEnabled(QStatusBar* theWrappedObject, bool  arg__1);
   void py_q_showEvent(QStatusBar* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_showEvent(arg__1));}
};





class PythonQtShell_QStatusTipEvent : public QStatusTipEvent
{
public:
    PythonQtShell_QStatusTipEvent(const QStatusTipEvent&  arg__1):QStatusTipEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QStatusTipEvent(const QString&  tip):QStatusTipEvent(tip),_wrapper(nullptr) {};

   ~PythonQtShell_QStatusTipEvent() override;

QStatusTipEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStatusTipEvent : public QStatusTipEvent
{ public:
inline QStatusTipEvent&  promoted_operator_assign(const QStatusTipEvent&  other) { return this->QStatusTipEvent::operator=(other); }
inline QStatusTipEvent*  py_q_clone() const { return QStatusTipEvent::clone(); }
};

class PythonQtWrapper_QStatusTipEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QStatusTipEvent* new_QStatusTipEvent(const QStatusTipEvent&  arg__1);
QStatusTipEvent* new_QStatusTipEvent(const QString&  tip);
void delete_QStatusTipEvent(QStatusTipEvent* obj) { delete obj; }
   QStatusTipEvent*  py_q_clone(QStatusTipEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStatusTipEvent*)theWrappedObject)->py_q_clone());}
   QStatusTipEvent*  operator_assign(QStatusTipEvent* theWrappedObject, const QStatusTipEvent&  other);
   QString  tip(QStatusTipEvent* theWrappedObject) const;
};


