#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
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
#include <QtWidgets/qkeysequenceedit.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qlayoutitem.h>
#include <QtWidgets/qlcdnumber.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qlistview.h>
#include <QtWidgets/qlistwidget.h>
#include <QtWidgets/qmainwindow.h>
#include <QtWidgets/qmdiarea.h>
#include <QtWidgets/qmdisubwindow.h>
#include <QtWidgets/qmenu.h>
#include <QtWidgets/qmenubar.h>
#include <QtWidgets/qmessagebox.h>
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
#include <qoffscreensurface.h>
#include <qopenglbuffer.h>
#include <qopenglcontext.h>
#include <qopenglframebufferobject.h>
#include <qopenglpaintdevice.h>
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



class PythonQtShell_QKeySequenceEdit : public QKeySequenceEdit
{
public:
    PythonQtShell_QKeySequenceEdit(QWidget*  parent = nullptr):QKeySequenceEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QKeySequenceEdit(const QKeySequence&  keySequence, QWidget*  parent = nullptr):QKeySequenceEdit(keySequence, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QKeySequenceEdit() override;

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
void focusOutEvent(QFocusEvent*  arg__1) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  arg__1) override;
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
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QKeySequenceEdit : public QKeySequenceEdit
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QKeySequenceEdit::event(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QKeySequenceEdit::focusOutEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QKeySequenceEdit::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QKeySequenceEdit::keyReleaseEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QKeySequenceEdit::timerEvent(arg__1); }
};

class PythonQtWrapper_QKeySequenceEdit : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QKeySequenceEdit* new_QKeySequenceEdit(QWidget*  parent = nullptr);
QKeySequenceEdit* new_QKeySequenceEdit(const QKeySequence&  keySequence, QWidget*  parent = nullptr);
void delete_QKeySequenceEdit(QKeySequenceEdit* obj) { delete obj; }
   bool  py_q_event(QKeySequenceEdit* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_event(arg__1));}
   QList<QKeyCombination >  finishingKeyCombinations(QKeySequenceEdit* theWrappedObject) const;
   void py_q_focusOutEvent(QKeySequenceEdit* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   bool  isClearButtonEnabled(QKeySequenceEdit* theWrappedObject) const;
   void py_q_keyPressEvent(QKeySequenceEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_keyReleaseEvent(QKeySequenceEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   QKeySequence  keySequence(QKeySequenceEdit* theWrappedObject) const;
   qsizetype  maximumSequenceLength(QKeySequenceEdit* theWrappedObject) const;
   void setClearButtonEnabled(QKeySequenceEdit* theWrappedObject, bool  enable);
   void setFinishingKeyCombinations(QKeySequenceEdit* theWrappedObject, const QList<QKeyCombination >&  finishingKeyCombinations);
   void py_q_timerEvent(QKeySequenceEdit* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_timerEvent(arg__1));}
};





class PythonQtShell_QLCDNumber : public QLCDNumber
{
public:
    PythonQtShell_QLCDNumber(QWidget*  parent = nullptr):QLCDNumber(parent),_wrapper(nullptr) {};
    PythonQtShell_QLCDNumber(uint  numDigits, QWidget*  parent = nullptr):QLCDNumber(numDigits, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QLCDNumber() override;

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

class PythonQtPublicPromoter_QLCDNumber : public QLCDNumber
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QLCDNumber::event(e); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QLCDNumber::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QLCDNumber::sizeHint(); }
};

class PythonQtWrapper_QLCDNumber : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QLCDNumber* new_QLCDNumber(QWidget*  parent = nullptr);
QLCDNumber* new_QLCDNumber(uint  numDigits, QWidget*  parent = nullptr);
void delete_QLCDNumber(QLCDNumber* obj) { delete obj; }
   bool  checkOverflow(QLCDNumber* theWrappedObject, double  num) const;
   bool  checkOverflow(QLCDNumber* theWrappedObject, int  num) const;
   int  digitCount(QLCDNumber* theWrappedObject) const;
   bool  py_q_event(QLCDNumber* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_event(e));}
   int  intValue(QLCDNumber* theWrappedObject) const;
   QLCDNumber::Mode  mode(QLCDNumber* theWrappedObject) const;
   void py_q_paintEvent(QLCDNumber* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QLCDNumber::SegmentStyle  segmentStyle(QLCDNumber* theWrappedObject) const;
   void setDigitCount(QLCDNumber* theWrappedObject, int  nDigits);
   void setMode(QLCDNumber* theWrappedObject, QLCDNumber::Mode  arg__1);
   void setSegmentStyle(QLCDNumber* theWrappedObject, QLCDNumber::SegmentStyle  arg__1);
   QSize  py_q_sizeHint(QLCDNumber* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_sizeHint());}
   bool  smallDecimalPoint(QLCDNumber* theWrappedObject) const;
   double  value(QLCDNumber* theWrappedObject) const;
};





class PythonQtShell_QLabel : public QLabel
{
public:
    PythonQtShell_QLabel(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QLabel(parent, f),_wrapper(nullptr) {};
    PythonQtShell_QLabel(const QString&  text, QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QLabel(text, parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QLabel() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  ev) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  ev) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  ev) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
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

class PythonQtPublicPromoter_QLabel : public QLabel
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  ev) { this->contextMenuEvent(ev); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_focusInEvent(QFocusEvent*  ev) { this->focusInEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { this->focusOutEvent(ev); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { this->keyPressEvent(ev); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { this->mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { this->mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { this->mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QLabel::changeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  ev) { QLabel::contextMenuEvent(ev); }
inline bool  py_q_event(QEvent*  e) { return QLabel::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  ev) { QLabel::focusInEvent(ev); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QLabel::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  ev) { QLabel::focusOutEvent(ev); }
inline int  py_q_heightForWidth(int  arg__1) const { return QLabel::heightForWidth(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  ev) { QLabel::keyPressEvent(ev); }
inline QSize  py_q_minimumSizeHint() const { return QLabel::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  ev) { QLabel::mouseMoveEvent(ev); }
inline void py_q_mousePressEvent(QMouseEvent*  ev) { QLabel::mousePressEvent(ev); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  ev) { QLabel::mouseReleaseEvent(ev); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QLabel::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QLabel::sizeHint(); }
};

class PythonQtWrapper_QLabel : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QLabel* new_QLabel(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
QLabel* new_QLabel(const QString&  text, QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QLabel(QLabel* obj) { delete obj; }
   Qt::Alignment  alignment(QLabel* theWrappedObject) const;
   QWidget*  buddy(QLabel* theWrappedObject) const;
   void py_q_changeEvent(QLabel* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void py_q_contextMenuEvent(QLabel* theWrappedObject, QContextMenuEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_contextMenuEvent(ev));}
   bool  py_q_event(QLabel* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_event(e));}
   void py_q_focusInEvent(QLabel* theWrappedObject, QFocusEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusInEvent(ev));}
   bool  py_q_focusNextPrevChild(QLabel* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QLabel* theWrappedObject, QFocusEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusOutEvent(ev));}
   bool  hasScaledContents(QLabel* theWrappedObject) const;
   bool  hasSelectedText(QLabel* theWrappedObject) const;
   int  py_q_heightForWidth(QLabel* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   int  indent(QLabel* theWrappedObject) const;
   void py_q_keyPressEvent(QLabel* theWrappedObject, QKeyEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_keyPressEvent(ev));}
   int  margin(QLabel* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QLabel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mouseMoveEvent(ev));}
   void py_q_mousePressEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mousePressEvent(ev));}
   void py_q_mouseReleaseEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mouseReleaseEvent(ev));}
   QMovie*  movie(QLabel* theWrappedObject) const;
   bool  openExternalLinks(QLabel* theWrappedObject) const;
   void py_q_paintEvent(QLabel* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QPicture  picture(QLabel* theWrappedObject) const;
   QPixmap  pixmap(QLabel* theWrappedObject) const;
   QString  selectedText(QLabel* theWrappedObject) const;
   int  selectionStart(QLabel* theWrappedObject) const;
   void setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1);
   void setBuddy(QLabel* theWrappedObject, QWidget*  arg__1);
   void setIndent(QLabel* theWrappedObject, int  arg__1);
   void setMargin(QLabel* theWrappedObject, int  arg__1);
   void setOpenExternalLinks(QLabel* theWrappedObject, bool  open);
   void setScaledContents(QLabel* theWrappedObject, bool  arg__1);
   void setSelection(QLabel* theWrappedObject, int  arg__1, int  arg__2);
   void setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1);
   void setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setWordWrap(QLabel* theWrappedObject, bool  on);
   QSize  py_q_sizeHint(QLabel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_sizeHint());}
   QString  text(QLabel* theWrappedObject) const;
   Qt::TextFormat  textFormat(QLabel* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QLabel* theWrappedObject) const;
   bool  wordWrap(QLabel* theWrappedObject) const;
};





class PythonQtShell_QLayout : public QLayout
{
public:
    PythonQtShell_QLayout(QWidget*  parent = nullptr):QLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QLayout() override;

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
void setSpacing(int  arg__1) override;
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

class PythonQtPublicPromoter_QLayout : public QLayout
{ public:
inline void promoted_addChildLayout(QLayout*  l) { this->addChildLayout(l); }
inline void promoted_addChildWidget(QWidget*  w) { this->addChildWidget(w); }
inline bool  promoted_adoptLayout(QLayout*  layout) { return this->adoptLayout(layout); }
inline QRect  promoted_alignmentRect(const QRect&  arg__1) const { return this->alignmentRect(arg__1); }
inline void promoted_childEvent(QChildEvent*  e) { this->childEvent(e); }
inline void promoted_widgetEvent(QEvent*  arg__1) { this->widgetEvent(arg__1); }
inline void py_q_addItem(QLayoutItem*  arg__1) { this->addItem(arg__1); }
inline void py_q_childEvent(QChildEvent*  e) { QLayout::childEvent(e); }
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QLayout::controlTypes(); }
inline int  py_q_count() const { return this->count(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QLayout::expandingDirections(); }
inline QRect  py_q_geometry() const { return QLayout::geometry(); }
inline int  py_q_indexOf(const QLayoutItem*  arg__1) const { return QLayout::indexOf(arg__1); }
inline int  py_q_indexOf(const QWidget*  arg__1) const { return QLayout::indexOf(arg__1); }
inline void py_q_invalidate() { QLayout::invalidate(); }
inline bool  py_q_isEmpty() const { return QLayout::isEmpty(); }
inline QLayoutItem*  py_q_itemAt(int  index) const { return this->itemAt(index); }
inline QLayout*  py_q_layout() { return QLayout::layout(); }
inline QSize  py_q_maximumSize() const { return QLayout::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QLayout::minimumSize(); }
inline QLayoutItem*  py_q_replaceWidget(QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively) { return QLayout::replaceWidget(from, to, options); }
inline void py_q_setGeometry(const QRect&  arg__1) { QLayout::setGeometry(arg__1); }
inline void py_q_setSpacing(int  arg__1) { QLayout::setSpacing(arg__1); }
inline int  py_q_spacing() const { return QLayout::spacing(); }
inline QLayoutItem*  py_q_takeAt(int  index) { return this->takeAt(index); }
};

class PythonQtWrapper_QLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QLayout* new_QLayout(QWidget*  parent = nullptr);
void delete_QLayout(QLayout* obj) { delete obj; }
   bool  activate(QLayout* theWrappedObject);
   void addChildLayout(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  l);
   void addChildWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   void addItem(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__1);
   void py_q_addItem(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__1){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_addItem(arg__1));}
   void addWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   bool  adoptLayout(QLayout* theWrappedObject, QLayout*  layout);
   QRect  alignmentRect(QLayout* theWrappedObject, const QRect&  arg__1) const;
   void py_q_childEvent(QLayout* theWrappedObject, QChildEvent*  e){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_childEvent(e));}
   QSize  static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s);
   QMargins  contentsMargins(QLayout* theWrappedObject) const;
   QRect  contentsRect(QLayout* theWrappedObject) const;
   QSizePolicy::ControlTypes  py_q_controlTypes(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_controlTypes());}
   int  count(QLayout* theWrappedObject) const;
   int  py_q_count(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_count());}
   Qt::Orientations  py_q_expandingDirections(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_geometry());}
   QLayout::SizeConstraint  horizontalSizeConstraint(QLayout* theWrappedObject) const;
   int  indexOf(QLayout* theWrappedObject, const QLayoutItem*  arg__1) const;
   int  py_q_indexOf(QLayout* theWrappedObject, const QLayoutItem*  arg__1) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_indexOf(arg__1));}
   int  indexOf(QLayout* theWrappedObject, const QWidget*  arg__1) const;
   int  py_q_indexOf(QLayout* theWrappedObject, const QWidget*  arg__1) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_indexOf(arg__1));}
   void py_q_invalidate(QLayout* theWrappedObject){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_invalidate());}
   bool  py_q_isEmpty(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_isEmpty());}
   bool  isEnabled(QLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QLayout* theWrappedObject, int  index) const;
   QLayoutItem*  py_q_itemAt(QLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_itemAt(index));}
   QLayout*  py_q_layout(QLayout* theWrappedObject){  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_layout());}
   QSize  py_q_maximumSize(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_maximumSize());}
   QWidget*  menuBar(QLayout* theWrappedObject) const;
   QSize  py_q_minimumSize(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_minimumSize());}
   QWidget*  parentWidget(QLayout* theWrappedObject) const;
   void removeItem(QLayout* theWrappedObject, PythonQtPassOwnershipToPython<QLayoutItem* >  arg__1);
   void removeWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToPython<QWidget* >  w);
   QLayoutItem*  replaceWidget(QLayout* theWrappedObject, QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively);
   QLayoutItem*  py_q_replaceWidget(QLayout* theWrappedObject, QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively){  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_replaceWidget(from, to, options));}
   bool  setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment);
   bool  setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment);
   void setContentsMargins(QLayout* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setEnabled(QLayout* theWrappedObject, bool  arg__1);
   void py_q_setGeometry(QLayout* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_setGeometry(arg__1));}
   void setHorizontalSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  constraint);
   void setMenuBar(QLayout* theWrappedObject, QWidget*  w);
   void setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  constraint);
   void setSizeConstraints(QLayout* theWrappedObject, QLayout::SizeConstraint  horizontal, QLayout::SizeConstraint  vertical);
   void setSpacing(QLayout* theWrappedObject, int  arg__1);
   void py_q_setSpacing(QLayout* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_setSpacing(arg__1));}
   void setVerticalSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  constraint);
   QLayout::SizeConstraint  sizeConstraint(QLayout* theWrappedObject) const;
   int  spacing(QLayout* theWrappedObject) const;
   int  py_q_spacing(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_spacing());}
   PythonQtPassOwnershipToPython<QLayoutItem*  > takeAt(QLayout* theWrappedObject, int  index);
   PythonQtPassOwnershipToPython<QLayoutItem*  > py_q_takeAt(QLayout* theWrappedObject, int  index){  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_takeAt(index));}
   int  totalHeightForWidth(QLayout* theWrappedObject, int  w) const;
   QSize  totalMaximumSize(QLayout* theWrappedObject) const;
   int  totalMinimumHeightForWidth(QLayout* theWrappedObject, int  w) const;
   QSize  totalMinimumSize(QLayout* theWrappedObject) const;
   QSize  totalSizeHint(QLayout* theWrappedObject) const;
   void unsetContentsMargins(QLayout* theWrappedObject);
   void update(QLayout* theWrappedObject);
   QLayout::SizeConstraint  verticalSizeConstraint(QLayout* theWrappedObject) const;
   void widgetEvent(QLayout* theWrappedObject, QEvent*  arg__1);
    bool __nonzero__(QLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QLayoutItem : public QLayoutItem
{
public:
    PythonQtShell_QLayoutItem(Qt::Alignment  alignment = Qt::Alignment()):QLayoutItem(alignment),_wrapper(nullptr) {};

   ~PythonQtShell_QLayoutItem() override;

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

class PythonQtPublicPromoter_QLayoutItem : public QLayoutItem
{ public:
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QLayoutItem::controlTypes(); }
inline Qt::Orientations  py_q_expandingDirections() const { return this->expandingDirections(); }
inline QRect  py_q_geometry() const { return this->geometry(); }
inline bool  py_q_hasHeightForWidth() const { return QLayoutItem::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QLayoutItem::heightForWidth(arg__1); }
inline void py_q_invalidate() { QLayoutItem::invalidate(); }
inline bool  py_q_isEmpty() const { return this->isEmpty(); }
inline QLayout*  py_q_layout() { return QLayoutItem::layout(); }
inline QSize  py_q_maximumSize() const { return this->maximumSize(); }
inline int  py_q_minimumHeightForWidth(int  arg__1) const { return QLayoutItem::minimumHeightForWidth(arg__1); }
inline QSize  py_q_minimumSize() const { return this->minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { this->setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return this->sizeHint(); }
inline QSpacerItem*  py_q_spacerItem() { return QLayoutItem::spacerItem(); }
inline QWidget*  py_q_widget() const { return QLayoutItem::widget(); }
};

class PythonQtWrapper_QLayoutItem : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QLayoutItem* new_QLayoutItem(Qt::Alignment  alignment = Qt::Alignment());
void delete_QLayoutItem(QLayoutItem* obj) { delete obj; }
   Qt::Alignment  alignment(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  controlTypes(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  py_q_controlTypes(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_controlTypes());}
   Qt::Orientations  expandingDirections(QLayoutItem* theWrappedObject) const;
   Qt::Orientations  py_q_expandingDirections(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  geometry(QLayoutItem* theWrappedObject) const;
   QRect  py_q_geometry(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_geometry());}
   bool  hasHeightForWidth(QLayoutItem* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   int  py_q_heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void invalidate(QLayoutItem* theWrappedObject);
   void py_q_invalidate(QLayoutItem* theWrappedObject){  (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_invalidate());}
   bool  isEmpty(QLayoutItem* theWrappedObject) const;
   bool  py_q_isEmpty(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_isEmpty());}
   QLayout*  layout(QLayoutItem* theWrappedObject);
   QLayout*  py_q_layout(QLayoutItem* theWrappedObject){  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_layout());}
   QSize  maximumSize(QLayoutItem* theWrappedObject) const;
   QSize  py_q_maximumSize(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_maximumSize());}
   int  minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   int  py_q_minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_minimumHeightForWidth(arg__1));}
   QSize  minimumSize(QLayoutItem* theWrappedObject) const;
   QSize  py_q_minimumSize(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_minimumSize());}
   void setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a);
   void setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1);
   void py_q_setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  sizeHint(QLayoutItem* theWrappedObject) const;
   QSize  py_q_sizeHint(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_sizeHint());}
   QSpacerItem*  spacerItem(QLayoutItem* theWrappedObject);
   QSpacerItem*  py_q_spacerItem(QLayoutItem* theWrappedObject){  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_spacerItem());}
   QWidget*  widget(QLayoutItem* theWrappedObject) const;
   QWidget*  py_q_widget(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_widget());}
    bool __nonzero__(QLayoutItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QLineEdit : public QLineEdit
{
public:
    PythonQtShell_QLineEdit(QWidget*  parent = nullptr):QLineEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QLineEdit(const QString&  arg__1, QWidget*  parent = nullptr):QLineEdit(arg__1, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QLineEdit() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  arg__1) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  arg__1) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  arg__1) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  arg__1) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  arg__1) override;
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
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QLineEdit : public QLineEdit
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline QRect  promoted_cursorRect() const { return this->cursorRect(); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { this->dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { this->dropEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionFrame*  option) const { this->initStyleOption(option); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { this->mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QLineEdit::changeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QLineEdit::contextMenuEvent(arg__1); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  arg__1) { QLineEdit::dragEnterEvent(arg__1); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QLineEdit::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QLineEdit::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  arg__1) { QLineEdit::dropEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QLineEdit::event(arg__1); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QLineEdit::focusInEvent(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QLineEdit::focusOutEvent(arg__1); }
inline void py_q_initStyleOption(QStyleOptionFrame*  option) const { QLineEdit::initStyleOption(option); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QLineEdit::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QLineEdit::inputMethodQuery(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QLineEdit::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QLineEdit::keyReleaseEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QLineEdit::minimumSizeHint(); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QLineEdit::mouseDoubleClickEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QLineEdit::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QLineEdit::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QLineEdit::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QLineEdit::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QLineEdit::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QLineEdit::timerEvent(arg__1); }
};

class PythonQtWrapper_QLineEdit : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QLineEdit* new_QLineEdit(QWidget*  parent = nullptr);
QLineEdit* new_QLineEdit(const QString&  arg__1, QWidget*  parent = nullptr);
void delete_QLineEdit(QLineEdit* obj) { delete obj; }
   void addAction(QLineEdit* theWrappedObject, QAction*  action, QLineEdit::ActionPosition  position);
   QAction*  addAction(QLineEdit* theWrappedObject, const QIcon&  icon, QLineEdit::ActionPosition  position);
   Qt::Alignment  alignment(QLineEdit* theWrappedObject) const;
   void backspace(QLineEdit* theWrappedObject);
   void py_q_changeEvent(QLineEdit* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_changeEvent(arg__1));}
   QCompleter*  completer(QLineEdit* theWrappedObject) const;
   void py_q_contextMenuEvent(QLineEdit* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   QMenu*  createStandardContextMenu(QLineEdit* theWrappedObject);
   void cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   Qt::CursorMoveStyle  cursorMoveStyle(QLineEdit* theWrappedObject) const;
   int  cursorPosition(QLineEdit* theWrappedObject) const;
   int  cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos);
   QRect  cursorRect(QLineEdit* theWrappedObject) const;
   void cursorWordBackward(QLineEdit* theWrappedObject, bool  mark);
   void cursorWordForward(QLineEdit* theWrappedObject, bool  mark);
   void del(QLineEdit* theWrappedObject);
   void deselect(QLineEdit* theWrappedObject);
   QString  displayText(QLineEdit* theWrappedObject) const;
   bool  dragEnabled(QLineEdit* theWrappedObject) const;
   void py_q_dragEnterEvent(QLineEdit* theWrappedObject, QDragEnterEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_dragEnterEvent(arg__1));}
   void py_q_dragLeaveEvent(QLineEdit* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QLineEdit* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QLineEdit* theWrappedObject, QDropEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_dropEvent(arg__1));}
   QLineEdit::EchoMode  echoMode(QLineEdit* theWrappedObject) const;
   void end(QLineEdit* theWrappedObject, bool  mark);
   bool  py_q_event(QLineEdit* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_event(arg__1));}
   void py_q_focusInEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   void py_q_focusOutEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   bool  hasAcceptableInput(QLineEdit* theWrappedObject) const;
   bool  hasFrame(QLineEdit* theWrappedObject) const;
   bool  hasSelectedText(QLineEdit* theWrappedObject) const;
   void home(QLineEdit* theWrappedObject, bool  mark);
   void initStyleOption(QLineEdit* theWrappedObject, QStyleOptionFrame*  option) const;
   void py_q_initStyleOption(QLineEdit* theWrappedObject, QStyleOptionFrame*  option) const{  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_initStyleOption(option));}
   QString  inputMask(QLineEdit* theWrappedObject) const;
   void py_q_inputMethodEvent(QLineEdit* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  py_q_inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const{  return (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_inputMethodQuery(arg__1));}
   QVariant  inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  property, QVariant  argument) const;
   void insert(QLineEdit* theWrappedObject, const QString&  arg__1);
   bool  isClearButtonEnabled(QLineEdit* theWrappedObject) const;
   bool  isModified(QLineEdit* theWrappedObject) const;
   bool  isReadOnly(QLineEdit* theWrappedObject) const;
   bool  isRedoAvailable(QLineEdit* theWrappedObject) const;
   bool  isUndoAvailable(QLineEdit* theWrappedObject) const;
   void py_q_keyPressEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_keyReleaseEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   int  maxLength(QLineEdit* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QLineEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseDoubleClickEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_mouseDoubleClickEvent(arg__1));}
   void py_q_mouseMoveEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QLineEdit* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QString  placeholderText(QLineEdit* theWrappedObject) const;
   QString  selectedText(QLineEdit* theWrappedObject) const;
   int  selectionEnd(QLineEdit* theWrappedObject) const;
   int  selectionLength(QLineEdit* theWrappedObject) const;
   int  selectionStart(QLineEdit* theWrappedObject) const;
   void setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag);
   void setClearButtonEnabled(QLineEdit* theWrappedObject, bool  enable);
   void setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer);
   void setCursorMoveStyle(QLineEdit* theWrappedObject, Qt::CursorMoveStyle  style);
   void setCursorPosition(QLineEdit* theWrappedObject, int  arg__1);
   void setDragEnabled(QLineEdit* theWrappedObject, bool  b);
   void setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1);
   void setFrame(QLineEdit* theWrappedObject, bool  arg__1);
   void setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask);
   void setMaxLength(QLineEdit* theWrappedObject, int  arg__1);
   void setModified(QLineEdit* theWrappedObject, bool  arg__1);
   void setPlaceholderText(QLineEdit* theWrappedObject, const QString&  arg__1);
   void setReadOnly(QLineEdit* theWrappedObject, bool  arg__1);
   void setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2);
   void setTextMargins(QLineEdit* theWrappedObject, const QMargins&  margins);
   void setTextMargins(QLineEdit* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1);
   QSize  py_q_sizeHint(QLineEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_sizeHint());}
   QString  text(QLineEdit* theWrappedObject) const;
   QMargins  textMargins(QLineEdit* theWrappedObject) const;
   void py_q_timerEvent(QLineEdit* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_timerEvent(arg__1));}
   const QValidator*  validator(QLineEdit* theWrappedObject) const;
};





class PythonQtWrapper_QLinearGradient : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QLinearGradient* new_QLinearGradient();
QLinearGradient* new_QLinearGradient(const QPointF&  start, const QPointF&  finalStop);
QLinearGradient* new_QLinearGradient(qreal  xStart, qreal  yStart, qreal  xFinalStop, qreal  yFinalStop);
QLinearGradient* new_QLinearGradient(const QLinearGradient& other) {
QLinearGradient* a = new QLinearGradient();
*((QLinearGradient*)a) = other;
return a; }
void delete_QLinearGradient(QLinearGradient* obj) { delete obj; }
   QPointF  finalStop(QLinearGradient* theWrappedObject) const;
   void setFinalStop(QLinearGradient* theWrappedObject, const QPointF&  stop);
   void setFinalStop(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   void setStart(QLinearGradient* theWrappedObject, const QPointF&  start);
   void setStart(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   QPointF  start(QLinearGradient* theWrappedObject) const;
};





class PythonQtShell_QListView : public QListView
{
public:
    PythonQtShell_QListView(QWidget*  parent = nullptr):QListView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QListView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
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
void initStyleOption(QStyleOptionFrame*  option) const override;
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
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  e) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QListView : public QListView
{ public:
inline QSize  promoted_contentsSize() const { return this->contentsSize(); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) { this->dataChanged(topLeft, bottomRight, roles); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_initViewItemOption(QStyleOptionViewItem*  option) const { this->initViewItemOption(option); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline QRect  promoted_rectForIndex(const QModelIndex&  index) const { return this->rectForIndex(index); }
inline void promoted_resizeContents(int  width, int  height) { this->resizeContents(width, height); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { this->rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return this->selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { this->selectionChanged(selected, deselected); }
inline void promoted_setPositionForIndex(const QPoint&  position, const QModelIndex&  index) { this->setPositionForIndex(position, index); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { this->startDrag(supportedActions); }
inline void promoted_timerEvent(QTimerEvent*  e) { this->timerEvent(e); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QListView::currentChanged(current, previous); }
inline void py_q_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) { QListView::dataChanged(topLeft, bottomRight, roles); }
inline void py_q_doItemsLayout() { QListView::doItemsLayout(); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QListView::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QListView::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QListView::dropEvent(e); }
inline bool  py_q_event(QEvent*  e) { return QListView::event(e); }
inline int  py_q_horizontalOffset() const { return QListView::horizontalOffset(); }
inline QModelIndex  py_q_indexAt(const QPoint&  p) const { return QListView::indexAt(p); }
inline void py_q_initViewItemOption(QStyleOptionViewItem*  option) const { QListView::initViewItemOption(option); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QListView::isIndexHidden(index); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QListView::mouseMoveEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QListView::mouseReleaseEvent(e); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QListView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_paintEvent(QPaintEvent*  e) { QListView::paintEvent(e); }
inline void py_q_reset() { QListView::reset(); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QListView::resizeEvent(e); }
inline void py_q_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QListView::rowsAboutToBeRemoved(parent, start, end); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QListView::rowsInserted(parent, start, end); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QListView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QListView::scrollTo(index, hint); }
inline QList<QModelIndex >  py_q_selectedIndexes() const { return QListView::selectedIndexes(); }
inline void py_q_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QListView::selectionChanged(selected, deselected); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QListView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QListView::setSelection(rect, command); }
inline void py_q_startDrag(Qt::DropActions  supportedActions) { QListView::startDrag(supportedActions); }
inline void py_q_timerEvent(QTimerEvent*  e) { QListView::timerEvent(e); }
inline void py_q_updateGeometries() { QListView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return QListView::verticalOffset(); }
inline QSize  py_q_viewportSizeHint() const { return QListView::viewportSizeHint(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QListView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QListView::visualRegionForSelection(selection); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QListView::wheelEvent(e); }
};

class PythonQtWrapper_QListView : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QListView* new_QListView(QWidget*  parent = nullptr);
void delete_QListView(QListView* obj) { delete obj; }
   int  batchSize(QListView* theWrappedObject) const;
   void clearPropertyFlags(QListView* theWrappedObject);
   QSize  contentsSize(QListView* theWrappedObject) const;
   void py_q_currentChanged(QListView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   void py_q_dataChanged(QListView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_dataChanged(topLeft, bottomRight, roles));}
   void py_q_doItemsLayout(QListView* theWrappedObject){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_doItemsLayout());}
   void py_q_dragLeaveEvent(QListView* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QListView* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QListView* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_dropEvent(e));}
   bool  py_q_event(QListView* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_event(e));}
   QListView::Flow  flow(QListView* theWrappedObject) const;
   QSize  gridSize(QListView* theWrappedObject) const;
   int  py_q_horizontalOffset(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_horizontalOffset());}
   QModelIndex  py_q_indexAt(QListView* theWrappedObject, const QPoint&  p) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_indexAt(p));}
   void py_q_initViewItemOption(QListView* theWrappedObject, QStyleOptionViewItem*  option) const{  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_initViewItemOption(option));}
   bool  py_q_isIndexHidden(QListView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isRowHidden(QListView* theWrappedObject, int  row) const;
   bool  isSelectionRectVisible(QListView* theWrappedObject) const;
   bool  isWrapping(QListView* theWrappedObject) const;
   Qt::Alignment  itemAlignment(QListView* theWrappedObject) const;
   QListView::LayoutMode  layoutMode(QListView* theWrappedObject) const;
   int  modelColumn(QListView* theWrappedObject) const;
   void py_q_mouseMoveEvent(QListView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mouseReleaseEvent(QListView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   QModelIndex  py_q_moveCursor(QListView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   QListView::Movement  movement(QListView* theWrappedObject) const;
   void py_q_paintEvent(QListView* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_paintEvent(e));}
   QRect  rectForIndex(QListView* theWrappedObject, const QModelIndex&  index) const;
   void py_q_reset(QListView* theWrappedObject){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_reset());}
   void resizeContents(QListView* theWrappedObject, int  width, int  height);
   void py_q_resizeEvent(QListView* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_resizeEvent(e));}
   QListView::ResizeMode  resizeMode(QListView* theWrappedObject) const;
   void py_q_rowsAboutToBeRemoved(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_rowsAboutToBeRemoved(parent, start, end));}
   void py_q_rowsInserted(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   void py_q_scrollContentsBy(QListView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QListView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   QList<QModelIndex >  py_q_selectedIndexes(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_selectedIndexes());}
   void py_q_selectionChanged(QListView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_selectionChanged(selected, deselected));}
   void setBatchSize(QListView* theWrappedObject, int  batchSize);
   void setFlow(QListView* theWrappedObject, QListView::Flow  flow);
   void setGridSize(QListView* theWrappedObject, const QSize&  size);
   void setItemAlignment(QListView* theWrappedObject, Qt::Alignment  alignment);
   void setLayoutMode(QListView* theWrappedObject, QListView::LayoutMode  mode);
   void setModelColumn(QListView* theWrappedObject, int  column);
   void setMovement(QListView* theWrappedObject, QListView::Movement  movement);
   void setPositionForIndex(QListView* theWrappedObject, const QPoint&  position, const QModelIndex&  index);
   void setResizeMode(QListView* theWrappedObject, QListView::ResizeMode  mode);
   void py_q_setRootIndex(QListView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_setRootIndex(index));}
   void setRowHidden(QListView* theWrappedObject, int  row, bool  hide);
   void py_q_setSelection(QListView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void setSelectionRectVisible(QListView* theWrappedObject, bool  show);
   void setSpacing(QListView* theWrappedObject, int  space);
   void setUniformItemSizes(QListView* theWrappedObject, bool  enable);
   void setViewMode(QListView* theWrappedObject, QListView::ViewMode  mode);
   void setWordWrap(QListView* theWrappedObject, bool  on);
   void setWrapping(QListView* theWrappedObject, bool  enable);
   int  spacing(QListView* theWrappedObject) const;
   void py_q_startDrag(QListView* theWrappedObject, Qt::DropActions  supportedActions){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_startDrag(supportedActions));}
   void py_q_timerEvent(QListView* theWrappedObject, QTimerEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_timerEvent(e));}
   bool  uniformItemSizes(QListView* theWrappedObject) const;
   void py_q_updateGeometries(QListView* theWrappedObject){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_updateGeometries());}
   int  py_q_verticalOffset(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_verticalOffset());}
   QListView::ViewMode  viewMode(QListView* theWrappedObject) const;
   QSize  py_q_viewportSizeHint(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_viewportSizeHint());}
   QRect  py_q_visualRect(QListView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QListView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
   void py_q_wheelEvent(QListView* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_wheelEvent(e));}
   bool  wordWrap(QListView* theWrappedObject) const;
};





class PythonQtShell_QListWidget : public QListWidget
{
public:
    PythonQtShell_QListWidget(QWidget*  parent = nullptr):QListWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QListWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QList<int >&  roles = QList<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  event) override;
bool  dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action) override;
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
void initStyleOption(QStyleOptionFrame*  option) const override;
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
QMimeData*  mimeData(const QList<QListWidgetItem* >&  items) const override;
QStringList  mimeTypes() const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  e) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
Qt::DropActions  supportedDropActions() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QListWidget : public QListWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action) { return this->dropMimeData(index, data, action); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QMimeData*  promoted_mimeData(const QList<QListWidgetItem* >&  items) const { return this->mimeData(items); }
inline QStringList  promoted_mimeTypes() const { return this->mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return this->supportedDropActions(); }
inline void py_q_dropEvent(QDropEvent*  event) { QListWidget::dropEvent(event); }
inline bool  py_q_dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action) { return QListWidget::dropMimeData(index, data, action); }
inline bool  py_q_event(QEvent*  e) { return QListWidget::event(e); }
inline QMimeData*  py_q_mimeData(const QList<QListWidgetItem* >&  items) const { return QListWidget::mimeData(items); }
inline QStringList  py_q_mimeTypes() const { return QListWidget::mimeTypes(); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QListWidget::setSelectionModel(selectionModel); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QListWidget::supportedDropActions(); }
};

class PythonQtWrapper_QListWidget : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QListWidget* new_QListWidget(QWidget*  parent = nullptr);
void delete_QListWidget(QListWidget* obj) { delete obj; }
   void addItem(QListWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QListWidgetItem* >  item);
   void addItem(QListWidget* theWrappedObject, const QString&  label);
   void addItems(QListWidget* theWrappedObject, const QStringList&  labels);
   void closePersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item);
   int  count(QListWidget* theWrappedObject) const;
   QListWidgetItem*  currentItem(QListWidget* theWrappedObject) const;
   int  currentRow(QListWidget* theWrappedObject) const;
   void py_q_dropEvent(QListWidget* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  dropMimeData(QListWidget* theWrappedObject, int  index, const QMimeData*  data, Qt::DropAction  action);
   bool  py_q_dropMimeData(QListWidget* theWrappedObject, int  index, const QMimeData*  data, Qt::DropAction  action){  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_dropMimeData(index, data, action));}
   void editItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   bool  py_q_event(QListWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_event(e));}
   QList<QListWidgetItem* >  findItems(QListWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   QModelIndex  indexFromItem(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
   void insertItem(QListWidget* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QListWidgetItem* >  item);
   void insertItem(QListWidget* theWrappedObject, int  row, const QString&  label);
   void insertItems(QListWidget* theWrappedObject, int  row, const QStringList&  labels);
   bool  isPersistentEditorOpen(QListWidget* theWrappedObject, QListWidgetItem*  item) const;
   bool  isSortingEnabled(QListWidget* theWrappedObject) const;
   QListWidgetItem*  item(QListWidget* theWrappedObject, int  row) const;
   QListWidgetItem*  itemAt(QListWidget* theWrappedObject, const QPoint&  p) const;
   QListWidgetItem*  itemAt(QListWidget* theWrappedObject, int  x, int  y) const;
   QListWidgetItem*  itemFromIndex(QListWidget* theWrappedObject, const QModelIndex&  index) const;
   QWidget*  itemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item) const;
   QList<QListWidgetItem* >  items(QListWidget* theWrappedObject, const QMimeData*  data) const;
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QListWidget* theWrappedObject, const QList<QListWidgetItem* >&  items) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QListWidget* theWrappedObject, const QList<QListWidgetItem* >&  items) const{  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_mimeData(items));}
   QStringList  mimeTypes(QListWidget* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QListWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_mimeTypes());}
   void openPersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void removeItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item);
   int  row(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
   QList<QListWidgetItem* >  selectedItems(QListWidget* theWrappedObject) const;
   void setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   void setCurrentRow(QListWidget* theWrappedObject, int  row);
   void setCurrentRow(QListWidget* theWrappedObject, int  row, QItemSelectionModel::SelectionFlags  command);
   void setItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void py_q_setSelectionModel(QListWidget* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   void setSortingEnabled(QListWidget* theWrappedObject, bool  enable);
   void setSupportedDragActions(QListWidget* theWrappedObject, Qt::DropActions  actions);
   void sortItems(QListWidget* theWrappedObject, Qt::SortOrder  order = Qt::AscendingOrder);
   Qt::DropActions  supportedDragActions(QListWidget* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QListWidget* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QListWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QListWidgetItem*  > takeItem(QListWidget* theWrappedObject, int  row);
   QRect  visualItemRect(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
};





class PythonQtShell_QListWidgetItem : public QListWidgetItem
{
public:
    PythonQtShell_QListWidgetItem(QListWidget*  listview = nullptr, int  type = Type):QListWidgetItem(listview, type),_wrapper(nullptr) {};
    PythonQtShell_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  listview = nullptr, int  type = Type):QListWidgetItem(icon, text, listview, type),_wrapper(nullptr) {};
    PythonQtShell_QListWidgetItem(const QString&  text, QListWidget*  listview = nullptr, int  type = Type):QListWidgetItem(text, listview, type),_wrapper(nullptr) {};

   ~PythonQtShell_QListWidgetItem() override;

QListWidgetItem*  clone() const override;
QVariant  data(int  role) const override;
void read(QDataStream&  in) override;
void setData(int  role, const QVariant&  value) override;
void write(QDataStream&  out) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QListWidgetItem : public QListWidgetItem
{ public:
inline QListWidgetItem*  py_q_clone() const { return QListWidgetItem::clone(); }
inline QVariant  py_q_data(int  role) const { return QListWidgetItem::data(role); }
inline void py_q_read(QDataStream&  in) { QListWidgetItem::read(in); }
inline void py_q_setData(int  role, const QVariant&  value) { QListWidgetItem::setData(role, value); }
inline void py_q_write(QDataStream&  out) const { QListWidgetItem::write(out); }
};

class PythonQtWrapper_QListWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QListWidgetItem::Type,   UserType = QListWidgetItem::UserType};
public Q_SLOTS:
QListWidgetItem* new_QListWidgetItem(PythonQtNewOwnerOfThis<QListWidget* >  listview = nullptr, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QIcon&  icon, const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  listview = nullptr, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  listview = nullptr, int  type = Type);
void delete_QListWidgetItem(QListWidgetItem* obj) { delete obj; }
   QBrush  background(QListWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QListWidgetItem* theWrappedObject) const;
   QListWidgetItem*  clone(QListWidgetItem* theWrappedObject) const;
   QListWidgetItem*  py_q_clone(QListWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_clone());}
   QVariant  data(QListWidgetItem* theWrappedObject, int  role) const;
   QVariant  py_q_data(QListWidgetItem* theWrappedObject, int  role) const{  return (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_data(role));}
   Qt::ItemFlags  flags(QListWidgetItem* theWrappedObject) const;
   QFont  font(QListWidgetItem* theWrappedObject) const;
   QBrush  foreground(QListWidgetItem* theWrappedObject) const;
   QIcon  icon(QListWidgetItem* theWrappedObject) const;
   bool  isHidden(QListWidgetItem* theWrappedObject) const;
   bool  isSelected(QListWidgetItem* theWrappedObject) const;
   QListWidget*  listWidget(QListWidgetItem* theWrappedObject) const;
   void writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in);
   void read(QListWidgetItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QListWidgetItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_read(in));}
   void setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void py_q_setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value){  (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_setData(role, value));}
   void setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QListWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setHidden(QListWidgetItem* theWrappedObject, bool  hide);
   void setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon);
   void setSelected(QListWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip);
   void setText(QListWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QListWidgetItem* theWrappedObject, Qt::Alignment  alignment);
   void setTextAlignment(QListWidgetItem* theWrappedObject, Qt::AlignmentFlag  alignment);
   void setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment);
   void setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip);
   void setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QListWidgetItem* theWrappedObject) const;
   QString  statusTip(QListWidgetItem* theWrappedObject) const;
   QString  text(QListWidgetItem* theWrappedObject) const;
   int  textAlignment(QListWidgetItem* theWrappedObject) const;
   QString  toolTip(QListWidgetItem* theWrappedObject) const;
   int  type(QListWidgetItem* theWrappedObject) const;
   QString  whatsThis(QListWidgetItem* theWrappedObject) const;
   void write(QListWidgetItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QListWidgetItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtShell_QMainWindow : public QMainWindow
{
public:
    PythonQtShell_QMainWindow(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QMainWindow(parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QMainWindow() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
QMenu*  createPopupMenu() override;
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

class PythonQtPublicPromoter_QMainWindow : public QMainWindow
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  event) { QMainWindow::contextMenuEvent(event); }
inline QMenu*  py_q_createPopupMenu() { return QMainWindow::createPopupMenu(); }
inline bool  py_q_event(QEvent*  event) { return QMainWindow::event(event); }
};

class PythonQtWrapper_QMainWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DockOption )
Q_FLAGS(DockOptions )
enum DockOption{
  AnimatedDocks = QMainWindow::AnimatedDocks,   AllowNestedDocks = QMainWindow::AllowNestedDocks,   AllowTabbedDocks = QMainWindow::AllowTabbedDocks,   ForceTabbedDocks = QMainWindow::ForceTabbedDocks,   VerticalTabs = QMainWindow::VerticalTabs,   GroupedDragging = QMainWindow::GroupedDragging};
Q_DECLARE_FLAGS(DockOptions, DockOption)
public Q_SLOTS:
QMainWindow* new_QMainWindow(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QMainWindow(QMainWindow* obj) { delete obj; }
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget);
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   void addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar);
   QToolBar*  addToolBar(QMainWindow* theWrappedObject, const QString&  title);
   void addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area = Qt::TopToolBarArea);
   QWidget*  centralWidget(QMainWindow* theWrappedObject) const;
   void py_q_contextMenuEvent(QMainWindow* theWrappedObject, QContextMenuEvent*  event){  (((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->py_q_contextMenuEvent(event));}
   Qt::DockWidgetArea  corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const;
   QMenu*  createPopupMenu(QMainWindow* theWrappedObject);
   QMenu*  py_q_createPopupMenu(QMainWindow* theWrappedObject){  return (((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->py_q_createPopupMenu());}
   QMainWindow::DockOptions  dockOptions(QMainWindow* theWrappedObject) const;
   Qt::DockWidgetArea  dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   bool  documentMode(QMainWindow* theWrappedObject) const;
   bool  py_q_event(QMainWindow* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->py_q_event(event));}
   QSize  iconSize(QMainWindow* theWrappedObject) const;
   void insertToolBar(QMainWindow* theWrappedObject, QToolBar*  before, QToolBar*  toolbar);
   void insertToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   bool  isAnimated(QMainWindow* theWrappedObject) const;
   bool  isDockNestingEnabled(QMainWindow* theWrappedObject) const;
   bool  isSeparator(QMainWindow* theWrappedObject, const QPoint&  pos) const;
   QMenuBar*  menuBar(QMainWindow* theWrappedObject) const;
   QWidget*  menuWidget(QMainWindow* theWrappedObject) const;
   void removeDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   void removeToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void removeToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   void resizeDocks(QMainWindow* theWrappedObject, const QList<QDockWidget* >&  docks, const QList<int >&  sizes, Qt::Orientation  orientation);
   bool  restoreDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   bool  restoreState(QMainWindow* theWrappedObject, const QByteArray&  state, int  version = 0);
   QByteArray  saveState(QMainWindow* theWrappedObject, int  version = 0) const;
   void setCentralWidget(QMainWindow* theWrappedObject, QWidget*  widget);
   void setCorner(QMainWindow* theWrappedObject, Qt::Corner  corner, Qt::DockWidgetArea  area);
   void setDockOptions(QMainWindow* theWrappedObject, QMainWindow::DockOptions  options);
   void setDocumentMode(QMainWindow* theWrappedObject, bool  enabled);
   void setIconSize(QMainWindow* theWrappedObject, const QSize&  iconSize);
   void setMenuBar(QMainWindow* theWrappedObject, QMenuBar*  menubar);
   void setMenuWidget(QMainWindow* theWrappedObject, QWidget*  menubar);
   void setStatusBar(QMainWindow* theWrappedObject, QStatusBar*  statusbar);
   void setTabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetAreas  areas, QTabWidget::TabPosition  tabPosition);
   void setTabShape(QMainWindow* theWrappedObject, QTabWidget::TabShape  tabShape);
   void setToolButtonStyle(QMainWindow* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle);
   void splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   QStatusBar*  statusBar(QMainWindow* theWrappedObject) const;
   QTabWidget::TabPosition  tabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area) const;
   QTabWidget::TabShape  tabShape(QMainWindow* theWrappedObject) const;
   QList<QDockWidget* >  tabifiedDockWidgets(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   void tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second);
   QWidget*  takeCentralWidget(QMainWindow* theWrappedObject);
   Qt::ToolBarArea  toolBarArea(QMainWindow* theWrappedObject, const QToolBar*  toolbar) const;
   bool  toolBarBreak(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   Qt::ToolButtonStyle  toolButtonStyle(QMainWindow* theWrappedObject) const;
   bool  unifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject) const;
};





class PythonQtWrapper_QMargins : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMargins* new_QMargins();
QMargins* new_QMargins(int  left, int  top, int  right, int  bottom);
QMargins* new_QMargins(const QMargins& other) {
QMargins* a = new QMargins();
*((QMargins*)a) = other;
return a; }
void delete_QMargins(QMargins* obj) { delete obj; }
   int  bottom(QMargins* theWrappedObject) const;
   bool  isNull(QMargins* theWrappedObject) const;
   int  left(QMargins* theWrappedObject) const;
   bool  __ne__(QMargins* theWrappedObject, const QMargins&  rhs);
   bool  __ne__(QMargins* theWrappedObject, const QMarginsF&  rhs);
   QMargins  __mul__(QMargins* theWrappedObject, int  factor);
   QMargins  __mul__(QMargins* theWrappedObject, qreal  factor);
   QMargins*  __imul__(QMargins* theWrappedObject, int  arg__1);
   QMargins*  __imul__(QMargins* theWrappedObject, qreal  arg__1);
   QMargins  __add__(QMargins* theWrappedObject);
   QMargins  __add__(QMargins* theWrappedObject, const QMargins&  m2);
   QRect  __add__(QMargins* theWrappedObject, const QRect&  rectangle);
   QMargins  __add__(QMargins* theWrappedObject, int  rhs);
   QMargins*  __iadd__(QMargins* theWrappedObject, const QMargins&  margins);
   QMargins*  __iadd__(QMargins* theWrappedObject, int  arg__1);
   QMargins  __sub__(QMargins* theWrappedObject);
   QMargins  __sub__(QMargins* theWrappedObject, const QMargins&  m2);
   QMargins  __sub__(QMargins* theWrappedObject, int  rhs);
   QMargins*  __isub__(QMargins* theWrappedObject, const QMargins&  margins);
   QMargins*  __isub__(QMargins* theWrappedObject, int  arg__1);
   QMargins  __div__(QMargins* theWrappedObject, int  divisor);
   QMargins  __div__(QMargins* theWrappedObject, qreal  divisor);
   QMargins*  __idiv__(QMargins* theWrappedObject, int  arg__1);
   QMargins*  __idiv__(QMargins* theWrappedObject, qreal  arg__1);
   void writeTo(QMargins* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMargins* theWrappedObject, const QMargins&  rhs);
   bool  __eq__(QMargins* theWrappedObject, const QMarginsF&  rhs);
   void readFrom(QMargins* theWrappedObject, QDataStream&  arg__1);
   QMargins  __or__(QMargins* theWrappedObject, const QMargins&  m2);
   int  right(QMargins* theWrappedObject) const;
   void setBottom(QMargins* theWrappedObject, int  bottom);
   void setLeft(QMargins* theWrappedObject, int  left);
   void setRight(QMargins* theWrappedObject, int  right);
   void setTop(QMargins* theWrappedObject, int  top);
   QMarginsF  toMarginsF(QMargins* theWrappedObject) const;
   int  top(QMargins* theWrappedObject) const;
    QString py_toString(QMargins*);
    bool __nonzero__(QMargins* obj) { return !obj->isNull(); }
};





class PythonQtShell_QMdiArea : public QMdiArea
{
public:
    PythonQtShell_QMdiArea(QWidget*  parent = nullptr):QMdiArea(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMdiArea() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  childEvent) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  arg__1) override;
void dragLeaveEvent(QDragLeaveEvent*  arg__1) override;
void dragMoveEvent(QDragMoveEvent*  arg__1) override;
void dropEvent(QDropEvent*  arg__1) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
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
void paintEvent(QPaintEvent*  paintEvent) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  resizeEvent) override;
void scrollContentsBy(int  dx, int  dy) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  showEvent) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  timerEvent) override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMdiArea : public QMdiArea
{ public:
inline void promoted_childEvent(QChildEvent*  childEvent) { this->childEvent(childEvent); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { this->paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { this->resizeEvent(resizeEvent); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_setupViewport(QWidget*  viewport) { this->setupViewport(viewport); }
inline void promoted_showEvent(QShowEvent*  showEvent) { this->showEvent(showEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { this->timerEvent(timerEvent); }
inline bool  promoted_viewportEvent(QEvent*  event) { return this->viewportEvent(event); }
inline void py_q_childEvent(QChildEvent*  childEvent) { QMdiArea::childEvent(childEvent); }
inline bool  py_q_event(QEvent*  event) { return QMdiArea::event(event); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QMdiArea::eventFilter(object, event); }
inline QSize  py_q_minimumSizeHint() const { return QMdiArea::minimumSizeHint(); }
inline void py_q_paintEvent(QPaintEvent*  paintEvent) { QMdiArea::paintEvent(paintEvent); }
inline void py_q_resizeEvent(QResizeEvent*  resizeEvent) { QMdiArea::resizeEvent(resizeEvent); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QMdiArea::scrollContentsBy(dx, dy); }
inline void py_q_setupViewport(QWidget*  viewport) { QMdiArea::setupViewport(viewport); }
inline void py_q_showEvent(QShowEvent*  showEvent) { QMdiArea::showEvent(showEvent); }
inline QSize  py_q_sizeHint() const { return QMdiArea::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  timerEvent) { QMdiArea::timerEvent(timerEvent); }
inline bool  py_q_viewportEvent(QEvent*  event) { return QMdiArea::viewportEvent(event); }
};

class PythonQtWrapper_QMdiArea : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AreaOption )
Q_FLAGS(AreaOptions )
enum AreaOption{
  DontMaximizeSubWindowOnActivation = QMdiArea::DontMaximizeSubWindowOnActivation};
Q_DECLARE_FLAGS(AreaOptions, AreaOption)
public Q_SLOTS:
QMdiArea* new_QMdiArea(QWidget*  parent = nullptr);
void delete_QMdiArea(QMdiArea* obj) { delete obj; }
   QMdiArea::WindowOrder  activationOrder(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  activeSubWindow(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags = Qt::WindowFlags());
   QBrush  background(QMdiArea* theWrappedObject) const;
   void py_q_childEvent(QMdiArea* theWrappedObject, QChildEvent*  childEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_childEvent(childEvent));}
   QMdiSubWindow*  currentSubWindow(QMdiArea* theWrappedObject) const;
   bool  documentMode(QMdiArea* theWrappedObject) const;
   bool  py_q_event(QMdiArea* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QMdiArea* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_eventFilter(object, event));}
   QSize  py_q_minimumSizeHint(QMdiArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_paintEvent(QMdiArea* theWrappedObject, QPaintEvent*  paintEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_paintEvent(paintEvent));}
   void removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget);
   void py_q_resizeEvent(QMdiArea* theWrappedObject, QResizeEvent*  resizeEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_resizeEvent(resizeEvent));}
   void py_q_scrollContentsBy(QMdiArea* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order);
   void setBackground(QMdiArea* theWrappedObject, const QBrush&  background);
   void setDocumentMode(QMdiArea* theWrappedObject, bool  enabled);
   void setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on = true);
   void setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position);
   void setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape);
   void setTabsClosable(QMdiArea* theWrappedObject, bool  closable);
   void setTabsMovable(QMdiArea* theWrappedObject, bool  movable);
   void setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode);
   void py_q_setupViewport(QMdiArea* theWrappedObject, QWidget*  viewport){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_setupViewport(viewport));}
   void py_q_showEvent(QMdiArea* theWrappedObject, QShowEvent*  showEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_showEvent(showEvent));}
   QSize  py_q_sizeHint(QMdiArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_sizeHint());}
   QList<QMdiSubWindow* >  subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order = QMdiArea::CreationOrder) const;
   QTabWidget::TabPosition  tabPosition(QMdiArea* theWrappedObject) const;
   QTabWidget::TabShape  tabShape(QMdiArea* theWrappedObject) const;
   bool  tabsClosable(QMdiArea* theWrappedObject) const;
   bool  tabsMovable(QMdiArea* theWrappedObject) const;
   bool  testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const;
   void py_q_timerEvent(QMdiArea* theWrappedObject, QTimerEvent*  timerEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_timerEvent(timerEvent));}
   QMdiArea::ViewMode  viewMode(QMdiArea* theWrappedObject) const;
   bool  py_q_viewportEvent(QMdiArea* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_viewportEvent(event));}
};





class PythonQtShell_QMdiSubWindow : public QMdiSubWindow
{
public:
    PythonQtShell_QMdiSubWindow(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QMdiSubWindow(parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QMdiSubWindow() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  changeEvent) override;
void childEvent(QChildEvent*  childEvent) override;
void closeEvent(QCloseEvent*  closeEvent) override;
void contextMenuEvent(QContextMenuEvent*  contextMenuEvent) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  focusInEvent) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  focusOutEvent) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  hideEvent) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  keyEvent) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  leaveEvent) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  mouseEvent) override;
void mouseMoveEvent(QMouseEvent*  mouseEvent) override;
void mousePressEvent(QMouseEvent*  mouseEvent) override;
void mouseReleaseEvent(QMouseEvent*  mouseEvent) override;
void moveEvent(QMoveEvent*  moveEvent) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  paintEvent) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  resizeEvent) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  showEvent) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  timerEvent) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMdiSubWindow : public QMdiSubWindow
{ public:
inline void promoted_changeEvent(QEvent*  changeEvent) { this->changeEvent(changeEvent); }
inline void promoted_childEvent(QChildEvent*  childEvent) { this->childEvent(childEvent); }
inline void promoted_closeEvent(QCloseEvent*  closeEvent) { this->closeEvent(closeEvent); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  contextMenuEvent) { this->contextMenuEvent(contextMenuEvent); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_focusInEvent(QFocusEvent*  focusInEvent) { this->focusInEvent(focusInEvent); }
inline void promoted_focusOutEvent(QFocusEvent*  focusOutEvent) { this->focusOutEvent(focusOutEvent); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { this->hideEvent(hideEvent); }
inline void promoted_keyPressEvent(QKeyEvent*  keyEvent) { this->keyPressEvent(keyEvent); }
inline void promoted_leaveEvent(QEvent*  leaveEvent) { this->leaveEvent(leaveEvent); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  mouseEvent) { this->mouseDoubleClickEvent(mouseEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  mouseEvent) { this->mouseMoveEvent(mouseEvent); }
inline void promoted_mousePressEvent(QMouseEvent*  mouseEvent) { this->mousePressEvent(mouseEvent); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { this->mouseReleaseEvent(mouseEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { this->moveEvent(moveEvent); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { this->paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { this->resizeEvent(resizeEvent); }
inline void promoted_showEvent(QShowEvent*  showEvent) { this->showEvent(showEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { this->timerEvent(timerEvent); }
inline void py_q_changeEvent(QEvent*  changeEvent) { QMdiSubWindow::changeEvent(changeEvent); }
inline void py_q_childEvent(QChildEvent*  childEvent) { QMdiSubWindow::childEvent(childEvent); }
inline void py_q_closeEvent(QCloseEvent*  closeEvent) { QMdiSubWindow::closeEvent(closeEvent); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  contextMenuEvent) { QMdiSubWindow::contextMenuEvent(contextMenuEvent); }
inline bool  py_q_event(QEvent*  event) { return QMdiSubWindow::event(event); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QMdiSubWindow::eventFilter(object, event); }
inline void py_q_focusInEvent(QFocusEvent*  focusInEvent) { QMdiSubWindow::focusInEvent(focusInEvent); }
inline void py_q_focusOutEvent(QFocusEvent*  focusOutEvent) { QMdiSubWindow::focusOutEvent(focusOutEvent); }
inline void py_q_hideEvent(QHideEvent*  hideEvent) { QMdiSubWindow::hideEvent(hideEvent); }
inline void py_q_keyPressEvent(QKeyEvent*  keyEvent) { QMdiSubWindow::keyPressEvent(keyEvent); }
inline void py_q_leaveEvent(QEvent*  leaveEvent) { QMdiSubWindow::leaveEvent(leaveEvent); }
inline QSize  py_q_minimumSizeHint() const { return QMdiSubWindow::minimumSizeHint(); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseDoubleClickEvent(mouseEvent); }
inline void py_q_mouseMoveEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseMoveEvent(mouseEvent); }
inline void py_q_mousePressEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mousePressEvent(mouseEvent); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseReleaseEvent(mouseEvent); }
inline void py_q_moveEvent(QMoveEvent*  moveEvent) { QMdiSubWindow::moveEvent(moveEvent); }
inline void py_q_paintEvent(QPaintEvent*  paintEvent) { QMdiSubWindow::paintEvent(paintEvent); }
inline void py_q_resizeEvent(QResizeEvent*  resizeEvent) { QMdiSubWindow::resizeEvent(resizeEvent); }
inline void py_q_showEvent(QShowEvent*  showEvent) { QMdiSubWindow::showEvent(showEvent); }
inline QSize  py_q_sizeHint() const { return QMdiSubWindow::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  timerEvent) { QMdiSubWindow::timerEvent(timerEvent); }
};

class PythonQtWrapper_QMdiSubWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubWindowOption )
Q_FLAGS(SubWindowOptions )
enum SubWindowOption{
  AllowOutsideAreaHorizontally = QMdiSubWindow::AllowOutsideAreaHorizontally,   AllowOutsideAreaVertically = QMdiSubWindow::AllowOutsideAreaVertically,   RubberBandResize = QMdiSubWindow::RubberBandResize,   RubberBandMove = QMdiSubWindow::RubberBandMove};
Q_DECLARE_FLAGS(SubWindowOptions, SubWindowOption)
public Q_SLOTS:
QMdiSubWindow* new_QMdiSubWindow(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QMdiSubWindow(QMdiSubWindow* obj) { delete obj; }
   void py_q_changeEvent(QMdiSubWindow* theWrappedObject, QEvent*  changeEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_changeEvent(changeEvent));}
   void py_q_childEvent(QMdiSubWindow* theWrappedObject, QChildEvent*  childEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_childEvent(childEvent));}
   void py_q_closeEvent(QMdiSubWindow* theWrappedObject, QCloseEvent*  closeEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_closeEvent(closeEvent));}
   void py_q_contextMenuEvent(QMdiSubWindow* theWrappedObject, QContextMenuEvent*  contextMenuEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_contextMenuEvent(contextMenuEvent));}
   bool  py_q_event(QMdiSubWindow* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QMdiSubWindow* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_eventFilter(object, event));}
   void py_q_focusInEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusInEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_focusInEvent(focusInEvent));}
   void py_q_focusOutEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusOutEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_focusOutEvent(focusOutEvent));}
   void py_q_hideEvent(QMdiSubWindow* theWrappedObject, QHideEvent*  hideEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_hideEvent(hideEvent));}
   bool  isShaded(QMdiSubWindow* theWrappedObject) const;
   void py_q_keyPressEvent(QMdiSubWindow* theWrappedObject, QKeyEvent*  keyEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_keyPressEvent(keyEvent));}
   int  keyboardPageStep(QMdiSubWindow* theWrappedObject) const;
   int  keyboardSingleStep(QMdiSubWindow* theWrappedObject) const;
   void py_q_leaveEvent(QMdiSubWindow* theWrappedObject, QEvent*  leaveEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_leaveEvent(leaveEvent));}
   QWidget*  maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const;
   QWidget*  maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const;
   QMdiArea*  mdiArea(QMdiSubWindow* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QMdiSubWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseDoubleClickEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_mouseDoubleClickEvent(mouseEvent));}
   void py_q_mouseMoveEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_mouseMoveEvent(mouseEvent));}
   void py_q_mousePressEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_mousePressEvent(mouseEvent));}
   void py_q_mouseReleaseEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_mouseReleaseEvent(mouseEvent));}
   void py_q_moveEvent(QMdiSubWindow* theWrappedObject, QMoveEvent*  moveEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_moveEvent(moveEvent));}
   void py_q_paintEvent(QMdiSubWindow* theWrappedObject, QPaintEvent*  paintEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_paintEvent(paintEvent));}
   void py_q_resizeEvent(QMdiSubWindow* theWrappedObject, QResizeEvent*  resizeEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_resizeEvent(resizeEvent));}
   void setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step);
   void setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step);
   void setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on = true);
   void setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu);
   void setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget);
   void py_q_showEvent(QMdiSubWindow* theWrappedObject, QShowEvent*  showEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_showEvent(showEvent));}
   QSize  py_q_sizeHint(QMdiSubWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_sizeHint());}
   QMenu*  systemMenu(QMdiSubWindow* theWrappedObject) const;
   bool  testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const;
   void py_q_timerEvent(QMdiSubWindow* theWrappedObject, QTimerEvent*  timerEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_timerEvent(timerEvent));}
   QWidget*  widget(QMdiSubWindow* theWrappedObject) const;
};





class PythonQtShell_QMenu : public QMenu
{
public:
    PythonQtShell_QMenu(QWidget*  parent = nullptr):QMenu(parent),_wrapper(nullptr) {};
    PythonQtShell_QMenu(const QString&  title, QWidget*  parent = nullptr):QMenu(title, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMenu() override;

void actionEvent(QActionEvent*  arg__1) override;
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
void enterEvent(QEnterEvent*  arg__1) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  arg__1) override;
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
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMenu : public QMenu
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { this->actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline int  promoted_columnCount() const { return this->columnCount(); }
inline void promoted_enterEvent(QEnterEvent*  arg__1) { this->enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const { this->initStyleOption(option, action); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { this->leaveEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline void py_q_actionEvent(QActionEvent*  arg__1) { QMenu::actionEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QMenu::changeEvent(arg__1); }
inline void py_q_enterEvent(QEnterEvent*  arg__1) { QMenu::enterEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QMenu::event(arg__1); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QMenu::focusNextPrevChild(next); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QMenu::hideEvent(arg__1); }
inline void py_q_initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const { QMenu::initStyleOption(option, action); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QMenu::keyPressEvent(arg__1); }
inline void py_q_leaveEvent(QEvent*  arg__1) { QMenu::leaveEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QMenu::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QMenu::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenu::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QMenu::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QMenu::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QMenu::timerEvent(arg__1); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QMenu::wheelEvent(arg__1); }
};

class PythonQtWrapper_QMenu : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMenu* new_QMenu(QWidget*  parent = nullptr);
QMenu* new_QMenu(const QString&  title, QWidget*  parent = nullptr);
void delete_QMenu(QMenu* obj) { delete obj; }
   QAction*  actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const;
   void py_q_actionEvent(QMenu* theWrappedObject, QActionEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_actionEvent(arg__1));}
   QRect  actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const;
   QAction*  activeAction(QMenu* theWrappedObject) const;
   QAction*  addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut);
   QAction*  addAction(QMenu* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut);
   QAction*  addMenu(QMenu* theWrappedObject, QMenu*  menu);
   QMenu*  addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title);
   QMenu*  addMenu(QMenu* theWrappedObject, const QString&  title);
   QAction*  addSection(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addSection(QMenu* theWrappedObject, const QString&  text);
   QAction*  addSeparator(QMenu* theWrappedObject);
   void py_q_changeEvent(QMenu* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void clear(QMenu* theWrappedObject);
   int  columnCount(QMenu* theWrappedObject) const;
   QAction*  defaultAction(QMenu* theWrappedObject) const;
   void py_q_enterEvent(QMenu* theWrappedObject, QEnterEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_enterEvent(arg__1));}
   bool  py_q_event(QMenu* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_event(arg__1));}
   QAction*  exec(QMenu* theWrappedObject);
   QAction*  static_QMenu_exec(const QList<QAction* >&  actions, const QPoint&  pos, QAction*  at = nullptr, QWidget*  parent = nullptr);
   QAction*  exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = nullptr);
   bool  py_q_focusNextPrevChild(QMenu* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_hideEvent(arg__1));}
   void hideTearOffMenu(QMenu* theWrappedObject);
   QIcon  icon(QMenu* theWrappedObject) const;
   void initStyleOption(QMenu* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const;
   void py_q_initStyleOption(QMenu* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const{  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_initStyleOption(option, action));}
   QAction*  insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  insertSection(QMenu* theWrappedObject, QAction*  before, const QIcon&  icon, const QString&  text);
   QAction*  insertSection(QMenu* theWrappedObject, QAction*  before, const QString&  text);
   QAction*  insertSeparator(QMenu* theWrappedObject, QAction*  before);
   bool  isEmpty(QMenu* theWrappedObject) const;
   bool  isTearOffEnabled(QMenu* theWrappedObject) const;
   bool  isTearOffMenuVisible(QMenu* theWrappedObject) const;
   void py_q_keyPressEvent(QMenu* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_leaveEvent(QMenu* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_leaveEvent(arg__1));}
   QAction*  menuAction(QMenu* theWrappedObject) const;
   QMenu*  static_QMenu_menuInAction(const QAction*  action);
   void py_q_mouseMoveEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QMenu* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = nullptr);
   bool  separatorsCollapsible(QMenu* theWrappedObject) const;
   void setActiveAction(QMenu* theWrappedObject, QAction*  act);
   void setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1);
   void setIcon(QMenu* theWrappedObject, const QIcon&  icon);
   void setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse);
   void setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1);
   void setTitle(QMenu* theWrappedObject, const QString&  title);
   void setToolTipsVisible(QMenu* theWrappedObject, bool  visible);
   void showTearOffMenu(QMenu* theWrappedObject);
   void showTearOffMenu(QMenu* theWrappedObject, const QPoint&  pos);
   QSize  py_q_sizeHint(QMenu* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_sizeHint());}
   void py_q_timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_timerEvent(arg__1));}
   QString  title(QMenu* theWrappedObject) const;
   bool  toolTipsVisible(QMenu* theWrappedObject) const;
   void py_q_wheelEvent(QMenu* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_wheelEvent(arg__1));}
    bool __nonzero__(QMenu* obj) { return !obj->isEmpty(); }

  QAction* addAction (QMenu* menu, const QString & text, PyObject* callable, const QKeySequence & shortcut = 0) {
    QAction* a = menu->addAction(text);
    a->setShortcut(shortcut);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }

  QAction* addAction (QMenu* menu, const QIcon& icon, const QString& text, PyObject* callable, const QKeySequence& shortcut = 0)
  {
    QAction* a = menu->addAction(text);
    a->setIcon(icon);
    a->setShortcut(shortcut);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtShell_QMenuBar : public QMenuBar
{
public:
    PythonQtShell_QMenuBar(QWidget*  parent = nullptr):QMenuBar(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMenuBar() override;

void actionEvent(QActionEvent*  arg__1) override;
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
void focusInEvent(QFocusEvent*  arg__1) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  arg__1) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  arg__1) override;
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
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMenuBar : public QMenuBar
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { this->actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const { this->initStyleOption(option, action); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { this->leaveEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_actionEvent(QActionEvent*  arg__1) { QMenuBar::actionEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QMenuBar::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QMenuBar::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QMenuBar::eventFilter(arg__1, arg__2); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QMenuBar::focusInEvent(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QMenuBar::focusOutEvent(arg__1); }
inline int  py_q_heightForWidth(int  arg__1) const { return QMenuBar::heightForWidth(arg__1); }
inline void py_q_initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const { QMenuBar::initStyleOption(option, action); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QMenuBar::keyPressEvent(arg__1); }
inline void py_q_leaveEvent(QEvent*  arg__1) { QMenuBar::leaveEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QMenuBar::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QMenuBar::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QMenuBar::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenuBar::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QMenuBar::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QMenuBar::resizeEvent(arg__1); }
inline void py_q_setVisible(bool  visible) { QMenuBar::setVisible(visible); }
inline QSize  py_q_sizeHint() const { return QMenuBar::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QMenuBar::timerEvent(arg__1); }
};

class PythonQtWrapper_QMenuBar : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMenuBar* new_QMenuBar(QWidget*  parent = nullptr);
void delete_QMenuBar(QMenuBar* obj) { delete obj; }
   QAction*  actionAt(QMenuBar* theWrappedObject, const QPoint&  arg__1) const;
   void py_q_actionEvent(QMenuBar* theWrappedObject, QActionEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_actionEvent(arg__1));}
   QRect  actionGeometry(QMenuBar* theWrappedObject, QAction*  arg__1) const;
   QAction*  activeAction(QMenuBar* theWrappedObject) const;
   QAction*  addMenu(QMenuBar* theWrappedObject, QMenu*  menu);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QIcon&  icon, const QString&  title);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QString&  title);
   QAction*  addSeparator(QMenuBar* theWrappedObject);
   void py_q_changeEvent(QMenuBar* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void clear(QMenuBar* theWrappedObject);
   QWidget*  cornerWidget(QMenuBar* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   bool  py_q_event(QMenuBar* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QMenuBar* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   void py_q_focusInEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   void py_q_focusOutEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   int  py_q_heightForWidth(QMenuBar* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void initStyleOption(QMenuBar* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const;
   void py_q_initStyleOption(QMenuBar* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const{  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_initStyleOption(option, action));}
   QAction*  insertMenu(QMenuBar* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  insertSeparator(QMenuBar* theWrappedObject, QAction*  before);
   bool  isDefaultUp(QMenuBar* theWrappedObject) const;
   bool  isNativeMenuBar(QMenuBar* theWrappedObject) const;
   void py_q_keyPressEvent(QMenuBar* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_leaveEvent(QMenuBar* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_leaveEvent(arg__1));}
   QSize  py_q_minimumSizeHint(QMenuBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QMenuBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void py_q_resizeEvent(QMenuBar* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setActiveAction(QMenuBar* theWrappedObject, QAction*  action);
   void setCornerWidget(QMenuBar* theWrappedObject, QWidget*  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setDefaultUp(QMenuBar* theWrappedObject, bool  arg__1);
   void setNativeMenuBar(QMenuBar* theWrappedObject, bool  nativeMenuBar);
   void py_q_setVisible(QMenuBar* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_setVisible(visible));}
   QSize  py_q_sizeHint(QMenuBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_sizeHint());}
   void py_q_timerEvent(QMenuBar* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_timerEvent(arg__1));}

  QAction* addAction (QMenuBar* menu, const QString & text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtShell_QMessageBox : public QMessageBox
{
public:
    PythonQtShell_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint):QMessageBox(icon, title, text, buttons, parent, flags),_wrapper(nullptr) {};
    PythonQtShell_QMessageBox(QWidget*  parent = nullptr):QMessageBox(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMessageBox() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void done(int  arg__1) override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  e) override;
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
void reject() override;
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

class PythonQtPublicPromoter_QMessageBox : public QMessageBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QMessageBox::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QMessageBox::closeEvent(event); }
inline bool  py_q_event(QEvent*  e) { return QMessageBox::event(e); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QMessageBox::keyPressEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QMessageBox::resizeEvent(event); }
inline void py_q_showEvent(QShowEvent*  event) { QMessageBox::showEvent(event); }
};

class PythonQtWrapper_QMessageBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Option StandardButton )
Q_FLAGS(Options StandardButtons )
enum class Option{
  DontUseNativeDialog = static_cast<int>(QMessageBox::Option::DontUseNativeDialog)};
enum StandardButton{
  NoButton = QMessageBox::NoButton,   Ok = QMessageBox::Ok,   Save = QMessageBox::Save,   SaveAll = QMessageBox::SaveAll,   Open = QMessageBox::Open,   Yes = QMessageBox::Yes,   YesToAll = QMessageBox::YesToAll,   No = QMessageBox::No,   NoToAll = QMessageBox::NoToAll,   Abort = QMessageBox::Abort,   Retry = QMessageBox::Retry,   Ignore = QMessageBox::Ignore,   Close = QMessageBox::Close,   Cancel = QMessageBox::Cancel,   Discard = QMessageBox::Discard,   Help = QMessageBox::Help,   Apply = QMessageBox::Apply,   Reset = QMessageBox::Reset,   RestoreDefaults = QMessageBox::RestoreDefaults,   FirstButton = QMessageBox::FirstButton,   LastButton = QMessageBox::LastButton,   YesAll = QMessageBox::YesAll,   NoAll = QMessageBox::NoAll,   Default = QMessageBox::Default,   Escape = QMessageBox::Escape,   FlagMask = QMessageBox::FlagMask,   ButtonMask = QMessageBox::ButtonMask};
Q_DECLARE_FLAGS(Options, Option)
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public Q_SLOTS:
QMessageBox* new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint);
QMessageBox* new_QMessageBox(QWidget*  parent = nullptr);
void delete_QMessageBox(QMessageBox* obj) { delete obj; }
   void static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text);
   void static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title = QString());
   void addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role);
   QPushButton*  addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   QPushButton*  addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role);
   QAbstractButton*  button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const;
   QMessageBox::ButtonRole  buttonRole(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QList<QAbstractButton* >  buttons(QMessageBox* theWrappedObject) const;
   void py_q_changeEvent(QMessageBox* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_changeEvent(event));}
   QCheckBox*  checkBox(QMessageBox* theWrappedObject) const;
   QAbstractButton*  clickedButton(QMessageBox* theWrappedObject) const;
   void py_q_closeEvent(QMessageBox* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_closeEvent(event));}
   QMessageBox::StandardButton  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QPushButton*  defaultButton(QMessageBox* theWrappedObject) const;
   QString  detailedText(QMessageBox* theWrappedObject) const;
   QAbstractButton*  escapeButton(QMessageBox* theWrappedObject) const;
   bool  py_q_event(QMessageBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_event(e));}
   QMessageBox::Icon  icon(QMessageBox* theWrappedObject) const;
   QPixmap  iconPixmap(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1 = QMessageBox::NoButton);
   QString  informativeText(QMessageBox* theWrappedObject) const;
   void py_q_keyPressEvent(QMessageBox* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_keyPressEvent(event));}
   void open(QMessageBox* theWrappedObject, QObject*  receiver, const char*  member);
   QMessageBox::Options  options(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::StandardButtons(Yes|No), QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   void removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void py_q_resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_resizeEvent(event));}
   void setCheckBox(QMessageBox* theWrappedObject, QCheckBox*  cb);
   void setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button);
   void setDetailedText(QMessageBox* theWrappedObject, const QString&  text);
   void setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1);
   void setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap);
   void setInformativeText(QMessageBox* theWrappedObject, const QString&  text);
   void setOption(QMessageBox* theWrappedObject, QMessageBox::Option  option, bool  on = true);
   void setOptions(QMessageBox* theWrappedObject, QMessageBox::Options  options);
   void setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons);
   void setText(QMessageBox* theWrappedObject, const QString&  text);
   void setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format);
   void setTextInteractionFlags(QMessageBox* theWrappedObject, Qt::TextInteractionFlags  flags);
   void py_q_showEvent(QMessageBox* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_showEvent(event));}
   QMessageBox::StandardButton  standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QMessageBox::StandardButtons  standardButtons(QMessageBox* theWrappedObject) const;
   bool  testOption(QMessageBox* theWrappedObject, QMessageBox::Option  option) const;
   QString  text(QMessageBox* theWrappedObject) const;
   Qt::TextFormat  textFormat(QMessageBox* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
};





class PythonQtShell_QMouseEvent : public QMouseEvent
{
public:
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QMouseEvent(type, localPos, button, buttons, modifiers, device),_wrapper(nullptr) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QMouseEvent(type, localPos, globalPos, button, buttons, modifiers, device),_wrapper(nullptr) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QMouseEvent(type, localPos, scenePos, globalPos, button, buttons, modifiers, source, device),_wrapper(nullptr) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QMouseEvent(type, localPos, scenePos, globalPos, button, buttons, modifiers, device),_wrapper(nullptr) {};
    PythonQtShell_QMouseEvent(const QMouseEvent&  arg__1):QMouseEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QMouseEvent() override;

QMouseEvent*  clone() const override;
bool  isBeginEvent() const override;
bool  isEndEvent() const override;
bool  isUpdateEvent() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMouseEvent : public QMouseEvent
{ public:
inline QMouseEvent&  promoted_operator_assign(const QMouseEvent&  other) { return this->QMouseEvent::operator=(other); }
inline QMouseEvent*  py_q_clone() const { return QMouseEvent::clone(); }
};

class PythonQtWrapper_QMouseEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
QMouseEvent* new_QMouseEvent(const QMouseEvent&  arg__1);
void delete_QMouseEvent(QMouseEvent* obj) { delete obj; }
   QMouseEvent*  py_q_clone(QMouseEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMouseEvent*)theWrappedObject)->py_q_clone());}
   Qt::MouseEventFlags  flags(QMouseEvent* theWrappedObject) const;
   QPoint  globalPos(QMouseEvent* theWrappedObject) const;
   int  globalX(QMouseEvent* theWrappedObject) const;
   int  globalY(QMouseEvent* theWrappedObject) const;
   QPointF  localPos(QMouseEvent* theWrappedObject) const;
   QMouseEvent*  operator_assign(QMouseEvent* theWrappedObject, const QMouseEvent&  other);
   QPoint  pos(QMouseEvent* theWrappedObject) const;
   QPointF  screenPos(QMouseEvent* theWrappedObject) const;
   Qt::MouseEventSource  source(QMouseEvent* theWrappedObject) const;
   QPointF  windowPos(QMouseEvent* theWrappedObject) const;
   int  x(QMouseEvent* theWrappedObject) const;
   int  y(QMouseEvent* theWrappedObject) const;
};





class PythonQtShell_QMoveEvent : public QMoveEvent
{
public:
    PythonQtShell_QMoveEvent(const QMoveEvent&  arg__1):QMoveEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos):QMoveEvent(pos, oldPos),_wrapper(nullptr) {};

   ~PythonQtShell_QMoveEvent() override;

QMoveEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMoveEvent : public QMoveEvent
{ public:
inline QMoveEvent&  promoted_operator_assign(const QMoveEvent&  other) { return this->QMoveEvent::operator=(other); }
inline QMoveEvent*  py_q_clone() const { return QMoveEvent::clone(); }
};

class PythonQtWrapper_QMoveEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMoveEvent* new_QMoveEvent(const QMoveEvent&  arg__1);
QMoveEvent* new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos);
void delete_QMoveEvent(QMoveEvent* obj) { delete obj; }
   QMoveEvent*  py_q_clone(QMoveEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMoveEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  oldPos(QMoveEvent* theWrappedObject) const;
   QMoveEvent*  operator_assign(QMoveEvent* theWrappedObject, const QMoveEvent&  other);
   const QPoint*  pos(QMoveEvent* theWrappedObject) const;
};





class PythonQtShell_QMovie : public QMovie
{
public:
    PythonQtShell_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr):QMovie(device, format, parent),_wrapper(nullptr) {};
    PythonQtShell_QMovie(QObject*  parent = nullptr):QMovie(parent),_wrapper(nullptr) {};
    PythonQtShell_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr):QMovie(fileName, format, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMovie() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMovie : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMovie* new_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr);
QMovie* new_QMovie(QObject*  parent = nullptr);
QMovie* new_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr);
void delete_QMovie(QMovie* obj) { delete obj; }
   QColor  backgroundColor(QMovie* theWrappedObject) const;
   QMovie::CacheMode  cacheMode(QMovie* theWrappedObject) const;
   int  currentFrameNumber(QMovie* theWrappedObject) const;
   QImage  currentImage(QMovie* theWrappedObject) const;
   QPixmap  currentPixmap(QMovie* theWrappedObject) const;
   QIODevice*  device(QMovie* theWrappedObject) const;
   QString  fileName(QMovie* theWrappedObject) const;
   QByteArray  format(QMovie* theWrappedObject) const;
   int  frameCount(QMovie* theWrappedObject) const;
   QRect  frameRect(QMovie* theWrappedObject) const;
   bool  isValid(QMovie* theWrappedObject) const;
   bool  jumpToFrame(QMovie* theWrappedObject, int  frameNumber);
   QImageReader::ImageReaderError  lastError(QMovie* theWrappedObject) const;
   QString  lastErrorString(QMovie* theWrappedObject) const;
   int  loopCount(QMovie* theWrappedObject) const;
   int  nextFrameDelay(QMovie* theWrappedObject) const;
   QSize  scaledSize(QMovie* theWrappedObject);
   void setBackgroundColor(QMovie* theWrappedObject, const QColor&  color);
   void setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode);
   void setDevice(QMovie* theWrappedObject, QIODevice*  device);
   void setFileName(QMovie* theWrappedObject, const QString&  fileName);
   void setFormat(QMovie* theWrappedObject, const QByteArray&  format);
   void setScaledSize(QMovie* theWrappedObject, const QSize&  size);
   int  speed(QMovie* theWrappedObject) const;
   QMovie::MovieState  state(QMovie* theWrappedObject) const;
   QList<QByteArray >  static_QMovie_supportedFormats();
    bool __nonzero__(QMovie* obj) { return obj->isValid(); }
};





class PythonQtShell_QNativeGestureEvent : public QNativeGestureEvent
{
public:
    PythonQtShell_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointingDevice*  dev, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, qreal  value, quint64  sequenceId, quint64  intArgument):QNativeGestureEvent(type, dev, localPos, scenePos, globalPos, value, sequenceId, intArgument),_wrapper(nullptr) {};
    PythonQtShell_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointingDevice*  dev, int  fingerCount, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, qreal  value, const QPointF&  delta, quint64  sequenceId = UINT64_MAX):QNativeGestureEvent(type, dev, fingerCount, localPos, scenePos, globalPos, value, delta, sequenceId),_wrapper(nullptr) {};
    PythonQtShell_QNativeGestureEvent(const QNativeGestureEvent&  arg__1):QNativeGestureEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QNativeGestureEvent() override;

QNativeGestureEvent*  clone() const override;
bool  isBeginEvent() const override;
bool  isEndEvent() const override;
bool  isUpdateEvent() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QNativeGestureEvent : public QNativeGestureEvent
{ public:
inline QNativeGestureEvent&  promoted_operator_assign(const QNativeGestureEvent&  other) { return this->QNativeGestureEvent::operator=(other); }
inline QNativeGestureEvent*  py_q_clone() const { return QNativeGestureEvent::clone(); }
};

class PythonQtWrapper_QNativeGestureEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QNativeGestureEvent* new_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointingDevice*  dev, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, qreal  value, quint64  sequenceId, quint64  intArgument);
QNativeGestureEvent* new_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointingDevice*  dev, int  fingerCount, const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, qreal  value, const QPointF&  delta, quint64  sequenceId = UINT64_MAX);
QNativeGestureEvent* new_QNativeGestureEvent(const QNativeGestureEvent&  arg__1);
void delete_QNativeGestureEvent(QNativeGestureEvent* obj) { delete obj; }
   QNativeGestureEvent*  py_q_clone(QNativeGestureEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QNativeGestureEvent*)theWrappedObject)->py_q_clone());}
   QPointF  delta(QNativeGestureEvent* theWrappedObject) const;
   int  fingerCount(QNativeGestureEvent* theWrappedObject) const;
   Qt::NativeGestureType  gestureType(QNativeGestureEvent* theWrappedObject) const;
   const QPoint  globalPos(QNativeGestureEvent* theWrappedObject) const;
   QPointF  localPos(QNativeGestureEvent* theWrappedObject) const;
   QNativeGestureEvent*  operator_assign(QNativeGestureEvent* theWrappedObject, const QNativeGestureEvent&  other);
   const QPoint  pos(QNativeGestureEvent* theWrappedObject) const;
   QPointF  screenPos(QNativeGestureEvent* theWrappedObject) const;
   qreal  value(QNativeGestureEvent* theWrappedObject) const;
   QPointF  windowPos(QNativeGestureEvent* theWrappedObject) const;
};





class PythonQtShell_QOffscreenSurface : public QOffscreenSurface
{
public:
    PythonQtShell_QOffscreenSurface(QScreen*  screen = nullptr, QObject*  parent = nullptr):QOffscreenSurface(screen, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOffscreenSurface() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QSurfaceFormat  format() const override;
QSize  size() const override;
QSurface::SurfaceType  surfaceType() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QOffscreenSurface : public QOffscreenSurface
{ public:
inline void*  promoted_resolveInterface(const char*  name, int  revision) const { return this->resolveInterface(name, revision); }
inline QSurfaceFormat  py_q_format() const { return QOffscreenSurface::format(); }
inline QSize  py_q_size() const { return QOffscreenSurface::size(); }
inline QSurface::SurfaceType  py_q_surfaceType() const { return QOffscreenSurface::surfaceType(); }
};

class PythonQtWrapper_QOffscreenSurface : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOffscreenSurface* new_QOffscreenSurface(QScreen*  screen = nullptr, QObject*  parent = nullptr);
void delete_QOffscreenSurface(QOffscreenSurface* obj) { delete obj; }
   void create(QOffscreenSurface* theWrappedObject);
   void destroy(QOffscreenSurface* theWrappedObject);
   QSurfaceFormat  py_q_format(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_format());}
   bool  isValid(QOffscreenSurface* theWrappedObject) const;
   QSurfaceFormat  requestedFormat(QOffscreenSurface* theWrappedObject) const;
   void*  resolveInterface(QOffscreenSurface* theWrappedObject, const char*  name, int  revision) const;
   QScreen*  screen(QOffscreenSurface* theWrappedObject) const;
   void setFormat(QOffscreenSurface* theWrappedObject, const QSurfaceFormat&  format);
   void setScreen(QOffscreenSurface* theWrappedObject, QScreen*  screen);
   QSize  py_q_size(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_size());}
   QSurface::SurfaceType  py_q_surfaceType(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_surfaceType());}
    bool __nonzero__(QOffscreenSurface* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLBuffer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access RangeAccessFlag Type UsagePattern )
enum Access{
  ReadOnly = QOpenGLBuffer::ReadOnly,   WriteOnly = QOpenGLBuffer::WriteOnly,   ReadWrite = QOpenGLBuffer::ReadWrite};
enum RangeAccessFlag{
  RangeRead = QOpenGLBuffer::RangeRead,   RangeWrite = QOpenGLBuffer::RangeWrite,   RangeInvalidate = QOpenGLBuffer::RangeInvalidate,   RangeInvalidateBuffer = QOpenGLBuffer::RangeInvalidateBuffer,   RangeFlushExplicit = QOpenGLBuffer::RangeFlushExplicit,   RangeUnsynchronized = QOpenGLBuffer::RangeUnsynchronized};
enum Type{
  VertexBuffer = QOpenGLBuffer::VertexBuffer,   IndexBuffer = QOpenGLBuffer::IndexBuffer,   PixelPackBuffer = QOpenGLBuffer::PixelPackBuffer,   PixelUnpackBuffer = QOpenGLBuffer::PixelUnpackBuffer};
enum UsagePattern{
  StreamDraw = QOpenGLBuffer::StreamDraw,   StreamRead = QOpenGLBuffer::StreamRead,   StreamCopy = QOpenGLBuffer::StreamCopy,   StaticDraw = QOpenGLBuffer::StaticDraw,   StaticRead = QOpenGLBuffer::StaticRead,   StaticCopy = QOpenGLBuffer::StaticCopy,   DynamicDraw = QOpenGLBuffer::DynamicDraw,   DynamicRead = QOpenGLBuffer::DynamicRead,   DynamicCopy = QOpenGLBuffer::DynamicCopy};
public Q_SLOTS:
QOpenGLBuffer* new_QOpenGLBuffer();
QOpenGLBuffer* new_QOpenGLBuffer(QOpenGLBuffer::Type  type);
QOpenGLBuffer* new_QOpenGLBuffer(const QOpenGLBuffer&  other);
void delete_QOpenGLBuffer(QOpenGLBuffer* obj) { delete obj; }
   void allocate(QOpenGLBuffer* theWrappedObject, const void*  data, int  count);
   void allocate(QOpenGLBuffer* theWrappedObject, int  count);
   bool  bind(QOpenGLBuffer* theWrappedObject);
   GLuint  bufferId(QOpenGLBuffer* theWrappedObject) const;
   bool  create(QOpenGLBuffer* theWrappedObject);
   void destroy(QOpenGLBuffer* theWrappedObject);
   bool  isCreated(QOpenGLBuffer* theWrappedObject) const;
   void*  map(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer::Access  access);
   QOpenGLBuffer*  operator_assign(QOpenGLBuffer* theWrappedObject, const QOpenGLBuffer&  other);
   bool  read(QOpenGLBuffer* theWrappedObject, int  offset, void*  data, int  count);
   void release(QOpenGLBuffer* theWrappedObject);
   void static_QOpenGLBuffer_release(QOpenGLBuffer::Type  type);
   void setUsagePattern(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer::UsagePattern  value);
   int  size(QOpenGLBuffer* theWrappedObject) const;
   void swap(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer&  other);
   QOpenGLBuffer::Type  type(QOpenGLBuffer* theWrappedObject) const;
   bool  unmap(QOpenGLBuffer* theWrappedObject);
   QOpenGLBuffer::UsagePattern  usagePattern(QOpenGLBuffer* theWrappedObject) const;
   void write(QOpenGLBuffer* theWrappedObject, int  offset, const void*  data, int  count);
};





class PythonQtShell_QOpenGLContext : public QOpenGLContext
{
public:
    PythonQtShell_QOpenGLContext(QObject*  parent = nullptr):QOpenGLContext(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLContext() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QOpenGLContext : public QOpenGLContext
{ public:
inline void*  promoted_resolveInterface(const char*  name, int  revision) const { return this->resolveInterface(name, revision); }
};

class PythonQtWrapper_QOpenGLContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenGLModuleType )
enum OpenGLModuleType{
  LibGL = QOpenGLContext::LibGL,   LibGLES = QOpenGLContext::LibGLES};
public Q_SLOTS:
QOpenGLContext* new_QOpenGLContext(QObject*  parent = nullptr);
void delete_QOpenGLContext(QOpenGLContext* obj) { delete obj; }
   bool  static_QOpenGLContext_areSharing(QOpenGLContext*  first, QOpenGLContext*  second);
   bool  create(QOpenGLContext* theWrappedObject);
   QOpenGLContext*  static_QOpenGLContext_currentContext();
   GLuint  defaultFramebufferObject(QOpenGLContext* theWrappedObject) const;
   void doneCurrent(QOpenGLContext* theWrappedObject);
   QSet<QByteArray >  extensions(QOpenGLContext* theWrappedObject) const;
   QSurfaceFormat  format(QOpenGLContext* theWrappedObject) const;
   QOpenGLFunctions*  functions(QOpenGLContext* theWrappedObject) const;
   QOpenGLContext*  static_QOpenGLContext_globalShareContext();
   bool  hasExtension(QOpenGLContext* theWrappedObject, const QByteArray&  extension) const;
   bool  isOpenGLES(QOpenGLContext* theWrappedObject) const;
   bool  isValid(QOpenGLContext* theWrappedObject) const;
   bool  makeCurrent(QOpenGLContext* theWrappedObject, QSurface*  surface);
   QOpenGLContext::OpenGLModuleType  static_QOpenGLContext_openGLModuleType();
   void*  resolveInterface(QOpenGLContext* theWrappedObject, const char*  name, int  revision) const;
   QScreen*  screen(QOpenGLContext* theWrappedObject) const;
   void setFormat(QOpenGLContext* theWrappedObject, const QSurfaceFormat&  format);
   void setScreen(QOpenGLContext* theWrappedObject, QScreen*  screen);
   void setShareContext(QOpenGLContext* theWrappedObject, QOpenGLContext*  shareContext);
   QOpenGLContext*  shareContext(QOpenGLContext* theWrappedObject) const;
   QOpenGLContextGroup*  shareGroup(QOpenGLContext* theWrappedObject) const;
   bool  static_QOpenGLContext_supportsThreadedOpenGL();
   QSurface*  surface(QOpenGLContext* theWrappedObject) const;
   void swapBuffers(QOpenGLContext* theWrappedObject, QSurface*  surface);
    QString py_toString(QOpenGLContext*);
    bool __nonzero__(QOpenGLContext* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLContextGroup : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
void delete_QOpenGLContextGroup(QOpenGLContextGroup* obj) { delete obj; }
   QOpenGLContextGroup*  static_QOpenGLContextGroup_currentContextGroup();
   QList<QOpenGLContext* >  shares(QOpenGLContextGroup* theWrappedObject) const;
    QString py_toString(QOpenGLContextGroup*);
};





class PythonQtShell_QOpenGLFramebufferObject : public QOpenGLFramebufferObject
{
public:
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, GLenum  target = GL_TEXTURE_2D):QOpenGLFramebufferObject(size, target),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0):QOpenGLFramebufferObject(size, attachment, target, internalFormat),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format):QOpenGLFramebufferObject(size, format),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, GLenum  target = GL_TEXTURE_2D):QOpenGLFramebufferObject(width, height, target),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0):QOpenGLFramebufferObject(width, height, attachment, target, internalFormat),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format):QOpenGLFramebufferObject(width, height, format),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLFramebufferObject() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOpenGLFramebufferObject : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attachment FramebufferRestorePolicy )
enum Attachment{
  NoAttachment = QOpenGLFramebufferObject::NoAttachment,   CombinedDepthStencil = QOpenGLFramebufferObject::CombinedDepthStencil,   Depth = QOpenGLFramebufferObject::Depth};
enum FramebufferRestorePolicy{
  DontRestoreFramebufferBinding = QOpenGLFramebufferObject::DontRestoreFramebufferBinding,   RestoreFramebufferBindingToDefault = QOpenGLFramebufferObject::RestoreFramebufferBindingToDefault,   RestoreFrameBufferBinding = QOpenGLFramebufferObject::RestoreFrameBufferBinding};
public Q_SLOTS:
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, GLenum  target = GL_TEXTURE_2D);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, GLenum  target = GL_TEXTURE_2D);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format);
void delete_QOpenGLFramebufferObject(QOpenGLFramebufferObject* obj) { delete obj; }
   void addColorAttachment(QOpenGLFramebufferObject* theWrappedObject, const QSize&  size, GLenum  internalFormat = 0);
   void addColorAttachment(QOpenGLFramebufferObject* theWrappedObject, int  width, int  height, GLenum  internalFormat = 0);
   QOpenGLFramebufferObject::Attachment  attachment(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  bind(QOpenGLFramebufferObject* theWrappedObject);
   bool  static_QOpenGLFramebufferObject_bindDefault();
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, QOpenGLFramebufferObject*  source, GLbitfield  buffers = GL_COLOR_BUFFER_BIT, GLenum  filter = GL_NEAREST);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers = GL_COLOR_BUFFER_BIT, GLenum  filter = GL_NEAREST);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter, int  readColorAttachmentIndex, int  drawColorAttachmentIndex);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter, int  readColorAttachmentIndex, int  drawColorAttachmentIndex, QOpenGLFramebufferObject::FramebufferRestorePolicy  restorePolicy);
   QOpenGLFramebufferObjectFormat  format(QOpenGLFramebufferObject* theWrappedObject) const;
   GLuint  handle(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  static_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit();
   bool  static_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects();
   int  height(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  isBound(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  release(QOpenGLFramebufferObject* theWrappedObject);
   void setAttachment(QOpenGLFramebufferObject* theWrappedObject, QOpenGLFramebufferObject::Attachment  attachment);
   QSize  size(QOpenGLFramebufferObject* theWrappedObject) const;
   QList<QSize >  sizes(QOpenGLFramebufferObject* theWrappedObject) const;
   GLuint  takeTexture(QOpenGLFramebufferObject* theWrappedObject);
   GLuint  takeTexture(QOpenGLFramebufferObject* theWrappedObject, int  colorAttachmentIndex);
   GLuint  texture(QOpenGLFramebufferObject* theWrappedObject) const;
   QList<GLuint >  textures(QOpenGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject, bool  flipped = true) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject, bool  flipped, int  colorAttachmentIndex) const;
   int  width(QOpenGLFramebufferObject* theWrappedObject) const;
    bool __nonzero__(QOpenGLFramebufferObject* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLFramebufferObjectFormat : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLFramebufferObjectFormat* new_QOpenGLFramebufferObjectFormat();
QOpenGLFramebufferObjectFormat* new_QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat&  other);
void delete_QOpenGLFramebufferObjectFormat(QOpenGLFramebufferObjectFormat* obj) { delete obj; }
   QOpenGLFramebufferObject::Attachment  attachment(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   GLenum  internalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   bool  mipmap(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   bool  __ne__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const;
   QOpenGLFramebufferObjectFormat*  operator_assign(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other);
   bool  __eq__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const;
   int  samples(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   void setAttachment(QOpenGLFramebufferObjectFormat* theWrappedObject, QOpenGLFramebufferObject::Attachment  attachment);
   void setInternalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject, GLenum  internalTextureFormat);
   void setMipmap(QOpenGLFramebufferObjectFormat* theWrappedObject, bool  enabled);
   void setSamples(QOpenGLFramebufferObjectFormat* theWrappedObject, int  samples);
   void setTextureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject, GLenum  target);
   GLenum  textureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
};





class PythonQtShell_QOpenGLPaintDevice : public QOpenGLPaintDevice
{
public:
    PythonQtShell_QOpenGLPaintDevice():QOpenGLPaintDevice(),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLPaintDevice(const QSize&  size):QOpenGLPaintDevice(size),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLPaintDevice(int  width, int  height):QOpenGLPaintDevice(width, height),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLPaintDevice() override;

int  devType() const override;
void ensureActiveTarget() override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QOpenGLPaintDevice : public QOpenGLPaintDevice
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline int  py_q_devType() const { return QOpenGLPaintDevice::devType(); }
inline void py_q_ensureActiveTarget() { QOpenGLPaintDevice::ensureActiveTarget(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLPaintDevice::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QOpenGLPaintDevice::paintEngine(); }
};

class PythonQtWrapper_QOpenGLPaintDevice : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLPaintDevice* new_QOpenGLPaintDevice();
QOpenGLPaintDevice* new_QOpenGLPaintDevice(const QSize&  size);
QOpenGLPaintDevice* new_QOpenGLPaintDevice(int  width, int  height);
void delete_QOpenGLPaintDevice(QOpenGLPaintDevice* obj) { delete obj; }
   QOpenGLContext*  context(QOpenGLPaintDevice* theWrappedObject) const;
   int  py_q_devType(QOpenGLPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_devType());}
   qreal  dotsPerMeterX(QOpenGLPaintDevice* theWrappedObject) const;
   qreal  dotsPerMeterY(QOpenGLPaintDevice* theWrappedObject) const;
   void ensureActiveTarget(QOpenGLPaintDevice* theWrappedObject);
   void py_q_ensureActiveTarget(QOpenGLPaintDevice* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_ensureActiveTarget());}
   int  py_q_metric(QOpenGLPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  py_q_paintEngine(QOpenGLPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_paintEngine());}
   bool  paintFlipped(QOpenGLPaintDevice* theWrappedObject) const;
   void setDevicePixelRatio(QOpenGLPaintDevice* theWrappedObject, qreal  devicePixelRatio);
   void setDotsPerMeterX(QOpenGLPaintDevice* theWrappedObject, qreal  arg__1);
   void setDotsPerMeterY(QOpenGLPaintDevice* theWrappedObject, qreal  arg__1);
   void setPaintFlipped(QOpenGLPaintDevice* theWrappedObject, bool  flipped);
   void setSize(QOpenGLPaintDevice* theWrappedObject, const QSize&  size);
   QSize  size(QOpenGLPaintDevice* theWrappedObject) const;
};





class PythonQtShell_QOpenGLShader : public QOpenGLShader
{
public:
    PythonQtShell_QOpenGLShader(QOpenGLShader::ShaderType  type, QObject*  parent = nullptr):QOpenGLShader(type, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLShader() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOpenGLShader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShaderTypeBit )
Q_FLAGS(ShaderType )
enum ShaderTypeBit{
  Vertex = QOpenGLShader::Vertex,   Fragment = QOpenGLShader::Fragment,   Geometry = QOpenGLShader::Geometry,   TessellationControl = QOpenGLShader::TessellationControl,   TessellationEvaluation = QOpenGLShader::TessellationEvaluation,   Compute = QOpenGLShader::Compute};
Q_DECLARE_FLAGS(ShaderType, ShaderTypeBit)
public Q_SLOTS:
QOpenGLShader* new_QOpenGLShader(QOpenGLShader::ShaderType  type, QObject*  parent = nullptr);
void delete_QOpenGLShader(QOpenGLShader* obj) { delete obj; }
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const QByteArray&  source);
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const QString&  source);
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const char*  source);
   bool  compileSourceFile(QOpenGLShader* theWrappedObject, const QString&  fileName);
   bool  static_QOpenGLShader_hasOpenGLShaders(QOpenGLShader::ShaderType  type, QOpenGLContext*  context = nullptr);
   bool  isCompiled(QOpenGLShader* theWrappedObject) const;
   QString  log(QOpenGLShader* theWrappedObject) const;
   GLuint  shaderId(QOpenGLShader* theWrappedObject) const;
   QOpenGLShader::ShaderType  shaderType(QOpenGLShader* theWrappedObject) const;
   QByteArray  sourceCode(QOpenGLShader* theWrappedObject) const;
};





class PythonQtShell_QOpenGLShaderProgram : public QOpenGLShaderProgram
{
public:
    PythonQtShell_QOpenGLShaderProgram(QObject*  parent = nullptr):QOpenGLShaderProgram(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLShaderProgram() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  link() override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QOpenGLShaderProgram : public QOpenGLShaderProgram
{ public:
inline bool  py_q_link() { return QOpenGLShaderProgram::link(); }
};

class PythonQtWrapper_QOpenGLShaderProgram : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLShaderProgram* new_QOpenGLShaderProgram(QObject*  parent = nullptr);
void delete_QOpenGLShaderProgram(QOpenGLShaderProgram* obj) { delete obj; }
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QByteArray&  source);
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  source);
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const char*  source);
   bool  addCacheableShaderFromSourceFile(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  fileName);
   bool  addShader(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader*  shader);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QByteArray&  source);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  source);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const char*  source);
   bool  addShaderFromSourceFile(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  fileName);
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name) const;
   bool  bind(QOpenGLShaderProgram* theWrappedObject);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name, int  location);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name, int  location);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name, int  location);
   bool  create(QOpenGLShaderProgram* theWrappedObject);
   QList<float >  defaultInnerTessellationLevels(QOpenGLShaderProgram* theWrappedObject) const;
   QList<float >  defaultOuterTessellationLevels(QOpenGLShaderProgram* theWrappedObject) const;
   void disableAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name);
   void disableAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location);
   void enableAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name);
   void enableAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location);
   bool  static_QOpenGLShaderProgram_hasOpenGLShaderPrograms(QOpenGLContext*  context = nullptr);
   bool  isLinked(QOpenGLShaderProgram* theWrappedObject) const;
   bool  link(QOpenGLShaderProgram* theWrappedObject);
   bool  py_q_link(QOpenGLShaderProgram* theWrappedObject){  return (((PythonQtPublicPromoter_QOpenGLShaderProgram*)theWrappedObject)->py_q_link());}
   QString  log(QOpenGLShaderProgram* theWrappedObject) const;
   int  maxGeometryOutputVertices(QOpenGLShaderProgram* theWrappedObject) const;
   int  patchVertexCount(QOpenGLShaderProgram* theWrappedObject) const;
   GLuint  programId(QOpenGLShaderProgram* theWrappedObject) const;
   void release(QOpenGLShaderProgram* theWrappedObject);
   void removeAllShaders(QOpenGLShaderProgram* theWrappedObject);
   void removeShader(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader*  shader);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, const void*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, GLenum  type, const void*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  stride = 0);
   void setAttributeBuffer(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, int  offset, int  tupleSize, int  stride = 0);
   void setAttributeBuffer(QOpenGLShaderProgram* theWrappedObject, int  location, GLenum  type, int  offset, int  tupleSize, int  stride = 0);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  columns, int  rows);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QColor&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  columns, int  rows);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QColor&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setDefaultInnerTessellationLevels(QOpenGLShaderProgram* theWrappedObject, const QList<float >&  levels);
   void setDefaultOuterTessellationLevels(QOpenGLShaderProgram* theWrappedObject, const QList<float >&  levels);
   void setPatchVertexCount(QOpenGLShaderProgram* theWrappedObject, int  count);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLuint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QColor&  color);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QPoint&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QPointF&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QSize&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QSizeF&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QTransform&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLuint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QColor&  color);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QPoint&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QPointF&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QSize&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QSizeF&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QTransform&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  count, int  tupleSize);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLuint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  count, int  tupleSize);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLuint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  count);
   QList<QOpenGLShader* >  shaders(QOpenGLShaderProgram* theWrappedObject) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name) const;
};


