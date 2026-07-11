#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstracteventdispatcher.h>
#include <qanimationgroup.h>
#include <qbasictimer.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qdir.h>
#include <qeasingcurve.h>
#include <qfile.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpauseanimation.h>
#include <qregularexpression.h>
#include <qresource.h>
#include <qrunnable.h>
#include <qsavefile.h>
#include <qsemaphore.h>
#include <qsequentialanimationgroup.h>
#include <qsettings.h>
#include <qsharedmemory.h>
#include <qsignalmapper.h>
#include <qsocketnotifier.h>
#include <qstandardpaths.h>
#include <qstorageinfo.h>
#include <qstringmatcher.h>
#include <qsysinfo.h>
#include <qsystemsemaphore.h>
#include <qtemporarydir.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextstream.h>
#include <qthread.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qtimer.h>
#include <qtimezone.h>
#include <qtipccommon.h>
#include <qtranslator.h>
#include <qurl.h>
#include <qurlquery.h>
#include <quuid.h>
#include <qvariantanimation.h>



class PythonQtWrapper_QRegularExpressionMatchIterator : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRegularExpressionMatchIterator* new_QRegularExpressionMatchIterator();
QRegularExpressionMatchIterator* new_QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator&  iterator);
void delete_QRegularExpressionMatchIterator(QRegularExpressionMatchIterator* obj) { delete obj; }
   bool  hasNext(QRegularExpressionMatchIterator* theWrappedObject) const;
   bool  isValid(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression::MatchOptions  matchOptions(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression::MatchType  matchType(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpressionMatch  next(QRegularExpressionMatchIterator* theWrappedObject);
   QRegularExpressionMatchIterator*  operator_assign(QRegularExpressionMatchIterator* theWrappedObject, const QRegularExpressionMatchIterator&  iterator);
   QRegularExpressionMatch  peekNext(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression  regularExpression(QRegularExpressionMatchIterator* theWrappedObject) const;
   void swap(QRegularExpressionMatchIterator* theWrappedObject, QRegularExpressionMatchIterator&  other);
    bool __nonzero__(QRegularExpressionMatchIterator* obj) { return obj->isValid(); }
};





class PythonQtShell_QResource : public QResource
{
public:
    PythonQtShell_QResource(const QString&  file = QString(), const QLocale&  locale = QLocale()):QResource(file, locale),_wrapper(nullptr) {};

   ~PythonQtShell_QResource();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QResource : public QResource
{ public:
inline QStringList  promoted_children() const { return this->children(); }
inline bool  promoted_isDir() const { return this->isDir(); }
inline bool  promoted_isFile() const { return this->isFile(); }
};

class PythonQtWrapper_QResource : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Compression )
enum Compression{
  NoCompression = QResource::NoCompression,   ZlibCompression = QResource::ZlibCompression,   ZstdCompression = QResource::ZstdCompression};
public Q_SLOTS:
QResource* new_QResource(const QString&  file = QString(), const QLocale&  locale = QLocale());
void delete_QResource(QResource* obj) { delete obj; }
   QString  absoluteFilePath(QResource* theWrappedObject) const;
   QStringList  children(QResource* theWrappedObject) const;
   QResource::Compression  compressionAlgorithm(QResource* theWrappedObject) const;
   const uchar*  data(QResource* theWrappedObject) const;
   QString  fileName(QResource* theWrappedObject) const;
   bool  isDir(QResource* theWrappedObject) const;
   bool  isFile(QResource* theWrappedObject) const;
   bool  isValid(QResource* theWrappedObject) const;
   QDateTime  lastModified(QResource* theWrappedObject) const;
   QLocale  locale(QResource* theWrappedObject) const;
   bool  static_QResource_registerResource(const QString&  rccFilename, const QString&  resourceRoot = QString());
   bool  static_QResource_registerResource(const uchar*  rccData, const QString&  resourceRoot = QString());
   void setFileName(QResource* theWrappedObject, const QString&  file);
   void setLocale(QResource* theWrappedObject, const QLocale&  locale);
   qint64  size(QResource* theWrappedObject) const;
   QByteArray  uncompressedData(QResource* theWrappedObject) const;
   qint64  uncompressedSize(QResource* theWrappedObject) const;
   bool  static_QResource_unregisterResource(const QString&  rccFilename, const QString&  resourceRoot = QString());
   bool  static_QResource_unregisterResource(const uchar*  rccData, const QString&  resourceRoot = QString());
    bool __nonzero__(QResource* obj) { return obj->isValid(); }
};





class PythonQtShell_QRunnable : public QRunnable
{
public:
    PythonQtShell_QRunnable():QRunnable(),_wrapper(nullptr) {};

   ~PythonQtShell_QRunnable() override;

void run() override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QRunnable : public QRunnable
{ public:
inline void py_q_run() { this->run(); }
};

class PythonQtWrapper_QRunnable : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRunnable* new_QRunnable();
void delete_QRunnable(QRunnable* obj) { delete obj; }
   bool  autoDelete(QRunnable* theWrappedObject) const;
   void run(QRunnable* theWrappedObject);
   void py_q_run(QRunnable* theWrappedObject){  (((PythonQtPublicPromoter_QRunnable*)theWrappedObject)->py_q_run());}
   void setAutoDelete(QRunnable* theWrappedObject, bool  autoDelete);
};





class PythonQtShell_QSaveFile : public QSaveFile
{
public:
    PythonQtShell_QSaveFile(QObject*  parent = nullptr):QSaveFile(parent),_wrapper(nullptr) {};
    PythonQtShell_QSaveFile(const QString&  name, QObject*  parent = nullptr):QSaveFile(name, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSaveFile() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QString  fileName() const override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  flags) override;
QFileDevice::Permissions  permissions() const override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  resize(qint64  sz) override;
bool  seek(qint64  offset) override;
bool  setPermissions(QFileDevice::Permissions  permissionSpec) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSaveFile : public QSaveFile
{ public:
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline QString  py_q_fileName() const { return QSaveFile::fileName(); }
inline bool  py_q_open(QIODeviceBase::OpenMode  flags) { return QSaveFile::open(flags); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QSaveFile::writeData(data, len); }
};

class PythonQtWrapper_QSaveFile : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSaveFile* new_QSaveFile(QObject*  parent = nullptr);
QSaveFile* new_QSaveFile(const QString&  name, QObject*  parent = nullptr);
void delete_QSaveFile(QSaveFile* obj) { delete obj; }
   void cancelWriting(QSaveFile* theWrappedObject);
   bool  commit(QSaveFile* theWrappedObject);
   bool  directWriteFallback(QSaveFile* theWrappedObject) const;
   QString  py_q_fileName(QSaveFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_fileName());}
   bool  py_q_open(QSaveFile* theWrappedObject, QIODeviceBase::OpenMode  flags){  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_open(flags));}
   void setDirectWriteFallback(QSaveFile* theWrappedObject, bool  enabled);
   void setFileName(QSaveFile* theWrappedObject, const QString&  name);
   qint64  py_q_writeData(QSaveFile* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; }
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   int  available(QSemaphore* theWrappedObject) const;
   void release(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, QDeadlineTimer  timeout);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
   bool  try_acquire(QSemaphore* theWrappedObject);
};





class PythonQtShell_QSequentialAnimationGroup : public QSequentialAnimationGroup
{
public:
    PythonQtShell_QSequentialAnimationGroup(QObject*  parent = nullptr):QSequentialAnimationGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSequentialAnimationGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSequentialAnimationGroup : public QSequentialAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QSequentialAnimationGroup::duration(); }
inline bool  py_q_event(QEvent*  event) { return QSequentialAnimationGroup::event(event); }
inline void py_q_updateCurrentTime(int  arg__1) { QSequentialAnimationGroup::updateCurrentTime(arg__1); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QSequentialAnimationGroup::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QSequentialAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QSequentialAnimationGroup : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSequentialAnimationGroup* new_QSequentialAnimationGroup(QObject*  parent = nullptr);
void delete_QSequentialAnimationGroup(QSequentialAnimationGroup* obj) { delete obj; }
   QPauseAnimation*  addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs);
   QAbstractAnimation*  currentAnimation(QSequentialAnimationGroup* theWrappedObject) const;
   int  py_q_duration(QSequentialAnimationGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_event(event));}
   QPauseAnimation*  insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs);
   void py_q_updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void py_q_updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateDirection(direction));}
   void py_q_updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = nullptr):QSettings(parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(format, scope, organization, application, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, QObject*  parent = nullptr):QSettings(scope, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(scope, organization, application, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr):QSettings(fileName, format, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(organization, application, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSettings() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSettings* new_QSettings(QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Scope  scope, QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
void delete_QSettings(QSettings* obj) { delete obj; }
   QStringList  allKeys(QSettings* theWrappedObject) const;
   QString  applicationName(QSettings* theWrappedObject) const;
   void beginGroup(QSettings* theWrappedObject, QAnyStringView  prefix);
   int  beginReadArray(QSettings* theWrappedObject, QAnyStringView  prefix);
   void beginWriteArray(QSettings* theWrappedObject, QAnyStringView  prefix, int  size = -1);
   QStringList  childGroups(QSettings* theWrappedObject) const;
   QStringList  childKeys(QSettings* theWrappedObject) const;
   void clear(QSettings* theWrappedObject);
   bool  contains(QSettings* theWrappedObject, QAnyStringView  key) const;
   QSettings::Format  static_QSettings_defaultFormat();
   void endArray(QSettings* theWrappedObject);
   void endGroup(QSettings* theWrappedObject);
   bool  py_q_event(QSettings* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSettings*)theWrappedObject)->py_q_event(event));}
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   QString  fileName(QSettings* theWrappedObject) const;
   QSettings::Format  format(QSettings* theWrappedObject) const;
   QString  group(QSettings* theWrappedObject) const;
   bool  isAtomicSyncRequired(QSettings* theWrappedObject) const;
   bool  isWritable(QSettings* theWrappedObject) const;
   QString  organizationName(QSettings* theWrappedObject) const;
   void remove(QSettings* theWrappedObject, QAnyStringView  key);
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   void setAtomicSyncRequired(QSettings* theWrappedObject, bool  enable);
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   void setValue(QSettings* theWrappedObject, QAnyStringView  key, const QVariant&  value);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   void sync(QSettings* theWrappedObject);
   QVariant  value(QSettings* theWrappedObject, QAnyStringView  key) const;
   QVariant  value(QSettings* theWrappedObject, QAnyStringView  key, const QVariant&  defaultValue) const;
};





class PythonQtShell_QSharedMemory : public QSharedMemory
{
public:
    PythonQtShell_QSharedMemory(QObject*  parent = nullptr):QSharedMemory(parent),_wrapper(nullptr) {};
    PythonQtShell_QSharedMemory(const QNativeIpcKey&  key, QObject*  parent = nullptr):QSharedMemory(key, parent),_wrapper(nullptr) {};
    PythonQtShell_QSharedMemory(const QString&  key, QObject*  parent = nullptr):QSharedMemory(key, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSharedMemory() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSharedMemory : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSharedMemory* new_QSharedMemory(QObject*  parent = nullptr);
QSharedMemory* new_QSharedMemory(const QNativeIpcKey&  key, QObject*  parent = nullptr);
QSharedMemory* new_QSharedMemory(const QString&  key, QObject*  parent = nullptr);
void delete_QSharedMemory(QSharedMemory* obj) { delete obj; }
   bool  attach(QSharedMemory* theWrappedObject, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   const void*  constData(QSharedMemory* theWrappedObject) const;
   bool  create(QSharedMemory* theWrappedObject, qsizetype  size, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   void*  data(QSharedMemory* theWrappedObject);
   const void*  data(QSharedMemory* theWrappedObject) const;
   QSharedMemory::SharedMemoryError  error(QSharedMemory* theWrappedObject) const;
   QString  errorString(QSharedMemory* theWrappedObject) const;
   bool  isAttached(QSharedMemory* theWrappedObject) const;
   bool  static_QSharedMemory_isKeyTypeSupported(QNativeIpcKey::Type  type);
   QString  key(QSharedMemory* theWrappedObject) const;
   QNativeIpcKey  static_QSharedMemory_legacyNativeKey(const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::legacyDefaultTypeForOs());
   bool  lock(QSharedMemory* theWrappedObject);
   QNativeIpcKey  nativeIpcKey(QSharedMemory* theWrappedObject) const;
   QString  nativeKey(QSharedMemory* theWrappedObject) const;
   QNativeIpcKey  static_QSharedMemory_platformSafeKey(const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::DefaultTypeForOs);
   void setKey(QSharedMemory* theWrappedObject, const QString&  key);
   void setNativeKey(QSharedMemory* theWrappedObject, const QNativeIpcKey&  key);
   void setNativeKey(QSharedMemory* theWrappedObject, const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::legacyDefaultTypeForOs());
   qsizetype  size(QSharedMemory* theWrappedObject) const;
   bool  unlock(QSharedMemory* theWrappedObject);
};





class PythonQtWrapper_QSignalBlocker : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSignalBlocker* new_QSignalBlocker(QObject&  o);
QSignalBlocker* new_QSignalBlocker(QObject*  o);
void delete_QSignalBlocker(QSignalBlocker* obj) { delete obj; }
   void dismiss(QSignalBlocker* theWrappedObject);
   void reblock(QSignalBlocker* theWrappedObject);
   void unblock(QSignalBlocker* theWrappedObject);
};





class PythonQtShell_QSignalMapper : public QSignalMapper
{
public:
    PythonQtShell_QSignalMapper(QObject*  parent = nullptr):QSignalMapper(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSignalMapper() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSignalMapper* new_QSignalMapper(QObject*  parent = nullptr);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; }
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
};





class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(QSocketNotifier::Type  arg__1, QObject*  parent = nullptr):QSocketNotifier(arg__1, parent),_wrapper(nullptr) {};
    PythonQtShell_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr):QSocketNotifier(socket, arg__2, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSocketNotifier() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSocketNotifier : public QSocketNotifier
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QSocketNotifier::event(arg__1); }
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public Q_SLOTS:
QSocketNotifier* new_QSocketNotifier(QSocketNotifier::Type  arg__1, QObject*  parent = nullptr);
QSocketNotifier* new_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; }
   bool  py_q_event(QSocketNotifier* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSocketNotifier*)theWrappedObject)->py_q_event(arg__1));}
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   bool  isValid(QSocketNotifier* theWrappedObject) const;
   void setSocket(QSocketNotifier* theWrappedObject, qintptr  socket);
   qintptr  socket(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
    bool __nonzero__(QSocketNotifier* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QStandardPaths : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LocateOption StandardLocation )
Q_FLAGS(LocateOptions )
enum LocateOption{
  LocateFile = QStandardPaths::LocateFile,   LocateDirectory = QStandardPaths::LocateDirectory};
enum StandardLocation{
  DesktopLocation = QStandardPaths::DesktopLocation,   DocumentsLocation = QStandardPaths::DocumentsLocation,   FontsLocation = QStandardPaths::FontsLocation,   ApplicationsLocation = QStandardPaths::ApplicationsLocation,   MusicLocation = QStandardPaths::MusicLocation,   MoviesLocation = QStandardPaths::MoviesLocation,   PicturesLocation = QStandardPaths::PicturesLocation,   TempLocation = QStandardPaths::TempLocation,   HomeLocation = QStandardPaths::HomeLocation,   AppLocalDataLocation = QStandardPaths::AppLocalDataLocation,   CacheLocation = QStandardPaths::CacheLocation,   GenericDataLocation = QStandardPaths::GenericDataLocation,   RuntimeLocation = QStandardPaths::RuntimeLocation,   ConfigLocation = QStandardPaths::ConfigLocation,   DownloadLocation = QStandardPaths::DownloadLocation,   GenericCacheLocation = QStandardPaths::GenericCacheLocation,   GenericConfigLocation = QStandardPaths::GenericConfigLocation,   AppDataLocation = QStandardPaths::AppDataLocation,   AppConfigLocation = QStandardPaths::AppConfigLocation,   PublicShareLocation = QStandardPaths::PublicShareLocation,   TemplatesLocation = QStandardPaths::TemplatesLocation,   StateLocation = QStandardPaths::StateLocation,   GenericStateLocation = QStandardPaths::GenericStateLocation};
Q_DECLARE_FLAGS(LocateOptions, LocateOption)
public Q_SLOTS:
   QString  static_QStandardPaths_displayName(QStandardPaths::StandardLocation  type);
   QString  static_QStandardPaths_findExecutable(const QString&  executableName, const QStringList&  paths = QStringList());
   bool  static_QStandardPaths_isTestModeEnabled();
   QString  static_QStandardPaths_locate(QStandardPaths::StandardLocation  type, const QString&  fileName, QStandardPaths::LocateOptions  options = QStandardPaths::LocateFile);
   QStringList  static_QStandardPaths_locateAll(QStandardPaths::StandardLocation  type, const QString&  fileName, QStandardPaths::LocateOptions  options = QStandardPaths::LocateFile);
   void static_QStandardPaths_setTestModeEnabled(bool  testMode);
   QStringList  static_QStandardPaths_standardLocations(QStandardPaths::StandardLocation  type);
   QString  static_QStandardPaths_writableLocation(QStandardPaths::StandardLocation  type);
};





class PythonQtWrapper_QStorageInfo : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QStorageInfo* new_QStorageInfo();
QStorageInfo* new_QStorageInfo(const QDir&  dir);
QStorageInfo* new_QStorageInfo(const QStorageInfo&  other);
QStorageInfo* new_QStorageInfo(const QString&  path);
void delete_QStorageInfo(QStorageInfo* obj) { delete obj; }
   int  blockSize(QStorageInfo* theWrappedObject) const;
   qint64  bytesAvailable(QStorageInfo* theWrappedObject) const;
   qint64  bytesFree(QStorageInfo* theWrappedObject) const;
   qint64  bytesTotal(QStorageInfo* theWrappedObject) const;
   QByteArray  device(QStorageInfo* theWrappedObject) const;
   QString  displayName(QStorageInfo* theWrappedObject) const;
   QByteArray  fileSystemType(QStorageInfo* theWrappedObject) const;
   bool  isReadOnly(QStorageInfo* theWrappedObject) const;
   bool  isReady(QStorageInfo* theWrappedObject) const;
   bool  isRoot(QStorageInfo* theWrappedObject) const;
   bool  isValid(QStorageInfo* theWrappedObject) const;
   QList<QStorageInfo >  static_QStorageInfo_mountedVolumes();
   QString  name(QStorageInfo* theWrappedObject) const;
   bool  __ne__(QStorageInfo* theWrappedObject, const QStorageInfo&  rhs);
   QStorageInfo*  operator_assign(QStorageInfo* theWrappedObject, const QStorageInfo&  other);
   bool  __eq__(QStorageInfo* theWrappedObject, const QStorageInfo&  rhs);
   void refresh(QStorageInfo* theWrappedObject);
   QStorageInfo  static_QStorageInfo_root();
   QString  rootPath(QStorageInfo* theWrappedObject) const;
   void setPath(QStorageInfo* theWrappedObject, const QString&  path);
   QByteArray  subvolume(QStorageInfo* theWrappedObject) const;
   void swap(QStorageInfo* theWrappedObject, QStorageInfo&  other);
    QString py_toString(QStorageInfo*);
    bool __nonzero__(QStorageInfo* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QChar*  uc, qsizetype  len, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   qsizetype  indexIn(QStringMatcher* theWrappedObject, const QChar*  str, qsizetype  length, qsizetype  from = 0) const;
   qsizetype  indexIn(QStringMatcher* theWrappedObject, const QString&  str, qsizetype  from = 0) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   QStringView  patternView(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
};





class PythonQtShell_QSysInfo : public QSysInfo
{
public:
    PythonQtShell_QSysInfo():QSysInfo(),_wrapper(nullptr) {};

   ~PythonQtShell_QSysInfo();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSysInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Endian Sizes )
enum Endian{
  BigEndian = QSysInfo::BigEndian,   LittleEndian = QSysInfo::LittleEndian,   ByteOrder = QSysInfo::ByteOrder};
enum Sizes{
  WordSize = QSysInfo::WordSize};
public Q_SLOTS:
QSysInfo* new_QSysInfo();
void delete_QSysInfo(QSysInfo* obj) { delete obj; }
   QByteArray  static_QSysInfo_bootUniqueId();
   QString  static_QSysInfo_buildAbi();
   QString  static_QSysInfo_buildCpuArchitecture();
   QString  static_QSysInfo_currentCpuArchitecture();
   QString  static_QSysInfo_kernelType();
   QString  static_QSysInfo_kernelVersion();
   QString  static_QSysInfo_machineHostName();
   QByteArray  static_QSysInfo_machineUniqueId();
   QString  static_QSysInfo_prettyProductName();
   QString  static_QSysInfo_productType();
   QString  static_QSysInfo_productVersion();
};





class PythonQtWrapper_QSystemSemaphore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessMode SystemSemaphoreError )
enum AccessMode{
  Open = QSystemSemaphore::Open,   Create = QSystemSemaphore::Create};
enum SystemSemaphoreError{
  NoError = QSystemSemaphore::NoError,   PermissionDenied = QSystemSemaphore::PermissionDenied,   KeyError = QSystemSemaphore::KeyError,   AlreadyExists = QSystemSemaphore::AlreadyExists,   NotFound = QSystemSemaphore::NotFound,   OutOfResources = QSystemSemaphore::OutOfResources,   UnknownError = QSystemSemaphore::UnknownError};
public Q_SLOTS:
QSystemSemaphore* new_QSystemSemaphore(const QNativeIpcKey&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  arg__3 = QSystemSemaphore::Open);
QSystemSemaphore* new_QSystemSemaphore(const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
void delete_QSystemSemaphore(QSystemSemaphore* obj) { delete obj; }
   bool  acquire(QSystemSemaphore* theWrappedObject);
   QSystemSemaphore::SystemSemaphoreError  error(QSystemSemaphore* theWrappedObject) const;
   QString  errorString(QSystemSemaphore* theWrappedObject) const;
   bool  static_QSystemSemaphore_isKeyTypeSupported(QNativeIpcKey::Type  type);
   QString  key(QSystemSemaphore* theWrappedObject) const;
   QNativeIpcKey  static_QSystemSemaphore_legacyNativeKey(const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::legacyDefaultTypeForOs());
   QNativeIpcKey  nativeIpcKey(QSystemSemaphore* theWrappedObject) const;
   QNativeIpcKey  static_QSystemSemaphore_platformSafeKey(const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::DefaultTypeForOs);
   bool  release(QSystemSemaphore* theWrappedObject, int  n = 1);
   void setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
   void setNativeKey(QSystemSemaphore* theWrappedObject, const QNativeIpcKey&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  arg__3 = QSystemSemaphore::Open);
   void setNativeKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open, QNativeIpcKey::Type  type = QNativeIpcKey::legacyDefaultTypeForOs());
   QString  static_QSystemSemaphore_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
};





class PythonQtWrapper_QTemporaryDir : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QTemporaryDir* new_QTemporaryDir();
QTemporaryDir* new_QTemporaryDir(const QString&  templateName);
void delete_QTemporaryDir(QTemporaryDir* obj) { delete obj; }
   bool  autoRemove(QTemporaryDir* theWrappedObject) const;
   QString  errorString(QTemporaryDir* theWrappedObject) const;
   QString  filePath(QTemporaryDir* theWrappedObject, const QString&  fileName) const;
   bool  isValid(QTemporaryDir* theWrappedObject) const;
   QString  path(QTemporaryDir* theWrappedObject) const;
   bool  remove(QTemporaryDir* theWrappedObject);
   void setAutoRemove(QTemporaryDir* theWrappedObject, bool  b);
   void swap(QTemporaryDir* theWrappedObject, QTemporaryDir&  other);
    bool __nonzero__(QTemporaryDir* obj) { return obj->isValid(); }
};





class PythonQtShell_QTemporaryFile : public QTemporaryFile
{
public:
    PythonQtShell_QTemporaryFile():QTemporaryFile(),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(QObject*  parent):QTemporaryFile(parent),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName):QTemporaryFile(templateName),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName, QObject*  parent):QTemporaryFile(templateName, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTemporaryFile() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QString  fileName() const override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  flags) override;
QFileDevice::Permissions  permissions() const override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  resize(qint64  sz) override;
bool  seek(qint64  offset) override;
bool  setPermissions(QFileDevice::Permissions  permissionSpec) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTemporaryFile : public QTemporaryFile
{ public:
inline bool  promoted_open(QIODeviceBase::OpenMode  flags) { return this->open(flags); }
inline QString  py_q_fileName() const { return QTemporaryFile::fileName(); }
inline bool  py_q_open(QIODeviceBase::OpenMode  flags) { return QTemporaryFile::open(flags); }
};

class PythonQtWrapper_QTemporaryFile : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QTemporaryFile* new_QTemporaryFile();
QTemporaryFile* new_QTemporaryFile(QObject*  parent);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName, QObject*  parent);
void delete_QTemporaryFile(QTemporaryFile* obj) { delete obj; }
   bool  autoRemove(QTemporaryFile* theWrappedObject) const;
   QTemporaryFile*  static_QTemporaryFile_createNativeFile(QFile&  file);
   QTemporaryFile*  static_QTemporaryFile_createNativeFile(const QString&  fileName);
   QString  py_q_fileName(QTemporaryFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->py_q_fileName());}
   QString  fileTemplate(QTemporaryFile* theWrappedObject) const;
   bool  open(QTemporaryFile* theWrappedObject);
   bool  py_q_open(QTemporaryFile* theWrappedObject, QIODeviceBase::OpenMode  flags){  return (((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->py_q_open(flags));}
   bool  rename(QTemporaryFile* theWrappedObject, const QString&  newName);
   bool  renameOverwrite(QTemporaryFile* theWrappedObject, const QString&  newName);
   void setAutoRemove(QTemporaryFile* theWrappedObject, bool  b);
   void setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name);
};





class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
Q_FLAGS(BoundaryReasons )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   BreakOpportunity = QTextBoundaryFinder::BreakOpportunity,   StartOfItem = QTextBoundaryFinder::StartOfItem,   EndOfItem = QTextBoundaryFinder::EndOfItem,   MandatoryBreak = QTextBoundaryFinder::MandatoryBreak,   SoftHyphen = QTextBoundaryFinder::SoftHyphen};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Sentence = QTextBoundaryFinder::Sentence,   Line = QTextBoundaryFinder::Line};
Q_DECLARE_FLAGS(BoundaryReasons, BoundaryReason)
public Q_SLOTS:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, QStringView  str, unsigned char*  buffer = nullptr, qsizetype  bufferSize = 0);
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QChar*  chars, qsizetype  length, unsigned char*  buffer = nullptr, qsizetype  bufferSize = 0);
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; }
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   qsizetype  position(QTextBoundaryFinder* theWrappedObject) const;
   void setPosition(QTextBoundaryFinder* theWrappedObject, qsizetype  position);
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   void swap(QTextBoundaryFinder* theWrappedObject, QTextBoundaryFinder&  other);
   void toEnd(QTextBoundaryFinder* theWrappedObject);
   qsizetype  toNextBoundary(QTextBoundaryFinder* theWrappedObject);
   qsizetype  toPreviousBoundary(QTextBoundaryFinder* theWrappedObject);
   void toStart(QTextBoundaryFinder* theWrappedObject);
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
    bool __nonzero__(QTextBoundaryFinder* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QByteArray*  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite):QTextStream(array, openMode),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite):QTextStream(string, openMode),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadOnly):QTextStream(array, openMode),_wrapper(nullptr) {};

   ~PythonQtShell_QTextStream() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FieldAlignment NumberFlag RealNumberNotation Status )
Q_FLAGS(NumberFlags )
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData,   WriteFailed = QTextStream::WriteFailed};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public Q_SLOTS:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QByteArray*  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
QTextStream* new_QTextStream(const QByteArray&  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; }
   bool  atEnd(QTextStream* theWrappedObject) const;
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   int  fieldWidth(QTextStream* theWrappedObject) const;
   void flush(QTextStream* theWrappedObject);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   int  integerBase(QTextStream* theWrappedObject) const;
   QLocale  locale(QTextStream* theWrappedObject) const;
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   bool  operator_cast_bool(QTextStream* theWrappedObject) const;
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream*  writeLongLong(QTextStream* theWrappedObject, qlonglong  i);
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   QChar  padChar(QTextStream* theWrappedObject) const;
   qint64  pos(QTextStream* theWrappedObject) const;
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QString  readAll(QTextStream* theWrappedObject);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   bool  readLineInto(QTextStream* theWrappedObject, QString*  line, qint64  maxlen = 0);
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   void reset(QTextStream* theWrappedObject);
   void resetStatus(QTextStream* theWrappedObject);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   void setLocale(QTextStream* theWrappedObject, const QLocale&  locale);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   void setString(QTextStream* theWrappedObject, QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
};





class PythonQtShell_QThread : public QThread
{
public:
    PythonQtShell_QThread(QObject*  parent = nullptr):QThread(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QThread() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void run() override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QThread : public QThread
{ public:
inline int  promoted_exec() { return this->exec(); }
inline void promoted_run() { this->run(); }
static inline void promoted_setTerminationEnabled(bool  enabled = true) { setTerminationEnabled(enabled); }
inline bool  py_q_event(QEvent*  event) { return QThread::event(event); }
inline void py_q_run() { QThread::run(); }
};

class PythonQtWrapper_QThread : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Priority )
enum Priority{
  IdlePriority = QThread::IdlePriority,   LowestPriority = QThread::LowestPriority,   LowPriority = QThread::LowPriority,   NormalPriority = QThread::NormalPriority,   HighPriority = QThread::HighPriority,   HighestPriority = QThread::HighestPriority,   TimeCriticalPriority = QThread::TimeCriticalPriority,   InheritPriority = QThread::InheritPriority};
public Q_SLOTS:
QThread* new_QThread(QObject*  parent = nullptr);
void delete_QThread(QThread* obj) { delete obj; }
   QThread*  static_QThread_currentThread();
   Qt::HANDLE  static_QThread_currentThreadId();
   bool  py_q_event(QThread* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QThread*)theWrappedObject)->py_q_event(event));}
   QAbstractEventDispatcher*  eventDispatcher(QThread* theWrappedObject) const;
   int  exec(QThread* theWrappedObject);
   int  static_QThread_idealThreadCount();
   bool  isCurrentThread(QThread* theWrappedObject) const;
   bool  isFinished(QThread* theWrappedObject) const;
   bool  isInterruptionRequested(QThread* theWrappedObject) const;
   bool  static_QThread_isMainThread();
   bool  isRunning(QThread* theWrappedObject) const;
   int  loopLevel(QThread* theWrappedObject) const;
   void static_QThread_msleep(unsigned long  arg__1);
   QThread::Priority  priority(QThread* theWrappedObject) const;
   void requestInterruption(QThread* theWrappedObject);
   void run(QThread* theWrappedObject);
   void py_q_run(QThread* theWrappedObject){  (((PythonQtPublicPromoter_QThread*)theWrappedObject)->py_q_run());}
   QThread::QualityOfService  serviceLevel(QThread* theWrappedObject) const;
   void setEventDispatcher(QThread* theWrappedObject, QAbstractEventDispatcher*  eventDispatcher);
   void setPriority(QThread* theWrappedObject, QThread::Priority  priority);
   void setServiceLevel(QThread* theWrappedObject, QThread::QualityOfService  serviceLevel);
   void setStackSize(QThread* theWrappedObject, uint  stackSize);
   void static_QThread_setTerminationEnabled(bool  enabled = true);
   void static_QThread_sleep(unsigned long  arg__1);
   uint  stackSize(QThread* theWrappedObject) const;
   void static_QThread_usleep(unsigned long  arg__1);
   bool  wait(QThread* theWrappedObject, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QThread* theWrappedObject, unsigned long  time);
   void static_QThread_yieldCurrentThread();
};





class PythonQtShell_QThreadPool : public QThreadPool
{
public:
    PythonQtShell_QThreadPool(QObject*  parent = nullptr):QThreadPool(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QThreadPool() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QThreadPool : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QThreadPool* new_QThreadPool(QObject*  parent = nullptr);
void delete_QThreadPool(QThreadPool* obj) { delete obj; }
   int  activeThreadCount(QThreadPool* theWrappedObject) const;
   void clear(QThreadPool* theWrappedObject);
   bool  contains(QThreadPool* theWrappedObject, const QThread*  thread) const;
   int  expiryTimeout(QThreadPool* theWrappedObject) const;
   QThreadPool*  static_QThreadPool_globalInstance();
   int  maxThreadCount(QThreadPool* theWrappedObject) const;
   void releaseThread(QThreadPool* theWrappedObject);
   void reserveThread(QThreadPool* theWrappedObject);
   QThread::QualityOfService  serviceLevel(QThreadPool* theWrappedObject) const;
   void setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout);
   void setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount);
   void setServiceLevel(QThreadPool* theWrappedObject, QThread::QualityOfService  serviceLevel);
   void setStackSize(QThreadPool* theWrappedObject, uint  stackSize);
   void setThreadPriority(QThreadPool* theWrappedObject, QThread::Priority  priority);
   uint  stackSize(QThreadPool* theWrappedObject) const;
   void start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority = 0);
   void startOnReservedThread(QThreadPool* theWrappedObject, QRunnable*  runnable);
   QThread::Priority  threadPriority(QThreadPool* theWrappedObject) const;
   bool  tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable);
   bool  tryTake(QThreadPool* theWrappedObject, QRunnable*  runnable);
   bool  waitForDone(QThreadPool* theWrappedObject, QDeadlineTimer  deadline = QDeadlineTimer::Forever);
   bool  waitForDone(QThreadPool* theWrappedObject, int  msecs);
};





class PythonQtShell_QTimeLine : public QTimeLine
{
public:
    PythonQtShell_QTimeLine(int  duration = 1000, QObject*  parent = nullptr):QTimeLine(duration, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTimeLine() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
qreal  valueForTime(int  msec) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimeLine : public QTimeLine
{ public:
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTimeLine::timerEvent(event); }
inline qreal  py_q_valueForTime(int  msec) const { return QTimeLine::valueForTime(msec); }
};

class PythonQtWrapper_QTimeLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction State )
enum Direction{
  Forward = QTimeLine::Forward,   Backward = QTimeLine::Backward};
enum State{
  NotRunning = QTimeLine::NotRunning,   Paused = QTimeLine::Paused,   Running = QTimeLine::Running};
public Q_SLOTS:
QTimeLine* new_QTimeLine(int  duration = 1000, QObject*  parent = nullptr);
void delete_QTimeLine(QTimeLine* obj) { delete obj; }
   int  currentFrame(QTimeLine* theWrappedObject) const;
   int  currentTime(QTimeLine* theWrappedObject) const;
   qreal  currentValue(QTimeLine* theWrappedObject) const;
   QTimeLine::Direction  direction(QTimeLine* theWrappedObject) const;
   int  duration(QTimeLine* theWrappedObject) const;
   QEasingCurve  easingCurve(QTimeLine* theWrappedObject) const;
   int  endFrame(QTimeLine* theWrappedObject) const;
   int  frameForTime(QTimeLine* theWrappedObject, int  msec) const;
   int  loopCount(QTimeLine* theWrappedObject) const;
   void setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction);
   void setDuration(QTimeLine* theWrappedObject, int  duration);
   void setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve);
   void setEndFrame(QTimeLine* theWrappedObject, int  frame);
   void setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame);
   void setLoopCount(QTimeLine* theWrappedObject, int  count);
   void setStartFrame(QTimeLine* theWrappedObject, int  frame);
   void setUpdateInterval(QTimeLine* theWrappedObject, int  interval);
   int  startFrame(QTimeLine* theWrappedObject) const;
   QTimeLine::State  state(QTimeLine* theWrappedObject) const;
   void py_q_timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->py_q_timerEvent(event));}
   int  updateInterval(QTimeLine* theWrappedObject) const;
   qreal  valueForTime(QTimeLine* theWrappedObject, int  msec) const;
   qreal  py_q_valueForTime(QTimeLine* theWrappedObject, int  msec) const{  return (((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->py_q_valueForTime(msec));}
};





class PythonQtShell_QTimeZone : public QTimeZone
{
public:
    PythonQtShell_QTimeZone():QTimeZone(),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(QTimeZone::Initialization  spec):QTimeZone(spec),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(const QByteArray&  ianaId):QTimeZone(ianaId),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  territory = QLocale::AnyTerritory, const QString&  comment = QString()):QTimeZone(zoneId, offsetSeconds, name, abbreviation, territory, comment),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(const QTimeZone&  other):QTimeZone(other),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(int  offsetSeconds):QTimeZone(offsetSeconds),_wrapper(nullptr) {};

   ~PythonQtShell_QTimeZone();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTimeZone : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Initialization NameType TimeType )
enum Initialization{
  LocalTime = QTimeZone::LocalTime,   UTC = QTimeZone::UTC};
enum NameType{
  DefaultName = QTimeZone::DefaultName,   LongName = QTimeZone::LongName,   ShortName = QTimeZone::ShortName,   OffsetName = QTimeZone::OffsetName};
enum TimeType{
  StandardTime = QTimeZone::StandardTime,   DaylightTime = QTimeZone::DaylightTime,   GenericTime = QTimeZone::GenericTime};
public Q_SLOTS:
QTimeZone* new_QTimeZone();
QTimeZone* new_QTimeZone(QTimeZone::Initialization  spec);
QTimeZone* new_QTimeZone(const QByteArray&  ianaId);
QTimeZone* new_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  territory = QLocale::AnyTerritory, const QString&  comment = QString());
QTimeZone* new_QTimeZone(const QTimeZone&  other);
QTimeZone* new_QTimeZone(int  offsetSeconds);
void delete_QTimeZone(QTimeZone* obj) { delete obj; }
   QString  abbreviation(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QTimeZone  asBackendZone(QTimeZone* theWrappedObject) const;
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds();
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(QLocale::Country  territory);
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(int  offsetSeconds);
   QString  comment(QTimeZone* theWrappedObject) const;
   QLocale::Country  country(QTimeZone* theWrappedObject) const;
   int  daylightTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QString  displayName(QTimeZone* theWrappedObject, QTimeZone::TimeType  timeType, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   QString  displayName(QTimeZone* theWrappedObject, const QDateTime&  atDateTime, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   int  fixedSecondsAheadOfUtc(QTimeZone* theWrappedObject) const;
   QTimeZone  static_QTimeZone_fromSecondsAheadOfUtc(int  offset);
   bool  hasAlternativeName(QTimeZone* theWrappedObject, QByteArrayView  alias) const;
   bool  hasDaylightTime(QTimeZone* theWrappedObject) const;
   bool  hasTransitions(QTimeZone* theWrappedObject) const;
   QByteArray  static_QTimeZone_ianaIdToWindowsId(const QByteArray&  ianaId);
   QByteArray  id(QTimeZone* theWrappedObject) const;
   bool  isDaylightTime(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  static_QTimeZone_isTimeZoneIdAvailable(const QByteArray&  ianaId);
   bool  isUtcOrFixedOffset(QTimeZone* theWrappedObject) const;
   bool  static_QTimeZone_isUtcOrFixedOffset(Qt::TimeSpec  spec);
   bool  isValid(QTimeZone* theWrappedObject) const;
   int  offsetFromUtc(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  __ne__(QTimeZone* theWrappedObject, const QTimeZone&  rhs);
   void writeTo(QTimeZone* theWrappedObject, QDataStream&  ds);
   QTimeZone*  operator_assign(QTimeZone* theWrappedObject, const QTimeZone&  other);
   bool  __eq__(QTimeZone* theWrappedObject, const QTimeZone&  rhs);
   void readFrom(QTimeZone* theWrappedObject, QDataStream&  ds);
   int  standardTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   void swap(QTimeZone* theWrappedObject, QTimeZone&  other);
   QTimeZone  static_QTimeZone_systemTimeZone();
   QByteArray  static_QTimeZone_systemTimeZoneId();
   QLocale::Country  territory(QTimeZone* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QTimeZone* theWrappedObject) const;
   QTimeZone  static_QTimeZone_utc();
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId);
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId, QLocale::Country  territory);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId, QLocale::Country  territory);
    QString py_toString(QTimeZone*);
    bool __nonzero__(QTimeZone* obj) { return obj->isValid(); }
};





class PythonQtShell_QTimer : public QTimer
{
public:
    PythonQtShell_QTimer(QObject*  parent = nullptr):QTimer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTimer() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimer : public QTimer
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QTimer::timerEvent(arg__1); }
};

class PythonQtWrapper_QTimer : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QTimer* new_QTimer(QObject*  parent = nullptr);
void delete_QTimer(QTimer* obj) { delete obj; }
   Qt::TimerId  id(QTimer* theWrappedObject) const;
   int  interval(QTimer* theWrappedObject) const;
   bool  isActive(QTimer* theWrappedObject) const;
   bool  isSingleShot(QTimer* theWrappedObject) const;
   int  remainingTime(QTimer* theWrappedObject) const;
   void setInterval(QTimer* theWrappedObject, int  msec);
   void setSingleShot(QTimer* theWrappedObject, bool  singleShot);
   void setTimerType(QTimer* theWrappedObject, Qt::TimerType  atype);
   void static_QTimer_singleShot(int  msec, Qt::TimerType  timerType, const QObject*  receiver, const char*  member);
   void static_QTimer_singleShot(int  msec, const QObject*  receiver, const char*  member);
   void py_q_timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QTimer*)theWrappedObject)->py_q_timerEvent(arg__1));}
   int  timerId(QTimer* theWrappedObject) const;
   Qt::TimerType  timerType(QTimer* theWrappedObject) const;
};





class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(Qt::TimerId  timerId):QTimerEvent(timerId),_wrapper(nullptr) {};
    PythonQtShell_QTimerEvent(const QTimerEvent&  arg__1):QTimerEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(nullptr) {};

   ~PythonQtShell_QTimerEvent() override;

QTimerEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimerEvent : public QTimerEvent
{ public:
inline QTimerEvent&  promoted_operator_assign(const QTimerEvent&  other) { return this->QTimerEvent::operator=(other); }
inline QTimerEvent*  py_q_clone() const { return QTimerEvent::clone(); }
};

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QTimerEvent* new_QTimerEvent(Qt::TimerId  timerId);
QTimerEvent* new_QTimerEvent(const QTimerEvent&  arg__1);
QTimerEvent* new_QTimerEvent(int  timerId);
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; }
   QTimerEvent*  py_q_clone(QTimerEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTimerEvent*)theWrappedObject)->py_q_clone());}
   Qt::TimerId  id(QTimerEvent* theWrappedObject) const;
   bool  matches(QTimerEvent* theWrappedObject, const QBasicTimer&  timer) const;
   QTimerEvent*  operator_assign(QTimerEvent* theWrappedObject, const QTimerEvent&  other);
   int  timerId(QTimerEvent* theWrappedObject) const;
};





class PythonQtShell_QTranslator : public QTranslator
{
public:
    PythonQtShell_QTranslator(QObject*  parent = nullptr):QTranslator(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTranslator() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isEmpty() const override;
void timerEvent(QTimerEvent*  event) override;
QString  translate(const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTranslator : public QTranslator
{ public:
inline bool  py_q_isEmpty() const { return QTranslator::isEmpty(); }
inline QString  py_q_translate(const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const { return QTranslator::translate(context, sourceText, disambiguation, n); }
};

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QTranslator* new_QTranslator(QObject*  parent = nullptr);
void delete_QTranslator(QTranslator* obj) { delete obj; }
   QString  filePath(QTranslator* theWrappedObject) const;
   bool  isEmpty(QTranslator* theWrappedObject) const;
   bool  py_q_isEmpty(QTranslator* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->py_q_isEmpty());}
   QString  language(QTranslator* theWrappedObject) const;
   bool  load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix = QString(), const QString&  directory = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory = QString());
   QString  translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const;
   QString  py_q_translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const{  return (((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->py_q_translate(context, sourceText, disambiguation, n));}
    bool __nonzero__(QTranslator* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QUrlQuery : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QUrlQuery* new_QUrlQuery();
QUrlQuery* new_QUrlQuery(const QString&  queryString);
QUrlQuery* new_QUrlQuery(const QUrl&  url);
QUrlQuery* new_QUrlQuery(const QUrlQuery&  other);
void delete_QUrlQuery(QUrlQuery* obj) { delete obj; }
   void addQueryItem(QUrlQuery* theWrappedObject, const QString&  key, const QString&  value);
   QStringList  allQueryItemValues(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   void clear(QUrlQuery* theWrappedObject);
   bool  hasQueryItem(QUrlQuery* theWrappedObject, const QString&  key) const;
   bool  isEmpty(QUrlQuery* theWrappedObject) const;
   bool  __ne__(QUrlQuery* theWrappedObject, const QUrlQuery&  rhs);
   QUrlQuery*  operator_assign(QUrlQuery* theWrappedObject, const QUrlQuery&  other);
   bool  __eq__(QUrlQuery* theWrappedObject, const QUrlQuery&  rhs);
   QString  query(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QString  queryItemValue(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QList<std::pair<QString , QString >  >  queryItems(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QChar  queryPairDelimiter(QUrlQuery* theWrappedObject) const;
   QChar  queryValueDelimiter(QUrlQuery* theWrappedObject) const;
   void removeAllQueryItems(QUrlQuery* theWrappedObject, const QString&  key);
   void removeQueryItem(QUrlQuery* theWrappedObject, const QString&  key);
   void setQuery(QUrlQuery* theWrappedObject, const QString&  queryString);
   void setQueryDelimiters(QUrlQuery* theWrappedObject, QChar  valueDelimiter, QChar  pairDelimiter);
   void setQueryItems(QUrlQuery* theWrappedObject, const QList<std::pair<QString , QString >  >&  query);
   void swap(QUrlQuery* theWrappedObject, QUrlQuery&  other);
   QString  toString(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
    QString py_toString(QUrlQuery*);
    bool __nonzero__(QUrlQuery* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QUuid : public QUuid
{
public:
    PythonQtShell_QUuid():QUuid(),_wrapper(nullptr) {};
    PythonQtShell_QUuid(QAnyStringView  string):QUuid(string),_wrapper(nullptr) {};
    PythonQtShell_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8):QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8),_wrapper(nullptr) {};

   ~PythonQtShell_QUuid();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QUuid : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StringFormat Variant Version )
enum StringFormat{
  WithBraces = QUuid::WithBraces,   WithoutBraces = QUuid::WithoutBraces,   Id128 = QUuid::Id128};
enum Variant{
  VarUnknown = QUuid::VarUnknown,   NCS = QUuid::NCS,   DCE = QUuid::DCE,   Microsoft = QUuid::Microsoft,   Reserved = QUuid::Reserved};
enum Version{
  VerUnknown = QUuid::VerUnknown,   Time = QUuid::Time,   EmbeddedPOSIX = QUuid::EmbeddedPOSIX,   Md5 = QUuid::Md5,   Name = QUuid::Name,   Random = QUuid::Random,   Sha1 = QUuid::Sha1,   UnixEpoch = QUuid::UnixEpoch};
public Q_SLOTS:
QUuid* new_QUuid();
QUuid* new_QUuid(QAnyStringView  string);
QUuid* new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8);
QUuid* new_QUuid(const QUuid& other) {
PythonQtShell_QUuid* a = new PythonQtShell_QUuid();
*((QUuid*)a) = other;
return a; }
void delete_QUuid(QUuid* obj) { delete obj; }
   QUuid  static_QUuid_createUuid();
   QUuid  static_QUuid_createUuidV3(QUuid  ns, QByteArrayView  baseData);
   QUuid  static_QUuid_createUuidV5(QUuid  ns, QByteArrayView  baseData);
   QUuid  static_QUuid_createUuidV7();
   QUuid  static_QUuid_fromBytes(const void*  bytes, QSysInfo::Endian  order = QSysInfo::BigEndian);
   QUuid  static_QUuid_fromRfc4122(QByteArrayView  arg__1);
   QUuid  static_QUuid_fromString(QAnyStringView  string);
   bool  isNull(QUuid* theWrappedObject, Qt::Disambiguated_t  arg__1 = Qt::Disambiguated) const;
   bool  __ne__(QUuid* theWrappedObject, const QUuid&  rhs);
   bool  __lt__(QUuid* theWrappedObject, const QUuid&  rhs);
   void writeTo(QUuid* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QUuid* theWrappedObject, const QUuid&  rhs);
   bool  __eq__(QUuid* theWrappedObject, const QUuid&  rhs);
   bool  __gt__(QUuid* theWrappedObject, const QUuid&  rhs);
   bool  __ge__(QUuid* theWrappedObject, const QUuid&  rhs);
   void readFrom(QUuid* theWrappedObject, QDataStream&  arg__1);
   QByteArray  toByteArray(QUuid* theWrappedObject, QUuid::StringFormat  mode = QUuid::WithBraces) const;
   QByteArray  toRfc4122(QUuid* theWrappedObject) const;
   QString  toString(QUuid* theWrappedObject, QUuid::StringFormat  mode = QUuid::WithBraces) const;
   QUuid::Variant  variant(QUuid* theWrappedObject, Qt::Disambiguated_t  arg__1 = Qt::Disambiguated) const;
   QUuid::Version  version(QUuid* theWrappedObject, Qt::Disambiguated_t  arg__1 = Qt::Disambiguated) const;
    QString py_toString(QUuid*);
    bool __nonzero__(QUuid* obj) { return !obj->isNull(); }
void py_set_data1(QUuid* theWrappedObject, uint  data1){ theWrappedObject->data1 = data1; }
uint  py_get_data1(QUuid* theWrappedObject){ return theWrappedObject->data1; }
void py_set_data2(QUuid* theWrappedObject, ushort  data2){ theWrappedObject->data2 = data2; }
ushort  py_get_data2(QUuid* theWrappedObject){ return theWrappedObject->data2; }
void py_set_data3(QUuid* theWrappedObject, ushort  data3){ theWrappedObject->data3 = data3; }
ushort  py_get_data3(QUuid* theWrappedObject){ return theWrappedObject->data3; }
};





class PythonQtShell_QVariantAnimation : public QVariantAnimation
{
public:
    PythonQtShell_QVariantAnimation(QObject*  parent = nullptr):QVariantAnimation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVariantAnimation() override;

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

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return this->interpolated(from, to, progress); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateCurrentValue(const QVariant&  value) { this->updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QVariantAnimation::duration(); }
inline bool  py_q_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline QVariant  py_q_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
inline void py_q_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline void py_q_updateCurrentValue(const QVariant&  value) { QVariantAnimation::updateCurrentValue(value); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = nullptr);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; }
   QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
   int  py_q_duration(QVariantAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_duration());}
   QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
   QVariant  endValue(QVariantAnimation* theWrappedObject) const;
   bool  py_q_event(QVariantAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_event(event));}
   QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
   QVariant  py_q_interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_interpolated(from, to, progress));}
   QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
   QList<std::pair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
   void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
   void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
   void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
   void setKeyValues(QVariantAnimation* theWrappedObject, const QList<std::pair<qreal , QVariant >  >&  values);
   void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   QVariant  startValue(QVariantAnimation* theWrappedObject) const;
   void py_q_updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void py_q_updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentValue(value));}
   void py_q_updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};


