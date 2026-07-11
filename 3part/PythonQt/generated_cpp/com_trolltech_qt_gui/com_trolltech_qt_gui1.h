#include <PythonQt.h>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QUrl>
#include <QVariant>
#include <QtWidgets/qabstractbutton.h>
#include <QtWidgets/qabstractitemdelegate.h>
#include <QtWidgets/qabstractitemview.h>
#include <QtWidgets/qapplication.h>
#include <QtWidgets/qbuttongroup.h>
#include <QtWidgets/qcalendarwidget.h>
#include <QtWidgets/qcolumnview.h>
#include <QtWidgets/qcombobox.h>
#include <QtWidgets/qcommandlinkbutton.h>
#include <QtWidgets/qcommonstyle.h>
#include <QtWidgets/qcompleter.h>
#include <QtWidgets/qdatawidgetmapper.h>
#include <QtWidgets/qdatetimeedit.h>
#include <QtWidgets/qdial.h>
#include <QtWidgets/qdialog.h>
#include <QtWidgets/qdialogbuttonbox.h>
#include <QtWidgets/qdockwidget.h>
#include <QtWidgets/qerrormessage.h>
#include <QtWidgets/qfiledialog.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qmenu.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qscrollbar.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qspinbox.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qstyleoption.h>
#include <QtWidgets/qwidget.h>
#include <qabstractfileiconprovider.h>
#include <qabstractitemmodel.h>
#include <qabstractproxymodel.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcalendar.h>
#include <qcolor.h>
#include <qcolorspace.h>
#include <qcolortransform.h>
#include <qconcatenatetablesproxymodel.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdesktopservices.h>
#include <qdir.h>
#include <qdrag.h>
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
#include <qrgba64.h>
#include <qscreen.h>
#include <qsize.h>
#include <qthread.h>
#include <qtimezone.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvectornd.h>
#include <qwindow.h>



class PythonQtShell_QColorSpace__PrimaryPoints : public QColorSpace::PrimaryPoints
{
public:
    PythonQtShell_QColorSpace__PrimaryPoints():QColorSpace::PrimaryPoints(),_wrapper(nullptr) {};

   ~PythonQtShell_QColorSpace__PrimaryPoints();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QColorSpace__PrimaryPoints : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QColorSpace::PrimaryPoints* new_QColorSpace__PrimaryPoints();
QColorSpace::PrimaryPoints* new_QColorSpace__PrimaryPoints(const QColorSpace::PrimaryPoints& other) {
PythonQtShell_QColorSpace__PrimaryPoints* a = new PythonQtShell_QColorSpace__PrimaryPoints();
*((QColorSpace::PrimaryPoints*)a) = other;
return a; }
void delete_QColorSpace__PrimaryPoints(QColorSpace::PrimaryPoints* obj) { delete obj; }
   QColorSpace::PrimaryPoints  static_QColorSpace__PrimaryPoints_fromPrimaries(QColorSpace::Primaries  primaries);
   bool  isValid(QColorSpace::PrimaryPoints* theWrappedObject) const;
    bool __nonzero__(QColorSpace::PrimaryPoints* obj) { return obj->isValid(); }
void py_set_bluePoint(QColorSpace::PrimaryPoints* theWrappedObject, QPointF  bluePoint){ theWrappedObject->bluePoint = bluePoint; }
QPointF  py_get_bluePoint(QColorSpace::PrimaryPoints* theWrappedObject){ return theWrappedObject->bluePoint; }
void py_set_greenPoint(QColorSpace::PrimaryPoints* theWrappedObject, QPointF  greenPoint){ theWrappedObject->greenPoint = greenPoint; }
QPointF  py_get_greenPoint(QColorSpace::PrimaryPoints* theWrappedObject){ return theWrappedObject->greenPoint; }
void py_set_redPoint(QColorSpace::PrimaryPoints* theWrappedObject, QPointF  redPoint){ theWrappedObject->redPoint = redPoint; }
QPointF  py_get_redPoint(QColorSpace::PrimaryPoints* theWrappedObject){ return theWrappedObject->redPoint; }
void py_set_whitePoint(QColorSpace::PrimaryPoints* theWrappedObject, QPointF  whitePoint){ theWrappedObject->whitePoint = whitePoint; }
QPointF  py_get_whitePoint(QColorSpace::PrimaryPoints* theWrappedObject){ return theWrappedObject->whitePoint; }
};





class PythonQtWrapper_QColorTransform : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QColorTransform* new_QColorTransform();
QColorTransform* new_QColorTransform(const QColorTransform&  colorTransform);
void delete_QColorTransform(QColorTransform* obj) { delete obj; }
   bool  isIdentity(QColorTransform* theWrappedObject) const;
   QRgba64  map(QColorTransform* theWrappedObject, QRgba64  rgba64) const;
   QColor  map(QColorTransform* theWrappedObject, const QColor&  color) const;
   unsigned int  map(QColorTransform* theWrappedObject, unsigned int  argb) const;
   bool  __ne__(QColorTransform* theWrappedObject, const QColorTransform&  ct2);
   QColorTransform*  operator_assign(QColorTransform* theWrappedObject, const QColorTransform&  other);
   bool  __eq__(QColorTransform* theWrappedObject, const QColorTransform&  ct2);
   void swap(QColorTransform* theWrappedObject, QColorTransform&  other);
};





class PythonQtShell_QColumnView : public QColumnView
{
public:
    PythonQtShell_QColumnView(QWidget*  parent = nullptr):QColumnView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QColumnView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
QAbstractItemView*  createColumn(const QModelIndex&  rootIndex) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
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
bool  event(QEvent*  event) override;
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
QModelIndex  indexAt(const QPoint&  point) const override;
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
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
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
void timerEvent(QTimerEvent*  event) override;
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
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QColumnView : public QColumnView
{ public:
inline QAbstractItemView*  promoted_createColumn(const QModelIndex&  rootIndex) { return this->createColumn(rootIndex); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_initializeColumn(QAbstractItemView*  column) const { this->initializeColumn(column); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline QAbstractItemView*  py_q_createColumn(const QModelIndex&  rootIndex) { return QColumnView::createColumn(rootIndex); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QColumnView::currentChanged(current, previous); }
inline int  py_q_horizontalOffset() const { return QColumnView::horizontalOffset(); }
inline QModelIndex  py_q_indexAt(const QPoint&  point) const { return QColumnView::indexAt(point); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QColumnView::isIndexHidden(index); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QColumnView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QColumnView::resizeEvent(event); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QColumnView::rowsInserted(parent, start, end); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QColumnView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QColumnView::scrollTo(index, hint); }
inline void py_q_selectAll() { QColumnView::selectAll(); }
inline void py_q_setModel(QAbstractItemModel*  model) { QColumnView::setModel(model); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QColumnView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QColumnView::setSelection(rect, command); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QColumnView::setSelectionModel(selectionModel); }
inline QSize  py_q_sizeHint() const { return QColumnView::sizeHint(); }
inline int  py_q_verticalOffset() const { return QColumnView::verticalOffset(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QColumnView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QColumnView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QColumnView : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QColumnView* new_QColumnView(QWidget*  parent = nullptr);
void delete_QColumnView(QColumnView* obj) { delete obj; }
   QList<int >  columnWidths(QColumnView* theWrappedObject) const;
   QAbstractItemView*  createColumn(QColumnView* theWrappedObject, const QModelIndex&  rootIndex);
   QAbstractItemView*  py_q_createColumn(QColumnView* theWrappedObject, const QModelIndex&  rootIndex){  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_createColumn(rootIndex));}
   void py_q_currentChanged(QColumnView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   int  py_q_horizontalOffset(QColumnView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_horizontalOffset());}
   QModelIndex  py_q_indexAt(QColumnView* theWrappedObject, const QPoint&  point) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_indexAt(point));}
   void initializeColumn(QColumnView* theWrappedObject, QAbstractItemView*  column) const;
   bool  py_q_isIndexHidden(QColumnView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isPreviewColumnVisible(QColumnView* theWrappedObject) const;
   QModelIndex  py_q_moveCursor(QColumnView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   QWidget*  previewWidget(QColumnView* theWrappedObject) const;
   void py_q_resizeEvent(QColumnView* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_resizeEvent(event));}
   bool  resizeGripsVisible(QColumnView* theWrappedObject) const;
   void py_q_rowsInserted(QColumnView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   void py_q_scrollContentsBy(QColumnView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QColumnView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   void py_q_selectAll(QColumnView* theWrappedObject){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_selectAll());}
   void setColumnWidths(QColumnView* theWrappedObject, const QList<int >&  list);
   void py_q_setModel(QColumnView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_setModel(model));}
   void setPreviewColumnVisible(QColumnView* theWrappedObject, bool  visible);
   void setPreviewWidget(QColumnView* theWrappedObject, QWidget*  widget);
   void setResizeGripsVisible(QColumnView* theWrappedObject, bool  visible);
   void py_q_setRootIndex(QColumnView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_setRootIndex(index));}
   void py_q_setSelection(QColumnView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void py_q_setSelectionModel(QColumnView* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   QSize  py_q_sizeHint(QColumnView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_sizeHint());}
   int  py_q_verticalOffset(QColumnView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_verticalOffset());}
   QRect  py_q_visualRect(QColumnView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QColumnView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
};





class PythonQtShell_QComboBox : public QComboBox
{
public:
    PythonQtShell_QComboBox(QWidget*  parent = nullptr):QComboBox(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QComboBox() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  e) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  e) override;
void hidePopup() override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionComboBox*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  e) override;
void setModel(QAbstractItemModel*  model) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  e) override;
void showPopup() override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QComboBox : public QComboBox
{ public:
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { this->contextMenuEvent(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { this->focusInEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { this->focusOutEvent(e); }
inline void promoted_hideEvent(QHideEvent*  e) { this->hideEvent(e); }
inline void promoted_initStyleOption(QStyleOptionComboBox*  option) const { this->initStyleOption(option); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { this->keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { this->keyReleaseEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_showEvent(QShowEvent*  e) { this->showEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void py_q_changeEvent(QEvent*  e) { QComboBox::changeEvent(e); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  e) { QComboBox::contextMenuEvent(e); }
inline bool  py_q_event(QEvent*  event) { return QComboBox::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  e) { QComboBox::focusInEvent(e); }
inline void py_q_focusOutEvent(QFocusEvent*  e) { QComboBox::focusOutEvent(e); }
inline void py_q_hideEvent(QHideEvent*  e) { QComboBox::hideEvent(e); }
inline void py_q_hidePopup() { QComboBox::hidePopup(); }
inline void py_q_initStyleOption(QStyleOptionComboBox*  option) const { QComboBox::initStyleOption(option); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QComboBox::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QComboBox::inputMethodQuery(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  e) { QComboBox::keyPressEvent(e); }
inline void py_q_keyReleaseEvent(QKeyEvent*  e) { QComboBox::keyReleaseEvent(e); }
inline QSize  py_q_minimumSizeHint() const { return QComboBox::minimumSizeHint(); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QComboBox::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QComboBox::mouseReleaseEvent(e); }
inline void py_q_paintEvent(QPaintEvent*  e) { QComboBox::paintEvent(e); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QComboBox::resizeEvent(e); }
inline void py_q_setModel(QAbstractItemModel*  model) { QComboBox::setModel(model); }
inline void py_q_showEvent(QShowEvent*  e) { QComboBox::showEvent(e); }
inline void py_q_showPopup() { QComboBox::showPopup(); }
inline QSize  py_q_sizeHint() const { return QComboBox::sizeHint(); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QComboBox::wheelEvent(e); }
};

class PythonQtWrapper_QComboBox : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QComboBox* new_QComboBox(QWidget*  parent = nullptr);
void delete_QComboBox(QComboBox* obj) { delete obj; }
   void addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData = QVariant());
   void addItems(QComboBox* theWrappedObject, const QStringList&  texts);
   void py_q_changeEvent(QComboBox* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_changeEvent(e));}
   QCompleter*  completer(QComboBox* theWrappedObject) const;
   void py_q_contextMenuEvent(QComboBox* theWrappedObject, QContextMenuEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_contextMenuEvent(e));}
   int  count(QComboBox* theWrappedObject) const;
   QVariant  currentData(QComboBox* theWrappedObject, int  role = Qt::UserRole) const;
   int  currentIndex(QComboBox* theWrappedObject) const;
   QString  currentText(QComboBox* theWrappedObject) const;
   bool  duplicatesEnabled(QComboBox* theWrappedObject) const;
   bool  py_q_event(QComboBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_event(event));}
   int  findData(QComboBox* theWrappedObject, const QVariant&  data, int  role = Qt::UserRole, Qt::MatchFlags  flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const;
   int  findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const;
   void py_q_focusInEvent(QComboBox* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_focusInEvent(e));}
   void py_q_focusOutEvent(QComboBox* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_focusOutEvent(e));}
   bool  hasFrame(QComboBox* theWrappedObject) const;
   void py_q_hideEvent(QComboBox* theWrappedObject, QHideEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_hideEvent(e));}
   void hidePopup(QComboBox* theWrappedObject);
   void py_q_hidePopup(QComboBox* theWrappedObject){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_hidePopup());}
   QSize  iconSize(QComboBox* theWrappedObject) const;
   void initStyleOption(QComboBox* theWrappedObject, QStyleOptionComboBox*  option) const;
   void py_q_initStyleOption(QComboBox* theWrappedObject, QStyleOptionComboBox*  option) const{  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_initStyleOption(option));}
   void py_q_inputMethodEvent(QComboBox* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  py_q_inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const{  return (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_inputMethodQuery(arg__1));}
   QVariant  inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  query, const QVariant&  argument) const;
   void insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData = QVariant());
   void insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts);
   QComboBox::InsertPolicy  insertPolicy(QComboBox* theWrappedObject) const;
   void insertSeparator(QComboBox* theWrappedObject, int  index);
   bool  isEditable(QComboBox* theWrappedObject) const;
   QVariant  itemData(QComboBox* theWrappedObject, int  index, int  role = Qt::UserRole) const;
   QAbstractItemDelegate*  itemDelegate(QComboBox* theWrappedObject) const;
   QIcon  itemIcon(QComboBox* theWrappedObject, int  index) const;
   QString  itemText(QComboBox* theWrappedObject, int  index) const;
   void py_q_keyPressEvent(QComboBox* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_keyPressEvent(e));}
   void py_q_keyReleaseEvent(QComboBox* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_keyReleaseEvent(e));}
   QComboBox::LabelDrawingMode  labelDrawingMode(QComboBox* theWrappedObject) const;
   QLineEdit*  lineEdit(QComboBox* theWrappedObject) const;
   int  maxCount(QComboBox* theWrappedObject) const;
   int  maxVisibleItems(QComboBox* theWrappedObject) const;
   int  minimumContentsLength(QComboBox* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QComboBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_minimumSizeHint());}
   QAbstractItemModel*  model(QComboBox* theWrappedObject) const;
   int  modelColumn(QComboBox* theWrappedObject) const;
   void py_q_mousePressEvent(QComboBox* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QComboBox* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   void py_q_paintEvent(QComboBox* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_paintEvent(e));}
   QString  placeholderText(QComboBox* theWrappedObject) const;
   void removeItem(QComboBox* theWrappedObject, int  index);
   void py_q_resizeEvent(QComboBox* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_resizeEvent(e));}
   QModelIndex  rootModelIndex(QComboBox* theWrappedObject) const;
   void setCompleter(QComboBox* theWrappedObject, QCompleter*  c);
   void setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable);
   void setEditable(QComboBox* theWrappedObject, bool  editable);
   void setFrame(QComboBox* theWrappedObject, bool  arg__1);
   void setIconSize(QComboBox* theWrappedObject, const QSize&  size);
   void setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy);
   void setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role = Qt::UserRole);
   void setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon);
   void setItemText(QComboBox* theWrappedObject, int  index, const QString&  text);
   void setLabelDrawingMode(QComboBox* theWrappedObject, QComboBox::LabelDrawingMode  labelDrawing);
   void setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit);
   void setMaxCount(QComboBox* theWrappedObject, int  max);
   void setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems);
   void setMinimumContentsLength(QComboBox* theWrappedObject, int  characters);
   void setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model);
   void py_q_setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_setModel(model));}
   void setModelColumn(QComboBox* theWrappedObject, int  visibleColumn);
   void setPlaceholderText(QComboBox* theWrappedObject, const QString&  placeholderText);
   void setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index);
   void setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy);
   void setValidator(QComboBox* theWrappedObject, const QValidator*  v);
   void setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView);
   void py_q_showEvent(QComboBox* theWrappedObject, QShowEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_showEvent(e));}
   void showPopup(QComboBox* theWrappedObject);
   void py_q_showPopup(QComboBox* theWrappedObject){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_showPopup());}
   QComboBox::SizeAdjustPolicy  sizeAdjustPolicy(QComboBox* theWrappedObject) const;
   QSize  py_q_sizeHint(QComboBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_sizeHint());}
   const QValidator*  validator(QComboBox* theWrappedObject) const;
   QAbstractItemView*  view(QComboBox* theWrappedObject) const;
   void py_q_wheelEvent(QComboBox* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_wheelEvent(e));}
};





class PythonQtShell_QCommandLinkButton : public QCommandLinkButton
{
public:
    PythonQtShell_QCommandLinkButton(QWidget*  parent = nullptr):QCommandLinkButton(parent),_wrapper(nullptr) {};
    PythonQtShell_QCommandLinkButton(const QString&  text, QWidget*  parent = nullptr):QCommandLinkButton(text, parent),_wrapper(nullptr) {};
    PythonQtShell_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = nullptr):QCommandLinkButton(text, description, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QCommandLinkButton() override;

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

class PythonQtPublicPromoter_QCommandLinkButton : public QCommandLinkButton
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QCommandLinkButton::event(e); }
inline int  py_q_heightForWidth(int  arg__1) const { return QCommandLinkButton::heightForWidth(arg__1); }
inline void py_q_initStyleOption(QStyleOptionButton*  option) const { QCommandLinkButton::initStyleOption(option); }
inline QSize  py_q_minimumSizeHint() const { return QCommandLinkButton::minimumSizeHint(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QCommandLinkButton::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QCommandLinkButton::sizeHint(); }
};

class PythonQtWrapper_QCommandLinkButton : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QCommandLinkButton* new_QCommandLinkButton(QWidget*  parent = nullptr);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, QWidget*  parent = nullptr);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = nullptr);
void delete_QCommandLinkButton(QCommandLinkButton* obj) { delete obj; }
   QString  description(QCommandLinkButton* theWrappedObject) const;
   bool  py_q_event(QCommandLinkButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_event(e));}
   int  py_q_heightForWidth(QCommandLinkButton* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void py_q_initStyleOption(QCommandLinkButton* theWrappedObject, QStyleOptionButton*  option) const{  (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_initStyleOption(option));}
   QSize  py_q_minimumSizeHint(QCommandLinkButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_paintEvent(QCommandLinkButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setDescription(QCommandLinkButton* theWrappedObject, const QString&  description);
   QSize  py_q_sizeHint(QCommandLinkButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QCommonStyle : public QCommonStyle
{
public:
    PythonQtShell_QCommonStyle():QCommonStyle(),_wrapper(nullptr) {};

   ~PythonQtShell_QCommonStyle() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = nullptr) const override;
void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const override;
void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const override;
void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const override;
void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const override;
QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = nullptr) const override;
QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const override;
int  layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const override;
int  pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const override;
void polish(QApplication*  app) override;
void polish(QPalette&  arg__1) override;
void polish(QWidget*  widget) override;
QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = nullptr) const override;
QIcon  standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const override;
QPalette  standardPalette() const override;
QPixmap  standardPixmap(QStyle::StandardPixmap  sp, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const override;
int  styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = nullptr, const QWidget*  w = nullptr, QStyleHintReturn*  shret = nullptr) const override;
QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = nullptr) const override;
QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = nullptr) const override;
void timerEvent(QTimerEvent*  event) override;
void unpolish(QApplication*  application) override;
void unpolish(QWidget*  widget) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QCommonStyle : public QCommonStyle
{ public:
inline void py_q_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = nullptr) const { QCommonStyle::drawComplexControl(cc, opt, p, w); }
inline void py_q_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const { QCommonStyle::drawControl(element, opt, p, w); }
inline void py_q_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const { QCommonStyle::drawPrimitive(pe, opt, p, w); }
inline QPixmap  py_q_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline QStyle::SubControl  py_q_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = nullptr) const { return QCommonStyle::hitTestComplexControl(cc, opt, pt, w); }
inline int  py_q_layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget); }
inline int  py_q_pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const { return QCommonStyle::pixelMetric(m, opt, widget); }
inline void py_q_polish(QApplication*  app) { QCommonStyle::polish(app); }
inline void py_q_polish(QPalette&  arg__1) { QCommonStyle::polish(arg__1); }
inline void py_q_polish(QWidget*  widget) { QCommonStyle::polish(widget); }
inline QSize  py_q_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = nullptr) const { return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline QIcon  py_q_standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const { return QCommonStyle::standardIcon(standardIcon, opt, widget); }
inline QPixmap  py_q_standardPixmap(QStyle::StandardPixmap  sp, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const { return QCommonStyle::standardPixmap(sp, opt, widget); }
inline int  py_q_styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = nullptr, const QWidget*  w = nullptr, QStyleHintReturn*  shret = nullptr) const { return QCommonStyle::styleHint(sh, opt, w, shret); }
inline QRect  py_q_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = nullptr) const { return QCommonStyle::subControlRect(cc, opt, sc, w); }
inline QRect  py_q_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = nullptr) const { return QCommonStyle::subElementRect(r, opt, widget); }
inline void py_q_unpolish(QApplication*  application) { QCommonStyle::unpolish(application); }
inline void py_q_unpolish(QWidget*  widget) { QCommonStyle::unpolish(widget); }
};

class PythonQtWrapper_QCommonStyle : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QCommonStyle* new_QCommonStyle();
void delete_QCommonStyle(QCommonStyle* obj) { delete obj; }
   void py_q_drawComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_drawComplexControl(cc, opt, p, w));}
   void py_q_drawControl(QCommonStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_drawControl(element, opt, p, w));}
   void py_q_drawPrimitive(QCommonStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_drawPrimitive(pe, opt, p, w));}
   QPixmap  py_q_generatedIconPixmap(QCommonStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_generatedIconPixmap(iconMode, pixmap, opt));}
   QStyle::SubControl  py_q_hitTestComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_hitTestComplexControl(cc, opt, pt, w));}
   int  py_q_layoutSpacing(QCommonStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_layoutSpacing(control1, control2, orientation, option, widget));}
   int  py_q_pixelMetric(QCommonStyle* theWrappedObject, QStyle::PixelMetric  m, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_pixelMetric(m, opt, widget));}
   void py_q_polish(QCommonStyle* theWrappedObject, QApplication*  app){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_polish(app));}
   void py_q_polish(QCommonStyle* theWrappedObject, QPalette&  arg__1){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_polish(arg__1));}
   void py_q_polish(QCommonStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_polish(widget));}
   QSize  py_q_sizeFromContents(QCommonStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_sizeFromContents(ct, opt, contentsSize, widget));}
   QIcon  py_q_standardIcon(QCommonStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_standardIcon(standardIcon, opt, widget));}
   QPixmap  py_q_standardPixmap(QCommonStyle* theWrappedObject, QStyle::StandardPixmap  sp, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_standardPixmap(sp, opt, widget));}
   int  py_q_styleHint(QCommonStyle* theWrappedObject, QStyle::StyleHint  sh, const QStyleOption*  opt = nullptr, const QWidget*  w = nullptr, QStyleHintReturn*  shret = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_styleHint(sh, opt, w, shret));}
   QRect  py_q_subControlRect(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_subControlRect(cc, opt, sc, w));}
   QRect  py_q_subElementRect(QCommonStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_subElementRect(r, opt, widget));}
   void py_q_unpolish(QCommonStyle* theWrappedObject, QApplication*  application){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_unpolish(application));}
   void py_q_unpolish(QCommonStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_unpolish(widget));}
};





class PythonQtShell_QCompleter : public QCompleter
{
public:
    PythonQtShell_QCompleter(QAbstractItemModel*  model, QObject*  parent = nullptr):QCompleter(model, parent),_wrapper(nullptr) {};
    PythonQtShell_QCompleter(QObject*  parent = nullptr):QCompleter(parent),_wrapper(nullptr) {};
    PythonQtShell_QCompleter(const QStringList&  completions, QObject*  parent = nullptr):QCompleter(completions, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QCompleter() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  o, QEvent*  e) override;
QString  pathFromIndex(const QModelIndex&  index) const override;
QStringList  splitPath(const QString&  path) const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QCompleter : public QCompleter
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return this->eventFilter(o, e); }
inline bool  py_q_event(QEvent*  arg__1) { return QCompleter::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  o, QEvent*  e) { return QCompleter::eventFilter(o, e); }
inline QString  py_q_pathFromIndex(const QModelIndex&  index) const { return QCompleter::pathFromIndex(index); }
inline QStringList  py_q_splitPath(const QString&  path) const { return QCompleter::splitPath(path); }
};

class PythonQtWrapper_QCompleter : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QCompleter* new_QCompleter(QAbstractItemModel*  model, QObject*  parent = nullptr);
QCompleter* new_QCompleter(QObject*  parent = nullptr);
QCompleter* new_QCompleter(const QStringList&  completions, QObject*  parent = nullptr);
void delete_QCompleter(QCompleter* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QCompleter* theWrappedObject) const;
   int  completionColumn(QCompleter* theWrappedObject) const;
   int  completionCount(QCompleter* theWrappedObject) const;
   QCompleter::CompletionMode  completionMode(QCompleter* theWrappedObject) const;
   QAbstractItemModel*  completionModel(QCompleter* theWrappedObject) const;
   QString  completionPrefix(QCompleter* theWrappedObject) const;
   int  completionRole(QCompleter* theWrappedObject) const;
   QString  currentCompletion(QCompleter* theWrappedObject) const;
   QModelIndex  currentIndex(QCompleter* theWrappedObject) const;
   int  currentRow(QCompleter* theWrappedObject) const;
   bool  py_q_event(QCompleter* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QCompleter* theWrappedObject, QObject*  o, QEvent*  e){  return (((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->py_q_eventFilter(o, e));}
   Qt::MatchFlags  filterMode(QCompleter* theWrappedObject) const;
   int  maxVisibleItems(QCompleter* theWrappedObject) const;
   QAbstractItemModel*  model(QCompleter* theWrappedObject) const;
   QCompleter::ModelSorting  modelSorting(QCompleter* theWrappedObject) const;
   QString  pathFromIndex(QCompleter* theWrappedObject, const QModelIndex&  index) const;
   QString  py_q_pathFromIndex(QCompleter* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->py_q_pathFromIndex(index));}
   QAbstractItemView*  popup(QCompleter* theWrappedObject) const;
   void setCaseSensitivity(QCompleter* theWrappedObject, Qt::CaseSensitivity  caseSensitivity);
   void setCompletionColumn(QCompleter* theWrappedObject, int  column);
   void setCompletionMode(QCompleter* theWrappedObject, QCompleter::CompletionMode  mode);
   void setCompletionRole(QCompleter* theWrappedObject, int  role);
   bool  setCurrentRow(QCompleter* theWrappedObject, int  row);
   void setFilterMode(QCompleter* theWrappedObject, Qt::MatchFlags  filterMode);
   void setMaxVisibleItems(QCompleter* theWrappedObject, int  maxItems);
   void setModel(QCompleter* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractItemModel* >  c);
   void setModelSorting(QCompleter* theWrappedObject, QCompleter::ModelSorting  sorting);
   void setPopup(QCompleter* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractItemView* >  popup);
   void setWidget(QCompleter* theWrappedObject, QWidget*  widget);
   QStringList  splitPath(QCompleter* theWrappedObject, const QString&  path) const;
   QStringList  py_q_splitPath(QCompleter* theWrappedObject, const QString&  path) const{  return (((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->py_q_splitPath(path));}
   QWidget*  widget(QCompleter* theWrappedObject) const;
   bool  wrapAround(QCompleter* theWrappedObject) const;
};





class PythonQtShell_QConcatenateTablesProxyModel : public QConcatenateTablesProxyModel
{
public:
    PythonQtShell_QConcatenateTablesProxyModel(QObject*  parent = nullptr):QConcatenateTablesProxyModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QConcatenateTablesProxyModel() override;

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
QMap<int , QVariant >  itemData(const QModelIndex&  proxyIndex) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
void multiData(const QModelIndex&  index, QModelRoleDataSpan  roleDataSpan) const override;
QModelIndex  parent(const QModelIndex&  index) const override;
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

class PythonQtPublicPromoter_QConcatenateTablesProxyModel : public QConcatenateTablesProxyModel
{ public:
inline bool  py_q_canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const { return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QConcatenateTablesProxyModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QConcatenateTablesProxyModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QConcatenateTablesProxyModel::flags(index); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QConcatenateTablesProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QConcatenateTablesProxyModel::index(row, column, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  proxyIndex) const { return QConcatenateTablesProxyModel::itemData(proxyIndex); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QConcatenateTablesProxyModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QConcatenateTablesProxyModel::mimeTypes(); }
inline QModelIndex  py_q_parent(const QModelIndex&  index) const { return QConcatenateTablesProxyModel::parent(index); }
inline QHash<int , QByteArray >  py_q_roleNames() const { return QConcatenateTablesProxyModel::roleNames(); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QConcatenateTablesProxyModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QConcatenateTablesProxyModel::setData(index, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QConcatenateTablesProxyModel::setItemData(index, roles); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QConcatenateTablesProxyModel::span(index); }
};

class PythonQtWrapper_QConcatenateTablesProxyModel : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QConcatenateTablesProxyModel* new_QConcatenateTablesProxyModel(QObject*  parent = nullptr);
void delete_QConcatenateTablesProxyModel(QConcatenateTablesProxyModel* obj) { delete obj; }
   void addSourceModel(QConcatenateTablesProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel);
   bool  py_q_canDropMimeData(QConcatenateTablesProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_canDropMimeData(data, action, row, column, parent));}
   int  py_q_columnCount(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QConcatenateTablesProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   Qt::ItemFlags  py_q_flags(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_flags(index));}
   QVariant  py_q_headerData(QConcatenateTablesProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QConcatenateTablesProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   QMap<int , QVariant >  py_q_itemData(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_itemData(proxyIndex));}
   QModelIndex  mapFromSource(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const;
   QModelIndex  mapToSource(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const;
   QMimeData*  py_q_mimeData(QConcatenateTablesProxyModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QConcatenateTablesProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_mimeTypes());}
   QModelIndex  py_q_parent(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_parent(index));}
   void removeSourceModel(QConcatenateTablesProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel);
   QHash<int , QByteArray >  py_q_roleNames(QConcatenateTablesProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_roleNames());}
   int  py_q_rowCount(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setData(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  py_q_setItemData(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   QList<QAbstractItemModel* >  sourceModels(QConcatenateTablesProxyModel* theWrappedObject) const;
   QSize  py_q_span(QConcatenateTablesProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QConcatenateTablesProxyModel*)theWrappedObject)->py_q_span(index));}
};





class PythonQtWrapper_QConicalGradient : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QConicalGradient* new_QConicalGradient();
QConicalGradient* new_QConicalGradient(const QPointF&  center, qreal  startAngle);
QConicalGradient* new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle);
QConicalGradient* new_QConicalGradient(const QConicalGradient& other) {
QConicalGradient* a = new QConicalGradient();
*((QConicalGradient*)a) = other;
return a; }
void delete_QConicalGradient(QConicalGradient* obj) { delete obj; }
   qreal  angle(QConicalGradient* theWrappedObject) const;
   QPointF  center(QConicalGradient* theWrappedObject) const;
   void setAngle(QConicalGradient* theWrappedObject, qreal  angle);
   void setCenter(QConicalGradient* theWrappedObject, const QPointF&  center);
   void setCenter(QConicalGradient* theWrappedObject, qreal  x, qreal  y);
};





class PythonQtShell_QContextMenuEvent : public QContextMenuEvent
{
public:
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos):QContextMenuEvent(reason, pos),_wrapper(nullptr) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QContextMenuEvent(reason, pos, globalPos, modifiers),_wrapper(nullptr) {};
    PythonQtShell_QContextMenuEvent(const QContextMenuEvent&  arg__1):QContextMenuEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QContextMenuEvent() override;

QContextMenuEvent*  clone() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QContextMenuEvent : public QContextMenuEvent
{ public:
inline QContextMenuEvent&  promoted_operator_assign(const QContextMenuEvent&  other) { return this->QContextMenuEvent::operator=(other); }
inline QContextMenuEvent*  py_q_clone() const { return QContextMenuEvent::clone(); }
};

class PythonQtWrapper_QContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QContextMenuEvent::Mouse,   Keyboard = QContextMenuEvent::Keyboard,   Other = QContextMenuEvent::Other};
public Q_SLOTS:
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
QContextMenuEvent* new_QContextMenuEvent(const QContextMenuEvent&  arg__1);
void delete_QContextMenuEvent(QContextMenuEvent* obj) { delete obj; }
   QContextMenuEvent*  py_q_clone(QContextMenuEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QContextMenuEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  globalPos(QContextMenuEvent* theWrappedObject) const;
   int  globalX(QContextMenuEvent* theWrappedObject) const;
   int  globalY(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent*  operator_assign(QContextMenuEvent* theWrappedObject, const QContextMenuEvent&  other);
   const QPoint*  pos(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent::Reason  reason(QContextMenuEvent* theWrappedObject) const;
   int  x(QContextMenuEvent* theWrappedObject) const;
   int  y(QContextMenuEvent* theWrappedObject) const;
};





class PythonQtShell_QDataWidgetMapper : public QDataWidgetMapper
{
public:
    PythonQtShell_QDataWidgetMapper(QObject*  parent = nullptr):QDataWidgetMapper(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QDataWidgetMapper() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void setCurrentIndex(int  index) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDataWidgetMapper : public QDataWidgetMapper
{ public:
inline void py_q_setCurrentIndex(int  index) { QDataWidgetMapper::setCurrentIndex(index); }
};

class PythonQtWrapper_QDataWidgetMapper : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDataWidgetMapper* new_QDataWidgetMapper(QObject*  parent = nullptr);
void delete_QDataWidgetMapper(QDataWidgetMapper* obj) { delete obj; }
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section);
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section, const QByteArray&  propertyName);
   void clearMapping(QDataWidgetMapper* theWrappedObject);
   int  currentIndex(QDataWidgetMapper* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QDataWidgetMapper* theWrappedObject) const;
   QByteArray  mappedPropertyName(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   int  mappedSection(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   QWidget*  mappedWidgetAt(QDataWidgetMapper* theWrappedObject, int  section) const;
   QAbstractItemModel*  model(QDataWidgetMapper* theWrappedObject) const;
   Qt::Orientation  orientation(QDataWidgetMapper* theWrappedObject) const;
   void removeMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget);
   QModelIndex  rootIndex(QDataWidgetMapper* theWrappedObject) const;
   void py_q_setCurrentIndex(QDataWidgetMapper* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QDataWidgetMapper*)theWrappedObject)->py_q_setCurrentIndex(index));}
   void setItemDelegate(QDataWidgetMapper* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setModel(QDataWidgetMapper* theWrappedObject, QAbstractItemModel*  model);
   void setOrientation(QDataWidgetMapper* theWrappedObject, Qt::Orientation  aOrientation);
   void setRootIndex(QDataWidgetMapper* theWrappedObject, const QModelIndex&  index);
   void setSubmitPolicy(QDataWidgetMapper* theWrappedObject, QDataWidgetMapper::SubmitPolicy  policy);
   QDataWidgetMapper::SubmitPolicy  submitPolicy(QDataWidgetMapper* theWrappedObject) const;
};





class PythonQtShell_QDateEdit : public QDateEdit
{
public:
    PythonQtShell_QDateEdit(QDate  date, QWidget*  parent = nullptr):QDateEdit(date, parent),_wrapper(nullptr) {};
    PythonQtShell_QDateEdit(QWidget*  parent = nullptr):QDateEdit(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QDateEdit() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void clear() override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
QDateTime  dateTimeFromText(const QString&  text) const override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fixup(QString&  input) const override;
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
QString  textFromDateTime(const QDateTime&  dt) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  input, int&  pos) const override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QDateEdit : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDateEdit* new_QDateEdit(QDate  date, QWidget*  parent = nullptr);
QDateEdit* new_QDateEdit(QWidget*  parent = nullptr);
void delete_QDateEdit(QDateEdit* obj) { delete obj; }
};





class PythonQtShell_QDateTimeEdit : public QDateTimeEdit
{
public:
    PythonQtShell_QDateTimeEdit(QDate  d, QWidget*  parent = nullptr):QDateTimeEdit(d, parent),_wrapper(nullptr) {};
    PythonQtShell_QDateTimeEdit(QTime  t, QWidget*  parent = nullptr):QDateTimeEdit(t, parent),_wrapper(nullptr) {};
    PythonQtShell_QDateTimeEdit(QWidget*  parent = nullptr):QDateTimeEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = nullptr):QDateTimeEdit(dt, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QDateTimeEdit() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void clear() override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
QDateTime  dateTimeFromText(const QString&  text) const override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fixup(QString&  input) const override;
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
QString  textFromDateTime(const QDateTime&  dt) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  input, int&  pos) const override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDateTimeEdit : public QDateTimeEdit
{ public:
inline QDateTime  promoted_dateTimeFromText(const QString&  text) const { return this->dateTimeFromText(text); }
inline void promoted_fixup(QString&  input) const { this->fixup(input); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_initStyleOption(QStyleOptionSpinBox*  option) const { this->initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return this->stepEnabled(); }
inline QString  promoted_textFromDateTime(const QDateTime&  dt) const { return this->textFromDateTime(dt); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return this->validate(input, pos); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_clear() { QDateTimeEdit::clear(); }
inline QDateTime  py_q_dateTimeFromText(const QString&  text) const { return QDateTimeEdit::dateTimeFromText(text); }
inline bool  py_q_event(QEvent*  event) { return QDateTimeEdit::event(event); }
inline void py_q_fixup(QString&  input) const { QDateTimeEdit::fixup(input); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QDateTimeEdit::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QDateTimeEdit::focusNextPrevChild(next); }
inline void py_q_initStyleOption(QStyleOptionSpinBox*  option) const { QDateTimeEdit::initStyleOption(option); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QDateTimeEdit::keyPressEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QDateTimeEdit::mousePressEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QDateTimeEdit::paintEvent(event); }
inline QSize  py_q_sizeHint() const { return QDateTimeEdit::sizeHint(); }
inline void py_q_stepBy(int  steps) { QDateTimeEdit::stepBy(steps); }
inline QAbstractSpinBox::StepEnabled  py_q_stepEnabled() const { return QDateTimeEdit::stepEnabled(); }
inline QString  py_q_textFromDateTime(const QDateTime&  dt) const { return QDateTimeEdit::textFromDateTime(dt); }
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QDateTimeEdit::validate(input, pos); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QDateTimeEdit::wheelEvent(event); }
};

class PythonQtWrapper_QDateTimeEdit : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Section )
Q_FLAGS(Sections )
enum Section{
  NoSection = QDateTimeEdit::NoSection,   AmPmSection = QDateTimeEdit::AmPmSection,   MSecSection = QDateTimeEdit::MSecSection,   SecondSection = QDateTimeEdit::SecondSection,   MinuteSection = QDateTimeEdit::MinuteSection,   HourSection = QDateTimeEdit::HourSection,   DaySection = QDateTimeEdit::DaySection,   MonthSection = QDateTimeEdit::MonthSection,   YearSection = QDateTimeEdit::YearSection,   TimeSections_Mask = QDateTimeEdit::TimeSections_Mask,   DateSections_Mask = QDateTimeEdit::DateSections_Mask};
Q_DECLARE_FLAGS(Sections, Section)
public Q_SLOTS:
QDateTimeEdit* new_QDateTimeEdit(QDate  d, QWidget*  parent = nullptr);
QDateTimeEdit* new_QDateTimeEdit(QTime  t, QWidget*  parent = nullptr);
QDateTimeEdit* new_QDateTimeEdit(QWidget*  parent = nullptr);
QDateTimeEdit* new_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = nullptr);
void delete_QDateTimeEdit(QDateTimeEdit* obj) { delete obj; }
   QCalendar  calendar(QDateTimeEdit* theWrappedObject) const;
   bool  calendarPopup(QDateTimeEdit* theWrappedObject) const;
   QCalendarWidget*  calendarWidget(QDateTimeEdit* theWrappedObject) const;
   void py_q_clear(QDateTimeEdit* theWrappedObject){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_clear());}
   void clearMaximumDate(QDateTimeEdit* theWrappedObject);
   void clearMaximumDateTime(QDateTimeEdit* theWrappedObject);
   void clearMaximumTime(QDateTimeEdit* theWrappedObject);
   void clearMinimumDate(QDateTimeEdit* theWrappedObject);
   void clearMinimumDateTime(QDateTimeEdit* theWrappedObject);
   void clearMinimumTime(QDateTimeEdit* theWrappedObject);
   QDateTimeEdit::Section  currentSection(QDateTimeEdit* theWrappedObject) const;
   int  currentSectionIndex(QDateTimeEdit* theWrappedObject) const;
   QDate  date(QDateTimeEdit* theWrappedObject) const;
   QDateTime  dateTime(QDateTimeEdit* theWrappedObject) const;
   QDateTime  dateTimeFromText(QDateTimeEdit* theWrappedObject, const QString&  text) const;
   QDateTime  py_q_dateTimeFromText(QDateTimeEdit* theWrappedObject, const QString&  text) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_dateTimeFromText(text));}
   QString  displayFormat(QDateTimeEdit* theWrappedObject) const;
   QDateTimeEdit::Sections  displayedSections(QDateTimeEdit* theWrappedObject) const;
   bool  py_q_event(QDateTimeEdit* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_event(event));}
   void py_q_fixup(QDateTimeEdit* theWrappedObject, QString&  input) const{  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_fixup(input));}
   void py_q_focusInEvent(QDateTimeEdit* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QDateTimeEdit* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_initStyleOption(QDateTimeEdit* theWrappedObject, QStyleOptionSpinBox*  option) const{  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_initStyleOption(option));}
   void py_q_keyPressEvent(QDateTimeEdit* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_keyPressEvent(event));}
   QDate  maximumDate(QDateTimeEdit* theWrappedObject) const;
   QDateTime  maximumDateTime(QDateTimeEdit* theWrappedObject) const;
   QTime  maximumTime(QDateTimeEdit* theWrappedObject) const;
   QDate  minimumDate(QDateTimeEdit* theWrappedObject) const;
   QDateTime  minimumDateTime(QDateTimeEdit* theWrappedObject) const;
   QTime  minimumTime(QDateTimeEdit* theWrappedObject) const;
   void py_q_mousePressEvent(QDateTimeEdit* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_paintEvent(QDateTimeEdit* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_paintEvent(event));}
   QDateTimeEdit::Section  sectionAt(QDateTimeEdit* theWrappedObject, int  index) const;
   int  sectionCount(QDateTimeEdit* theWrappedObject) const;
   QString  sectionText(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section) const;
   void setCalendar(QDateTimeEdit* theWrappedObject, QCalendar  calendar);
   void setCalendarPopup(QDateTimeEdit* theWrappedObject, bool  enable);
   void setCalendarWidget(QDateTimeEdit* theWrappedObject, QCalendarWidget*  calendarWidget);
   void setCurrentSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   void setCurrentSectionIndex(QDateTimeEdit* theWrappedObject, int  index);
   void setDateRange(QDateTimeEdit* theWrappedObject, QDate  min, QDate  max);
   void setDateTimeRange(QDateTimeEdit* theWrappedObject, const QDateTime&  min, const QDateTime&  max);
   void setDisplayFormat(QDateTimeEdit* theWrappedObject, const QString&  format);
   void setMaximumDate(QDateTimeEdit* theWrappedObject, QDate  max);
   void setMaximumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void setMaximumTime(QDateTimeEdit* theWrappedObject, QTime  max);
   void setMinimumDate(QDateTimeEdit* theWrappedObject, QDate  min);
   void setMinimumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void setMinimumTime(QDateTimeEdit* theWrappedObject, QTime  min);
   void setSelectedSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   void setTimeRange(QDateTimeEdit* theWrappedObject, QTime  min, QTime  max);
   void setTimeSpec(QDateTimeEdit* theWrappedObject, Qt::TimeSpec  spec);
   void setTimeZone(QDateTimeEdit* theWrappedObject, const QTimeZone&  zone);
   QSize  py_q_sizeHint(QDateTimeEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_sizeHint());}
   void py_q_stepBy(QDateTimeEdit* theWrappedObject, int  steps){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_stepBy(steps));}
   QAbstractSpinBox::StepEnabled  py_q_stepEnabled(QDateTimeEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_stepEnabled());}
   QString  textFromDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt) const;
   QString  py_q_textFromDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_textFromDateTime(dt));}
   QTime  time(QDateTimeEdit* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QDateTimeEdit* theWrappedObject) const;
   QTimeZone  timeZone(QDateTimeEdit* theWrappedObject) const;
   QValidator::State  py_q_validate(QDateTimeEdit* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_validate(input, pos));}
   void py_q_wheelEvent(QDateTimeEdit* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_wheelEvent(event));}
};





class PythonQtShell_QDesktopServices : public QDesktopServices
{
public:
    PythonQtShell_QDesktopServices():QDesktopServices(),_wrapper(nullptr) {};

   ~PythonQtShell_QDesktopServices();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QDesktopServices : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDesktopServices* new_QDesktopServices();
void delete_QDesktopServices(QDesktopServices* obj) { delete obj; }
   bool  static_QDesktopServices_openUrl(const QUrl&  url);
   void static_QDesktopServices_setUrlHandler(const QString&  scheme, QObject*  receiver, const char*  method);
   void static_QDesktopServices_unsetUrlHandler(const QString&  scheme);
};





class PythonQtShell_QDial : public QDial
{
public:
    PythonQtShell_QDial(QWidget*  parent = nullptr):QDial(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QDial() override;

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
bool  event(QEvent*  e) override;
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
void mouseMoveEvent(QMouseEvent*  me) override;
void mousePressEvent(QMouseEvent*  me) override;
void mouseReleaseEvent(QMouseEvent*  me) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  pe) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  re) override;
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

class PythonQtPublicPromoter_QDial : public QDial
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initStyleOption(QStyleOptionSlider*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  me) { this->mouseMoveEvent(me); }
inline void promoted_mousePressEvent(QMouseEvent*  me) { this->mousePressEvent(me); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  me) { this->mouseReleaseEvent(me); }
inline void promoted_paintEvent(QPaintEvent*  pe) { this->paintEvent(pe); }
inline void promoted_resizeEvent(QResizeEvent*  re) { this->resizeEvent(re); }
inline void promoted_sliderChange(int  change) { this->sliderChange((QAbstractSlider::SliderChange)change); }
inline bool  py_q_event(QEvent*  e) { return QDial::event(e); }
inline void py_q_initStyleOption(QStyleOptionSlider*  option) const { QDial::initStyleOption(option); }
inline QSize  py_q_minimumSizeHint() const { return QDial::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  me) { QDial::mouseMoveEvent(me); }
inline void py_q_mousePressEvent(QMouseEvent*  me) { QDial::mousePressEvent(me); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  me) { QDial::mouseReleaseEvent(me); }
inline void py_q_paintEvent(QPaintEvent*  pe) { QDial::paintEvent(pe); }
inline void py_q_resizeEvent(QResizeEvent*  re) { QDial::resizeEvent(re); }
inline QSize  py_q_sizeHint() const { return QDial::sizeHint(); }
inline void py_q_sliderChange(int  change) { QDial::sliderChange((QAbstractSlider::SliderChange)change); }
};

class PythonQtWrapper_QDial : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDial* new_QDial(QWidget*  parent = nullptr);
void delete_QDial(QDial* obj) { delete obj; }
   bool  py_q_event(QDial* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_event(e));}
   void initStyleOption(QDial* theWrappedObject, QStyleOptionSlider*  option) const;
   void py_q_initStyleOption(QDial* theWrappedObject, QStyleOptionSlider*  option) const{  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_initStyleOption(option));}
   QSize  py_q_minimumSizeHint(QDial* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QDial* theWrappedObject, QMouseEvent*  me){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_mouseMoveEvent(me));}
   void py_q_mousePressEvent(QDial* theWrappedObject, QMouseEvent*  me){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_mousePressEvent(me));}
   void py_q_mouseReleaseEvent(QDial* theWrappedObject, QMouseEvent*  me){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_mouseReleaseEvent(me));}
   int  notchSize(QDial* theWrappedObject) const;
   qreal  notchTarget(QDial* theWrappedObject) const;
   bool  notchesVisible(QDial* theWrappedObject) const;
   void py_q_paintEvent(QDial* theWrappedObject, QPaintEvent*  pe){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_paintEvent(pe));}
   void py_q_resizeEvent(QDial* theWrappedObject, QResizeEvent*  re){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_resizeEvent(re));}
   void setNotchTarget(QDial* theWrappedObject, double  target);
   QSize  py_q_sizeHint(QDial* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_sizeHint());}
   void py_q_sliderChange(QDial* theWrappedObject, int  change){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_sliderChange(change));}
   bool  wrapping(QDial* theWrappedObject) const;
};





class PythonQtShell_QDialog : public QDialog
{
public:
    PythonQtShell_QDialog(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QDialog(parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QDialog() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
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
void open() override;
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

class PythonQtPublicPromoter_QDialog : public QDialog
{ public:
inline void promoted_adjustPosition(QWidget*  arg__1) { this->adjustPosition(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { this->closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void py_q_accept() { QDialog::accept(); }
inline void py_q_closeEvent(QCloseEvent*  arg__1) { QDialog::closeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QDialog::contextMenuEvent(arg__1); }
inline void py_q_done(int  arg__1) { QDialog::done(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QDialog::eventFilter(arg__1, arg__2); }
inline int  py_q_exec() { return QDialog::exec(); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QDialog::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QDialog::minimumSizeHint(); }
inline void py_q_open() { QDialog::open(); }
inline void py_q_reject() { QDialog::reject(); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QDialog::resizeEvent(arg__1); }
inline void py_q_setVisible(bool  visible) { QDialog::setVisible(visible); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QDialog::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QDialog::sizeHint(); }
};

class PythonQtWrapper_QDialog : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDialog* new_QDialog(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QDialog(QDialog* obj) { delete obj; }
   void py_q_accept(QDialog* theWrappedObject){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_accept());}
   void adjustPosition(QDialog* theWrappedObject, QWidget*  arg__1);
   void py_q_closeEvent(QDialog* theWrappedObject, QCloseEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_closeEvent(arg__1));}
   void py_q_contextMenuEvent(QDialog* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   void py_q_done(QDialog* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_done(arg__1));}
   bool  py_q_eventFilter(QDialog* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   int  py_q_exec(QDialog* theWrappedObject){  return (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_exec());}
   bool  isSizeGripEnabled(QDialog* theWrappedObject) const;
   void py_q_keyPressEvent(QDialog* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QSize  py_q_minimumSizeHint(QDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_open(QDialog* theWrappedObject){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_open());}
   void py_q_reject(QDialog* theWrappedObject){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_reject());}
   void py_q_resizeEvent(QDialog* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   int  result(QDialog* theWrappedObject) const;
   void setModal(QDialog* theWrappedObject, bool  modal);
   void setResult(QDialog* theWrappedObject, int  r);
   void setSizeGripEnabled(QDialog* theWrappedObject, bool  arg__1);
   void py_q_setVisible(QDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_setVisible(visible));}
   void py_q_showEvent(QDialog* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  py_q_sizeHint(QDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QDialogButtonBox : public QDialogButtonBox
{
public:
    PythonQtShell_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, QWidget*  parent = nullptr):QDialogButtonBox(buttons, parent),_wrapper(nullptr) {};
    PythonQtShell_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation, QWidget*  parent = nullptr):QDialogButtonBox(buttons, orientation, parent),_wrapper(nullptr) {};
    PythonQtShell_QDialogButtonBox(QWidget*  parent = nullptr):QDialogButtonBox(parent),_wrapper(nullptr) {};
    PythonQtShell_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent = nullptr):QDialogButtonBox(orientation, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QDialogButtonBox() override;

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

class PythonQtPublicPromoter_QDialogButtonBox : public QDialogButtonBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void py_q_changeEvent(QEvent*  event) { QDialogButtonBox::changeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QDialogButtonBox::event(event); }
};

class PythonQtWrapper_QDialogButtonBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonLayout ButtonRole StandardButton )
Q_FLAGS(StandardButtons )
enum ButtonLayout{
  WinLayout = QDialogButtonBox::WinLayout,   MacLayout = QDialogButtonBox::MacLayout,   KdeLayout = QDialogButtonBox::KdeLayout,   GnomeLayout = QDialogButtonBox::GnomeLayout,   AndroidLayout = QDialogButtonBox::AndroidLayout};
enum ButtonRole{
  InvalidRole = QDialogButtonBox::InvalidRole,   AcceptRole = QDialogButtonBox::AcceptRole,   RejectRole = QDialogButtonBox::RejectRole,   DestructiveRole = QDialogButtonBox::DestructiveRole,   ActionRole = QDialogButtonBox::ActionRole,   HelpRole = QDialogButtonBox::HelpRole,   YesRole = QDialogButtonBox::YesRole,   NoRole = QDialogButtonBox::NoRole,   ResetRole = QDialogButtonBox::ResetRole,   ApplyRole = QDialogButtonBox::ApplyRole,   NRoles = QDialogButtonBox::NRoles};
enum StandardButton{
  NoButton = QDialogButtonBox::NoButton,   Ok = QDialogButtonBox::Ok,   Save = QDialogButtonBox::Save,   SaveAll = QDialogButtonBox::SaveAll,   Open = QDialogButtonBox::Open,   Yes = QDialogButtonBox::Yes,   YesToAll = QDialogButtonBox::YesToAll,   No = QDialogButtonBox::No,   NoToAll = QDialogButtonBox::NoToAll,   Abort = QDialogButtonBox::Abort,   Retry = QDialogButtonBox::Retry,   Ignore = QDialogButtonBox::Ignore,   Close = QDialogButtonBox::Close,   Cancel = QDialogButtonBox::Cancel,   Discard = QDialogButtonBox::Discard,   Help = QDialogButtonBox::Help,   Apply = QDialogButtonBox::Apply,   Reset = QDialogButtonBox::Reset,   RestoreDefaults = QDialogButtonBox::RestoreDefaults,   FirstButton = QDialogButtonBox::FirstButton,   LastButton = QDialogButtonBox::LastButton};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public Q_SLOTS:
QDialogButtonBox* new_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, QWidget*  parent = nullptr);
QDialogButtonBox* new_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation, QWidget*  parent = nullptr);
QDialogButtonBox* new_QDialogButtonBox(QWidget*  parent = nullptr);
QDialogButtonBox* new_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent = nullptr);
void delete_QDialogButtonBox(QDialogButtonBox* obj) { delete obj; }
   void addButton(QDialogButtonBox* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractButton* >  button, QDialogButtonBox::ButtonRole  role);
   QPushButton*  addButton(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  button);
   QPushButton*  addButton(QDialogButtonBox* theWrappedObject, const QString&  text, QDialogButtonBox::ButtonRole  role);
   QPushButton*  button(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  which) const;
   QDialogButtonBox::ButtonRole  buttonRole(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const;
   QList<QAbstractButton* >  buttons(QDialogButtonBox* theWrappedObject) const;
   bool  centerButtons(QDialogButtonBox* theWrappedObject) const;
   void py_q_changeEvent(QDialogButtonBox* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QDialogButtonBox*)theWrappedObject)->py_q_changeEvent(event));}
   void clear(QDialogButtonBox* theWrappedObject);
   bool  py_q_event(QDialogButtonBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QDialogButtonBox*)theWrappedObject)->py_q_event(event));}
   Qt::Orientation  orientation(QDialogButtonBox* theWrappedObject) const;
   void removeButton(QDialogButtonBox* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractButton* >  button);
   void setCenterButtons(QDialogButtonBox* theWrappedObject, bool  center);
   void setOrientation(QDialogButtonBox* theWrappedObject, Qt::Orientation  orientation);
   void setStandardButtons(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButtons  buttons);
   QDialogButtonBox::StandardButton  standardButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const;
   QDialogButtonBox::StandardButtons  standardButtons(QDialogButtonBox* theWrappedObject) const;
};





class PythonQtShell_QDockWidget : public QDockWidget
{
public:
    PythonQtShell_QDockWidget(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QDockWidget(parent, flags),_wrapper(nullptr) {};
    PythonQtShell_QDockWidget(const QString&  title, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QDockWidget(title, parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QDockWidget() override;

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
void initStyleOption(QStyleOptionDockWidget*  option) const override;
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

class PythonQtPublicPromoter_QDockWidget : public QDockWidget
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_initStyleOption(QStyleOptionDockWidget*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QDockWidget::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QDockWidget::closeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QDockWidget::event(event); }
inline void py_q_initStyleOption(QStyleOptionDockWidget*  option) const { QDockWidget::initStyleOption(option); }
inline void py_q_paintEvent(QPaintEvent*  event) { QDockWidget::paintEvent(event); }
};

class PythonQtWrapper_QDockWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DockWidgetFeature )
Q_FLAGS(DockWidgetFeatures )
enum DockWidgetFeature{
  DockWidgetClosable = QDockWidget::DockWidgetClosable,   DockWidgetMovable = QDockWidget::DockWidgetMovable,   DockWidgetFloatable = QDockWidget::DockWidgetFloatable,   DockWidgetVerticalTitleBar = QDockWidget::DockWidgetVerticalTitleBar,   DockWidgetFeatureMask = QDockWidget::DockWidgetFeatureMask,   NoDockWidgetFeatures = QDockWidget::NoDockWidgetFeatures,   Reserved = QDockWidget::Reserved};
Q_DECLARE_FLAGS(DockWidgetFeatures, DockWidgetFeature)
public Q_SLOTS:
QDockWidget* new_QDockWidget(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
QDockWidget* new_QDockWidget(const QString&  title, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QDockWidget(QDockWidget* obj) { delete obj; }
   Qt::DockWidgetAreas  allowedAreas(QDockWidget* theWrappedObject) const;
   void py_q_changeEvent(QDockWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_changeEvent(event));}
   void py_q_closeEvent(QDockWidget* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_closeEvent(event));}
   Qt::DockWidgetArea  dockLocation(QDockWidget* theWrappedObject) const;
   bool  py_q_event(QDockWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_event(event));}
   QDockWidget::DockWidgetFeatures  features(QDockWidget* theWrappedObject) const;
   void initStyleOption(QDockWidget* theWrappedObject, QStyleOptionDockWidget*  option) const;
   void py_q_initStyleOption(QDockWidget* theWrappedObject, QStyleOptionDockWidget*  option) const{  (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_initStyleOption(option));}
   bool  isAreaAllowed(QDockWidget* theWrappedObject, Qt::DockWidgetArea  area) const;
   bool  isFloating(QDockWidget* theWrappedObject) const;
   void py_q_paintEvent(QDockWidget* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_paintEvent(event));}
   void setAllowedAreas(QDockWidget* theWrappedObject, Qt::DockWidgetAreas  areas);
   void setDockLocation(QDockWidget* theWrappedObject, Qt::DockWidgetArea  area);
   void setFeatures(QDockWidget* theWrappedObject, QDockWidget::DockWidgetFeatures  features);
   void setFloating(QDockWidget* theWrappedObject, bool  floating);
   void setTitleBarWidget(QDockWidget* theWrappedObject, QWidget*  widget);
   void setWidget(QDockWidget* theWrappedObject, QWidget*  widget);
   QWidget*  titleBarWidget(QDockWidget* theWrappedObject) const;
   QAction*  toggleViewAction(QDockWidget* theWrappedObject) const;
   QWidget*  widget(QDockWidget* theWrappedObject) const;
    QString py_toString(QDockWidget*);
};





class PythonQtShell_QDoubleSpinBox : public QDoubleSpinBox
{
public:
    PythonQtShell_QDoubleSpinBox(QWidget*  parent = nullptr):QDoubleSpinBox(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QDoubleSpinBox() override;

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
QString  textFromValue(double  val) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  input, int&  pos) const override;
double  valueFromText(const QString&  text) const override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDoubleSpinBox : public QDoubleSpinBox
{ public:
inline void py_q_fixup(QString&  str) const { QDoubleSpinBox::fixup(str); }
inline QString  py_q_textFromValue(double  val) const { return QDoubleSpinBox::textFromValue(val); }
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QDoubleSpinBox::validate(input, pos); }
inline double  py_q_valueFromText(const QString&  text) const { return QDoubleSpinBox::valueFromText(text); }
};

class PythonQtWrapper_QDoubleSpinBox : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDoubleSpinBox* new_QDoubleSpinBox(QWidget*  parent = nullptr);
void delete_QDoubleSpinBox(QDoubleSpinBox* obj) { delete obj; }
   QString  cleanText(QDoubleSpinBox* theWrappedObject) const;
   int  decimals(QDoubleSpinBox* theWrappedObject) const;
   void py_q_fixup(QDoubleSpinBox* theWrappedObject, QString&  str) const{  (((PythonQtPublicPromoter_QDoubleSpinBox*)theWrappedObject)->py_q_fixup(str));}
   double  maximum(QDoubleSpinBox* theWrappedObject) const;
   double  minimum(QDoubleSpinBox* theWrappedObject) const;
   QString  prefix(QDoubleSpinBox* theWrappedObject) const;
   void setDecimals(QDoubleSpinBox* theWrappedObject, int  prec);
   void setMaximum(QDoubleSpinBox* theWrappedObject, double  max);
   void setMinimum(QDoubleSpinBox* theWrappedObject, double  min);
   void setPrefix(QDoubleSpinBox* theWrappedObject, const QString&  prefix);
   void setRange(QDoubleSpinBox* theWrappedObject, double  min, double  max);
   void setSingleStep(QDoubleSpinBox* theWrappedObject, double  val);
   void setStepType(QDoubleSpinBox* theWrappedObject, QAbstractSpinBox::StepType  stepType);
   void setSuffix(QDoubleSpinBox* theWrappedObject, const QString&  suffix);
   double  singleStep(QDoubleSpinBox* theWrappedObject) const;
   QAbstractSpinBox::StepType  stepType(QDoubleSpinBox* theWrappedObject) const;
   QString  suffix(QDoubleSpinBox* theWrappedObject) const;
   QString  textFromValue(QDoubleSpinBox* theWrappedObject, double  val) const;
   QString  py_q_textFromValue(QDoubleSpinBox* theWrappedObject, double  val) const{  return (((PythonQtPublicPromoter_QDoubleSpinBox*)theWrappedObject)->py_q_textFromValue(val));}
   QValidator::State  py_q_validate(QDoubleSpinBox* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QDoubleSpinBox*)theWrappedObject)->py_q_validate(input, pos));}
   double  value(QDoubleSpinBox* theWrappedObject) const;
   double  valueFromText(QDoubleSpinBox* theWrappedObject, const QString&  text) const;
   double  py_q_valueFromText(QDoubleSpinBox* theWrappedObject, const QString&  text) const{  return (((PythonQtPublicPromoter_QDoubleSpinBox*)theWrappedObject)->py_q_valueFromText(text));}
};





class PythonQtShell_QDoubleValidator : public QDoubleValidator
{
public:
    PythonQtShell_QDoubleValidator(QObject*  parent = nullptr):QDoubleValidator(parent),_wrapper(nullptr) {};
    PythonQtShell_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent = nullptr):QDoubleValidator(bottom, top, decimals, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QDoubleValidator() override;

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

class PythonQtPublicPromoter_QDoubleValidator : public QDoubleValidator
{ public:
inline void py_q_fixup(QString&  input) const { QDoubleValidator::fixup(input); }
inline QValidator::State  py_q_validate(QString&  arg__1, int&  arg__2) const { return QDoubleValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QDoubleValidator : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDoubleValidator* new_QDoubleValidator(QObject*  parent = nullptr);
QDoubleValidator* new_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent = nullptr);
void delete_QDoubleValidator(QDoubleValidator* obj) { delete obj; }
   double  bottom(QDoubleValidator* theWrappedObject) const;
   int  decimals(QDoubleValidator* theWrappedObject) const;
   void py_q_fixup(QDoubleValidator* theWrappedObject, QString&  input) const{  (((PythonQtPublicPromoter_QDoubleValidator*)theWrappedObject)->py_q_fixup(input));}
   QDoubleValidator::Notation  notation(QDoubleValidator* theWrappedObject) const;
   void setBottom(QDoubleValidator* theWrappedObject, double  arg__1);
   void setDecimals(QDoubleValidator* theWrappedObject, int  arg__1);
   void setNotation(QDoubleValidator* theWrappedObject, QDoubleValidator::Notation  arg__1);
   void setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top);
   void setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top, int  decimals);
   void setTop(QDoubleValidator* theWrappedObject, double  arg__1);
   double  top(QDoubleValidator* theWrappedObject) const;
   QValidator::State  py_q_validate(QDoubleValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const{  return (((PythonQtPublicPromoter_QDoubleValidator*)theWrappedObject)->py_q_validate(arg__1, arg__2));}
};





class PythonQtShell_QDrag : public QDrag
{
public:
    PythonQtShell_QDrag(QObject*  dragSource):QDrag(dragSource),_wrapper(nullptr) {};

   ~PythonQtShell_QDrag() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QDrag : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDrag* new_QDrag(QObject*  dragSource);
void delete_QDrag(QDrag* obj) { delete obj; }
   void static_QDrag_cancel();
   Qt::DropAction  defaultAction(QDrag* theWrappedObject) const;
   QPixmap  dragCursor(QDrag* theWrappedObject, Qt::DropAction  action) const;
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions = Qt::MoveAction);
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions, Qt::DropAction  defaultAction);
   QPoint  hotSpot(QDrag* theWrappedObject) const;
   QMimeData*  mimeData(QDrag* theWrappedObject) const;
   QPixmap  pixmap(QDrag* theWrappedObject) const;
   void setDragCursor(QDrag* theWrappedObject, const QPixmap&  cursor, Qt::DropAction  action);
   void setHotSpot(QDrag* theWrappedObject, const QPoint&  hotspot);
   void setMimeData(QDrag* theWrappedObject, PythonQtPassOwnershipToCPP<QMimeData* >  data);
   void setPixmap(QDrag* theWrappedObject, const QPixmap&  arg__1);
   QObject*  source(QDrag* theWrappedObject) const;
   Qt::DropActions  supportedActions(QDrag* theWrappedObject) const;
   QObject*  target(QDrag* theWrappedObject) const;
};





class PythonQtShell_QDragEnterEvent : public QDragEnterEvent
{
public:
    PythonQtShell_QDragEnterEvent(const QDragEnterEvent&  arg__1):QDragEnterEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QDragEnterEvent(pos, actions, data, buttons, modifiers),_wrapper(nullptr) {};

   ~PythonQtShell_QDragEnterEvent() override;

QDragEnterEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragEnterEvent : public QDragEnterEvent
{ public:
inline QDragEnterEvent&  promoted_operator_assign(const QDragEnterEvent&  other) { return this->QDragEnterEvent::operator=(other); }
inline QDragEnterEvent*  py_q_clone() const { return QDragEnterEvent::clone(); }
};

class PythonQtWrapper_QDragEnterEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDragEnterEvent* new_QDragEnterEvent(const QDragEnterEvent&  arg__1);
QDragEnterEvent* new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QDragEnterEvent(QDragEnterEvent* obj) { delete obj; }
   QDragEnterEvent*  py_q_clone(QDragEnterEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDragEnterEvent*)theWrappedObject)->py_q_clone());}
   QDragEnterEvent*  operator_assign(QDragEnterEvent* theWrappedObject, const QDragEnterEvent&  other);
};





class PythonQtShell_QDragLeaveEvent : public QDragLeaveEvent
{
public:
    PythonQtShell_QDragLeaveEvent():QDragLeaveEvent(),_wrapper(nullptr) {};
    PythonQtShell_QDragLeaveEvent(const QDragLeaveEvent&  arg__1):QDragLeaveEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QDragLeaveEvent() override;

QDragLeaveEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragLeaveEvent : public QDragLeaveEvent
{ public:
inline QDragLeaveEvent&  promoted_operator_assign(const QDragLeaveEvent&  other) { return this->QDragLeaveEvent::operator=(other); }
inline QDragLeaveEvent*  py_q_clone() const { return QDragLeaveEvent::clone(); }
};

class PythonQtWrapper_QDragLeaveEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDragLeaveEvent* new_QDragLeaveEvent();
QDragLeaveEvent* new_QDragLeaveEvent(const QDragLeaveEvent&  arg__1);
void delete_QDragLeaveEvent(QDragLeaveEvent* obj) { delete obj; }
   QDragLeaveEvent*  py_q_clone(QDragLeaveEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDragLeaveEvent*)theWrappedObject)->py_q_clone());}
   QDragLeaveEvent*  operator_assign(QDragLeaveEvent* theWrappedObject, const QDragLeaveEvent&  other);
};





class PythonQtShell_QDragMoveEvent : public QDragMoveEvent
{
public:
    PythonQtShell_QDragMoveEvent(const QDragMoveEvent&  arg__1):QDragMoveEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove):QDragMoveEvent(pos, actions, data, buttons, modifiers, type),_wrapper(nullptr) {};

   ~PythonQtShell_QDragMoveEvent() override;

QDragMoveEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragMoveEvent : public QDragMoveEvent
{ public:
inline QDragMoveEvent&  promoted_operator_assign(const QDragMoveEvent&  other) { return this->QDragMoveEvent::operator=(other); }
inline QDragMoveEvent*  py_q_clone() const { return QDragMoveEvent::clone(); }
};

class PythonQtWrapper_QDragMoveEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDragMoveEvent* new_QDragMoveEvent(const QDragMoveEvent&  arg__1);
QDragMoveEvent* new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove);
void delete_QDragMoveEvent(QDragMoveEvent* obj) { delete obj; }
   void accept(QDragMoveEvent* theWrappedObject, const QRect&  r);
   QRect  answerRect(QDragMoveEvent* theWrappedObject) const;
   QDragMoveEvent*  py_q_clone(QDragMoveEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDragMoveEvent*)theWrappedObject)->py_q_clone());}
   void ignore(QDragMoveEvent* theWrappedObject, const QRect&  r);
   QDragMoveEvent*  operator_assign(QDragMoveEvent* theWrappedObject, const QDragMoveEvent&  other);
};





class PythonQtShell_QDropEvent : public QDropEvent
{
public:
    PythonQtShell_QDropEvent(const QDropEvent&  arg__1):QDropEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop):QDropEvent(pos, actions, data, buttons, modifiers, type),_wrapper(nullptr) {};

   ~PythonQtShell_QDropEvent() override;

QDropEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDropEvent : public QDropEvent
{ public:
inline QDropEvent&  promoted_operator_assign(const QDropEvent&  other) { return this->QDropEvent::operator=(other); }
inline QDropEvent*  py_q_clone() const { return QDropEvent::clone(); }
};

class PythonQtWrapper_QDropEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDropEvent* new_QDropEvent(const QDropEvent&  arg__1);
QDropEvent* new_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop);
void delete_QDropEvent(QDropEvent* obj) { delete obj; }
   void acceptProposedAction(QDropEvent* theWrappedObject);
   Qt::MouseButtons  buttons(QDropEvent* theWrappedObject) const;
   QDropEvent*  py_q_clone(QDropEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDropEvent*)theWrappedObject)->py_q_clone());}
   Qt::DropAction  dropAction(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  keyboardModifiers(QDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QDropEvent* theWrappedObject) const;
   Qt::MouseButtons  mouseButtons(QDropEvent* theWrappedObject) const;
   QDropEvent*  operator_assign(QDropEvent* theWrappedObject, const QDropEvent&  other);
   QPoint  pos(QDropEvent* theWrappedObject) const;
   QPointF  posF(QDropEvent* theWrappedObject) const;
   QPointF  position(QDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QDropEvent* theWrappedObject) const;
   void setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action);
   QObject*  source(QDropEvent* theWrappedObject) const;
};





class PythonQtShell_QEnterEvent : public QEnterEvent
{
public:
    PythonQtShell_QEnterEvent(const QEnterEvent&  arg__1):QEnterEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QEnterEvent(const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QEnterEvent(localPos, scenePos, globalPos, device),_wrapper(nullptr) {};

   ~PythonQtShell_QEnterEvent() override;

QEnterEvent*  clone() const override;
bool  isBeginEvent() const override;
bool  isEndEvent() const override;
bool  isUpdateEvent() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QEnterEvent : public QEnterEvent
{ public:
inline QEnterEvent&  promoted_operator_assign(const QEnterEvent&  other) { return this->QEnterEvent::operator=(other); }
inline QEnterEvent*  py_q_clone() const { return QEnterEvent::clone(); }
};

class PythonQtWrapper_QEnterEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QEnterEvent* new_QEnterEvent(const QEnterEvent&  arg__1);
QEnterEvent* new_QEnterEvent(const QPointF&  localPos, const QPointF&  scenePos, const QPointF&  globalPos, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
void delete_QEnterEvent(QEnterEvent* obj) { delete obj; }
   QEnterEvent*  py_q_clone(QEnterEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QEnterEvent*)theWrappedObject)->py_q_clone());}
   QPoint  globalPos(QEnterEvent* theWrappedObject) const;
   int  globalX(QEnterEvent* theWrappedObject) const;
   int  globalY(QEnterEvent* theWrappedObject) const;
   QPointF  localPos(QEnterEvent* theWrappedObject) const;
   QEnterEvent*  operator_assign(QEnterEvent* theWrappedObject, const QEnterEvent&  other);
   QPoint  pos(QEnterEvent* theWrappedObject) const;
   QPointF  screenPos(QEnterEvent* theWrappedObject) const;
   QPointF  windowPos(QEnterEvent* theWrappedObject) const;
   int  x(QEnterEvent* theWrappedObject) const;
   int  y(QEnterEvent* theWrappedObject) const;
};





class PythonQtShell_QErrorMessage : public QErrorMessage
{
public:
    PythonQtShell_QErrorMessage(QWidget*  parent = nullptr):QErrorMessage(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QErrorMessage() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
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
void open() override;
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

class PythonQtPublicPromoter_QErrorMessage : public QErrorMessage
{ public:
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline void promoted_done(int  arg__1) { this->done(arg__1); }
inline void py_q_changeEvent(QEvent*  e) { QErrorMessage::changeEvent(e); }
inline void py_q_done(int  arg__1) { QErrorMessage::done(arg__1); }
};

class PythonQtWrapper_QErrorMessage : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QErrorMessage* new_QErrorMessage(QWidget*  parent = nullptr);
void delete_QErrorMessage(QErrorMessage* obj) { delete obj; }
   void py_q_changeEvent(QErrorMessage* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QErrorMessage*)theWrappedObject)->py_q_changeEvent(e));}
   void py_q_done(QErrorMessage* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QErrorMessage*)theWrappedObject)->py_q_done(arg__1));}
   QErrorMessage*  static_QErrorMessage_qtHandler();
};





class PythonQtWrapper_QEventPoint : public QObject
{ Q_OBJECT
public:
Q_ENUMS(State )
Q_FLAGS(States )
enum State{
  Unknown = QEventPoint::Unknown,   Stationary = QEventPoint::Stationary,   Pressed = QEventPoint::Pressed,   Updated = QEventPoint::Updated,   Released = QEventPoint::Released};
Q_DECLARE_FLAGS(States, State)
public Q_SLOTS:
QEventPoint* new_QEventPoint(const QEventPoint&  other);
QEventPoint* new_QEventPoint(int  id = -1, const QPointingDevice*  device = nullptr);
QEventPoint* new_QEventPoint(int  pointId, QEventPoint::State  state, const QPointF&  scenePosition, const QPointF&  globalPosition);
void delete_QEventPoint(QEventPoint* obj) { delete obj; }
   const QPointingDevice*  device(QEventPoint* theWrappedObject) const;
   QSizeF  ellipseDiameters(QEventPoint* theWrappedObject) const;
   QPointF  globalGrabPosition(QEventPoint* theWrappedObject) const;
   QPointF  globalLastPosition(QEventPoint* theWrappedObject) const;
   QPointF  globalPosition(QEventPoint* theWrappedObject) const;
   QPointF  globalPressPosition(QEventPoint* theWrappedObject) const;
   QPointF  grabPosition(QEventPoint* theWrappedObject) const;
   int  id(QEventPoint* theWrappedObject) const;
   bool  isAccepted(QEventPoint* theWrappedObject) const;
   QPointF  lastNormalizedPos(QEventPoint* theWrappedObject) const;
   QPointF  lastPos(QEventPoint* theWrappedObject) const;
   QPointF  lastPosition(QEventPoint* theWrappedObject) const;
   QPointF  lastScenePos(QEventPoint* theWrappedObject) const;
   QPointF  lastScreenPos(QEventPoint* theWrappedObject) const;
   ulong  lastTimestamp(QEventPoint* theWrappedObject) const;
   QPointF  normalizedPos(QEventPoint* theWrappedObject) const;
   QPointF  normalizedPosition(QEventPoint* theWrappedObject) const;
   bool  __ne__(QEventPoint* theWrappedObject, const QEventPoint&  other) const;
   QEventPoint*  operator_assign(QEventPoint* theWrappedObject, const QEventPoint&  other);
   bool  __eq__(QEventPoint* theWrappedObject, const QEventPoint&  other) const;
   QPointF  pos(QEventPoint* theWrappedObject) const;
   QPointF  position(QEventPoint* theWrappedObject) const;
   QPointF  pressPosition(QEventPoint* theWrappedObject) const;
   ulong  pressTimestamp(QEventPoint* theWrappedObject) const;
   qreal  pressure(QEventPoint* theWrappedObject) const;
   qreal  rotation(QEventPoint* theWrappedObject) const;
   QPointF  sceneGrabPosition(QEventPoint* theWrappedObject) const;
   QPointF  sceneLastPosition(QEventPoint* theWrappedObject) const;
   QPointF  scenePos(QEventPoint* theWrappedObject) const;
   QPointF  scenePosition(QEventPoint* theWrappedObject) const;
   QPointF  scenePressPosition(QEventPoint* theWrappedObject) const;
   QPointF  screenPos(QEventPoint* theWrappedObject) const;
   void setAccepted(QEventPoint* theWrappedObject, bool  accepted = true);
   QPointF  startNormalizedPos(QEventPoint* theWrappedObject) const;
   QPointF  startPos(QEventPoint* theWrappedObject) const;
   QPointF  startScenePos(QEventPoint* theWrappedObject) const;
   QPointF  startScreenPos(QEventPoint* theWrappedObject) const;
   QEventPoint::State  state(QEventPoint* theWrappedObject) const;
   void swap(QEventPoint* theWrappedObject, QEventPoint&  other);
   qreal  timeHeld(QEventPoint* theWrappedObject) const;
   ulong  timestamp(QEventPoint* theWrappedObject) const;
   QPointingDeviceUniqueId  uniqueId(QEventPoint* theWrappedObject) const;
   QVector2D  velocity(QEventPoint* theWrappedObject) const;
    QString py_toString(QEventPoint*);
};





class PythonQtShell_QExposeEvent : public QExposeEvent
{
public:
    PythonQtShell_QExposeEvent(const QExposeEvent&  arg__1):QExposeEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QExposeEvent(const QRegion&  m_region):QExposeEvent(m_region),_wrapper(nullptr) {};

   ~PythonQtShell_QExposeEvent() override;

QExposeEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QExposeEvent : public QExposeEvent
{ public:
inline QExposeEvent&  promoted_operator_assign(const QExposeEvent&  other) { return this->QExposeEvent::operator=(other); }
inline QExposeEvent*  py_q_clone() const { return QExposeEvent::clone(); }
};

class PythonQtWrapper_QExposeEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QExposeEvent* new_QExposeEvent(const QExposeEvent&  arg__1);
QExposeEvent* new_QExposeEvent(const QRegion&  m_region);
void delete_QExposeEvent(QExposeEvent* obj) { delete obj; }
   QExposeEvent*  py_q_clone(QExposeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QExposeEvent*)theWrappedObject)->py_q_clone());}
   QExposeEvent*  operator_assign(QExposeEvent* theWrappedObject, const QExposeEvent&  other);
   const QRegion*  region(QExposeEvent* theWrappedObject) const;
};





class PythonQtShell_QFileDialog : public QFileDialog
{
public:
    PythonQtShell_QFileDialog(QWidget*  parent, Qt::WindowFlags  f):QFileDialog(parent, f),_wrapper(nullptr) {};
    PythonQtShell_QFileDialog(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString()):QFileDialog(parent, caption, directory, filter),_wrapper(nullptr) {};

   ~PythonQtShell_QFileDialog() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
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

class PythonQtPublicPromoter_QFileDialog : public QFileDialog
{ public:
inline void promoted_accept() { this->accept(); }
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline void promoted_done(int  result) { this->done(result); }
inline void py_q_accept() { QFileDialog::accept(); }
inline void py_q_changeEvent(QEvent*  e) { QFileDialog::changeEvent(e); }
inline void py_q_done(int  result) { QFileDialog::done(result); }
inline void py_q_setVisible(bool  visible) { QFileDialog::setVisible(visible); }
};

class PythonQtWrapper_QFileDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogLabel Option )
Q_FLAGS(Options )
enum DialogLabel{
  LookIn = QFileDialog::LookIn,   FileName = QFileDialog::FileName,   FileType = QFileDialog::FileType,   Accept = QFileDialog::Accept,   Reject = QFileDialog::Reject};
enum Option{
  ShowDirsOnly = QFileDialog::ShowDirsOnly,   DontResolveSymlinks = QFileDialog::DontResolveSymlinks,   DontConfirmOverwrite = QFileDialog::DontConfirmOverwrite,   DontUseNativeDialog = QFileDialog::DontUseNativeDialog,   ReadOnly = QFileDialog::ReadOnly,   HideNameFilterDetails = QFileDialog::HideNameFilterDetails,   DontUseCustomDirectoryIcons = QFileDialog::DontUseCustomDirectoryIcons};
Q_DECLARE_FLAGS(Options, Option)
public Q_SLOTS:
QFileDialog* new_QFileDialog(QWidget*  parent, Qt::WindowFlags  f);
QFileDialog* new_QFileDialog(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString());
void delete_QFileDialog(QFileDialog* obj) { delete obj; }
   void py_q_accept(QFileDialog* theWrappedObject){  (((PythonQtPublicPromoter_QFileDialog*)theWrappedObject)->py_q_accept());}
   QFileDialog::AcceptMode  acceptMode(QFileDialog* theWrappedObject) const;
   void py_q_changeEvent(QFileDialog* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QFileDialog*)theWrappedObject)->py_q_changeEvent(e));}
   QString  defaultSuffix(QFileDialog* theWrappedObject) const;
   QDir  directory(QFileDialog* theWrappedObject) const;
   QUrl  directoryUrl(QFileDialog* theWrappedObject) const;
   void py_q_done(QFileDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QFileDialog*)theWrappedObject)->py_q_done(result));}
   QFileDialog::FileMode  fileMode(QFileDialog* theWrappedObject) const;
   QDir::Filters  filter(QFileDialog* theWrappedObject) const;
   QString  static_QFileDialog_getExistingDirectory(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  dir = QString(), QFileDialog::Options  options = QFileDialog::ShowDirsOnly);
   QUrl  static_QFileDialog_getExistingDirectoryUrl(QWidget*  parent = nullptr, const QString&  caption = QString(), const QUrl&  dir = QUrl(), QFileDialog::Options  options = QFileDialog::ShowDirsOnly, const QStringList&  supportedSchemes = QStringList());
   QString  static_QFileDialog_getOpenFileName(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options());
   QStringList  static_QFileDialog_getOpenFileNames(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options());
   QUrl  static_QFileDialog_getOpenFileUrl(QWidget*  parent = nullptr, const QString&  caption = QString(), const QUrl&  dir = QUrl(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options(), const QStringList&  supportedSchemes = QStringList());
   QList<QUrl >  static_QFileDialog_getOpenFileUrls(QWidget*  parent = nullptr, const QString&  caption = QString(), const QUrl&  dir = QUrl(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options(), const QStringList&  supportedSchemes = QStringList());
   QString  static_QFileDialog_getSaveFileName(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options());
   QUrl  static_QFileDialog_getSaveFileUrl(QWidget*  parent = nullptr, const QString&  caption = QString(), const QUrl&  dir = QUrl(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options(), const QStringList&  supportedSchemes = QStringList());
   QStringList  history(QFileDialog* theWrappedObject) const;
   QAbstractFileIconProvider*  iconProvider(QFileDialog* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QFileDialog* theWrappedObject) const;
   QString  labelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label) const;
   QStringList  mimeTypeFilters(QFileDialog* theWrappedObject) const;
   QStringList  nameFilters(QFileDialog* theWrappedObject) const;
   void open(QFileDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QFileDialog::Options  options(QFileDialog* theWrappedObject) const;
   QAbstractProxyModel*  proxyModel(QFileDialog* theWrappedObject) const;
   bool  restoreState(QFileDialog* theWrappedObject, const QByteArray&  state);
   void static_QFileDialog_saveFileContent(const QByteArray&  fileContent, const QString&  fileNameHint, QWidget*  parent = nullptr);
   QByteArray  saveState(QFileDialog* theWrappedObject) const;
   void selectFile(QFileDialog* theWrappedObject, const QString&  filename);
   void selectMimeTypeFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void selectNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void selectUrl(QFileDialog* theWrappedObject, const QUrl&  url);
   QStringList  selectedFiles(QFileDialog* theWrappedObject) const;
   QString  selectedMimeTypeFilter(QFileDialog* theWrappedObject) const;
   QString  selectedNameFilter(QFileDialog* theWrappedObject) const;
   QList<QUrl >  selectedUrls(QFileDialog* theWrappedObject) const;
   void setAcceptMode(QFileDialog* theWrappedObject, QFileDialog::AcceptMode  mode);
   void setDefaultSuffix(QFileDialog* theWrappedObject, const QString&  suffix);
   void setDirectory(QFileDialog* theWrappedObject, const QDir&  directory);
   void setDirectory(QFileDialog* theWrappedObject, const QString&  directory);
   void setDirectoryUrl(QFileDialog* theWrappedObject, const QUrl&  directory);
   void setFileMode(QFileDialog* theWrappedObject, QFileDialog::FileMode  mode);
   void setFilter(QFileDialog* theWrappedObject, QDir::Filters  filters);
   void setHistory(QFileDialog* theWrappedObject, const QStringList&  paths);
   void setIconProvider(QFileDialog* theWrappedObject, QAbstractFileIconProvider*  provider);
   void setItemDelegate(QFileDialog* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setLabelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label, const QString&  text);
   void setMimeTypeFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   void setNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void setNameFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   void setOption(QFileDialog* theWrappedObject, QFileDialog::Option  option, bool  on = true);
   void setOptions(QFileDialog* theWrappedObject, QFileDialog::Options  options);
   void setProxyModel(QFileDialog* theWrappedObject, QAbstractProxyModel*  model);
   void setSidebarUrls(QFileDialog* theWrappedObject, const QList<QUrl >&  urls);
   void setSupportedSchemes(QFileDialog* theWrappedObject, const QStringList&  schemes);
   void setViewMode(QFileDialog* theWrappedObject, QFileDialog::ViewMode  mode);
   void py_q_setVisible(QFileDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QFileDialog*)theWrappedObject)->py_q_setVisible(visible));}
   QList<QUrl >  sidebarUrls(QFileDialog* theWrappedObject) const;
   QStringList  supportedSchemes(QFileDialog* theWrappedObject) const;
   bool  testOption(QFileDialog* theWrappedObject, QFileDialog::Option  option) const;
   QFileDialog::ViewMode  viewMode(QFileDialog* theWrappedObject) const;
};


