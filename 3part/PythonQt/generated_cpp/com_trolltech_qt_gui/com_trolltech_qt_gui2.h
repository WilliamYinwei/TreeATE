#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QVariant>
#include <QtWidgets/qabstractitemdelegate.h>
#include <QtWidgets/qabstractitemview.h>
#include <QtWidgets/qcompleter.h>
#include <QtWidgets/qfileiconprovider.h>
#include <QtWidgets/qfocusframe.h>
#include <QtWidgets/qfontcombobox.h>
#include <QtWidgets/qfontdialog.h>
#include <QtWidgets/qformlayout.h>
#include <QtWidgets/qframe.h>
#include <QtWidgets/qgesture.h>
#include <QtWidgets/qgesturerecognizer.h>
#include <QtWidgets/qgraphicsanchorlayout.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsgridlayout.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtWidgets/qgraphicslayoutitem.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qgraphicsscene.h>
#include <QtWidgets/qgraphicssceneevent.h>
#include <QtWidgets/qgraphicstransform.h>
#include <QtWidgets/qgraphicswidget.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qlayoutitem.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qstyleoption.h>
#include <QtWidgets/qwidget.h>
#include <qabstractfileiconprovider.h>
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
#include <qdatetime.h>
#include <qdir.h>
#include <qevent.h>
#include <qfile.h>
#include <qfileinfo.h>
#include <qfilesystemmodel.h>
#include <qfont.h>
#include <qfontdatabase.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qfontvariableaxis.h>
#include <qglyphrun.h>
#include <qicon.h>
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
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qtextoption.h>
#include <qthread.h>
#include <qtimezone.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qwindow.h>



class PythonQtShell_QFileIconProvider : public QFileIconProvider
{
public:
    PythonQtShell_QFileIconProvider():QFileIconProvider(),_wrapper(nullptr) {};

   ~PythonQtShell_QFileIconProvider() override;

QIcon  icon(QAbstractFileIconProvider::IconType  type) const override;
QIcon  icon(const QFileInfo&  info) const override;
QAbstractFileIconProvider::Options  options() const override;
void setOptions(QAbstractFileIconProvider::Options  arg__1) override;
QString  type(const QFileInfo&  arg__1) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFileIconProvider : public QFileIconProvider
{ public:
inline QIcon  py_q_icon(QAbstractFileIconProvider::IconType  type) const { return QFileIconProvider::icon(type); }
inline QIcon  py_q_icon(const QFileInfo&  info) const { return QFileIconProvider::icon(info); }
};

class PythonQtWrapper_QFileIconProvider : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFileIconProvider* new_QFileIconProvider();
void delete_QFileIconProvider(QFileIconProvider* obj) { delete obj; }
   QIcon  py_q_icon(QFileIconProvider* theWrappedObject, QAbstractFileIconProvider::IconType  type) const{  return (((PythonQtPublicPromoter_QFileIconProvider*)theWrappedObject)->py_q_icon(type));}
   QIcon  py_q_icon(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const{  return (((PythonQtPublicPromoter_QFileIconProvider*)theWrappedObject)->py_q_icon(info));}
};





class PythonQtShell_QFileOpenEvent : public QFileOpenEvent
{
public:
    PythonQtShell_QFileOpenEvent(const QFileOpenEvent&  arg__1):QFileOpenEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QFileOpenEvent(const QString&  file):QFileOpenEvent(file),_wrapper(nullptr) {};
    PythonQtShell_QFileOpenEvent(const QUrl&  url):QFileOpenEvent(url),_wrapper(nullptr) {};

   ~PythonQtShell_QFileOpenEvent() override;

QFileOpenEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFileOpenEvent : public QFileOpenEvent
{ public:
inline QFileOpenEvent&  promoted_operator_assign(const QFileOpenEvent&  other) { return this->QFileOpenEvent::operator=(other); }
inline QFileOpenEvent*  py_q_clone() const { return QFileOpenEvent::clone(); }
};

class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFileOpenEvent* new_QFileOpenEvent(const QFileOpenEvent&  arg__1);
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
QFileOpenEvent* new_QFileOpenEvent(const QUrl&  url);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; }
   QFileOpenEvent*  py_q_clone(QFileOpenEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileOpenEvent*)theWrappedObject)->py_q_clone());}
   QString  file(QFileOpenEvent* theWrappedObject) const;
   bool  openFile(QFileOpenEvent* theWrappedObject, QFile&  file, QIODevice::OpenMode  flags) const;
   QFileOpenEvent*  operator_assign(QFileOpenEvent* theWrappedObject, const QFileOpenEvent&  other);
   QUrl  url(QFileOpenEvent* theWrappedObject) const;
};





class PythonQtShell_QFileSystemModel : public QFileSystemModel
{
public:
    PythonQtShell_QFileSystemModel(QObject*  parent = nullptr):QFileSystemModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFileSystemModel() override;

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

class PythonQtPublicPromoter_QFileSystemModel : public QFileSystemModel
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent) const { return QFileSystemModel::canFetchMore(parent); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QFileSystemModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QFileSystemModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QFileSystemModel::dropMimeData(data, action, row, column, parent); }
inline bool  py_q_event(QEvent*  event) { return QFileSystemModel::event(event); }
inline void py_q_fetchMore(const QModelIndex&  parent) { QFileSystemModel::fetchMore(parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QFileSystemModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QFileSystemModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QFileSystemModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QFileSystemModel::index(row, column, parent); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QFileSystemModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QFileSystemModel::mimeTypes(); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QFileSystemModel::parent(child); }
inline QHash<int , QByteArray >  py_q_roleNames() const { return QFileSystemModel::roleNames(); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QFileSystemModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QFileSystemModel::setData(index, value, role); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QFileSystemModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QFileSystemModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QFileSystemModel::supportedDropActions(); }
inline void py_q_timerEvent(QTimerEvent*  event) { QFileSystemModel::timerEvent(event); }
};

class PythonQtWrapper_QFileSystemModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Option Roles )
Q_FLAGS(Options )
enum Option{
  DontWatchForChanges = QFileSystemModel::DontWatchForChanges,   DontResolveSymlinks = QFileSystemModel::DontResolveSymlinks,   DontUseCustomDirectoryIcons = QFileSystemModel::DontUseCustomDirectoryIcons};
enum Roles{
  FileIconRole = QFileSystemModel::FileIconRole,   FileInfoRole = QFileSystemModel::FileInfoRole,   FilePathRole = QFileSystemModel::FilePathRole,   FileNameRole = QFileSystemModel::FileNameRole,   FilePermissions = QFileSystemModel::FilePermissions};
Q_DECLARE_FLAGS(Options, Option)
public Q_SLOTS:
QFileSystemModel* new_QFileSystemModel(QObject*  parent = nullptr);
void delete_QFileSystemModel(QFileSystemModel* obj) { delete obj; }
   bool  py_q_canFetchMore(QFileSystemModel* theWrappedObject, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   int  py_q_columnCount(QFileSystemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QFileSystemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QFileSystemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   bool  py_q_event(QFileSystemModel* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_event(event));}
   void py_q_fetchMore(QFileSystemModel* theWrappedObject, const QModelIndex&  parent){  (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_fetchMore(parent));}
   QIcon  fileIcon(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QFileInfo  fileInfo(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QString  fileName(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QString  filePath(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QDir::Filters  filter(QFileSystemModel* theWrappedObject) const;
   Qt::ItemFlags  py_q_flags(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QFileSystemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_hasChildren(parent));}
   QVariant  py_q_headerData(QFileSystemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QAbstractFileIconProvider*  iconProvider(QFileSystemModel* theWrappedObject) const;
   QModelIndex  index(QFileSystemModel* theWrappedObject, const QString&  path, int  column = 0) const;
   QModelIndex  py_q_index(QFileSystemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  isDir(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  isReadOnly(QFileSystemModel* theWrappedObject) const;
   QDateTime  lastModified(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QDateTime  lastModified(QFileSystemModel* theWrappedObject, const QModelIndex&  index, const QTimeZone&  tz) const;
   QMimeData*  py_q_mimeData(QFileSystemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QFileSystemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_mimeTypes());}
   QModelIndex  mkdir(QFileSystemModel* theWrappedObject, const QModelIndex&  parent, const QString&  name);
   QVariant  myComputer(QFileSystemModel* theWrappedObject, int  role = Qt::DisplayRole) const;
   bool  nameFilterDisables(QFileSystemModel* theWrappedObject) const;
   QStringList  nameFilters(QFileSystemModel* theWrappedObject) const;
   QFileSystemModel::Options  options(QFileSystemModel* theWrappedObject) const;
   QModelIndex  py_q_parent(QFileSystemModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_parent(child));}
   QFile::Permissions  permissions(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  remove(QFileSystemModel* theWrappedObject, const QModelIndex&  index);
   bool  resolveSymlinks(QFileSystemModel* theWrappedObject) const;
   bool  rmdir(QFileSystemModel* theWrappedObject, const QModelIndex&  index);
   QHash<int , QByteArray >  py_q_roleNames(QFileSystemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_roleNames());}
   QDir  rootDirectory(QFileSystemModel* theWrappedObject) const;
   QString  rootPath(QFileSystemModel* theWrappedObject) const;
   int  py_q_rowCount(QFileSystemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setData(QFileSystemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_setData(index, value, role));}
   void setFilter(QFileSystemModel* theWrappedObject, QDir::Filters  filters);
   void setIconProvider(QFileSystemModel* theWrappedObject, QAbstractFileIconProvider*  provider);
   void setNameFilterDisables(QFileSystemModel* theWrappedObject, bool  enable);
   void setNameFilters(QFileSystemModel* theWrappedObject, const QStringList&  filters);
   void setOption(QFileSystemModel* theWrappedObject, QFileSystemModel::Option  option, bool  on = true);
   void setOptions(QFileSystemModel* theWrappedObject, QFileSystemModel::Options  options);
   void setReadOnly(QFileSystemModel* theWrappedObject, bool  enable);
   void setResolveSymlinks(QFileSystemModel* theWrappedObject, bool  enable);
   QModelIndex  setRootPath(QFileSystemModel* theWrappedObject, const QString&  path);
   QModelIndex  py_q_sibling(QFileSystemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   qint64  size(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   void py_q_sort(QFileSystemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_sort(column, order));}
   Qt::DropActions  py_q_supportedDropActions(QFileSystemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_supportedDropActions());}
   bool  testOption(QFileSystemModel* theWrappedObject, QFileSystemModel::Option  option) const;
   void py_q_timerEvent(QFileSystemModel* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_timerEvent(event));}
   QString  type(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
};





class PythonQtShell_QFocusEvent : public QFocusEvent
{
public:
    PythonQtShell_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason):QFocusEvent(type, reason),_wrapper(nullptr) {};
    PythonQtShell_QFocusEvent(const QFocusEvent&  arg__1):QFocusEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QFocusEvent() override;

QFocusEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFocusEvent : public QFocusEvent
{ public:
inline QFocusEvent&  promoted_operator_assign(const QFocusEvent&  other) { return this->QFocusEvent::operator=(other); }
inline QFocusEvent*  py_q_clone() const { return QFocusEvent::clone(); }
};

class PythonQtWrapper_QFocusEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFocusEvent* new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason);
QFocusEvent* new_QFocusEvent(const QFocusEvent&  arg__1);
void delete_QFocusEvent(QFocusEvent* obj) { delete obj; }
   QFocusEvent*  py_q_clone(QFocusEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFocusEvent*)theWrappedObject)->py_q_clone());}
   bool  gotFocus(QFocusEvent* theWrappedObject) const;
   bool  lostFocus(QFocusEvent* theWrappedObject) const;
   QFocusEvent*  operator_assign(QFocusEvent* theWrappedObject, const QFocusEvent&  other);
   Qt::FocusReason  reason(QFocusEvent* theWrappedObject) const;
};





class PythonQtShell_QFocusFrame : public QFocusFrame
{
public:
    PythonQtShell_QFocusFrame(QWidget*  parent = nullptr):QFocusFrame(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFocusFrame() override;

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
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOption*  option) const override;
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

class PythonQtPublicPromoter_QFocusFrame : public QFocusFrame
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_initStyleOption(QStyleOption*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QFocusFrame::event(e); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QFocusFrame::eventFilter(arg__1, arg__2); }
inline void py_q_initStyleOption(QStyleOption*  option) const { QFocusFrame::initStyleOption(option); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QFocusFrame::paintEvent(arg__1); }
};

class PythonQtWrapper_QFocusFrame : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFocusFrame* new_QFocusFrame(QWidget*  parent = nullptr);
void delete_QFocusFrame(QFocusFrame* obj) { delete obj; }
   bool  py_q_event(QFocusFrame* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFocusFrame*)theWrappedObject)->py_q_event(e));}
   bool  py_q_eventFilter(QFocusFrame* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QFocusFrame*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   void initStyleOption(QFocusFrame* theWrappedObject, QStyleOption*  option) const;
   void py_q_initStyleOption(QFocusFrame* theWrappedObject, QStyleOption*  option) const{  (((PythonQtPublicPromoter_QFocusFrame*)theWrappedObject)->py_q_initStyleOption(option));}
   void py_q_paintEvent(QFocusFrame* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QFocusFrame*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setWidget(QFocusFrame* theWrappedObject, QWidget*  widget);
   QWidget*  widget(QFocusFrame* theWrappedObject) const;
};





class PythonQtShell_QFontComboBox : public QFontComboBox
{
public:
    PythonQtShell_QFontComboBox(QWidget*  parent = nullptr):QFontComboBox(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFontComboBox() override;

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
bool  event(QEvent*  e) override;
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

class PythonQtPublicPromoter_QFontComboBox : public QFontComboBox
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  py_q_event(QEvent*  e) { return QFontComboBox::event(e); }
inline QSize  py_q_sizeHint() const { return QFontComboBox::sizeHint(); }
};

class PythonQtWrapper_QFontComboBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontFilter )
Q_FLAGS(FontFilters )
enum FontFilter{
  AllFonts = QFontComboBox::AllFonts,   ScalableFonts = QFontComboBox::ScalableFonts,   NonScalableFonts = QFontComboBox::NonScalableFonts,   MonospacedFonts = QFontComboBox::MonospacedFonts,   ProportionalFonts = QFontComboBox::ProportionalFonts};
Q_DECLARE_FLAGS(FontFilters, FontFilter)
public Q_SLOTS:
QFontComboBox* new_QFontComboBox(QWidget*  parent = nullptr);
void delete_QFontComboBox(QFontComboBox* obj) { delete obj; }
   QFont  currentFont(QFontComboBox* theWrappedObject) const;
   bool  py_q_event(QFontComboBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFontComboBox*)theWrappedObject)->py_q_event(e));}
   QFontComboBox::FontFilters  fontFilters(QFontComboBox* theWrappedObject) const;
   QString  sampleTextForFont(QFontComboBox* theWrappedObject, const QString&  fontFamily) const;
   QString  sampleTextForSystem(QFontComboBox* theWrappedObject, QFontDatabase::WritingSystem  writingSystem) const;
   void setDisplayFont(QFontComboBox* theWrappedObject, const QString&  fontFamily, const QFont&  font);
   void setFontFilters(QFontComboBox* theWrappedObject, QFontComboBox::FontFilters  filters);
   void setSampleTextForFont(QFontComboBox* theWrappedObject, const QString&  fontFamily, const QString&  sampleText);
   void setSampleTextForSystem(QFontComboBox* theWrappedObject, QFontDatabase::WritingSystem  writingSystem, const QString&  sampleText);
   void setWritingSystem(QFontComboBox* theWrappedObject, QFontDatabase::WritingSystem  arg__1);
   QSize  py_q_sizeHint(QFontComboBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFontComboBox*)theWrappedObject)->py_q_sizeHint());}
   QFontDatabase::WritingSystem  writingSystem(QFontComboBox* theWrappedObject) const;
};





class PythonQtWrapper_QFontDatabase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SystemFont WritingSystem )
enum SystemFont{
  GeneralFont = QFontDatabase::GeneralFont,   FixedFont = QFontDatabase::FixedFont,   TitleFont = QFontDatabase::TitleFont,   SmallestReadableFont = QFontDatabase::SmallestReadableFont};
enum WritingSystem{
  Any = QFontDatabase::Any,   Latin = QFontDatabase::Latin,   Greek = QFontDatabase::Greek,   Cyrillic = QFontDatabase::Cyrillic,   Armenian = QFontDatabase::Armenian,   Hebrew = QFontDatabase::Hebrew,   Arabic = QFontDatabase::Arabic,   Syriac = QFontDatabase::Syriac,   Thaana = QFontDatabase::Thaana,   Devanagari = QFontDatabase::Devanagari,   Bengali = QFontDatabase::Bengali,   Gurmukhi = QFontDatabase::Gurmukhi,   Gujarati = QFontDatabase::Gujarati,   Oriya = QFontDatabase::Oriya,   Tamil = QFontDatabase::Tamil,   Telugu = QFontDatabase::Telugu,   Kannada = QFontDatabase::Kannada,   Malayalam = QFontDatabase::Malayalam,   Sinhala = QFontDatabase::Sinhala,   Thai = QFontDatabase::Thai,   Lao = QFontDatabase::Lao,   Tibetan = QFontDatabase::Tibetan,   Myanmar = QFontDatabase::Myanmar,   Georgian = QFontDatabase::Georgian,   Khmer = QFontDatabase::Khmer,   SimplifiedChinese = QFontDatabase::SimplifiedChinese,   TraditionalChinese = QFontDatabase::TraditionalChinese,   Japanese = QFontDatabase::Japanese,   Korean = QFontDatabase::Korean,   Vietnamese = QFontDatabase::Vietnamese,   Symbol = QFontDatabase::Symbol,   Other = QFontDatabase::Other,   Ogham = QFontDatabase::Ogham,   Runic = QFontDatabase::Runic,   Nko = QFontDatabase::Nko,   WritingSystemsCount = QFontDatabase::WritingSystemsCount};
public Q_SLOTS:
QFontDatabase* new_QFontDatabase();
QFontDatabase* new_QFontDatabase(const QFontDatabase& other) {
QFontDatabase* a = new QFontDatabase();
*((QFontDatabase*)a) = other;
return a; }
void delete_QFontDatabase(QFontDatabase* obj) { delete obj; }
   void static_QFontDatabase_addApplicationEmojiFontFamily(const QString&  familyName);
   int  static_QFontDatabase_addApplicationFont(const QString&  fileName);
   int  static_QFontDatabase_addApplicationFontFromData(const QByteArray&  fontData);
   QStringList  static_QFontDatabase_applicationEmojiFontFamilies();
   QStringList  static_QFontDatabase_applicationFontFamilies(int  id);
   bool  static_QFontDatabase_bold(const QString&  family, const QString&  style);
   QStringList  static_QFontDatabase_families(QFontDatabase::WritingSystem  writingSystem = QFontDatabase::Any);
   QFont  static_QFontDatabase_font(const QString&  family, const QString&  style, int  pointSize);
   bool  static_QFontDatabase_hasFamily(const QString&  family);
   bool  static_QFontDatabase_isBitmapScalable(const QString&  family, const QString&  style = QString());
   bool  static_QFontDatabase_isFixedPitch(const QString&  family, const QString&  style = QString());
   bool  static_QFontDatabase_isPrivateFamily(const QString&  family);
   bool  static_QFontDatabase_isScalable(const QString&  family, const QString&  style = QString());
   bool  static_QFontDatabase_isSmoothlyScalable(const QString&  family, const QString&  style = QString());
   bool  static_QFontDatabase_italic(const QString&  family, const QString&  style);
   QList<int >  static_QFontDatabase_pointSizes(const QString&  family, const QString&  style = QString());
   bool  static_QFontDatabase_removeAllApplicationFonts();
   bool  static_QFontDatabase_removeApplicationEmojiFontFamily(const QString&  familyName);
   bool  static_QFontDatabase_removeApplicationFont(int  id);
   void static_QFontDatabase_setApplicationEmojiFontFamilies(const QStringList&  familyNames);
   QList<int >  static_QFontDatabase_smoothSizes(const QString&  family, const QString&  style);
   QList<int >  static_QFontDatabase_standardSizes();
   QString  static_QFontDatabase_styleString(const QFont&  font);
   QString  static_QFontDatabase_styleString(const QFontInfo&  fontInfo);
   QStringList  static_QFontDatabase_styles(const QString&  family);
   QFont  static_QFontDatabase_systemFont(QFontDatabase::SystemFont  type);
   int  static_QFontDatabase_weight(const QString&  family, const QString&  style);
   QString  static_QFontDatabase_writingSystemName(QFontDatabase::WritingSystem  writingSystem);
   QString  static_QFontDatabase_writingSystemSample(QFontDatabase::WritingSystem  writingSystem);
   QList<QFontDatabase::WritingSystem >  static_QFontDatabase_writingSystems();
   QList<QFontDatabase::WritingSystem >  static_QFontDatabase_writingSystems(const QString&  family);
};





class PythonQtShell_QFontDialog : public QFontDialog
{
public:
    PythonQtShell_QFontDialog(QWidget*  parent = nullptr):QFontDialog(parent),_wrapper(nullptr) {};
    PythonQtShell_QFontDialog(const QFont&  initial, QWidget*  parent = nullptr):QFontDialog(initial, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFontDialog() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
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
bool  eventFilter(QObject*  object, QEvent*  event) override;
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

class PythonQtPublicPromoter_QFontDialog : public QFontDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_done(int  result) { this->done(result); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void py_q_changeEvent(QEvent*  event) { QFontDialog::changeEvent(event); }
inline void py_q_done(int  result) { QFontDialog::done(result); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QFontDialog::eventFilter(object, event); }
inline void py_q_setVisible(bool  visible) { QFontDialog::setVisible(visible); }
};

class PythonQtWrapper_QFontDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontDialogOption )
Q_FLAGS(FontDialogOptions )
enum FontDialogOption{
  NoButtons = QFontDialog::NoButtons,   DontUseNativeDialog = QFontDialog::DontUseNativeDialog,   ScalableFonts = QFontDialog::ScalableFonts,   NonScalableFonts = QFontDialog::NonScalableFonts,   MonospacedFonts = QFontDialog::MonospacedFonts,   ProportionalFonts = QFontDialog::ProportionalFonts};
Q_DECLARE_FLAGS(FontDialogOptions, FontDialogOption)
public Q_SLOTS:
QFontDialog* new_QFontDialog(QWidget*  parent = nullptr);
QFontDialog* new_QFontDialog(const QFont&  initial, QWidget*  parent = nullptr);
void delete_QFontDialog(QFontDialog* obj) { delete obj; }
   void py_q_changeEvent(QFontDialog* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QFontDialog*)theWrappedObject)->py_q_changeEvent(event));}
   QFont  currentFont(QFontDialog* theWrappedObject) const;
   void py_q_done(QFontDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QFontDialog*)theWrappedObject)->py_q_done(result));}
   bool  py_q_eventFilter(QFontDialog* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QFontDialog*)theWrappedObject)->py_q_eventFilter(object, event));}
   QFont  static_QFontDialog_getFont(bool*  ok, QWidget*  parent = nullptr);
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  initial, QWidget*  parent = nullptr, const QString&  title = QString(), QFontDialog::FontDialogOptions  options = QFontDialog::FontDialogOptions());
   void open(QFontDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QFontDialog::FontDialogOptions  options(QFontDialog* theWrappedObject) const;
   QFont  selectedFont(QFontDialog* theWrappedObject) const;
   void setCurrentFont(QFontDialog* theWrappedObject, const QFont&  font);
   void setOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option, bool  on = true);
   void setOptions(QFontDialog* theWrappedObject, QFontDialog::FontDialogOptions  options);
   void py_q_setVisible(QFontDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QFontDialog*)theWrappedObject)->py_q_setVisible(visible));}
   bool  testOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option) const;
};





class PythonQtWrapper_QFontInfo : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFontInfo* new_QFontInfo(const QFont&  arg__1);
QFontInfo* new_QFontInfo(const QFontInfo&  arg__1);
void delete_QFontInfo(QFontInfo* obj) { delete obj; }
   bool  bold(QFontInfo* theWrappedObject) const;
   bool  exactMatch(QFontInfo* theWrappedObject) const;
   QString  family(QFontInfo* theWrappedObject) const;
   bool  fixedPitch(QFontInfo* theWrappedObject) const;
   bool  italic(QFontInfo* theWrappedObject) const;
   int  legacyWeight(QFontInfo* theWrappedObject) const;
   bool  overline(QFontInfo* theWrappedObject) const;
   int  pixelSize(QFontInfo* theWrappedObject) const;
   int  pointSize(QFontInfo* theWrappedObject) const;
   qreal  pointSizeF(QFontInfo* theWrappedObject) const;
   bool  strikeOut(QFontInfo* theWrappedObject) const;
   QFont::Style  style(QFontInfo* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFontInfo* theWrappedObject) const;
   QString  styleName(QFontInfo* theWrappedObject) const;
   void swap(QFontInfo* theWrappedObject, QFontInfo&  other);
   bool  underline(QFontInfo* theWrappedObject) const;
   QList<QFontVariableAxis >  variableAxes(QFontInfo* theWrappedObject) const;
   int  weight(QFontInfo* theWrappedObject) const;

   QFontInfo* new_QFontInfo() { return new QFontInfo(QFont()); }
   
};





class PythonQtWrapper_QFontMetrics : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFontMetrics* new_QFontMetrics(const QFont&  arg__1);
QFontMetrics* new_QFontMetrics(const QFont&  font, const QPaintDevice*  pd);
QFontMetrics* new_QFontMetrics(const QFontMetrics&  arg__1);
void delete_QFontMetrics(QFontMetrics* obj) { delete obj; }
   int  ascent(QFontMetrics* theWrappedObject) const;
   int  averageCharWidth(QFontMetrics* theWrappedObject) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QRect&  r, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = nullptr) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QString&  text, const QTextOption&  textOption) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = nullptr) const;
   int  capHeight(QFontMetrics* theWrappedObject) const;
   int  descent(QFontMetrics* theWrappedObject) const;
   QString  elidedText(QFontMetrics* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, int  width, int  flags = 0) const;
   qreal  fontDpi(QFontMetrics* theWrappedObject) const;
   int  height(QFontMetrics* theWrappedObject) const;
   int  horizontalAdvance(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  horizontalAdvance(QFontMetrics* theWrappedObject, const QString&  arg__1, const QTextOption&  textOption) const;
   int  horizontalAdvance(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len = -1) const;
   bool  inFont(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   bool  inFontUcs4(QFontMetrics* theWrappedObject, uint  ucs4) const;
   int  leading(QFontMetrics* theWrappedObject) const;
   int  leftBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  lineSpacing(QFontMetrics* theWrappedObject) const;
   int  lineWidth(QFontMetrics* theWrappedObject) const;
   int  maxWidth(QFontMetrics* theWrappedObject) const;
   int  minLeftBearing(QFontMetrics* theWrappedObject) const;
   int  minRightBearing(QFontMetrics* theWrappedObject) const;
   int  overlinePos(QFontMetrics* theWrappedObject) const;
   int  rightBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   QSize  size(QFontMetrics* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = nullptr) const;
   int  strikeOutPos(QFontMetrics* theWrappedObject) const;
   void swap(QFontMetrics* theWrappedObject, QFontMetrics&  other);
   QRect  tightBoundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
   QRect  tightBoundingRect(QFontMetrics* theWrappedObject, const QString&  text, const QTextOption&  textOption) const;
   int  underlinePos(QFontMetrics* theWrappedObject) const;
   int  xHeight(QFontMetrics* theWrappedObject) const;

   QFontMetrics* new_QFontMetrics() { return new QFontMetrics(QFont()); }
   
};





class PythonQtWrapper_QFontMetricsF : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFontMetricsF* new_QFontMetricsF(const QFont&  font);
QFontMetricsF* new_QFontMetricsF(const QFont&  font, const QPaintDevice*  pd);
void delete_QFontMetricsF(QFontMetricsF* obj) { delete obj; }
   qreal  ascent(QFontMetricsF* theWrappedObject) const;
   qreal  averageCharWidth(QFontMetricsF* theWrappedObject) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QRectF&  r, int  flags, const QString&  string, int  tabstops = 0, int*  tabarray = nullptr) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QString&  string) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QString&  text, const QTextOption&  textOption) const;
   qreal  capHeight(QFontMetricsF* theWrappedObject) const;
   qreal  descent(QFontMetricsF* theWrappedObject) const;
   QString  elidedText(QFontMetricsF* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, qreal  width, int  flags = 0) const;
   qreal  fontDpi(QFontMetricsF* theWrappedObject) const;
   qreal  height(QFontMetricsF* theWrappedObject) const;
   qreal  horizontalAdvance(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  horizontalAdvance(QFontMetricsF* theWrappedObject, const QString&  string, const QTextOption&  textOption) const;
   qreal  horizontalAdvance(QFontMetricsF* theWrappedObject, const QString&  string, int  length = -1) const;
   bool  inFont(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   bool  inFontUcs4(QFontMetricsF* theWrappedObject, uint  ucs4) const;
   qreal  leading(QFontMetricsF* theWrappedObject) const;
   qreal  leftBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  lineSpacing(QFontMetricsF* theWrappedObject) const;
   qreal  lineWidth(QFontMetricsF* theWrappedObject) const;
   qreal  maxWidth(QFontMetricsF* theWrappedObject) const;
   qreal  minLeftBearing(QFontMetricsF* theWrappedObject) const;
   qreal  minRightBearing(QFontMetricsF* theWrappedObject) const;
   qreal  overlinePos(QFontMetricsF* theWrappedObject) const;
   qreal  rightBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   QSizeF  size(QFontMetricsF* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = nullptr) const;
   qreal  strikeOutPos(QFontMetricsF* theWrappedObject) const;
   void swap(QFontMetricsF* theWrappedObject, QFontMetricsF&  other);
   QRectF  tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text) const;
   QRectF  tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text, const QTextOption&  textOption) const;
   qreal  underlinePos(QFontMetricsF* theWrappedObject) const;
   qreal  xHeight(QFontMetricsF* theWrappedObject) const;
};





class PythonQtWrapper_QFontVariableAxis : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFontVariableAxis* new_QFontVariableAxis();
QFontVariableAxis* new_QFontVariableAxis(const QFontVariableAxis&  axis);
void delete_QFontVariableAxis(QFontVariableAxis* obj) { delete obj; }
   qreal  defaultValue(QFontVariableAxis* theWrappedObject) const;
   qreal  maximumValue(QFontVariableAxis* theWrappedObject) const;
   qreal  minimumValue(QFontVariableAxis* theWrappedObject) const;
   QString  name(QFontVariableAxis* theWrappedObject) const;
   QFontVariableAxis*  operator_assign(QFontVariableAxis* theWrappedObject, const QFontVariableAxis&  axis);
   void setDefaultValue(QFontVariableAxis* theWrappedObject, qreal  defaultValue);
   void setMaximumValue(QFontVariableAxis* theWrappedObject, qreal  maximumValue);
   void setMinimumValue(QFontVariableAxis* theWrappedObject, qreal  minimumValue);
   void setName(QFontVariableAxis* theWrappedObject, const QString&  name);
   void setTag(QFontVariableAxis* theWrappedObject, QFont::Tag  tag);
   void swap(QFontVariableAxis* theWrappedObject, QFontVariableAxis&  other);
   QFont::Tag  tag(QFontVariableAxis* theWrappedObject) const;
    QString py_toString(QFontVariableAxis*);
};





class PythonQtWrapper_QFont__Tag : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFont::Tag* new_QFont__Tag();
QFont::Tag* new_QFont__Tag(const QFont::Tag& other) {
QFont::Tag* a = new QFont::Tag();
*((QFont::Tag*)a) = other;
return a; }
void delete_QFont__Tag(QFont::Tag* obj) { delete obj; }
   bool  isValid(QFont::Tag* theWrappedObject) const;
   bool  __ne__(QFont::Tag* theWrappedObject, const QFont::Tag&  rhs);
   bool  __lt__(QFont::Tag* theWrappedObject, const QFont::Tag&  rhs);
   void writeTo(QFont::Tag* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QFont::Tag* theWrappedObject, const QFont::Tag&  rhs);
   bool  __eq__(QFont::Tag* theWrappedObject, const QFont::Tag&  rhs);
   bool  __gt__(QFont::Tag* theWrappedObject, const QFont::Tag&  rhs);
   bool  __ge__(QFont::Tag* theWrappedObject, const QFont::Tag&  rhs);
   void readFrom(QFont::Tag* theWrappedObject, QDataStream&  arg__1);
   QByteArray  toString(QFont::Tag* theWrappedObject) const;
   unsigned int  value(QFont::Tag* theWrappedObject) const;
    QString py_toString(QFont::Tag*);
    bool __nonzero__(QFont::Tag* obj) { return obj->isValid(); }

    // a little bit complicated, since we currently dont't support std::optional:
    QFont::Tag static_QFont__Tag_fromString(const QString& name) {
      return QFont::Tag::fromString(name).value_or(QFont::Tag());
    }
    QFont::Tag static_QFont__Tag_fromValue(unsigned int key) {
      return QFont::Tag::fromValue(key).value_or(QFont::Tag());
    }
    // basically the same as above:
    QFont::Tag* new_QFont__Tag(const QString& name) {
      return new QFont::Tag(static_QFont__Tag_fromString(name));
    }
    QFont::Tag* new_QFont__Tag(unsigned int key) {
      return new QFont::Tag(static_QFont__Tag_fromValue(key));
    }
    
};





class PythonQtShell_QFormLayout : public QFormLayout
{
public:
    PythonQtShell_QFormLayout(QWidget*  parent = nullptr):QFormLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFormLayout() override;

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
QLayoutItem*  itemAt(int  index) const override;
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
QLayoutItem*  takeAt(int  index) override;
void timerEvent(QTimerEvent*  event) override;
QWidget*  widget() const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFormLayout : public QFormLayout
{ public:
inline void py_q_addItem(QLayoutItem*  item) { QFormLayout::addItem(item); }
inline int  py_q_count() const { return QFormLayout::count(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QFormLayout::expandingDirections(); }
inline bool  py_q_hasHeightForWidth() const { return QFormLayout::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  width) const { return QFormLayout::heightForWidth(width); }
inline void py_q_invalidate() { QFormLayout::invalidate(); }
inline QLayoutItem*  py_q_itemAt(int  index) const { return QFormLayout::itemAt(index); }
inline QSize  py_q_minimumSize() const { return QFormLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  rect) { QFormLayout::setGeometry(rect); }
inline void py_q_setSpacing(int  arg__1) { QFormLayout::setSpacing(arg__1); }
inline QSize  py_q_sizeHint() const { return QFormLayout::sizeHint(); }
inline int  py_q_spacing() const { return QFormLayout::spacing(); }
inline QLayoutItem*  py_q_takeAt(int  index) { return QFormLayout::takeAt(index); }
};

class PythonQtWrapper_QFormLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFormLayout* new_QFormLayout(QWidget*  parent = nullptr);
void delete_QFormLayout(QFormLayout* obj) { delete obj; }
   void py_q_addItem(QFormLayout* theWrappedObject, QLayoutItem*  item){  (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_addItem(item));}
   void addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  layout);
   void addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QLayout* >  field);
   void addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QWidget* >  field);
   void addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, PythonQtPassOwnershipToCPP<QLayout* >  field);
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, PythonQtPassOwnershipToCPP<QWidget* >  field);
   int  py_q_count(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_count());}
   Qt::Orientations  py_q_expandingDirections(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_expandingDirections());}
   QFormLayout::FieldGrowthPolicy  fieldGrowthPolicy(QFormLayout* theWrappedObject) const;
   Qt::Alignment  formAlignment(QFormLayout* theWrappedObject) const;
   void getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   void getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   void getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   bool  py_q_hasHeightForWidth(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QFormLayout* theWrappedObject, int  width) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_heightForWidth(width));}
   int  horizontalSpacing(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QLayout* >  layout);
   void insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QLayout* >  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QWidget* >  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, PythonQtPassOwnershipToCPP<QLayout* >  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, PythonQtPassOwnershipToCPP<QWidget* >  field);
   void py_q_invalidate(QFormLayout* theWrappedObject){  (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_invalidate());}
   bool  isRowVisible(QFormLayout* theWrappedObject, QLayout*  layout) const;
   bool  isRowVisible(QFormLayout* theWrappedObject, QWidget*  widget) const;
   bool  isRowVisible(QFormLayout* theWrappedObject, int  row) const;
   QLayoutItem*  py_q_itemAt(QFormLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_itemAt(index));}
   QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const;
   Qt::Alignment  labelAlignment(QFormLayout* theWrappedObject) const;
   QWidget*  labelForField(QFormLayout* theWrappedObject, QLayout*  field) const;
   QWidget*  labelForField(QFormLayout* theWrappedObject, QWidget*  field) const;
   QSize  py_q_minimumSize(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_minimumSize());}
   void removeRow(QFormLayout* theWrappedObject, QLayout*  layout);
   void removeRow(QFormLayout* theWrappedObject, QWidget*  widget);
   void removeRow(QFormLayout* theWrappedObject, int  row);
   int  rowCount(QFormLayout* theWrappedObject) const;
   QFormLayout::RowWrapPolicy  rowWrapPolicy(QFormLayout* theWrappedObject) const;
   void setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy);
   void setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void py_q_setGeometry(QFormLayout* theWrappedObject, const QRect&  rect){  (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QLayoutItem* >  item);
   void setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QLayout* >  layout);
   void setRowVisible(QFormLayout* theWrappedObject, QLayout*  layout, bool  on);
   void setRowVisible(QFormLayout* theWrappedObject, QWidget*  widget, bool  on);
   void setRowVisible(QFormLayout* theWrappedObject, int  row, bool  on);
   void setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy);
   void py_q_setSpacing(QFormLayout* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_setSpacing(arg__1));}
   void setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   QSize  py_q_sizeHint(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_sizeHint());}
   int  py_q_spacing(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_spacing());}
   QLayoutItem*  py_q_takeAt(QFormLayout* theWrappedObject, int  index){  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_takeAt(index));}
   QFormLayout::TakeRowResult  takeRow(QFormLayout* theWrappedObject, QLayout*  layout);
   QFormLayout::TakeRowResult  takeRow(QFormLayout* theWrappedObject, QWidget*  widget);
   QFormLayout::TakeRowResult  takeRow(QFormLayout* theWrappedObject, int  row);
   int  verticalSpacing(QFormLayout* theWrappedObject) const;
    bool __nonzero__(QFormLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QFormLayout__TakeRowResult : public QFormLayout::TakeRowResult
{
public:
    PythonQtShell_QFormLayout__TakeRowResult():QFormLayout::TakeRowResult(),_wrapper(nullptr) {};

   ~PythonQtShell_QFormLayout__TakeRowResult();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QFormLayout__TakeRowResult : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QFormLayout::TakeRowResult* new_QFormLayout__TakeRowResult();
QFormLayout::TakeRowResult* new_QFormLayout__TakeRowResult(const QFormLayout::TakeRowResult& other) {
PythonQtShell_QFormLayout__TakeRowResult* a = new PythonQtShell_QFormLayout__TakeRowResult();
*((QFormLayout::TakeRowResult*)a) = other;
return a; }
void delete_QFormLayout__TakeRowResult(QFormLayout::TakeRowResult* obj) { delete obj; }
void py_set_fieldItem(QFormLayout::TakeRowResult* theWrappedObject, QLayoutItem*  fieldItem){ theWrappedObject->fieldItem = fieldItem; }
QLayoutItem*  py_get_fieldItem(QFormLayout::TakeRowResult* theWrappedObject){ return theWrappedObject->fieldItem; }
void py_set_labelItem(QFormLayout::TakeRowResult* theWrappedObject, QLayoutItem*  labelItem){ theWrappedObject->labelItem = labelItem; }
QLayoutItem*  py_get_labelItem(QFormLayout::TakeRowResult* theWrappedObject){ return theWrappedObject->labelItem; }
};





class PythonQtShell_QFrame : public QFrame
{
public:
    PythonQtShell_QFrame(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QFrame(parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QFrame() override;

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

class PythonQtPublicPromoter_QFrame : public QFrame
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_drawFrame(QPainter*  arg__1) { this->drawFrame(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initStyleOption(QStyleOptionFrame*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QFrame::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QFrame::event(e); }
inline void py_q_initStyleOption(QStyleOptionFrame*  option) const { QFrame::initStyleOption(option); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QFrame::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QFrame::sizeHint(); }
};

class PythonQtWrapper_QFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleMask )
enum StyleMask{
  Shadow_Mask = QFrame::Shadow_Mask,   Shape_Mask = QFrame::Shape_Mask};
public Q_SLOTS:
QFrame* new_QFrame(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QFrame(QFrame* obj) { delete obj; }
   void py_q_changeEvent(QFrame* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void drawFrame(QFrame* theWrappedObject, QPainter*  arg__1);
   bool  py_q_event(QFrame* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_event(e));}
   QRect  frameRect(QFrame* theWrappedObject) const;
   QFrame::Shadow  frameShadow(QFrame* theWrappedObject) const;
   QFrame::Shape  frameShape(QFrame* theWrappedObject) const;
   int  frameStyle(QFrame* theWrappedObject) const;
   int  frameWidth(QFrame* theWrappedObject) const;
   void initStyleOption(QFrame* theWrappedObject, QStyleOptionFrame*  option) const;
   void py_q_initStyleOption(QFrame* theWrappedObject, QStyleOptionFrame*  option) const{  (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_initStyleOption(option));}
   int  lineWidth(QFrame* theWrappedObject) const;
   int  midLineWidth(QFrame* theWrappedObject) const;
   void py_q_paintEvent(QFrame* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setFrameRect(QFrame* theWrappedObject, const QRect&  arg__1);
   void setFrameShadow(QFrame* theWrappedObject, QFrame::Shadow  arg__1);
   void setFrameShape(QFrame* theWrappedObject, QFrame::Shape  arg__1);
   void setFrameStyle(QFrame* theWrappedObject, int  arg__1);
   void setLineWidth(QFrame* theWrappedObject, int  arg__1);
   void setMidLineWidth(QFrame* theWrappedObject, int  arg__1);
   QSize  py_q_sizeHint(QFrame* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QGesture : public QGesture
{
public:
    PythonQtShell_QGesture(QObject*  parent = nullptr):QGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(GestureCancelPolicy )
enum GestureCancelPolicy{
  CancelNone = QGesture::CancelNone,   CancelAllInContext = QGesture::CancelAllInContext};
public Q_SLOTS:
QGesture* new_QGesture(QObject*  parent = nullptr);
void delete_QGesture(QGesture* obj) { delete obj; }
   QGesture::GestureCancelPolicy  gestureCancelPolicy(QGesture* theWrappedObject) const;
   Qt::GestureType  gestureType(QGesture* theWrappedObject) const;
   bool  hasHotSpot(QGesture* theWrappedObject) const;
   QPointF  hotSpot(QGesture* theWrappedObject) const;
   void setGestureCancelPolicy(QGesture* theWrappedObject, QGesture::GestureCancelPolicy  policy);
   void setHotSpot(QGesture* theWrappedObject, const QPointF&  value);
   Qt::GestureState  state(QGesture* theWrappedObject) const;
   void unsetHotSpot(QGesture* theWrappedObject);
    QString py_toString(QGesture*);
};





class PythonQtShell_QGestureEvent : public QGestureEvent
{
public:
    PythonQtShell_QGestureEvent(const QList<QGesture* >&  gestures):QGestureEvent(gestures),_wrapper(nullptr) {};

   ~PythonQtShell_QGestureEvent() override;

QEvent*  clone() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QGestureEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGestureEvent* new_QGestureEvent(const QList<QGesture* >&  gestures);
void delete_QGestureEvent(QGestureEvent* obj) { delete obj; }
   void accept(QGestureEvent* theWrappedObject, QGesture*  arg__1);
   void accept(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1);
   QList<QGesture* >  activeGestures(QGestureEvent* theWrappedObject) const;
   QList<QGesture* >  canceledGestures(QGestureEvent* theWrappedObject) const;
   QGesture*  gesture(QGestureEvent* theWrappedObject, Qt::GestureType  type) const;
   QList<QGesture* >  gestures(QGestureEvent* theWrappedObject) const;
   void ignore(QGestureEvent* theWrappedObject, QGesture*  arg__1);
   void ignore(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1);
   bool  isAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1) const;
   bool  isAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1) const;
   QPointF  mapToGraphicsScene(QGestureEvent* theWrappedObject, const QPointF&  gesturePoint) const;
   void setAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1, bool  arg__2);
   void setAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1, bool  arg__2);
   void setWidget(QGestureEvent* theWrappedObject, QWidget*  widget);
   QWidget*  widget(QGestureEvent* theWrappedObject) const;
    QString py_toString(QGestureEvent*);
};





class PythonQtShell_QGestureRecognizer : public QGestureRecognizer
{
public:
    PythonQtShell_QGestureRecognizer():QGestureRecognizer(),_wrapper(nullptr) {};

   ~PythonQtShell_QGestureRecognizer() override;

QGesture*  create(QObject*  target) override;
QGestureRecognizer::Result  recognize(QGesture*  state, QObject*  watched, QEvent*  event) override;
void reset(QGesture*  state) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGestureRecognizer : public QGestureRecognizer
{ public:
inline QGesture*  py_q_create(QObject*  target) { return QGestureRecognizer::create(target); }
inline QGestureRecognizer::Result  py_q_recognize(QGesture*  state, QObject*  watched, QEvent*  event) { return this->recognize(state, watched, event); }
inline void py_q_reset(QGesture*  state) { QGestureRecognizer::reset(state); }
};

class PythonQtWrapper_QGestureRecognizer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ResultFlag )
Q_FLAGS(Result )
enum ResultFlag{
  Ignore = QGestureRecognizer::Ignore,   MayBeGesture = QGestureRecognizer::MayBeGesture,   TriggerGesture = QGestureRecognizer::TriggerGesture,   FinishGesture = QGestureRecognizer::FinishGesture,   CancelGesture = QGestureRecognizer::CancelGesture,   ResultState_Mask = QGestureRecognizer::ResultState_Mask,   ConsumeEventHint = QGestureRecognizer::ConsumeEventHint,   ResultHint_Mask = QGestureRecognizer::ResultHint_Mask};
Q_DECLARE_FLAGS(Result, ResultFlag)
public Q_SLOTS:
QGestureRecognizer* new_QGestureRecognizer();
void delete_QGestureRecognizer(QGestureRecognizer* obj) { delete obj; }
   QGesture*  create(QGestureRecognizer* theWrappedObject, QObject*  target);
   QGesture*  py_q_create(QGestureRecognizer* theWrappedObject, QObject*  target){  return (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_create(target));}
   QGestureRecognizer::Result  recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event);
   QGestureRecognizer::Result  py_q_recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_recognize(state, watched, event));}
   Qt::GestureType  static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*  recognizer);
   void reset(QGestureRecognizer* theWrappedObject, QGesture*  state);
   void py_q_reset(QGestureRecognizer* theWrappedObject, QGesture*  state){  (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_reset(state));}
   void static_QGestureRecognizer_unregisterRecognizer(Qt::GestureType  type);
};





class PythonQtWrapper_QGlyphRun : public QObject
{ Q_OBJECT
public:
Q_ENUMS(GlyphRunFlag )
Q_FLAGS(GlyphRunFlags )
enum GlyphRunFlag{
  Overline = QGlyphRun::Overline,   Underline = QGlyphRun::Underline,   StrikeOut = QGlyphRun::StrikeOut,   RightToLeft = QGlyphRun::RightToLeft,   SplitLigature = QGlyphRun::SplitLigature};
Q_DECLARE_FLAGS(GlyphRunFlags, GlyphRunFlag)
public Q_SLOTS:
QGlyphRun* new_QGlyphRun();
QGlyphRun* new_QGlyphRun(const QGlyphRun&  other);
void delete_QGlyphRun(QGlyphRun* obj) { delete obj; }
   QRectF  boundingRect(QGlyphRun* theWrappedObject) const;
   void clear(QGlyphRun* theWrappedObject);
   QGlyphRun::GlyphRunFlags  flags(QGlyphRun* theWrappedObject) const;
   QList<unsigned int >  glyphIndexes(QGlyphRun* theWrappedObject) const;
   bool  isEmpty(QGlyphRun* theWrappedObject) const;
   bool  isRightToLeft(QGlyphRun* theWrappedObject) const;
   bool  __ne__(QGlyphRun* theWrappedObject, const QGlyphRun&  other) const;
   QGlyphRun*  operator_assign(QGlyphRun* theWrappedObject, const QGlyphRun&  other);
   bool  __eq__(QGlyphRun* theWrappedObject, const QGlyphRun&  other) const;
   bool  overline(QGlyphRun* theWrappedObject) const;
   QList<QPointF >  positions(QGlyphRun* theWrappedObject) const;
   QRawFont  rawFont(QGlyphRun* theWrappedObject) const;
   void setBoundingRect(QGlyphRun* theWrappedObject, const QRectF&  boundingRect);
   void setFlag(QGlyphRun* theWrappedObject, QGlyphRun::GlyphRunFlag  flag, bool  enabled = true);
   void setFlags(QGlyphRun* theWrappedObject, QGlyphRun::GlyphRunFlags  flags);
   void setGlyphIndexes(QGlyphRun* theWrappedObject, const QList<unsigned int >&  glyphIndexes);
   void setOverline(QGlyphRun* theWrappedObject, bool  overline);
   void setPositions(QGlyphRun* theWrappedObject, const QList<QPointF >&  positions);
   void setRawData(QGlyphRun* theWrappedObject, const unsigned int*  glyphIndexArray, const QPointF*  glyphPositionArray, int  size);
   void setRawFont(QGlyphRun* theWrappedObject, const QRawFont&  rawFont);
   void setRightToLeft(QGlyphRun* theWrappedObject, bool  on);
   void setSourceString(QGlyphRun* theWrappedObject, const QString&  sourceString);
   void setStrikeOut(QGlyphRun* theWrappedObject, bool  strikeOut);
   void setStringIndexes(QGlyphRun* theWrappedObject, const QList<qsizetype >&  stringIndexes);
   void setUnderline(QGlyphRun* theWrappedObject, bool  underline);
   QString  sourceString(QGlyphRun* theWrappedObject) const;
   bool  strikeOut(QGlyphRun* theWrappedObject) const;
   QList<qsizetype >  stringIndexes(QGlyphRun* theWrappedObject) const;
   void swap(QGlyphRun* theWrappedObject, QGlyphRun&  other);
   bool  underline(QGlyphRun* theWrappedObject) const;
    bool __nonzero__(QGlyphRun* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QGradient : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CoordinateMode Preset Spread Type )
enum CoordinateMode{
  LogicalMode = QGradient::LogicalMode,   StretchToDeviceMode = QGradient::StretchToDeviceMode,   ObjectBoundingMode = QGradient::ObjectBoundingMode,   ObjectMode = QGradient::ObjectMode};
enum Preset{
  WarmFlame = QGradient::WarmFlame,   NightFade = QGradient::NightFade,   SpringWarmth = QGradient::SpringWarmth,   JuicyPeach = QGradient::JuicyPeach,   YoungPassion = QGradient::YoungPassion,   LadyLips = QGradient::LadyLips,   SunnyMorning = QGradient::SunnyMorning,   RainyAshville = QGradient::RainyAshville,   FrozenDreams = QGradient::FrozenDreams,   WinterNeva = QGradient::WinterNeva,   DustyGrass = QGradient::DustyGrass,   TemptingAzure = QGradient::TemptingAzure,   HeavyRain = QGradient::HeavyRain,   AmyCrisp = QGradient::AmyCrisp,   MeanFruit = QGradient::MeanFruit,   DeepBlue = QGradient::DeepBlue,   RipeMalinka = QGradient::RipeMalinka,   CloudyKnoxville = QGradient::CloudyKnoxville,   MalibuBeach = QGradient::MalibuBeach,   NewLife = QGradient::NewLife,   TrueSunset = QGradient::TrueSunset,   MorpheusDen = QGradient::MorpheusDen,   RareWind = QGradient::RareWind,   NearMoon = QGradient::NearMoon,   WildApple = QGradient::WildApple,   SaintPetersburg = QGradient::SaintPetersburg,   PlumPlate = QGradient::PlumPlate,   EverlastingSky = QGradient::EverlastingSky,   HappyFisher = QGradient::HappyFisher,   Blessing = QGradient::Blessing,   SharpeyeEagle = QGradient::SharpeyeEagle,   LadogaBottom = QGradient::LadogaBottom,   LemonGate = QGradient::LemonGate,   ItmeoBranding = QGradient::ItmeoBranding,   ZeusMiracle = QGradient::ZeusMiracle,   OldHat = QGradient::OldHat,   StarWine = QGradient::StarWine,   HappyAcid = QGradient::HappyAcid,   AwesomePine = QGradient::AwesomePine,   NewYork = QGradient::NewYork,   ShyRainbow = QGradient::ShyRainbow,   MixedHopes = QGradient::MixedHopes,   FlyHigh = QGradient::FlyHigh,   StrongBliss = QGradient::StrongBliss,   FreshMilk = QGradient::FreshMilk,   SnowAgain = QGradient::SnowAgain,   FebruaryInk = QGradient::FebruaryInk,   KindSteel = QGradient::KindSteel,   SoftGrass = QGradient::SoftGrass,   GrownEarly = QGradient::GrownEarly,   SharpBlues = QGradient::SharpBlues,   ShadyWater = QGradient::ShadyWater,   DirtyBeauty = QGradient::DirtyBeauty,   GreatWhale = QGradient::GreatWhale,   TeenNotebook = QGradient::TeenNotebook,   PoliteRumors = QGradient::PoliteRumors,   SweetPeriod = QGradient::SweetPeriod,   WideMatrix = QGradient::WideMatrix,   SoftCherish = QGradient::SoftCherish,   RedSalvation = QGradient::RedSalvation,   BurningSpring = QGradient::BurningSpring,   NightParty = QGradient::NightParty,   SkyGlider = QGradient::SkyGlider,   HeavenPeach = QGradient::HeavenPeach,   PurpleDivision = QGradient::PurpleDivision,   AquaSplash = QGradient::AquaSplash,   SpikyNaga = QGradient::SpikyNaga,   LoveKiss = QGradient::LoveKiss,   CleanMirror = QGradient::CleanMirror,   PremiumDark = QGradient::PremiumDark,   ColdEvening = QGradient::ColdEvening,   CochitiLake = QGradient::CochitiLake,   SummerGames = QGradient::SummerGames,   PassionateBed = QGradient::PassionateBed,   MountainRock = QGradient::MountainRock,   DesertHump = QGradient::DesertHump,   JungleDay = QGradient::JungleDay,   PhoenixStart = QGradient::PhoenixStart,   OctoberSilence = QGradient::OctoberSilence,   FarawayRiver = QGradient::FarawayRiver,   AlchemistLab = QGradient::AlchemistLab,   OverSun = QGradient::OverSun,   PremiumWhite = QGradient::PremiumWhite,   MarsParty = QGradient::MarsParty,   EternalConstance = QGradient::EternalConstance,   JapanBlush = QGradient::JapanBlush,   SmilingRain = QGradient::SmilingRain,   CloudyApple = QGradient::CloudyApple,   BigMango = QGradient::BigMango,   HealthyWater = QGradient::HealthyWater,   AmourAmour = QGradient::AmourAmour,   RiskyConcrete = QGradient::RiskyConcrete,   StrongStick = QGradient::StrongStick,   ViciousStance = QGradient::ViciousStance,   PaloAlto = QGradient::PaloAlto,   HappyMemories = QGradient::HappyMemories,   MidnightBloom = QGradient::MidnightBloom,   Crystalline = QGradient::Crystalline,   PartyBliss = QGradient::PartyBliss,   ConfidentCloud = QGradient::ConfidentCloud,   LeCocktail = QGradient::LeCocktail,   RiverCity = QGradient::RiverCity,   FrozenBerry = QGradient::FrozenBerry,   ChildCare = QGradient::ChildCare,   FlyingLemon = QGradient::FlyingLemon,   NewRetrowave = QGradient::NewRetrowave,   HiddenJaguar = QGradient::HiddenJaguar,   AboveTheSky = QGradient::AboveTheSky,   Nega = QGradient::Nega,   DenseWater = QGradient::DenseWater,   Seashore = QGradient::Seashore,   MarbleWall = QGradient::MarbleWall,   CheerfulCaramel = QGradient::CheerfulCaramel,   NightSky = QGradient::NightSky,   MagicLake = QGradient::MagicLake,   YoungGrass = QGradient::YoungGrass,   ColorfulPeach = QGradient::ColorfulPeach,   GentleCare = QGradient::GentleCare,   PlumBath = QGradient::PlumBath,   HappyUnicorn = QGradient::HappyUnicorn,   AfricanField = QGradient::AfricanField,   SolidStone = QGradient::SolidStone,   OrangeJuice = QGradient::OrangeJuice,   GlassWater = QGradient::GlassWater,   NorthMiracle = QGradient::NorthMiracle,   FruitBlend = QGradient::FruitBlend,   MillenniumPine = QGradient::MillenniumPine,   HighFlight = QGradient::HighFlight,   MoleHall = QGradient::MoleHall,   SpaceShift = QGradient::SpaceShift,   ForestInei = QGradient::ForestInei,   RoyalGarden = QGradient::RoyalGarden,   RichMetal = QGradient::RichMetal,   JuicyCake = QGradient::JuicyCake,   SmartIndigo = QGradient::SmartIndigo,   SandStrike = QGradient::SandStrike,   NorseBeauty = QGradient::NorseBeauty,   AquaGuidance = QGradient::AquaGuidance,   SunVeggie = QGradient::SunVeggie,   SeaLord = QGradient::SeaLord,   BlackSea = QGradient::BlackSea,   GrassShampoo = QGradient::GrassShampoo,   LandingAircraft = QGradient::LandingAircraft,   WitchDance = QGradient::WitchDance,   SleeplessNight = QGradient::SleeplessNight,   AngelCare = QGradient::AngelCare,   CrystalRiver = QGradient::CrystalRiver,   SoftLipstick = QGradient::SoftLipstick,   SaltMountain = QGradient::SaltMountain,   PerfectWhite = QGradient::PerfectWhite,   FreshOasis = QGradient::FreshOasis,   StrictNovember = QGradient::StrictNovember,   MorningSalad = QGradient::MorningSalad,   DeepRelief = QGradient::DeepRelief,   SeaStrike = QGradient::SeaStrike,   NightCall = QGradient::NightCall,   SupremeSky = QGradient::SupremeSky,   LightBlue = QGradient::LightBlue,   MindCrawl = QGradient::MindCrawl,   LilyMeadow = QGradient::LilyMeadow,   SugarLollipop = QGradient::SugarLollipop,   SweetDessert = QGradient::SweetDessert,   MagicRay = QGradient::MagicRay,   TeenParty = QGradient::TeenParty,   FrozenHeat = QGradient::FrozenHeat,   GagarinView = QGradient::GagarinView,   FabledSunset = QGradient::FabledSunset,   PerfectBlue = QGradient::PerfectBlue,   NumPresets = QGradient::NumPresets};
enum Spread{
  PadSpread = QGradient::PadSpread,   ReflectSpread = QGradient::ReflectSpread,   RepeatSpread = QGradient::RepeatSpread};
enum Type{
  LinearGradient = QGradient::LinearGradient,   RadialGradient = QGradient::RadialGradient,   ConicalGradient = QGradient::ConicalGradient,   NoGradient = QGradient::NoGradient};
public Q_SLOTS:
QGradient* new_QGradient();
QGradient* new_QGradient(QGradient::Preset  arg__1);
QGradient* new_QGradient(const QGradient& other) {
QGradient* a = new QGradient();
*((QGradient*)a) = other;
return a; }
void delete_QGradient(QGradient* obj) { delete obj; }
   QGradient::CoordinateMode  coordinateMode(QGradient* theWrappedObject) const;
   bool  __ne__(QGradient* theWrappedObject, const QGradient&  other) const;
   bool  __eq__(QGradient* theWrappedObject, const QGradient&  gradient) const;
   void setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color);
   void setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode);
   void setSpread(QGradient* theWrappedObject, QGradient::Spread  spread);
   void setStops(QGradient* theWrappedObject, const QList<std::pair<qreal , QColor >  >&  stops);
   QGradient::Spread  spread(QGradient* theWrappedObject) const;
   QList<std::pair<qreal , QColor >  >  stops(QGradient* theWrappedObject) const;
   QGradient::Type  type(QGradient* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsAnchor : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
void delete_QGraphicsAnchor(QGraphicsAnchor* obj) { delete obj; }
   void setSizePolicy(QGraphicsAnchor* theWrappedObject, QSizePolicy::Policy  policy);
   void setSpacing(QGraphicsAnchor* theWrappedObject, qreal  spacing);
   QSizePolicy::Policy  sizePolicy(QGraphicsAnchor* theWrappedObject) const;
   qreal  spacing(QGraphicsAnchor* theWrappedObject) const;
   void unsetSpacing(QGraphicsAnchor* theWrappedObject);
};





class PythonQtShell_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{
public:
    PythonQtShell_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = nullptr):QGraphicsAnchorLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsAnchorLayout() override;

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

class PythonQtPublicPromoter_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{ public:
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline int  py_q_count() const { return QGraphicsAnchorLayout::count(); }
inline void py_q_invalidate() { QGraphicsAnchorLayout::invalidate(); }
inline QGraphicsLayoutItem*  py_q_itemAt(int  index) const { return QGraphicsAnchorLayout::itemAt(index); }
inline void py_q_removeAt(int  index) { QGraphicsAnchorLayout::removeAt(index); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsAnchorLayout::setGeometry(rect); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsAnchorLayout::sizeHint(which, constraint); }
};

class PythonQtWrapper_QGraphicsAnchorLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsAnchorLayout* new_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = nullptr);
void delete_QGraphicsAnchorLayout(QGraphicsAnchorLayout* obj) { delete obj; }
   QGraphicsAnchor*  addAnchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
   void addAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, QGraphicsLayoutItem*  secondItem, Qt::Orientations  orientations = Qt::Horizontal|Qt::Vertical);
   void addCornerAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::Corner  firstCorner, QGraphicsLayoutItem*  secondItem, Qt::Corner  secondCorner);
   QGraphicsAnchor*  anchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
   int  py_q_count(QGraphicsAnchorLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_count());}
   qreal  horizontalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
   void py_q_invalidate(QGraphicsAnchorLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_invalidate());}
   QGraphicsLayoutItem*  py_q_itemAt(QGraphicsAnchorLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_itemAt(index));}
   void py_q_removeAt(QGraphicsAnchorLayout* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_removeAt(index));}
   void py_q_setGeometry(QGraphicsAnchorLayout* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setHorizontalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   void setSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   void setVerticalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   QSizeF  py_q_sizeHint(QGraphicsAnchorLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   qreal  verticalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
    bool __nonzero__(QGraphicsAnchorLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QGraphicsBlurEffect : public QGraphicsBlurEffect
{
public:
    PythonQtShell_QGraphicsBlurEffect(QObject*  parent = nullptr):QGraphicsBlurEffect(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsBlurEffect() override;

QRectF  boundingRectFor(const QRectF&  rect) const override;
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

class PythonQtPublicPromoter_QGraphicsBlurEffect : public QGraphicsBlurEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline QRectF  py_q_boundingRectFor(const QRectF&  rect) const { return QGraphicsBlurEffect::boundingRectFor(rect); }
inline void py_q_draw(QPainter*  painter) { QGraphicsBlurEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsBlurEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BlurHint )
Q_FLAGS(BlurHints )
enum BlurHint{
  PerformanceHint = QGraphicsBlurEffect::PerformanceHint,   QualityHint = QGraphicsBlurEffect::QualityHint,   AnimationHint = QGraphicsBlurEffect::AnimationHint};
Q_DECLARE_FLAGS(BlurHints, BlurHint)
public Q_SLOTS:
QGraphicsBlurEffect* new_QGraphicsBlurEffect(QObject*  parent = nullptr);
void delete_QGraphicsBlurEffect(QGraphicsBlurEffect* obj) { delete obj; }
   QGraphicsBlurEffect::BlurHints  blurHints(QGraphicsBlurEffect* theWrappedObject) const;
   qreal  blurRadius(QGraphicsBlurEffect* theWrappedObject) const;
   QRectF  py_q_boundingRectFor(QGraphicsBlurEffect* theWrappedObject, const QRectF&  rect) const{  return (((PythonQtPublicPromoter_QGraphicsBlurEffect*)theWrappedObject)->py_q_boundingRectFor(rect));}
   void py_q_draw(QGraphicsBlurEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsBlurEffect*)theWrappedObject)->py_q_draw(painter));}
};





class PythonQtShell_QGraphicsColorizeEffect : public QGraphicsColorizeEffect
{
public:
    PythonQtShell_QGraphicsColorizeEffect(QObject*  parent = nullptr):QGraphicsColorizeEffect(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsColorizeEffect() override;

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

class PythonQtPublicPromoter_QGraphicsColorizeEffect : public QGraphicsColorizeEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline void py_q_draw(QPainter*  painter) { QGraphicsColorizeEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsColorizeEffect : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsColorizeEffect* new_QGraphicsColorizeEffect(QObject*  parent = nullptr);
void delete_QGraphicsColorizeEffect(QGraphicsColorizeEffect* obj) { delete obj; }
   QColor  color(QGraphicsColorizeEffect* theWrappedObject) const;
   void py_q_draw(QGraphicsColorizeEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsColorizeEffect*)theWrappedObject)->py_q_draw(painter));}
   qreal  strength(QGraphicsColorizeEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsDropShadowEffect : public QGraphicsDropShadowEffect
{
public:
    PythonQtShell_QGraphicsDropShadowEffect(QObject*  parent = nullptr):QGraphicsDropShadowEffect(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsDropShadowEffect() override;

QRectF  boundingRectFor(const QRectF&  rect) const override;
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

class PythonQtPublicPromoter_QGraphicsDropShadowEffect : public QGraphicsDropShadowEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline QRectF  py_q_boundingRectFor(const QRectF&  rect) const { return QGraphicsDropShadowEffect::boundingRectFor(rect); }
inline void py_q_draw(QPainter*  painter) { QGraphicsDropShadowEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsDropShadowEffect : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsDropShadowEffect* new_QGraphicsDropShadowEffect(QObject*  parent = nullptr);
void delete_QGraphicsDropShadowEffect(QGraphicsDropShadowEffect* obj) { delete obj; }
   qreal  blurRadius(QGraphicsDropShadowEffect* theWrappedObject) const;
   QRectF  py_q_boundingRectFor(QGraphicsDropShadowEffect* theWrappedObject, const QRectF&  rect) const{  return (((PythonQtPublicPromoter_QGraphicsDropShadowEffect*)theWrappedObject)->py_q_boundingRectFor(rect));}
   QColor  color(QGraphicsDropShadowEffect* theWrappedObject) const;
   void py_q_draw(QGraphicsDropShadowEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsDropShadowEffect*)theWrappedObject)->py_q_draw(painter));}
   QPointF  offset(QGraphicsDropShadowEffect* theWrappedObject) const;
   qreal  xOffset(QGraphicsDropShadowEffect* theWrappedObject) const;
   qreal  yOffset(QGraphicsDropShadowEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsEffect : public QGraphicsEffect
{
public:
    PythonQtShell_QGraphicsEffect(QObject*  parent = nullptr):QGraphicsEffect(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsEffect() override;

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

class PythonQtPublicPromoter_QGraphicsEffect : public QGraphicsEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline void promoted_drawSource(QPainter*  painter) { this->drawSource(painter); }
inline QRectF  promoted_sourceBoundingRect(Qt::CoordinateSystem  system = Qt::LogicalCoordinates) const { return this->sourceBoundingRect(system); }
inline void promoted_sourceChanged(QGraphicsEffect::ChangeFlags  flags) { this->sourceChanged(flags); }
inline bool  promoted_sourceIsPixmap() const { return this->sourceIsPixmap(); }
inline QPixmap  promoted_sourcePixmap(Qt::CoordinateSystem  system = Qt::LogicalCoordinates, QPoint*  offset = nullptr, QGraphicsEffect::PixmapPadMode  mode = QGraphicsEffect::PadToEffectiveBoundingRect) const { return this->sourcePixmap(system, offset, mode); }
inline void promoted_updateBoundingRect() { this->updateBoundingRect(); }
inline QRectF  py_q_boundingRectFor(const QRectF&  sourceRect) const { return QGraphicsEffect::boundingRectFor(sourceRect); }
inline void py_q_draw(QPainter*  painter) { this->draw(painter); }
inline void py_q_sourceChanged(QGraphicsEffect::ChangeFlags  flags) { QGraphicsEffect::sourceChanged(flags); }
};

class PythonQtWrapper_QGraphicsEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChangeFlag PixmapPadMode )
Q_FLAGS(ChangeFlags )
enum ChangeFlag{
  SourceAttached = QGraphicsEffect::SourceAttached,   SourceDetached = QGraphicsEffect::SourceDetached,   SourceBoundingRectChanged = QGraphicsEffect::SourceBoundingRectChanged,   SourceInvalidated = QGraphicsEffect::SourceInvalidated};
enum PixmapPadMode{
  NoPad = QGraphicsEffect::NoPad,   PadToTransparentBorder = QGraphicsEffect::PadToTransparentBorder,   PadToEffectiveBoundingRect = QGraphicsEffect::PadToEffectiveBoundingRect};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public Q_SLOTS:
QGraphicsEffect* new_QGraphicsEffect(QObject*  parent = nullptr);
void delete_QGraphicsEffect(QGraphicsEffect* obj) { delete obj; }
   QRectF  boundingRect(QGraphicsEffect* theWrappedObject) const;
   QRectF  boundingRectFor(QGraphicsEffect* theWrappedObject, const QRectF&  sourceRect) const;
   QRectF  py_q_boundingRectFor(QGraphicsEffect* theWrappedObject, const QRectF&  sourceRect) const{  return (((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->py_q_boundingRectFor(sourceRect));}
   void draw(QGraphicsEffect* theWrappedObject, QPainter*  painter);
   void py_q_draw(QGraphicsEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->py_q_draw(painter));}
   void drawSource(QGraphicsEffect* theWrappedObject, QPainter*  painter);
   bool  isEnabled(QGraphicsEffect* theWrappedObject) const;
   QRectF  sourceBoundingRect(QGraphicsEffect* theWrappedObject, Qt::CoordinateSystem  system = Qt::LogicalCoordinates) const;
   void sourceChanged(QGraphicsEffect* theWrappedObject, QGraphicsEffect::ChangeFlags  flags);
   void py_q_sourceChanged(QGraphicsEffect* theWrappedObject, QGraphicsEffect::ChangeFlags  flags){  (((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->py_q_sourceChanged(flags));}
   bool  sourceIsPixmap(QGraphicsEffect* theWrappedObject) const;
   QPixmap  sourcePixmap(QGraphicsEffect* theWrappedObject, Qt::CoordinateSystem  system = Qt::LogicalCoordinates, QPoint*  offset = nullptr, QGraphicsEffect::PixmapPadMode  mode = QGraphicsEffect::PadToEffectiveBoundingRect) const;
   void updateBoundingRect(QGraphicsEffect* theWrappedObject);
};





class PythonQtShell_QGraphicsEllipseItem : public QGraphicsEllipseItem
{
public:
    PythonQtShell_QGraphicsEllipseItem(QGraphicsItem*  parent = nullptr):QGraphicsEllipseItem(parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = nullptr):QGraphicsEllipseItem(rect, parent),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = nullptr):QGraphicsEllipseItem(x, y, w, h, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsEllipseItem() override;

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

class PythonQtPublicPromoter_QGraphicsEllipseItem : public QGraphicsEllipseItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsEllipseItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsEllipseItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsEllipseItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsEllipseItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsEllipseItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsEllipseItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsEllipseItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsEllipseItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsEllipseItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsEllipseItem::type(); }
};

class PythonQtWrapper_QGraphicsEllipseItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsEllipseItem::Type};
public Q_SLOTS:
QGraphicsEllipseItem* new_QGraphicsEllipseItem(QGraphicsItem*  parent = nullptr);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = nullptr);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsEllipseItem(QGraphicsEllipseItem* obj) { delete obj; }
   QRectF  py_q_boundingRect(QGraphicsEllipseItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsEllipseItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsEllipseItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QRectF  rect(QGraphicsEllipseItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsEllipseItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect);
   void setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   void setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   QPainterPath  py_q_shape(QGraphicsEllipseItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_shape());}
   int  spanAngle(QGraphicsEllipseItem* theWrappedObject) const;
   int  startAngle(QGraphicsEllipseItem* theWrappedObject) const;
   bool  py_q_supportsExtension(QGraphicsEllipseItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  py_q_type(QGraphicsEllipseItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsGridLayout : public QGraphicsGridLayout
{
public:
    PythonQtShell_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = nullptr):QGraphicsGridLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsGridLayout() override;

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

class PythonQtPublicPromoter_QGraphicsGridLayout : public QGraphicsGridLayout
{ public:
inline int  py_q_count() const { return QGraphicsGridLayout::count(); }
inline void py_q_invalidate() { QGraphicsGridLayout::invalidate(); }
inline QGraphicsLayoutItem*  py_q_itemAt(int  index) const { return QGraphicsGridLayout::itemAt(index); }
inline void py_q_removeAt(int  index) { QGraphicsGridLayout::removeAt(index); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsGridLayout::setGeometry(rect); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsGridLayout::sizeHint(which, constraint); }
};

class PythonQtWrapper_QGraphicsGridLayout : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsGridLayout* new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = nullptr);
void delete_QGraphicsGridLayout(QGraphicsGridLayout* obj) { delete obj; }
   void addItem(QGraphicsGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item, int  row, int  column, Qt::Alignment  alignment = Qt::Alignment());
   void addItem(QGraphicsGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment = Qt::Alignment());
   Qt::Alignment  alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   Qt::Alignment  columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  columnCount(QGraphicsGridLayout* theWrappedObject) const;
   qreal  columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  py_q_count(QGraphicsGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_count());}
   qreal  horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   void py_q_invalidate(QGraphicsGridLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_invalidate());}
   QGraphicsLayoutItem*  py_q_itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_itemAt(index));}
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const;
   void py_q_removeAt(QGraphicsGridLayout* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_removeAt(index));}
   void removeItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item);
   Qt::Alignment  rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const;
   int  rowCount(QGraphicsGridLayout* theWrappedObject) const;
   qreal  rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   qreal  rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   qreal  rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   qreal  rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const;
   int  rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   void setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment);
   void setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing);
   void setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch);
   void py_q_setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment);
   void setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing);
   void setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch);
   void setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   QSizeF  py_q_sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   qreal  verticalSpacing(QGraphicsGridLayout* theWrappedObject) const;
    bool __nonzero__(QGraphicsGridLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QGraphicsItem : public QGraphicsItem
{
public:
    PythonQtShell_QGraphicsItem(QGraphicsItem*  parent = nullptr):QGraphicsItem(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsItem() override;

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

class PythonQtPublicPromoter_QGraphicsItem : public QGraphicsItem
{ public:
enum Extension{
  UserExtension = QGraphicsItem::UserExtension};
inline void promoted_addToIndex() { this->addToIndex(); }
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
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_prepareGeometryChange() { this->prepareGeometryChange(); }
inline void promoted_removeFromIndex() { this->removeFromIndex(); }
inline bool  promoted_sceneEvent(QEvent*  event) { return this->sceneEvent(event); }
inline bool  promoted_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return this->sceneEventFilter(watched, event); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline void promoted_updateMicroFocus() { this->updateMicroFocus(); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_advance(int  phase) { QGraphicsItem::advance(phase); }
inline QRectF  py_q_boundingRect() const { return this->boundingRect(); }
inline bool  py_q_collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithItem(other, mode); }
inline bool  py_q_collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithPath(path, mode); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsItem::contains(point); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsItem::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragMoveEvent(event); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dropEvent(event); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsItem::extension(variant); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsItem::focusInEvent(event); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsItem::focusOutEvent(event); }
inline void py_q_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsItem::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsItem::inputMethodQuery(query); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItem::isObscuredBy(item); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsItem::itemChange(change, value); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsItem::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsItem::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseReleaseEvent(event); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { this->paint(painter, option, widget); }
inline bool  py_q_sceneEvent(QEvent*  event) { return QGraphicsItem::sceneEvent(event); }
inline bool  py_q_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return QGraphicsItem::sceneEventFilter(watched, event); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsItem::type(); }
inline void py_q_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsItem::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheMode Extension GraphicsItemChange GraphicsItemFlag PanelModality enum_1 )
Q_FLAGS(GraphicsItemFlags )
enum CacheMode{
  NoCache = QGraphicsItem::NoCache,   ItemCoordinateCache = QGraphicsItem::ItemCoordinateCache,   DeviceCoordinateCache = QGraphicsItem::DeviceCoordinateCache};
enum Extension{
  UserExtension = PythonQtPublicPromoter_QGraphicsItem::UserExtension};
enum GraphicsItemChange{
  ItemPositionChange = QGraphicsItem::ItemPositionChange,   ItemVisibleChange = QGraphicsItem::ItemVisibleChange,   ItemEnabledChange = QGraphicsItem::ItemEnabledChange,   ItemSelectedChange = QGraphicsItem::ItemSelectedChange,   ItemParentChange = QGraphicsItem::ItemParentChange,   ItemChildAddedChange = QGraphicsItem::ItemChildAddedChange,   ItemChildRemovedChange = QGraphicsItem::ItemChildRemovedChange,   ItemTransformChange = QGraphicsItem::ItemTransformChange,   ItemPositionHasChanged = QGraphicsItem::ItemPositionHasChanged,   ItemTransformHasChanged = QGraphicsItem::ItemTransformHasChanged,   ItemSceneChange = QGraphicsItem::ItemSceneChange,   ItemVisibleHasChanged = QGraphicsItem::ItemVisibleHasChanged,   ItemEnabledHasChanged = QGraphicsItem::ItemEnabledHasChanged,   ItemSelectedHasChanged = QGraphicsItem::ItemSelectedHasChanged,   ItemParentHasChanged = QGraphicsItem::ItemParentHasChanged,   ItemSceneHasChanged = QGraphicsItem::ItemSceneHasChanged,   ItemCursorChange = QGraphicsItem::ItemCursorChange,   ItemCursorHasChanged = QGraphicsItem::ItemCursorHasChanged,   ItemToolTipChange = QGraphicsItem::ItemToolTipChange,   ItemToolTipHasChanged = QGraphicsItem::ItemToolTipHasChanged,   ItemFlagsChange = QGraphicsItem::ItemFlagsChange,   ItemFlagsHaveChanged = QGraphicsItem::ItemFlagsHaveChanged,   ItemZValueChange = QGraphicsItem::ItemZValueChange,   ItemZValueHasChanged = QGraphicsItem::ItemZValueHasChanged,   ItemOpacityChange = QGraphicsItem::ItemOpacityChange,   ItemOpacityHasChanged = QGraphicsItem::ItemOpacityHasChanged,   ItemScenePositionHasChanged = QGraphicsItem::ItemScenePositionHasChanged,   ItemRotationChange = QGraphicsItem::ItemRotationChange,   ItemRotationHasChanged = QGraphicsItem::ItemRotationHasChanged,   ItemScaleChange = QGraphicsItem::ItemScaleChange,   ItemScaleHasChanged = QGraphicsItem::ItemScaleHasChanged,   ItemTransformOriginPointChange = QGraphicsItem::ItemTransformOriginPointChange,   ItemTransformOriginPointHasChanged = QGraphicsItem::ItemTransformOriginPointHasChanged};
enum GraphicsItemFlag{
  ItemIsMovable = QGraphicsItem::ItemIsMovable,   ItemIsSelectable = QGraphicsItem::ItemIsSelectable,   ItemIsFocusable = QGraphicsItem::ItemIsFocusable,   ItemClipsToShape = QGraphicsItem::ItemClipsToShape,   ItemClipsChildrenToShape = QGraphicsItem::ItemClipsChildrenToShape,   ItemIgnoresTransformations = QGraphicsItem::ItemIgnoresTransformations,   ItemIgnoresParentOpacity = QGraphicsItem::ItemIgnoresParentOpacity,   ItemDoesntPropagateOpacityToChildren = QGraphicsItem::ItemDoesntPropagateOpacityToChildren,   ItemStacksBehindParent = QGraphicsItem::ItemStacksBehindParent,   ItemUsesExtendedStyleOption = QGraphicsItem::ItemUsesExtendedStyleOption,   ItemHasNoContents = QGraphicsItem::ItemHasNoContents,   ItemSendsGeometryChanges = QGraphicsItem::ItemSendsGeometryChanges,   ItemAcceptsInputMethod = QGraphicsItem::ItemAcceptsInputMethod,   ItemNegativeZStacksBehindParent = QGraphicsItem::ItemNegativeZStacksBehindParent,   ItemIsPanel = QGraphicsItem::ItemIsPanel,   ItemIsFocusScope = QGraphicsItem::ItemIsFocusScope,   ItemSendsScenePositionChanges = QGraphicsItem::ItemSendsScenePositionChanges,   ItemStopsClickFocusPropagation = QGraphicsItem::ItemStopsClickFocusPropagation,   ItemStopsFocusHandling = QGraphicsItem::ItemStopsFocusHandling,   ItemContainsChildrenInShape = QGraphicsItem::ItemContainsChildrenInShape};
enum PanelModality{
  NonModal = QGraphicsItem::NonModal,   PanelModal = QGraphicsItem::PanelModal,   SceneModal = QGraphicsItem::SceneModal};
enum enum_1{
  Type = QGraphicsItem::Type,   UserType = QGraphicsItem::UserType};
Q_DECLARE_FLAGS(GraphicsItemFlags, GraphicsItemFlag)
public Q_SLOTS:
QGraphicsItem* new_QGraphicsItem(QGraphicsItem*  parent = nullptr);
void delete_QGraphicsItem(QGraphicsItem* obj) { delete obj; }
   bool  acceptDrops(QGraphicsItem* theWrappedObject) const;
   bool  acceptHoverEvents(QGraphicsItem* theWrappedObject) const;
   bool  acceptTouchEvents(QGraphicsItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsItem* theWrappedObject) const;
   void addToIndex(QGraphicsItem* theWrappedObject);
   void advance(QGraphicsItem* theWrappedObject, int  phase);
   void py_q_advance(QGraphicsItem* theWrappedObject, int  phase){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_advance(phase));}
   QRectF  boundingRect(QGraphicsItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_boundingRect());}
   QRegion  boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   qreal  boundingRegionGranularity(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsItem* theWrappedObject) const;
   void clearFocus(QGraphicsItem* theWrappedObject);
   QPainterPath  clipPath(QGraphicsItem* theWrappedObject) const;
   bool  collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   bool  py_q_collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_collidesWithItem(other, mode));}
   bool  collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   bool  py_q_collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_collidesWithPath(path, mode));}
   QList<QGraphicsItem* >  collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const;
   bool  contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_contains(point));}
   void contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void py_q_contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QCursor  cursor(QGraphicsItem* theWrappedObject) const;
   QVariant  data(QGraphicsItem* theWrappedObject, int  key) const;
   QTransform  deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const;
   void dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_dropEvent(event));}
   qreal  effectiveOpacity(QGraphicsItem* theWrappedObject) const;
   void ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF(), int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   QVariant  extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_extension(variant));}
   bool  filtersChildEvents(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsItem* theWrappedObject) const;
   void focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_focusInEvent(event));}
   QGraphicsItem*  focusItem(QGraphicsItem* theWrappedObject) const;
   void focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_focusOutEvent(event));}
   QGraphicsItem*  focusProxy(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  focusScopeItem(QGraphicsItem* theWrappedObject) const;
   void grabKeyboard(QGraphicsItem* theWrappedObject);
   void grabMouse(QGraphicsItem* theWrappedObject);
   QGraphicsEffect*  graphicsEffect(QGraphicsItem* theWrappedObject) const;
   QGraphicsItemGroup*  group(QGraphicsItem* theWrappedObject) const;
   bool  handlesChildEvents(QGraphicsItem* theWrappedObject) const;
   bool  hasCursor(QGraphicsItem* theWrappedObject) const;
   bool  hasFocus(QGraphicsItem* theWrappedObject) const;
   void hide(QGraphicsItem* theWrappedObject);
   void hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event);
   void py_q_inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_inputMethodEvent(event));}
   Qt::InputMethodHints  inputMethodHints(QGraphicsItem* theWrappedObject) const;
   QVariant  inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_inputMethodQuery(query));}
   void installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   bool  isActive(QGraphicsItem* theWrappedObject) const;
   bool  isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const;
   bool  isBlockedByModalPanel(QGraphicsItem* theWrappedObject, QGraphicsItem**  blockingPanel = nullptr) const;
   bool  isClipped(QGraphicsItem* theWrappedObject) const;
   bool  isEnabled(QGraphicsItem* theWrappedObject) const;
   bool  isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF()) const;
   bool  isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  py_q_isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   bool  isPanel(QGraphicsItem* theWrappedObject) const;
   bool  isSelected(QGraphicsItem* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsItem* theWrappedObject) const;
   bool  isVisible(QGraphicsItem* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const;
   bool  isWidget(QGraphicsItem* theWrappedObject) const;
   bool  isWindow(QGraphicsItem* theWrappedObject) const;
   QVariant  itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   QVariant  py_q_itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_itemChange(change, value));}
   QTransform  itemTransform(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, bool*  ok = nullptr) const;
   void keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   QPainterPath  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   qreal  opacity(QGraphicsItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_opaqueArea());}
   void paint(QGraphicsItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
   void py_q_paint(QGraphicsItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QGraphicsItem*  panel(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::PanelModality  panelModality(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  parentItem(QGraphicsItem* theWrappedObject) const;
   QGraphicsObject*  parentObject(QGraphicsItem* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QGraphicsItem* theWrappedObject) const;
   QPointF  pos(QGraphicsItem* theWrappedObject) const;
   void prepareGeometryChange(QGraphicsItem* theWrappedObject);
   void removeFromIndex(QGraphicsItem* theWrappedObject);
   void removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   void resetTransform(QGraphicsItem* theWrappedObject);
   qreal  rotation(QGraphicsItem* theWrappedObject) const;
   qreal  scale(QGraphicsItem* theWrappedObject) const;
   QGraphicsScene*  scene(QGraphicsItem* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsItem* theWrappedObject) const;
   bool  sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event);
   bool  py_q_sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_sceneEvent(event));}
   bool  sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event);
   bool  py_q_sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_sceneEventFilter(watched, event));}
   QPointF  scenePos(QGraphicsItem* theWrappedObject) const;
   QTransform  sceneTransform(QGraphicsItem* theWrappedObject) const;
   void scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect = QRectF());
   void setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on);
   void setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setAcceptTouchEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons);
   void setActive(QGraphicsItem* theWrappedObject, bool  active);
   void setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity);
   void setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize = QSize());
   void setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor);
   void setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value);
   void setEnabled(QGraphicsItem* theWrappedObject, bool  enabled);
   void setExtension(QGraphicsItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFiltersChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled = true);
   void setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setFocusProxy(QGraphicsItem* theWrappedObject, QGraphicsItem*  item);
   void setGraphicsEffect(QGraphicsItem* theWrappedObject, QGraphicsEffect*  effect);
   void setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group);
   void setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setInputMethodHints(QGraphicsItem* theWrappedObject, Qt::InputMethodHints  hints);
   void setOpacity(QGraphicsItem* theWrappedObject, qreal  opacity);
   void setPanelModality(QGraphicsItem* theWrappedObject, QGraphicsItem::PanelModality  panelModality);
   void setParentItem(QGraphicsItem* theWrappedObject, PythonQtNewOwnerOfThis<QGraphicsItem* >  parent);
   void setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y);
   void setRotation(QGraphicsItem* theWrappedObject, qreal  angle);
   void setScale(QGraphicsItem* theWrappedObject, qreal  scale);
   void setSelected(QGraphicsItem* theWrappedObject, bool  selected);
   void setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip);
   void setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void setTransformOriginPoint(QGraphicsItem* theWrappedObject, const QPointF&  origin);
   void setTransformOriginPoint(QGraphicsItem* theWrappedObject, qreal  ax, qreal  ay);
   void setTransformations(QGraphicsItem* theWrappedObject, const QList<QGraphicsTransform* >&  transformations);
   void setVisible(QGraphicsItem* theWrappedObject, bool  visible);
   void setX(QGraphicsItem* theWrappedObject, qreal  x);
   void setY(QGraphicsItem* theWrappedObject, qreal  y);
   void setZValue(QGraphicsItem* theWrappedObject, qreal  z);
   QPainterPath  shape(QGraphicsItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_shape());}
   void show(QGraphicsItem* theWrappedObject);
   void stackBefore(QGraphicsItem* theWrappedObject, const QGraphicsItem*  sibling);
   bool  supportsExtension(QGraphicsItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   QGraphicsObject*  toGraphicsObject(QGraphicsItem* theWrappedObject);
   QString  toolTip(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QGraphicsItem* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QGraphicsItem* theWrappedObject) const;
   QTransform  transform(QGraphicsItem* theWrappedObject) const;
   QPointF  transformOriginPoint(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsTransform* >  transformations(QGraphicsItem* theWrappedObject) const;
   int  type(QGraphicsItem* theWrappedObject) const;
   int  py_q_type(QGraphicsItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_type());}
   void ungrabKeyboard(QGraphicsItem* theWrappedObject);
   void ungrabMouse(QGraphicsItem* theWrappedObject);
   void unsetCursor(QGraphicsItem* theWrappedObject);
   void update(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF());
   void update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   void updateMicroFocus(QGraphicsItem* theWrappedObject);
   void wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   void py_q_wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_wheelEvent(event));}
   QGraphicsWidget*  window(QGraphicsItem* theWrappedObject) const;
   qreal  x(QGraphicsItem* theWrappedObject) const;
   qreal  y(QGraphicsItem* theWrappedObject) const;
   qreal  zValue(QGraphicsItem* theWrappedObject) const;
    QString py_toString(QGraphicsItem*);
};


