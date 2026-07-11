#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <QtWidgets/qabstractitemdelegate.h>
#include <QtWidgets/qabstractitemview.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qgridlayout.h>
#include <QtWidgets/qgroupbox.h>
#include <QtWidgets/qheaderview.h>
#include <QtWidgets/qinputdialog.h>
#include <QtWidgets/qitemdelegate.h>
#include <QtWidgets/qitemeditorfactory.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qlayoutitem.h>
#include <QtWidgets/qscrollbar.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qstyleoption.h>
#include <QtWidgets/qwidget.h>
#include <qabstracteventdispatcher.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcolor.h>
#include <qcontainerfwd.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdeadlinetimer.h>
#include <qevent.h>
#include <qeventpoint.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qguiapplication.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qinputdevice.h>
#include <qinputmethod.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qnamespace.h>
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
#include <qscreen.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qstylehints.h>
#include <qthread.h>
#include <qtransform.h>
#include <qtranslator.h>
#include <qvalidator.h>
#include <qwindow.h>



class PythonQtShell_QGridLayout : public QGridLayout
{
public:
    PythonQtShell_QGridLayout(QWidget*  parent = nullptr):QGridLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGridLayout() override;

void addItem(QLayoutItem*  arg__1) override;
void childEvent(QChildEvent*  e) override;
QSizePolicy::ControlTypes  controlTypes() const override;
int  count() const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
int  indexOf(const QLayoutItem*  arg__1) const override;
int  indexOf(const QWidget*  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayoutItem*  itemAt(int  index) const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
QLayoutItem*  replaceWidget(QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively) override;
void setGeometry(const QRect&  arg__1) override;
void setSpacing(int  spacing) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
int  spacing() const override;
QLayoutItem*  takeAt(int  index) override;
void timerEvent(QTimerEvent*  event) override;
QWidget*  widget() const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGridLayout : public QGridLayout
{ public:
inline void promoted_addItem(QLayoutItem*  arg__1) { this->addItem(arg__1); }
inline void py_q_addItem(QLayoutItem*  arg__1) { QGridLayout::addItem(arg__1); }
inline int  py_q_count() const { return QGridLayout::count(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QGridLayout::expandingDirections(); }
inline bool  py_q_hasHeightForWidth() const { return QGridLayout::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QGridLayout::heightForWidth(arg__1); }
inline void py_q_invalidate() { QGridLayout::invalidate(); }
inline QLayoutItem*  py_q_itemAt(int  index) const { return QGridLayout::itemAt(index); }
inline QSize  py_q_maximumSize() const { return QGridLayout::maximumSize(); }
inline int  py_q_minimumHeightForWidth(int  arg__1) const { return QGridLayout::minimumHeightForWidth(arg__1); }
inline QSize  py_q_minimumSize() const { return QGridLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QGridLayout::setGeometry(arg__1); }
inline void py_q_setSpacing(int  spacing) { QGridLayout::setSpacing(spacing); }
inline QSize  py_q_sizeHint() const { return QGridLayout::sizeHint(); }
inline int  py_q_spacing() const { return QGridLayout::spacing(); }
inline QLayoutItem*  py_q_takeAt(int  index) { return QGridLayout::takeAt(index); }
};

class PythonQtWrapper_QGridLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGridLayout* new_QGridLayout(QWidget*  parent = nullptr);
void delete_QGridLayout(QGridLayout* obj) { delete obj; }
   void py_q_addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1){  (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_addItem(arg__1));}
   void addItem(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = Qt::Alignment());
   void addLayout(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1, int  row, int  column, Qt::Alignment  arg__4 = Qt::Alignment());
   void addLayout(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = Qt::Alignment());
   void addWidget(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  row, int  column, Qt::Alignment  arg__4 = Qt::Alignment());
   void addWidget(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = Qt::Alignment());
   QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  columnCount(QGridLayout* theWrappedObject) const;
   int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
   int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
   int  py_q_count(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_count());}
   Qt::Orientations  py_q_expandingDirections(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_expandingDirections());}
   bool  py_q_hasHeightForWidth(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   int  horizontalSpacing(QGridLayout* theWrappedObject) const;
   void py_q_invalidate(QGridLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_invalidate());}
   QLayoutItem*  py_q_itemAt(QGridLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_itemAt(index));}
   QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
   QSize  py_q_maximumSize(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_maximumSize());}
   int  py_q_minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_minimumHeightForWidth(arg__1));}
   QSize  py_q_minimumSize(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_minimumSize());}
   Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
   int  rowCount(QGridLayout* theWrappedObject) const;
   int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
   int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
   void setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize);
   void setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch);
   void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
   void py_q_setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_setGeometry(arg__1));}
   void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
   void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
   void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
   void py_q_setSpacing(QGridLayout* theWrappedObject, int  spacing){  (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_setSpacing(spacing));}
   void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
   QSize  py_q_sizeHint(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_sizeHint());}
   int  py_q_spacing(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_spacing());}
   QLayoutItem*  py_q_takeAt(QGridLayout* theWrappedObject, int  index){  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_takeAt(index));}
   int  verticalSpacing(QGridLayout* theWrappedObject) const;
    bool __nonzero__(QGridLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QGroupBox : public QGroupBox
{
public:
    PythonQtShell_QGroupBox(QWidget*  parent = nullptr):QGroupBox(parent),_wrapper(nullptr) {};
    PythonQtShell_QGroupBox(const QString&  title, QWidget*  parent = nullptr):QGroupBox(title, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGroupBox() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
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
void initStyleOption(QStyleOptionGroupBox*  option) const override;
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

class PythonQtPublicPromoter_QGroupBox : public QGroupBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_childEvent(QChildEvent*  event) { this->childEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline void promoted_initStyleOption(QStyleOptionGroupBox*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QGroupBox::changeEvent(event); }
inline void py_q_childEvent(QChildEvent*  event) { QGroupBox::childEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGroupBox::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGroupBox::focusInEvent(event); }
inline void py_q_initStyleOption(QStyleOptionGroupBox*  option) const { QGroupBox::initStyleOption(option); }
inline QSize  py_q_minimumSizeHint() const { return QGroupBox::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QGroupBox::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QGroupBox::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QGroupBox::mouseReleaseEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QGroupBox::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QGroupBox::resizeEvent(event); }
};

class PythonQtWrapper_QGroupBox : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGroupBox* new_QGroupBox(QWidget*  parent = nullptr);
QGroupBox* new_QGroupBox(const QString&  title, QWidget*  parent = nullptr);
void delete_QGroupBox(QGroupBox* obj) { delete obj; }
   Qt::Alignment  alignment(QGroupBox* theWrappedObject) const;
   void py_q_changeEvent(QGroupBox* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_changeEvent(event));}
   void py_q_childEvent(QGroupBox* theWrappedObject, QChildEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_childEvent(event));}
   bool  py_q_event(QGroupBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_event(event));}
   void py_q_focusInEvent(QGroupBox* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_focusInEvent(event));}
   void initStyleOption(QGroupBox* theWrappedObject, QStyleOptionGroupBox*  option) const;
   void py_q_initStyleOption(QGroupBox* theWrappedObject, QStyleOptionGroupBox*  option) const{  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_initStyleOption(option));}
   bool  isCheckable(QGroupBox* theWrappedObject) const;
   bool  isChecked(QGroupBox* theWrappedObject) const;
   bool  isFlat(QGroupBox* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QGroupBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QGroupBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QGroupBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QGroupBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void py_q_paintEvent(QGroupBox* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_paintEvent(event));}
   void py_q_resizeEvent(QGroupBox* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_resizeEvent(event));}
   void setAlignment(QGroupBox* theWrappedObject, int  alignment);
   void setCheckable(QGroupBox* theWrappedObject, bool  checkable);
   void setFlat(QGroupBox* theWrappedObject, bool  flat);
   void setTitle(QGroupBox* theWrappedObject, const QString&  title);
   QString  title(QGroupBox* theWrappedObject) const;
};





class PythonQtPublicPromoter_QGuiApplication : public QGuiApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void*  promoted_resolveInterface(const char*  name, int  revision) const { return this->resolveInterface(name, revision); }
inline bool  py_q_event(QEvent*  arg__1) { return QGuiApplication::event(arg__1); }
inline bool  py_q_notify(QObject*  arg__1, QEvent*  arg__2) { return QGuiApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QGuiApplication : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
void delete_QGuiApplication(QGuiApplication* obj) { delete obj; }
   QList<QWindow* >  static_QGuiApplication_allWindows();
   QString  static_QGuiApplication_applicationDisplayName();
   Qt::ApplicationState  static_QGuiApplication_applicationState();
   void static_QGuiApplication_changeOverrideCursor(const QCursor&  arg__1);
   QClipboard*  static_QGuiApplication_clipboard();
   QString  static_QGuiApplication_desktopFileName();
   bool  static_QGuiApplication_desktopSettingsAware();
   qreal  devicePixelRatio(QGuiApplication* theWrappedObject) const;
   bool  py_q_event(QGuiApplication* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QGuiApplication*)theWrappedObject)->py_q_event(arg__1));}
   int  static_QGuiApplication_exec();
   QObject*  static_QGuiApplication_focusObject();
   QWindow*  static_QGuiApplication_focusWindow();
   QFont  static_QGuiApplication_font();
   Qt::HighDpiScaleFactorRoundingPolicy  static_QGuiApplication_highDpiScaleFactorRoundingPolicy();
   QInputMethod*  static_QGuiApplication_inputMethod();
   bool  static_QGuiApplication_isLeftToRight();
   bool  static_QGuiApplication_isRightToLeft();
   bool  isSavingSession(QGuiApplication* theWrappedObject) const;
   bool  isSessionRestored(QGuiApplication* theWrappedObject) const;
   Qt::KeyboardModifiers  static_QGuiApplication_keyboardModifiers();
   Qt::LayoutDirection  static_QGuiApplication_layoutDirection();
   QWindow*  static_QGuiApplication_modalWindow();
   Qt::MouseButtons  static_QGuiApplication_mouseButtons();
   bool  py_q_notify(QGuiApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QGuiApplication*)theWrappedObject)->py_q_notify(arg__1, arg__2));}
   QCursor*  static_QGuiApplication_overrideCursor();
   QPalette  static_QGuiApplication_palette();
   QString  static_QGuiApplication_platformName();
   QScreen*  static_QGuiApplication_primaryScreen();
   Qt::KeyboardModifiers  static_QGuiApplication_queryKeyboardModifiers();
   bool  static_QGuiApplication_quitOnLastWindowClosed();
   void*  resolveInterface(QGuiApplication* theWrappedObject, const char*  name, int  revision) const;
   void static_QGuiApplication_restoreOverrideCursor();
   QScreen*  static_QGuiApplication_screenAt(const QPoint&  point);
   QList<QScreen* >  static_QGuiApplication_screens();
   QString  sessionId(QGuiApplication* theWrappedObject) const;
   QString  sessionKey(QGuiApplication* theWrappedObject) const;
   void static_QGuiApplication_setApplicationDisplayName(const QString&  name);
   void setBadgeNumber(QGuiApplication* theWrappedObject, qint64  number);
   void static_QGuiApplication_setDesktopFileName(const QString&  name);
   void static_QGuiApplication_setDesktopSettingsAware(bool  on);
   void static_QGuiApplication_setFont(const QFont&  arg__1);
   void static_QGuiApplication_setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy  policy);
   void static_QGuiApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   void static_QGuiApplication_setOverrideCursor(const QCursor&  arg__1);
   void static_QGuiApplication_setPalette(const QPalette&  pal);
   void static_QGuiApplication_setQuitOnLastWindowClosed(bool  quit);
   void static_QGuiApplication_setWindowIcon(const QIcon&  icon);
   QStyleHints*  static_QGuiApplication_styleHints();
   void static_QGuiApplication_sync();
   QWindow*  static_QGuiApplication_topLevelAt(const QPoint&  pos);
   QList<QWindow* >  static_QGuiApplication_topLevelWindows();
   QIcon  static_QGuiApplication_windowIcon();
};





class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(nullptr) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QHBoxLayout() override;

void addItem(QLayoutItem*  arg__1) override;
void childEvent(QChildEvent*  e) override;
QSizePolicy::ControlTypes  controlTypes() const override;
int  count() const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
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
void setGeometry(const QRect&  arg__1) override;
void setSpacing(int  spacing) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
int  spacing() const override;
QLayoutItem*  takeAt(int  arg__1) override;
void timerEvent(QTimerEvent*  event) override;
QWidget*  widget() const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; }
    bool __nonzero__(QHBoxLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QHeaderView : public QHeaderView
{
public:
    PythonQtShell_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = nullptr):QHeaderView(orientation, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QHeaderView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  old) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionHeader*  option) const override;
void initStyleOptionForIndex(QStyleOptionHeader*  option, int  logicalIndex) const override;
void initViewItemOption(QStyleOptionViewItem*  option) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
QAbstractItemDelegate*  itemDelegateForIndex(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  e) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  arg__1, Qt::KeyboardModifiers  arg__2) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
void paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) override;
QSize  sectionSizeFromContents(int  logicalIndex) const override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  v) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
bool  viewportEvent(QEvent*  e) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHeaderView : public QHeaderView
{ public:
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { this->currentChanged(current, old); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) { this->dataChanged(topLeft, bottomRight, roles); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return this->indexAt(p); }
inline void promoted_initStyleOption(QStyleOptionHeader*  option) const { this->initStyleOption(option); }
inline void promoted_initStyleOptionForIndex(QStyleOptionHeader*  option, int  logicalIndex) const { this->initStyleOptionForIndex(option, logicalIndex); }
inline void promoted_initialize() { this->initialize(); }
inline void promoted_initializeSections() { this->initializeSections(); }
inline void promoted_initializeSections(int  start, int  end) { this->initializeSections(start, end); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { this->mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline QModelIndex  promoted_moveCursor(int  arg__1, Qt::KeyboardModifiers  arg__2) { return this->moveCursor((QAbstractItemView::CursorAction)arg__1, arg__2); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { this->paintSection(painter, rect, logicalIndex); }
inline void promoted_resizeSections() { this->resizeSections(); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { this->scrollTo(index, hint); }
inline QSize  promoted_sectionSizeFromContents(int  logicalIndex) const { return this->sectionSizeFromContents(logicalIndex); }
inline void promoted_sectionsAboutToBeRemoved(const QModelIndex&  parent, int  logicalFirst, int  logicalLast) { this->sectionsAboutToBeRemoved(parent, logicalFirst, logicalLast); }
inline void promoted_sectionsInserted(const QModelIndex&  parent, int  logicalFirst, int  logicalLast) { this->sectionsInserted(parent, logicalFirst, logicalLast); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags) { this->setSelection(rect, flags); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline void promoted_updateSection(int  logicalIndex) { this->updateSection(logicalIndex); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline bool  promoted_viewportEvent(QEvent*  e) { return this->viewportEvent(e); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return this->visualRect(index); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline void py_q_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) { QHeaderView::dataChanged(topLeft, bottomRight, roles); }
inline void py_q_doItemsLayout() { QHeaderView::doItemsLayout(); }
inline bool  py_q_event(QEvent*  e) { return QHeaderView::event(e); }
inline int  py_q_horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline QModelIndex  py_q_indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
inline void py_q_initStyleOption(QStyleOptionHeader*  option) const { QHeaderView::initStyleOption(option); }
inline void py_q_initStyleOptionForIndex(QStyleOptionHeader*  option, int  logicalIndex) const { QHeaderView::initStyleOptionForIndex(option, logicalIndex); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline QModelIndex  py_q_moveCursor(int  arg__1, Qt::KeyboardModifiers  arg__2) { return QHeaderView::moveCursor((QAbstractItemView::CursorAction)arg__1, arg__2); }
inline void py_q_paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline void py_q_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline void py_q_reset() { QHeaderView::reset(); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
inline QSize  py_q_sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
inline void py_q_setModel(QAbstractItemModel*  model) { QHeaderView::setModel(model); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags) { QHeaderView::setSelection(rect, flags); }
inline void py_q_setVisible(bool  v) { QHeaderView::setVisible(v); }
inline QSize  py_q_sizeHint() const { return QHeaderView::sizeHint(); }
inline void py_q_updateGeometries() { QHeaderView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return QHeaderView::verticalOffset(); }
inline bool  py_q_viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = nullptr);
void delete_QHeaderView(QHeaderView* obj) { delete obj; }
   bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
   int  count(QHeaderView* theWrappedObject) const;
   void py_q_currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_currentChanged(current, old));}
   void py_q_dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_dataChanged(topLeft, bottomRight, roles));}
   Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
   int  defaultSectionSize(QHeaderView* theWrappedObject) const;
   void py_q_doItemsLayout(QHeaderView* theWrappedObject){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_doItemsLayout());}
   bool  py_q_event(QHeaderView* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_event(e));}
   int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
   void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
   bool  highlightSections(QHeaderView* theWrappedObject) const;
   int  py_q_horizontalOffset(QHeaderView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_horizontalOffset());}
   QModelIndex  py_q_indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_indexAt(p));}
   void initStyleOption(QHeaderView* theWrappedObject, QStyleOptionHeader*  option) const;
   void py_q_initStyleOption(QHeaderView* theWrappedObject, QStyleOptionHeader*  option) const{  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_initStyleOption(option));}
   void initStyleOptionForIndex(QHeaderView* theWrappedObject, QStyleOptionHeader*  option, int  logicalIndex) const;
   void py_q_initStyleOptionForIndex(QHeaderView* theWrappedObject, QStyleOptionHeader*  option, int  logicalIndex) const{  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_initStyleOptionForIndex(option, logicalIndex));}
   void initialize(QHeaderView* theWrappedObject);
   void initializeSections(QHeaderView* theWrappedObject);
   void initializeSections(QHeaderView* theWrappedObject, int  start, int  end);
   bool  isFirstSectionMovable(QHeaderView* theWrappedObject) const;
   bool  py_q_isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  isSortIndicatorClearable(QHeaderView* theWrappedObject) const;
   bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
   int  length(QHeaderView* theWrappedObject) const;
   int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
   int  maximumSectionSize(QHeaderView* theWrappedObject) const;
   int  minimumSectionSize(QHeaderView* theWrappedObject) const;
   void py_q_mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_mouseDoubleClickEvent(e));}
   void py_q_mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   QModelIndex  py_q_moveCursor(QHeaderView* theWrappedObject, int  arg__1, Qt::KeyboardModifiers  arg__2){  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_moveCursor(arg__1, arg__2));}
   void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
   int  offset(QHeaderView* theWrappedObject) const;
   Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
   void py_q_paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_paintEvent(e));}
   void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
   void py_q_paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const{  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_paintSection(painter, rect, logicalIndex));}
   void py_q_reset(QHeaderView* theWrappedObject){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_reset());}
   void resetDefaultSectionSize(QHeaderView* theWrappedObject);
   int  resizeContentsPrecision(QHeaderView* theWrappedObject) const;
   void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
   void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
   void py_q_rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   QByteArray  saveState(QHeaderView* theWrappedObject) const;
   void py_q_scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QHeaderView::ResizeMode  sectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QSize  py_q_sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_sectionSizeFromContents(logicalIndex));}
   int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  sectionsClickable(QHeaderView* theWrappedObject) const;
   bool  sectionsHidden(QHeaderView* theWrappedObject) const;
   bool  sectionsMovable(QHeaderView* theWrappedObject) const;
   bool  sectionsMoved(QHeaderView* theWrappedObject) const;
   void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
   void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
   void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
   void setFirstSectionMovable(QHeaderView* theWrappedObject, bool  movable);
   void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
   void setMaximumSectionSize(QHeaderView* theWrappedObject, int  size);
   void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
   void py_q_setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_setModel(model));}
   void setResizeContentsPrecision(QHeaderView* theWrappedObject, int  precision);
   void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
   void setSectionResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   void setSectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
   void setSectionsClickable(QHeaderView* theWrappedObject, bool  clickable);
   void setSectionsMovable(QHeaderView* theWrappedObject, bool  movable);
   void py_q_setSelection(QHeaderView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  flags){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_setSelection(rect, flags));}
   void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
   void setSortIndicatorClearable(QHeaderView* theWrappedObject, bool  clearable);
   void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
   void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
   void py_q_setVisible(QHeaderView* theWrappedObject, bool  v){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_setVisible(v));}
   void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
   QSize  py_q_sizeHint(QHeaderView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_sizeHint());}
   Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
   int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
   bool  stretchLastSection(QHeaderView* theWrappedObject) const;
   int  stretchSectionCount(QHeaderView* theWrappedObject) const;
   void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
   void py_q_updateGeometries(QHeaderView* theWrappedObject){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_updateGeometries());}
   int  py_q_verticalOffset(QHeaderView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_verticalOffset());}
   bool  py_q_viewportEvent(QHeaderView* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_viewportEvent(e));}
   int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
   QRect  py_q_visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
};





class PythonQtShell_QHelpEvent : public QHelpEvent
{
public:
    PythonQtShell_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos):QHelpEvent(type, pos, globalPos),_wrapper(nullptr) {};
    PythonQtShell_QHelpEvent(const QHelpEvent&  arg__1):QHelpEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QHelpEvent() override;

QHelpEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHelpEvent : public QHelpEvent
{ public:
inline QHelpEvent&  promoted_operator_assign(const QHelpEvent&  other) { return this->QHelpEvent::operator=(other); }
inline QHelpEvent*  py_q_clone() const { return QHelpEvent::clone(); }
};

class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
QHelpEvent* new_QHelpEvent(const QHelpEvent&  arg__1);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; }
   QHelpEvent*  py_q_clone(QHelpEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHelpEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   int  globalX(QHelpEvent* theWrappedObject) const;
   int  globalY(QHelpEvent* theWrappedObject) const;
   QHelpEvent*  operator_assign(QHelpEvent* theWrappedObject, const QHelpEvent&  other);
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
   int  x(QHelpEvent* theWrappedObject) const;
   int  y(QHelpEvent* theWrappedObject) const;
};





class PythonQtShell_QHideEvent : public QHideEvent
{
public:
    PythonQtShell_QHideEvent():QHideEvent(),_wrapper(nullptr) {};
    PythonQtShell_QHideEvent(const QHideEvent&  arg__1):QHideEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QHideEvent() override;

QHideEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHideEvent : public QHideEvent
{ public:
inline QHideEvent&  promoted_operator_assign(const QHideEvent&  other) { return this->QHideEvent::operator=(other); }
inline QHideEvent*  py_q_clone() const { return QHideEvent::clone(); }
};

class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QHideEvent* new_QHideEvent();
QHideEvent* new_QHideEvent(const QHideEvent&  arg__1);
void delete_QHideEvent(QHideEvent* obj) { delete obj; }
   QHideEvent*  py_q_clone(QHideEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHideEvent*)theWrappedObject)->py_q_clone());}
   QHideEvent*  operator_assign(QHideEvent* theWrappedObject, const QHideEvent&  other);
};





class PythonQtShell_QHoverEvent : public QHoverEvent
{
public:
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QHoverEvent(type, pos, oldPos, modifiers, device),_wrapper(nullptr) {};
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPointF&  scenePos, const QPointF&  globalPos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QHoverEvent(type, scenePos, globalPos, oldPos, modifiers, device),_wrapper(nullptr) {};
    PythonQtShell_QHoverEvent(const QHoverEvent&  arg__1):QHoverEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QHoverEvent() override;

QHoverEvent*  clone() const override;
bool  isBeginEvent() const override;
bool  isEndEvent() const override;
bool  isUpdateEvent() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHoverEvent : public QHoverEvent
{ public:
inline QHoverEvent&  promoted_operator_assign(const QHoverEvent&  other) { return this->QHoverEvent::operator=(other); }
inline QHoverEvent*  py_q_clone() const { return QHoverEvent::clone(); }
inline bool  py_q_isUpdateEvent() const { return QHoverEvent::isUpdateEvent(); }
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPointF&  scenePos, const QPointF&  globalPos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
QHoverEvent* new_QHoverEvent(const QHoverEvent&  arg__1);
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; }
   QHoverEvent*  py_q_clone(QHoverEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHoverEvent*)theWrappedObject)->py_q_clone());}
   bool  py_q_isUpdateEvent(QHoverEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHoverEvent*)theWrappedObject)->py_q_isUpdateEvent());}
   QPoint  oldPos(QHoverEvent* theWrappedObject) const;
   QPointF  oldPosF(QHoverEvent* theWrappedObject) const;
   QHoverEvent*  operator_assign(QHoverEvent* theWrappedObject, const QHoverEvent&  other);
   QPoint  pos(QHoverEvent* theWrappedObject) const;
   QPointF  posF(QHoverEvent* theWrappedObject) const;
};





class PythonQtShell_QIconDragEvent : public QIconDragEvent
{
public:
    PythonQtShell_QIconDragEvent():QIconDragEvent(),_wrapper(nullptr) {};
    PythonQtShell_QIconDragEvent(const QIconDragEvent&  arg__1):QIconDragEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QIconDragEvent() override;

QIconDragEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIconDragEvent : public QIconDragEvent
{ public:
inline QIconDragEvent&  promoted_operator_assign(const QIconDragEvent&  other) { return this->QIconDragEvent::operator=(other); }
inline QIconDragEvent*  py_q_clone() const { return QIconDragEvent::clone(); }
};

class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QIconDragEvent* new_QIconDragEvent();
QIconDragEvent* new_QIconDragEvent(const QIconDragEvent&  arg__1);
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; }
   QIconDragEvent*  py_q_clone(QIconDragEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconDragEvent*)theWrappedObject)->py_q_clone());}
   QIconDragEvent*  operator_assign(QIconDragEvent* theWrappedObject, const QIconDragEvent&  other);
};





class PythonQtShell_QIconEngine : public QIconEngine
{
public:
    PythonQtShell_QIconEngine():QIconEngine(),_wrapper(nullptr) {};
    PythonQtShell_QIconEngine(const QIconEngine&  other):QIconEngine(other),_wrapper(nullptr) {};

   ~PythonQtShell_QIconEngine() override;

QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) override;
void addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) override;
void addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) override;
QList<QSize >  availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) override;
QIconEngine*  clone() const override;
QString  iconName() override;
bool  isNull() override;
QString  key() const override;
void paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state) override;
QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) override;
bool  read(QDataStream&  in) override;
QPixmap  scaledPixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale) override;
bool  write(QDataStream&  out) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline QSize  py_q_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline void py_q_addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addFile(fileName, size, mode, state); }
inline void py_q_addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addPixmap(pixmap, mode, state); }
inline QList<QSize >  py_q_availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) { return QIconEngine::availableSizes(mode, state); }
inline QIconEngine*  py_q_clone() const { return this->clone(); }
inline QString  py_q_iconName() { return QIconEngine::iconName(); }
inline bool  py_q_isNull() { return QIconEngine::isNull(); }
inline QString  py_q_key() const { return QIconEngine::key(); }
inline void py_q_paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state) { this->paint(painter, rect, mode, state); }
inline QPixmap  py_q_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
inline bool  py_q_read(QDataStream&  in) { return QIconEngine::read(in); }
inline QPixmap  py_q_scaledPixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale) { return QIconEngine::scaledPixmap(size, mode, state, scale); }
inline bool  py_q_write(QDataStream&  out) const { return QIconEngine::write(out); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconEngineHook )
enum IconEngineHook{
  IsNullHook = QIconEngine::IsNullHook,   ScaledPixmapHook = QIconEngine::ScaledPixmapHook};
public Q_SLOTS:
QIconEngine* new_QIconEngine();
QIconEngine* new_QIconEngine(const QIconEngine&  other);
void delete_QIconEngine(QIconEngine* obj) { delete obj; }
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QSize  py_q_actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_actualSize(size, mode, state));}
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void py_q_addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_addFile(fileName, size, mode, state));}
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
   void py_q_addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_addPixmap(pixmap, mode, state));}
   QList<QSize >  availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   QList<QSize >  py_q_availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_availableSizes(mode, state));}
   QIconEngine*  clone(QIconEngine* theWrappedObject) const;
   QIconEngine*  py_q_clone(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_clone());}
   QString  iconName(QIconEngine* theWrappedObject);
   QString  py_q_iconName(QIconEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_iconName());}
   bool  isNull(QIconEngine* theWrappedObject);
   bool  py_q_isNull(QIconEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_isNull());}
   QString  key(QIconEngine* theWrappedObject) const;
   QString  py_q_key(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_key());}
   void paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
   void py_q_paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_paint(painter, rect, mode, state));}
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  py_q_pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_pixmap(size, mode, state));}
   bool  read(QIconEngine* theWrappedObject, QDataStream&  in);
   bool  py_q_read(QIconEngine* theWrappedObject, QDataStream&  in){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_read(in));}
   QPixmap  scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale);
   QPixmap  py_q_scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_scaledPixmap(size, mode, state, scale));}
   bool  write(QIconEngine* theWrappedObject, QDataStream&  out) const;
   bool  py_q_write(QIconEngine* theWrappedObject, QDataStream&  out) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_write(out));}
    bool __nonzero__(QIconEngine* obj) { return !obj->isNull(); }
};





class PythonQtShell_QImageIOHandler : public QImageIOHandler
{
public:
    PythonQtShell_QImageIOHandler():QImageIOHandler(),_wrapper(nullptr) {};

   ~PythonQtShell_QImageIOHandler() override;

bool  canRead() const override;
int  currentImageNumber() const override;
QRect  currentImageRect() const override;
int  imageCount() const override;
bool  jumpToImage(int  imageNumber) override;
bool  jumpToNextImage() override;
int  loopCount() const override;
int  nextImageDelay() const override;
QVariant  option(QImageIOHandler::ImageOption  option) const override;
bool  read(QImage*  image) override;
void setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) override;
bool  supportsOption(QImageIOHandler::ImageOption  option) const override;
bool  write(const QImage&  image) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QImageIOHandler : public QImageIOHandler
{ public:
inline bool  py_q_canRead() const { return this->canRead(); }
inline int  py_q_currentImageNumber() const { return QImageIOHandler::currentImageNumber(); }
inline QRect  py_q_currentImageRect() const { return QImageIOHandler::currentImageRect(); }
inline int  py_q_imageCount() const { return QImageIOHandler::imageCount(); }
inline bool  py_q_jumpToImage(int  imageNumber) { return QImageIOHandler::jumpToImage(imageNumber); }
inline bool  py_q_jumpToNextImage() { return QImageIOHandler::jumpToNextImage(); }
inline int  py_q_loopCount() const { return QImageIOHandler::loopCount(); }
inline int  py_q_nextImageDelay() const { return QImageIOHandler::nextImageDelay(); }
inline QVariant  py_q_option(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::option(option); }
inline bool  py_q_read(QImage*  image) { return this->read(image); }
inline void py_q_setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) { QImageIOHandler::setOption(option, value); }
inline bool  py_q_supportsOption(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::supportsOption(option); }
inline bool  py_q_write(const QImage&  image) { return QImageIOHandler::write(image); }
};

class PythonQtWrapper_QImageIOHandler : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageOption Transformation )
enum ImageOption{
  Size = QImageIOHandler::Size,   ClipRect = QImageIOHandler::ClipRect,   Description = QImageIOHandler::Description,   ScaledClipRect = QImageIOHandler::ScaledClipRect,   ScaledSize = QImageIOHandler::ScaledSize,   CompressionRatio = QImageIOHandler::CompressionRatio,   Gamma = QImageIOHandler::Gamma,   Quality = QImageIOHandler::Quality,   Name = QImageIOHandler::Name,   SubType = QImageIOHandler::SubType,   IncrementalReading = QImageIOHandler::IncrementalReading,   Endianness = QImageIOHandler::Endianness,   Animation = QImageIOHandler::Animation,   BackgroundColor = QImageIOHandler::BackgroundColor,   ImageFormat = QImageIOHandler::ImageFormat,   SupportedSubTypes = QImageIOHandler::SupportedSubTypes,   OptimizedWrite = QImageIOHandler::OptimizedWrite,   ProgressiveScanWrite = QImageIOHandler::ProgressiveScanWrite,   ImageTransformation = QImageIOHandler::ImageTransformation};
enum Transformation{
  TransformationNone = QImageIOHandler::TransformationNone,   TransformationMirror = QImageIOHandler::TransformationMirror,   TransformationFlip = QImageIOHandler::TransformationFlip,   TransformationRotate180 = QImageIOHandler::TransformationRotate180,   TransformationRotate90 = QImageIOHandler::TransformationRotate90,   TransformationMirrorAndRotate90 = QImageIOHandler::TransformationMirrorAndRotate90,   TransformationFlipAndRotate90 = QImageIOHandler::TransformationFlipAndRotate90,   TransformationRotate270 = QImageIOHandler::TransformationRotate270};
public Q_SLOTS:
QImageIOHandler* new_QImageIOHandler();
void delete_QImageIOHandler(QImageIOHandler* obj) { delete obj; }
   bool  static_QImageIOHandler_allocateImage(QSize  size, QImage::Format  format, QImage*  image);
   bool  canRead(QImageIOHandler* theWrappedObject) const;
   bool  py_q_canRead(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_canRead());}
   int  currentImageNumber(QImageIOHandler* theWrappedObject) const;
   int  py_q_currentImageNumber(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_currentImageNumber());}
   QRect  currentImageRect(QImageIOHandler* theWrappedObject) const;
   QRect  py_q_currentImageRect(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_currentImageRect());}
   QIODevice*  device(QImageIOHandler* theWrappedObject) const;
   QByteArray  format(QImageIOHandler* theWrappedObject) const;
   int  imageCount(QImageIOHandler* theWrappedObject) const;
   int  py_q_imageCount(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_imageCount());}
   bool  jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber);
   bool  py_q_jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_jumpToImage(imageNumber));}
   bool  jumpToNextImage(QImageIOHandler* theWrappedObject);
   bool  py_q_jumpToNextImage(QImageIOHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_jumpToNextImage());}
   int  loopCount(QImageIOHandler* theWrappedObject) const;
   int  py_q_loopCount(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_loopCount());}
   int  nextImageDelay(QImageIOHandler* theWrappedObject) const;
   int  py_q_nextImageDelay(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_nextImageDelay());}
   QVariant  option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QVariant  py_q_option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_option(option));}
   bool  read(QImageIOHandler* theWrappedObject, QImage*  image);
   bool  py_q_read(QImageIOHandler* theWrappedObject, QImage*  image){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_read(image));}
   void setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device);
   void setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format);
   void setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value);
   void py_q_setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value){  (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_setOption(option, value));}
   bool  supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   bool  py_q_supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_supportsOption(option));}
   bool  write(QImageIOHandler* theWrappedObject, const QImage&  image);
   bool  py_q_write(QImageIOHandler* theWrappedObject, const QImage&  image){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_write(image));}
};





class PythonQtShell_QImageIOPlugin : public QImageIOPlugin
{
public:
    PythonQtShell_QImageIOPlugin(QObject*  parent = nullptr):QImageIOPlugin(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QImageIOPlugin() override;

QImageIOPlugin::Capabilities  capabilities(QIODevice*  device, const QByteArray&  format) const override;
void childEvent(QChildEvent*  event) override;
QImageIOHandler*  create(QIODevice*  device, const QByteArray&  format = QByteArray()) const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QImageIOPlugin : public QImageIOPlugin
{ public:
inline QImageIOPlugin::Capabilities  py_q_capabilities(QIODevice*  device, const QByteArray&  format) const { return this->capabilities(device, format); }
inline QImageIOHandler*  py_q_create(QIODevice*  device, const QByteArray&  format = QByteArray()) const { return this->create(device, format); }
};

class PythonQtWrapper_QImageIOPlugin : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanRead = QImageIOPlugin::CanRead,   CanWrite = QImageIOPlugin::CanWrite,   CanReadIncremental = QImageIOPlugin::CanReadIncremental};
Q_DECLARE_FLAGS(Capabilities, Capability)
public Q_SLOTS:
QImageIOPlugin* new_QImageIOPlugin(QObject*  parent = nullptr);
void delete_QImageIOPlugin(QImageIOPlugin* obj) { delete obj; }
   QImageIOPlugin::Capabilities  capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const;
   QImageIOPlugin::Capabilities  py_q_capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_capabilities(device, format));}
   QImageIOHandler*  create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const;
   QImageIOHandler*  py_q_create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_create(device, format));}
};





class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public Q_SLOTS:
QImageReader* new_QImageReader();
QImageReader* new_QImageReader(QIODevice*  device, const QByteArray&  format = QByteArray());
QImageReader* new_QImageReader(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageReader(QImageReader* obj) { delete obj; }
   int  static_QImageReader_allocationLimit();
   bool  autoDetectImageFormat(QImageReader* theWrappedObject) const;
   bool  autoTransform(QImageReader* theWrappedObject) const;
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   bool  canRead(QImageReader* theWrappedObject) const;
   QRect  clipRect(QImageReader* theWrappedObject) const;
   int  currentImageNumber(QImageReader* theWrappedObject) const;
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   bool  decideFormatFromContent(QImageReader* theWrappedObject) const;
   QIODevice*  device(QImageReader* theWrappedObject) const;
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   QString  errorString(QImageReader* theWrappedObject) const;
   QString  fileName(QImageReader* theWrappedObject) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
   int  imageCount(QImageReader* theWrappedObject) const;
   QImage::Format  imageFormat(QImageReader* theWrappedObject) const;
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   QList<QByteArray >  static_QImageReader_imageFormatsForMimeType(const QByteArray&  mimeType);
   bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
   bool  jumpToNextImage(QImageReader* theWrappedObject);
   int  loopCount(QImageReader* theWrappedObject) const;
   int  nextImageDelay(QImageReader* theWrappedObject) const;
   int  quality(QImageReader* theWrappedObject) const;
   QImage  read(QImageReader* theWrappedObject);
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   void static_QImageReader_setAllocationLimit(int  mbLimit);
   void setAutoDetectImageFormat(QImageReader* theWrappedObject, bool  enabled);
   void setAutoTransform(QImageReader* theWrappedObject, bool  enabled);
   void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
   void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setDecideFormatFromContent(QImageReader* theWrappedObject, bool  ignored);
   void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
   void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
   void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
   void setQuality(QImageReader* theWrappedObject, int  quality);
   void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
   QSize  size(QImageReader* theWrappedObject) const;
   QByteArray  subType(QImageReader* theWrappedObject) const;
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   QList<QByteArray >  static_QImageReader_supportedMimeTypes();
   QList<QByteArray >  supportedSubTypes(QImageReader* theWrappedObject) const;
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
   QString  static_QImageReader_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
};





class PythonQtWrapper_QImageWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageWriterError )
enum ImageWriterError{
  UnknownError = QImageWriter::UnknownError,   DeviceError = QImageWriter::DeviceError,   UnsupportedFormatError = QImageWriter::UnsupportedFormatError,   InvalidImageError = QImageWriter::InvalidImageError};
public Q_SLOTS:
QImageWriter* new_QImageWriter();
QImageWriter* new_QImageWriter(QIODevice*  device, const QByteArray&  format);
QImageWriter* new_QImageWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageWriter(QImageWriter* obj) { delete obj; }
   bool  canWrite(QImageWriter* theWrappedObject) const;
   int  compression(QImageWriter* theWrappedObject) const;
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   QString  fileName(QImageWriter* theWrappedObject) const;
   QByteArray  format(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_imageFormatsForMimeType(const QByteArray&  mimeType);
   bool  optimizedWrite(QImageWriter* theWrappedObject) const;
   bool  progressiveScanWrite(QImageWriter* theWrappedObject) const;
   int  quality(QImageWriter* theWrappedObject) const;
   void setCompression(QImageWriter* theWrappedObject, int  compression);
   void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
   void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
   void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
   void setOptimizedWrite(QImageWriter* theWrappedObject, bool  optimize);
   void setProgressiveScanWrite(QImageWriter* theWrappedObject, bool  progressive);
   void setQuality(QImageWriter* theWrappedObject, int  quality);
   void setSubType(QImageWriter* theWrappedObject, const QByteArray&  type);
   void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
   QByteArray  subType(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   QList<QByteArray >  static_QImageWriter_supportedMimeTypes();
   QList<QByteArray >  supportedSubTypes(QImageWriter* theWrappedObject) const;
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  static_QImageWriter_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
};





class PythonQtShell_QInputDevice : public QInputDevice
{
public:
    PythonQtShell_QInputDevice(QObject*  parent = nullptr):QInputDevice(parent),_wrapper(nullptr) {};
    PythonQtShell_QInputDevice(const QString&  name, qint64  systemId, QInputDevice::DeviceType  type, const QString&  seatName = QString(), QObject*  parent = nullptr):QInputDevice(name, systemId, type, seatName, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QInputDevice() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QInputDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability DeviceType )
Q_FLAGS(Capabilities DeviceTypes )
enum class Capability{
  None = static_cast<int>(QInputDevice::Capability::None),   Position = static_cast<int>(QInputDevice::Capability::Position),   Area = static_cast<int>(QInputDevice::Capability::Area),   Pressure = static_cast<int>(QInputDevice::Capability::Pressure),   Velocity = static_cast<int>(QInputDevice::Capability::Velocity),   NormalizedPosition = static_cast<int>(QInputDevice::Capability::NormalizedPosition),   MouseEmulation = static_cast<int>(QInputDevice::Capability::MouseEmulation),   PixelScroll = static_cast<int>(QInputDevice::Capability::PixelScroll),   Scroll = static_cast<int>(QInputDevice::Capability::Scroll),   Hover = static_cast<int>(QInputDevice::Capability::Hover),   Rotation = static_cast<int>(QInputDevice::Capability::Rotation),   XTilt = static_cast<int>(QInputDevice::Capability::XTilt),   YTilt = static_cast<int>(QInputDevice::Capability::YTilt),   TangentialPressure = static_cast<int>(QInputDevice::Capability::TangentialPressure),   ZPosition = static_cast<int>(QInputDevice::Capability::ZPosition),   All = static_cast<int>(QInputDevice::Capability::All)};
enum class DeviceType{
  Unknown = static_cast<int>(QInputDevice::DeviceType::Unknown),   Mouse = static_cast<int>(QInputDevice::DeviceType::Mouse),   TouchScreen = static_cast<int>(QInputDevice::DeviceType::TouchScreen),   TouchPad = static_cast<int>(QInputDevice::DeviceType::TouchPad),   Puck = static_cast<int>(QInputDevice::DeviceType::Puck),   Stylus = static_cast<int>(QInputDevice::DeviceType::Stylus),   Airbrush = static_cast<int>(QInputDevice::DeviceType::Airbrush),   Keyboard = static_cast<int>(QInputDevice::DeviceType::Keyboard),   AllDevices = static_cast<int>(QInputDevice::DeviceType::AllDevices)};
Q_DECLARE_FLAGS(Capabilities, Capability)
Q_DECLARE_FLAGS(DeviceTypes, DeviceType)
public Q_SLOTS:
QInputDevice* new_QInputDevice(QObject*  parent = nullptr);
QInputDevice* new_QInputDevice(const QString&  name, qint64  systemId, QInputDevice::DeviceType  type, const QString&  seatName = QString(), QObject*  parent = nullptr);
void delete_QInputDevice(QInputDevice* obj) { delete obj; }
   QRect  availableVirtualGeometry(QInputDevice* theWrappedObject) const;
   QInputDevice::Capabilities  capabilities(QInputDevice* theWrappedObject) const;
   QList<const QInputDevice* >  static_QInputDevice_devices();
   bool  hasCapability(QInputDevice* theWrappedObject, QInputDevice::Capability  cap) const;
   QString  name(QInputDevice* theWrappedObject) const;
   bool  __eq__(QInputDevice* theWrappedObject, const QInputDevice&  other) const;
   const QInputDevice*  static_QInputDevice_primaryKeyboard(const QString&  seatName = QString());
   QString  seatName(QInputDevice* theWrappedObject) const;
   QStringList  static_QInputDevice_seatNames();
   qint64  systemId(QInputDevice* theWrappedObject) const;
   QInputDevice::DeviceType  type(QInputDevice* theWrappedObject) const;
    QString py_toString(QInputDevice*);
};





class PythonQtShell_QInputDialog : public QInputDialog
{
public:
    PythonQtShell_QInputDialog(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QInputDialog(parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QInputDialog() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void done(int  result) override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
int  exec() override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
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
void reject() override;
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

class PythonQtPublicPromoter_QInputDialog : public QInputDialog
{ public:
inline void py_q_done(int  result) { QInputDialog::done(result); }
inline QSize  py_q_minimumSizeHint() const { return QInputDialog::minimumSizeHint(); }
inline void py_q_setVisible(bool  visible) { QInputDialog::setVisible(visible); }
inline QSize  py_q_sizeHint() const { return QInputDialog::sizeHint(); }
};

class PythonQtWrapper_QInputDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InputDialogOption InputMode )
Q_FLAGS(InputDialogOptions )
enum InputDialogOption{
  NoButtons = QInputDialog::NoButtons,   UseListViewForComboBoxItems = QInputDialog::UseListViewForComboBoxItems,   UsePlainTextEditForTextInput = QInputDialog::UsePlainTextEditForTextInput};
enum InputMode{
  TextInput = QInputDialog::TextInput,   IntInput = QInputDialog::IntInput,   DoubleInput = QInputDialog::DoubleInput};
Q_DECLARE_FLAGS(InputDialogOptions, InputDialogOption)
public Q_SLOTS:
QInputDialog* new_QInputDialog(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QInputDialog(QInputDialog* obj) { delete obj; }
   QString  cancelButtonText(QInputDialog* theWrappedObject) const;
   QStringList  comboBoxItems(QInputDialog* theWrappedObject) const;
   void py_q_done(QInputDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_done(result));}
   int  doubleDecimals(QInputDialog* theWrappedObject) const;
   double  doubleMaximum(QInputDialog* theWrappedObject) const;
   double  doubleMinimum(QInputDialog* theWrappedObject) const;
   double  doubleStep(QInputDialog* theWrappedObject) const;
   double  doubleValue(QInputDialog* theWrappedObject) const;
   double  static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value = 0, double  minValue = -2147483647, double  maxValue = 2147483647, int  decimals = 1, bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags(), double  step = 1);
   int  static_QInputDialog_getInt(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
   QString  static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  items, int  current = 0, bool  editable = true, bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QString  static_QInputDialog_getMultiLineText(QWidget*  parent, const QString&  title, const QString&  label, const QString&  text = QString(), bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QString  static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo = QLineEdit::Normal, const QString&  text = QString(), bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QInputDialog::InputMode  inputMode(QInputDialog* theWrappedObject) const;
   int  intMaximum(QInputDialog* theWrappedObject) const;
   int  intMinimum(QInputDialog* theWrappedObject) const;
   int  intStep(QInputDialog* theWrappedObject) const;
   int  intValue(QInputDialog* theWrappedObject) const;
   bool  isComboBoxEditable(QInputDialog* theWrappedObject) const;
   QString  labelText(QInputDialog* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QInputDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_minimumSizeHint());}
   QString  okButtonText(QInputDialog* theWrappedObject) const;
   void open(QInputDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QInputDialog::InputDialogOptions  options(QInputDialog* theWrappedObject) const;
   void setCancelButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setComboBoxEditable(QInputDialog* theWrappedObject, bool  editable);
   void setComboBoxItems(QInputDialog* theWrappedObject, const QStringList&  items);
   void setDoubleDecimals(QInputDialog* theWrappedObject, int  decimals);
   void setDoubleMaximum(QInputDialog* theWrappedObject, double  max);
   void setDoubleMinimum(QInputDialog* theWrappedObject, double  min);
   void setDoubleRange(QInputDialog* theWrappedObject, double  min, double  max);
   void setDoubleStep(QInputDialog* theWrappedObject, double  step);
   void setDoubleValue(QInputDialog* theWrappedObject, double  value);
   void setInputMode(QInputDialog* theWrappedObject, QInputDialog::InputMode  mode);
   void setIntMaximum(QInputDialog* theWrappedObject, int  max);
   void setIntMinimum(QInputDialog* theWrappedObject, int  min);
   void setIntRange(QInputDialog* theWrappedObject, int  min, int  max);
   void setIntStep(QInputDialog* theWrappedObject, int  step);
   void setIntValue(QInputDialog* theWrappedObject, int  value);
   void setLabelText(QInputDialog* theWrappedObject, const QString&  text);
   void setOkButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option, bool  on = true);
   void setOptions(QInputDialog* theWrappedObject, QInputDialog::InputDialogOptions  options);
   void setTextEchoMode(QInputDialog* theWrappedObject, QLineEdit::EchoMode  mode);
   void setTextValue(QInputDialog* theWrappedObject, const QString&  text);
   void py_q_setVisible(QInputDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_setVisible(visible));}
   QSize  py_q_sizeHint(QInputDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_sizeHint());}
   bool  testOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option) const;
   QLineEdit::EchoMode  textEchoMode(QInputDialog* theWrappedObject) const;
   QString  textValue(QInputDialog* theWrappedObject) const;
};





class PythonQtShell_QInputEvent : public QInputEvent
{
public:
    PythonQtShell_QInputEvent(QEvent::Type  type, const QInputDevice*  m_dev, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QInputEvent(type, m_dev, modifiers),_wrapper(nullptr) {};
    PythonQtShell_QInputEvent(const QInputEvent&  arg__1):QInputEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QInputEvent() override;

QInputEvent*  clone() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputEvent : public QInputEvent
{ public:
inline QInputEvent&  promoted_operator_assign(const QInputEvent&  other) { return this->QInputEvent::operator=(other); }
inline QInputEvent*  py_q_clone() const { return QInputEvent::clone(); }
inline void py_q_setTimestamp(quint64  timestamp) { QInputEvent::setTimestamp(timestamp); }
};

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QInputEvent* new_QInputEvent(QEvent::Type  type, const QInputDevice*  m_dev, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
QInputEvent* new_QInputEvent(const QInputEvent&  arg__1);
void delete_QInputEvent(QInputEvent* obj) { delete obj; }
   QInputEvent*  py_q_clone(QInputEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputEvent*)theWrappedObject)->py_q_clone());}
   const QInputDevice*  device(QInputEvent* theWrappedObject) const;
   QInputDevice::DeviceType  deviceType(QInputEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
   QInputEvent*  operator_assign(QInputEvent* theWrappedObject, const QInputEvent&  other);
   void setModifiers(QInputEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setTimestamp(QInputEvent* theWrappedObject, quint64  timestamp);
   void py_q_setTimestamp(QInputEvent* theWrappedObject, quint64  timestamp){  (((PythonQtPublicPromoter_QInputEvent*)theWrappedObject)->py_q_setTimestamp(timestamp));}
   quint64  timestamp(QInputEvent* theWrappedObject) const;
};





class PythonQtWrapper_QInputMethod : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
   QRectF  anchorRectangle(QInputMethod* theWrappedObject) const;
   QRectF  cursorRectangle(QInputMethod* theWrappedObject) const;
   Qt::LayoutDirection  inputDirection(QInputMethod* theWrappedObject) const;
   QRectF  inputItemClipRectangle(QInputMethod* theWrappedObject) const;
   QRectF  inputItemRectangle(QInputMethod* theWrappedObject) const;
   QTransform  inputItemTransform(QInputMethod* theWrappedObject) const;
   bool  isAnimating(QInputMethod* theWrappedObject) const;
   bool  isVisible(QInputMethod* theWrappedObject) const;
   QRectF  keyboardRectangle(QInputMethod* theWrappedObject) const;
   QLocale  locale(QInputMethod* theWrappedObject) const;
   QVariant  static_QInputMethod_queryFocusObject(Qt::InputMethodQuery  query, const QVariant&  argument);
   void setInputItemRectangle(QInputMethod* theWrappedObject, const QRectF&  rect);
   void setInputItemTransform(QInputMethod* theWrappedObject, const QTransform&  transform);
   void setVisible(QInputMethod* theWrappedObject, bool  visible);
};





class PythonQtShell_QInputMethodEvent : public QInputMethodEvent
{
public:
    PythonQtShell_QInputMethodEvent():QInputMethodEvent(),_wrapper(nullptr) {};
    PythonQtShell_QInputMethodEvent(const QInputMethodEvent&  arg__1):QInputMethodEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QInputMethodEvent(const QString&  preeditText, const QList<QInputMethodEvent::Attribute >&  attributes):QInputMethodEvent(preeditText, attributes),_wrapper(nullptr) {};

   ~PythonQtShell_QInputMethodEvent() override;

QInputMethodEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputMethodEvent : public QInputMethodEvent
{ public:
inline QInputMethodEvent&  promoted_operator_assign(const QInputMethodEvent&  other) { return this->QInputMethodEvent::operator=(other); }
inline QInputMethodEvent*  py_q_clone() const { return QInputMethodEvent::clone(); }
};

class PythonQtWrapper_QInputMethodEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AttributeType )
enum AttributeType{
  TextFormat = QInputMethodEvent::TextFormat,   Cursor = QInputMethodEvent::Cursor,   Language = QInputMethodEvent::Language,   Ruby = QInputMethodEvent::Ruby,   Selection = QInputMethodEvent::Selection,   MimeData = QInputMethodEvent::MimeData};
public Q_SLOTS:
QInputMethodEvent* new_QInputMethodEvent();
QInputMethodEvent* new_QInputMethodEvent(const QInputMethodEvent&  arg__1);
QInputMethodEvent* new_QInputMethodEvent(const QString&  preeditText, const QList<QInputMethodEvent::Attribute >&  attributes);
void delete_QInputMethodEvent(QInputMethodEvent* obj) { delete obj; }
   const QList<QInputMethodEvent::Attribute >*  attributes(QInputMethodEvent* theWrappedObject) const;
   QInputMethodEvent*  py_q_clone(QInputMethodEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputMethodEvent*)theWrappedObject)->py_q_clone());}
   const QString*  commitString(QInputMethodEvent* theWrappedObject) const;
   QInputMethodEvent*  operator_assign(QInputMethodEvent* theWrappedObject, const QInputMethodEvent&  other);
   const QString*  preeditString(QInputMethodEvent* theWrappedObject) const;
   int  replacementLength(QInputMethodEvent* theWrappedObject) const;
   int  replacementStart(QInputMethodEvent* theWrappedObject) const;
   void setCommitString(QInputMethodEvent* theWrappedObject, const QString&  commitString, int  replaceFrom = 0, int  replaceLength = 0);
};





class PythonQtShell_QInputMethodEvent__Attribute : public QInputMethodEvent::Attribute
{
public:
    PythonQtShell_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l):QInputMethodEvent::Attribute(typ, s, l),_wrapper(nullptr) {};
    PythonQtShell_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l, QVariant  val):QInputMethodEvent::Attribute(typ, s, l, val),_wrapper(nullptr) {};

   ~PythonQtShell_QInputMethodEvent__Attribute();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QInputMethodEvent__Attribute : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QInputMethodEvent::Attribute* new_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l);
QInputMethodEvent::Attribute* new_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l, QVariant  val);
void delete_QInputMethodEvent__Attribute(QInputMethodEvent::Attribute* obj) { delete obj; }
   bool  __ne__(QInputMethodEvent::Attribute* theWrappedObject, const QInputMethodEvent::Attribute&  rhs);
   bool  __eq__(QInputMethodEvent::Attribute* theWrappedObject, const QInputMethodEvent::Attribute&  rhs);
void py_set_length(QInputMethodEvent::Attribute* theWrappedObject, int  length){ theWrappedObject->length = length; }
int  py_get_length(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->length; }
void py_set_start(QInputMethodEvent::Attribute* theWrappedObject, int  start){ theWrappedObject->start = start; }
int  py_get_start(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->start; }
void py_set_type(QInputMethodEvent::Attribute* theWrappedObject, QInputMethodEvent::AttributeType  type){ theWrappedObject->type = type; }
QInputMethodEvent::AttributeType  py_get_type(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->type; }
void py_set_value(QInputMethodEvent::Attribute* theWrappedObject, QVariant  value){ theWrappedObject->value = value; }
QVariant  py_get_value(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->value; }
};





class PythonQtShell_QInputMethodQueryEvent : public QInputMethodQueryEvent
{
public:
    PythonQtShell_QInputMethodQueryEvent(Qt::InputMethodQueries  queries):QInputMethodQueryEvent(queries),_wrapper(nullptr) {};
    PythonQtShell_QInputMethodQueryEvent(const QInputMethodQueryEvent&  arg__1):QInputMethodQueryEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QInputMethodQueryEvent() override;

QInputMethodQueryEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputMethodQueryEvent : public QInputMethodQueryEvent
{ public:
inline QInputMethodQueryEvent&  promoted_operator_assign(const QInputMethodQueryEvent&  other) { return this->QInputMethodQueryEvent::operator=(other); }
inline QInputMethodQueryEvent*  py_q_clone() const { return QInputMethodQueryEvent::clone(); }
};

class PythonQtWrapper_QInputMethodQueryEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QInputMethodQueryEvent* new_QInputMethodQueryEvent(Qt::InputMethodQueries  queries);
QInputMethodQueryEvent* new_QInputMethodQueryEvent(const QInputMethodQueryEvent&  arg__1);
void delete_QInputMethodQueryEvent(QInputMethodQueryEvent* obj) { delete obj; }
   QInputMethodQueryEvent*  py_q_clone(QInputMethodQueryEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputMethodQueryEvent*)theWrappedObject)->py_q_clone());}
   QInputMethodQueryEvent*  operator_assign(QInputMethodQueryEvent* theWrappedObject, const QInputMethodQueryEvent&  other);
   Qt::InputMethodQueries  queries(QInputMethodQueryEvent* theWrappedObject) const;
   void setValue(QInputMethodQueryEvent* theWrappedObject, Qt::InputMethodQuery  query, const QVariant&  value);
   QVariant  value(QInputMethodQueryEvent* theWrappedObject, Qt::InputMethodQuery  query) const;
};





class PythonQtShell_QIntValidator : public QIntValidator
{
public:
    PythonQtShell_QIntValidator(QObject*  parent = nullptr):QIntValidator(parent),_wrapper(nullptr) {};
    PythonQtShell_QIntValidator(int  bottom, int  top, QObject*  parent = nullptr):QIntValidator(bottom, top, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QIntValidator() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fixup(QString&  input) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  arg__1, int&  arg__2) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIntValidator : public QIntValidator
{ public:
inline void py_q_fixup(QString&  input) const { QIntValidator::fixup(input); }
inline QValidator::State  py_q_validate(QString&  arg__1, int&  arg__2) const { return QIntValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QIntValidator* new_QIntValidator(QObject*  parent = nullptr);
QIntValidator* new_QIntValidator(int  bottom, int  top, QObject*  parent = nullptr);
void delete_QIntValidator(QIntValidator* obj) { delete obj; }
   int  bottom(QIntValidator* theWrappedObject) const;
   void py_q_fixup(QIntValidator* theWrappedObject, QString&  input) const{  (((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->py_q_fixup(input));}
   void setBottom(QIntValidator* theWrappedObject, int  arg__1);
   void setRange(QIntValidator* theWrappedObject, int  bottom, int  top);
   void setTop(QIntValidator* theWrappedObject, int  arg__1);
   int  top(QIntValidator* theWrappedObject) const;
   QValidator::State  py_q_validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const{  return (((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->py_q_validate(arg__1, arg__2));}
};





class PythonQtShell_QItemDelegate : public QItemDelegate
{
public:
    PythonQtShell_QItemDelegate(QObject*  parent = nullptr):QItemDelegate(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QItemDelegate() override;

void childEvent(QChildEvent*  event) override;
QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void customEvent(QEvent*  event) override;
void destroyEditor(QWidget*  editor, const QModelIndex&  index) const override;
void drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const override;
void drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const override;
void drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const override;
void drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const override;
bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
QList<int >  paintingRoles() const override;
void setEditorData(QWidget*  editor, const QModelIndex&  index) const override;
void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const override;
QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemDelegate : public QItemDelegate
{ public:
inline QPixmap  promoted_decoration(const QStyleOptionViewItem&  option, const QVariant&  variant) const { return this->decoration(option, variant); }
inline QRect  promoted_doCheck(const QStyleOptionViewItem&  option, const QRect&  bounding, const QVariant&  variant) const { return this->doCheck(option, bounding, variant); }
inline void promoted_drawBackground(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { this->drawBackground(painter, option, index); }
inline void promoted_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { this->drawCheck(painter, option, rect, state); }
inline void promoted_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { this->drawDecoration(painter, option, rect, pixmap); }
inline void promoted_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { this->drawDisplay(painter, option, rect, text); }
inline void promoted_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { this->drawFocus(painter, option, rect); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return this->editorEvent(event, model, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline QRect  promoted_rect(const QStyleOptionViewItem&  option, const QModelIndex&  index, int  role) const { return this->rect(option, index, role); }
static inline QPixmap  promoted_selectedPixmap(const QPixmap&  pixmap, const QPalette&  palette, bool  enabled) { return selectedPixmap(pixmap, palette, enabled); }
inline QStyleOptionViewItem  promoted_setOptions(const QModelIndex&  index, const QStyleOptionViewItem&  option) const { return this->setOptions(index, option); }
inline QRect  promoted_textRectangle(QPainter*  painter, const QRect&  rect, const QFont&  font, const QString&  text) const { return this->textRectangle(painter, rect, font, text); }
inline QWidget*  py_q_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::createEditor(parent, option, index); }
inline void py_q_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { QItemDelegate::drawCheck(painter, option, rect, state); }
inline void py_q_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { QItemDelegate::drawDecoration(painter, option, rect, pixmap); }
inline void py_q_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { QItemDelegate::drawDisplay(painter, option, rect, text); }
inline void py_q_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { QItemDelegate::drawFocus(painter, option, rect); }
inline bool  py_q_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QItemDelegate::editorEvent(event, model, option, index); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QItemDelegate::eventFilter(object, event); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::paint(painter, option, index); }
inline void py_q_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QItemDelegate::setEditorData(editor, index); }
inline void py_q_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QItemDelegate::setModelData(editor, model, index); }
inline QSize  py_q_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::sizeHint(option, index); }
inline void py_q_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QItemDelegate : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QItemDelegate* new_QItemDelegate(QObject*  parent = nullptr);
void delete_QItemDelegate(QItemDelegate* obj) { delete obj; }
   QWidget*  py_q_createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_createEditor(parent, option, index));}
   QPixmap  decoration(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QVariant&  variant) const;
   QRect  doCheck(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QRect&  bounding, const QVariant&  variant) const;
   void drawBackground(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
   void py_q_drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawCheck(painter, option, rect, state));}
   void drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
   void py_q_drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawDecoration(painter, option, rect, pixmap));}
   void drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
   void py_q_drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawDisplay(painter, option, rect, text));}
   void drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
   void py_q_drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawFocus(painter, option, rect));}
   bool  py_q_editorEvent(QItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_editorEvent(event, model, option, index));}
   bool  py_q_eventFilter(QItemDelegate* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_eventFilter(object, event));}
   bool  hasClipping(QItemDelegate* theWrappedObject) const;
   QItemEditorFactory*  itemEditorFactory(QItemDelegate* theWrappedObject) const;
   void py_q_paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_paint(painter, option, index));}
   QRect  rect(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index, int  role) const;
   QPixmap  static_QItemDelegate_selectedPixmap(const QPixmap&  pixmap, const QPalette&  palette, bool  enabled);
   void setClipping(QItemDelegate* theWrappedObject, bool  clip);
   void py_q_setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_setEditorData(editor, index));}
   void setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void py_q_setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_setModelData(editor, model, index));}
   QStyleOptionViewItem  setOptions(QItemDelegate* theWrappedObject, const QModelIndex&  index, const QStyleOptionViewItem&  option) const;
   QSize  py_q_sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_sizeHint(option, index));}
   QRect  textRectangle(QItemDelegate* theWrappedObject, QPainter*  painter, const QRect&  rect, const QFont&  font, const QString&  text) const;
   void py_q_updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_updateEditorGeometry(editor, option, index));}
};





class PythonQtShell_QItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    PythonQtShell_QItemEditorCreatorBase():QItemEditorCreatorBase(),_wrapper(nullptr) {};

   ~PythonQtShell_QItemEditorCreatorBase() override;

QWidget*  createWidget(QWidget*  parent) const override;
QByteArray  valuePropertyName() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemEditorCreatorBase : public QItemEditorCreatorBase
{ public:
inline QWidget*  py_q_createWidget(QWidget*  parent) const { return this->createWidget(parent); }
inline QByteArray  py_q_valuePropertyName() const { return this->valuePropertyName(); }
};

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QItemEditorCreatorBase* new_QItemEditorCreatorBase();
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; }
   QWidget*  createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const;
   QWidget*  py_q_createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const{  return (((PythonQtPublicPromoter_QItemEditorCreatorBase*)theWrappedObject)->py_q_createWidget(parent));}
   QByteArray  valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const;
   QByteArray  py_q_valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const{  return (((PythonQtPublicPromoter_QItemEditorCreatorBase*)theWrappedObject)->py_q_valuePropertyName());}
};





class PythonQtShell_QItemEditorFactory : public QItemEditorFactory
{
public:
    PythonQtShell_QItemEditorFactory():QItemEditorFactory(),_wrapper(nullptr) {};

   ~PythonQtShell_QItemEditorFactory() override;

QWidget*  createEditor(int  userType, QWidget*  parent) const override;
QByteArray  valuePropertyName(int  userType) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemEditorFactory : public QItemEditorFactory
{ public:
inline QWidget*  py_q_createEditor(int  userType, QWidget*  parent) const { return QItemEditorFactory::createEditor(userType, parent); }
inline QByteArray  py_q_valuePropertyName(int  userType) const { return QItemEditorFactory::valuePropertyName(userType); }
};

class PythonQtWrapper_QItemEditorFactory : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QItemEditorFactory* new_QItemEditorFactory();
void delete_QItemEditorFactory(QItemEditorFactory* obj) { delete obj; }
   QWidget*  createEditor(QItemEditorFactory* theWrappedObject, int  userType, QWidget*  parent) const;
   QWidget*  py_q_createEditor(QItemEditorFactory* theWrappedObject, int  userType, QWidget*  parent) const{  return (((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->py_q_createEditor(userType, parent));}
   const QItemEditorFactory*  static_QItemEditorFactory_defaultFactory();
   void registerEditor(QItemEditorFactory* theWrappedObject, int  userType, QItemEditorCreatorBase*  creator);
   void static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory);
   QByteArray  valuePropertyName(QItemEditorFactory* theWrappedObject, int  userType) const;
   QByteArray  py_q_valuePropertyName(QItemEditorFactory* theWrappedObject, int  userType) const{  return (((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->py_q_valuePropertyName(userType));}
};





class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
void delete_QItemSelection(QItemSelection* obj) { delete obj; }
   void append(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l);
   const QItemSelectionRange  at(QItemSelection* theWrappedObject, qsizetype  i) const;
   const QItemSelectionRange  back(QItemSelection* theWrappedObject) const;
   qsizetype  capacity(QItemSelection* theWrappedObject) const;
   void clear(QItemSelection* theWrappedObject);
   const QItemSelectionRange*  constFirst(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange*  constLast(QItemSelection* theWrappedObject) const;
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   qsizetype  count(QItemSelection* theWrappedObject) const;
   bool  empty(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange*  first(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  first(QItemSelection* theWrappedObject, qsizetype  n) const;
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QList<QItemSelectionRange >&  vector);
   const QItemSelectionRange  front(QItemSelection* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   bool  isSharedWith(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  other) const;
   const QItemSelectionRange*  last(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  last(QItemSelection* theWrappedObject, qsizetype  n) const;
   qsizetype  length(QItemSelection* theWrappedObject) const;
   qsizetype  static_QItemSelection_maxSize();
   qsizetype  max_size(QItemSelection* theWrappedObject) const;
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, qsizetype  pos, qsizetype  len = -1) const;
   void move(QItemSelection* theWrappedObject, qsizetype  from, qsizetype  to);
   QItemSelectionRange  operator_subscript(QItemSelection* theWrappedObject, qsizetype  i);
   const QItemSelectionRange  operator_subscript(QItemSelection* theWrappedObject, qsizetype  i) const;
   void pop_back(QItemSelection* theWrappedObject);
   void pop_front(QItemSelection* theWrappedObject);
   void remove(QItemSelection* theWrappedObject, qsizetype  i, qsizetype  n = 1);
   void removeAt(QItemSelection* theWrappedObject, qsizetype  i);
   void removeFirst(QItemSelection* theWrappedObject);
   void removeLast(QItemSelection* theWrappedObject);
   void reserve(QItemSelection* theWrappedObject, qsizetype  size);
   void resize(QItemSelection* theWrappedObject, qsizetype  size);
   void resizeForOverwrite(QItemSelection* theWrappedObject, qsizetype  size);
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void shrink_to_fit(QItemSelection* theWrappedObject);
   qsizetype  size(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  sliced(QItemSelection* theWrappedObject, qsizetype  pos) const;
   QList<QItemSelectionRange >  sliced(QItemSelection* theWrappedObject, qsizetype  pos, qsizetype  n) const;
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   void squeeze(QItemSelection* theWrappedObject);
   void swap(QItemSelection* theWrappedObject, QList<QItemSelectionRange >&  other);
   void swapItemsAt(QItemSelection* theWrappedObject, qsizetype  i, qsizetype  j);
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, qsizetype  i);
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
   QList<QItemSelectionRange >  toList(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  value(QItemSelection* theWrappedObject, qsizetype  i) const;
    bool __nonzero__(QItemSelection* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QItemSelectionModel : public QItemSelectionModel
{
public:
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model = nullptr):QItemSelectionModel(model),_wrapper(nullptr) {};
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent):QItemSelectionModel(model, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QItemSelectionModel() override;

void childEvent(QChildEvent*  event) override;
void clear() override;
void clearCurrentIndex() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void reset() override;
void select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command) override;
void select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) override;
void setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemSelectionModel : public QItemSelectionModel
{ public:
inline void promoted_emitSelectionChanged(const QItemSelection&  newSelection, const QItemSelection&  oldSelection) { this->emitSelectionChanged(newSelection, oldSelection); }
inline void py_q_clear() { QItemSelectionModel::clear(); }
inline void py_q_clearCurrentIndex() { QItemSelectionModel::clearCurrentIndex(); }
inline void py_q_reset() { QItemSelectionModel::reset(); }
inline void py_q_select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(selection, command); }
inline void py_q_select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(index, command); }
inline void py_q_setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::setCurrentIndex(index, command); }
};

class PythonQtWrapper_QItemSelectionModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionFlag )
Q_FLAGS(SelectionFlags )
enum SelectionFlag{
  NoUpdate = QItemSelectionModel::NoUpdate,   Clear = QItemSelectionModel::Clear,   Select = QItemSelectionModel::Select,   Deselect = QItemSelectionModel::Deselect,   Toggle = QItemSelectionModel::Toggle,   Current = QItemSelectionModel::Current,   Rows = QItemSelectionModel::Rows,   Columns = QItemSelectionModel::Columns,   SelectCurrent = QItemSelectionModel::SelectCurrent,   ToggleCurrent = QItemSelectionModel::ToggleCurrent,   ClearAndSelect = QItemSelectionModel::ClearAndSelect};
Q_DECLARE_FLAGS(SelectionFlags, SelectionFlag)
public Q_SLOTS:
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model = nullptr);
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent);
void delete_QItemSelectionModel(QItemSelectionModel* obj) { delete obj; }
   void py_q_clear(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_clear());}
   void py_q_clearCurrentIndex(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_clearCurrentIndex());}
   bool  columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  currentIndex(QItemSelectionModel* theWrappedObject) const;
   void emitSelectionChanged(QItemSelectionModel* theWrappedObject, const QItemSelection&  newSelection, const QItemSelection&  oldSelection);
   bool  hasSelection(QItemSelectionModel* theWrappedObject) const;
   bool  isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex()) const;
   bool  isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex()) const;
   bool  isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject);
   const QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject) const;
   void py_q_reset(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_reset());}
   bool  rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex()) const;
   void py_q_select(QItemSelectionModel* theWrappedObject, const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_select(selection, command));}
   void py_q_select(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_select(index, command));}
   QList<QModelIndex >  selectedColumns(QItemSelectionModel* theWrappedObject, int  row = 0) const;
   QList<QModelIndex >  selectedIndexes(QItemSelectionModel* theWrappedObject) const;
   QList<QModelIndex >  selectedRows(QItemSelectionModel* theWrappedObject, int  column = 0) const;
   const QItemSelection  selection(QItemSelectionModel* theWrappedObject) const;
   void py_q_setCurrentIndex(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_setCurrentIndex(index, command));}
   void setModel(QItemSelectionModel* theWrappedObject, QAbstractItemModel*  model);
};





class PythonQtWrapper_QItemSelectionRange : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QItemSelectionRange* new_QItemSelectionRange();
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  index);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  topL, const QModelIndex&  bottomR);
QItemSelectionRange* new_QItemSelectionRange(const QItemSelectionRange& other) {
QItemSelectionRange* a = new QItemSelectionRange();
*((QItemSelectionRange*)a) = other;
return a; }
void delete_QItemSelectionRange(QItemSelectionRange* obj) { delete obj; }
   int  bottom(QItemSelectionRange* theWrappedObject) const;
   const QPersistentModelIndex*  bottomRight(QItemSelectionRange* theWrappedObject) const;
   bool  contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const;
   bool  contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const;
   int  height(QItemSelectionRange* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelectionRange* theWrappedObject) const;
   QItemSelectionRange  intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  isEmpty(QItemSelectionRange* theWrappedObject) const;
   bool  isValid(QItemSelectionRange* theWrappedObject) const;
   int  left(QItemSelectionRange* theWrappedObject) const;
   const QAbstractItemModel*  model(QItemSelectionRange* theWrappedObject) const;
   bool  __ne__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  rhs);
   bool  __eq__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  rhs);
   QModelIndex  parent(QItemSelectionRange* theWrappedObject) const;
   int  right(QItemSelectionRange* theWrappedObject) const;
   void swap(QItemSelectionRange* theWrappedObject, QItemSelectionRange&  other);
   int  top(QItemSelectionRange* theWrappedObject) const;
   const QPersistentModelIndex*  topLeft(QItemSelectionRange* theWrappedObject) const;
   int  width(QItemSelectionRange* theWrappedObject) const;
    QString py_toString(QItemSelectionRange*);
    bool __nonzero__(QItemSelectionRange* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QKeyCombination : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QKeyCombination* new_QKeyCombination(Qt::KeyboardModifiers  modifiers, Qt::Key  key = Qt::Key_unknown);
QKeyCombination* new_QKeyCombination(Qt::Key  key = Qt::Key_unknown);
void delete_QKeyCombination(QKeyCombination* obj) { delete obj; }
   QKeyCombination  static_QKeyCombination_fromCombined(int  combined);
   Qt::Key  key(QKeyCombination* theWrappedObject) const;
   Qt::KeyboardModifiers  keyboardModifiers(QKeyCombination* theWrappedObject) const;
   int  operator_cast_int(QKeyCombination* theWrappedObject) const;
   bool  __ne__(QKeyCombination* theWrappedObject, const QKeyCombination&  rhs);
   void writeTo(QKeyCombination* theWrappedObject, QDataStream&  s);
   bool  __eq__(QKeyCombination* theWrappedObject, const QKeyCombination&  rhs);
   void readFrom(QKeyCombination* theWrappedObject, QDataStream&  s);
   int  toCombined(QKeyCombination* theWrappedObject) const;
    QString py_toString(QKeyCombination*);
};





class PythonQtShell_QKeyEvent : public QKeyEvent
{
public:
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, unsigned short  count = 1):QKeyEvent(type, key, modifiers, text, autorep, count),_wrapper(nullptr) {};
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, unsigned short  count = 1, const QInputDevice*  device = QInputDevice::primaryKeyboard()):QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count, device),_wrapper(nullptr) {};
    PythonQtShell_QKeyEvent(const QKeyEvent&  arg__1):QKeyEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QKeyEvent() override;

QKeyEvent*  clone() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QKeyEvent : public QKeyEvent
{ public:
inline QKeyEvent&  promoted_operator_assign(const QKeyEvent&  other) { return this->QKeyEvent::operator=(other); }
inline QKeyEvent*  py_q_clone() const { return QKeyEvent::clone(); }
};

class PythonQtWrapper_QKeyEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, unsigned short  count = 1);
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, unsigned short  count = 1, const QInputDevice*  device = QInputDevice::primaryKeyboard());
QKeyEvent* new_QKeyEvent(const QKeyEvent&  arg__1);
void delete_QKeyEvent(QKeyEvent* obj) { delete obj; }
   QKeyEvent*  py_q_clone(QKeyEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QKeyEvent*)theWrappedObject)->py_q_clone());}
   int  count(QKeyEvent* theWrappedObject) const;
   bool  isAutoRepeat(QKeyEvent* theWrappedObject) const;
   int  key(QKeyEvent* theWrappedObject) const;
   QKeyCombination  keyCombination(QKeyEvent* theWrappedObject) const;
   bool  matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const;
   Qt::KeyboardModifiers  modifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeModifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeScanCode(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeVirtualKey(QKeyEvent* theWrappedObject) const;
   QKeyEvent*  operator_assign(QKeyEvent* theWrappedObject, const QKeyEvent&  other);
   QString  text(QKeyEvent* theWrappedObject) const;
};


