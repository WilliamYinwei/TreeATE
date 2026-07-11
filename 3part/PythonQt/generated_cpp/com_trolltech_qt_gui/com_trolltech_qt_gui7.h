#include <PythonQt.h>
#include <QObject>
#include <QPrinterInfo>
#include <QVariant>
#include <QtPrintSupport/qprintdialog.h>
#include <QtPrintSupport/qprintengine.h>
#include <QtPrintSupport/qprinter.h>
#include <QtPrintSupport/qprinterinfo.h>
#include <QtPrintSupport/qprintpreviewdialog.h>
#include <QtPrintSupport/qprintpreviewwidget.h>
#include <QtWidgets/qapplication.h>
#include <QtWidgets/qbuttongroup.h>
#include <QtWidgets/qgesture.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qmenu.h>
#include <QtWidgets/qplaintextedit.h>
#include <QtWidgets/qprogressbar.h>
#include <QtWidgets/qprogressdialog.h>
#include <QtWidgets/qproxystyle.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qradiobutton.h>
#include <QtWidgets/qscrollbar.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qstyleoption.h>
#include <QtWidgets/qtextedit.h>
#include <QtWidgets/qwidget.h>
#include <qabstracttextdocumentlayout.h>
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
#include <qkeysequence.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpagedpaintdevice.h>
#include <qpagelayout.h>
#include <qpageranges.h>
#include <qpagesize.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpixelformat.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qpoint.h>
#include <qpointingdevice.h>
#include <qpolygon.h>
#include <qquaternion.h>
#include <qrasterwindow.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregion.h>
#include <qregularexpression.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsurfaceformat.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qthread.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvectornd.h>
#include <qwindow.h>



class PythonQtShell_QPinchGesture : public QPinchGesture
{
public:
    PythonQtShell_QPinchGesture(QObject*  parent = nullptr):QPinchGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPinchGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPinchGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChangeFlag )
Q_FLAGS(ChangeFlags )
enum ChangeFlag{
  ScaleFactorChanged = QPinchGesture::ScaleFactorChanged,   RotationAngleChanged = QPinchGesture::RotationAngleChanged,   CenterPointChanged = QPinchGesture::CenterPointChanged};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public Q_SLOTS:
QPinchGesture* new_QPinchGesture(QObject*  parent = nullptr);
void delete_QPinchGesture(QPinchGesture* obj) { delete obj; }
   QPointF  centerPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  changeFlags(QPinchGesture* theWrappedObject) const;
   QPointF  lastCenterPoint(QPinchGesture* theWrappedObject) const;
   qreal  lastRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  lastScaleFactor(QPinchGesture* theWrappedObject) const;
   qreal  rotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  scaleFactor(QPinchGesture* theWrappedObject) const;
   void setCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setLastCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setLastRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setLastScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setStartCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setTotalChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setTotalRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setTotalScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   QPointF  startCenterPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  totalChangeFlags(QPinchGesture* theWrappedObject) const;
   qreal  totalRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  totalScaleFactor(QPinchGesture* theWrappedObject) const;
};





class PythonQtWrapper_QPixelFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AlphaPosition AlphaPremultiplied AlphaUsage ByteOrder ColorModel TypeInterpretation YUVLayout )
enum AlphaPosition{
  AtBeginning = QPixelFormat::AtBeginning,   AtEnd = QPixelFormat::AtEnd};
enum AlphaPremultiplied{
  NotPremultiplied = QPixelFormat::NotPremultiplied,   Premultiplied = QPixelFormat::Premultiplied};
enum AlphaUsage{
  UsesAlpha = QPixelFormat::UsesAlpha,   IgnoresAlpha = QPixelFormat::IgnoresAlpha};
enum ByteOrder{
  LittleEndian = QPixelFormat::LittleEndian,   BigEndian = QPixelFormat::BigEndian,   CurrentSystemEndian = QPixelFormat::CurrentSystemEndian};
enum ColorModel{
  RGB = QPixelFormat::RGB,   BGR = QPixelFormat::BGR,   Indexed = QPixelFormat::Indexed,   Grayscale = QPixelFormat::Grayscale,   CMYK = QPixelFormat::CMYK,   HSL = QPixelFormat::HSL,   HSV = QPixelFormat::HSV,   YUV = QPixelFormat::YUV,   Alpha = QPixelFormat::Alpha};
enum TypeInterpretation{
  UnsignedInteger = QPixelFormat::UnsignedInteger,   UnsignedShort = QPixelFormat::UnsignedShort,   UnsignedByte = QPixelFormat::UnsignedByte,   FloatingPoint = QPixelFormat::FloatingPoint};
enum YUVLayout{
  YUV444 = QPixelFormat::YUV444,   YUV422 = QPixelFormat::YUV422,   YUV411 = QPixelFormat::YUV411,   YUV420P = QPixelFormat::YUV420P,   YUV420SP = QPixelFormat::YUV420SP,   YV12 = QPixelFormat::YV12,   UYVY = QPixelFormat::UYVY,   YUYV = QPixelFormat::YUYV,   NV12 = QPixelFormat::NV12,   NV21 = QPixelFormat::NV21,   IMC1 = QPixelFormat::IMC1,   IMC2 = QPixelFormat::IMC2,   IMC3 = QPixelFormat::IMC3,   IMC4 = QPixelFormat::IMC4,   Y8 = QPixelFormat::Y8,   Y16 = QPixelFormat::Y16};
public Q_SLOTS:
QPixelFormat* new_QPixelFormat();
QPixelFormat* new_QPixelFormat(QPixelFormat::ColorModel  colorModel, uchar  firstSize, uchar  secondSize, uchar  thirdSize, uchar  fourthSize, uchar  fifthSize, uchar  alphaSize, QPixelFormat::AlphaUsage  alphaUsage, QPixelFormat::AlphaPosition  alphaPosition, QPixelFormat::AlphaPremultiplied  premultiplied, QPixelFormat::TypeInterpretation  typeInterpretation, QPixelFormat::ByteOrder  byteOrder = QPixelFormat::CurrentSystemEndian, uchar  subEnum = 0);
void delete_QPixelFormat(QPixelFormat* obj) { delete obj; }
   QPixelFormat::AlphaPosition  alphaPosition(QPixelFormat* theWrappedObject) const;
   uchar  alphaSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::AlphaUsage  alphaUsage(QPixelFormat* theWrappedObject) const;
   uchar  bitsPerPixel(QPixelFormat* theWrappedObject) const;
   uchar  blackSize(QPixelFormat* theWrappedObject) const;
   uchar  blueSize(QPixelFormat* theWrappedObject) const;
   uchar  brightnessSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::ByteOrder  byteOrder(QPixelFormat* theWrappedObject) const;
   uchar  channelCount(QPixelFormat* theWrappedObject) const;
   QPixelFormat::ColorModel  colorModel(QPixelFormat* theWrappedObject) const;
   uchar  cyanSize(QPixelFormat* theWrappedObject) const;
   uchar  greenSize(QPixelFormat* theWrappedObject) const;
   uchar  hueSize(QPixelFormat* theWrappedObject) const;
   uchar  lightnessSize(QPixelFormat* theWrappedObject) const;
   uchar  magentaSize(QPixelFormat* theWrappedObject) const;
   bool  __ne__(QPixelFormat* theWrappedObject, QPixelFormat  fmt2);
   bool  __eq__(QPixelFormat* theWrappedObject, QPixelFormat  fmt2);
   QPixelFormat::AlphaPremultiplied  premultiplied(QPixelFormat* theWrappedObject) const;
   uchar  redSize(QPixelFormat* theWrappedObject) const;
   uchar  saturationSize(QPixelFormat* theWrappedObject) const;
   uchar  subEnum(QPixelFormat* theWrappedObject) const;
   QPixelFormat::TypeInterpretation  typeInterpretation(QPixelFormat* theWrappedObject) const;
   uchar  yellowSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::YUVLayout  yuvLayout(QPixelFormat* theWrappedObject) const;
    QString py_toString(QPixelFormat*);
};





class PythonQtShell_QPixmapCache : public QPixmapCache
{
public:
    PythonQtShell_QPixmapCache():QPixmapCache(),_wrapper(nullptr) {};

   ~PythonQtShell_QPixmapCache();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; }
   int  static_QPixmapCache_cacheLimit();
   void static_QPixmapCache_clear();
   bool  static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap);
   bool  static_QPixmapCache_find(const QString&  key, QPixmap*  pixmap);
   QPixmapCache::Key  static_QPixmapCache_insert(const QPixmap&  pixmap);
   bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_remove(const QPixmapCache::Key&  key);
   void static_QPixmapCache_remove(const QString&  key);
   bool  static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_setCacheLimit(int  arg__1);
};





class PythonQtWrapper_QPixmapCache__Key : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPixmapCache::Key* new_QPixmapCache__Key();
QPixmapCache::Key* new_QPixmapCache__Key(const QPixmapCache::Key&  other);
void delete_QPixmapCache__Key(QPixmapCache::Key* obj) { delete obj; }
   bool  isValid(QPixmapCache::Key* theWrappedObject) const;
   bool  __ne__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
   QPixmapCache::Key*  operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other);
   bool  __eq__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
   void swap(QPixmapCache::Key* theWrappedObject, QPixmapCache::Key&  other);
    bool __nonzero__(QPixmapCache::Key* obj) { return obj->isValid(); }
};





class PythonQtShell_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{
public:
    PythonQtShell_QPlainTextDocumentLayout(QTextDocument*  document):QPlainTextDocumentLayout(document),_wrapper(nullptr) {};

   ~PythonQtShell_QPlainTextDocumentLayout() override;

QRectF  blockBoundingRect(const QTextBlock&  block) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
void documentChanged(int  from, int  arg__2, int  charsAdded) override;
QSizeF  documentSize() const override;
void draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2) override;
void drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QRectF  frameBoundingRect(QTextFrame*  arg__1) const override;
int  hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const override;
int  pageCount() const override;
void positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) override;
void resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{ public:
inline void promoted_documentChanged(int  from, int  arg__2, int  charsAdded) { this->documentChanged(from, arg__2, charsAdded); }
inline QRectF  py_q_blockBoundingRect(const QTextBlock&  block) const { return QPlainTextDocumentLayout::blockBoundingRect(block); }
inline void py_q_documentChanged(int  from, int  arg__2, int  charsAdded) { QPlainTextDocumentLayout::documentChanged(from, arg__2, charsAdded); }
inline QSizeF  py_q_documentSize() const { return QPlainTextDocumentLayout::documentSize(); }
inline void py_q_draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2) { QPlainTextDocumentLayout::draw(arg__1, arg__2); }
inline QRectF  py_q_frameBoundingRect(QTextFrame*  arg__1) const { return QPlainTextDocumentLayout::frameBoundingRect(arg__1); }
inline int  py_q_hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const { return QPlainTextDocumentLayout::hitTest(arg__1, arg__2); }
inline int  py_q_pageCount() const { return QPlainTextDocumentLayout::pageCount(); }
};

class PythonQtWrapper_QPlainTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPlainTextDocumentLayout* new_QPlainTextDocumentLayout(QTextDocument*  document);
void delete_QPlainTextDocumentLayout(QPlainTextDocumentLayout* obj) { delete obj; }
   QRectF  py_q_blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_blockBoundingRect(block));}
   int  cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const;
   void py_q_documentChanged(QPlainTextDocumentLayout* theWrappedObject, int  from, int  arg__2, int  charsAdded){  (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_documentChanged(from, arg__2, charsAdded));}
   QSizeF  py_q_documentSize(QPlainTextDocumentLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_documentSize());}
   void py_q_draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2){  (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_draw(arg__1, arg__2));}
   void ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   QRectF  py_q_frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_frameBoundingRect(arg__1));}
   int  py_q_hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_hitTest(arg__1, arg__2));}
   int  py_q_pageCount(QPlainTextDocumentLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_pageCount());}
   void requestUpdate(QPlainTextDocumentLayout* theWrappedObject);
   void setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width);
};





class PythonQtShell_QPlainTextEdit : public QPlainTextEdit
{
public:
    PythonQtShell_QPlainTextEdit(QWidget*  parent = nullptr):QPlainTextEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QPlainTextEdit(const QString&  text, QWidget*  parent = nullptr):QPlainTextEdit(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPlainTextEdit() override;

void actionEvent(QActionEvent*  event) override;
bool  canInsertFromMimeData(const QMimeData*  source) const override;
void changeEvent(QEvent*  e) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  e) override;
QMimeData*  createMimeDataFromSelection() const override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void doSetTextCursor(const QTextCursor&  cursor) override;
void dragEnterEvent(QDragEnterEvent*  e) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const override;
void insertFromMimeData(const QMimeData*  source) override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
QVariant  loadResource(int  type, const QUrl&  name) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  e) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  e) override;
void scrollContentsBy(int  dx, int  dy) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
bool  viewportEvent(QEvent*  arg__1) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPlainTextEdit : public QPlainTextEdit
{ public:
inline QRectF  promoted_blockBoundingGeometry(const QTextBlock&  block) const { return this->blockBoundingGeometry(block); }
inline QRectF  promoted_blockBoundingRect(const QTextBlock&  block) const { return this->blockBoundingRect(block); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return this->canInsertFromMimeData(source); }
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline QPointF  promoted_contentOffset() const { return this->contentOffset(); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { this->contextMenuEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return this->createMimeDataFromSelection(); }
inline void promoted_doSetTextCursor(const QTextCursor&  cursor) { this->doSetTextCursor(cursor); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { this->dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QTextBlock  promoted_firstVisibleBlock() const { return this->firstVisibleBlock(); }
inline void promoted_focusInEvent(QFocusEvent*  e) { this->focusInEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { this->focusOutEvent(e); }
inline QAbstractTextDocumentLayout::PaintContext  promoted_getPaintContext() const { return this->getPaintContext(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { this->insertFromMimeData(source); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { this->keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { this->keyReleaseEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { this->mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  e) { this->timerEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void promoted_zoomInF(float  range) { this->zoomInF(range); }
inline bool  py_q_canInsertFromMimeData(const QMimeData*  source) const { return QPlainTextEdit::canInsertFromMimeData(source); }
inline void py_q_changeEvent(QEvent*  e) { QPlainTextEdit::changeEvent(e); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  e) { QPlainTextEdit::contextMenuEvent(e); }
inline QMimeData*  py_q_createMimeDataFromSelection() const { return QPlainTextEdit::createMimeDataFromSelection(); }
inline void py_q_doSetTextCursor(const QTextCursor&  cursor) { QPlainTextEdit::doSetTextCursor(cursor); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  e) { QPlainTextEdit::dragEnterEvent(e); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QPlainTextEdit::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QPlainTextEdit::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QPlainTextEdit::dropEvent(e); }
inline bool  py_q_event(QEvent*  e) { return QPlainTextEdit::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  e) { QPlainTextEdit::focusInEvent(e); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QPlainTextEdit::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  e) { QPlainTextEdit::focusOutEvent(e); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QPlainTextEdit::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  property) const { return QPlainTextEdit::inputMethodQuery(property); }
inline void py_q_insertFromMimeData(const QMimeData*  source) { QPlainTextEdit::insertFromMimeData(source); }
inline void py_q_keyPressEvent(QKeyEvent*  e) { QPlainTextEdit::keyPressEvent(e); }
inline void py_q_keyReleaseEvent(QKeyEvent*  e) { QPlainTextEdit::keyReleaseEvent(e); }
inline QVariant  py_q_loadResource(int  type, const QUrl&  name) { return QPlainTextEdit::loadResource(type, name); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  e) { QPlainTextEdit::mouseDoubleClickEvent(e); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QPlainTextEdit::mouseMoveEvent(e); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QPlainTextEdit::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QPlainTextEdit::mouseReleaseEvent(e); }
inline void py_q_paintEvent(QPaintEvent*  e) { QPlainTextEdit::paintEvent(e); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QPlainTextEdit::resizeEvent(e); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QPlainTextEdit::scrollContentsBy(dx, dy); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QPlainTextEdit::showEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  e) { QPlainTextEdit::timerEvent(e); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QPlainTextEdit::wheelEvent(e); }
};

class PythonQtWrapper_QPlainTextEdit : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPlainTextEdit* new_QPlainTextEdit(QWidget*  parent = nullptr);
QPlainTextEdit* new_QPlainTextEdit(const QString&  text, QWidget*  parent = nullptr);
void delete_QPlainTextEdit(QPlainTextEdit* obj) { delete obj; }
   QString  anchorAt(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   bool  backgroundVisible(QPlainTextEdit* theWrappedObject) const;
   QRectF  blockBoundingGeometry(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const;
   QRectF  blockBoundingRect(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const;
   int  blockCount(QPlainTextEdit* theWrappedObject) const;
   bool  canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const;
   bool  py_q_canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_canInsertFromMimeData(source));}
   bool  canPaste(QPlainTextEdit* theWrappedObject) const;
   bool  centerOnScroll(QPlainTextEdit* theWrappedObject) const;
   void py_q_changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_changeEvent(e));}
   QPointF  contentOffset(QPlainTextEdit* theWrappedObject) const;
   void py_q_contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_contextMenuEvent(e));}
   QMimeData*  createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const;
   QMimeData*  py_q_createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_createMimeDataFromSelection());}
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject);
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject, const QPoint&  position);
   QTextCharFormat  currentCharFormat(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   int  cursorWidth(QPlainTextEdit* theWrappedObject) const;
   void doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void py_q_doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_doSetTextCursor(cursor));}
   QTextDocument*  document(QPlainTextEdit* theWrappedObject) const;
   QString  documentTitle(QPlainTextEdit* theWrappedObject) const;
   void py_q_dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragEnterEvent(e));}
   void py_q_dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dropEvent(e));}
   void ensureCursorVisible(QPlainTextEdit* theWrappedObject);
   bool  py_q_event(QPlainTextEdit* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_event(e));}
   QList<QTextEdit::ExtraSelection >  extraSelections(QPlainTextEdit* theWrappedObject) const;
   bool  find(QPlainTextEdit* theWrappedObject, const QRegularExpression&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   bool  find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   QTextBlock  firstVisibleBlock(QPlainTextEdit* theWrappedObject) const;
   void py_q_focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusInEvent(e));}
   bool  py_q_focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusOutEvent(e));}
   QAbstractTextDocumentLayout::PaintContext  getPaintContext(QPlainTextEdit* theWrappedObject) const;
   void py_q_inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  py_q_inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_inputMethodQuery(property));}
   QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  query, QVariant  argument) const;
   void insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source);
   void py_q_insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_insertFromMimeData(source));}
   bool  isReadOnly(QPlainTextEdit* theWrappedObject) const;
   bool  isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const;
   void py_q_keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_keyPressEvent(e));}
   void py_q_keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_keyReleaseEvent(e));}
   QPlainTextEdit::LineWrapMode  lineWrapMode(QPlainTextEdit* theWrappedObject) const;
   QVariant  loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name);
   QVariant  py_q_loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_loadResource(type, name));}
   int  maximumBlockCount(QPlainTextEdit* theWrappedObject) const;
   void mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void py_q_mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseDoubleClickEvent(e));}
   void py_q_mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   void moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   bool  overwriteMode(QPlainTextEdit* theWrappedObject) const;
   void py_q_paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_paintEvent(e));}
   QString  placeholderText(QPlainTextEdit* theWrappedObject) const;
   void print(QPlainTextEdit* theWrappedObject, QPagedPaintDevice*  printer) const;
   void py_q_resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_resizeEvent(e));}
   void py_q_scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible);
   void setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled);
   void setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setCursorWidth(QPlainTextEdit* theWrappedObject, int  width);
   void setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document);
   void setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title);
   void setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode);
   void setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum);
   void setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite);
   void setPlaceholderText(QPlainTextEdit* theWrappedObject, const QString&  placeholderText);
   void setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro);
   void setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b);
   void setTabStopDistance(QPlainTextEdit* theWrappedObject, qreal  distance);
   void setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable);
   void setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void py_q_showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_showEvent(arg__1));}
   bool  tabChangesFocus(QPlainTextEdit* theWrappedObject) const;
   qreal  tabStopDistance(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QPlainTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QPlainTextEdit* theWrappedObject) const;
   void py_q_timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_timerEvent(e));}
   QString  toPlainText(QPlainTextEdit* theWrappedObject) const;
   void py_q_wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_wheelEvent(e));}
   QTextOption::WrapMode  wordWrapMode(QPlainTextEdit* theWrappedObject) const;
   void zoomInF(QPlainTextEdit* theWrappedObject, float  range);
};





class PythonQtShell_QPlatformSurfaceEvent : public QPlatformSurfaceEvent
{
public:
    PythonQtShell_QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType):QPlatformSurfaceEvent(surfaceEventType),_wrapper(nullptr) {};
    PythonQtShell_QPlatformSurfaceEvent(const QPlatformSurfaceEvent&  arg__1):QPlatformSurfaceEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QPlatformSurfaceEvent() override;

QPlatformSurfaceEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPlatformSurfaceEvent : public QPlatformSurfaceEvent
{ public:
inline QPlatformSurfaceEvent&  promoted_operator_assign(const QPlatformSurfaceEvent&  other) { return this->QPlatformSurfaceEvent::operator=(other); }
inline QPlatformSurfaceEvent*  py_q_clone() const { return QPlatformSurfaceEvent::clone(); }
};

class PythonQtWrapper_QPlatformSurfaceEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SurfaceEventType )
enum SurfaceEventType{
  SurfaceCreated = QPlatformSurfaceEvent::SurfaceCreated,   SurfaceAboutToBeDestroyed = QPlatformSurfaceEvent::SurfaceAboutToBeDestroyed};
public Q_SLOTS:
QPlatformSurfaceEvent* new_QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType);
QPlatformSurfaceEvent* new_QPlatformSurfaceEvent(const QPlatformSurfaceEvent&  arg__1);
void delete_QPlatformSurfaceEvent(QPlatformSurfaceEvent* obj) { delete obj; }
   QPlatformSurfaceEvent*  py_q_clone(QPlatformSurfaceEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlatformSurfaceEvent*)theWrappedObject)->py_q_clone());}
   QPlatformSurfaceEvent*  operator_assign(QPlatformSurfaceEvent* theWrappedObject, const QPlatformSurfaceEvent&  other);
   QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType(QPlatformSurfaceEvent* theWrappedObject) const;
};





class PythonQtShell_QPointerEvent : public QPointerEvent
{
public:
    PythonQtShell_QPointerEvent(QEvent::Type  type, const QPointingDevice*  dev, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QList<QEventPoint >&  points = {}):QPointerEvent(type, dev, modifiers, points),_wrapper(nullptr) {};
    PythonQtShell_QPointerEvent(const QPointerEvent&  arg__1):QPointerEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QPointerEvent() override;

QPointerEvent*  clone() const override;
bool  isBeginEvent() const override;
bool  isEndEvent() const override;
bool  isUpdateEvent() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPointerEvent : public QPointerEvent
{ public:
inline QPointerEvent&  promoted_operator_assign(const QPointerEvent&  other) { return this->QPointerEvent::operator=(other); }
inline QPointerEvent*  py_q_clone() const { return QPointerEvent::clone(); }
inline bool  py_q_isBeginEvent() const { return QPointerEvent::isBeginEvent(); }
inline bool  py_q_isEndEvent() const { return QPointerEvent::isEndEvent(); }
inline bool  py_q_isUpdateEvent() const { return QPointerEvent::isUpdateEvent(); }
inline void py_q_setAccepted(bool  accepted) { QPointerEvent::setAccepted(accepted); }
inline void py_q_setTimestamp(quint64  timestamp) { QPointerEvent::setTimestamp(timestamp); }
};

class PythonQtWrapper_QPointerEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPointerEvent* new_QPointerEvent(QEvent::Type  type, const QPointingDevice*  dev, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QList<QEventPoint >&  points = {});
QPointerEvent* new_QPointerEvent(const QPointerEvent&  arg__1);
void delete_QPointerEvent(QPointerEvent* obj) { delete obj; }
   bool  addPassiveGrabber(QPointerEvent* theWrappedObject, const QEventPoint&  point, QObject*  grabber);
   bool  allPointsAccepted(QPointerEvent* theWrappedObject) const;
   bool  allPointsGrabbed(QPointerEvent* theWrappedObject) const;
   void clearPassiveGrabbers(QPointerEvent* theWrappedObject, const QEventPoint&  point);
   QPointerEvent*  py_q_clone(QPointerEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPointerEvent*)theWrappedObject)->py_q_clone());}
   QObject*  exclusiveGrabber(QPointerEvent* theWrappedObject, const QEventPoint&  point) const;
   bool  isBeginEvent(QPointerEvent* theWrappedObject) const;
   bool  py_q_isBeginEvent(QPointerEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPointerEvent*)theWrappedObject)->py_q_isBeginEvent());}
   bool  isEndEvent(QPointerEvent* theWrappedObject) const;
   bool  py_q_isEndEvent(QPointerEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPointerEvent*)theWrappedObject)->py_q_isEndEvent());}
   bool  isUpdateEvent(QPointerEvent* theWrappedObject) const;
   bool  py_q_isUpdateEvent(QPointerEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPointerEvent*)theWrappedObject)->py_q_isUpdateEvent());}
   QPointerEvent*  operator_assign(QPointerEvent* theWrappedObject, const QPointerEvent&  other);
   QEventPoint*  point(QPointerEvent* theWrappedObject, qsizetype  i);
   QEventPoint*  pointById(QPointerEvent* theWrappedObject, int  id);
   qsizetype  pointCount(QPointerEvent* theWrappedObject) const;
   QPointingDevice::PointerType  pointerType(QPointerEvent* theWrappedObject) const;
   const QPointingDevice*  pointingDevice(QPointerEvent* theWrappedObject) const;
   const QList<QEventPoint >*  points(QPointerEvent* theWrappedObject) const;
   bool  removePassiveGrabber(QPointerEvent* theWrappedObject, const QEventPoint&  point, QObject*  grabber);
   void py_q_setAccepted(QPointerEvent* theWrappedObject, bool  accepted){  (((PythonQtPublicPromoter_QPointerEvent*)theWrappedObject)->py_q_setAccepted(accepted));}
   void setExclusiveGrabber(QPointerEvent* theWrappedObject, const QEventPoint&  point, QObject*  exclusiveGrabber);
   void py_q_setTimestamp(QPointerEvent* theWrappedObject, quint64  timestamp){  (((PythonQtPublicPromoter_QPointerEvent*)theWrappedObject)->py_q_setTimestamp(timestamp));}
};





class PythonQtShell_QPointingDevice : public QPointingDevice
{
public:
    PythonQtShell_QPointingDevice(QObject*  parent = nullptr):QPointingDevice(parent),_wrapper(nullptr) {};
    PythonQtShell_QPointingDevice(const QString&  name, qint64  systemId, QInputDevice::DeviceType  devType, QPointingDevice::PointerType  pType, QInputDevice::Capabilities  caps, int  maxPoints, int  buttonCount, const QString&  seatName = QString(), QPointingDeviceUniqueId  uniqueId = QPointingDeviceUniqueId(), QObject*  parent = nullptr):QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPointingDevice() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPointingDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PointerType )
Q_FLAGS(PointerTypes )
enum class PointerType{
  Unknown = static_cast<int>(QPointingDevice::PointerType::Unknown),   Generic = static_cast<int>(QPointingDevice::PointerType::Generic),   Finger = static_cast<int>(QPointingDevice::PointerType::Finger),   Pen = static_cast<int>(QPointingDevice::PointerType::Pen),   Eraser = static_cast<int>(QPointingDevice::PointerType::Eraser),   Cursor = static_cast<int>(QPointingDevice::PointerType::Cursor),   AllPointerTypes = static_cast<int>(QPointingDevice::PointerType::AllPointerTypes)};
Q_DECLARE_FLAGS(PointerTypes, PointerType)
public Q_SLOTS:
QPointingDevice* new_QPointingDevice(QObject*  parent = nullptr);
QPointingDevice* new_QPointingDevice(const QString&  name, qint64  systemId, QInputDevice::DeviceType  devType, QPointingDevice::PointerType  pType, QInputDevice::Capabilities  caps, int  maxPoints, int  buttonCount, const QString&  seatName = QString(), QPointingDeviceUniqueId  uniqueId = QPointingDeviceUniqueId(), QObject*  parent = nullptr);
void delete_QPointingDevice(QPointingDevice* obj) { delete obj; }
   int  buttonCount(QPointingDevice* theWrappedObject) const;
   int  maximumPoints(QPointingDevice* theWrappedObject) const;
   bool  __eq__(QPointingDevice* theWrappedObject, const QPointingDevice&  other) const;
   QPointingDevice::PointerType  pointerType(QPointingDevice* theWrappedObject) const;
   const QPointingDevice*  static_QPointingDevice_primaryPointingDevice(const QString&  seatName = QString());
   void setCapabilities(QPointingDevice* theWrappedObject, QInputDevice::Capabilities  caps);
   void setMaximumTouchPoints(QPointingDevice* theWrappedObject, int  c);
   void setType(QPointingDevice* theWrappedObject, QInputDevice::DeviceType  devType);
   QPointingDeviceUniqueId  uniqueId(QPointingDevice* theWrappedObject) const;
    QString py_toString(QPointingDevice*);
};





class PythonQtWrapper_QPointingDeviceUniqueId : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPointingDeviceUniqueId* new_QPointingDeviceUniqueId();
QPointingDeviceUniqueId* new_QPointingDeviceUniqueId(const QPointingDeviceUniqueId& other) {
QPointingDeviceUniqueId* a = new QPointingDeviceUniqueId();
*((QPointingDeviceUniqueId*)a) = other;
return a; }
void delete_QPointingDeviceUniqueId(QPointingDeviceUniqueId* obj) { delete obj; }
   QPointingDeviceUniqueId  static_QPointingDeviceUniqueId_fromNumericId(qint64  id);
   bool  isValid(QPointingDeviceUniqueId* theWrappedObject) const;
   qint64  numericId(QPointingDeviceUniqueId* theWrappedObject) const;
   bool  __ne__(QPointingDeviceUniqueId* theWrappedObject, QPointingDeviceUniqueId  rhs);
   bool  __eq__(QPointingDeviceUniqueId* theWrappedObject, QPointingDeviceUniqueId  rhs);
    bool __nonzero__(QPointingDeviceUniqueId* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QPolygonF : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPolygonF* new_QPolygonF();
QPolygonF* new_QPolygonF(const QList<QPointF >&  v);
QPolygonF* new_QPolygonF(const QPolygon&  a);
QPolygonF* new_QPolygonF(const QRectF&  r);
QPolygonF* new_QPolygonF(const QPolygonF& other) {
QPolygonF* a = new QPolygonF();
*((QPolygonF*)a) = other;
return a; }
void delete_QPolygonF(QPolygonF* obj) { delete obj; }
   void append(QPolygonF* theWrappedObject, const QList<QPointF >&  l);
   const QPointF  at(QPolygonF* theWrappedObject, qsizetype  i) const;
   const QPointF  back(QPolygonF* theWrappedObject) const;
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   qsizetype  capacity(QPolygonF* theWrappedObject) const;
   void clear(QPolygonF* theWrappedObject);
   const QPointF*  constFirst(QPolygonF* theWrappedObject) const;
   const QPointF*  constLast(QPolygonF* theWrappedObject) const;
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   qsizetype  count(QPolygonF* theWrappedObject) const;
   bool  empty(QPolygonF* theWrappedObject) const;
   const QPointF*  first(QPolygonF* theWrappedObject) const;
   QList<QPointF >  first(QPolygonF* theWrappedObject, qsizetype  n) const;
   QList<QPointF >  static_QPolygonF_fromVector(const QList<QPointF >&  vector);
   const QPointF  front(QPolygonF* theWrappedObject) const;
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   bool  intersects(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   bool  isClosed(QPolygonF* theWrappedObject) const;
   bool  isEmpty(QPolygonF* theWrappedObject) const;
   bool  isSharedWith(QPolygonF* theWrappedObject, const QList<QPointF >&  other) const;
   const QPointF*  last(QPolygonF* theWrappedObject) const;
   QList<QPointF >  last(QPolygonF* theWrappedObject, qsizetype  n) const;
   qsizetype  length(QPolygonF* theWrappedObject) const;
   qsizetype  static_QPolygonF_maxSize();
   qsizetype  max_size(QPolygonF* theWrappedObject) const;
   QList<QPointF >  mid(QPolygonF* theWrappedObject, qsizetype  pos, qsizetype  len = -1) const;
   void move(QPolygonF* theWrappedObject, qsizetype  from, qsizetype  to);
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QTransform&  m);
   QList<QPointF >*  __iadd__(QPolygonF* theWrappedObject, const QList<QPointF >&  l);
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
   QPointF  operator_subscript(QPolygonF* theWrappedObject, qsizetype  i);
   const QPointF  operator_subscript(QPolygonF* theWrappedObject, qsizetype  i) const;
   void pop_back(QPolygonF* theWrappedObject);
   void pop_front(QPolygonF* theWrappedObject);
   void remove(QPolygonF* theWrappedObject, qsizetype  i, qsizetype  n = 1);
   void removeAt(QPolygonF* theWrappedObject, qsizetype  i);
   void removeFirst(QPolygonF* theWrappedObject);
   void removeLast(QPolygonF* theWrappedObject);
   void reserve(QPolygonF* theWrappedObject, qsizetype  size);
   void resize(QPolygonF* theWrappedObject, qsizetype  size);
   void resizeForOverwrite(QPolygonF* theWrappedObject, qsizetype  size);
   void shrink_to_fit(QPolygonF* theWrappedObject);
   qsizetype  size(QPolygonF* theWrappedObject) const;
   QList<QPointF >  sliced(QPolygonF* theWrappedObject, qsizetype  pos) const;
   QList<QPointF >  sliced(QPolygonF* theWrappedObject, qsizetype  pos, qsizetype  n) const;
   void squeeze(QPolygonF* theWrappedObject);
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void swap(QPolygonF* theWrappedObject, QPolygonF&  other);
   void swapItemsAt(QPolygonF* theWrappedObject, qsizetype  i, qsizetype  j);
   QPointF  takeAt(QPolygonF* theWrappedObject, qsizetype  i);
   QPointF  takeFirst(QPolygonF* theWrappedObject);
   QPointF  takeLast(QPolygonF* theWrappedObject);
   QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   QList<QPointF >  toVector(QPolygonF* theWrappedObject) const;
   void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
   void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
   QPolygonF  translated(QPolygonF* theWrappedObject, const QPointF&  offset) const;
   QPolygonF  translated(QPolygonF* theWrappedObject, qreal  dx, qreal  dy) const;
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QPointF  value(QPolygonF* theWrappedObject, qsizetype  i) const;
    QString py_toString(QPolygonF*);
    bool __nonzero__(QPolygonF* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QPrintDialog : public QPrintDialog
{
public:
    PythonQtShell_QPrintDialog(QPrinter*  printer, QWidget*  parent = nullptr):QPrintDialog(printer, parent),_wrapper(nullptr) {};
    PythonQtShell_QPrintDialog(QWidget*  parent = nullptr):QPrintDialog(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPrintDialog() override;

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

class PythonQtPublicPromoter_QPrintDialog : public QPrintDialog
{ public:
inline void py_q_accept() { QPrintDialog::accept(); }
inline void py_q_done(int  result) { QPrintDialog::done(result); }
inline int  py_q_exec() { return QPrintDialog::exec(); }
inline void py_q_setVisible(bool  visible) { QPrintDialog::setVisible(visible); }
};

class PythonQtWrapper_QPrintDialog : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPrintDialog* new_QPrintDialog(QPrinter*  printer, QWidget*  parent = nullptr);
QPrintDialog* new_QPrintDialog(QWidget*  parent = nullptr);
void delete_QPrintDialog(QPrintDialog* obj) { delete obj; }
   void py_q_accept(QPrintDialog* theWrappedObject){  (((PythonQtPublicPromoter_QPrintDialog*)theWrappedObject)->py_q_accept());}
   void py_q_done(QPrintDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QPrintDialog*)theWrappedObject)->py_q_done(result));}
   int  py_q_exec(QPrintDialog* theWrappedObject){  return (((PythonQtPublicPromoter_QPrintDialog*)theWrappedObject)->py_q_exec());}
   void open(QPrintDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QAbstractPrintDialog::PrintDialogOptions  options(QPrintDialog* theWrappedObject) const;
   void setOption(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option, bool  on = true);
   void setOptions(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOptions  options);
   void py_q_setVisible(QPrintDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QPrintDialog*)theWrappedObject)->py_q_setVisible(visible));}
   bool  testOption(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option) const;
};





class PythonQtShell_QPrintEngine : public QPrintEngine
{
public:
    PythonQtShell_QPrintEngine():QPrintEngine(),_wrapper(nullptr) {};

   ~PythonQtShell_QPrintEngine() override;

bool  abort() override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
bool  newPage() override;
QPrinter::PrinterState  printerState() const override;
QVariant  property(QPrintEngine::PrintEnginePropertyKey  key) const override;
void setProperty(QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPrintEngine : public QPrintEngine
{ public:
inline bool  py_q_abort() { return this->abort(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return this->metric(arg__1); }
inline bool  py_q_newPage() { return this->newPage(); }
inline QPrinter::PrinterState  py_q_printerState() const { return this->printerState(); }
inline QVariant  py_q_property(QPrintEngine::PrintEnginePropertyKey  key) const { return this->property(key); }
inline void py_q_setProperty(QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value) { this->setProperty(key, value); }
};

class PythonQtWrapper_QPrintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintEnginePropertyKey )
enum PrintEnginePropertyKey{
  PPK_CollateCopies = QPrintEngine::PPK_CollateCopies,   PPK_ColorMode = QPrintEngine::PPK_ColorMode,   PPK_Creator = QPrintEngine::PPK_Creator,   PPK_DocumentName = QPrintEngine::PPK_DocumentName,   PPK_FullPage = QPrintEngine::PPK_FullPage,   PPK_NumberOfCopies = QPrintEngine::PPK_NumberOfCopies,   PPK_Orientation = QPrintEngine::PPK_Orientation,   PPK_OutputFileName = QPrintEngine::PPK_OutputFileName,   PPK_PageOrder = QPrintEngine::PPK_PageOrder,   PPK_PageRect = QPrintEngine::PPK_PageRect,   PPK_PageSize = QPrintEngine::PPK_PageSize,   PPK_PaperRect = QPrintEngine::PPK_PaperRect,   PPK_PaperSource = QPrintEngine::PPK_PaperSource,   PPK_PrinterName = QPrintEngine::PPK_PrinterName,   PPK_PrinterProgram = QPrintEngine::PPK_PrinterProgram,   PPK_Resolution = QPrintEngine::PPK_Resolution,   PPK_SelectionOption = QPrintEngine::PPK_SelectionOption,   PPK_SupportedResolutions = QPrintEngine::PPK_SupportedResolutions,   PPK_WindowsPageSize = QPrintEngine::PPK_WindowsPageSize,   PPK_FontEmbedding = QPrintEngine::PPK_FontEmbedding,   PPK_Duplex = QPrintEngine::PPK_Duplex,   PPK_PaperSources = QPrintEngine::PPK_PaperSources,   PPK_CustomPaperSize = QPrintEngine::PPK_CustomPaperSize,   PPK_PageMargins = QPrintEngine::PPK_PageMargins,   PPK_CopyCount = QPrintEngine::PPK_CopyCount,   PPK_SupportsMultipleCopies = QPrintEngine::PPK_SupportsMultipleCopies,   PPK_PaperName = QPrintEngine::PPK_PaperName,   PPK_QPageSize = QPrintEngine::PPK_QPageSize,   PPK_QPageMargins = QPrintEngine::PPK_QPageMargins,   PPK_QPageLayout = QPrintEngine::PPK_QPageLayout,   PPK_PaperSize = QPrintEngine::PPK_PaperSize,   PPK_CustomBase = QPrintEngine::PPK_CustomBase};
public Q_SLOTS:
QPrintEngine* new_QPrintEngine();
void delete_QPrintEngine(QPrintEngine* obj) { delete obj; }
   bool  abort(QPrintEngine* theWrappedObject);
   bool  py_q_abort(QPrintEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_abort());}
   int  metric(QPrintEngine* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   int  py_q_metric(QPrintEngine* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const{  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_metric(arg__1));}
   bool  newPage(QPrintEngine* theWrappedObject);
   bool  py_q_newPage(QPrintEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_newPage());}
   QPrinter::PrinterState  printerState(QPrintEngine* theWrappedObject) const;
   QPrinter::PrinterState  py_q_printerState(QPrintEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_printerState());}
   QVariant  property(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key) const;
   QVariant  py_q_property(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key) const{  return (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_property(key));}
   void setProperty(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value);
   void py_q_setProperty(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value){  (((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->py_q_setProperty(key, value));}
};





class PythonQtShell_QPrintPreviewDialog : public QPrintPreviewDialog
{
public:
    PythonQtShell_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QPrintPreviewDialog(printer, parent, flags),_wrapper(nullptr) {};
    PythonQtShell_QPrintPreviewDialog(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QPrintPreviewDialog(parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QPrintPreviewDialog() override;

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

class PythonQtPublicPromoter_QPrintPreviewDialog : public QPrintPreviewDialog
{ public:
inline void py_q_done(int  result) { QPrintPreviewDialog::done(result); }
inline void py_q_setVisible(bool  visible) { QPrintPreviewDialog::setVisible(visible); }
};

class PythonQtWrapper_QPrintPreviewDialog : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPrintPreviewDialog* new_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
QPrintPreviewDialog* new_QPrintPreviewDialog(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QPrintPreviewDialog(QPrintPreviewDialog* obj) { delete obj; }
   void py_q_done(QPrintPreviewDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QPrintPreviewDialog*)theWrappedObject)->py_q_done(result));}
   void open(QPrintPreviewDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QPrinter*  printer(QPrintPreviewDialog* theWrappedObject);
   void py_q_setVisible(QPrintPreviewDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QPrintPreviewDialog*)theWrappedObject)->py_q_setVisible(visible));}
};





class PythonQtShell_QPrintPreviewWidget : public QPrintPreviewWidget
{
public:
    PythonQtShell_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QPrintPreviewWidget(printer, parent, flags),_wrapper(nullptr) {};
    PythonQtShell_QPrintPreviewWidget(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QPrintPreviewWidget(parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QPrintPreviewWidget() override;

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

class PythonQtPublicPromoter_QPrintPreviewWidget : public QPrintPreviewWidget
{ public:
inline void py_q_setVisible(bool  visible) { QPrintPreviewWidget::setVisible(visible); }
};

class PythonQtWrapper_QPrintPreviewWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ViewMode ZoomMode )
enum ViewMode{
  SinglePageView = QPrintPreviewWidget::SinglePageView,   FacingPagesView = QPrintPreviewWidget::FacingPagesView,   AllPagesView = QPrintPreviewWidget::AllPagesView};
enum ZoomMode{
  CustomZoom = QPrintPreviewWidget::CustomZoom,   FitToWidth = QPrintPreviewWidget::FitToWidth,   FitInView = QPrintPreviewWidget::FitInView};
public Q_SLOTS:
QPrintPreviewWidget* new_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
QPrintPreviewWidget* new_QPrintPreviewWidget(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QPrintPreviewWidget(QPrintPreviewWidget* obj) { delete obj; }
   int  currentPage(QPrintPreviewWidget* theWrappedObject) const;
   QPageLayout::Orientation  orientation(QPrintPreviewWidget* theWrappedObject) const;
   int  pageCount(QPrintPreviewWidget* theWrappedObject) const;
   void py_q_setVisible(QPrintPreviewWidget* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QPrintPreviewWidget*)theWrappedObject)->py_q_setVisible(visible));}
   QPrintPreviewWidget::ViewMode  viewMode(QPrintPreviewWidget* theWrappedObject) const;
   qreal  zoomFactor(QPrintPreviewWidget* theWrappedObject) const;
   QPrintPreviewWidget::ZoomMode  zoomMode(QPrintPreviewWidget* theWrappedObject) const;
};





class PythonQtShell_QPrinter : public QPrinter
{
public:
    PythonQtShell_QPrinter(QPrinter::PrinterMode  mode = QPrinter::ScreenResolution):QPrinter(mode),_wrapper(nullptr) {};
    PythonQtShell_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode = QPrinter::ScreenResolution):QPrinter(printer, mode),_wrapper(nullptr) {};

   ~PythonQtShell_QPrinter() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
bool  newPage() override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
bool  setPageLayout(const QPageLayout&  pageLayout) override;
bool  setPageMargins(const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter) override;
bool  setPageOrientation(QPageLayout::Orientation  orientation) override;
void setPageRanges(const QPageRanges&  ranges) override;
bool  setPageSize(const QPageSize&  pageSize) override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPrinter : public QPrinter
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return this->metric(arg__1); }
inline void promoted_setEngines(QPrintEngine*  printEngine, QPaintEngine*  paintEngine) { this->setEngines(printEngine, paintEngine); }
inline int  py_q_devType() const { return QPrinter::devType(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QPrinter::metric(arg__1); }
inline bool  py_q_newPage() { return QPrinter::newPage(); }
inline QPaintEngine*  py_q_paintEngine() const { return QPrinter::paintEngine(); }
};

class PythonQtWrapper_QPrinter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorMode DuplexMode OutputFormat PageOrder PaperSource PrintRange PrinterMode PrinterState Unit )
enum ColorMode{
  GrayScale = QPrinter::GrayScale,   Color = QPrinter::Color};
enum DuplexMode{
  DuplexNone = QPrinter::DuplexNone,   DuplexAuto = QPrinter::DuplexAuto,   DuplexLongSide = QPrinter::DuplexLongSide,   DuplexShortSide = QPrinter::DuplexShortSide};
enum OutputFormat{
  NativeFormat = QPrinter::NativeFormat,   PdfFormat = QPrinter::PdfFormat};
enum PageOrder{
  FirstPageFirst = QPrinter::FirstPageFirst,   LastPageFirst = QPrinter::LastPageFirst};
enum PaperSource{
  OnlyOne = QPrinter::OnlyOne,   Lower = QPrinter::Lower,   Middle = QPrinter::Middle,   Manual = QPrinter::Manual,   Envelope = QPrinter::Envelope,   EnvelopeManual = QPrinter::EnvelopeManual,   Auto = QPrinter::Auto,   Tractor = QPrinter::Tractor,   SmallFormat = QPrinter::SmallFormat,   LargeFormat = QPrinter::LargeFormat,   LargeCapacity = QPrinter::LargeCapacity,   Cassette = QPrinter::Cassette,   FormSource = QPrinter::FormSource,   MaxPageSource = QPrinter::MaxPageSource,   CustomSource = QPrinter::CustomSource,   LastPaperSource = QPrinter::LastPaperSource,   Upper = QPrinter::Upper};
enum PrintRange{
  AllPages = QPrinter::AllPages,   Selection = QPrinter::Selection,   PageRange = QPrinter::PageRange,   CurrentPage = QPrinter::CurrentPage};
enum PrinterMode{
  ScreenResolution = QPrinter::ScreenResolution,   PrinterResolution = QPrinter::PrinterResolution,   HighResolution = QPrinter::HighResolution};
enum PrinterState{
  Idle = QPrinter::Idle,   Active = QPrinter::Active,   Aborted = QPrinter::Aborted,   Error = QPrinter::Error};
enum Unit{
  Millimeter = QPrinter::Millimeter,   Point = QPrinter::Point,   Inch = QPrinter::Inch,   Pica = QPrinter::Pica,   Didot = QPrinter::Didot,   Cicero = QPrinter::Cicero,   DevicePixel = QPrinter::DevicePixel};
public Q_SLOTS:
QPrinter* new_QPrinter(QPrinter::PrinterMode  mode = QPrinter::ScreenResolution);
QPrinter* new_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode = QPrinter::ScreenResolution);
void delete_QPrinter(QPrinter* obj) { delete obj; }
   bool  abort(QPrinter* theWrappedObject);
   bool  collateCopies(QPrinter* theWrappedObject) const;
   QPrinter::ColorMode  colorMode(QPrinter* theWrappedObject) const;
   int  copyCount(QPrinter* theWrappedObject) const;
   QString  creator(QPrinter* theWrappedObject) const;
   int  py_q_devType(QPrinter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->py_q_devType());}
   QString  docName(QPrinter* theWrappedObject) const;
   QPrinter::DuplexMode  duplex(QPrinter* theWrappedObject) const;
   bool  fontEmbeddingEnabled(QPrinter* theWrappedObject) const;
   int  fromPage(QPrinter* theWrappedObject) const;
   bool  fullPage(QPrinter* theWrappedObject) const;
   bool  isValid(QPrinter* theWrappedObject) const;
   int  py_q_metric(QPrinter* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const{  return (((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->py_q_metric(arg__1));}
   bool  py_q_newPage(QPrinter* theWrappedObject){  return (((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->py_q_newPage());}
   QString  outputFileName(QPrinter* theWrappedObject) const;
   QPrinter::OutputFormat  outputFormat(QPrinter* theWrappedObject) const;
   QPrinter::PageOrder  pageOrder(QPrinter* theWrappedObject) const;
   QRectF  pageRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const;
   QPaintEngine*  py_q_paintEngine(QPrinter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->py_q_paintEngine());}
   QRectF  paperRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const;
   QPrinter::PaperSource  paperSource(QPrinter* theWrappedObject) const;
   QPagedPaintDevice::PdfVersion  pdfVersion(QPrinter* theWrappedObject) const;
   QPrintEngine*  printEngine(QPrinter* theWrappedObject) const;
   QString  printProgram(QPrinter* theWrappedObject) const;
   QPrinter::PrintRange  printRange(QPrinter* theWrappedObject) const;
   QString  printerName(QPrinter* theWrappedObject) const;
   QPrinter::PrinterState  printerState(QPrinter* theWrappedObject) const;
   int  resolution(QPrinter* theWrappedObject) const;
   void setCollateCopies(QPrinter* theWrappedObject, bool  collate);
   void setColorMode(QPrinter* theWrappedObject, QPrinter::ColorMode  arg__1);
   void setCopyCount(QPrinter* theWrappedObject, int  arg__1);
   void setCreator(QPrinter* theWrappedObject, const QString&  arg__1);
   void setDocName(QPrinter* theWrappedObject, const QString&  arg__1);
   void setDuplex(QPrinter* theWrappedObject, QPrinter::DuplexMode  duplex);
   void setEngines(QPrinter* theWrappedObject, QPrintEngine*  printEngine, QPaintEngine*  paintEngine);
   void setFontEmbeddingEnabled(QPrinter* theWrappedObject, bool  enable);
   void setFromTo(QPrinter* theWrappedObject, int  fromPage, int  toPage);
   void setFullPage(QPrinter* theWrappedObject, bool  arg__1);
   void setOutputFileName(QPrinter* theWrappedObject, const QString&  arg__1);
   void setOutputFormat(QPrinter* theWrappedObject, QPrinter::OutputFormat  format);
   void setPageOrder(QPrinter* theWrappedObject, QPrinter::PageOrder  arg__1);
   void setPaperSource(QPrinter* theWrappedObject, QPrinter::PaperSource  arg__1);
   void setPdfVersion(QPrinter* theWrappedObject, QPagedPaintDevice::PdfVersion  version);
   void setPrintProgram(QPrinter* theWrappedObject, const QString&  arg__1);
   void setPrintRange(QPrinter* theWrappedObject, QPrinter::PrintRange  range);
   void setPrinterName(QPrinter* theWrappedObject, const QString&  arg__1);
   void setResolution(QPrinter* theWrappedObject, int  arg__1);
   QList<int >  supportedResolutions(QPrinter* theWrappedObject) const;
   bool  supportsMultipleCopies(QPrinter* theWrappedObject) const;
   int  toPage(QPrinter* theWrappedObject) const;
    bool __nonzero__(QPrinter* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QPrinterInfo : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPrinterInfo* new_QPrinterInfo();
QPrinterInfo* new_QPrinterInfo(const QPrinter&  printer);
QPrinterInfo* new_QPrinterInfo(const QPrinterInfo&  other);
void delete_QPrinterInfo(QPrinterInfo* obj) { delete obj; }
   QStringList  static_QPrinterInfo_availablePrinterNames();
   QList<QPrinterInfo >  static_QPrinterInfo_availablePrinters();
   QPrinter::ColorMode  defaultColorMode(QPrinterInfo* theWrappedObject) const;
   QPrinter::DuplexMode  defaultDuplexMode(QPrinterInfo* theWrappedObject) const;
   QPageSize  defaultPageSize(QPrinterInfo* theWrappedObject) const;
   QPrinterInfo  static_QPrinterInfo_defaultPrinter();
   QString  static_QPrinterInfo_defaultPrinterName();
   QString  description(QPrinterInfo* theWrappedObject) const;
   bool  isDefault(QPrinterInfo* theWrappedObject) const;
   bool  isNull(QPrinterInfo* theWrappedObject) const;
   bool  isRemote(QPrinterInfo* theWrappedObject) const;
   QString  location(QPrinterInfo* theWrappedObject) const;
   QString  makeAndModel(QPrinterInfo* theWrappedObject) const;
   QPageSize  maximumPhysicalPageSize(QPrinterInfo* theWrappedObject) const;
   QPageSize  minimumPhysicalPageSize(QPrinterInfo* theWrappedObject) const;
   QPrinterInfo  static_QPrinterInfo_printerInfo(const QString&  printerName);
   QString  printerName(QPrinterInfo* theWrappedObject) const;
   QPrinter::PrinterState  state(QPrinterInfo* theWrappedObject) const;
   QList<QPrinter::ColorMode >  supportedColorModes(QPrinterInfo* theWrappedObject) const;
   QList<QPrinter::DuplexMode >  supportedDuplexModes(QPrinterInfo* theWrappedObject) const;
   QList<QPageSize >  supportedPageSizes(QPrinterInfo* theWrappedObject) const;
   QList<int >  supportedResolutions(QPrinterInfo* theWrappedObject) const;
   bool  supportsCustomPageSizes(QPrinterInfo* theWrappedObject) const;
    QString py_toString(QPrinterInfo*);
    bool __nonzero__(QPrinterInfo* obj) { return !obj->isNull(); }
};





class PythonQtShell_QProgressBar : public QProgressBar
{
public:
    PythonQtShell_QProgressBar(QWidget*  parent = nullptr):QProgressBar(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QProgressBar() override;

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
void initStyleOption(QStyleOptionProgressBar*  option) const override;
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
QString  text() const override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QProgressBar : public QProgressBar
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initStyleOption(QStyleOptionProgressBar*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QProgressBar::event(e); }
inline void py_q_initStyleOption(QStyleOptionProgressBar*  option) const { QProgressBar::initStyleOption(option); }
inline QSize  py_q_minimumSizeHint() const { return QProgressBar::minimumSizeHint(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QProgressBar::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QProgressBar::sizeHint(); }
inline QString  py_q_text() const { return QProgressBar::text(); }
};

class PythonQtWrapper_QProgressBar : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QProgressBar* new_QProgressBar(QWidget*  parent = nullptr);
void delete_QProgressBar(QProgressBar* obj) { delete obj; }
   Qt::Alignment  alignment(QProgressBar* theWrappedObject) const;
   bool  py_q_event(QProgressBar* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_event(e));}
   QString  format(QProgressBar* theWrappedObject) const;
   void initStyleOption(QProgressBar* theWrappedObject, QStyleOptionProgressBar*  option) const;
   void py_q_initStyleOption(QProgressBar* theWrappedObject, QStyleOptionProgressBar*  option) const{  (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_initStyleOption(option));}
   bool  invertedAppearance(QProgressBar* theWrappedObject) const;
   bool  isTextVisible(QProgressBar* theWrappedObject) const;
   int  maximum(QProgressBar* theWrappedObject) const;
   int  minimum(QProgressBar* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QProgressBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_minimumSizeHint());}
   Qt::Orientation  orientation(QProgressBar* theWrappedObject) const;
   void py_q_paintEvent(QProgressBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void resetFormat(QProgressBar* theWrappedObject);
   void setAlignment(QProgressBar* theWrappedObject, Qt::Alignment  alignment);
   void setFormat(QProgressBar* theWrappedObject, const QString&  format);
   void setInvertedAppearance(QProgressBar* theWrappedObject, bool  invert);
   void setTextDirection(QProgressBar* theWrappedObject, QProgressBar::Direction  textDirection);
   void setTextVisible(QProgressBar* theWrappedObject, bool  visible);
   QSize  py_q_sizeHint(QProgressBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_sizeHint());}
   QString  text(QProgressBar* theWrappedObject) const;
   QString  py_q_text(QProgressBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_text());}
   QProgressBar::Direction  textDirection(QProgressBar* theWrappedObject) const;
   int  value(QProgressBar* theWrappedObject) const;
};





class PythonQtShell_QProgressDialog : public QProgressDialog
{
public:
    PythonQtShell_QProgressDialog(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QProgressDialog(parent, flags),_wrapper(nullptr) {};
    PythonQtShell_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QProgressDialog() override;

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

class PythonQtPublicPromoter_QProgressDialog : public QProgressDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline void promoted_forceShow() { this->forceShow(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QProgressDialog::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QProgressDialog::closeEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QProgressDialog::resizeEvent(event); }
inline void py_q_showEvent(QShowEvent*  event) { QProgressDialog::showEvent(event); }
inline QSize  py_q_sizeHint() const { return QProgressDialog::sizeHint(); }
};

class PythonQtWrapper_QProgressDialog : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QProgressDialog* new_QProgressDialog(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
QProgressDialog* new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QProgressDialog(QProgressDialog* obj) { delete obj; }
   bool  autoClose(QProgressDialog* theWrappedObject) const;
   bool  autoReset(QProgressDialog* theWrappedObject) const;
   void py_q_changeEvent(QProgressDialog* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_changeEvent(event));}
   void py_q_closeEvent(QProgressDialog* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_closeEvent(event));}
   QString  labelText(QProgressDialog* theWrappedObject) const;
   int  maximum(QProgressDialog* theWrappedObject) const;
   int  minimum(QProgressDialog* theWrappedObject) const;
   int  minimumDuration(QProgressDialog* theWrappedObject) const;
   void open(QProgressDialog* theWrappedObject, QObject*  receiver, const char*  member);
   void py_q_resizeEvent(QProgressDialog* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_resizeEvent(event));}
   void setAutoClose(QProgressDialog* theWrappedObject, bool  close);
   void setAutoReset(QProgressDialog* theWrappedObject, bool  reset);
   void setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar);
   void setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button);
   void setLabel(QProgressDialog* theWrappedObject, QLabel*  label);
   void py_q_showEvent(QProgressDialog* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_showEvent(event));}
   QSize  py_q_sizeHint(QProgressDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_sizeHint());}
   int  value(QProgressDialog* theWrappedObject) const;
   bool  wasCanceled(QProgressDialog* theWrappedObject) const;
};





class PythonQtShell_QProxyStyle : public QProxyStyle
{
public:
    PythonQtShell_QProxyStyle(QStyle*  style = nullptr):QProxyStyle(style),_wrapper(nullptr) {};
    PythonQtShell_QProxyStyle(const QString&  key):QProxyStyle(key),_wrapper(nullptr) {};

   ~PythonQtShell_QProxyStyle() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
void drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = nullptr) const override;
void drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = nullptr) const override;
void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const override;
void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const override;
void drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = nullptr) const override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const override;
QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = nullptr) const override;
QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const override;
QRect  itemTextRect(const QFontMetrics&  fm, const QRect&  r, int  flags, bool  enabled, const QString&  text) const override;
int  layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const override;
int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const override;
void polish(QApplication*  app) override;
void polish(QPalette&  pal) override;
void polish(QWidget*  widget) override;
QSize  sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const override;
QIcon  standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const override;
QPalette  standardPalette() const override;
QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = nullptr) const override;
int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const override;
QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const override;
QRect  subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const override;
void timerEvent(QTimerEvent*  event) override;
void unpolish(QApplication*  app) override;
void unpolish(QWidget*  widget) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QProxyStyle : public QProxyStyle
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void py_q_drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = nullptr) const { QProxyStyle::drawComplexControl(control, option, painter, widget); }
inline void py_q_drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = nullptr) const { QProxyStyle::drawControl(element, option, painter, widget); }
inline void py_q_drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const { QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap); }
inline void py_q_drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const { QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole); }
inline void py_q_drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = nullptr) const { QProxyStyle::drawPrimitive(element, option, painter, widget); }
inline bool  py_q_event(QEvent*  e) { return QProxyStyle::event(e); }
inline QPixmap  py_q_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline QStyle::SubControl  py_q_hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = nullptr) const { return QProxyStyle::hitTestComplexControl(control, option, pos, widget); }
inline QRect  py_q_itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const { return QProxyStyle::itemPixmapRect(r, flags, pixmap); }
inline QRect  py_q_itemTextRect(const QFontMetrics&  fm, const QRect&  r, int  flags, bool  enabled, const QString&  text) const { return QProxyStyle::itemTextRect(fm, r, flags, enabled, text); }
inline int  py_q_layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget); }
inline int  py_q_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return QProxyStyle::pixelMetric(metric, option, widget); }
inline void py_q_polish(QApplication*  app) { QProxyStyle::polish(app); }
inline void py_q_polish(QPalette&  pal) { QProxyStyle::polish(pal); }
inline void py_q_polish(QWidget*  widget) { QProxyStyle::polish(widget); }
inline QSize  py_q_sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const { return QProxyStyle::sizeFromContents(type, option, size, widget); }
inline QIcon  py_q_standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return QProxyStyle::standardIcon(standardIcon, option, widget); }
inline QPalette  py_q_standardPalette() const { return QProxyStyle::standardPalette(); }
inline QPixmap  py_q_standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = nullptr) const { return QProxyStyle::standardPixmap(standardPixmap, opt, widget); }
inline int  py_q_styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const { return QProxyStyle::styleHint(hint, option, widget, returnData); }
inline QRect  py_q_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const { return QProxyStyle::subControlRect(cc, opt, sc, widget); }
inline QRect  py_q_subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const { return QProxyStyle::subElementRect(element, option, widget); }
inline void py_q_unpolish(QApplication*  app) { QProxyStyle::unpolish(app); }
inline void py_q_unpolish(QWidget*  widget) { QProxyStyle::unpolish(widget); }
};

class PythonQtWrapper_QProxyStyle : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QProxyStyle* new_QProxyStyle(QStyle*  style = nullptr);
QProxyStyle* new_QProxyStyle(const QString&  key);
void delete_QProxyStyle(QProxyStyle* obj) { delete obj; }
   QStyle*  baseStyle(QProxyStyle* theWrappedObject) const;
   void py_q_drawComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = nullptr) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawComplexControl(control, option, painter, widget));}
   void py_q_drawControl(QProxyStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = nullptr) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawControl(element, option, painter, widget));}
   void py_q_drawItemPixmap(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawItemPixmap(painter, rect, alignment, pixmap));}
   void py_q_drawItemText(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawItemText(painter, rect, flags, pal, enabled, text, textRole));}
   void py_q_drawPrimitive(QProxyStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = nullptr) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawPrimitive(element, option, painter, widget));}
   bool  py_q_event(QProxyStyle* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_event(e));}
   QPixmap  py_q_generatedIconPixmap(QProxyStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_generatedIconPixmap(iconMode, pixmap, opt));}
   QStyle::SubControl  py_q_hitTestComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_hitTestComplexControl(control, option, pos, widget));}
   QRect  py_q_itemPixmapRect(QProxyStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_itemPixmapRect(r, flags, pixmap));}
   QRect  itemTextRect(QProxyStyle* theWrappedObject, const QFontMetrics&  fm, const QRect&  r, int  flags, bool  enabled, const QString&  text) const;
   QRect  py_q_itemTextRect(QProxyStyle* theWrappedObject, const QFontMetrics&  fm, const QRect&  r, int  flags, bool  enabled, const QString&  text) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_itemTextRect(fm, r, flags, enabled, text));}
   int  py_q_layoutSpacing(QProxyStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_layoutSpacing(control1, control2, orientation, option, widget));}
   int  py_q_pixelMetric(QProxyStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_pixelMetric(metric, option, widget));}
   void py_q_polish(QProxyStyle* theWrappedObject, QApplication*  app){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_polish(app));}
   void py_q_polish(QProxyStyle* theWrappedObject, QPalette&  pal){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_polish(pal));}
   void py_q_polish(QProxyStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_polish(widget));}
   void setBaseStyle(QProxyStyle* theWrappedObject, QStyle*  style);
   QSize  py_q_sizeFromContents(QProxyStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_sizeFromContents(type, option, size, widget));}
   QIcon  py_q_standardIcon(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_standardIcon(standardIcon, option, widget));}
   QPalette  py_q_standardPalette(QProxyStyle* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_standardPalette());}
   QPixmap  py_q_standardPixmap(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_standardPixmap(standardPixmap, opt, widget));}
   int  py_q_styleHint(QProxyStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_styleHint(hint, option, widget, returnData));}
   QRect  py_q_subControlRect(QProxyStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_subControlRect(cc, opt, sc, widget));}
   QRect  py_q_subElementRect(QProxyStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_subElementRect(element, option, widget));}
   void py_q_unpolish(QProxyStyle* theWrappedObject, QApplication*  app){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_unpolish(app));}
   void py_q_unpolish(QProxyStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_unpolish(widget));}
};





class PythonQtShell_QPushButton : public QPushButton
{
public:
    PythonQtShell_QPushButton(QWidget*  parent = nullptr):QPushButton(parent),_wrapper(nullptr) {};
    PythonQtShell_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = nullptr):QPushButton(icon, text, parent),_wrapper(nullptr) {};
    PythonQtShell_QPushButton(const QString&  text, QWidget*  parent = nullptr):QPushButton(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPushButton() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void checkStateSet() override;
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
void focusInEvent(QFocusEvent*  arg__1) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  arg__1) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
bool  hitButton(const QPoint&  pos) const override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionButton*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
void nextCheckState() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPushButton : public QPushButton
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return this->hitButton(pos); }
inline void promoted_initStyleOption(QStyleOptionButton*  option) const { this->initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QPushButton::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QPushButton::focusInEvent(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QPushButton::focusOutEvent(arg__1); }
inline bool  py_q_hitButton(const QPoint&  pos) const { return QPushButton::hitButton(pos); }
inline void py_q_initStyleOption(QStyleOptionButton*  option) const { QPushButton::initStyleOption(option); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QPushButton::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QPushButton::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QPushButton::mouseMoveEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QPushButton::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QPushButton::sizeHint(); }
};

class PythonQtWrapper_QPushButton : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPushButton* new_QPushButton(QWidget*  parent = nullptr);
QPushButton* new_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = nullptr);
QPushButton* new_QPushButton(const QString&  text, QWidget*  parent = nullptr);
void delete_QPushButton(QPushButton* obj) { delete obj; }
   bool  autoDefault(QPushButton* theWrappedObject) const;
   bool  py_q_event(QPushButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_event(e));}
   void py_q_focusInEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   void py_q_focusOutEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   bool  py_q_hitButton(QPushButton* theWrappedObject, const QPoint&  pos) const{  return (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_hitButton(pos));}
   void initStyleOption(QPushButton* theWrappedObject, QStyleOptionButton*  option) const;
   void py_q_initStyleOption(QPushButton* theWrappedObject, QStyleOptionButton*  option) const{  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_initStyleOption(option));}
   bool  isDefault(QPushButton* theWrappedObject) const;
   bool  isFlat(QPushButton* theWrappedObject) const;
   void py_q_keyPressEvent(QPushButton* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QMenu*  menu(QPushButton* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QPushButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QPushButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_paintEvent(QPushButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setAutoDefault(QPushButton* theWrappedObject, bool  arg__1);
   void setDefault(QPushButton* theWrappedObject, bool  arg__1);
   void setFlat(QPushButton* theWrappedObject, bool  arg__1);
   void setMenu(QPushButton* theWrappedObject, QMenu*  menu);
   QSize  py_q_sizeHint(QPushButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtWrapper_QQuaternion : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QQuaternion* new_QQuaternion();
QQuaternion* new_QQuaternion(const QVector4D&  vector);
QQuaternion* new_QQuaternion(float  scalar, const QVector3D&  vector);
QQuaternion* new_QQuaternion(float  scalar, float  xpos, float  ypos, float  zpos);
QQuaternion* new_QQuaternion(const QQuaternion& other) {
QQuaternion* a = new QQuaternion();
*((QQuaternion*)a) = other;
return a; }
void delete_QQuaternion(QQuaternion* obj) { delete obj; }
   QQuaternion  conjugated(QQuaternion* theWrappedObject) const;
   float  static_QQuaternion_dotProduct(const QQuaternion&  q1, const QQuaternion&  q2);
   QQuaternion  static_QQuaternion_fromAxes(QQuaternion::Axes  axes);
   QQuaternion  static_QQuaternion_fromAxes(const QVector3D&  xAxis, const QVector3D&  yAxis, const QVector3D&  zAxis);
   QQuaternion  static_QQuaternion_fromAxisAndAngle(const QVector3D&  axis, float  angle);
   QQuaternion  static_QQuaternion_fromAxisAndAngle(float  x, float  y, float  z, float  angle);
   QQuaternion  static_QQuaternion_fromDirection(const QVector3D&  direction, const QVector3D&  up);
   QQuaternion  static_QQuaternion_fromEulerAngles(float  pitch, float  yaw, float  roll);
   void getAxes(QQuaternion* theWrappedObject, QVector3D*  xAxis, QVector3D*  yAxis, QVector3D*  zAxis) const;
   void getAxisAndAngle(QQuaternion* theWrappedObject, QVector3D*  axis, float*  angle) const;
   void getAxisAndAngle(QQuaternion* theWrappedObject, float*  x, float*  y, float*  z, float*  angle) const;
   void getEulerAngles(QQuaternion* theWrappedObject, float*  pitch, float*  yaw, float*  roll) const;
   QQuaternion  inverted(QQuaternion* theWrappedObject) const;
   bool  isIdentity(QQuaternion* theWrappedObject) const;
   bool  isNull(QQuaternion* theWrappedObject) const;
   float  length(QQuaternion* theWrappedObject) const;
   float  lengthSquared(QQuaternion* theWrappedObject) const;
   QQuaternion  static_QQuaternion_nlerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t);
   void normalize(QQuaternion* theWrappedObject);
   QQuaternion  normalized(QQuaternion* theWrappedObject) const;
   bool  __ne__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion  __mul__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QVector3D  __mul__(QQuaternion* theWrappedObject, const QVector3D&  vec);
   QQuaternion  __mul__(QQuaternion* theWrappedObject, float  factor);
   QQuaternion*  __imul__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   QQuaternion*  __imul__(QQuaternion* theWrappedObject, float  factor);
   QQuaternion  __add__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion*  __iadd__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   QQuaternion  __sub__(QQuaternion* theWrappedObject);
   QQuaternion  __sub__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion*  __isub__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   QQuaternion  __div__(QQuaternion* theWrappedObject, float  divisor);
   QQuaternion*  __idiv__(QQuaternion* theWrappedObject, float  divisor);
   void writeTo(QQuaternion* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   void readFrom(QQuaternion* theWrappedObject, QDataStream&  arg__1);
   QVector3D  rotatedVector(QQuaternion* theWrappedObject, const QVector3D&  vector) const;
   QQuaternion  static_QQuaternion_rotationTo(const QVector3D&  from, const QVector3D&  to);
   float  scalar(QQuaternion* theWrappedObject) const;
   void setScalar(QQuaternion* theWrappedObject, float  scalar);
   void setVector(QQuaternion* theWrappedObject, const QVector3D&  vector);
   void setVector(QQuaternion* theWrappedObject, float  x, float  y, float  z);
   void setX(QQuaternion* theWrappedObject, float  x);
   void setY(QQuaternion* theWrappedObject, float  y);
   void setZ(QQuaternion* theWrappedObject, float  z);
   QQuaternion  static_QQuaternion_slerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t);
   QQuaternion::Axes  toAxes(QQuaternion* theWrappedObject) const;
   QVector3D  toEulerAngles(QQuaternion* theWrappedObject) const;
   QVector4D  toVector4D(QQuaternion* theWrappedObject) const;
   QVector3D  vector(QQuaternion* theWrappedObject) const;
   float  x(QQuaternion* theWrappedObject) const;
   float  y(QQuaternion* theWrappedObject) const;
   float  z(QQuaternion* theWrappedObject) const;
    QString py_toString(QQuaternion*);
    bool __nonzero__(QQuaternion* obj) { return !obj->isNull(); }
};





class PythonQtShell_QQuaternion__Axes : public QQuaternion::Axes
{
public:
    PythonQtShell_QQuaternion__Axes():QQuaternion::Axes(),_wrapper(nullptr) {};

   ~PythonQtShell_QQuaternion__Axes();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QQuaternion__Axes : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QQuaternion::Axes* new_QQuaternion__Axes();
QQuaternion::Axes* new_QQuaternion__Axes(const QQuaternion::Axes& other) {
PythonQtShell_QQuaternion__Axes* a = new PythonQtShell_QQuaternion__Axes();
*((QQuaternion::Axes*)a) = other;
return a; }
void delete_QQuaternion__Axes(QQuaternion::Axes* obj) { delete obj; }
void py_set_x(QQuaternion::Axes* theWrappedObject, QQuaternion::Axis  x){ theWrappedObject->x = x; }
QQuaternion::Axis  py_get_x(QQuaternion::Axes* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QQuaternion::Axes* theWrappedObject, QQuaternion::Axis  y){ theWrappedObject->y = y; }
QQuaternion::Axis  py_get_y(QQuaternion::Axes* theWrappedObject){ return theWrappedObject->y; }
void py_set_z(QQuaternion::Axes* theWrappedObject, QQuaternion::Axis  z){ theWrappedObject->z = z; }
QQuaternion::Axis  py_get_z(QQuaternion::Axes* theWrappedObject){ return theWrappedObject->z; }
};





class PythonQtShell_QQuaternion__Axis : public QQuaternion::Axis
{
public:
    PythonQtShell_QQuaternion__Axis():QQuaternion::Axis(),_wrapper(nullptr) {};

   ~PythonQtShell_QQuaternion__Axis();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QQuaternion__Axis : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QQuaternion::Axis* new_QQuaternion__Axis();
QQuaternion::Axis* new_QQuaternion__Axis(const QQuaternion::Axis& other) {
PythonQtShell_QQuaternion__Axis* a = new PythonQtShell_QQuaternion__Axis();
*((QQuaternion::Axis*)a) = other;
return a; }
void delete_QQuaternion__Axis(QQuaternion::Axis* obj) { delete obj; }
   QQuaternion::Axis  static_QQuaternion__Axis_fromVector3D(QVector3D  v);
   QVector3D  toVector3D(QQuaternion::Axis* theWrappedObject) const;
void py_set_x(QQuaternion::Axis* theWrappedObject, float  x){ theWrappedObject->x = x; }
float  py_get_x(QQuaternion::Axis* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QQuaternion::Axis* theWrappedObject, float  y){ theWrappedObject->y = y; }
float  py_get_y(QQuaternion::Axis* theWrappedObject){ return theWrappedObject->y; }
void py_set_z(QQuaternion::Axis* theWrappedObject, float  z){ theWrappedObject->z = z; }
float  py_get_z(QQuaternion::Axis* theWrappedObject){ return theWrappedObject->z; }
};





class PythonQtWrapper_QRadialGradient : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRadialGradient* new_QRadialGradient();
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  centerRadius, const QPointF&  focalPoint, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  centerRadius, qreal  fx, qreal  fy, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy);
QRadialGradient* new_QRadialGradient(const QRadialGradient& other) {
QRadialGradient* a = new QRadialGradient();
*((QRadialGradient*)a) = other;
return a; }
void delete_QRadialGradient(QRadialGradient* obj) { delete obj; }
   QPointF  center(QRadialGradient* theWrappedObject) const;
   qreal  centerRadius(QRadialGradient* theWrappedObject) const;
   QPointF  focalPoint(QRadialGradient* theWrappedObject) const;
   qreal  focalRadius(QRadialGradient* theWrappedObject) const;
   qreal  radius(QRadialGradient* theWrappedObject) const;
   void setCenter(QRadialGradient* theWrappedObject, const QPointF&  center);
   void setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setCenterRadius(QRadialGradient* theWrappedObject, qreal  radius);
   void setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint);
   void setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setFocalRadius(QRadialGradient* theWrappedObject, qreal  radius);
   void setRadius(QRadialGradient* theWrappedObject, qreal  radius);
};





class PythonQtShell_QRadioButton : public QRadioButton
{
public:
    PythonQtShell_QRadioButton(QWidget*  parent = nullptr):QRadioButton(parent),_wrapper(nullptr) {};
    PythonQtShell_QRadioButton(const QString&  text, QWidget*  parent = nullptr):QRadioButton(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QRadioButton() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void checkStateSet() override;
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
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
bool  hitButton(const QPoint&  arg__1) const override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionButton*  button) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
void nextCheckState() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QRadioButton : public QRadioButton
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_hitButton(const QPoint&  arg__1) const { return this->hitButton(arg__1); }
inline void promoted_initStyleOption(QStyleOptionButton*  button) const { this->initStyleOption(button); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QRadioButton::event(e); }
inline bool  py_q_hitButton(const QPoint&  arg__1) const { return QRadioButton::hitButton(arg__1); }
inline void py_q_initStyleOption(QStyleOptionButton*  button) const { QRadioButton::initStyleOption(button); }
inline QSize  py_q_minimumSizeHint() const { return QRadioButton::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QRadioButton::mouseMoveEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QRadioButton::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QRadioButton::sizeHint(); }
};

class PythonQtWrapper_QRadioButton : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRadioButton* new_QRadioButton(QWidget*  parent = nullptr);
QRadioButton* new_QRadioButton(const QString&  text, QWidget*  parent = nullptr);
void delete_QRadioButton(QRadioButton* obj) { delete obj; }
   bool  py_q_event(QRadioButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_event(e));}
   bool  py_q_hitButton(QRadioButton* theWrappedObject, const QPoint&  arg__1) const{  return (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_hitButton(arg__1));}
   void initStyleOption(QRadioButton* theWrappedObject, QStyleOptionButton*  button) const;
   void py_q_initStyleOption(QRadioButton* theWrappedObject, QStyleOptionButton*  button) const{  (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_initStyleOption(button));}
   QSize  py_q_minimumSizeHint(QRadioButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QRadioButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_paintEvent(QRadioButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QSize  py_q_sizeHint(QRadioButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QRasterWindow : public QRasterWindow
{
public:
    PythonQtShell_QRasterWindow(QWindow*  parent = nullptr):QRasterWindow(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QRasterWindow() override;

void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void exposeEvent(QExposeEvent*  arg__1) override;
void focusInEvent(QFocusEvent*  arg__1) override;
QObject*  focusObject() const override;
void focusOutEvent(QFocusEvent*  arg__1) override;
QSurfaceFormat  format() const override;
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  arg__1) override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
void mouseDoubleClickEvent(QMouseEvent*  arg__1) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  arg__1) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  arg__1) const override;
void resizeEvent(QResizeEvent*  event) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  size() const override;
QSurface::SurfaceType  surfaceType() const override;
void tabletEvent(QTabletEvent*  arg__1) override;
void timerEvent(QTimerEvent*  event) override;
void touchEvent(QTouchEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QRasterWindow : public QRasterWindow
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintDevice*  promoted_redirected(QPoint*  arg__1) const { return this->redirected(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QRasterWindow::metric(metric); }
inline QPaintDevice*  py_q_redirected(QPoint*  arg__1) const { return QRasterWindow::redirected(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QRasterWindow::resizeEvent(event); }
};

class PythonQtWrapper_QRasterWindow : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRasterWindow* new_QRasterWindow(QWindow*  parent = nullptr);
void delete_QRasterWindow(QRasterWindow* obj) { delete obj; }
   int  py_q_metric(QRasterWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QRasterWindow*)theWrappedObject)->py_q_metric(metric));}
   QPaintDevice*  py_q_redirected(QRasterWindow* theWrappedObject, QPoint*  arg__1) const{  return (((PythonQtPublicPromoter_QRasterWindow*)theWrappedObject)->py_q_redirected(arg__1));}
   void py_q_resizeEvent(QRasterWindow* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QRasterWindow*)theWrappedObject)->py_q_resizeEvent(event));}
};





class PythonQtWrapper_QRawFont : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AntialiasingType LayoutFlag )
Q_FLAGS(LayoutFlags )
enum AntialiasingType{
  PixelAntialiasing = QRawFont::PixelAntialiasing,   SubPixelAntialiasing = QRawFont::SubPixelAntialiasing};
enum LayoutFlag{
  SeparateAdvances = QRawFont::SeparateAdvances,   KernedAdvances = QRawFont::KernedAdvances,   UseDesignMetrics = QRawFont::UseDesignMetrics};
Q_DECLARE_FLAGS(LayoutFlags, LayoutFlag)
public Q_SLOTS:
QRawFont* new_QRawFont();
QRawFont* new_QRawFont(const QByteArray&  fontData, qreal  pixelSize, QFont::HintingPreference  hintingPreference = QFont::PreferDefaultHinting);
QRawFont* new_QRawFont(const QRawFont&  other);
QRawFont* new_QRawFont(const QString&  fileName, qreal  pixelSize, QFont::HintingPreference  hintingPreference = QFont::PreferDefaultHinting);
void delete_QRawFont(QRawFont* obj) { delete obj; }
   QList<QPointF >  advancesForGlyphIndexes(QRawFont* theWrappedObject, const QList<unsigned int >&  glyphIndexes) const;
   QList<QPointF >  advancesForGlyphIndexes(QRawFont* theWrappedObject, const QList<unsigned int >&  glyphIndexes, QRawFont::LayoutFlags  layoutFlags) const;
   bool  advancesForGlyphIndexes(QRawFont* theWrappedObject, const unsigned int*  glyphIndexes, QPointF*  advances, int  numGlyphs) const;
   bool  advancesForGlyphIndexes(QRawFont* theWrappedObject, const unsigned int*  glyphIndexes, QPointF*  advances, int  numGlyphs, QRawFont::LayoutFlags  layoutFlags) const;
   QImage  alphaMapForGlyph(QRawFont* theWrappedObject, unsigned int  glyphIndex, QRawFont::AntialiasingType  antialiasingType = QRawFont::SubPixelAntialiasing, const QTransform&  transform = QTransform()) const;
   qreal  ascent(QRawFont* theWrappedObject) const;
   qreal  averageCharWidth(QRawFont* theWrappedObject) const;
   QRectF  boundingRect(QRawFont* theWrappedObject, unsigned int  glyphIndex) const;
   qreal  capHeight(QRawFont* theWrappedObject) const;
   qreal  descent(QRawFont* theWrappedObject) const;
   QString  familyName(QRawFont* theWrappedObject) const;
   QByteArray  fontTable(QRawFont* theWrappedObject, QFont::Tag  tag) const;
   QByteArray  fontTable(QRawFont* theWrappedObject, const char*  tagName) const;
   QRawFont  static_QRawFont_fromFont(const QFont&  font, QFontDatabase::WritingSystem  writingSystem = QFontDatabase::Any);
   unsigned int  glyphCount(QRawFont* theWrappedObject) const;
   bool  glyphIndexesForChars(QRawFont* theWrappedObject, const QChar*  chars, int  numChars, unsigned int*  glyphIndexes, int*  numGlyphs) const;
   QList<unsigned int >  glyphIndexesForString(QRawFont* theWrappedObject, const QString&  text) const;
   QString  glyphName(QRawFont* theWrappedObject, unsigned int  glyphIndex) const;
   QFont::HintingPreference  hintingPreference(QRawFont* theWrappedObject) const;
   bool  isValid(QRawFont* theWrappedObject) const;
   qreal  leading(QRawFont* theWrappedObject) const;
   qreal  lineThickness(QRawFont* theWrappedObject) const;
   void loadFromData(QRawFont* theWrappedObject, const QByteArray&  fontData, qreal  pixelSize, QFont::HintingPreference  hintingPreference);
   void loadFromFile(QRawFont* theWrappedObject, const QString&  fileName, qreal  pixelSize, QFont::HintingPreference  hintingPreference);
   qreal  maxCharWidth(QRawFont* theWrappedObject) const;
   bool  __ne__(QRawFont* theWrappedObject, const QRawFont&  other) const;
   QRawFont*  operator_assign(QRawFont* theWrappedObject, const QRawFont&  other);
   bool  __eq__(QRawFont* theWrappedObject, const QRawFont&  other) const;
   QPainterPath  pathForGlyph(QRawFont* theWrappedObject, unsigned int  glyphIndex) const;
   qreal  pixelSize(QRawFont* theWrappedObject) const;
   void setPixelSize(QRawFont* theWrappedObject, qreal  pixelSize);
   QFont::Style  style(QRawFont* theWrappedObject) const;
   QString  styleName(QRawFont* theWrappedObject) const;
   QList<QFontDatabase::WritingSystem >  supportedWritingSystems(QRawFont* theWrappedObject) const;
   bool  supportsCharacter(QRawFont* theWrappedObject, QChar  character) const;
   bool  supportsCharacter(QRawFont* theWrappedObject, uint  ucs4) const;
   void swap(QRawFont* theWrappedObject, QRawFont&  other);
   qreal  underlinePosition(QRawFont* theWrappedObject) const;
   qreal  unitsPerEm(QRawFont* theWrappedObject) const;
   int  weight(QRawFont* theWrappedObject) const;
   qreal  xHeight(QRawFont* theWrappedObject) const;
    bool __nonzero__(QRawFont* obj) { return obj->isValid(); }
};





class PythonQtShell_QRegularExpressionValidator : public QRegularExpressionValidator
{
public:
    PythonQtShell_QRegularExpressionValidator(QObject*  parent = nullptr):QRegularExpressionValidator(parent),_wrapper(nullptr) {};
    PythonQtShell_QRegularExpressionValidator(const QRegularExpression&  re, QObject*  parent = nullptr):QRegularExpressionValidator(re, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QRegularExpressionValidator() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fixup(QString&  arg__1) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  input, int&  pos) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QRegularExpressionValidator : public QRegularExpressionValidator
{ public:
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QRegularExpressionValidator::validate(input, pos); }
};

class PythonQtWrapper_QRegularExpressionValidator : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRegularExpressionValidator* new_QRegularExpressionValidator(QObject*  parent = nullptr);
QRegularExpressionValidator* new_QRegularExpressionValidator(const QRegularExpression&  re, QObject*  parent = nullptr);
void delete_QRegularExpressionValidator(QRegularExpressionValidator* obj) { delete obj; }
   QRegularExpression  regularExpression(QRegularExpressionValidator* theWrappedObject) const;
   QValidator::State  py_q_validate(QRegularExpressionValidator* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QRegularExpressionValidator*)theWrappedObject)->py_q_validate(input, pos));}
};





class PythonQtShell_QResizeEvent : public QResizeEvent
{
public:
    PythonQtShell_QResizeEvent(const QResizeEvent&  arg__1):QResizeEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QResizeEvent(const QSize&  size, const QSize&  oldSize):QResizeEvent(size, oldSize),_wrapper(nullptr) {};

   ~PythonQtShell_QResizeEvent() override;

QResizeEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QResizeEvent : public QResizeEvent
{ public:
inline QResizeEvent&  promoted_operator_assign(const QResizeEvent&  other) { return this->QResizeEvent::operator=(other); }
inline QResizeEvent*  py_q_clone() const { return QResizeEvent::clone(); }
};

class PythonQtWrapper_QResizeEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QResizeEvent* new_QResizeEvent(const QResizeEvent&  arg__1);
QResizeEvent* new_QResizeEvent(const QSize&  size, const QSize&  oldSize);
void delete_QResizeEvent(QResizeEvent* obj) { delete obj; }
   QResizeEvent*  py_q_clone(QResizeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QResizeEvent*)theWrappedObject)->py_q_clone());}
   const QSize*  oldSize(QResizeEvent* theWrappedObject) const;
   QResizeEvent*  operator_assign(QResizeEvent* theWrappedObject, const QResizeEvent&  other);
   const QSize*  size(QResizeEvent* theWrappedObject) const;
};


