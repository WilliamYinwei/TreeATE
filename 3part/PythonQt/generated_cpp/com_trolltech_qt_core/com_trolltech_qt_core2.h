#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QUrl>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdeadlinetimer.h>
#include <qeasingcurve.h>
#include <qfileinfo.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlogging.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmimedatabase.h>
#include <qmimetype.h>
#include <qmutex.h>
#include <qobject.h>
#include <qoperatingsystemversion.h>
#include <qparallelanimationgroup.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qpropertyanimation.h>
#include <qrandom.h>
#include <qreadwritelock.h>
#include <qregularexpression.h>
#include <qthread.h>
#include <qtipccommon.h>
#include <qurl.h>
#include <qversionnumber.h>



class PythonQtWrapper_QMessageLogger : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMessageLogger* new_QMessageLogger();
QMessageLogger* new_QMessageLogger(const char*  file, int  line, const char*  function);
QMessageLogger* new_QMessageLogger(const char*  file, int  line, const char*  function, const char*  category);
void delete_QMessageLogger(QMessageLogger* obj) { delete obj; }
};





class PythonQtWrapper_QMetaClassInfo : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMetaClassInfo* new_QMetaClassInfo();
void delete_QMetaClassInfo(QMetaClassInfo* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaClassInfo* theWrappedObject) const;
   const char*  name(QMetaClassInfo* theWrappedObject) const;
   const char*  value(QMetaClassInfo* theWrappedObject) const;
};





class PythonQtWrapper_QMetaEnum : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMetaEnum* new_QMetaEnum();
void delete_QMetaEnum(QMetaEnum* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaEnum* theWrappedObject) const;
   const char*  enumName(QMetaEnum* theWrappedObject) const;
   bool  is64Bit(QMetaEnum* theWrappedObject) const;
   bool  isFlag(QMetaEnum* theWrappedObject) const;
   bool  isScoped(QMetaEnum* theWrappedObject) const;
   bool  isValid(QMetaEnum* theWrappedObject) const;
   const char*  key(QMetaEnum* theWrappedObject, int  index) const;
   int  keyCount(QMetaEnum* theWrappedObject) const;
   int  keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok = nullptr) const;
   int  keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok = nullptr) const;
   QMetaType  metaType(QMetaEnum* theWrappedObject) const;
   const char*  name(QMetaEnum* theWrappedObject) const;
   const char*  scope(QMetaEnum* theWrappedObject) const;
   int  value(QMetaEnum* theWrappedObject, int  index) const;
   const char*  valueToKey(QMetaEnum* theWrappedObject, quint64  value) const;
   QByteArray  valueToKeys(QMetaEnum* theWrappedObject, quint64  value) const;
    bool __nonzero__(QMetaEnum* obj) { return obj->isValid(); }
};





class PythonQtShell_QMetaMethod : public QMetaMethod
{
public:
    PythonQtShell_QMetaMethod():QMetaMethod(),_wrapper(nullptr) {};

   ~PythonQtShell_QMetaMethod();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMetaMethod : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access Attributes MethodType )
enum Access{
  Private = QMetaMethod::Private,   Protected = QMetaMethod::Protected,   Public = QMetaMethod::Public};
enum Attributes{
  Compatibility = QMetaMethod::Compatibility,   Cloned = QMetaMethod::Cloned,   Scriptable = QMetaMethod::Scriptable};
enum MethodType{
  Method = QMetaMethod::Method,   Signal = QMetaMethod::Signal,   Slot = QMetaMethod::Slot,   Constructor = QMetaMethod::Constructor};
public Q_SLOTS:
QMetaMethod* new_QMetaMethod();
void delete_QMetaMethod(QMetaMethod* obj) { delete obj; }
   QMetaMethod::Access  access(QMetaMethod* theWrappedObject) const;
   int  attributes(QMetaMethod* theWrappedObject) const;
   const QMetaObject*  enclosingMetaObject(QMetaMethod* theWrappedObject) const;
   void getParameterTypes(QMetaMethod* theWrappedObject, int*  types) const;
   bool  isConst(QMetaMethod* theWrappedObject) const;
   bool  isValid(QMetaMethod* theWrappedObject) const;
   int  methodIndex(QMetaMethod* theWrappedObject) const;
   QByteArray  methodSignature(QMetaMethod* theWrappedObject) const;
   QMetaMethod::MethodType  methodType(QMetaMethod* theWrappedObject) const;
   QByteArray  name(QMetaMethod* theWrappedObject) const;
   QByteArrayView  nameView(QMetaMethod* theWrappedObject) const;
   bool  __ne__(QMetaMethod* theWrappedObject, const QMetaMethod&  rhs);
   bool  __eq__(QMetaMethod* theWrappedObject, const QMetaMethod&  rhs);
   int  parameterCount(QMetaMethod* theWrappedObject) const;
   QMetaType  parameterMetaType(QMetaMethod* theWrappedObject, int  index) const;
   QList<QByteArray >  parameterNames(QMetaMethod* theWrappedObject) const;
   int  parameterType(QMetaMethod* theWrappedObject, int  index) const;
   QByteArray  parameterTypeName(QMetaMethod* theWrappedObject, int  index) const;
   QList<QByteArray >  parameterTypes(QMetaMethod* theWrappedObject) const;
   int  relativeMethodIndex(QMetaMethod* theWrappedObject) const;
   QMetaType  returnMetaType(QMetaMethod* theWrappedObject) const;
   int  returnType(QMetaMethod* theWrappedObject) const;
   int  revision(QMetaMethod* theWrappedObject) const;
   const char*  tag(QMetaMethod* theWrappedObject) const;
   const char*  typeName(QMetaMethod* theWrappedObject) const;
    bool __nonzero__(QMetaMethod* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaProperty : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMetaProperty* new_QMetaProperty();
void delete_QMetaProperty(QMetaProperty* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaProperty* theWrappedObject) const;
   QMetaEnum  enumerator(QMetaProperty* theWrappedObject) const;
   bool  hasNotifySignal(QMetaProperty* theWrappedObject) const;
   bool  hasStdCppSet(QMetaProperty* theWrappedObject) const;
   bool  isAlias(QMetaProperty* theWrappedObject) const;
   bool  isBindable(QMetaProperty* theWrappedObject) const;
   bool  isConstant(QMetaProperty* theWrappedObject) const;
   bool  isDesignable(QMetaProperty* theWrappedObject) const;
   bool  isEnumType(QMetaProperty* theWrappedObject) const;
   bool  isFinal(QMetaProperty* theWrappedObject) const;
   bool  isFlagType(QMetaProperty* theWrappedObject) const;
   bool  isOverride(QMetaProperty* theWrappedObject) const;
   bool  isReadable(QMetaProperty* theWrappedObject) const;
   bool  isRequired(QMetaProperty* theWrappedObject) const;
   bool  isResettable(QMetaProperty* theWrappedObject) const;
   bool  isScriptable(QMetaProperty* theWrappedObject) const;
   bool  isStored(QMetaProperty* theWrappedObject) const;
   bool  isUser(QMetaProperty* theWrappedObject) const;
   bool  isValid(QMetaProperty* theWrappedObject) const;
   bool  isVirtual(QMetaProperty* theWrappedObject) const;
   bool  isWritable(QMetaProperty* theWrappedObject) const;
   QMetaType  metaType(QMetaProperty* theWrappedObject) const;
   const char*  name(QMetaProperty* theWrappedObject) const;
   QMetaMethod  notifySignal(QMetaProperty* theWrappedObject) const;
   int  notifySignalIndex(QMetaProperty* theWrappedObject) const;
   int  propertyIndex(QMetaProperty* theWrappedObject) const;
   QVariant  read(QMetaProperty* theWrappedObject, const QObject*  obj) const;
   QVariant  readOnGadget(QMetaProperty* theWrappedObject, const void*  gadget) const;
   int  relativePropertyIndex(QMetaProperty* theWrappedObject) const;
   bool  reset(QMetaProperty* theWrappedObject, QObject*  obj) const;
   bool  resetOnGadget(QMetaProperty* theWrappedObject, void*  gadget) const;
   int  revision(QMetaProperty* theWrappedObject) const;
   QVariant::Type  type(QMetaProperty* theWrappedObject) const;
   int  typeId(QMetaProperty* theWrappedObject) const;
   const char*  typeName(QMetaProperty* theWrappedObject) const;
   int  userType(QMetaProperty* theWrappedObject) const;
   bool  write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const;
   bool  writeOnGadget(QMetaProperty* theWrappedObject, void*  gadget, const QVariant&  value) const;
    bool __nonzero__(QMetaProperty* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaType : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TypeFlag )
Q_FLAGS(TypeFlags )
enum TypeFlag{
  NeedsConstruction = QMetaType::NeedsConstruction,   NeedsDestruction = QMetaType::NeedsDestruction,   RelocatableType = QMetaType::RelocatableType,   MovableType = QMetaType::MovableType,   PointerToQObject = QMetaType::PointerToQObject,   IsEnumeration = QMetaType::IsEnumeration,   SharedPointerToQObject = QMetaType::SharedPointerToQObject,   WeakPointerToQObject = QMetaType::WeakPointerToQObject,   TrackingPointerToQObject = QMetaType::TrackingPointerToQObject,   IsUnsignedEnumeration = QMetaType::IsUnsignedEnumeration,   IsGadget = QMetaType::IsGadget,   PointerToGadget = QMetaType::PointerToGadget,   IsPointer = QMetaType::IsPointer,   IsQmlList = QMetaType::IsQmlList,   IsConst = QMetaType::IsConst,   NeedsCopyConstruction = QMetaType::NeedsCopyConstruction,   NeedsMoveConstruction = QMetaType::NeedsMoveConstruction};
Q_DECLARE_FLAGS(TypeFlags, TypeFlag)
public Q_SLOTS:
QMetaType* new_QMetaType();
QMetaType* new_QMetaType(int  type);
void delete_QMetaType(QMetaType* obj) { delete obj; }
   qsizetype  alignOf(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_canConvert(QMetaType  fromType, QMetaType  toType);
   bool  static_QMetaType_canView(QMetaType  fromType, QMetaType  toType);
   bool  static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   void*  static_QMetaType_construct(int  type, void*  where, const void*  copy);
   void*  construct(QMetaType* theWrappedObject, void*  where, const void*  copy = nullptr) const;
   bool  static_QMetaType_convert(QMetaType  fromType, const void*  from, QMetaType  toType, void*  to);
   bool  static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId);
   void*  create(QMetaType* theWrappedObject, const void*  copy = nullptr) const;
   void*  static_QMetaType_create(int  type, const void*  copy = nullptr);
   void static_QMetaType_destroy(int  type, void*  data);
   void destroy(QMetaType* theWrappedObject, void*  data) const;
   void static_QMetaType_destruct(int  type, void*  where);
   void destruct(QMetaType* theWrappedObject, void*  data) const;
   bool  equals(QMetaType* theWrappedObject, const void*  lhs, const void*  rhs) const;
   bool  static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   QMetaType::TypeFlags  flags(QMetaType* theWrappedObject) const;
   QMetaType  static_QMetaType_fromName(QByteArrayView  name);
   bool  static_QMetaType_hasRegisteredConverterFunction(QMetaType  fromType, QMetaType  toType);
   bool  hasRegisteredDataStreamOperators(QMetaType* theWrappedObject) const;
   bool  hasRegisteredDebugStreamOperator(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId);
   bool  static_QMetaType_hasRegisteredMutableViewFunction(QMetaType  fromType, QMetaType  toType);
   int  id(QMetaType* theWrappedObject, int  arg__1 = 0) const;
   bool  isCopyConstructible(QMetaType* theWrappedObject) const;
   bool  isDefaultConstructible(QMetaType* theWrappedObject) const;
   bool  isDestructible(QMetaType* theWrappedObject) const;
   bool  isEqualityComparable(QMetaType* theWrappedObject) const;
   bool  isMoveConstructible(QMetaType* theWrappedObject) const;
   bool  isOrdered(QMetaType* theWrappedObject) const;
   bool  isRegistered(QMetaType* theWrappedObject, Qt::Disambiguated_t  arg__1 = Qt::Disambiguated) const;
   bool  static_QMetaType_isRegistered(int  type);
   bool  isValid(QMetaType* theWrappedObject, Qt::Disambiguated_t  arg__1 = Qt::Disambiguated) const;
   bool  static_QMetaType_load(QDataStream&  stream, int  type, void*  data);
   bool  load(QMetaType* theWrappedObject, QDataStream&  stream, void*  data) const;
   const QMetaObject*  metaObject(QMetaType* theWrappedObject) const;
   const QMetaObject*  static_QMetaType_metaObjectForType(int  type);
   const char*  name(QMetaType* theWrappedObject) const;
   bool  __ne__(QMetaType* theWrappedObject, const QMetaType&  rhs);
   bool  __eq__(QMetaType* theWrappedObject, const QMetaType&  rhs);
   void static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, QMetaType  type);
   void registerType(QMetaType* theWrappedObject) const;
   bool  save(QMetaType* theWrappedObject, QDataStream&  stream, const void*  data) const;
   bool  static_QMetaType_save(QDataStream&  stream, int  type, const void*  data);
   qsizetype  sizeOf(QMetaType* theWrappedObject) const;
   int  static_QMetaType_sizeOf(int  type);
   int  static_QMetaType_type(const QByteArray&  typeName);
   int  static_QMetaType_type(const char*  typeName);
   QMetaType::TypeFlags  static_QMetaType_typeFlags(int  type);
   const char*  static_QMetaType_typeName(int  type);
   QMetaType  underlyingType(QMetaType* theWrappedObject) const;
   void static_QMetaType_unregisterConverterFunction(QMetaType  from, QMetaType  to);
   void static_QMetaType_unregisterMetaType(QMetaType  type);
   void static_QMetaType_unregisterMutableViewFunction(QMetaType  from, QMetaType  to);
   bool  static_QMetaType_view(QMetaType  fromType, void*  from, QMetaType  toType, void*  to);
    QString py_toString(QMetaType*);
    bool __nonzero__(QMetaType* obj) { return obj->isValid(); }
};





class PythonQtShell_QMimeData : public QMimeData
{
public:
    PythonQtShell_QMimeData():QMimeData(),_wrapper(nullptr) {};

   ~PythonQtShell_QMimeData() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QStringList  formats() const override;
bool  hasFormat(const QString&  mimetype) const override;
QVariant  retrieveData(const QString&  mimetype, QMetaType  preferredType) const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMimeData : public QMimeData
{ public:
inline QVariant  promoted_retrieveData(const QString&  mimetype, QMetaType  preferredType) const { return this->retrieveData(mimetype, preferredType); }
inline QStringList  py_q_formats() const { return QMimeData::formats(); }
inline bool  py_q_hasFormat(const QString&  mimetype) const { return QMimeData::hasFormat(mimetype); }
inline QVariant  py_q_retrieveData(const QString&  mimetype, QMetaType  preferredType) const { return QMimeData::retrieveData(mimetype, preferredType); }
};

class PythonQtWrapper_QMimeData : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMimeData* new_QMimeData();
void delete_QMimeData(QMimeData* obj) { delete obj; }
   void clear(QMimeData* theWrappedObject);
   QVariant  colorData(QMimeData* theWrappedObject) const;
   QByteArray  data(QMimeData* theWrappedObject, const QString&  mimetype) const;
   QStringList  formats(QMimeData* theWrappedObject) const;
   QStringList  py_q_formats(QMimeData* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_formats());}
   bool  hasColor(QMimeData* theWrappedObject) const;
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  py_q_hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_hasFormat(mimetype));}
   bool  hasHtml(QMimeData* theWrappedObject) const;
   bool  hasImage(QMimeData* theWrappedObject) const;
   bool  hasText(QMimeData* theWrappedObject) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   QString  html(QMimeData* theWrappedObject) const;
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   QVariant  retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QMetaType  preferredType) const;
   QVariant  py_q_retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QMetaType  preferredType) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_retrieveData(mimetype, preferredType));}
   void setColorData(QMimeData* theWrappedObject, const QVariant&  color);
   void setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data);
   void setHtml(QMimeData* theWrappedObject, const QString&  html);
   void setImageData(QMimeData* theWrappedObject, const QVariant&  image);
   void setText(QMimeData* theWrappedObject, const QString&  text);
   void setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls);
   QString  text(QMimeData* theWrappedObject) const;
   QList<QUrl >  urls(QMimeData* theWrappedObject) const;
};





class PythonQtWrapper_QMimeDatabase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MatchMode )
enum MatchMode{
  MatchDefault = QMimeDatabase::MatchDefault,   MatchExtension = QMimeDatabase::MatchExtension,   MatchContent = QMimeDatabase::MatchContent};
public Q_SLOTS:
QMimeDatabase* new_QMimeDatabase();
void delete_QMimeDatabase(QMimeDatabase* obj) { delete obj; }
   QList<QMimeType >  allMimeTypes(QMimeDatabase* theWrappedObject) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const;
   QMimeType  mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const;
   QMimeType  mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const;
   QList<QMimeType >  mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
   QString  suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
};





class PythonQtWrapper_QMimeType : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMimeType* new_QMimeType();
QMimeType* new_QMimeType(const QMimeType&  other);
void delete_QMimeType(QMimeType* obj) { delete obj; }
   QStringList  aliases(QMimeType* theWrappedObject) const;
   QStringList  allAncestors(QMimeType* theWrappedObject) const;
   QString  comment(QMimeType* theWrappedObject) const;
   QString  filterString(QMimeType* theWrappedObject) const;
   QString  genericIconName(QMimeType* theWrappedObject) const;
   QStringList  globPatterns(QMimeType* theWrappedObject) const;
   QString  iconName(QMimeType* theWrappedObject) const;
   bool  inherits(QMimeType* theWrappedObject, const QString&  mimeTypeName) const;
   bool  isDefault(QMimeType* theWrappedObject) const;
   bool  isValid(QMimeType* theWrappedObject) const;
   QString  name(QMimeType* theWrappedObject) const;
   bool  __ne__(QMimeType* theWrappedObject, const QMimeType&  rhs);
   QMimeType*  operator_assign(QMimeType* theWrappedObject, const QMimeType&  other);
   bool  __eq__(QMimeType* theWrappedObject, const QMimeType&  rhs);
   QStringList  parentMimeTypes(QMimeType* theWrappedObject) const;
   QString  preferredSuffix(QMimeType* theWrappedObject) const;
   QStringList  suffixes(QMimeType* theWrappedObject) const;
   void swap(QMimeType* theWrappedObject, QMimeType&  other);
    QString py_toString(QMimeType*);
    bool __nonzero__(QMimeType* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QModelIndex : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QModelIndex* new_QModelIndex();
QModelIndex* new_QModelIndex(const QModelIndex& other) {
QModelIndex* a = new QModelIndex();
*((QModelIndex*)a) = other;
return a; }
void delete_QModelIndex(QModelIndex* obj) { delete obj; }
   int  column(QModelIndex* theWrappedObject) const;
   const void*  constInternalPointer(QModelIndex* theWrappedObject) const;
   QVariant  data(QModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   Qt::ItemFlags  flags(QModelIndex* theWrappedObject) const;
   quintptr  internalId(QModelIndex* theWrappedObject) const;
   void*  internalPointer(QModelIndex* theWrappedObject) const;
   bool  isValid(QModelIndex* theWrappedObject) const;
   const QAbstractItemModel*  model(QModelIndex* theWrappedObject) const;
   void multiData(QModelIndex* theWrappedObject, QModelRoleDataSpan  roleDataSpan) const;
   bool  __ne__(QModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __ne__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __lt__(QModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __lt__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __le__(QModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __le__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __eq__(QModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __eq__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __gt__(QModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __gt__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __ge__(QModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __ge__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   QModelIndex  parent(QModelIndex* theWrappedObject) const;
   int  row(QModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QModelIndex* theWrappedObject, int  row, int  column) const;
   QModelIndex  siblingAtColumn(QModelIndex* theWrappedObject, int  column) const;
   QModelIndex  siblingAtRow(QModelIndex* theWrappedObject, int  row) const;
    QString py_toString(QModelIndex*);
    bool __nonzero__(QModelIndex* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QModelRoleData : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QModelRoleData* new_QModelRoleData(int  role);
void delete_QModelRoleData(QModelRoleData* obj) { delete obj; }
   void clearData(QModelRoleData* theWrappedObject);
   QVariant*  data(QModelRoleData* theWrappedObject);
   const QVariant*  data(QModelRoleData* theWrappedObject) const;
   int  role(QModelRoleData* theWrappedObject) const;
};





class PythonQtWrapper_QModelRoleDataSpan : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QModelRoleDataSpan* new_QModelRoleDataSpan();
QModelRoleDataSpan* new_QModelRoleDataSpan(QModelRoleData&  modelRoleData);
QModelRoleDataSpan* new_QModelRoleDataSpan(QModelRoleData*  modelRoleData, qsizetype  len);
QModelRoleDataSpan* new_QModelRoleDataSpan(const QModelRoleDataSpan& other) {
QModelRoleDataSpan* a = new QModelRoleDataSpan();
*((QModelRoleDataSpan*)a) = other;
return a; }
void delete_QModelRoleDataSpan(QModelRoleDataSpan* obj) { delete obj; }
   QModelRoleData*  begin(QModelRoleDataSpan* theWrappedObject) const;
   QModelRoleData*  data(QModelRoleDataSpan* theWrappedObject) const;
   QVariant*  dataForRole(QModelRoleDataSpan* theWrappedObject, int  role) const;
   QModelRoleData*  end(QModelRoleDataSpan* theWrappedObject) const;
   qsizetype  length(QModelRoleDataSpan* theWrappedObject) const;
   QModelRoleData*  operator_subscript(QModelRoleDataSpan* theWrappedObject, qsizetype  index) const;
   qsizetype  size(QModelRoleDataSpan* theWrappedObject) const;
};





class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMutex* new_QMutex();
void delete_QMutex(QMutex* obj) { delete obj; }
   bool  tryLock(QMutex* theWrappedObject, QDeadlineTimer  timeout);
   bool  tryLock(QMutex* theWrappedObject, int  timeout);
   bool  try_lock(QMutex* theWrappedObject);
};





class PythonQtShell_QNativeIpcKey : public QNativeIpcKey
{
public:
    PythonQtShell_QNativeIpcKey():QNativeIpcKey(),_wrapper(nullptr) {};
    PythonQtShell_QNativeIpcKey(QNativeIpcKey::Type  type):QNativeIpcKey(type),_wrapper(nullptr) {};
    PythonQtShell_QNativeIpcKey(const QNativeIpcKey&  other):QNativeIpcKey(other),_wrapper(nullptr) {};
    PythonQtShell_QNativeIpcKey(const QString&  k, QNativeIpcKey::Type  type = QNativeIpcKey::DefaultTypeForOs):QNativeIpcKey(k, type),_wrapper(nullptr) {};

   ~PythonQtShell_QNativeIpcKey();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QNativeIpcKey : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum class Type{
  SystemV = static_cast<int>(QNativeIpcKey::Type::SystemV),   PosixRealtime = static_cast<int>(QNativeIpcKey::Type::PosixRealtime),   Windows = static_cast<int>(QNativeIpcKey::Type::Windows)};
public Q_SLOTS:
QNativeIpcKey* new_QNativeIpcKey();
QNativeIpcKey* new_QNativeIpcKey(QNativeIpcKey::Type  type);
QNativeIpcKey* new_QNativeIpcKey(const QNativeIpcKey&  other);
QNativeIpcKey* new_QNativeIpcKey(const QString&  k, QNativeIpcKey::Type  type = QNativeIpcKey::DefaultTypeForOs);
void delete_QNativeIpcKey(QNativeIpcKey* obj) { delete obj; }
   QNativeIpcKey  static_QNativeIpcKey_fromString(const QString&  string);
   bool  isEmpty(QNativeIpcKey* theWrappedObject) const;
   bool  isValid(QNativeIpcKey* theWrappedObject) const;
   QNativeIpcKey::Type  static_QNativeIpcKey_legacyDefaultTypeForOs();
   QString  nativeKey(QNativeIpcKey* theWrappedObject) const;
   bool  __ne__(QNativeIpcKey* theWrappedObject, const QNativeIpcKey&  rhs);
   QNativeIpcKey*  operator_assign(QNativeIpcKey* theWrappedObject, const QNativeIpcKey&  other);
   bool  __eq__(QNativeIpcKey* theWrappedObject, const QNativeIpcKey&  rhs);
   void setNativeKey(QNativeIpcKey* theWrappedObject, const QString&  newKey);
   void setType(QNativeIpcKey* theWrappedObject, QNativeIpcKey::Type  type);
   void swap(QNativeIpcKey* theWrappedObject, QNativeIpcKey&  other);
   QString  toString(QNativeIpcKey* theWrappedObject) const;
   QNativeIpcKey::Type  type(QNativeIpcKey* theWrappedObject) const;
    QString py_toString(QNativeIpcKey*);
    bool __nonzero__(QNativeIpcKey* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = nullptr):QObject(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QObject() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void promoted_childEvent(QChildEvent*  event) { this->childEvent(event); }
inline void promoted_customEvent(QEvent*  event) { this->customEvent(event); }
inline bool  promoted_isSignalConnected(const QMetaMethod&  signal) const { return this->isSignalConnected(signal); }
inline QObject*  promoted_sender() const { return this->sender(); }
inline int  promoted_senderSignalIndex() const { return this->senderSignalIndex(); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_childEvent(QChildEvent*  event) { QObject::childEvent(event); }
inline void py_q_customEvent(QEvent*  event) { QObject::customEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QObject::event(event); }
inline bool  py_q_eventFilter(QObject*  watched, QEvent*  event) { return QObject::eventFilter(watched, event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QObject::timerEvent(event); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QObject* new_QObject(QObject*  parent = nullptr);
void delete_QObject(QObject* obj) { delete obj; }
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   void childEvent(QObject* theWrappedObject, QChildEvent*  event);
   void py_q_childEvent(QObject* theWrappedObject, QChildEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_childEvent(event));}
   const QList<QObject* >*  children(QObject* theWrappedObject) const;
   void customEvent(QObject* theWrappedObject, QEvent*  event);
   void py_q_customEvent(QObject* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_customEvent(event));}
   void dumpObjectInfo(QObject* theWrappedObject) const;
   void dumpObjectTree(QObject* theWrappedObject) const;
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  event);
   bool  py_q_event(QObject* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_event(event));}
   bool  eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event);
   bool  py_q_eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_eventFilter(watched, event));}
   void installEventFilter(QObject* theWrappedObject, QObject*  filterObj);
   bool  isQmlExposed(QObject* theWrappedObject) const;
   bool  isQuickItemType(QObject* theWrappedObject) const;
   bool  isSignalConnected(QObject* theWrappedObject, const QMetaMethod&  signal) const;
   bool  isWidgetType(QObject* theWrappedObject) const;
   bool  isWindowType(QObject* theWrappedObject) const;
   void killTimer(QObject* theWrappedObject, Qt::TimerId  id);
   void killTimer(QObject* theWrappedObject, int  id);
   bool  moveToThread(QObject* theWrappedObject, QThread*  thread, Qt::Disambiguated_t  arg__2 = Qt::Disambiguated);
   QString  objectName(QObject* theWrappedObject) const;
   void removeEventFilter(QObject* theWrappedObject, QObject*  obj);
   QObject*  sender(QObject* theWrappedObject) const;
   int  senderSignalIndex(QObject* theWrappedObject) const;
   void setObjectName(QObject* theWrappedObject, QAnyStringView  name);
   bool  signalsBlocked(QObject* theWrappedObject) const;
   int  startTimer(QObject* theWrappedObject, int  interval, Qt::TimerType  timerType = Qt::CoarseTimer);
   QThread*  thread(QObject* theWrappedObject) const;
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  event);
   void py_q_timerEvent(QObject* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_timerEvent(event));}
};





class PythonQtShell_QOperatingSystemVersion : public QOperatingSystemVersion
{
public:
    PythonQtShell_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1):QOperatingSystemVersion(osType, vmajor, vminor, vmicro),_wrapper(nullptr) {};
    PythonQtShell_QOperatingSystemVersion(const QOperatingSystemVersionBase&  osversion):QOperatingSystemVersion(osversion),_wrapper(nullptr) {};

   ~PythonQtShell_QOperatingSystemVersion();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOperatingSystemVersion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OSType )
enum OSType{
  Unknown = QOperatingSystemVersion::Unknown,   Windows = QOperatingSystemVersion::Windows,   MacOS = QOperatingSystemVersion::MacOS,   IOS = QOperatingSystemVersion::IOS,   TvOS = QOperatingSystemVersion::TvOS,   WatchOS = QOperatingSystemVersion::WatchOS,   Android = QOperatingSystemVersion::Android,   VisionOS = QOperatingSystemVersion::VisionOS};
public Q_SLOTS:
QOperatingSystemVersion* new_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1);
QOperatingSystemVersion* new_QOperatingSystemVersion(const QOperatingSystemVersionBase&  osversion);
void delete_QOperatingSystemVersion(QOperatingSystemVersion* obj) { delete obj; }
   QOperatingSystemVersion  static_QOperatingSystemVersion_current();
   QOperatingSystemVersion::OSType  static_QOperatingSystemVersion_currentType();
   QOperatingSystemVersion::OSType  type(QOperatingSystemVersion* theWrappedObject) const;
    QString py_toString(QOperatingSystemVersion*);
};





class PythonQtShell_QOperatingSystemVersionBase : public QOperatingSystemVersionBase
{
public:
    PythonQtShell_QOperatingSystemVersionBase():QOperatingSystemVersionBase(),_wrapper(nullptr) {};
    PythonQtShell_QOperatingSystemVersionBase(QOperatingSystemVersionBase::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1):QOperatingSystemVersionBase(osType, vmajor, vminor, vmicro),_wrapper(nullptr) {};

   ~PythonQtShell_QOperatingSystemVersionBase();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QOperatingSystemVersionBase : public QOperatingSystemVersionBase
{ public:
static inline int  promoted_compare(QOperatingSystemVersionBase  v1, QOperatingSystemVersionBase  v2) { return compare(v1, v2); }
};

class PythonQtWrapper_QOperatingSystemVersionBase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OSType )
enum OSType{
  Unknown = QOperatingSystemVersionBase::Unknown,   Windows = QOperatingSystemVersionBase::Windows,   MacOS = QOperatingSystemVersionBase::MacOS,   IOS = QOperatingSystemVersionBase::IOS,   TvOS = QOperatingSystemVersionBase::TvOS,   WatchOS = QOperatingSystemVersionBase::WatchOS,   Android = QOperatingSystemVersionBase::Android,   VisionOS = QOperatingSystemVersionBase::VisionOS};
public Q_SLOTS:
QOperatingSystemVersionBase* new_QOperatingSystemVersionBase();
QOperatingSystemVersionBase* new_QOperatingSystemVersionBase(QOperatingSystemVersionBase::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1);
void delete_QOperatingSystemVersionBase(QOperatingSystemVersionBase* obj) { delete obj; }
   int  static_QOperatingSystemVersionBase_compare(QOperatingSystemVersionBase  v1, QOperatingSystemVersionBase  v2);
   QOperatingSystemVersionBase  static_QOperatingSystemVersionBase_current();
   QOperatingSystemVersionBase::OSType  static_QOperatingSystemVersionBase_currentType();
   int  majorVersion(QOperatingSystemVersionBase* theWrappedObject) const;
   int  microVersion(QOperatingSystemVersionBase* theWrappedObject) const;
   int  minorVersion(QOperatingSystemVersionBase* theWrappedObject) const;
   QString  name(QOperatingSystemVersionBase* theWrappedObject) const;
   QString  static_QOperatingSystemVersionBase_name(QOperatingSystemVersionBase  osversion);
   bool  __lt__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs);
   bool  __le__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs);
   bool  __gt__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs);
   bool  __ge__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs);
   int  segmentCount(QOperatingSystemVersionBase* theWrappedObject) const;
   QOperatingSystemVersionBase::OSType  type(QOperatingSystemVersionBase* theWrappedObject) const;
   QVersionNumber  version(QOperatingSystemVersionBase* theWrappedObject) const;
};





class PythonQtShell_QOperatingSystemVersionUnexported : public QOperatingSystemVersionUnexported
{
public:
    PythonQtShell_QOperatingSystemVersionUnexported(QOperatingSystemVersionBase  other):QOperatingSystemVersionUnexported(other),_wrapper(nullptr) {};

   ~PythonQtShell_QOperatingSystemVersionUnexported();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOperatingSystemVersionUnexported : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOperatingSystemVersionUnexported* new_QOperatingSystemVersionUnexported(QOperatingSystemVersionBase  other);
void delete_QOperatingSystemVersionUnexported(QOperatingSystemVersionUnexported* obj) { delete obj; }
};





class PythonQtShell_QParallelAnimationGroup : public QParallelAnimationGroup
{
public:
    PythonQtShell_QParallelAnimationGroup(QObject*  parent = nullptr):QParallelAnimationGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QParallelAnimationGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  currentTime) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QParallelAnimationGroup : public QParallelAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QParallelAnimationGroup::duration(); }
inline bool  py_q_event(QEvent*  event) { return QParallelAnimationGroup::event(event); }
inline void py_q_updateCurrentTime(int  currentTime) { QParallelAnimationGroup::updateCurrentTime(currentTime); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QParallelAnimationGroup::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QParallelAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QParallelAnimationGroup : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QParallelAnimationGroup* new_QParallelAnimationGroup(QObject*  parent = nullptr);
void delete_QParallelAnimationGroup(QParallelAnimationGroup* obj) { delete obj; }
   int  py_q_duration(QParallelAnimationGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QParallelAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_event(event));}
   void py_q_updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateCurrentTime(currentTime));}
   void py_q_updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateDirection(direction));}
   void py_q_updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QPauseAnimation : public QPauseAnimation
{
public:
    PythonQtShell_QPauseAnimation(QObject*  parent = nullptr):QPauseAnimation(parent),_wrapper(nullptr) {};
    PythonQtShell_QPauseAnimation(int  msecs, QObject*  parent = nullptr):QPauseAnimation(msecs, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPauseAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPauseAnimation : public QPauseAnimation
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline int  py_q_duration() const { return QPauseAnimation::duration(); }
inline bool  py_q_event(QEvent*  e) { return QPauseAnimation::event(e); }
inline void py_q_updateCurrentTime(int  arg__1) { QPauseAnimation::updateCurrentTime(arg__1); }
};

class PythonQtWrapper_QPauseAnimation : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPauseAnimation* new_QPauseAnimation(QObject*  parent = nullptr);
QPauseAnimation* new_QPauseAnimation(int  msecs, QObject*  parent = nullptr);
void delete_QPauseAnimation(QPauseAnimation* obj) { delete obj; }
   int  py_q_duration(QPauseAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QPauseAnimation* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_event(e));}
   void setDuration(QPauseAnimation* theWrappedObject, int  msecs);
   void py_q_updateCurrentTime(QPauseAnimation* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
};





class PythonQtWrapper_QPersistentModelIndex : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPersistentModelIndex* new_QPersistentModelIndex();
QPersistentModelIndex* new_QPersistentModelIndex(const QModelIndex&  index);
QPersistentModelIndex* new_QPersistentModelIndex(const QPersistentModelIndex&  other);
void delete_QPersistentModelIndex(QPersistentModelIndex* obj) { delete obj; }
   int  column(QPersistentModelIndex* theWrappedObject) const;
   const void*  constInternalPointer(QPersistentModelIndex* theWrappedObject) const;
   QVariant  data(QPersistentModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   Qt::ItemFlags  flags(QPersistentModelIndex* theWrappedObject) const;
   quintptr  internalId(QPersistentModelIndex* theWrappedObject) const;
   bool  isValid(QPersistentModelIndex* theWrappedObject) const;
   const QAbstractItemModel*  model(QPersistentModelIndex* theWrappedObject) const;
   void multiData(QPersistentModelIndex* theWrappedObject, QModelRoleDataSpan  roleDataSpan) const;
   QModelIndex  operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const;
   bool  __ne__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __ne__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __lt__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __lt__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __le__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __le__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __eq__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __eq__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __gt__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __gt__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   bool  __ge__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs);
   bool  __ge__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs);
   QModelIndex  parent(QPersistentModelIndex* theWrappedObject) const;
   int  row(QPersistentModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const;
   void swap(QPersistentModelIndex* theWrappedObject, QPersistentModelIndex&  other);
    QString py_toString(QPersistentModelIndex*);
    bool __nonzero__(QPersistentModelIndex* obj) { return obj->isValid(); }
};





class PythonQtShell_QProcess : public QProcess
{
public:
    PythonQtShell_QProcess(QObject*  parent = nullptr):QProcess(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QProcess() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  seek(qint64  pos) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs = 30000) override;
bool  waitForReadyRead(int  msecs = 30000) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QProcess : public QProcess
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline void promoted_setProcessState(QProcess::ProcessState  state) { this->setProcessState(state); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline qint64  py_q_bytesToWrite() const { return QProcess::bytesToWrite(); }
inline void py_q_close() { QProcess::close(); }
inline bool  py_q_isSequential() const { return QProcess::isSequential(); }
inline bool  py_q_open(QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite) { return QProcess::open(mode); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QProcess::readData(data, maxlen); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QProcess::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QProcess::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QProcess::writeData(data, len); }
};

class PythonQtWrapper_QProcess : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QProcess* new_QProcess(QObject*  parent = nullptr);
void delete_QProcess(QProcess* obj) { delete obj; }
   QStringList  arguments(QProcess* theWrappedObject) const;
   qint64  py_q_bytesToWrite(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_bytesToWrite());}
   void py_q_close(QProcess* theWrappedObject){  (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_close());}
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void closeWriteChannel(QProcess* theWrappedObject);
   QStringList  environment(QProcess* theWrappedObject) const;
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments = {});
   int  exitCode(QProcess* theWrappedObject) const;
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   QProcess::InputChannelMode  inputChannelMode(QProcess* theWrappedObject) const;
   bool  py_q_isSequential(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_isSequential());}
   QString  static_QProcess_nullDevice();
   bool  py_q_open(QProcess* theWrappedObject, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_open(mode));}
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   QProcessEnvironment  processEnvironment(QProcess* theWrappedObject) const;
   qint64  processId(QProcess* theWrappedObject) const;
   QString  program(QProcess* theWrappedObject) const;
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   qint64  py_q_readData(QProcess* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_readData(data, maxlen));}
   void setArguments(QProcess* theWrappedObject, const QStringList&  arguments);
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   void setInputChannelMode(QProcess* theWrappedObject, QProcess::InputChannelMode  mode);
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   void setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment);
   void setProcessState(QProcess* theWrappedObject, QProcess::ProcessState  state);
   void setProgram(QProcess* theWrappedObject, const QString&  program);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODeviceBase::OpenMode  mode = QIODeviceBase::Truncate);
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODeviceBase::OpenMode  mode = QIODeviceBase::Truncate);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   QStringList  static_QProcess_splitCommand(QStringView  command);
   void start(QProcess* theWrappedObject, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite);
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments = {}, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite);
   void startCommand(QProcess* theWrappedObject, const QString&  command, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments = {}, const QString&  workingDirectory = QString(), qint64*  pid = nullptr);
   bool  startDetached(QProcess* theWrappedObject, qint64*  pid = nullptr);
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   QStringList  static_QProcess_systemEnvironment();
   bool  py_q_waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   QString  workingDirectory(QProcess* theWrappedObject) const;
   qint64  py_q_writeData(QProcess* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QProcessEnvironment : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Initialization )
enum Initialization{
  InheritFromParent = QProcessEnvironment::InheritFromParent};
public Q_SLOTS:
QProcessEnvironment* new_QProcessEnvironment();
QProcessEnvironment* new_QProcessEnvironment(QProcessEnvironment::Initialization  arg__1);
QProcessEnvironment* new_QProcessEnvironment(const QProcessEnvironment&  other);
void delete_QProcessEnvironment(QProcessEnvironment* obj) { delete obj; }
   void clear(QProcessEnvironment* theWrappedObject);
   bool  contains(QProcessEnvironment* theWrappedObject, const QString&  name) const;
   bool  inheritsFromParent(QProcessEnvironment* theWrappedObject) const;
   void insert(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  e);
   void insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value);
   bool  isEmpty(QProcessEnvironment* theWrappedObject) const;
   QStringList  keys(QProcessEnvironment* theWrappedObject) const;
   bool  __ne__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  rhs);
   QProcessEnvironment*  operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other);
   bool  __eq__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  rhs);
   void remove(QProcessEnvironment* theWrappedObject, const QString&  name);
   void swap(QProcessEnvironment* theWrappedObject, QProcessEnvironment&  other);
   QProcessEnvironment  static_QProcessEnvironment_systemEnvironment();
   QStringList  toStringList(QProcessEnvironment* theWrappedObject) const;
   QString  value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
    bool __nonzero__(QProcessEnvironment* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QPropertyAnimation : public QPropertyAnimation
{
public:
    PythonQtShell_QPropertyAnimation(QObject*  parent = nullptr):QPropertyAnimation(parent),_wrapper(nullptr) {};
    PythonQtShell_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = nullptr):QPropertyAnimation(target, propertyName, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPropertyAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateCurrentValue(const QVariant&  value) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPropertyAnimation : public QPropertyAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentValue(const QVariant&  value) { this->updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline bool  py_q_event(QEvent*  event) { return QPropertyAnimation::event(event); }
inline void py_q_updateCurrentValue(const QVariant&  value) { QPropertyAnimation::updateCurrentValue(value); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QPropertyAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QPropertyAnimation : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPropertyAnimation* new_QPropertyAnimation(QObject*  parent = nullptr);
QPropertyAnimation* new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = nullptr);
void delete_QPropertyAnimation(QPropertyAnimation* obj) { delete obj; }
   bool  py_q_event(QPropertyAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_event(event));}
   QByteArray  propertyName(QPropertyAnimation* theWrappedObject) const;
   void setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName);
   void setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target);
   QObject*  targetObject(QPropertyAnimation* theWrappedObject) const;
   void py_q_updateCurrentValue(QPropertyAnimation* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_updateCurrentValue(value));}
   void py_q_updateState(QPropertyAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtWrapper_QRandomGenerator : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRandomGenerator* new_QRandomGenerator(const QRandomGenerator&  other);
QRandomGenerator* new_QRandomGenerator(const unsigned int*  begin, const unsigned int*  end);
QRandomGenerator* new_QRandomGenerator(const unsigned int*  seedBuffer, qsizetype  len);
QRandomGenerator* new_QRandomGenerator(unsigned int  seedValue = 1);
void delete_QRandomGenerator(QRandomGenerator* obj) { delete obj; }
   double  bounded(QRandomGenerator* theWrappedObject, double  highest);
   int  bounded(QRandomGenerator* theWrappedObject, int  highest);
   int  bounded(QRandomGenerator* theWrappedObject, int  lowest, int  highest);
   qint64  bounded(QRandomGenerator* theWrappedObject, int  lowest, qint64  highest);
   qint64  bounded(QRandomGenerator* theWrappedObject, qint64  highest);
   qint64  bounded(QRandomGenerator* theWrappedObject, qint64  lowest, int  highest);
   qint64  bounded(QRandomGenerator* theWrappedObject, qint64  lowest, qint64  highest);
   quint64  bounded(QRandomGenerator* theWrappedObject, quint64  highest);
   quint64  bounded(QRandomGenerator* theWrappedObject, quint64  lowest, quint64  highest);
   unsigned int  bounded(QRandomGenerator* theWrappedObject, unsigned int  highest);
   unsigned int  bounded(QRandomGenerator* theWrappedObject, unsigned int  lowest, unsigned int  highest);
   void discard(QRandomGenerator* theWrappedObject, quint64  z);
   unsigned int  generate(QRandomGenerator* theWrappedObject);
   void generate(QRandomGenerator* theWrappedObject, unsigned int*  begin, unsigned int*  end);
   quint64  generate64(QRandomGenerator* theWrappedObject);
   double  generateDouble(QRandomGenerator* theWrappedObject);
   QRandomGenerator*  static_QRandomGenerator_global();
   unsigned int  static_QRandomGenerator_max();
   unsigned int  static_QRandomGenerator_min();
   bool  __ne__(QRandomGenerator* theWrappedObject, const QRandomGenerator&  rng2);
   unsigned int  operator_cast_(QRandomGenerator* theWrappedObject);
   QRandomGenerator*  operator_assign(QRandomGenerator* theWrappedObject, const QRandomGenerator&  other);
   bool  __eq__(QRandomGenerator* theWrappedObject, const QRandomGenerator&  rng2);
   QRandomGenerator  static_QRandomGenerator_securelySeeded();
   void seed(QRandomGenerator* theWrappedObject, unsigned int  s = 1);
   QRandomGenerator*  static_QRandomGenerator_system();
};





class PythonQtWrapper_QRandomGenerator64 : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRandomGenerator64* new_QRandomGenerator64(const QRandomGenerator&  other);
QRandomGenerator64* new_QRandomGenerator64(const unsigned int*  begin, const unsigned int*  end);
QRandomGenerator64* new_QRandomGenerator64(const unsigned int*  seedBuffer, qsizetype  len);
QRandomGenerator64* new_QRandomGenerator64(unsigned int  seedValue = 1);
void delete_QRandomGenerator64(QRandomGenerator64* obj) { delete obj; }
   void discard(QRandomGenerator64* theWrappedObject, quint64  z);
   quint64  generate(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64*  static_QRandomGenerator64_global();
   quint64  static_QRandomGenerator64_max();
   quint64  static_QRandomGenerator64_min();
   quint64  operator_cast_(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64  static_QRandomGenerator64_securelySeeded();
   QRandomGenerator64*  static_QRandomGenerator64_system();
};





class PythonQtWrapper_QReadLocker : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QReadLocker* new_QReadLocker(QReadWriteLock*  readWriteLock);
void delete_QReadLocker(QReadLocker* obj) { delete obj; }
   QReadWriteLock*  readWriteLock(QReadLocker* theWrappedObject) const;
   void relock(QReadLocker* theWrappedObject);
   void unlock(QReadLocker* theWrappedObject);

    void __enter__(QReadLocker* /*self*/) {}
    void __exit__(QReadLocker* self, PyObject* /*type*/, PyObject* /*value*/, PyObject* /*traceback*/) { self->unlock(); }
    
};





class PythonQtShell_QReadWriteLock : public QReadWriteLock
{
public:
    PythonQtShell_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode = QReadWriteLock::NonRecursive):QReadWriteLock(recursionMode),_wrapper(nullptr) {};

   ~PythonQtShell_QReadWriteLock();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public Q_SLOTS:
QReadWriteLock* new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode = QReadWriteLock::NonRecursive);
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; }
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
};





class PythonQtWrapper_QRecursiveMutex : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRecursiveMutex* new_QRecursiveMutex();
void delete_QRecursiveMutex(QRecursiveMutex* obj) { delete obj; }
   void lock(QRecursiveMutex* theWrappedObject);
   bool  tryLock(QRecursiveMutex* theWrappedObject, QDeadlineTimer  timer = {});
   bool  tryLock(QRecursiveMutex* theWrappedObject, int  timeout);
   bool  try_lock(QRecursiveMutex* theWrappedObject);
   void unlock(QRecursiveMutex* theWrappedObject);
};





class PythonQtWrapper_QRegularExpressionMatch : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRegularExpressionMatch* new_QRegularExpressionMatch();
QRegularExpressionMatch* new_QRegularExpressionMatch(const QRegularExpressionMatch&  match);
void delete_QRegularExpressionMatch(QRegularExpressionMatch* obj) { delete obj; }
   QString  captured(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const;
   QString  captured(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   qsizetype  capturedEnd(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const;
   qsizetype  capturedEnd(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   qsizetype  capturedLength(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const;
   qsizetype  capturedLength(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   qsizetype  capturedStart(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const;
   qsizetype  capturedStart(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   QStringList  capturedTexts(QRegularExpressionMatch* theWrappedObject) const;
   QStringView  capturedView(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const;
   QStringView  capturedView(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   bool  hasCaptured(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const;
   bool  hasCaptured(QRegularExpressionMatch* theWrappedObject, int  nth) const;
   bool  hasMatch(QRegularExpressionMatch* theWrappedObject) const;
   bool  hasPartialMatch(QRegularExpressionMatch* theWrappedObject) const;
   bool  isValid(QRegularExpressionMatch* theWrappedObject) const;
   int  lastCapturedIndex(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpression::MatchOptions  matchOptions(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpression::MatchType  matchType(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpressionMatch*  operator_assign(QRegularExpressionMatch* theWrappedObject, const QRegularExpressionMatch&  match);
   QRegularExpression  regularExpression(QRegularExpressionMatch* theWrappedObject) const;
   void swap(QRegularExpressionMatch* theWrappedObject, QRegularExpressionMatch&  other);
    QString py_toString(QRegularExpressionMatch*);
    bool __nonzero__(QRegularExpressionMatch* obj) { return obj->isValid(); }
};


