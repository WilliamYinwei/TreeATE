#include "com_trolltech_qt_core2.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
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
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimetype.h>
#include <qobject.h>
#include <qoperatingsystemversion.h>
#include <qprocess.h>
#include <qrandom.h>
#include <qreadwritelock.h>
#include <qregularexpression.h>
#include <qthread.h>
#include <qtipccommon.h>
#include <qurl.h>
#include <qversionnumber.h>

QMessageLogger* PythonQtWrapper_QMessageLogger::new_QMessageLogger()
{ 
return new QMessageLogger(); }

QMessageLogger* PythonQtWrapper_QMessageLogger::new_QMessageLogger(const char*  file, int  line, const char*  function)
{ 
return new QMessageLogger(file, line, function); }

QMessageLogger* PythonQtWrapper_QMessageLogger::new_QMessageLogger(const char*  file, int  line, const char*  function, const char*  category)
{ 
return new QMessageLogger(file, line, function, category); }



QMetaClassInfo* PythonQtWrapper_QMetaClassInfo::new_QMetaClassInfo()
{ 
return new QMetaClassInfo(); }

const QMetaObject*  PythonQtWrapper_QMetaClassInfo::enclosingMetaObject(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaClassInfo::name(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaClassInfo::value(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QMetaEnum* PythonQtWrapper_QMetaEnum::new_QMetaEnum()
{ 
return new QMetaEnum(); }

const QMetaObject*  PythonQtWrapper_QMetaEnum::enclosingMetaObject(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaEnum::enumName(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enumName());
}

bool  PythonQtWrapper_QMetaEnum::is64Bit(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->is64Bit());
}

bool  PythonQtWrapper_QMetaEnum::isFlag(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isFlag());
}

bool  PythonQtWrapper_QMetaEnum::isScoped(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isScoped());
}

bool  PythonQtWrapper_QMetaEnum::isValid(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const char*  PythonQtWrapper_QMetaEnum::key(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->key(index));
}

int  PythonQtWrapper_QMetaEnum::keyCount(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->keyCount());
}

int  PythonQtWrapper_QMetaEnum::keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok) const
{
  return ( theWrappedObject->keyToValue(key, ok));
}

int  PythonQtWrapper_QMetaEnum::keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok) const
{
  return ( theWrappedObject->keysToValue(keys, ok));
}

QMetaType  PythonQtWrapper_QMetaEnum::metaType(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->metaType());
}

const char*  PythonQtWrapper_QMetaEnum::name(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaEnum::scope(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}

int  PythonQtWrapper_QMetaEnum::value(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->value(index));
}

const char*  PythonQtWrapper_QMetaEnum::valueToKey(QMetaEnum* theWrappedObject, quint64  value) const
{
  return ( theWrappedObject->valueToKey(value));
}

QByteArray  PythonQtWrapper_QMetaEnum::valueToKeys(QMetaEnum* theWrappedObject, quint64  value) const
{
  return ( theWrappedObject->valueToKeys(value));
}



PythonQtShell_QMetaMethod::~PythonQtShell_QMetaMethod() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMetaMethod* PythonQtWrapper_QMetaMethod::new_QMetaMethod()
{ 
return new PythonQtShell_QMetaMethod(); }

QMetaMethod::Access  PythonQtWrapper_QMetaMethod::access(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->access());
}

int  PythonQtWrapper_QMetaMethod::attributes(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

const QMetaObject*  PythonQtWrapper_QMetaMethod::enclosingMetaObject(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

void PythonQtWrapper_QMetaMethod::getParameterTypes(QMetaMethod* theWrappedObject, int*  types) const
{
  ( theWrappedObject->getParameterTypes(types));
}

bool  PythonQtWrapper_QMetaMethod::isConst(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->isConst());
}

bool  PythonQtWrapper_QMetaMethod::isValid(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QMetaMethod::methodIndex(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodIndex());
}

QByteArray  PythonQtWrapper_QMetaMethod::methodSignature(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodSignature());
}

QMetaMethod::MethodType  PythonQtWrapper_QMetaMethod::methodType(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodType());
}

QByteArray  PythonQtWrapper_QMetaMethod::name(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QByteArrayView  PythonQtWrapper_QMetaMethod::nameView(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->nameView());
}

bool  PythonQtWrapper_QMetaMethod::__ne__(QMetaMethod* theWrappedObject, const QMetaMethod&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QMetaMethod::__eq__(QMetaMethod* theWrappedObject, const QMetaMethod&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

int  PythonQtWrapper_QMetaMethod::parameterCount(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterCount());
}

QMetaType  PythonQtWrapper_QMetaMethod::parameterMetaType(QMetaMethod* theWrappedObject, int  index) const
{
  return ( theWrappedObject->parameterMetaType(index));
}

QList<QByteArray >  PythonQtWrapper_QMetaMethod::parameterNames(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterNames());
}

int  PythonQtWrapper_QMetaMethod::parameterType(QMetaMethod* theWrappedObject, int  index) const
{
  return ( theWrappedObject->parameterType(index));
}

QByteArray  PythonQtWrapper_QMetaMethod::parameterTypeName(QMetaMethod* theWrappedObject, int  index) const
{
  return ( theWrappedObject->parameterTypeName(index));
}

QList<QByteArray >  PythonQtWrapper_QMetaMethod::parameterTypes(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterTypes());
}

int  PythonQtWrapper_QMetaMethod::relativeMethodIndex(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->relativeMethodIndex());
}

QMetaType  PythonQtWrapper_QMetaMethod::returnMetaType(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->returnMetaType());
}

int  PythonQtWrapper_QMetaMethod::returnType(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->returnType());
}

int  PythonQtWrapper_QMetaMethod::revision(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

const char*  PythonQtWrapper_QMetaMethod::tag(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->tag());
}

const char*  PythonQtWrapper_QMetaMethod::typeName(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}



QMetaProperty* PythonQtWrapper_QMetaProperty::new_QMetaProperty()
{ 
return new QMetaProperty(); }

const QMetaObject*  PythonQtWrapper_QMetaProperty::enclosingMetaObject(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

QMetaEnum  PythonQtWrapper_QMetaProperty::enumerator(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enumerator());
}

bool  PythonQtWrapper_QMetaProperty::hasNotifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasNotifySignal());
}

bool  PythonQtWrapper_QMetaProperty::hasStdCppSet(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasStdCppSet());
}

bool  PythonQtWrapper_QMetaProperty::isAlias(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isAlias());
}

bool  PythonQtWrapper_QMetaProperty::isBindable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isBindable());
}

bool  PythonQtWrapper_QMetaProperty::isConstant(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isConstant());
}

bool  PythonQtWrapper_QMetaProperty::isDesignable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isDesignable());
}

bool  PythonQtWrapper_QMetaProperty::isEnumType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isEnumType());
}

bool  PythonQtWrapper_QMetaProperty::isFinal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFinal());
}

bool  PythonQtWrapper_QMetaProperty::isFlagType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFlagType());
}

bool  PythonQtWrapper_QMetaProperty::isOverride(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isOverride());
}

bool  PythonQtWrapper_QMetaProperty::isReadable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QMetaProperty::isRequired(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isRequired());
}

bool  PythonQtWrapper_QMetaProperty::isResettable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isResettable());
}

bool  PythonQtWrapper_QMetaProperty::isScriptable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isScriptable());
}

bool  PythonQtWrapper_QMetaProperty::isStored(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isStored());
}

bool  PythonQtWrapper_QMetaProperty::isUser(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isUser());
}

bool  PythonQtWrapper_QMetaProperty::isValid(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaProperty::isVirtual(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isVirtual());
}

bool  PythonQtWrapper_QMetaProperty::isWritable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QMetaType  PythonQtWrapper_QMetaProperty::metaType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->metaType());
}

const char*  PythonQtWrapper_QMetaProperty::name(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QMetaMethod  PythonQtWrapper_QMetaProperty::notifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignal());
}

int  PythonQtWrapper_QMetaProperty::notifySignalIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignalIndex());
}

int  PythonQtWrapper_QMetaProperty::propertyIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyIndex());
}

QVariant  PythonQtWrapper_QMetaProperty::read(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->read(obj));
}

QVariant  PythonQtWrapper_QMetaProperty::readOnGadget(QMetaProperty* theWrappedObject, const void*  gadget) const
{
  return ( theWrappedObject->readOnGadget(gadget));
}

int  PythonQtWrapper_QMetaProperty::relativePropertyIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->relativePropertyIndex());
}

bool  PythonQtWrapper_QMetaProperty::reset(QMetaProperty* theWrappedObject, QObject*  obj) const
{
  return ( theWrappedObject->reset(obj));
}

bool  PythonQtWrapper_QMetaProperty::resetOnGadget(QMetaProperty* theWrappedObject, void*  gadget) const
{
  return ( theWrappedObject->resetOnGadget(gadget));
}

int  PythonQtWrapper_QMetaProperty::revision(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

QVariant::Type  PythonQtWrapper_QMetaProperty::type(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

int  PythonQtWrapper_QMetaProperty::typeId(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->typeId());
}

const char*  PythonQtWrapper_QMetaProperty::typeName(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}

int  PythonQtWrapper_QMetaProperty::userType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->userType());
}

bool  PythonQtWrapper_QMetaProperty::write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const
{
  return ( theWrappedObject->write(obj, value));
}

bool  PythonQtWrapper_QMetaProperty::writeOnGadget(QMetaProperty* theWrappedObject, void*  gadget, const QVariant&  value) const
{
  return ( theWrappedObject->writeOnGadget(gadget, value));
}



QMetaType* PythonQtWrapper_QMetaType::new_QMetaType()
{ 
return new QMetaType(); }

QMetaType* PythonQtWrapper_QMetaType::new_QMetaType(int  type)
{ 
return new QMetaType(type); }

qsizetype  PythonQtWrapper_QMetaType::alignOf(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->alignOf());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_canConvert(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::canConvert(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_canView(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::canView(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result)
{
  return (QMetaType::compare(lhs, rhs, typeId, result));
}

void*  PythonQtWrapper_QMetaType::static_QMetaType_construct(int  type, void*  where, const void*  copy)
{
  return (QMetaType::construct(type, where, copy));
}

void*  PythonQtWrapper_QMetaType::construct(QMetaType* theWrappedObject, void*  where, const void*  copy) const
{
  return ( theWrappedObject->construct(where, copy));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_convert(QMetaType  fromType, const void*  from, QMetaType  toType, void*  to)
{
  return (QMetaType::convert(fromType, from, toType, to));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId)
{
  return (QMetaType::convert(from, fromTypeId, to, toTypeId));
}

void*  PythonQtWrapper_QMetaType::create(QMetaType* theWrappedObject, const void*  copy) const
{
  return ( theWrappedObject->create(copy));
}

void*  PythonQtWrapper_QMetaType::static_QMetaType_create(int  type, const void*  copy)
{
  return (QMetaType::create(type, copy));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destroy(int  type, void*  data)
{
  (QMetaType::destroy(type, data));
}

void PythonQtWrapper_QMetaType::destroy(QMetaType* theWrappedObject, void*  data) const
{
  ( theWrappedObject->destroy(data));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destruct(int  type, void*  where)
{
  (QMetaType::destruct(type, where));
}

void PythonQtWrapper_QMetaType::destruct(QMetaType* theWrappedObject, void*  data) const
{
  ( theWrappedObject->destruct(data));
}

bool  PythonQtWrapper_QMetaType::equals(QMetaType* theWrappedObject, const void*  lhs, const void*  rhs) const
{
  return ( theWrappedObject->equals(lhs, rhs));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result)
{
  return (QMetaType::equals(lhs, rhs, typeId, result));
}

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::flags(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QMetaType  PythonQtWrapper_QMetaType::static_QMetaType_fromName(QByteArrayView  name)
{
  return (QMetaType::fromName(name));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredConverterFunction(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::hasRegisteredConverterFunction(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::hasRegisteredDataStreamOperators(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->hasRegisteredDataStreamOperators());
}

bool  PythonQtWrapper_QMetaType::hasRegisteredDebugStreamOperator(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->hasRegisteredDebugStreamOperator());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId)
{
  return (QMetaType::hasRegisteredDebugStreamOperator(typeId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredMutableViewFunction(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::hasRegisteredMutableViewFunction(fromType, toType));
}

int  PythonQtWrapper_QMetaType::id(QMetaType* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->id(arg__1));
}

bool  PythonQtWrapper_QMetaType::isCopyConstructible(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isCopyConstructible());
}

bool  PythonQtWrapper_QMetaType::isDefaultConstructible(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isDefaultConstructible());
}

bool  PythonQtWrapper_QMetaType::isDestructible(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isDestructible());
}

bool  PythonQtWrapper_QMetaType::isEqualityComparable(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isEqualityComparable());
}

bool  PythonQtWrapper_QMetaType::isMoveConstructible(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isMoveConstructible());
}

bool  PythonQtWrapper_QMetaType::isOrdered(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isOrdered());
}

bool  PythonQtWrapper_QMetaType::isRegistered(QMetaType* theWrappedObject, Qt::Disambiguated_t  arg__1) const
{
  return ( theWrappedObject->isRegistered(arg__1));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_isRegistered(int  type)
{
  return (QMetaType::isRegistered(type));
}

bool  PythonQtWrapper_QMetaType::isValid(QMetaType* theWrappedObject, Qt::Disambiguated_t  arg__1) const
{
  return ( theWrappedObject->isValid(arg__1));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_load(QDataStream&  stream, int  type, void*  data)
{
  return (QMetaType::load(stream, type, data));
}

bool  PythonQtWrapper_QMetaType::load(QMetaType* theWrappedObject, QDataStream&  stream, void*  data) const
{
  return ( theWrappedObject->load(stream, data));
}

const QMetaObject*  PythonQtWrapper_QMetaType::metaObject(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

const QMetaObject*  PythonQtWrapper_QMetaType::static_QMetaType_metaObjectForType(int  type)
{
  return (QMetaType::metaObjectForType(type));
}

const char*  PythonQtWrapper_QMetaType::name(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QMetaType::__ne__(QMetaType* theWrappedObject, const QMetaType&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QMetaType::__eq__(QMetaType* theWrappedObject, const QMetaType&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QMetaType::static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, QMetaType  type)
{
  (QMetaType::registerNormalizedTypedef(normalizedTypeName, type));
}

void PythonQtWrapper_QMetaType::registerType(QMetaType* theWrappedObject) const
{
  ( theWrappedObject->registerType());
}

bool  PythonQtWrapper_QMetaType::save(QMetaType* theWrappedObject, QDataStream&  stream, const void*  data) const
{
  return ( theWrappedObject->save(stream, data));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_save(QDataStream&  stream, int  type, const void*  data)
{
  return (QMetaType::save(stream, type, data));
}

qsizetype  PythonQtWrapper_QMetaType::sizeOf(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->sizeOf());
}

int  PythonQtWrapper_QMetaType::static_QMetaType_sizeOf(int  type)
{
  return (QMetaType::sizeOf(type));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const QByteArray&  typeName)
{
  return (QMetaType::type(typeName));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const char*  typeName)
{
  return (QMetaType::type(typeName));
}

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::static_QMetaType_typeFlags(int  type)
{
  return (QMetaType::typeFlags(type));
}

const char*  PythonQtWrapper_QMetaType::static_QMetaType_typeName(int  type)
{
  return (QMetaType::typeName(type));
}

QMetaType  PythonQtWrapper_QMetaType::underlyingType(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->underlyingType());
}

void PythonQtWrapper_QMetaType::static_QMetaType_unregisterConverterFunction(QMetaType  from, QMetaType  to)
{
  (QMetaType::unregisterConverterFunction(from, to));
}

void PythonQtWrapper_QMetaType::static_QMetaType_unregisterMetaType(QMetaType  type)
{
  (QMetaType::unregisterMetaType(type));
}

void PythonQtWrapper_QMetaType::static_QMetaType_unregisterMutableViewFunction(QMetaType  from, QMetaType  to)
{
  (QMetaType::unregisterMutableViewFunction(from, to));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_view(QMetaType  fromType, void*  from, QMetaType  toType, void*  to)
{
  return (QMetaType::view(fromType, from, toType, to));
}

QString PythonQtWrapper_QMetaType::py_toString(QMetaType* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QMimeData::~PythonQtShell_QMimeData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMimeData::childEvent(QChildEvent*  event0)
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
  QMimeData::childEvent(event0);
}
void PythonQtShell_QMimeData::customEvent(QEvent*  event0)
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
  QMimeData::customEvent(event0);
}
bool  PythonQtShell_QMimeData::event(QEvent*  event0)
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
  return QMimeData::event(event0);
}
bool  PythonQtShell_QMimeData::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMimeData::eventFilter(watched0, event1);
}
QStringList  PythonQtShell_QMimeData::formats() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("formats");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("formats", methodInfo, result);
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
  return QMimeData::formats();
}
bool  PythonQtShell_QMimeData::hasFormat(const QString&  mimetype0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("hasFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&mimetype0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasFormat", methodInfo, result);
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
  return QMimeData::hasFormat(mimetype0);
}
QVariant  PythonQtShell_QMimeData::retrieveData(const QString&  mimetype0, QMetaType  preferredType1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("retrieveData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QString&" , "QMetaType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue{};
      void* args[3] = {nullptr, (void*)&mimetype0, (void*)&preferredType1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("retrieveData", methodInfo, result);
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
  return QMimeData::retrieveData(mimetype0, preferredType1);
}
void PythonQtShell_QMimeData::timerEvent(QTimerEvent*  event0)
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
  QMimeData::timerEvent(event0);
}
QMimeData* PythonQtWrapper_QMimeData::new_QMimeData()
{ 
return new PythonQtShell_QMimeData(); }

const QMetaObject* PythonQtShell_QMimeData::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMimeData::staticMetaObject);
  } else {
    return &QMimeData::staticMetaObject;
  }
}
int PythonQtShell_QMimeData::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMimeData::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QMimeData::clear(QMimeData* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QVariant  PythonQtWrapper_QMimeData::colorData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->colorData());
}

QByteArray  PythonQtWrapper_QMimeData::data(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->data(mimetype));
}

QStringList  PythonQtWrapper_QMimeData::formats(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->formats());
}

bool  PythonQtWrapper_QMimeData::hasColor(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasColor());
}

bool  PythonQtWrapper_QMimeData::hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->hasFormat(mimetype));
}

bool  PythonQtWrapper_QMimeData::hasHtml(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasHtml());
}

bool  PythonQtWrapper_QMimeData::hasImage(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasImage());
}

bool  PythonQtWrapper_QMimeData::hasText(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasText());
}

bool  PythonQtWrapper_QMimeData::hasUrls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasUrls());
}

QString  PythonQtWrapper_QMimeData::html(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->html());
}

QVariant  PythonQtWrapper_QMimeData::imageData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->imageData());
}

void PythonQtWrapper_QMimeData::removeFormat(QMimeData* theWrappedObject, const QString&  mimetype)
{
  ( theWrappedObject->removeFormat(mimetype));
}

QVariant  PythonQtWrapper_QMimeData::retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QMetaType  preferredType) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_retrieveData(mimetype, preferredType));
}

void PythonQtWrapper_QMimeData::setColorData(QMimeData* theWrappedObject, const QVariant&  color)
{
  ( theWrappedObject->setColorData(color));
}

void PythonQtWrapper_QMimeData::setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data)
{
  ( theWrappedObject->setData(mimetype, data));
}

void PythonQtWrapper_QMimeData::setHtml(QMimeData* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QMimeData::setImageData(QMimeData* theWrappedObject, const QVariant&  image)
{
  ( theWrappedObject->setImageData(image));
}

void PythonQtWrapper_QMimeData::setText(QMimeData* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QMimeData::setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls)
{
  ( theWrappedObject->setUrls(urls));
}

QString  PythonQtWrapper_QMimeData::text(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QList<QUrl >  PythonQtWrapper_QMimeData::urls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->urls());
}



QMimeDatabase* PythonQtWrapper_QMimeDatabase::new_QMimeDatabase()
{ 
return new QMimeDatabase(); }

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::allMimeTypes(QMimeDatabase* theWrappedObject) const
{
  return ( theWrappedObject->allMimeTypes());
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForData(device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForData(data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileInfo, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileName, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const
{
  return ( theWrappedObject->mimeTypeForName(nameOrAlias));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->mimeTypeForUrl(url));
}

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->mimeTypesForFileName(fileName));
}

QString  PythonQtWrapper_QMimeDatabase::suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->suffixForFileName(fileName));
}



QMimeType* PythonQtWrapper_QMimeType::new_QMimeType()
{ 
return new QMimeType(); }

QMimeType* PythonQtWrapper_QMimeType::new_QMimeType(const QMimeType&  other)
{ 
return new QMimeType(other); }

QStringList  PythonQtWrapper_QMimeType::aliases(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->aliases());
}

QStringList  PythonQtWrapper_QMimeType::allAncestors(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->allAncestors());
}

QString  PythonQtWrapper_QMimeType::comment(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->comment());
}

QString  PythonQtWrapper_QMimeType::filterString(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->filterString());
}

QString  PythonQtWrapper_QMimeType::genericIconName(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->genericIconName());
}

QStringList  PythonQtWrapper_QMimeType::globPatterns(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->globPatterns());
}

QString  PythonQtWrapper_QMimeType::iconName(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->iconName());
}

bool  PythonQtWrapper_QMimeType::inherits(QMimeType* theWrappedObject, const QString&  mimeTypeName) const
{
  return ( theWrappedObject->inherits(mimeTypeName));
}

bool  PythonQtWrapper_QMimeType::isDefault(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

bool  PythonQtWrapper_QMimeType::isValid(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QMimeType::name(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QMimeType::__ne__(QMimeType* theWrappedObject, const QMimeType&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QMimeType*  PythonQtWrapper_QMimeType::operator_assign(QMimeType* theWrappedObject, const QMimeType&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QMimeType::__eq__(QMimeType* theWrappedObject, const QMimeType&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QStringList  PythonQtWrapper_QMimeType::parentMimeTypes(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->parentMimeTypes());
}

QString  PythonQtWrapper_QMimeType::preferredSuffix(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->preferredSuffix());
}

QStringList  PythonQtWrapper_QMimeType::suffixes(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->suffixes());
}

void PythonQtWrapper_QMimeType::swap(QMimeType* theWrappedObject, QMimeType&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QMimeType::py_toString(QMimeType* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex()
{ 
return new QModelIndex(); }

int  PythonQtWrapper_QModelIndex::column(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

const void*  PythonQtWrapper_QModelIndex::constInternalPointer(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->constInternalPointer());
}

QVariant  PythonQtWrapper_QModelIndex::data(QModelIndex* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

Qt::ItemFlags  PythonQtWrapper_QModelIndex::flags(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

quintptr  PythonQtWrapper_QModelIndex::internalId(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalId());
}

void*  PythonQtWrapper_QModelIndex::internalPointer(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalPointer());
}

bool  PythonQtWrapper_QModelIndex::isValid(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QAbstractItemModel*  PythonQtWrapper_QModelIndex::model(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

void PythonQtWrapper_QModelIndex::multiData(QModelIndex* theWrappedObject, QModelRoleDataSpan  roleDataSpan) const
{
  ( theWrappedObject->multiData(roleDataSpan));
}

bool  PythonQtWrapper_QModelIndex::__ne__(QModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QModelIndex::__ne__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QModelIndex::__lt__(QModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QModelIndex::__lt__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QModelIndex::__le__(QModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QModelIndex::__le__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QModelIndex::__eq__(QModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QModelIndex::__eq__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QModelIndex::__gt__(QModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QModelIndex::__gt__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QModelIndex::__ge__(QModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

bool  PythonQtWrapper_QModelIndex::__ge__(QModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

QModelIndex  PythonQtWrapper_QModelIndex::parent(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

int  PythonQtWrapper_QModelIndex::row(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

QModelIndex  PythonQtWrapper_QModelIndex::sibling(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->sibling(row, column));
}

QModelIndex  PythonQtWrapper_QModelIndex::siblingAtColumn(QModelIndex* theWrappedObject, int  column) const
{
  return ( theWrappedObject->siblingAtColumn(column));
}

QModelIndex  PythonQtWrapper_QModelIndex::siblingAtRow(QModelIndex* theWrappedObject, int  row) const
{
  return ( theWrappedObject->siblingAtRow(row));
}

QString PythonQtWrapper_QModelIndex::py_toString(QModelIndex* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QModelRoleData* PythonQtWrapper_QModelRoleData::new_QModelRoleData(int  role)
{ 
return new QModelRoleData(role); }

void PythonQtWrapper_QModelRoleData::clearData(QModelRoleData* theWrappedObject)
{
  ( theWrappedObject->clearData());
}

QVariant*  PythonQtWrapper_QModelRoleData::data(QModelRoleData* theWrappedObject)
{
  return &( theWrappedObject->data());
}

const QVariant*  PythonQtWrapper_QModelRoleData::data(QModelRoleData* theWrappedObject) const
{
  return &( theWrappedObject->data());
}

int  PythonQtWrapper_QModelRoleData::role(QModelRoleData* theWrappedObject) const
{
  return ( theWrappedObject->role());
}



QModelRoleDataSpan* PythonQtWrapper_QModelRoleDataSpan::new_QModelRoleDataSpan()
{ 
return new QModelRoleDataSpan(); }

QModelRoleDataSpan* PythonQtWrapper_QModelRoleDataSpan::new_QModelRoleDataSpan(QModelRoleData&  modelRoleData)
{ 
return new QModelRoleDataSpan(modelRoleData); }

QModelRoleDataSpan* PythonQtWrapper_QModelRoleDataSpan::new_QModelRoleDataSpan(QModelRoleData*  modelRoleData, qsizetype  len)
{ 
return new QModelRoleDataSpan(modelRoleData, len); }

QModelRoleData*  PythonQtWrapper_QModelRoleDataSpan::begin(QModelRoleDataSpan* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

QModelRoleData*  PythonQtWrapper_QModelRoleDataSpan::data(QModelRoleDataSpan* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QVariant*  PythonQtWrapper_QModelRoleDataSpan::dataForRole(QModelRoleDataSpan* theWrappedObject, int  role) const
{
  return ( theWrappedObject->dataForRole(role));
}

QModelRoleData*  PythonQtWrapper_QModelRoleDataSpan::end(QModelRoleDataSpan* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

qsizetype  PythonQtWrapper_QModelRoleDataSpan::length(QModelRoleDataSpan* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QModelRoleData*  PythonQtWrapper_QModelRoleDataSpan::operator_subscript(QModelRoleDataSpan* theWrappedObject, qsizetype  index) const
{
  return &( (*theWrappedObject)[index]);
}

qsizetype  PythonQtWrapper_QModelRoleDataSpan::size(QModelRoleDataSpan* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



QMutex* PythonQtWrapper_QMutex::new_QMutex()
{ 
return new QMutex(); }

bool  PythonQtWrapper_QMutex::tryLock(QMutex* theWrappedObject, QDeadlineTimer  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

bool  PythonQtWrapper_QMutex::tryLock(QMutex* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

bool  PythonQtWrapper_QMutex::try_lock(QMutex* theWrappedObject)
{
  return ( theWrappedObject->try_lock());
}



PythonQtShell_QNativeIpcKey::~PythonQtShell_QNativeIpcKey() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QNativeIpcKey* PythonQtWrapper_QNativeIpcKey::new_QNativeIpcKey()
{ 
return new PythonQtShell_QNativeIpcKey(); }

QNativeIpcKey* PythonQtWrapper_QNativeIpcKey::new_QNativeIpcKey(QNativeIpcKey::Type  type)
{ 
return new PythonQtShell_QNativeIpcKey(type); }

QNativeIpcKey* PythonQtWrapper_QNativeIpcKey::new_QNativeIpcKey(const QNativeIpcKey&  other)
{ 
return new PythonQtShell_QNativeIpcKey(other); }

QNativeIpcKey* PythonQtWrapper_QNativeIpcKey::new_QNativeIpcKey(const QString&  k, QNativeIpcKey::Type  type)
{ 
return new PythonQtShell_QNativeIpcKey(k, type); }

QNativeIpcKey  PythonQtWrapper_QNativeIpcKey::static_QNativeIpcKey_fromString(const QString&  string)
{
  return (QNativeIpcKey::fromString(string));
}

bool  PythonQtWrapper_QNativeIpcKey::isEmpty(QNativeIpcKey* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QNativeIpcKey::isValid(QNativeIpcKey* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QNativeIpcKey::Type  PythonQtWrapper_QNativeIpcKey::static_QNativeIpcKey_legacyDefaultTypeForOs()
{
  return (QNativeIpcKey::legacyDefaultTypeForOs());
}

QString  PythonQtWrapper_QNativeIpcKey::nativeKey(QNativeIpcKey* theWrappedObject) const
{
  return ( theWrappedObject->nativeKey());
}

bool  PythonQtWrapper_QNativeIpcKey::__ne__(QNativeIpcKey* theWrappedObject, const QNativeIpcKey&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QNativeIpcKey*  PythonQtWrapper_QNativeIpcKey::operator_assign(QNativeIpcKey* theWrappedObject, const QNativeIpcKey&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QNativeIpcKey::__eq__(QNativeIpcKey* theWrappedObject, const QNativeIpcKey&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QNativeIpcKey::setNativeKey(QNativeIpcKey* theWrappedObject, const QString&  newKey)
{
  ( theWrappedObject->setNativeKey(newKey));
}

void PythonQtWrapper_QNativeIpcKey::setType(QNativeIpcKey* theWrappedObject, QNativeIpcKey::Type  type)
{
  ( theWrappedObject->setType(type));
}

void PythonQtWrapper_QNativeIpcKey::swap(QNativeIpcKey* theWrappedObject, QNativeIpcKey&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QNativeIpcKey::toString(QNativeIpcKey* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QNativeIpcKey::Type  PythonQtWrapper_QNativeIpcKey::type(QNativeIpcKey* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QNativeIpcKey::py_toString(QNativeIpcKey* obj) { return obj->toString(); }


PythonQtShell_QObject::~PythonQtShell_QObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QObject::childEvent(QChildEvent*  event0)
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
  QObject::childEvent(event0);
}
void PythonQtShell_QObject::customEvent(QEvent*  event0)
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
  QObject::customEvent(event0);
}
bool  PythonQtShell_QObject::event(QEvent*  event0)
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
  return QObject::event(event0);
}
bool  PythonQtShell_QObject::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QObject::eventFilter(watched0, event1);
}
void PythonQtShell_QObject::timerEvent(QTimerEvent*  event0)
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
  QObject::timerEvent(event0);
}
QObject* PythonQtWrapper_QObject::new_QObject(QObject*  parent)
{ 
return new PythonQtShell_QObject(parent); }

const QMetaObject* PythonQtShell_QObject::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QObject::staticMetaObject);
  } else {
    return &QObject::staticMetaObject;
  }
}
int PythonQtShell_QObject::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QObject::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QObject::blockSignals(QObject* theWrappedObject, bool  b)
{
  return ( theWrappedObject->blockSignals(b));
}

void PythonQtWrapper_QObject::childEvent(QObject* theWrappedObject, QChildEvent*  event)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_childEvent(event));
}

const QList<QObject* >*  PythonQtWrapper_QObject::children(QObject* theWrappedObject) const
{
  return &( theWrappedObject->children());
}

void PythonQtWrapper_QObject::customEvent(QObject* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_customEvent(event));
}

void PythonQtWrapper_QObject::dumpObjectInfo(QObject* theWrappedObject) const
{
  ( theWrappedObject->dumpObjectInfo());
}

void PythonQtWrapper_QObject::dumpObjectTree(QObject* theWrappedObject) const
{
  ( theWrappedObject->dumpObjectTree());
}

QList<QByteArray >  PythonQtWrapper_QObject::dynamicPropertyNames(QObject* theWrappedObject) const
{
  return ( theWrappedObject->dynamicPropertyNames());
}

bool  PythonQtWrapper_QObject::event(QObject* theWrappedObject, QEvent*  event)
{
  return ( theWrappedObject->event(event));
}

bool  PythonQtWrapper_QObject::eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event)
{
  return ( theWrappedObject->eventFilter(watched, event));
}

void PythonQtWrapper_QObject::installEventFilter(QObject* theWrappedObject, QObject*  filterObj)
{
  ( theWrappedObject->installEventFilter(filterObj));
}

bool  PythonQtWrapper_QObject::isQmlExposed(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isQmlExposed());
}

bool  PythonQtWrapper_QObject::isQuickItemType(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isQuickItemType());
}

bool  PythonQtWrapper_QObject::isSignalConnected(QObject* theWrappedObject, const QMetaMethod&  signal) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_isSignalConnected(signal));
}

bool  PythonQtWrapper_QObject::isWidgetType(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isWidgetType());
}

bool  PythonQtWrapper_QObject::isWindowType(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isWindowType());
}

void PythonQtWrapper_QObject::killTimer(QObject* theWrappedObject, Qt::TimerId  id)
{
  ( theWrappedObject->killTimer(id));
}

void PythonQtWrapper_QObject::killTimer(QObject* theWrappedObject, int  id)
{
  ( theWrappedObject->killTimer(id));
}

bool  PythonQtWrapper_QObject::moveToThread(QObject* theWrappedObject, QThread*  thread, Qt::Disambiguated_t  arg__2)
{
  return ( theWrappedObject->moveToThread(thread, arg__2));
}

QString  PythonQtWrapper_QObject::objectName(QObject* theWrappedObject) const
{
  return ( theWrappedObject->objectName());
}

void PythonQtWrapper_QObject::removeEventFilter(QObject* theWrappedObject, QObject*  obj)
{
  ( theWrappedObject->removeEventFilter(obj));
}

QObject*  PythonQtWrapper_QObject::sender(QObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_sender());
}

int  PythonQtWrapper_QObject::senderSignalIndex(QObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_senderSignalIndex());
}

void PythonQtWrapper_QObject::setObjectName(QObject* theWrappedObject, QAnyStringView  name)
{
  ( theWrappedObject->setObjectName(name));
}

bool  PythonQtWrapper_QObject::signalsBlocked(QObject* theWrappedObject) const
{
  return ( theWrappedObject->signalsBlocked());
}

int  PythonQtWrapper_QObject::startTimer(QObject* theWrappedObject, int  interval, Qt::TimerType  timerType)
{
  return ( theWrappedObject->startTimer(interval, timerType));
}

QThread*  PythonQtWrapper_QObject::thread(QObject* theWrappedObject) const
{
  return ( theWrappedObject->thread());
}

void PythonQtWrapper_QObject::timerEvent(QObject* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_timerEvent(event));
}



PythonQtShell_QOperatingSystemVersion::~PythonQtShell_QOperatingSystemVersion() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QOperatingSystemVersion* PythonQtWrapper_QOperatingSystemVersion::new_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor, int  vmicro)
{ 
return new PythonQtShell_QOperatingSystemVersion(osType, vmajor, vminor, vmicro); }

QOperatingSystemVersion* PythonQtWrapper_QOperatingSystemVersion::new_QOperatingSystemVersion(const QOperatingSystemVersionBase&  osversion)
{ 
return new PythonQtShell_QOperatingSystemVersion(osversion); }

QOperatingSystemVersion  PythonQtWrapper_QOperatingSystemVersion::static_QOperatingSystemVersion_current()
{
  return (QOperatingSystemVersion::current());
}

QOperatingSystemVersion::OSType  PythonQtWrapper_QOperatingSystemVersion::static_QOperatingSystemVersion_currentType()
{
  return (QOperatingSystemVersion::currentType());
}

QOperatingSystemVersion::OSType  PythonQtWrapper_QOperatingSystemVersion::type(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QOperatingSystemVersion::py_toString(QOperatingSystemVersion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QOperatingSystemVersionBase::~PythonQtShell_QOperatingSystemVersionBase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QOperatingSystemVersionBase* PythonQtWrapper_QOperatingSystemVersionBase::new_QOperatingSystemVersionBase()
{ 
return new PythonQtShell_QOperatingSystemVersionBase(); }

QOperatingSystemVersionBase* PythonQtWrapper_QOperatingSystemVersionBase::new_QOperatingSystemVersionBase(QOperatingSystemVersionBase::OSType  osType, int  vmajor, int  vminor, int  vmicro)
{ 
return new PythonQtShell_QOperatingSystemVersionBase(osType, vmajor, vminor, vmicro); }

int  PythonQtWrapper_QOperatingSystemVersionBase::static_QOperatingSystemVersionBase_compare(QOperatingSystemVersionBase  v1, QOperatingSystemVersionBase  v2)
{
  return (PythonQtPublicPromoter_QOperatingSystemVersionBase::promoted_compare(v1, v2));
}

QOperatingSystemVersionBase  PythonQtWrapper_QOperatingSystemVersionBase::static_QOperatingSystemVersionBase_current()
{
  return (QOperatingSystemVersionBase::current());
}

QOperatingSystemVersionBase::OSType  PythonQtWrapper_QOperatingSystemVersionBase::static_QOperatingSystemVersionBase_currentType()
{
  return (QOperatingSystemVersionBase::currentType());
}

int  PythonQtWrapper_QOperatingSystemVersionBase::majorVersion(QOperatingSystemVersionBase* theWrappedObject) const
{
  return ( theWrappedObject->majorVersion());
}

int  PythonQtWrapper_QOperatingSystemVersionBase::microVersion(QOperatingSystemVersionBase* theWrappedObject) const
{
  return ( theWrappedObject->microVersion());
}

int  PythonQtWrapper_QOperatingSystemVersionBase::minorVersion(QOperatingSystemVersionBase* theWrappedObject) const
{
  return ( theWrappedObject->minorVersion());
}

QString  PythonQtWrapper_QOperatingSystemVersionBase::name(QOperatingSystemVersionBase* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QString  PythonQtWrapper_QOperatingSystemVersionBase::static_QOperatingSystemVersionBase_name(QOperatingSystemVersionBase  osversion)
{
  return (QOperatingSystemVersionBase::name(osversion));
}

bool  PythonQtWrapper_QOperatingSystemVersionBase::__lt__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QOperatingSystemVersionBase::__le__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QOperatingSystemVersionBase::__gt__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QOperatingSystemVersionBase::__ge__(QOperatingSystemVersionBase* theWrappedObject, QOperatingSystemVersionBase  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

int  PythonQtWrapper_QOperatingSystemVersionBase::segmentCount(QOperatingSystemVersionBase* theWrappedObject) const
{
  return ( theWrappedObject->segmentCount());
}

QOperatingSystemVersionBase::OSType  PythonQtWrapper_QOperatingSystemVersionBase::type(QOperatingSystemVersionBase* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QVersionNumber  PythonQtWrapper_QOperatingSystemVersionBase::version(QOperatingSystemVersionBase* theWrappedObject) const
{
  return ( theWrappedObject->version());
}



PythonQtShell_QOperatingSystemVersionUnexported::~PythonQtShell_QOperatingSystemVersionUnexported() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QOperatingSystemVersionUnexported* PythonQtWrapper_QOperatingSystemVersionUnexported::new_QOperatingSystemVersionUnexported(QOperatingSystemVersionBase  other)
{ 
return new PythonQtShell_QOperatingSystemVersionUnexported(other); }



PythonQtShell_QParallelAnimationGroup::~PythonQtShell_QParallelAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QParallelAnimationGroup::childEvent(QChildEvent*  event0)
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
  QParallelAnimationGroup::childEvent(event0);
}
void PythonQtShell_QParallelAnimationGroup::customEvent(QEvent*  event0)
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
  QParallelAnimationGroup::customEvent(event0);
}
int  PythonQtShell_QParallelAnimationGroup::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("duration");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QParallelAnimationGroup::duration();
}
bool  PythonQtShell_QParallelAnimationGroup::event(QEvent*  event0)
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
  return QParallelAnimationGroup::event(event0);
}
bool  PythonQtShell_QParallelAnimationGroup::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QParallelAnimationGroup::eventFilter(watched0, event1);
}
void PythonQtShell_QParallelAnimationGroup::timerEvent(QTimerEvent*  event0)
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
  QParallelAnimationGroup::timerEvent(event0);
}
void PythonQtShell_QParallelAnimationGroup::updateCurrentTime(int  currentTime0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&currentTime0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateCurrentTime(currentTime0);
}
void PythonQtShell_QParallelAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateDirection(direction0);
}
void PythonQtShell_QParallelAnimationGroup::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateState(newState0, oldState1);
}
QParallelAnimationGroup* PythonQtWrapper_QParallelAnimationGroup::new_QParallelAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QParallelAnimationGroup(parent); }

const QMetaObject* PythonQtShell_QParallelAnimationGroup::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QParallelAnimationGroup::staticMetaObject);
  } else {
    return &QParallelAnimationGroup::staticMetaObject;
  }
}
int PythonQtShell_QParallelAnimationGroup::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QParallelAnimationGroup::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QPauseAnimation::~PythonQtShell_QPauseAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPauseAnimation::childEvent(QChildEvent*  event0)
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
  QPauseAnimation::childEvent(event0);
}
void PythonQtShell_QPauseAnimation::customEvent(QEvent*  event0)
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
  QPauseAnimation::customEvent(event0);
}
int  PythonQtShell_QPauseAnimation::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("duration");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QPauseAnimation::duration();
}
bool  PythonQtShell_QPauseAnimation::event(QEvent*  e0)
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
  return QPauseAnimation::event(e0);
}
bool  PythonQtShell_QPauseAnimation::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QPauseAnimation::eventFilter(watched0, event1);
}
void PythonQtShell_QPauseAnimation::timerEvent(QTimerEvent*  event0)
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
  QPauseAnimation::timerEvent(event0);
}
void PythonQtShell_QPauseAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateCurrentTime");
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
  QPauseAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPauseAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::updateDirection(direction0);
}
void PythonQtShell_QPauseAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::updateState(newState0, oldState1);
}
QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(parent); }

QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(int  msecs, QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(msecs, parent); }

const QMetaObject* PythonQtShell_QPauseAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QPauseAnimation::staticMetaObject);
  } else {
    return &QPauseAnimation::staticMetaObject;
  }
}
int PythonQtShell_QPauseAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QPauseAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QPauseAnimation::setDuration(QPauseAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}



QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex()
{ 
return new QPersistentModelIndex(); }

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex(const QModelIndex&  index)
{ 
return new QPersistentModelIndex(index); }

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex(const QPersistentModelIndex&  other)
{ 
return new QPersistentModelIndex(other); }

int  PythonQtWrapper_QPersistentModelIndex::column(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

const void*  PythonQtWrapper_QPersistentModelIndex::constInternalPointer(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->constInternalPointer());
}

QVariant  PythonQtWrapper_QPersistentModelIndex::data(QPersistentModelIndex* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

Qt::ItemFlags  PythonQtWrapper_QPersistentModelIndex::flags(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

quintptr  PythonQtWrapper_QPersistentModelIndex::internalId(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalId());
}

bool  PythonQtWrapper_QPersistentModelIndex::isValid(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QAbstractItemModel*  PythonQtWrapper_QPersistentModelIndex::model(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

void PythonQtWrapper_QPersistentModelIndex::multiData(QPersistentModelIndex* theWrappedObject, QModelRoleDataSpan  roleDataSpan) const
{
  ( theWrappedObject->multiData(roleDataSpan));
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->operator QModelIndex());
}

bool  PythonQtWrapper_QPersistentModelIndex::__ne__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__ne__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__lt__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__lt__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__le__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__le__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__eq__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__eq__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__gt__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__gt__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__ge__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

bool  PythonQtWrapper_QPersistentModelIndex::__ge__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::parent(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

int  PythonQtWrapper_QPersistentModelIndex::row(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->sibling(row, column));
}

void PythonQtWrapper_QPersistentModelIndex::swap(QPersistentModelIndex* theWrappedObject, QPersistentModelIndex&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QPersistentModelIndex::py_toString(QPersistentModelIndex* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QProcess::~PythonQtShell_QProcess() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QProcess::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("atEnd");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
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
  return QProcess::atEnd();
}
qint64  PythonQtShell_QProcess::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::bytesAvailable();
}
qint64  PythonQtShell_QProcess::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::bytesToWrite();
}
bool  PythonQtShell_QProcess::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("canReadLine");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
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
  return QProcess::canReadLine();
}
void PythonQtShell_QProcess::childEvent(QChildEvent*  event0)
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
  QProcess::childEvent(event0);
}
void PythonQtShell_QProcess::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("close");
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
  QProcess::close();
}
void PythonQtShell_QProcess::customEvent(QEvent*  event0)
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
  QProcess::customEvent(event0);
}
bool  PythonQtShell_QProcess::event(QEvent*  event0)
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
  return QProcess::event(event0);
}
bool  PythonQtShell_QProcess::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QProcess::eventFilter(watched0, event1);
}
bool  PythonQtShell_QProcess::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("isSequential");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
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
  return QProcess::isSequential();
}
bool  PythonQtShell_QProcess::open(QIODeviceBase::OpenMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODeviceBase::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
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
  return QProcess::open(mode0);
}
qint64  PythonQtShell_QProcess::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::pos();
}
qint64  PythonQtShell_QProcess::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::readData(data0, maxlen1);
}
qint64  PythonQtShell_QProcess::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QProcess::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("reset");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
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
  return QProcess::reset();
}
bool  PythonQtShell_QProcess::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
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
  return QProcess::seek(pos0);
}
qint64  PythonQtShell_QProcess::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::size();
}
qint64  PythonQtShell_QProcess::skipData(qint64  maxSize0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("skipData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      qint64 returnValue{};
      void* args[2] = {nullptr, (void*)&maxSize0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("skipData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::skipData(maxSize0);
}
void PythonQtShell_QProcess::timerEvent(QTimerEvent*  event0)
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
  QProcess::timerEvent(event0);
}
bool  PythonQtShell_QProcess::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
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
  return QProcess::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QProcess::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
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
  return QProcess::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QProcess::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::writeData(data0, len1);
}
QProcess* PythonQtWrapper_QProcess::new_QProcess(QObject*  parent)
{ 
return new PythonQtShell_QProcess(parent); }

const QMetaObject* PythonQtShell_QProcess::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QProcess::staticMetaObject);
  } else {
    return &QProcess::staticMetaObject;
  }
}
int PythonQtShell_QProcess::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QProcess::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QProcess::arguments(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->arguments());
}

void PythonQtWrapper_QProcess::closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->closeReadChannel(channel));
}

void PythonQtWrapper_QProcess::closeWriteChannel(QProcess* theWrappedObject)
{
  ( theWrappedObject->closeWriteChannel());
}

QStringList  PythonQtWrapper_QProcess::environment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->environment());
}

QProcess::ProcessError  PythonQtWrapper_QProcess::error(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::execute(program, arguments));
}

int  PythonQtWrapper_QProcess::exitCode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitCode());
}

QProcess::ExitStatus  PythonQtWrapper_QProcess::exitStatus(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitStatus());
}

QProcess::InputChannelMode  PythonQtWrapper_QProcess::inputChannelMode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->inputChannelMode());
}

QString  PythonQtWrapper_QProcess::static_QProcess_nullDevice()
{
  return (QProcess::nullDevice());
}

QProcess::ProcessChannelMode  PythonQtWrapper_QProcess::processChannelMode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processChannelMode());
}

QProcessEnvironment  PythonQtWrapper_QProcess::processEnvironment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processEnvironment());
}

qint64  PythonQtWrapper_QProcess::processId(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processId());
}

QString  PythonQtWrapper_QProcess::program(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->program());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardError(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardError());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardOutput(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardOutput());
}

QProcess::ProcessChannel  PythonQtWrapper_QProcess::readChannel(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->readChannel());
}

void PythonQtWrapper_QProcess::setArguments(QProcess* theWrappedObject, const QStringList&  arguments)
{
  ( theWrappedObject->setArguments(arguments));
}

void PythonQtWrapper_QProcess::setEnvironment(QProcess* theWrappedObject, const QStringList&  environment)
{
  ( theWrappedObject->setEnvironment(environment));
}

void PythonQtWrapper_QProcess::setInputChannelMode(QProcess* theWrappedObject, QProcess::InputChannelMode  mode)
{
  ( theWrappedObject->setInputChannelMode(mode));
}

void PythonQtWrapper_QProcess::setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode)
{
  ( theWrappedObject->setProcessChannelMode(mode));
}

void PythonQtWrapper_QProcess::setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment)
{
  ( theWrappedObject->setProcessEnvironment(environment));
}

void PythonQtWrapper_QProcess::setProcessState(QProcess* theWrappedObject, QProcess::ProcessState  state)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_setProcessState(state));
}

void PythonQtWrapper_QProcess::setProgram(QProcess* theWrappedObject, const QString&  program)
{
  ( theWrappedObject->setProgram(program));
}

void PythonQtWrapper_QProcess::setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->setReadChannel(channel));
}

void PythonQtWrapper_QProcess::setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODeviceBase::OpenMode  mode)
{
  ( theWrappedObject->setStandardErrorFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setStandardInputFile(fileName));
}

void PythonQtWrapper_QProcess::setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODeviceBase::OpenMode  mode)
{
  ( theWrappedObject->setStandardOutputFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination)
{
  ( theWrappedObject->setStandardOutputProcess(destination));
}

void PythonQtWrapper_QProcess::setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir)
{
  ( theWrappedObject->setWorkingDirectory(dir));
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_splitCommand(QStringView  command)
{
  return (QProcess::splitCommand(command));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, QIODeviceBase::OpenMode  mode)
{
  ( theWrappedObject->start(mode));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODeviceBase::OpenMode  mode)
{
  ( theWrappedObject->start(program, arguments, mode));
}

void PythonQtWrapper_QProcess::startCommand(QProcess* theWrappedObject, const QString&  command, QIODeviceBase::OpenMode  mode)
{
  ( theWrappedObject->startCommand(command, mode));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid)
{
  return (QProcess::startDetached(program, arguments, workingDirectory, pid));
}

bool  PythonQtWrapper_QProcess::startDetached(QProcess* theWrappedObject, qint64*  pid)
{
  return ( theWrappedObject->startDetached(pid));
}

QProcess::ProcessState  PythonQtWrapper_QProcess::state(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_systemEnvironment()
{
  return (QProcess::systemEnvironment());
}

bool  PythonQtWrapper_QProcess::waitForFinished(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForFinished(msecs));
}

bool  PythonQtWrapper_QProcess::waitForStarted(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForStarted(msecs));
}

QString  PythonQtWrapper_QProcess::workingDirectory(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->workingDirectory());
}



QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment()
{ 
return new QProcessEnvironment(); }

QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment(QProcessEnvironment::Initialization  arg__1)
{ 
return new QProcessEnvironment(arg__1); }

QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment(const QProcessEnvironment&  other)
{ 
return new QProcessEnvironment(other); }

void PythonQtWrapper_QProcessEnvironment::clear(QProcessEnvironment* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QProcessEnvironment::contains(QProcessEnvironment* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

bool  PythonQtWrapper_QProcessEnvironment::inheritsFromParent(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->inheritsFromParent());
}

void PythonQtWrapper_QProcessEnvironment::insert(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  e)
{
  ( theWrappedObject->insert(e));
}

void PythonQtWrapper_QProcessEnvironment::insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->insert(name, value));
}

bool  PythonQtWrapper_QProcessEnvironment::isEmpty(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QStringList  PythonQtWrapper_QProcessEnvironment::keys(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

bool  PythonQtWrapper_QProcessEnvironment::__ne__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QProcessEnvironment*  PythonQtWrapper_QProcessEnvironment::operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QProcessEnvironment::__eq__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QProcessEnvironment::remove(QProcessEnvironment* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->remove(name));
}

void PythonQtWrapper_QProcessEnvironment::swap(QProcessEnvironment* theWrappedObject, QProcessEnvironment&  other)
{
  ( theWrappedObject->swap(other));
}

QProcessEnvironment  PythonQtWrapper_QProcessEnvironment::static_QProcessEnvironment_systemEnvironment()
{
  return (QProcessEnvironment::systemEnvironment());
}

QStringList  PythonQtWrapper_QProcessEnvironment::toStringList(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->toStringList());
}

QString  PythonQtWrapper_QProcessEnvironment::value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue) const
{
  return ( theWrappedObject->value(name, defaultValue));
}



PythonQtShell_QPropertyAnimation::~PythonQtShell_QPropertyAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPropertyAnimation::childEvent(QChildEvent*  event0)
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
  QPropertyAnimation::childEvent(event0);
}
void PythonQtShell_QPropertyAnimation::customEvent(QEvent*  event0)
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
  QPropertyAnimation::customEvent(event0);
}
int  PythonQtShell_QPropertyAnimation::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("duration");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QPropertyAnimation::duration();
}
bool  PythonQtShell_QPropertyAnimation::event(QEvent*  event0)
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
  return QPropertyAnimation::event(event0);
}
bool  PythonQtShell_QPropertyAnimation::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QPropertyAnimation::eventFilter(watched0, event1);
}
QVariant  PythonQtShell_QPropertyAnimation::interpolated(const QVariant&  from0, const QVariant&  to1, qreal  progress2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("interpolated");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&" , "const QVariant&" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue{};
      void* args[4] = {nullptr, (void*)&from0, (void*)&to1, (void*)&progress2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("interpolated", methodInfo, result);
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
  return QPropertyAnimation::interpolated(from0, to1, progress2);
}
void PythonQtShell_QPropertyAnimation::timerEvent(QTimerEvent*  event0)
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
  QPropertyAnimation::timerEvent(event0);
}
void PythonQtShell_QPropertyAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateCurrentTime");
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
  QPropertyAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPropertyAnimation::updateCurrentValue(const QVariant&  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateCurrentValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QVariant&"};
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
  QPropertyAnimation::updateCurrentValue(value0);
}
void PythonQtShell_QPropertyAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateDirection(direction0);
}
void PythonQtShell_QPropertyAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateState(newState0, oldState1);
}
QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(parent); }

QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(target, propertyName, parent); }

const QMetaObject* PythonQtShell_QPropertyAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QPropertyAnimation::staticMetaObject);
  } else {
    return &QPropertyAnimation::staticMetaObject;
  }
}
int PythonQtShell_QPropertyAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QPropertyAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QByteArray  PythonQtWrapper_QPropertyAnimation::propertyName(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}

void PythonQtWrapper_QPropertyAnimation::setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName)
{
  ( theWrappedObject->setPropertyName(propertyName));
}

void PythonQtWrapper_QPropertyAnimation::setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target)
{
  ( theWrappedObject->setTargetObject(target));
}

QObject*  PythonQtWrapper_QPropertyAnimation::targetObject(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->targetObject());
}



QRandomGenerator* PythonQtWrapper_QRandomGenerator::new_QRandomGenerator(const QRandomGenerator&  other)
{ 
return new QRandomGenerator(other); }

QRandomGenerator* PythonQtWrapper_QRandomGenerator::new_QRandomGenerator(const unsigned int*  begin, const unsigned int*  end)
{ 
return new QRandomGenerator(begin, end); }

QRandomGenerator* PythonQtWrapper_QRandomGenerator::new_QRandomGenerator(const unsigned int*  seedBuffer, qsizetype  len)
{ 
return new QRandomGenerator(seedBuffer, len); }

QRandomGenerator* PythonQtWrapper_QRandomGenerator::new_QRandomGenerator(unsigned int  seedValue)
{ 
return new QRandomGenerator(seedValue); }

double  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, double  highest)
{
  return ( theWrappedObject->bounded(highest));
}

int  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, int  highest)
{
  return ( theWrappedObject->bounded(highest));
}

int  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, int  lowest, int  highest)
{
  return ( theWrappedObject->bounded(lowest, highest));
}

qint64  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, int  lowest, qint64  highest)
{
  return ( theWrappedObject->bounded(lowest, highest));
}

qint64  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, qint64  highest)
{
  return ( theWrappedObject->bounded(highest));
}

qint64  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, qint64  lowest, int  highest)
{
  return ( theWrappedObject->bounded(lowest, highest));
}

qint64  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, qint64  lowest, qint64  highest)
{
  return ( theWrappedObject->bounded(lowest, highest));
}

quint64  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, quint64  highest)
{
  return ( theWrappedObject->bounded(highest));
}

quint64  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, quint64  lowest, quint64  highest)
{
  return ( theWrappedObject->bounded(lowest, highest));
}

unsigned int  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, unsigned int  highest)
{
  return ( theWrappedObject->bounded(highest));
}

unsigned int  PythonQtWrapper_QRandomGenerator::bounded(QRandomGenerator* theWrappedObject, unsigned int  lowest, unsigned int  highest)
{
  return ( theWrappedObject->bounded(lowest, highest));
}

void PythonQtWrapper_QRandomGenerator::discard(QRandomGenerator* theWrappedObject, quint64  z)
{
  ( theWrappedObject->discard(z));
}

unsigned int  PythonQtWrapper_QRandomGenerator::generate(QRandomGenerator* theWrappedObject)
{
  return ( theWrappedObject->generate());
}

void PythonQtWrapper_QRandomGenerator::generate(QRandomGenerator* theWrappedObject, unsigned int*  begin, unsigned int*  end)
{
  ( theWrappedObject->generate(begin, end));
}

quint64  PythonQtWrapper_QRandomGenerator::generate64(QRandomGenerator* theWrappedObject)
{
  return ( theWrappedObject->generate64());
}

double  PythonQtWrapper_QRandomGenerator::generateDouble(QRandomGenerator* theWrappedObject)
{
  return ( theWrappedObject->generateDouble());
}

QRandomGenerator*  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_global()
{
  return (QRandomGenerator::global());
}

unsigned int  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_max()
{
  return (QRandomGenerator::max());
}

unsigned int  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_min()
{
  return (QRandomGenerator::min());
}

bool  PythonQtWrapper_QRandomGenerator::__ne__(QRandomGenerator* theWrappedObject, const QRandomGenerator&  rng2)
{
  return ( (*theWrappedObject)!= rng2);
}

unsigned int  PythonQtWrapper_QRandomGenerator::operator_cast_(QRandomGenerator* theWrappedObject)
{
  return ( theWrappedObject->operator()());
}

QRandomGenerator*  PythonQtWrapper_QRandomGenerator::operator_assign(QRandomGenerator* theWrappedObject, const QRandomGenerator&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QRandomGenerator::__eq__(QRandomGenerator* theWrappedObject, const QRandomGenerator&  rng2)
{
  return ( (*theWrappedObject)== rng2);
}

QRandomGenerator  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_securelySeeded()
{
  return (QRandomGenerator::securelySeeded());
}

void PythonQtWrapper_QRandomGenerator::seed(QRandomGenerator* theWrappedObject, unsigned int  s)
{
  ( theWrappedObject->seed(s));
}

QRandomGenerator*  PythonQtWrapper_QRandomGenerator::static_QRandomGenerator_system()
{
  return (QRandomGenerator::system());
}



QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const QRandomGenerator&  other)
{ 
return new QRandomGenerator64(other); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const unsigned int*  begin, const unsigned int*  end)
{ 
return new QRandomGenerator64(begin, end); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const unsigned int*  seedBuffer, qsizetype  len)
{ 
return new QRandomGenerator64(seedBuffer, len); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(unsigned int  seedValue)
{ 
return new QRandomGenerator64(seedValue); }

void PythonQtWrapper_QRandomGenerator64::discard(QRandomGenerator64* theWrappedObject, quint64  z)
{
  ( theWrappedObject->discard(z));
}

quint64  PythonQtWrapper_QRandomGenerator64::generate(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->generate());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_global()
{
  return (QRandomGenerator64::global());
}

quint64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_max()
{
  return (QRandomGenerator64::max());
}

quint64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_min()
{
  return (QRandomGenerator64::min());
}

quint64  PythonQtWrapper_QRandomGenerator64::operator_cast_(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->operator()());
}

QRandomGenerator64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_securelySeeded()
{
  return (QRandomGenerator64::securelySeeded());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_system()
{
  return (QRandomGenerator64::system());
}



QReadLocker* PythonQtWrapper_QReadLocker::new_QReadLocker(QReadWriteLock*  readWriteLock)
{ 
return new QReadLocker(readWriteLock); }

QReadWriteLock*  PythonQtWrapper_QReadLocker::readWriteLock(QReadLocker* theWrappedObject) const
{
  return ( theWrappedObject->readWriteLock());
}

void PythonQtWrapper_QReadLocker::relock(QReadLocker* theWrappedObject)
{
  ( theWrappedObject->relock());
}

void PythonQtWrapper_QReadLocker::unlock(QReadLocker* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QReadWriteLock::~PythonQtShell_QReadWriteLock() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QReadWriteLock* PythonQtWrapper_QReadWriteLock::new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode)
{ 
return new PythonQtShell_QReadWriteLock(recursionMode); }

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForRead(timeout));
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForWrite(timeout));
}



QRecursiveMutex* PythonQtWrapper_QRecursiveMutex::new_QRecursiveMutex()
{ 
return new QRecursiveMutex(); }

void PythonQtWrapper_QRecursiveMutex::lock(QRecursiveMutex* theWrappedObject)
{
  ( theWrappedObject->lock());
}

bool  PythonQtWrapper_QRecursiveMutex::tryLock(QRecursiveMutex* theWrappedObject, QDeadlineTimer  timer)
{
  return ( theWrappedObject->tryLock(timer));
}

bool  PythonQtWrapper_QRecursiveMutex::tryLock(QRecursiveMutex* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

bool  PythonQtWrapper_QRecursiveMutex::try_lock(QRecursiveMutex* theWrappedObject)
{
  return ( theWrappedObject->try_lock());
}

void PythonQtWrapper_QRecursiveMutex::unlock(QRecursiveMutex* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



QRegularExpressionMatch* PythonQtWrapper_QRegularExpressionMatch::new_QRegularExpressionMatch()
{ 
return new QRegularExpressionMatch(); }

QRegularExpressionMatch* PythonQtWrapper_QRegularExpressionMatch::new_QRegularExpressionMatch(const QRegularExpressionMatch&  match)
{ 
return new QRegularExpressionMatch(match); }

QString  PythonQtWrapper_QRegularExpressionMatch::captured(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->captured(name));
}

QString  PythonQtWrapper_QRegularExpressionMatch::captured(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->captured(nth));
}

qsizetype  PythonQtWrapper_QRegularExpressionMatch::capturedEnd(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->capturedEnd(name));
}

qsizetype  PythonQtWrapper_QRegularExpressionMatch::capturedEnd(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedEnd(nth));
}

qsizetype  PythonQtWrapper_QRegularExpressionMatch::capturedLength(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->capturedLength(name));
}

qsizetype  PythonQtWrapper_QRegularExpressionMatch::capturedLength(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedLength(nth));
}

qsizetype  PythonQtWrapper_QRegularExpressionMatch::capturedStart(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->capturedStart(name));
}

qsizetype  PythonQtWrapper_QRegularExpressionMatch::capturedStart(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedStart(nth));
}

QStringList  PythonQtWrapper_QRegularExpressionMatch::capturedTexts(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->capturedTexts());
}

QStringView  PythonQtWrapper_QRegularExpressionMatch::capturedView(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->capturedView(name));
}

QStringView  PythonQtWrapper_QRegularExpressionMatch::capturedView(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedView(nth));
}

bool  PythonQtWrapper_QRegularExpressionMatch::hasCaptured(QRegularExpressionMatch* theWrappedObject, QAnyStringView  name) const
{
  return ( theWrappedObject->hasCaptured(name));
}

bool  PythonQtWrapper_QRegularExpressionMatch::hasCaptured(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->hasCaptured(nth));
}

bool  PythonQtWrapper_QRegularExpressionMatch::hasMatch(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->hasMatch());
}

bool  PythonQtWrapper_QRegularExpressionMatch::hasPartialMatch(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->hasPartialMatch());
}

bool  PythonQtWrapper_QRegularExpressionMatch::isValid(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QRegularExpressionMatch::lastCapturedIndex(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->lastCapturedIndex());
}

QRegularExpression::MatchOptions  PythonQtWrapper_QRegularExpressionMatch::matchOptions(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->matchOptions());
}

QRegularExpression::MatchType  PythonQtWrapper_QRegularExpressionMatch::matchType(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->matchType());
}

QRegularExpressionMatch*  PythonQtWrapper_QRegularExpressionMatch::operator_assign(QRegularExpressionMatch* theWrappedObject, const QRegularExpressionMatch&  match)
{
  return &( (*theWrappedObject)= match);
}

QRegularExpression  PythonQtWrapper_QRegularExpressionMatch::regularExpression(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->regularExpression());
}

void PythonQtWrapper_QRegularExpressionMatch::swap(QRegularExpressionMatch* theWrappedObject, QRegularExpressionMatch&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QRegularExpressionMatch::py_toString(QRegularExpressionMatch* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}


