#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qcborcommon.h>
#include <qdatastream.h>
#include <qdeadlinetimer.h>
#include <qlist.h>
#include <qlogging.h>
#include <qmutex.h>
#include <qreadwritelock.h>
#include <qversionnumber.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>



class PythonQtWrapper_QVersionNumber : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QVersionNumber* new_QVersionNumber();
QVersionNumber* new_QVersionNumber(int  maj);
QVersionNumber* new_QVersionNumber(int  maj, int  min);
QVersionNumber* new_QVersionNumber(int  maj, int  min, int  mic);
QVersionNumber* new_QVersionNumber(const QVersionNumber& other) {
QVersionNumber* a = new QVersionNumber();
*((QVersionNumber*)a) = other;
return a; }
void delete_QVersionNumber(QVersionNumber* obj) { delete obj; }
   QVersionNumber  static_QVersionNumber_commonPrefix(const QVersionNumber&  v1, const QVersionNumber&  v2);
   int  static_QVersionNumber_compare(const QVersionNumber&  v1, const QVersionNumber&  v2);
   QVersionNumber  static_QVersionNumber_fromString(QAnyStringView  string, qsizetype*  suffixIndex = nullptr);
   bool  isNormalized(QVersionNumber* theWrappedObject) const;
   bool  isNull(QVersionNumber* theWrappedObject) const;
   bool  isPrefixOf(QVersionNumber* theWrappedObject, const QVersionNumber&  other) const;
   int  majorVersion(QVersionNumber* theWrappedObject) const;
   int  microVersion(QVersionNumber* theWrappedObject) const;
   int  minorVersion(QVersionNumber* theWrappedObject) const;
   QVersionNumber  normalized(QVersionNumber* theWrappedObject) const;
   bool  __ne__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs);
   bool  __lt__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs);
   void writeTo(QVersionNumber* theWrappedObject, QDataStream&  out);
   bool  __le__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs);
   bool  __eq__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs);
   bool  __gt__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs);
   bool  __ge__(QVersionNumber* theWrappedObject, const QVersionNumber&  rhs);
   void readFrom(QVersionNumber* theWrappedObject, QDataStream&  in);
   int  segmentAt(QVersionNumber* theWrappedObject, qsizetype  index) const;
   qsizetype  segmentCount(QVersionNumber* theWrappedObject) const;
   QList<int >  segments(QVersionNumber* theWrappedObject) const;
   QString  toString(QVersionNumber* theWrappedObject) const;
    QString py_toString(QVersionNumber*);
    bool __nonzero__(QVersionNumber* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QWaitCondition : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QWaitCondition* new_QWaitCondition();
void delete_QWaitCondition(QWaitCondition* obj) { delete obj; }
   void notify_all(QWaitCondition* theWrappedObject);
   void notify_one(QWaitCondition* theWrappedObject);
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time);
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time);
   void wakeAll(QWaitCondition* theWrappedObject);
   void wakeOne(QWaitCondition* theWrappedObject);
};





class PythonQtWrapper_QWriteLocker : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QWriteLocker* new_QWriteLocker(QReadWriteLock*  readWriteLock);
void delete_QWriteLocker(QWriteLocker* obj) { delete obj; }
   QReadWriteLock*  readWriteLock(QWriteLocker* theWrappedObject) const;
   void relock(QWriteLocker* theWrappedObject);
   void unlock(QWriteLocker* theWrappedObject);

    void __enter__(QWriteLocker* /*self*/) {}
    void __exit__(QWriteLocker* self, PyObject* /*type*/, PyObject* /*value*/, PyObject* /*traceback*/) { self->unlock(); }
    
};





class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(nullptr) {};

   ~PythonQtShell_QXmlStreamEntityResolver() override;

QString  resolveEntity(const QString&  publicId, const QString&  systemId) override;
QString  resolveUndeclaredEntity(const QString&  name) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{ public:
inline QString  py_q_resolveEntity(const QString&  publicId, const QString&  systemId) { return QXmlStreamEntityResolver::resolveEntity(publicId, systemId); }
inline QString  py_q_resolveUndeclaredEntity(const QString&  name) { return QXmlStreamEntityResolver::resolveUndeclaredEntity(name); }
};

class PythonQtWrapper_QXmlStreamEntityResolver : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QXmlStreamEntityResolver* new_QXmlStreamEntityResolver();
void delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver* obj) { delete obj; }
   QString  resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId);
   QString  py_q_resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->py_q_resolveEntity(publicId, systemId));}
   QString  resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name);
   QString  py_q_resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->py_q_resolveUndeclaredEntity(name));}
};





class PythonQtWrapper_QtCore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QCborKnownTags QCborSimpleType QCborTag QtMsgType )
enum class QCborKnownTags{
  DateTimeString = static_cast<int>(::QCborKnownTags::DateTimeString),   UnixTime_t = static_cast<int>(::QCborKnownTags::UnixTime_t),   PositiveBignum = static_cast<int>(::QCborKnownTags::PositiveBignum),   NegativeBignum = static_cast<int>(::QCborKnownTags::NegativeBignum),   Decimal = static_cast<int>(::QCborKnownTags::Decimal),   Bigfloat = static_cast<int>(::QCborKnownTags::Bigfloat),   COSE_Encrypt0 = static_cast<int>(::QCborKnownTags::COSE_Encrypt0),   COSE_Mac0 = static_cast<int>(::QCborKnownTags::COSE_Mac0),   COSE_Sign1 = static_cast<int>(::QCborKnownTags::COSE_Sign1),   ExpectedBase64url = static_cast<int>(::QCborKnownTags::ExpectedBase64url),   ExpectedBase64 = static_cast<int>(::QCborKnownTags::ExpectedBase64),   ExpectedBase16 = static_cast<int>(::QCborKnownTags::ExpectedBase16),   EncodedCbor = static_cast<int>(::QCborKnownTags::EncodedCbor),   Url = static_cast<int>(::QCborKnownTags::Url),   Base64url = static_cast<int>(::QCborKnownTags::Base64url),   Base64 = static_cast<int>(::QCborKnownTags::Base64),   RegularExpression = static_cast<int>(::QCborKnownTags::RegularExpression),   MimeMessage = static_cast<int>(::QCborKnownTags::MimeMessage),   Uuid = static_cast<int>(::QCborKnownTags::Uuid),   COSE_Encrypt = static_cast<int>(::QCborKnownTags::COSE_Encrypt),   COSE_Mac = static_cast<int>(::QCborKnownTags::COSE_Mac),   COSE_Sign = static_cast<int>(::QCborKnownTags::COSE_Sign),   Signature = static_cast<int>(::QCborKnownTags::Signature)};
enum class QCborSimpleType{
  False = static_cast<int>(::QCborSimpleType::False),   True = static_cast<int>(::QCborSimpleType::True),   Null = static_cast<int>(::QCborSimpleType::Null),   Undefined = static_cast<int>(::QCborSimpleType::Undefined)};
enum class QCborTag{
};
enum QtMsgType{
  QtDebugMsg = ::QtDebugMsg,   QtWarningMsg = ::QtWarningMsg,   QtCriticalMsg = ::QtCriticalMsg,   QtFatalMsg = ::QtFatalMsg,   QtInfoMsg = ::QtInfoMsg,   QtSystemMsg = ::QtSystemMsg};
public Q_SLOTS:
};


