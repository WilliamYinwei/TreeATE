#include <PythonQt.h>
#include <QObject>
#include <QPainterPath>
#include <QPair>
#include <QTextCursor>
#include <QVarLengthArray>
#include <QVariant>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtWidgets/qgraphicsitemanimation.h>
#include <QtWidgets/qgraphicslayout.h>
#include <QtWidgets/qgraphicslayoutitem.h>
#include <QtWidgets/qgraphicslinearlayout.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qgraphicsscene.h>
#include <QtWidgets/qgraphicssceneevent.h>
#include <QtWidgets/qgraphicstransform.h>
#include <QtWidgets/qgraphicsview.h>
#include <QtWidgets/qgraphicswidget.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qscrollbar.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qstyleoption.h>
#include <QtWidgets/qwidget.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qthread.h>
#include <qtimeline.h>
#include <qtransform.h>
#include <qvectornd.h>
#include <qwindow.h>



class PythonQtShell_QGraphicsItemAnimation : public QGraphicsItemAnimation
{
public:
    PythonQtShell_QGraphicsItemAnimation(QObject*  parent = nullptr):QGraphicsItemAnimation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsItemAnimation() override;

void afterAnimationStep(qreal  step) override;
void beforeAnimationStep(qreal  step) override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsItemAnimation : public QGraphicsItemAnimation
{ public:
inline void promoted_afterAnimationStep(qreal  step) { this->afterAnimationStep(step); }
inline void promoted_beforeAnimationStep(qreal  step) { this->beforeAnimationStep(step); }
inline void py_q_afterAnimationStep(qreal  step) { QGraphicsItemAnimation::afterAnimationStep(step); }
inline void py_q_beforeAnimationStep(qreal  step) { QGraphicsItemAnimation::beforeAnimationStep(step); }
};

class PythonQtWrapper_QGraphicsItemAnimation : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsItemAnimation* new_QGraphicsItemAnimation(QObject*  parent = nullptr);
void delete_QGraphicsItemAnimation(QGraphicsItemAnimation* obj) { delete obj; }
   void afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   void py_q_afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step){  (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_afterAnimationStep(step));}
   void beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   void py_q_beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step){  (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_beforeAnimationStep(step));}
   void clear(QGraphicsItemAnimation* theWrappedObject);
   qreal  horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QGraphicsItem*  item(QGraphicsItemAnimation* theWrappedObject) const;
   QPointF  posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<std::pair<qreal , QPointF >  >  posList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<std::pair<qreal , qreal >  >  rotationList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<std::pair<qreal , QPointF >  >  scaleList(QGraphicsItemAnimation* theWrappedObject) const;
   void setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item);
   void setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos);
   void setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle);
   void setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy);
   void setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv);
   void setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine);
   void setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy);
   QList<std::pair<qreal , QPointF >  >  shearList(QGraphicsItemAnimation* theWrappedObject) const;
   QTimeLine*  timeLine(QGraphicsItemAnimation* theWrappedObject) const;
   QTransform  transformAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<std::pair<qreal , QPointF >  >  translationList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
};





class PythonQtShell_QGraphicsItemGroup : public QGraphicsItemGroup
{
public:
    PythonQtShell_QGraphicsItemGroup(QGraphicsItem*  parent = nullptr):QGraphicsItemGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsItemGroup() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsItemGroup : public QGraphicsItemGroup
{ public:
inline QRectF  py_q_boundingRect() const { return QGraphicsItemGroup::boundingRect(); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItemGroup::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsItemGroup::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsItemGroup::paint(painter, option, widget); }
inline int  py_q_type() const { return QGraphicsItemGroup::type(); }
};

class PythonQtWrapper_QGraphicsItemGroup : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsItemGroup::Type};
public Q_SLOTS:
QGraphicsItemGroup* new_QGraphicsItemGroup(QGraphicsItem*  parent = nullptr);
void delete_QGraphicsItemGroup(QGraphicsItemGroup* obj) { delete obj; }
   void addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
   QRectF  py_q_boundingRect(QGraphicsItemGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_isObscuredBy(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsItemGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsItemGroup* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
   int  py_q_type(QGraphicsItemGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsLayout : public QGraphicsLayout
{
public:
    PythonQtShell_QGraphicsLayout(QGraphicsLayoutItem*  parent = nullptr):QGraphicsLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsLayout() override;

int  count() const override;
void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const override;
void invalidate() override;
bool  isEmpty() const override;
QGraphicsLayoutItem*  itemAt(int  i) const override;
void removeAt(int  index) override;
void setGeometry(const QRectF&  rect) override;
QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const override;
void updateGeometry() override;
void widgetEvent(QEvent*  e) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsLayout : public QGraphicsLayout
{ public:
inline void promoted_addChildLayoutItem(QGraphicsLayoutItem*  layoutItem) { this->addChildLayoutItem(layoutItem); }
inline int  py_q_count() const { return this->count(); }
inline void py_q_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayout::getContentsMargins(left, top, right, bottom); }
inline void py_q_invalidate() { QGraphicsLayout::invalidate(); }
inline QGraphicsLayoutItem*  py_q_itemAt(int  i) const { return this->itemAt(i); }
inline void py_q_removeAt(int  index) { this->removeAt(index); }
inline void py_q_updateGeometry() { QGraphicsLayout::updateGeometry(); }
inline void py_q_widgetEvent(QEvent*  e) { QGraphicsLayout::widgetEvent(e); }
};

class PythonQtWrapper_QGraphicsLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsLayout* new_QGraphicsLayout(QGraphicsLayoutItem*  parent = nullptr);
void delete_QGraphicsLayout(QGraphicsLayout* obj) { delete obj; }
   void activate(QGraphicsLayout* theWrappedObject);
   void addChildLayoutItem(QGraphicsLayout* theWrappedObject, QGraphicsLayoutItem*  layoutItem);
   int  count(QGraphicsLayout* theWrappedObject) const;
   int  py_q_count(QGraphicsLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_count());}
   void py_q_getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const{  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_getContentsMargins(left, top, right, bottom));}
   bool  static_QGraphicsLayout_instantInvalidatePropagation();
   void invalidate(QGraphicsLayout* theWrappedObject);
   void py_q_invalidate(QGraphicsLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_invalidate());}
   bool  isActivated(QGraphicsLayout* theWrappedObject) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsLayout* theWrappedObject, int  i) const;
   QGraphicsLayoutItem*  py_q_itemAt(QGraphicsLayout* theWrappedObject, int  i) const{  return (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_itemAt(i));}
   void removeAt(QGraphicsLayout* theWrappedObject, int  index);
   void py_q_removeAt(QGraphicsLayout* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_removeAt(index));}
   void setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void static_QGraphicsLayout_setInstantInvalidatePropagation(bool  enable);
   void py_q_updateGeometry(QGraphicsLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_updateGeometry());}
   void widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e);
   void py_q_widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_widgetEvent(e));}
    bool __nonzero__(QGraphicsLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QGraphicsLayoutItem : public QGraphicsLayoutItem
{
public:
    PythonQtShell_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = nullptr, bool  isLayout = false):QGraphicsLayoutItem(parent, isLayout),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsLayoutItem() override;

void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const override;
bool  isEmpty() const override;
void setGeometry(const QRectF&  rect) override;
QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const override;
void updateGeometry() override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsLayoutItem : public QGraphicsLayoutItem
{ public:
inline void promoted_setGraphicsItem(QGraphicsItem*  item) { this->setGraphicsItem(item); }
inline void promoted_setOwnedByLayout(bool  ownedByLayout) { this->setOwnedByLayout(ownedByLayout); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void py_q_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom); }
inline bool  py_q_isEmpty() const { return QGraphicsLayoutItem::isEmpty(); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsLayoutItem::setGeometry(rect); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void py_q_updateGeometry() { QGraphicsLayoutItem::updateGeometry(); }
};

class PythonQtWrapper_QGraphicsLayoutItem : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsLayoutItem* new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = nullptr, bool  isLayout = false);
void delete_QGraphicsLayoutItem(QGraphicsLayoutItem* obj) { delete obj; }
   QRectF  contentsRect(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QRectF  geometry(QGraphicsLayoutItem* theWrappedObject) const;
   void getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void py_q_getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const{  (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_getContentsMargins(left, top, right, bottom));}
   QGraphicsItem*  graphicsItem(QGraphicsLayoutItem* theWrappedObject) const;
   bool  isEmpty(QGraphicsLayoutItem* theWrappedObject) const;
   bool  py_q_isEmpty(QGraphicsLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_isEmpty());}
   bool  isLayout(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  maximumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  maximumSize(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  maximumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  minimumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  minimumSize(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  minimumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   bool  ownedByLayout(QGraphicsLayoutItem* theWrappedObject) const;
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  preferredHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  preferredSize(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  preferredWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect);
   void py_q_setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_setGeometry(rect));}
   void setGraphicsItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsItem*  item);
   void setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setOwnedByLayout(QGraphicsLayoutItem* theWrappedObject, bool  ownedByLayout);
   void setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent);
   void setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType = QSizePolicy::DefaultType);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy);
   QSizeF  sizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QSizeF  py_q_sizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   QSizePolicy  sizePolicy(QGraphicsLayoutItem* theWrappedObject) const;
   void updateGeometry(QGraphicsLayoutItem* theWrappedObject);
   void py_q_updateGeometry(QGraphicsLayoutItem* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_updateGeometry());}
    bool __nonzero__(QGraphicsLayoutItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QGraphicsLineItem : public QGraphicsLineItem
{
public:
    PythonQtShell_QGraphicsLineItem(QGraphicsItem*  parent = nullptr):QGraphicsLineItem(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = nullptr):QGraphicsLineItem(line, parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = nullptr):QGraphicsLineItem(x1, y1, x2, y2, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsLineItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsLineItem : public QGraphicsLineItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsLineItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsLineItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsLineItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsLineItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsLineItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsLineItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsLineItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsLineItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsLineItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsLineItem::type(); }
};

class PythonQtWrapper_QGraphicsLineItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsLineItem::Type};
public Q_SLOTS:
QGraphicsLineItem* new_QGraphicsLineItem(QGraphicsItem*  parent = nullptr);
QGraphicsLineItem* new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = nullptr);
QGraphicsLineItem* new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsLineItem(QGraphicsLineItem* obj) { delete obj; }
   QRectF  py_q_boundingRect(QGraphicsLineItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsLineItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QLineF  line(QGraphicsLineItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsLineItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPen  pen(QGraphicsLineItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsLineItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line);
   void setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen);
   QPainterPath  py_q_shape(QGraphicsLineItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_shape());}
   bool  py_q_supportsExtension(QGraphicsLineItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  py_q_type(QGraphicsLineItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsLinearLayout : public QGraphicsLinearLayout
{
public:
    PythonQtShell_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = nullptr):QGraphicsLinearLayout(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = nullptr):QGraphicsLinearLayout(orientation, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsLinearLayout() override;

int  count() const override;
void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const override;
void invalidate() override;
bool  isEmpty() const override;
QGraphicsLayoutItem*  itemAt(int  index) const override;
void removeAt(int  index) override;
void setGeometry(const QRectF&  rect) override;
QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const override;
void updateGeometry() override;
void widgetEvent(QEvent*  e) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsLinearLayout : public QGraphicsLinearLayout
{ public:
inline int  py_q_count() const { return QGraphicsLinearLayout::count(); }
inline void py_q_invalidate() { QGraphicsLinearLayout::invalidate(); }
inline QGraphicsLayoutItem*  py_q_itemAt(int  index) const { return QGraphicsLinearLayout::itemAt(index); }
inline void py_q_removeAt(int  index) { QGraphicsLinearLayout::removeAt(index); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsLinearLayout::setGeometry(rect); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsLinearLayout::sizeHint(which, constraint); }
};

class PythonQtWrapper_QGraphicsLinearLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsLinearLayout* new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = nullptr);
QGraphicsLinearLayout* new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = nullptr);
void delete_QGraphicsLinearLayout(QGraphicsLinearLayout* obj) { delete obj; }
   void addItem(QGraphicsLinearLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item);
   void addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch = 1);
   Qt::Alignment  alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   int  py_q_count(QGraphicsLinearLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_count());}
   void dump(QGraphicsLinearLayout* theWrappedObject, int  indent = 0) const;
   void insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item);
   void insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch = 1);
   void py_q_invalidate(QGraphicsLinearLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_invalidate());}
   QGraphicsLayoutItem*  py_q_itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_itemAt(index));}
   qreal  itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const;
   Qt::Orientation  orientation(QGraphicsLinearLayout* theWrappedObject) const;
   void py_q_removeAt(QGraphicsLinearLayout* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_removeAt(index));}
   void removeItem(QGraphicsLinearLayout* theWrappedObject, PythonQtPassOwnershipToPython<QGraphicsLayoutItem* >  item);
   void setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   void py_q_setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing);
   void setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation);
   void setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing);
   void setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch);
   QSizeF  py_q_sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   qreal  spacing(QGraphicsLinearLayout* theWrappedObject) const;
   int  stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
    bool __nonzero__(QGraphicsLinearLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QGraphicsObject : public QGraphicsObject
{
public:
    PythonQtShell_QGraphicsObject(QGraphicsItem*  parent = nullptr):QGraphicsObject(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsObject() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
void childEvent(QChildEvent*  event) override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
bool  event(QEvent*  ev) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
void timerEvent(QTimerEvent*  event) override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsObject : public QGraphicsObject
{ public:
inline bool  promoted_event(QEvent*  ev) { return this->event(ev); }
inline void promoted_updateMicroFocus() { this->updateMicroFocus(); }
inline bool  py_q_event(QEvent*  ev) { return QGraphicsObject::event(ev); }
};

class PythonQtWrapper_QGraphicsObject : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsObject* new_QGraphicsObject(QGraphicsItem*  parent = nullptr);
void delete_QGraphicsObject(QGraphicsObject* obj) { delete obj; }
   bool  py_q_event(QGraphicsObject* theWrappedObject, QEvent*  ev){  return (((PythonQtPublicPromoter_QGraphicsObject*)theWrappedObject)->py_q_event(ev));}
   void grabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags = Qt::GestureFlags());
   void ungrabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type);
    QString py_toString(QGraphicsObject*);
};





class PythonQtShell_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{
public:
    PythonQtShell_QGraphicsOpacityEffect(QObject*  parent = nullptr):QGraphicsOpacityEffect(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsOpacityEffect() override;

QRectF  boundingRectFor(const QRectF&  sourceRect) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
void draw(QPainter*  painter) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void sourceChanged(QGraphicsEffect::ChangeFlags  flags) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline void py_q_draw(QPainter*  painter) { QGraphicsOpacityEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsOpacityEffect : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsOpacityEffect* new_QGraphicsOpacityEffect(QObject*  parent = nullptr);
void delete_QGraphicsOpacityEffect(QGraphicsOpacityEffect* obj) { delete obj; }
   void py_q_draw(QGraphicsOpacityEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsOpacityEffect*)theWrappedObject)->py_q_draw(painter));}
   qreal  opacity(QGraphicsOpacityEffect* theWrappedObject) const;
   QBrush  opacityMask(QGraphicsOpacityEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPathItem : public QGraphicsPathItem
{
public:
    PythonQtShell_QGraphicsPathItem(QGraphicsItem*  parent = nullptr):QGraphicsPathItem(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = nullptr):QGraphicsPathItem(path, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsPathItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsPathItem : public QGraphicsPathItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsPathItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsPathItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsPathItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPathItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsPathItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsPathItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsPathItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsPathItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsPathItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsPathItem::type(); }
};

class PythonQtWrapper_QGraphicsPathItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPathItem::Type};
public Q_SLOTS:
QGraphicsPathItem* new_QGraphicsPathItem(QGraphicsItem*  parent = nullptr);
QGraphicsPathItem* new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsPathItem(QGraphicsPathItem* obj) { delete obj; }
   QRectF  py_q_boundingRect(QGraphicsPathItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsPathItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsPathItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPainterPath  path(QGraphicsPathItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsPathItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path);
   QPainterPath  py_q_shape(QGraphicsPathItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_shape());}
   bool  py_q_supportsExtension(QGraphicsPathItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  py_q_type(QGraphicsPathItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsPixmapItem : public QGraphicsPixmapItem
{
public:
    PythonQtShell_QGraphicsPixmapItem(QGraphicsItem*  parent = nullptr):QGraphicsPixmapItem(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = nullptr):QGraphicsPixmapItem(pixmap, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsPixmapItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsPixmapItem : public QGraphicsPixmapItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsPixmapItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsPixmapItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsPixmapItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPixmapItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsPixmapItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsPixmapItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsPixmapItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsPixmapItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsPixmapItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsPixmapItem::type(); }
};

class PythonQtWrapper_QGraphicsPixmapItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShapeMode enum_1 )
enum ShapeMode{
  MaskShape = QGraphicsPixmapItem::MaskShape,   BoundingRectShape = QGraphicsPixmapItem::BoundingRectShape,   HeuristicMaskShape = QGraphicsPixmapItem::HeuristicMaskShape};
enum enum_1{
  Type = QGraphicsPixmapItem::Type};
public Q_SLOTS:
QGraphicsPixmapItem* new_QGraphicsPixmapItem(QGraphicsItem*  parent = nullptr);
QGraphicsPixmapItem* new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsPixmapItem(QGraphicsPixmapItem* obj) { delete obj; }
   QRectF  py_q_boundingRect(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPointF  offset(QGraphicsPixmapItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPixmap  pixmap(QGraphicsPixmapItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsPixmapItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
   void setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap);
   void setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode);
   void setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode);
   QPainterPath  py_q_shape(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_shape());}
   QGraphicsPixmapItem::ShapeMode  shapeMode(QGraphicsPixmapItem* theWrappedObject) const;
   bool  py_q_supportsExtension(QGraphicsPixmapItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   Qt::TransformationMode  transformationMode(QGraphicsPixmapItem* theWrappedObject) const;
   int  py_q_type(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsPolygonItem : public QGraphicsPolygonItem
{
public:
    PythonQtShell_QGraphicsPolygonItem(QGraphicsItem*  parent = nullptr):QGraphicsPolygonItem(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = nullptr):QGraphicsPolygonItem(polygon, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsPolygonItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsPolygonItem : public QGraphicsPolygonItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsPolygonItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsPolygonItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsPolygonItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPolygonItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsPolygonItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsPolygonItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsPolygonItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsPolygonItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsPolygonItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsPolygonItem::type(); }
};

class PythonQtWrapper_QGraphicsPolygonItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPolygonItem::Type};
public Q_SLOTS:
QGraphicsPolygonItem* new_QGraphicsPolygonItem(QGraphicsItem*  parent = nullptr);
QGraphicsPolygonItem* new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsPolygonItem(QGraphicsPolygonItem* obj) { delete obj; }
   QRectF  py_q_boundingRect(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsPolygonItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_extension(variant));}
   Qt::FillRule  fillRule(QGraphicsPolygonItem* theWrappedObject) const;
   bool  py_q_isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPolygonF  polygon(QGraphicsPolygonItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsPolygonItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule);
   void setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon);
   QPainterPath  py_q_shape(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_shape());}
   bool  py_q_supportsExtension(QGraphicsPolygonItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  py_q_type(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsProxyWidget : public QGraphicsProxyWidget
{
public:
    PythonQtShell_QGraphicsProxyWidget(QGraphicsItem*  parent = nullptr, Qt::WindowFlags  wFlags = Qt::WindowFlags()):QGraphicsProxyWidget(parent, wFlags),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsProxyWidget() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const override;
void grabKeyboardEvent(QEvent*  event) override;
void grabMouseEvent(QEvent*  event) override;
void hideEvent(QHideEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void initStyleOption(QStyleOption*  option) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isEmpty() const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
void moveEvent(QGraphicsSceneMoveEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) override;
void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
void polishEvent() override;
QVariant  propertyChange(const QString&  propertyName, const QVariant&  value) override;
void resizeEvent(QGraphicsSceneResizeEvent*  event) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
void setGeometry(const QRectF&  rect) override;
QPainterPath  shape() const override;
void showEvent(QShowEvent*  event) override;
QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
void timerEvent(QTimerEvent*  event) override;
int  type() const override;
void ungrabKeyboardEvent(QEvent*  event) override;
void ungrabMouseEvent(QEvent*  event) override;
void updateGeometry() override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;
bool  windowFrameEvent(QEvent*  e) override;
Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsProxyWidget : public QGraphicsProxyWidget
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { this->grabMouseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { this->hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return this->inputMethodQuery(query); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline QGraphicsProxyWidget*  promoted_newProxyWidget(const QWidget*  arg__1) { return this->newProxyWidget(arg__1); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { this->ungrabMouseEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsProxyWidget::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragMoveEvent(event); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dropEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsProxyWidget::event(event); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QGraphicsProxyWidget::eventFilter(object, event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsProxyWidget::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QGraphicsProxyWidget::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsProxyWidget::focusOutEvent(event); }
inline void py_q_grabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::grabMouseEvent(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QGraphicsProxyWidget::hideEvent(event); }
inline void py_q_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsProxyWidget::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsProxyWidget::inputMethodQuery(query); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsProxyWidget::itemChange(change, value); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsProxyWidget::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsProxyWidget::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseReleaseEvent(event); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsProxyWidget::paint(painter, option, widget); }
inline void py_q_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsProxyWidget::resizeEvent(event); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsProxyWidget::setGeometry(rect); }
inline void py_q_showEvent(QShowEvent*  event) { QGraphicsProxyWidget::showEvent(event); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsProxyWidget::sizeHint(which, constraint); }
inline int  py_q_type() const { return QGraphicsProxyWidget::type(); }
inline void py_q_ungrabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::ungrabMouseEvent(event); }
inline void py_q_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsProxyWidget::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsProxyWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsProxyWidget::Type};
public Q_SLOTS:
QGraphicsProxyWidget* new_QGraphicsProxyWidget(PythonQtNewOwnerOfThis<QGraphicsItem* >  parent = nullptr, Qt::WindowFlags  wFlags = Qt::WindowFlags());
void delete_QGraphicsProxyWidget(QGraphicsProxyWidget* obj) { delete obj; }
   void py_q_contextMenuEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QGraphicsProxyWidget*  createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child);
   void py_q_dragEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void py_q_dragLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void py_q_dragMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void py_q_dropEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  py_q_event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_eventFilter(object, event));}
   void py_q_focusInEvent(QGraphicsProxyWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QGraphicsProxyWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusOutEvent(event));}
   void py_q_grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_grabMouseEvent(event));}
   void py_q_hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void py_q_hoverEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void py_q_hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void py_q_hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void py_q_inputMethodEvent(QGraphicsProxyWidget* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  py_q_inputMethodQuery(QGraphicsProxyWidget* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_inputMethodQuery(query));}
   QVariant  py_q_itemChange(QGraphicsProxyWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_itemChange(change, value));}
   void py_q_keyPressEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_keyPressEvent(event));}
   void py_q_keyReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   void py_q_mouseDoubleClickEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void py_q_mouseMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void py_q_paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void py_q_resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   void py_q_setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_setGeometry(rect));}
   void setWidget(QGraphicsProxyWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void py_q_showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSizeF  py_q_sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   QRectF  subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const;
   int  py_q_type(QGraphicsProxyWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_type());}
   void py_q_ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_ungrabMouseEvent(event));}
   void py_q_wheelEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_wheelEvent(event));}
   QWidget*  widget(QGraphicsProxyWidget* theWrappedObject) const;
    bool __nonzero__(QGraphicsProxyWidget* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QGraphicsRectItem : public QGraphicsRectItem
{
public:
    PythonQtShell_QGraphicsRectItem(QGraphicsItem*  parent = nullptr):QGraphicsRectItem(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = nullptr):QGraphicsRectItem(rect, parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = nullptr):QGraphicsRectItem(x, y, w, h, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsRectItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsRectItem : public QGraphicsRectItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsRectItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsRectItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsRectItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsRectItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsRectItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsRectItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsRectItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsRectItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsRectItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsRectItem::type(); }
};

class PythonQtWrapper_QGraphicsRectItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsRectItem::Type};
public Q_SLOTS:
QGraphicsRectItem* new_QGraphicsRectItem(QGraphicsItem*  parent = nullptr);
QGraphicsRectItem* new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = nullptr);
QGraphicsRectItem* new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsRectItem(QGraphicsRectItem* obj) { delete obj; }
   QRectF  py_q_boundingRect(QGraphicsRectItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsRectItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsRectItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QRectF  rect(QGraphicsRectItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsRectItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect);
   void setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QPainterPath  py_q_shape(QGraphicsRectItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_shape());}
   bool  py_q_supportsExtension(QGraphicsRectItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  py_q_type(QGraphicsRectItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsRotation : public QGraphicsRotation
{
public:
    PythonQtShell_QGraphicsRotation(QObject*  parent = nullptr):QGraphicsRotation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsRotation() override;

void applyTo(QMatrix4x4*  matrix) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsRotation : public QGraphicsRotation
{ public:
inline void py_q_applyTo(QMatrix4x4*  matrix) const { QGraphicsRotation::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsRotation : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsRotation* new_QGraphicsRotation(QObject*  parent = nullptr);
void delete_QGraphicsRotation(QGraphicsRotation* obj) { delete obj; }
   qreal  angle(QGraphicsRotation* theWrappedObject) const;
   void py_q_applyTo(QGraphicsRotation* theWrappedObject, QMatrix4x4*  matrix) const{  (((PythonQtPublicPromoter_QGraphicsRotation*)theWrappedObject)->py_q_applyTo(matrix));}
   QVector3D  axis(QGraphicsRotation* theWrappedObject) const;
   QVector3D  origin(QGraphicsRotation* theWrappedObject) const;
   void setAngle(QGraphicsRotation* theWrappedObject, qreal  arg__1);
   void setAxis(QGraphicsRotation* theWrappedObject, Qt::Axis  axis);
   void setAxis(QGraphicsRotation* theWrappedObject, const QVector3D&  axis);
   void setOrigin(QGraphicsRotation* theWrappedObject, const QVector3D&  point);
};





class PythonQtShell_QGraphicsScale : public QGraphicsScale
{
public:
    PythonQtShell_QGraphicsScale(QObject*  parent = nullptr):QGraphicsScale(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsScale() override;

void applyTo(QMatrix4x4*  matrix) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsScale : public QGraphicsScale
{ public:
inline void py_q_applyTo(QMatrix4x4*  matrix) const { QGraphicsScale::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsScale : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsScale* new_QGraphicsScale(QObject*  parent = nullptr);
void delete_QGraphicsScale(QGraphicsScale* obj) { delete obj; }
   void py_q_applyTo(QGraphicsScale* theWrappedObject, QMatrix4x4*  matrix) const{  (((PythonQtPublicPromoter_QGraphicsScale*)theWrappedObject)->py_q_applyTo(matrix));}
   QVector3D  origin(QGraphicsScale* theWrappedObject) const;
   void setOrigin(QGraphicsScale* theWrappedObject, const QVector3D&  point);
   void setXScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   void setYScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   void setZScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   qreal  xScale(QGraphicsScale* theWrappedObject) const;
   qreal  yScale(QGraphicsScale* theWrappedObject) const;
   qreal  zScale(QGraphicsScale* theWrappedObject) const;
};





class PythonQtShell_QGraphicsScene : public QGraphicsScene
{
public:
    PythonQtShell_QGraphicsScene(QObject*  parent = nullptr):QGraphicsScene(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = nullptr):QGraphicsScene(sceneRect, parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = nullptr):QGraphicsScene(x, y, width, height, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsScene() override;

void childEvent(QChildEvent*  event) override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void drawBackground(QPainter*  painter, const QRectF&  rect) override;
void drawForeground(QPainter*  painter, const QRectF&  rect) override;
void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = nullptr) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
void helpEvent(QGraphicsSceneHelpEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsScene : public QGraphicsScene
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { this->drawBackground(painter, rect); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { this->drawForeground(painter, rect); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = nullptr) { this->drawItems(painter, numItems, items, options, widget); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return this->eventFilter(watched, event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_helpEvent(QGraphicsSceneHelpEvent*  event) { this->helpEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsScene::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragMoveEvent(event); }
inline void py_q_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawBackground(painter, rect); }
inline void py_q_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawForeground(painter, rect); }
inline void py_q_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = nullptr) { QGraphicsScene::drawItems(painter, numItems, items, options, widget); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dropEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsScene::event(event); }
inline bool  py_q_eventFilter(QObject*  watched, QEvent*  event) { return QGraphicsScene::eventFilter(watched, event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsScene::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QGraphicsScene::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsScene::focusOutEvent(event); }
inline void py_q_helpEvent(QGraphicsSceneHelpEvent*  event) { QGraphicsScene::helpEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsScene::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsScene::inputMethodQuery(query); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsScene::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsScene::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseReleaseEvent(event); }
inline void py_q_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsScene::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsScene : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SceneLayer )
Q_FLAGS(SceneLayers )
enum SceneLayer{
  ItemLayer = QGraphicsScene::ItemLayer,   BackgroundLayer = QGraphicsScene::BackgroundLayer,   ForegroundLayer = QGraphicsScene::ForegroundLayer,   AllLayers = QGraphicsScene::AllLayers};
Q_DECLARE_FLAGS(SceneLayers, SceneLayer)
public Q_SLOTS:
QGraphicsScene* new_QGraphicsScene(QObject*  parent = nullptr);
QGraphicsScene* new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = nullptr);
QGraphicsScene* new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = nullptr);
void delete_QGraphicsScene(QGraphicsScene* obj) { delete obj; }
   QGraphicsItem*  activePanel(QGraphicsScene* theWrappedObject) const;
   QGraphicsWidget*  activeWindow(QGraphicsScene* theWrappedObject) const;
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void addItem(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsItem* >  item);
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen = QPen());
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen = QPen());
   QGraphicsPathItem*  addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsPixmapItem*  addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap);
   QGraphicsPolygonItem*  addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsSimpleTextItem*  addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   QGraphicsTextItem*  addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   QGraphicsProxyWidget*  addWidget(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, Qt::WindowFlags  wFlags = Qt::WindowFlags());
   QBrush  backgroundBrush(QGraphicsScene* theWrappedObject) const;
   int  bspTreeDepth(QGraphicsScene* theWrappedObject) const;
   void clearFocus(QGraphicsScene* theWrappedObject);
   QList<QGraphicsItem* >  collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void py_q_contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QGraphicsItemGroup*  createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items);
   void destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group);
   void dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void py_q_drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_drawBackground(painter, rect));}
   void drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void py_q_drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_drawForeground(painter, rect));}
   void drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = nullptr);
   void py_q_drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_drawItems(painter, numItems, items, options, widget));}
   void dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_dropEvent(event));}
   bool  py_q_event(QGraphicsScene* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_eventFilter(watched, event));}
   void focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_focusInEvent(event));}
   QGraphicsItem*  focusItem(QGraphicsScene* theWrappedObject) const;
   bool  py_q_focusNextPrevChild(QGraphicsScene* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   bool  focusOnTouch(QGraphicsScene* theWrappedObject) const;
   void focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_focusOutEvent(event));}
   QFont  font(QGraphicsScene* theWrappedObject) const;
   QBrush  foregroundBrush(QGraphicsScene* theWrappedObject) const;
   bool  hasFocus(QGraphicsScene* theWrappedObject) const;
   qreal  height(QGraphicsScene* theWrappedObject) const;
   void helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event);
   void py_q_helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_helpEvent(event));}
   void inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event);
   void py_q_inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_inputMethodQuery(query));}
   void invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers = QGraphicsScene::AllLayers);
   bool  isActive(QGraphicsScene* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos, const QTransform&  deviceTransform) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, const QTransform&  deviceTransform) const;
   QGraphicsScene::ItemIndexMethod  itemIndexMethod(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, Qt::SortOrder  order = Qt::DescendingOrder) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   QRectF  itemsBoundingRect(QGraphicsScene* theWrappedObject) const;
   void keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   qreal  minimumRenderSize(QGraphicsScene* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   QGraphicsItem*  mouseGrabberItem(QGraphicsScene* theWrappedObject) const;
   void mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QPalette  palette(QGraphicsScene* theWrappedObject) const;
   void removeItem(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToPython<QGraphicsItem* >  item);
   void render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRectF&  source = QRectF(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QRectF  sceneRect(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  selectedItems(QGraphicsScene* theWrappedObject) const;
   QPainterPath  selectionArea(QGraphicsScene* theWrappedObject) const;
   bool  sendEvent(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, QEvent*  event);
   void setActivePanel(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   void setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget);
   void setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth);
   void setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setFocusOnTouch(QGraphicsScene* theWrappedObject, bool  enabled);
   void setFont(QGraphicsScene* theWrappedObject, const QFont&  font);
   void setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method);
   void setMinimumRenderSize(QGraphicsScene* theWrappedObject, qreal  minSize);
   void setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette);
   void setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect);
   void setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionOperation  selectionOperation = Qt::ReplaceSelection, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, const QTransform&  deviceTransform = QTransform());
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QTransform&  deviceTransform);
   void setStickyFocus(QGraphicsScene* theWrappedObject, bool  enabled);
   void setStyle(QGraphicsScene* theWrappedObject, QStyle*  style);
   bool  stickyFocus(QGraphicsScene* theWrappedObject) const;
   QStyle*  style(QGraphicsScene* theWrappedObject) const;
   void update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QList<QGraphicsView* >  views(QGraphicsScene* theWrappedObject) const;
   void wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   void py_q_wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_wheelEvent(event));}
   qreal  width(QGraphicsScene* theWrappedObject) const;
};





class PythonQtShell_QGraphicsSceneContextMenuEvent : public QGraphicsSceneContextMenuEvent
{
public:
    PythonQtShell_QGraphicsSceneContextMenuEvent(QEvent::Type  type = QEvent::None):QGraphicsSceneContextMenuEvent(type),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneContextMenuEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QGraphicsSceneContextMenuEvent::Mouse,   Keyboard = QGraphicsSceneContextMenuEvent::Keyboard,   Other = QGraphicsSceneContextMenuEvent::Other};
public Q_SLOTS:
QGraphicsSceneContextMenuEvent* new_QGraphicsSceneContextMenuEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneContextMenuEvent(QGraphicsSceneContextMenuEvent* obj) { delete obj; }
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QGraphicsSceneContextMenuEvent::Reason  reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   void setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason);
   void setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtShell_QGraphicsSceneDragDropEvent : public QGraphicsSceneDragDropEvent
{
public:
    PythonQtShell_QGraphicsSceneDragDropEvent(QEvent::Type  type = QEvent::None):QGraphicsSceneDragDropEvent(type),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneDragDropEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneDragDropEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsSceneDragDropEvent* new_QGraphicsSceneDragDropEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneDragDropEvent(QGraphicsSceneDragDropEvent* obj) { delete obj; }
   void acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject);
   Qt::MouseButtons  buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropAction  dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   void setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
   void setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions);
   void setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   void setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos);
   QWidget*  source(QGraphicsSceneDragDropEvent* theWrappedObject) const;
};





class PythonQtShell_QGraphicsSceneEvent : public QGraphicsSceneEvent
{
public:
    PythonQtShell_QGraphicsSceneEvent(QEvent::Type  type):QGraphicsSceneEvent(type),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsSceneEvent* new_QGraphicsSceneEvent(QEvent::Type  type);
void delete_QGraphicsSceneEvent(QGraphicsSceneEvent* obj) { delete obj; }
   void setTimestamp(QGraphicsSceneEvent* theWrappedObject, quint64  ts);
   quint64  timestamp(QGraphicsSceneEvent* theWrappedObject) const;
   QWidget*  widget(QGraphicsSceneEvent* theWrappedObject) const;
    QString py_toString(QGraphicsSceneEvent*);
};





class PythonQtShell_QGraphicsSceneHelpEvent : public QGraphicsSceneHelpEvent
{
public:
    PythonQtShell_QGraphicsSceneHelpEvent(QEvent::Type  type = QEvent::None):QGraphicsSceneHelpEvent(type),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneHelpEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneHelpEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsSceneHelpEvent* new_QGraphicsSceneHelpEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHelpEvent(QGraphicsSceneHelpEvent* obj) { delete obj; }
   QPointF  scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtShell_QGraphicsSceneHoverEvent : public QGraphicsSceneHoverEvent
{
public:
    PythonQtShell_QGraphicsSceneHoverEvent(QEvent::Type  type = QEvent::None):QGraphicsSceneHoverEvent(type),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneHoverEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneHoverEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsSceneHoverEvent* new_QGraphicsSceneHoverEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHoverEvent(QGraphicsSceneHoverEvent* obj) { delete obj; }
   QPointF  lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPoint  lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
   void setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtShell_QGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent
{
public:
    PythonQtShell_QGraphicsSceneMouseEvent(QEvent::Type  type = QEvent::None):QGraphicsSceneMouseEvent(type),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneMouseEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneMouseEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsSceneMouseEvent* new_QGraphicsSceneMouseEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneMouseEvent(QGraphicsSceneMouseEvent* obj) { delete obj; }
   Qt::MouseButton  button(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   QPointF  buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   QPoint  buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   Qt::MouseButtons  buttons(QGraphicsSceneMouseEvent* theWrappedObject) const;
   Qt::MouseEventFlags  flags(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPoint  lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button);
   void setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   void setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   void setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos);
   void setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setFlags(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseEventFlags  arg__1);
   void setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   void setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   void setSource(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseEventSource  source);
   Qt::MouseEventSource  source(QGraphicsSceneMouseEvent* theWrappedObject) const;
};





class PythonQtShell_QGraphicsSceneMoveEvent : public QGraphicsSceneMoveEvent
{
public:
    PythonQtShell_QGraphicsSceneMoveEvent():QGraphicsSceneMoveEvent(),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneMoveEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneMoveEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsSceneMoveEvent* new_QGraphicsSceneMoveEvent();
void delete_QGraphicsSceneMoveEvent(QGraphicsSceneMoveEvent* obj) { delete obj; }
   QPointF  newPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
   QPointF  oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
   void setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
   void setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
};





class PythonQtShell_QGraphicsSceneResizeEvent : public QGraphicsSceneResizeEvent
{
public:
    PythonQtShell_QGraphicsSceneResizeEvent():QGraphicsSceneResizeEvent(),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneResizeEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneResizeEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsSceneResizeEvent* new_QGraphicsSceneResizeEvent();
void delete_QGraphicsSceneResizeEvent(QGraphicsSceneResizeEvent* obj) { delete obj; }
   QSizeF  newSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
   QSizeF  oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
   void setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
   void setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
};





class PythonQtShell_QGraphicsSceneWheelEvent : public QGraphicsSceneWheelEvent
{
public:
    PythonQtShell_QGraphicsSceneWheelEvent(QEvent::Type  type = QEvent::None):QGraphicsSceneWheelEvent(type),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSceneWheelEvent() override;

QEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGraphicsSceneWheelEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsSceneWheelEvent* new_QGraphicsSceneWheelEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneWheelEvent(QGraphicsSceneWheelEvent* obj) { delete obj; }
   Qt::MouseButtons  buttons(QGraphicsSceneWheelEvent* theWrappedObject) const;
   int  delta(QGraphicsSceneWheelEvent* theWrappedObject) const;
   bool  isInverted(QGraphicsSceneWheelEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QGraphicsSceneWheelEvent* theWrappedObject) const;
   Qt::ScrollPhase  phase(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPoint  pixelDelta(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta);
   void setInverted(QGraphicsSceneWheelEvent* theWrappedObject, bool  inverted);
   void setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation);
   void setPhase(QGraphicsSceneWheelEvent* theWrappedObject, Qt::ScrollPhase  scrollPhase);
   void setPixelDelta(QGraphicsSceneWheelEvent* theWrappedObject, QPoint  delta);
   void setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
   void setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtShell_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{
public:
    PythonQtShell_QGraphicsSimpleTextItem(QGraphicsItem*  parent = nullptr):QGraphicsSimpleTextItem(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = nullptr):QGraphicsSimpleTextItem(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSimpleTextItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsSimpleTextItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsSimpleTextItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsSimpleTextItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsSimpleTextItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsSimpleTextItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsSimpleTextItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsSimpleTextItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsSimpleTextItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsSimpleTextItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsSimpleTextItem::type(); }
};

class PythonQtWrapper_QGraphicsSimpleTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsSimpleTextItem::Type};
public Q_SLOTS:
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(QGraphicsItem*  parent = nullptr);
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsSimpleTextItem(QGraphicsSimpleTextItem* obj) { delete obj; }
   QRectF  py_q_boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsSimpleTextItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_extension(variant));}
   QFont  font(QGraphicsSimpleTextItem* theWrappedObject) const;
   bool  py_q_isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void py_q_setExtension(QGraphicsSimpleTextItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font);
   void setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text);
   QPainterPath  py_q_shape(QGraphicsSimpleTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_shape());}
   bool  py_q_supportsExtension(QGraphicsSimpleTextItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   QString  text(QGraphicsSimpleTextItem* theWrappedObject) const;
   int  py_q_type(QGraphicsSimpleTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = nullptr):QGraphicsTextItem(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = nullptr):QGraphicsTextItem(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsTextItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
void childEvent(QChildEvent*  event) override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
bool  event(QEvent*  ev) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
void timerEvent(QTimerEvent*  event) override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsTextItem : public QGraphicsTextItem
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { this->hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return this->inputMethodQuery(query); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return this->sceneEvent(event); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsTextItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsTextItem::contains(point); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsTextItem::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragMoveEvent(event); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dropEvent(event); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsTextItem::extension(variant); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsTextItem::focusInEvent(event); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsTextItem::focusOutEvent(event); }
inline void py_q_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsTextItem::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsTextItem::inputMethodQuery(query); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsTextItem::isObscuredBy(item); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsTextItem::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsTextItem::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseReleaseEvent(event); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsTextItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsTextItem::paint(painter, option, widget); }
inline bool  py_q_sceneEvent(QEvent*  event) { return QGraphicsTextItem::sceneEvent(event); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsTextItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsTextItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsTextItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsTextItem::type(); }
};

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public Q_SLOTS:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = nullptr);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; }
   void adjustSize(QGraphicsTextItem* theWrappedObject);
   QRectF  py_q_boundingRect(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_contains(point));}
   void py_q_contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   void py_q_dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void py_q_dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void py_q_dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void py_q_dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dropEvent(event));}
   QVariant  py_q_extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_extension(variant));}
   void py_q_focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_focusInEvent(event));}
   void py_q_focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_focusOutEvent(event));}
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   void py_q_hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void py_q_hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void py_q_hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void py_q_inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  py_q_inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_inputMethodQuery(query));}
   bool  py_q_isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   void py_q_keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_keyPressEvent(event));}
   void py_q_keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   void py_q_mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void py_q_mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QPainterPath  py_q_opaqueArea(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_opaqueArea());}
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   void py_q_paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   bool  py_q_sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_sceneEvent(event));}
   void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
   void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
   void py_q_setExtension(QGraphicsTextItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
   void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
   void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
   void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
   void setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b);
   void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
   QPainterPath  py_q_shape(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_shape());}
   bool  py_q_supportsExtension(QGraphicsTextItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   bool  tabChangesFocus(QGraphicsTextItem* theWrappedObject) const;
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
   int  py_q_type(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsTransform : public QGraphicsTransform
{
public:
    PythonQtShell_QGraphicsTransform(QObject*  parent = nullptr):QGraphicsTransform(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsTransform() override;

void applyTo(QMatrix4x4*  matrix) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsTransform : public QGraphicsTransform
{ public:
inline void promoted_update() { this->update(); }
inline void py_q_applyTo(QMatrix4x4*  matrix) const { this->applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsTransform : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsTransform* new_QGraphicsTransform(QObject*  parent = nullptr);
void delete_QGraphicsTransform(QGraphicsTransform* obj) { delete obj; }
   void applyTo(QGraphicsTransform* theWrappedObject, QMatrix4x4*  matrix) const;
   void py_q_applyTo(QGraphicsTransform* theWrappedObject, QMatrix4x4*  matrix) const{  (((PythonQtPublicPromoter_QGraphicsTransform*)theWrappedObject)->py_q_applyTo(matrix));}
};





class PythonQtShell_QGraphicsView : public QGraphicsView
{
public:
    PythonQtShell_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = nullptr):QGraphicsView(scene, parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsView(QWidget*  parent = nullptr):QGraphicsView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsView() override;

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
void drawBackground(QPainter*  painter, const QRectF&  rect) override;
void drawForeground(QPainter*  painter, const QRectF&  rect) override;
void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
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
void scrollContentsBy(int  dx, int  dy) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  widget) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsView : public QGraphicsView
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { this->drawBackground(painter, rect); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { this->drawForeground(painter, rect); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { this->drawItems(painter, numItems, items, options); }
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_setupViewport(QWidget*  widget) { this->setupViewport(widget); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline bool  promoted_viewportEvent(QEvent*  event) { return this->viewportEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  event) { QGraphicsView::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  event) { QGraphicsView::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  event) { QGraphicsView::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  event) { QGraphicsView::dragMoveEvent(event); }
inline void py_q_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawBackground(painter, rect); }
inline void py_q_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawForeground(painter, rect); }
inline void py_q_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { QGraphicsView::drawItems(painter, numItems, items, options); }
inline void py_q_dropEvent(QDropEvent*  event) { QGraphicsView::dropEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsView::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsView::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QGraphicsView::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsView::focusOutEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsView::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsView::inputMethodQuery(query); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsView::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsView::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  event) { QGraphicsView::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QGraphicsView::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QGraphicsView::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QGraphicsView::mouseReleaseEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QGraphicsView::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QGraphicsView::resizeEvent(event); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QGraphicsView::scrollContentsBy(dx, dy); }
inline void py_q_setupViewport(QWidget*  widget) { QGraphicsView::setupViewport(widget); }
inline void py_q_showEvent(QShowEvent*  event) { QGraphicsView::showEvent(event); }
inline QSize  py_q_sizeHint() const { return QGraphicsView::sizeHint(); }
inline bool  py_q_viewportEvent(QEvent*  event) { return QGraphicsView::viewportEvent(event); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QGraphicsView::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheModeFlag OptimizationFlag )
Q_FLAGS(CacheMode OptimizationFlags )
enum CacheModeFlag{
  CacheNone = QGraphicsView::CacheNone,   CacheBackground = QGraphicsView::CacheBackground};
enum OptimizationFlag{
  DontSavePainterState = QGraphicsView::DontSavePainterState,   DontAdjustForAntialiasing = QGraphicsView::DontAdjustForAntialiasing,   IndirectPainting = QGraphicsView::IndirectPainting};
Q_DECLARE_FLAGS(CacheMode, CacheModeFlag)
Q_DECLARE_FLAGS(OptimizationFlags, OptimizationFlag)
public Q_SLOTS:
QGraphicsView* new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = nullptr);
QGraphicsView* new_QGraphicsView(QWidget*  parent = nullptr);
void delete_QGraphicsView(QGraphicsView* obj) { delete obj; }
   Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
   QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
   QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
   void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
   void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
   void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
   void py_q_contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_contextMenuEvent(event));}
   void py_q_dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void py_q_dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
   void py_q_dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void py_q_drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_drawBackground(painter, rect));}
   void drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void py_q_drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_drawForeground(painter, rect));}
   void drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
   void py_q_drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_drawItems(painter, numItems, items, options));}
   void py_q_dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_dropEvent(event));}
   void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   bool  py_q_event(QGraphicsView* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_event(event));}
   void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void py_q_focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_focusOutEvent(event));}
   QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
   void py_q_inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  py_q_inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_inputMethodQuery(query));}
   bool  isInteractive(QGraphicsView* theWrappedObject) const;
   bool  isTransformed(QGraphicsView* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void py_q_keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_keyPressEvent(event));}
   void py_q_keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   QPainterPath  mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const;
   void py_q_mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void py_q_mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
   void py_q_paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_paintEvent(event));}
   void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
   void resetCachedContent(QGraphicsView* theWrappedObject);
   void resetTransform(QGraphicsView* theWrappedObject);
   QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
   void py_q_resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_resizeEvent(event));}
   void rotate(QGraphicsView* theWrappedObject, qreal  angle);
   QRect  rubberBandRect(QGraphicsView* theWrappedObject) const;
   Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
   void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
   QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
   void py_q_scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment);
   void setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode);
   void setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode);
   void setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void setInteractive(QGraphicsView* theWrappedObject, bool  allowed);
   void setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled = true);
   void setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags);
   void setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   void setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints);
   void setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode);
   void setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene);
   void setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect);
   void setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode);
   void py_q_setupViewport(QGraphicsView* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_setupViewport(widget));}
   void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
   void py_q_showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_showEvent(event));}
   QSize  py_q_sizeHint(QGraphicsView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_sizeHint());}
   QTransform  transform(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
   void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
   bool  py_q_viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_viewportEvent(event));}
   QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
   void py_q_wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_wheelEvent(event));}
};





class PythonQtShell_QGraphicsWidget : public QGraphicsWidget
{
public:
    PythonQtShell_QGraphicsWidget(QGraphicsItem*  parent = nullptr, Qt::WindowFlags  wFlags = Qt::WindowFlags()):QGraphicsWidget(parent, wFlags),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsWidget() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const override;
void grabKeyboardEvent(QEvent*  event) override;
void grabMouseEvent(QEvent*  event) override;
void hideEvent(QHideEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void initStyleOption(QStyleOption*  option) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isEmpty() const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
void moveEvent(QGraphicsSceneMoveEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
void polishEvent() override;
QVariant  propertyChange(const QString&  propertyName, const QVariant&  value) override;
void resizeEvent(QGraphicsSceneResizeEvent*  event) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
void setGeometry(const QRectF&  rect) override;
QPainterPath  shape() const override;
void showEvent(QShowEvent*  event) override;
QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
void timerEvent(QTimerEvent*  event) override;
int  type() const override;
void ungrabKeyboardEvent(QEvent*  event) override;
void ungrabMouseEvent(QEvent*  event) override;
void updateGeometry() override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;
bool  windowFrameEvent(QEvent*  e) override;
Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsWidget : public QGraphicsWidget
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_grabKeyboardEvent(QEvent*  event) { this->grabKeyboardEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { this->grabMouseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_initStyleOption(QStyleOption*  option) const { this->initStyleOption(option); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_moveEvent(QGraphicsSceneMoveEvent*  event) { this->moveEvent(event); }
inline void promoted_polishEvent() { this->polishEvent(); }
inline QVariant  promoted_propertyChange(const QString&  propertyName, const QVariant&  value) { return this->propertyChange(propertyName, value); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { this->resizeEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return this->sceneEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void promoted_ungrabKeyboardEvent(QEvent*  event) { this->ungrabKeyboardEvent(event); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { this->ungrabMouseEvent(event); }
inline void promoted_updateGeometry() { this->updateGeometry(); }
inline bool  promoted_windowFrameEvent(QEvent*  e) { return this->windowFrameEvent(e); }
inline Qt::WindowFrameSection  promoted_windowFrameSectionAt(const QPointF&  pos) const { return this->windowFrameSectionAt(pos); }
inline QRectF  py_q_boundingRect() const { return QGraphicsWidget::boundingRect(); }
inline void py_q_changeEvent(QEvent*  event) { QGraphicsWidget::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QGraphicsWidget::closeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsWidget::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsWidget::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QGraphicsWidget::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsWidget::focusOutEvent(event); }
inline void py_q_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsWidget::getContentsMargins(left, top, right, bottom); }
inline void py_q_grabKeyboardEvent(QEvent*  event) { QGraphicsWidget::grabKeyboardEvent(event); }
inline void py_q_grabMouseEvent(QEvent*  event) { QGraphicsWidget::grabMouseEvent(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QGraphicsWidget::hideEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverMoveEvent(event); }
inline void py_q_initStyleOption(QStyleOption*  option) const { QGraphicsWidget::initStyleOption(option); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsWidget::itemChange(change, value); }
inline void py_q_moveEvent(QGraphicsSceneMoveEvent*  event) { QGraphicsWidget::moveEvent(event); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsWidget::paint(painter, option, widget); }
inline void py_q_paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsWidget::paintWindowFrame(painter, option, widget); }
inline void py_q_polishEvent() { QGraphicsWidget::polishEvent(); }
inline QVariant  py_q_propertyChange(const QString&  propertyName, const QVariant&  value) { return QGraphicsWidget::propertyChange(propertyName, value); }
inline void py_q_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsWidget::resizeEvent(event); }
inline bool  py_q_sceneEvent(QEvent*  event) { return QGraphicsWidget::sceneEvent(event); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsWidget::setGeometry(rect); }
inline QPainterPath  py_q_shape() const { return QGraphicsWidget::shape(); }
inline void py_q_showEvent(QShowEvent*  event) { QGraphicsWidget::showEvent(event); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsWidget::sizeHint(which, constraint); }
inline int  py_q_type() const { return QGraphicsWidget::type(); }
inline void py_q_ungrabKeyboardEvent(QEvent*  event) { QGraphicsWidget::ungrabKeyboardEvent(event); }
inline void py_q_ungrabMouseEvent(QEvent*  event) { QGraphicsWidget::ungrabMouseEvent(event); }
inline void py_q_updateGeometry() { QGraphicsWidget::updateGeometry(); }
inline bool  py_q_windowFrameEvent(QEvent*  e) { return QGraphicsWidget::windowFrameEvent(e); }
inline Qt::WindowFrameSection  py_q_windowFrameSectionAt(const QPointF&  pos) const { return QGraphicsWidget::windowFrameSectionAt(pos); }
};

class PythonQtWrapper_QGraphicsWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsWidget::Type};
public Q_SLOTS:
QGraphicsWidget* new_QGraphicsWidget(QGraphicsItem*  parent = nullptr, Qt::WindowFlags  wFlags = Qt::WindowFlags());
void delete_QGraphicsWidget(QGraphicsWidget* obj) { delete obj; }
   QList<QAction* >  actions(QGraphicsWidget* theWrappedObject) const;
   void addAction(QGraphicsWidget* theWrappedObject, QAction*  action);
   void addActions(QGraphicsWidget* theWrappedObject, const QList<QAction* >&  actions);
   void adjustSize(QGraphicsWidget* theWrappedObject);
   bool  autoFillBackground(QGraphicsWidget* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_boundingRect());}
   void changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_changeEvent(event));}
   void closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event);
   void py_q_closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_closeEvent(event));}
   bool  py_q_event(QGraphicsWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_event(event));}
   void py_q_focusInEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next);
   bool  py_q_focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_focusOutEvent(event));}
   Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
   QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
   QFont  font(QGraphicsWidget* theWrappedObject) const;
   void py_q_getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const{  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_getContentsMargins(left, top, right, bottom));}
   void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_grabKeyboardEvent(event));}
   void grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_grabMouseEvent(event));}
   int  grabShortcut(QGraphicsWidget* theWrappedObject, const QKeySequence&  sequence, Qt::ShortcutContext  context = Qt::WindowShortcut);
   void hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event);
   void py_q_hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void py_q_hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void py_q_hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const;
   void py_q_initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const{  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_initStyleOption(option));}
   void insertAction(QGraphicsWidget* theWrappedObject, QAction*  before, QAction*  action);
   void insertActions(QGraphicsWidget* theWrappedObject, QAction*  before, const QList<QAction* >&  actions);
   bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
   QVariant  py_q_itemChange(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_itemChange(change, value));}
   QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
   void moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event);
   void py_q_moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_moveEvent(event));}
   void py_q_paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
   void py_q_paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_paintWindowFrame(painter, option, widget));}
   QPalette  palette(QGraphicsWidget* theWrappedObject) const;
   void polishEvent(QGraphicsWidget* theWrappedObject);
   void py_q_polishEvent(QGraphicsWidget* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_polishEvent());}
   QVariant  propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value);
   QVariant  py_q_propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_propertyChange(propertyName, value));}
   QRectF  rect(QGraphicsWidget* theWrappedObject) const;
   void releaseShortcut(QGraphicsWidget* theWrappedObject, int  id);
   void removeAction(QGraphicsWidget* theWrappedObject, QAction*  action);
   void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   void resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void py_q_resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   bool  py_q_sceneEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_sceneEvent(event));}
   void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
   void setAutoFillBackground(QGraphicsWidget* theWrappedObject, bool  enabled);
   void setContentsMargins(QGraphicsWidget* theWrappedObject, QMarginsF  margins);
   void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
   void py_q_setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_setGeometry(rect));}
   void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setLayout(QGraphicsWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayout* >  layout);
   void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
   void setShortcutAutoRepeat(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
   void setShortcutEnabled(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
   void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
   void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
   void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, QMarginsF  margins);
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
   QPainterPath  py_q_shape(QGraphicsWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_shape());}
   void showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event);
   void py_q_showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSizeF  size(QGraphicsWidget* theWrappedObject) const;
   QSizeF  py_q_sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   QStyle*  style(QGraphicsWidget* theWrappedObject) const;
   bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
   int  py_q_type(QGraphicsWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_type());}
   void ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_ungrabKeyboardEvent(event));}
   void ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_ungrabMouseEvent(event));}
   void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
   void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
   void py_q_updateGeometry(QGraphicsWidget* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_updateGeometry());}
   Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
   bool  windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e);
   bool  py_q_windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_windowFrameEvent(e));}
   QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
   QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
   Qt::WindowFrameSection  windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const;
   Qt::WindowFrameSection  py_q_windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_windowFrameSectionAt(pos));}
   QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
    bool __nonzero__(QGraphicsWidget* obj) { return !obj->isEmpty(); }
};


