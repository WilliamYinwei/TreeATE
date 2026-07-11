#include <PythonQt.h>
#include <QDate>
#include <QObject>
#include <QStringList>
#include <QTextDocument>
#include <QVariant>
#include <qbitarray.h>
#include <qbytearray.h>
#include <qcalendar.h>
#include <qcompare.h>
#include <qcomparehelpers.h>
#include <qcontainerfwd.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qnamespace.h>
#include <qpoint.h>
#include <qproperty.h>
#include <qrect.h>
#include <qregularexpression.h>
#include <qsize.h>
#include <qtextdocument.h>
#include <qtextstream.h>
#include <qtimezone.h>
#include <qtransform.h>
#include <qurl.h>
#include <qurlquery.h>



class PythonQtWrapper_QBitArray : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QBitArray* new_QBitArray();
QBitArray* new_QBitArray(const QBitArray&  other);
QBitArray* new_QBitArray(qsizetype  size, bool  val = false);
void delete_QBitArray(QBitArray* obj) { delete obj; }
   bool  at(QBitArray* theWrappedObject, qsizetype  i) const;
   const char*  bits(QBitArray* theWrappedObject) const;
   void clear(QBitArray* theWrappedObject);
   void clearBit(QBitArray* theWrappedObject, qsizetype  i);
   qsizetype  count(QBitArray* theWrappedObject) const;
   qsizetype  count(QBitArray* theWrappedObject, bool  on) const;
   bool  fill(QBitArray* theWrappedObject, bool  aval, qsizetype  asize = -1);
   void fill(QBitArray* theWrappedObject, bool  val, qsizetype  first, qsizetype  last);
   QBitArray  static_QBitArray_fromBits(const char*  data, qsizetype  len);
   bool  isEmpty(QBitArray* theWrappedObject) const;
   bool  isNull(QBitArray* theWrappedObject) const;
   bool  __ne__(QBitArray* theWrappedObject, const QBitArray&  rhs);
   QBitArray  __and__(QBitArray* theWrappedObject, const QBitArray&  a2);
   QBitArray*  __iand__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   void writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1);
   QBitArray*  operator_assign(QBitArray* theWrappedObject, const QBitArray&  other);
   bool  __eq__(QBitArray* theWrappedObject, const QBitArray&  rhs);
   void readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1);
   QBitArray  __xor__(QBitArray* theWrappedObject, const QBitArray&  a2);
   QBitArray*  __ixor__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   QBitArray  __or__(QBitArray* theWrappedObject, const QBitArray&  a2);
   QBitArray*  __ior__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   QBitArray  __invert__(QBitArray* theWrappedObject);
   void resize(QBitArray* theWrappedObject, qsizetype  size);
   void setBit(QBitArray* theWrappedObject, qsizetype  i);
   void setBit(QBitArray* theWrappedObject, qsizetype  i, bool  val);
   qsizetype  size(QBitArray* theWrappedObject) const;
   void swap(QBitArray* theWrappedObject, QBitArray&  other);
   bool  testBit(QBitArray* theWrappedObject, qsizetype  i) const;
   unsigned int  toUInt32(QBitArray* theWrappedObject, QSysInfo::Endian  endianness, bool*  ok = nullptr) const;
   bool  toggleBit(QBitArray* theWrappedObject, qsizetype  i);
   void truncate(QBitArray* theWrappedObject, qsizetype  pos);
    QString py_toString(QBitArray*);
    bool __nonzero__(QBitArray* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QByteArray : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Base64DecodingStatus Base64Option )
Q_FLAGS(Base64Options )
enum class Base64DecodingStatus{
  Ok = static_cast<int>(QByteArray::Base64DecodingStatus::Ok),   IllegalInputLength = static_cast<int>(QByteArray::Base64DecodingStatus::IllegalInputLength),   IllegalCharacter = static_cast<int>(QByteArray::Base64DecodingStatus::IllegalCharacter),   IllegalPadding = static_cast<int>(QByteArray::Base64DecodingStatus::IllegalPadding)};
enum Base64Option{
  Base64Encoding = QByteArray::Base64Encoding,   Base64UrlEncoding = QByteArray::Base64UrlEncoding,   KeepTrailingEquals = QByteArray::KeepTrailingEquals,   OmitTrailingEquals = QByteArray::OmitTrailingEquals,   IgnoreBase64DecodingErrors = QByteArray::IgnoreBase64DecodingErrors,   AbortOnBase64DecodingErrors = QByteArray::AbortOnBase64DecodingErrors};
Q_DECLARE_FLAGS(Base64Options, Base64Option)
public Q_SLOTS:
QByteArray* new_QByteArray();
QByteArray* new_QByteArray(const QByteArray&  arg__1);
QByteArray* new_QByteArray(qsizetype  size, char  c);
void delete_QByteArray(QByteArray* obj) { delete obj; }
   QByteArray*  append(QByteArray* theWrappedObject, char  c);
   QByteArray*  append(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  append(QByteArray* theWrappedObject, const char*  s, qsizetype  len);
   QByteArray*  append(QByteArray* theWrappedObject, qsizetype  count, char  c);
   QByteArray*  assign(QByteArray* theWrappedObject, QByteArrayView  v);
   QByteArray*  assign(QByteArray* theWrappedObject, qsizetype  n, char  c);
   char  at(QByteArray* theWrappedObject, qsizetype  i) const;
   char  back(QByteArray* theWrappedObject) const;
   qsizetype  capacity(QByteArray* theWrappedObject) const;
   void chop(QByteArray* theWrappedObject, qsizetype  n);
   QByteArray  chopped(QByteArray* theWrappedObject, qsizetype  len) const;
   void clear(QByteArray* theWrappedObject);
   int  compare(QByteArray* theWrappedObject, QByteArrayView  a, Qt::CaseSensitivity  cs = Qt::CaseSensitive) const;
   bool  contains(QByteArray* theWrappedObject, QByteArrayView  bv) const;
   bool  contains(QByteArray* theWrappedObject, char  c) const;
   qsizetype  count(QByteArray* theWrappedObject, QByteArrayView  bv) const;
   qsizetype  count(QByteArray* theWrappedObject, char  c) const;
   bool  endsWith(QByteArray* theWrappedObject, QByteArrayView  bv) const;
   bool  endsWith(QByteArray* theWrappedObject, char  c) const;
   QByteArray*  fill(QByteArray* theWrappedObject, char  c, qsizetype  size = -1);
   QByteArray  first(QByteArray* theWrappedObject, qsizetype  n) const;
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64, QByteArray::Base64Options  options = QByteArray::Base64Encoding);
   QByteArray::FromBase64Result  static_QByteArray_fromBase64Encoding(const QByteArray&  base64, QByteArray::Base64Options  options = QByteArray::Base64Encoding);
   QByteArray  static_QByteArray_fromHex(const QByteArray&  hexEncoded);
   QByteArray  static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent = '%');
   char  front(QByteArray* theWrappedObject) const;
   qsizetype  indexOf(QByteArray* theWrappedObject, QByteArrayView  bv, qsizetype  from = 0) const;
   qsizetype  indexOf(QByteArray* theWrappedObject, char  c, qsizetype  from = 0) const;
   QByteArray*  insert(QByteArray* theWrappedObject, qsizetype  i, char  c);
   QByteArray*  insert(QByteArray* theWrappedObject, qsizetype  i, const QByteArray&  data);
   QByteArray*  insert(QByteArray* theWrappedObject, qsizetype  i, qsizetype  count, char  c);
   bool  isEmpty(QByteArray* theWrappedObject) const;
   bool  isLower(QByteArray* theWrappedObject) const;
   bool  isNull(QByteArray* theWrappedObject) const;
   bool  isSharedWith(QByteArray* theWrappedObject, const QByteArray&  other) const;
   bool  isUpper(QByteArray* theWrappedObject) const;
   bool  isValidUtf8(QByteArray* theWrappedObject) const;
   QByteArray  last(QByteArray* theWrappedObject, qsizetype  n) const;
   qsizetype  lastIndexOf(QByteArray* theWrappedObject, QByteArrayView  bv) const;
   qsizetype  lastIndexOf(QByteArray* theWrappedObject, QByteArrayView  bv, qsizetype  from) const;
   qsizetype  lastIndexOf(QByteArray* theWrappedObject, char  c, qsizetype  from = -1) const;
   QByteArray  left(QByteArray* theWrappedObject, qsizetype  n) const;
   QByteArray  leftJustified(QByteArray* theWrappedObject, qsizetype  width, char  fill = ' ', bool  truncate = false) const;
   qsizetype  length(QByteArray* theWrappedObject) const;
   qsizetype  static_QByteArray_maxSize();
   qsizetype  max_size(QByteArray* theWrappedObject) const;
   QByteArray  mid(QByteArray* theWrappedObject, qsizetype  index, qsizetype  len = -1);
   QByteArray  mid(QByteArray* theWrappedObject, qsizetype  index, qsizetype  len = -1) const;
   QByteArray*  nullTerminate(QByteArray* theWrappedObject);
   QByteArray  nullTerminated(QByteArray* theWrappedObject);
   QByteArray  nullTerminated(QByteArray* theWrappedObject) const;
   QByteArray  static_QByteArray_number(double  arg__1, char  format = 'g', int  precision = 6);
   QByteArray  static_QByteArray_number(int  arg__1, int  base = 10);
   QByteArray  static_QByteArray_number(long  arg__1, int  base = 10);
   QByteArray  static_QByteArray_number(qlonglong  arg__1, int  base = 10);
   QByteArray  static_QByteArray_number(ulong  arg__1, int  base = 10);
   bool  __ne__(QByteArray* theWrappedObject, const QByteArray&  rhs);
   QByteArray  __add__(QByteArray* theWrappedObject, char  a2);
   QByteArray  __add__(QByteArray* theWrappedObject, const QByteArray&  a2);
   QString  __add__(QByteArray* theWrappedObject, const QString&  s);
   QByteArray  __add__(QByteArray* theWrappedObject, const char*  a2);
   QByteArray*  __iadd__(QByteArray* theWrappedObject, const QByteArray&  a);
   bool  __lt__(QByteArray* theWrappedObject, const QByteArray&  rhs);
   void writeTo(QByteArray* theWrappedObject, QDataStream&  out);
   bool  __le__(QByteArray* theWrappedObject, const QByteArray&  rhs);
   QByteArray*  operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1);
   bool  __eq__(QByteArray* theWrappedObject, const QByteArray&  rhs);
   bool  __gt__(QByteArray* theWrappedObject, const QByteArray&  rhs);
   bool  __ge__(QByteArray* theWrappedObject, const QByteArray&  rhs);
   void readFrom(QByteArray* theWrappedObject, QDataStream&  in);
   QByteArray  percentDecoded(QByteArray* theWrappedObject, char  percent = '%') const;
   QByteArray*  prepend(QByteArray* theWrappedObject, char  c);
   QByteArray*  prepend(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  prepend(QByteArray* theWrappedObject, qsizetype  count, char  c);
   void push_back(QByteArray* theWrappedObject, const QByteArray&  a);
   void push_front(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  remove(QByteArray* theWrappedObject, qsizetype  index, qsizetype  len);
   QByteArray*  removeAt(QByteArray* theWrappedObject, qsizetype  pos);
   QByteArray*  removeFirst(QByteArray* theWrappedObject);
   QByteArray*  removeLast(QByteArray* theWrappedObject);
   QByteArray  repeated(QByteArray* theWrappedObject, qsizetype  times) const;
   QByteArray*  replace(QByteArray* theWrappedObject, QByteArrayView  before, QByteArrayView  after);
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, QByteArrayView  after);
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, char  after);
   QByteArray*  replace(QByteArray* theWrappedObject, qsizetype  index, qsizetype  len, QByteArrayView  s);
   void reserve(QByteArray* theWrappedObject, qsizetype  size);
   void resize(QByteArray* theWrappedObject, qsizetype  size);
   void resize(QByteArray* theWrappedObject, qsizetype  size, char  c);
   void resizeForOverwrite(QByteArray* theWrappedObject, qsizetype  size);
   QByteArray  right(QByteArray* theWrappedObject, qsizetype  n) const;
   QByteArray  rightJustified(QByteArray* theWrappedObject, qsizetype  width, char  fill = ' ', bool  truncate = false) const;
   QByteArray*  setNum(QByteArray* theWrappedObject, double  arg__1, char  format = 'g', int  precision = 6);
   QByteArray*  setNum(QByteArray* theWrappedObject, float  arg__1, char  format = 'g', int  precision = 6);
   QByteArray*  setNum(QByteArray* theWrappedObject, int  arg__1, int  base = 10);
   QByteArray*  setNum(QByteArray* theWrappedObject, long  arg__1, int  base = 10);
   QByteArray*  setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base = 10);
   QByteArray*  setNum(QByteArray* theWrappedObject, short  arg__1, int  base = 10);
   QByteArray*  setNum(QByteArray* theWrappedObject, ulong  arg__1, int  base = 10);
   QByteArray*  setRawData(QByteArray* theWrappedObject, const char*  a, qsizetype  n);
   void shrink_to_fit(QByteArray* theWrappedObject);
   QByteArray  simplified(QByteArray* theWrappedObject) const;
   qsizetype  size(QByteArray* theWrappedObject) const;
   QByteArray*  slice(QByteArray* theWrappedObject, qsizetype  pos);
   QByteArray*  slice(QByteArray* theWrappedObject, qsizetype  pos, qsizetype  n);
   QByteArray  sliced(QByteArray* theWrappedObject, qsizetype  pos) const;
   QByteArray  sliced(QByteArray* theWrappedObject, qsizetype  pos, qsizetype  n) const;
   QList<QByteArray >  split(QByteArray* theWrappedObject, char  sep) const;
   void squeeze(QByteArray* theWrappedObject);
   bool  startsWith(QByteArray* theWrappedObject, QByteArrayView  bv) const;
   bool  startsWith(QByteArray* theWrappedObject, char  c) const;
   void swap(QByteArray* theWrappedObject, QByteArray&  other);
   QByteArray  toBase64(QByteArray* theWrappedObject, QByteArray::Base64Options  options = QByteArray::Base64Encoding) const;
   double  toDouble(QByteArray* theWrappedObject, bool*  ok = nullptr) const;
   float  toFloat(QByteArray* theWrappedObject, bool*  ok = nullptr) const;
   QByteArray  toHex(QByteArray* theWrappedObject, char  separator = '\0') const;
   int  toInt(QByteArray* theWrappedObject, bool*  ok = nullptr, int  base = 10) const;
   QByteArray  toLower(QByteArray* theWrappedObject) const;
   QByteArray  toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray(), char  percent = '%') const;
   ushort  toUShort(QByteArray* theWrappedObject, bool*  ok = nullptr, int  base = 10) const;
   QByteArray  toUpper(QByteArray* theWrappedObject) const;
   QByteArray  trimmed(QByteArray* theWrappedObject) const;
   void truncate(QByteArray* theWrappedObject, qsizetype  pos);
    bool __nonzero__(QByteArray* obj) { return !obj->isEmpty(); }

  PyObject* data(QByteArray* b) {
    return PyBytes_FromStringAndSize(b->data(), b->size());
  }
    
};





class PythonQtWrapper_QDate : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDate* new_QDate();
QDate* new_QDate(int  y, int  m, int  d);
QDate* new_QDate(int  y, int  m, int  d, QCalendar  cal);
QDate* new_QDate(const QDate& other) {
QDate* a = new QDate();
*((QDate*)a) = other;
return a; }
void delete_QDate(QDate* obj) { delete obj; }
   QDate  addDays(QDate* theWrappedObject, qint64  days) const;
   QDate  addMonths(QDate* theWrappedObject, int  months) const;
   QDate  addMonths(QDate* theWrappedObject, int  months, QCalendar  cal) const;
   QDate  addYears(QDate* theWrappedObject, int  years) const;
   QDate  addYears(QDate* theWrappedObject, int  years, QCalendar  cal) const;
   QDate  static_QDate_currentDate();
   int  day(QDate* theWrappedObject) const;
   int  day(QDate* theWrappedObject, QCalendar  cal) const;
   int  dayOfWeek(QDate* theWrappedObject) const;
   int  dayOfWeek(QDate* theWrappedObject, QCalendar  cal) const;
   int  dayOfYear(QDate* theWrappedObject) const;
   int  dayOfYear(QDate* theWrappedObject, QCalendar  cal) const;
   int  daysInMonth(QDate* theWrappedObject) const;
   int  daysInMonth(QDate* theWrappedObject, QCalendar  cal) const;
   int  daysInYear(QDate* theWrappedObject) const;
   int  daysInYear(QDate* theWrappedObject, QCalendar  cal) const;
   qint64  daysTo(QDate* theWrappedObject, QDate  d) const;
   QDateTime  endOfDay(QDate* theWrappedObject) const;
   QDateTime  endOfDay(QDate* theWrappedObject, Qt::TimeSpec  spec, int  offsetSeconds = 0) const;
   QDateTime  endOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const;
   QDate  static_QDate_fromJulianDay(qint64  jd_);
   QDate  static_QDate_fromString(const QString&  string, Qt::DateFormat  format = Qt::TextDate);
   QDate  static_QDate_fromString(const QString&  string, const QString&  format, QCalendar  cal);
   QDate  static_QDate_fromString(const QString&  string, const QString&  format, int  baseYear = QLocale::DefaultTwoDigitBaseYear);
   QDate  static_QDate_fromString(const QString&  string, const QString&  format, int  baseYear, QCalendar  cal);
   void getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day) const;
   bool  static_QDate_isLeapYear(int  year);
   bool  isNull(QDate* theWrappedObject) const;
   bool  isValid(QDate* theWrappedObject) const;
   bool  static_QDate_isValid(int  y, int  m, int  d);
   int  month(QDate* theWrappedObject) const;
   int  month(QDate* theWrappedObject, QCalendar  cal) const;
   bool  __ne__(QDate* theWrappedObject, const QDate&  rhs);
   bool  __lt__(QDate* theWrappedObject, const QDate&  rhs);
   void writeTo(QDate* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QDate* theWrappedObject, const QDate&  rhs);
   bool  __eq__(QDate* theWrappedObject, const QDate&  rhs);
   bool  __gt__(QDate* theWrappedObject, const QDate&  rhs);
   bool  __ge__(QDate* theWrappedObject, const QDate&  rhs);
   void readFrom(QDate* theWrappedObject, QDataStream&  arg__1);
   bool  setDate(QDate* theWrappedObject, int  year, int  month, int  day);
   bool  setDate(QDate* theWrappedObject, int  year, int  month, int  day, QCalendar  cal);
   QDateTime  startOfDay(QDate* theWrappedObject) const;
   QDateTime  startOfDay(QDate* theWrappedObject, Qt::TimeSpec  spec, int  offsetSeconds = 0) const;
   QDateTime  startOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const;
   qint64  toJulianDay(QDate* theWrappedObject) const;
   QString  toString(QDate* theWrappedObject, Qt::DateFormat  format = Qt::TextDate) const;
   QString  toString(QDate* theWrappedObject, const QString&  format) const;
   QString  toString(QDate* theWrappedObject, const QString&  format, QCalendar  cal) const;
   int  weekNumber(QDate* theWrappedObject, int*  yearNum = nullptr) const;
   int  year(QDate* theWrappedObject) const;
   int  year(QDate* theWrappedObject, QCalendar  cal) const;
    QString py_toString(QDate*);
    bool __nonzero__(QDate* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QDateTime : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransitionResolution YearRange )
enum class TransitionResolution{
  Reject = static_cast<int>(QDateTime::TransitionResolution::Reject),   RelativeToBefore = static_cast<int>(QDateTime::TransitionResolution::RelativeToBefore),   RelativeToAfter = static_cast<int>(QDateTime::TransitionResolution::RelativeToAfter),   PreferBefore = static_cast<int>(QDateTime::TransitionResolution::PreferBefore),   PreferAfter = static_cast<int>(QDateTime::TransitionResolution::PreferAfter),   PreferStandard = static_cast<int>(QDateTime::TransitionResolution::PreferStandard),   PreferDaylightSaving = static_cast<int>(QDateTime::TransitionResolution::PreferDaylightSaving),   LegacyBehavior = static_cast<int>(QDateTime::TransitionResolution::LegacyBehavior)};
enum class YearRange{
  First = static_cast<int>(QDateTime::YearRange::First),   Last = static_cast<int>(QDateTime::YearRange::Last)};
public Q_SLOTS:
QDateTime* new_QDateTime();
QDateTime* new_QDateTime(QDate  date, QTime  time, QDateTime::TransitionResolution  resolve = QDateTime::TransitionResolution::LegacyBehavior);
QDateTime* new_QDateTime(QDate  date, QTime  time, Qt::TimeSpec  spec, int  offsetSeconds = 0);
QDateTime* new_QDateTime(QDate  date, QTime  time, const QTimeZone&  timeZone, QDateTime::TransitionResolution  resolve = QDateTime::TransitionResolution::LegacyBehavior);
QDateTime* new_QDateTime(const QDateTime&  other);
void delete_QDateTime(QDateTime* obj) { delete obj; }
   QDateTime  addDays(QDateTime* theWrappedObject, qint64  days) const;
   QDateTime  addMSecs(QDateTime* theWrappedObject, qint64  msecs) const;
   QDateTime  addMonths(QDateTime* theWrappedObject, int  months) const;
   QDateTime  addSecs(QDateTime* theWrappedObject, qint64  secs) const;
   QDateTime  addYears(QDateTime* theWrappedObject, int  years) const;
   QDateTime  static_QDateTime_currentDateTime();
   QDateTime  static_QDateTime_currentDateTime(const QTimeZone&  zone);
   QDateTime  static_QDateTime_currentDateTimeUtc();
   qint64  static_QDateTime_currentMSecsSinceEpoch();
   qint64  static_QDateTime_currentSecsSinceEpoch();
   QDate  date(QDateTime* theWrappedObject) const;
   qint64  daysTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   QDateTime  static_QDateTime_fromMSecsSinceEpoch(qint64  msecs);
   QDateTime  static_QDateTime_fromMSecsSinceEpoch(qint64  msecs, Qt::TimeSpec  spec, int  offsetFromUtc = 0);
   QDateTime  static_QDateTime_fromMSecsSinceEpoch(qint64  msecs, const QTimeZone&  timeZone);
   QDateTime  static_QDateTime_fromSecsSinceEpoch(qint64  secs);
   QDateTime  static_QDateTime_fromSecsSinceEpoch(qint64  secs, Qt::TimeSpec  spec, int  offsetFromUtc = 0);
   QDateTime  static_QDateTime_fromSecsSinceEpoch(qint64  secs, const QTimeZone&  timeZone);
   QDateTime  static_QDateTime_fromString(const QString&  string, Qt::DateFormat  format = Qt::TextDate);
   QDateTime  static_QDateTime_fromString(const QString&  string, const QString&  format, QCalendar  cal);
   QDateTime  static_QDateTime_fromString(const QString&  string, const QString&  format, int  baseYear = QLocale::DefaultTwoDigitBaseYear);
   QDateTime  static_QDateTime_fromString(const QString&  string, const QString&  format, int  baseYear, QCalendar  cal);
   bool  isDaylightTime(QDateTime* theWrappedObject) const;
   bool  isNull(QDateTime* theWrappedObject) const;
   bool  isValid(QDateTime* theWrappedObject) const;
   qint64  msecsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   int  offsetFromUtc(QDateTime* theWrappedObject) const;
   bool  __ne__(QDateTime* theWrappedObject, const QDateTime&  rhs);
   bool  __lt__(QDateTime* theWrappedObject, const QDateTime&  rhs);
   void writeTo(QDateTime* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QDateTime* theWrappedObject, const QDateTime&  rhs);
   bool  __eq__(QDateTime* theWrappedObject, const QDateTime&  rhs);
   bool  __gt__(QDateTime* theWrappedObject, const QDateTime&  rhs);
   bool  __ge__(QDateTime* theWrappedObject, const QDateTime&  rhs);
   void readFrom(QDateTime* theWrappedObject, QDataStream&  arg__1);
   qint64  secsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   void setDate(QDateTime* theWrappedObject, QDate  date, QDateTime::TransitionResolution  resolve = QDateTime::TransitionResolution::LegacyBehavior);
   void setMSecsSinceEpoch(QDateTime* theWrappedObject, qint64  msecs);
   void setOffsetFromUtc(QDateTime* theWrappedObject, int  offsetSeconds);
   void setSecsSinceEpoch(QDateTime* theWrappedObject, qint64  secs);
   void setTime(QDateTime* theWrappedObject, QTime  time, QDateTime::TransitionResolution  resolve = QDateTime::TransitionResolution::LegacyBehavior);
   void setTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec);
   void setTimeZone(QDateTime* theWrappedObject, const QTimeZone&  toZone, QDateTime::TransitionResolution  resolve = QDateTime::TransitionResolution::LegacyBehavior);
   void swap(QDateTime* theWrappedObject, QDateTime&  other);
   QTime  time(QDateTime* theWrappedObject) const;
   QTimeZone  timeRepresentation(QDateTime* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QDateTime* theWrappedObject) const;
   QTimeZone  timeZone(QDateTime* theWrappedObject) const;
   QString  timeZoneAbbreviation(QDateTime* theWrappedObject) const;
   QDateTime  toLocalTime(QDateTime* theWrappedObject) const;
   qint64  toMSecsSinceEpoch(QDateTime* theWrappedObject) const;
   QDateTime  toOffsetFromUtc(QDateTime* theWrappedObject, int  offsetSeconds) const;
   qint64  toSecsSinceEpoch(QDateTime* theWrappedObject) const;
   QString  toString(QDateTime* theWrappedObject, Qt::DateFormat  format = Qt::TextDate) const;
   QString  toString(QDateTime* theWrappedObject, const QString&  format) const;
   QString  toString(QDateTime* theWrappedObject, const QString&  format, QCalendar  cal) const;
   QDateTime  toTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec) const;
   QDateTime  toTimeZone(QDateTime* theWrappedObject, const QTimeZone&  toZone) const;
   QDateTime  toUTC(QDateTime* theWrappedObject) const;
    QString py_toString(QDateTime*);
    bool __nonzero__(QDateTime* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QLine : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QLine* new_QLine();
QLine* new_QLine(const QPoint&  pt1, const QPoint&  pt2);
QLine* new_QLine(int  x1, int  y1, int  x2, int  y2);
QLine* new_QLine(const QLine& other) {
QLine* a = new QLine();
*((QLine*)a) = other;
return a; }
void delete_QLine(QLine* obj) { delete obj; }
   QPoint  center(QLine* theWrappedObject) const;
   int  dx(QLine* theWrappedObject) const;
   int  dy(QLine* theWrappedObject) const;
   bool  isNull(QLine* theWrappedObject) const;
   bool  __ne__(QLine* theWrappedObject, const QLine&  rhs);
   bool  __ne__(QLine* theWrappedObject, const QLineF&  rhs);
   QLine  __mul__(QLine* theWrappedObject, const QTransform&  m);
   void writeTo(QLine* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLine* theWrappedObject, const QLine&  rhs);
   bool  __eq__(QLine* theWrappedObject, const QLineF&  rhs);
   void readFrom(QLine* theWrappedObject, QDataStream&  arg__1);
   QPoint  p1(QLine* theWrappedObject) const;
   QPoint  p2(QLine* theWrappedObject) const;
   void setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void setP1(QLine* theWrappedObject, const QPoint&  p1);
   void setP2(QLine* theWrappedObject, const QPoint&  p2);
   void setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   QLineF  toLineF(QLine* theWrappedObject) const;
   void translate(QLine* theWrappedObject, const QPoint&  p);
   void translate(QLine* theWrappedObject, int  dx, int  dy);
   QLine  translated(QLine* theWrappedObject, const QPoint&  p) const;
   QLine  translated(QLine* theWrappedObject, int  dx, int  dy) const;
   int  x1(QLine* theWrappedObject) const;
   int  x2(QLine* theWrappedObject) const;
   int  y1(QLine* theWrappedObject) const;
   int  y2(QLine* theWrappedObject) const;
    QString py_toString(QLine*);
    bool __nonzero__(QLine* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QLineF : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IntersectionType )
enum IntersectionType{
  NoIntersection = QLineF::NoIntersection,   BoundedIntersection = QLineF::BoundedIntersection,   UnboundedIntersection = QLineF::UnboundedIntersection};
public Q_SLOTS:
QLineF* new_QLineF();
QLineF* new_QLineF(const QLine&  line);
QLineF* new_QLineF(const QPointF&  pt1, const QPointF&  pt2);
QLineF* new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2);
QLineF* new_QLineF(const QLineF& other) {
QLineF* a = new QLineF();
*((QLineF*)a) = other;
return a; }
void delete_QLineF(QLineF* obj) { delete obj; }
   qreal  angle(QLineF* theWrappedObject) const;
   qreal  angleTo(QLineF* theWrappedObject, const QLineF&  l) const;
   QPointF  center(QLineF* theWrappedObject) const;
   qreal  dx(QLineF* theWrappedObject) const;
   qreal  dy(QLineF* theWrappedObject) const;
   QLineF  static_QLineF_fromPolar(qreal  length, qreal  angle);
   QLineF::IntersectionType  intersects(QLineF* theWrappedObject, const QLineF&  l, QPointF*  intersectionPoint = nullptr) const;
   bool  isNull(QLineF* theWrappedObject) const;
   qreal  length(QLineF* theWrappedObject) const;
   QLineF  normalVector(QLineF* theWrappedObject) const;
   bool  __ne__(QLineF* theWrappedObject, const QLine&  rhs);
   bool  __ne__(QLineF* theWrappedObject, const QLineF&  rhs);
   QLineF  __mul__(QLineF* theWrappedObject, const QTransform&  m);
   void writeTo(QLineF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLineF* theWrappedObject, const QLine&  rhs);
   bool  __eq__(QLineF* theWrappedObject, const QLineF&  rhs);
   void readFrom(QLineF* theWrappedObject, QDataStream&  arg__1);
   QPointF  p1(QLineF* theWrappedObject) const;
   QPointF  p2(QLineF* theWrappedObject) const;
   QPointF  pointAt(QLineF* theWrappedObject, qreal  t) const;
   void setAngle(QLineF* theWrappedObject, qreal  angle);
   void setLength(QLineF* theWrappedObject, qreal  len);
   void setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setP1(QLineF* theWrappedObject, const QPointF&  p1);
   void setP2(QLineF* theWrappedObject, const QPointF&  p2);
   void setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   QLine  toLine(QLineF* theWrappedObject) const;
   void translate(QLineF* theWrappedObject, const QPointF&  p);
   void translate(QLineF* theWrappedObject, qreal  dx, qreal  dy);
   QLineF  translated(QLineF* theWrappedObject, const QPointF&  p) const;
   QLineF  translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const;
   QLineF  unitVector(QLineF* theWrappedObject) const;
   qreal  x1(QLineF* theWrappedObject) const;
   qreal  x2(QLineF* theWrappedObject) const;
   qreal  y1(QLineF* theWrappedObject) const;
   qreal  y2(QLineF* theWrappedObject) const;
    QString py_toString(QLineF*);
    bool __nonzero__(QLineF* obj) { return !obj->isNull(); }
};





class PythonQtShell_QLocale : public QLocale
{
public:
    PythonQtShell_QLocale():QLocale(),_wrapper(nullptr) {};
    PythonQtShell_QLocale(QLocale::Language  language, QLocale::Country  territory):QLocale(language, territory),_wrapper(nullptr) {};
    PythonQtShell_QLocale(QLocale::Language  language, QLocale::Script  script = QLocale::AnyScript, QLocale::Country  territory = QLocale::AnyTerritory):QLocale(language, script, territory),_wrapper(nullptr) {};
    PythonQtShell_QLocale(const QLocale&  other):QLocale(other),_wrapper(nullptr) {};
    PythonQtShell_QLocale(const QString&  name):QLocale(name),_wrapper(nullptr) {};

   ~PythonQtShell_QLocale();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QLocale : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Country CurrencySymbolFormat DataSizeFormat FloatingPointPrecisionOption FormatType Language LanguageCodeType MeasurementSystem NumberOption QuotationStyle Script TagSeparator )
Q_FLAGS(LanguageCodeTypes NumberOptions )
enum Country{
  AnyTerritory = QLocale::AnyTerritory,   Afghanistan = QLocale::Afghanistan,   AlandIslands = QLocale::AlandIslands,   Albania = QLocale::Albania,   Algeria = QLocale::Algeria,   AmericanSamoa = QLocale::AmericanSamoa,   Andorra = QLocale::Andorra,   Angola = QLocale::Angola,   Anguilla = QLocale::Anguilla,   Antarctica = QLocale::Antarctica,   AntiguaAndBarbuda = QLocale::AntiguaAndBarbuda,   Argentina = QLocale::Argentina,   Armenia = QLocale::Armenia,   Aruba = QLocale::Aruba,   AscensionIsland = QLocale::AscensionIsland,   Australia = QLocale::Australia,   Austria = QLocale::Austria,   Azerbaijan = QLocale::Azerbaijan,   Bahamas = QLocale::Bahamas,   Bahrain = QLocale::Bahrain,   Bangladesh = QLocale::Bangladesh,   Barbados = QLocale::Barbados,   Belarus = QLocale::Belarus,   Belgium = QLocale::Belgium,   Belize = QLocale::Belize,   Benin = QLocale::Benin,   Bermuda = QLocale::Bermuda,   Bhutan = QLocale::Bhutan,   Bolivia = QLocale::Bolivia,   BosniaAndHerzegovina = QLocale::BosniaAndHerzegovina,   Botswana = QLocale::Botswana,   BouvetIsland = QLocale::BouvetIsland,   Brazil = QLocale::Brazil,   BritishIndianOceanTerritory = QLocale::BritishIndianOceanTerritory,   BritishVirginIslands = QLocale::BritishVirginIslands,   Brunei = QLocale::Brunei,   Bulgaria = QLocale::Bulgaria,   BurkinaFaso = QLocale::BurkinaFaso,   Burundi = QLocale::Burundi,   Cambodia = QLocale::Cambodia,   Cameroon = QLocale::Cameroon,   Canada = QLocale::Canada,   CanaryIslands = QLocale::CanaryIslands,   CapeVerde = QLocale::CapeVerde,   CaribbeanNetherlands = QLocale::CaribbeanNetherlands,   CaymanIslands = QLocale::CaymanIslands,   CentralAfricanRepublic = QLocale::CentralAfricanRepublic,   CeutaAndMelilla = QLocale::CeutaAndMelilla,   Chad = QLocale::Chad,   Chile = QLocale::Chile,   China = QLocale::China,   ChristmasIsland = QLocale::ChristmasIsland,   ClippertonIsland = QLocale::ClippertonIsland,   CocosIslands = QLocale::CocosIslands,   Colombia = QLocale::Colombia,   Comoros = QLocale::Comoros,   CongoBrazzaville = QLocale::CongoBrazzaville,   CongoKinshasa = QLocale::CongoKinshasa,   CookIslands = QLocale::CookIslands,   CostaRica = QLocale::CostaRica,   Croatia = QLocale::Croatia,   Cuba = QLocale::Cuba,   Curacao = QLocale::Curacao,   Cyprus = QLocale::Cyprus,   Czechia = QLocale::Czechia,   Denmark = QLocale::Denmark,   DiegoGarcia = QLocale::DiegoGarcia,   Djibouti = QLocale::Djibouti,   Dominica = QLocale::Dominica,   DominicanRepublic = QLocale::DominicanRepublic,   Ecuador = QLocale::Ecuador,   Egypt = QLocale::Egypt,   ElSalvador = QLocale::ElSalvador,   EquatorialGuinea = QLocale::EquatorialGuinea,   Eritrea = QLocale::Eritrea,   Estonia = QLocale::Estonia,   Eswatini = QLocale::Eswatini,   Ethiopia = QLocale::Ethiopia,   Europe = QLocale::Europe,   EuropeanUnion = QLocale::EuropeanUnion,   FalklandIslands = QLocale::FalklandIslands,   FaroeIslands = QLocale::FaroeIslands,   Fiji = QLocale::Fiji,   Finland = QLocale::Finland,   France = QLocale::France,   FrenchGuiana = QLocale::FrenchGuiana,   FrenchPolynesia = QLocale::FrenchPolynesia,   FrenchSouthernTerritories = QLocale::FrenchSouthernTerritories,   Gabon = QLocale::Gabon,   Gambia = QLocale::Gambia,   Georgia = QLocale::Georgia,   Germany = QLocale::Germany,   Ghana = QLocale::Ghana,   Gibraltar = QLocale::Gibraltar,   Greece = QLocale::Greece,   Greenland = QLocale::Greenland,   Grenada = QLocale::Grenada,   Guadeloupe = QLocale::Guadeloupe,   Guam = QLocale::Guam,   Guatemala = QLocale::Guatemala,   Guernsey = QLocale::Guernsey,   GuineaBissau = QLocale::GuineaBissau,   Guinea = QLocale::Guinea,   Guyana = QLocale::Guyana,   Haiti = QLocale::Haiti,   HeardAndMcDonaldIslands = QLocale::HeardAndMcDonaldIslands,   Honduras = QLocale::Honduras,   HongKong = QLocale::HongKong,   Hungary = QLocale::Hungary,   Iceland = QLocale::Iceland,   India = QLocale::India,   Indonesia = QLocale::Indonesia,   Iran = QLocale::Iran,   Iraq = QLocale::Iraq,   Ireland = QLocale::Ireland,   IsleOfMan = QLocale::IsleOfMan,   Israel = QLocale::Israel,   Italy = QLocale::Italy,   IvoryCoast = QLocale::IvoryCoast,   Jamaica = QLocale::Jamaica,   Japan = QLocale::Japan,   Jersey = QLocale::Jersey,   Jordan = QLocale::Jordan,   Kazakhstan = QLocale::Kazakhstan,   Kenya = QLocale::Kenya,   Kiribati = QLocale::Kiribati,   Kosovo = QLocale::Kosovo,   Kuwait = QLocale::Kuwait,   Kyrgyzstan = QLocale::Kyrgyzstan,   Laos = QLocale::Laos,   LatinAmerica = QLocale::LatinAmerica,   Latvia = QLocale::Latvia,   Lebanon = QLocale::Lebanon,   Lesotho = QLocale::Lesotho,   Liberia = QLocale::Liberia,   Libya = QLocale::Libya,   Liechtenstein = QLocale::Liechtenstein,   Lithuania = QLocale::Lithuania,   Luxembourg = QLocale::Luxembourg,   Macao = QLocale::Macao,   Macedonia = QLocale::Macedonia,   Madagascar = QLocale::Madagascar,   Malawi = QLocale::Malawi,   Malaysia = QLocale::Malaysia,   Maldives = QLocale::Maldives,   Mali = QLocale::Mali,   Malta = QLocale::Malta,   MarshallIslands = QLocale::MarshallIslands,   Martinique = QLocale::Martinique,   Mauritania = QLocale::Mauritania,   Mauritius = QLocale::Mauritius,   Mayotte = QLocale::Mayotte,   Mexico = QLocale::Mexico,   Micronesia = QLocale::Micronesia,   Moldova = QLocale::Moldova,   Monaco = QLocale::Monaco,   Mongolia = QLocale::Mongolia,   Montenegro = QLocale::Montenegro,   Montserrat = QLocale::Montserrat,   Morocco = QLocale::Morocco,   Mozambique = QLocale::Mozambique,   Myanmar = QLocale::Myanmar,   Namibia = QLocale::Namibia,   NauruTerritory = QLocale::NauruTerritory,   Nepal = QLocale::Nepal,   Netherlands = QLocale::Netherlands,   NewCaledonia = QLocale::NewCaledonia,   NewZealand = QLocale::NewZealand,   Nicaragua = QLocale::Nicaragua,   Nigeria = QLocale::Nigeria,   Niger = QLocale::Niger,   Niue = QLocale::Niue,   NorfolkIsland = QLocale::NorfolkIsland,   NorthernMarianaIslands = QLocale::NorthernMarianaIslands,   NorthKorea = QLocale::NorthKorea,   Norway = QLocale::Norway,   Oman = QLocale::Oman,   OutlyingOceania = QLocale::OutlyingOceania,   Pakistan = QLocale::Pakistan,   Palau = QLocale::Palau,   PalestinianTerritories = QLocale::PalestinianTerritories,   Panama = QLocale::Panama,   PapuaNewGuinea = QLocale::PapuaNewGuinea,   Paraguay = QLocale::Paraguay,   Peru = QLocale::Peru,   Philippines = QLocale::Philippines,   Pitcairn = QLocale::Pitcairn,   Poland = QLocale::Poland,   Portugal = QLocale::Portugal,   PuertoRico = QLocale::PuertoRico,   Qatar = QLocale::Qatar,   Reunion = QLocale::Reunion,   Romania = QLocale::Romania,   Russia = QLocale::Russia,   Rwanda = QLocale::Rwanda,   SaintBarthelemy = QLocale::SaintBarthelemy,   SaintHelena = QLocale::SaintHelena,   SaintKittsAndNevis = QLocale::SaintKittsAndNevis,   SaintLucia = QLocale::SaintLucia,   SaintMartin = QLocale::SaintMartin,   SaintPierreAndMiquelon = QLocale::SaintPierreAndMiquelon,   SaintVincentAndGrenadines = QLocale::SaintVincentAndGrenadines,   Samoa = QLocale::Samoa,   SanMarino = QLocale::SanMarino,   SaoTomeAndPrincipe = QLocale::SaoTomeAndPrincipe,   SaudiArabia = QLocale::SaudiArabia,   Senegal = QLocale::Senegal,   Serbia = QLocale::Serbia,   Seychelles = QLocale::Seychelles,   SierraLeone = QLocale::SierraLeone,   Singapore = QLocale::Singapore,   SintMaarten = QLocale::SintMaarten,   Slovakia = QLocale::Slovakia,   Slovenia = QLocale::Slovenia,   SolomonIslands = QLocale::SolomonIslands,   Somalia = QLocale::Somalia,   SouthAfrica = QLocale::SouthAfrica,   SouthGeorgiaAndSouthSandwichIslands = QLocale::SouthGeorgiaAndSouthSandwichIslands,   SouthKorea = QLocale::SouthKorea,   SouthSudan = QLocale::SouthSudan,   Spain = QLocale::Spain,   SriLanka = QLocale::SriLanka,   Sudan = QLocale::Sudan,   Suriname = QLocale::Suriname,   SvalbardAndJanMayen = QLocale::SvalbardAndJanMayen,   Sweden = QLocale::Sweden,   Switzerland = QLocale::Switzerland,   Syria = QLocale::Syria,   Taiwan = QLocale::Taiwan,   Tajikistan = QLocale::Tajikistan,   Tanzania = QLocale::Tanzania,   Thailand = QLocale::Thailand,   TimorLeste = QLocale::TimorLeste,   Togo = QLocale::Togo,   TokelauTerritory = QLocale::TokelauTerritory,   Tonga = QLocale::Tonga,   TrinidadAndTobago = QLocale::TrinidadAndTobago,   TristanDaCunha = QLocale::TristanDaCunha,   Tunisia = QLocale::Tunisia,   Turkey = QLocale::Turkey,   Turkmenistan = QLocale::Turkmenistan,   TurksAndCaicosIslands = QLocale::TurksAndCaicosIslands,   TuvaluTerritory = QLocale::TuvaluTerritory,   Uganda = QLocale::Uganda,   Ukraine = QLocale::Ukraine,   UnitedArabEmirates = QLocale::UnitedArabEmirates,   UnitedKingdom = QLocale::UnitedKingdom,   UnitedStatesOutlyingIslands = QLocale::UnitedStatesOutlyingIslands,   UnitedStates = QLocale::UnitedStates,   UnitedStatesVirginIslands = QLocale::UnitedStatesVirginIslands,   Uruguay = QLocale::Uruguay,   Uzbekistan = QLocale::Uzbekistan,   Vanuatu = QLocale::Vanuatu,   VaticanCity = QLocale::VaticanCity,   Venezuela = QLocale::Venezuela,   Vietnam = QLocale::Vietnam,   WallisAndFutuna = QLocale::WallisAndFutuna,   WesternSahara = QLocale::WesternSahara,   World = QLocale::World,   Yemen = QLocale::Yemen,   Zambia = QLocale::Zambia,   Zimbabwe = QLocale::Zimbabwe,   AnyCountry = QLocale::AnyCountry,   Bonaire = QLocale::Bonaire,   BosniaAndHerzegowina = QLocale::BosniaAndHerzegowina,   CuraSao = QLocale::CuraSao,   CzechRepublic = QLocale::CzechRepublic,   DemocraticRepublicOfCongo = QLocale::DemocraticRepublicOfCongo,   DemocraticRepublicOfKorea = QLocale::DemocraticRepublicOfKorea,   EastTimor = QLocale::EastTimor,   LatinAmericaAndTheCaribbean = QLocale::LatinAmericaAndTheCaribbean,   Macau = QLocale::Macau,   NauruCountry = QLocale::NauruCountry,   PeoplesRepublicOfCongo = QLocale::PeoplesRepublicOfCongo,   RepublicOfKorea = QLocale::RepublicOfKorea,   RussianFederation = QLocale::RussianFederation,   SaintVincentAndTheGrenadines = QLocale::SaintVincentAndTheGrenadines,   SouthGeorgiaAndTheSouthSandwichIslands = QLocale::SouthGeorgiaAndTheSouthSandwichIslands,   SvalbardAndJanMayenIslands = QLocale::SvalbardAndJanMayenIslands,   Swaziland = QLocale::Swaziland,   SyrianArabRepublic = QLocale::SyrianArabRepublic,   TokelauCountry = QLocale::TokelauCountry,   TuvaluCountry = QLocale::TuvaluCountry,   UnitedStatesMinorOutlyingIslands = QLocale::UnitedStatesMinorOutlyingIslands,   VaticanCityState = QLocale::VaticanCityState,   WallisAndFutunaIslands = QLocale::WallisAndFutunaIslands,   LastTerritory = QLocale::LastTerritory,   LastCountry = QLocale::LastCountry};
enum CurrencySymbolFormat{
  CurrencyIsoCode = QLocale::CurrencyIsoCode,   CurrencySymbol = QLocale::CurrencySymbol,   CurrencyDisplayName = QLocale::CurrencyDisplayName};
enum DataSizeFormat{
  DataSizeBase1000 = QLocale::DataSizeBase1000,   DataSizeSIQuantifiers = QLocale::DataSizeSIQuantifiers,   DataSizeIecFormat = QLocale::DataSizeIecFormat,   DataSizeTraditionalFormat = QLocale::DataSizeTraditionalFormat,   DataSizeSIFormat = QLocale::DataSizeSIFormat};
enum FloatingPointPrecisionOption{
  FloatingPointShortest = QLocale::FloatingPointShortest};
enum FormatType{
  LongFormat = QLocale::LongFormat,   ShortFormat = QLocale::ShortFormat,   NarrowFormat = QLocale::NarrowFormat};
enum Language{
  AnyLanguage = QLocale::AnyLanguage,   C = QLocale::C,   Abkhazian = QLocale::Abkhazian,   Afar = QLocale::Afar,   Afrikaans = QLocale::Afrikaans,   Aghem = QLocale::Aghem,   Akan = QLocale::Akan,   Akkadian = QLocale::Akkadian,   Akoose = QLocale::Akoose,   Albanian = QLocale::Albanian,   AmericanSignLanguage = QLocale::AmericanSignLanguage,   Amharic = QLocale::Amharic,   AncientEgyptian = QLocale::AncientEgyptian,   AncientGreek = QLocale::AncientGreek,   Arabic = QLocale::Arabic,   Aragonese = QLocale::Aragonese,   Aramaic = QLocale::Aramaic,   Armenian = QLocale::Armenian,   Assamese = QLocale::Assamese,   Asturian = QLocale::Asturian,   Asu = QLocale::Asu,   Atsam = QLocale::Atsam,   Avaric = QLocale::Avaric,   Avestan = QLocale::Avestan,   Aymara = QLocale::Aymara,   Azerbaijani = QLocale::Azerbaijani,   Bafia = QLocale::Bafia,   Balinese = QLocale::Balinese,   Bambara = QLocale::Bambara,   Bamun = QLocale::Bamun,   Bangla = QLocale::Bangla,   Basaa = QLocale::Basaa,   Bashkir = QLocale::Bashkir,   Basque = QLocale::Basque,   BatakToba = QLocale::BatakToba,   Belarusian = QLocale::Belarusian,   Bemba = QLocale::Bemba,   Bena = QLocale::Bena,   Bhojpuri = QLocale::Bhojpuri,   Bislama = QLocale::Bislama,   Blin = QLocale::Blin,   Bodo = QLocale::Bodo,   Bosnian = QLocale::Bosnian,   Breton = QLocale::Breton,   Buginese = QLocale::Buginese,   Bulgarian = QLocale::Bulgarian,   Burmese = QLocale::Burmese,   Cantonese = QLocale::Cantonese,   Catalan = QLocale::Catalan,   Cebuano = QLocale::Cebuano,   CentralAtlasTamazight = QLocale::CentralAtlasTamazight,   CentralKurdish = QLocale::CentralKurdish,   Chakma = QLocale::Chakma,   Chamorro = QLocale::Chamorro,   Chechen = QLocale::Chechen,   Cherokee = QLocale::Cherokee,   Chickasaw = QLocale::Chickasaw,   Chiga = QLocale::Chiga,   Chinese = QLocale::Chinese,   Church = QLocale::Church,   Chuvash = QLocale::Chuvash,   Colognian = QLocale::Colognian,   Coptic = QLocale::Coptic,   Cornish = QLocale::Cornish,   Corsican = QLocale::Corsican,   Cree = QLocale::Cree,   Croatian = QLocale::Croatian,   Czech = QLocale::Czech,   Danish = QLocale::Danish,   Divehi = QLocale::Divehi,   Dogri = QLocale::Dogri,   Duala = QLocale::Duala,   Dutch = QLocale::Dutch,   Dzongkha = QLocale::Dzongkha,   Embu = QLocale::Embu,   English = QLocale::English,   Erzya = QLocale::Erzya,   Esperanto = QLocale::Esperanto,   Estonian = QLocale::Estonian,   Ewe = QLocale::Ewe,   Ewondo = QLocale::Ewondo,   Faroese = QLocale::Faroese,   Fijian = QLocale::Fijian,   Filipino = QLocale::Filipino,   Finnish = QLocale::Finnish,   French = QLocale::French,   Friulian = QLocale::Friulian,   Fulah = QLocale::Fulah,   Gaelic = QLocale::Gaelic,   Ga = QLocale::Ga,   Galician = QLocale::Galician,   Ganda = QLocale::Ganda,   Geez = QLocale::Geez,   Georgian = QLocale::Georgian,   German = QLocale::German,   Gothic = QLocale::Gothic,   Greek = QLocale::Greek,   Guarani = QLocale::Guarani,   Gujarati = QLocale::Gujarati,   Gusii = QLocale::Gusii,   Haitian = QLocale::Haitian,   Hausa = QLocale::Hausa,   Hawaiian = QLocale::Hawaiian,   Hebrew = QLocale::Hebrew,   Herero = QLocale::Herero,   Hindi = QLocale::Hindi,   HiriMotu = QLocale::HiriMotu,   Hungarian = QLocale::Hungarian,   Icelandic = QLocale::Icelandic,   Ido = QLocale::Ido,   Igbo = QLocale::Igbo,   InariSami = QLocale::InariSami,   Indonesian = QLocale::Indonesian,   Ingush = QLocale::Ingush,   Interlingua = QLocale::Interlingua,   Interlingue = QLocale::Interlingue,   Inuktitut = QLocale::Inuktitut,   Inupiaq = QLocale::Inupiaq,   Irish = QLocale::Irish,   Italian = QLocale::Italian,   Japanese = QLocale::Japanese,   Javanese = QLocale::Javanese,   Jju = QLocale::Jju,   JolaFonyi = QLocale::JolaFonyi,   Kabuverdianu = QLocale::Kabuverdianu,   Kabyle = QLocale::Kabyle,   Kako = QLocale::Kako,   Kalaallisut = QLocale::Kalaallisut,   Kalenjin = QLocale::Kalenjin,   Kamba = QLocale::Kamba,   Kannada = QLocale::Kannada,   Kanuri = QLocale::Kanuri,   Kashmiri = QLocale::Kashmiri,   Kazakh = QLocale::Kazakh,   Kenyang = QLocale::Kenyang,   Khmer = QLocale::Khmer,   Kiche = QLocale::Kiche,   Kikuyu = QLocale::Kikuyu,   Kinyarwanda = QLocale::Kinyarwanda,   Komi = QLocale::Komi,   Kongo = QLocale::Kongo,   Konkani = QLocale::Konkani,   Korean = QLocale::Korean,   Koro = QLocale::Koro,   KoyraboroSenni = QLocale::KoyraboroSenni,   KoyraChiini = QLocale::KoyraChiini,   Kpelle = QLocale::Kpelle,   Kuanyama = QLocale::Kuanyama,   Kurdish = QLocale::Kurdish,   Kwasio = QLocale::Kwasio,   Kyrgyz = QLocale::Kyrgyz,   Lakota = QLocale::Lakota,   Langi = QLocale::Langi,   Lao = QLocale::Lao,   Latin = QLocale::Latin,   Latvian = QLocale::Latvian,   Lezghian = QLocale::Lezghian,   Limburgish = QLocale::Limburgish,   Lingala = QLocale::Lingala,   LiteraryChinese = QLocale::LiteraryChinese,   Lithuanian = QLocale::Lithuanian,   Lojban = QLocale::Lojban,   LowerSorbian = QLocale::LowerSorbian,   LowGerman = QLocale::LowGerman,   LubaKatanga = QLocale::LubaKatanga,   LuleSami = QLocale::LuleSami,   Luo = QLocale::Luo,   Luxembourgish = QLocale::Luxembourgish,   Luyia = QLocale::Luyia,   Macedonian = QLocale::Macedonian,   Machame = QLocale::Machame,   Maithili = QLocale::Maithili,   MakhuwaMeetto = QLocale::MakhuwaMeetto,   Makonde = QLocale::Makonde,   Malagasy = QLocale::Malagasy,   Malayalam = QLocale::Malayalam,   Malay = QLocale::Malay,   Maltese = QLocale::Maltese,   Mandingo = QLocale::Mandingo,   Manipuri = QLocale::Manipuri,   Manx = QLocale::Manx,   Maori = QLocale::Maori,   Mapuche = QLocale::Mapuche,   Marathi = QLocale::Marathi,   Marshallese = QLocale::Marshallese,   Masai = QLocale::Masai,   Mazanderani = QLocale::Mazanderani,   Mende = QLocale::Mende,   Meru = QLocale::Meru,   Meta = QLocale::Meta,   Mohawk = QLocale::Mohawk,   Mongolian = QLocale::Mongolian,   Morisyen = QLocale::Morisyen,   Mundang = QLocale::Mundang,   Muscogee = QLocale::Muscogee,   Nama = QLocale::Nama,   NauruLanguage = QLocale::NauruLanguage,   Navajo = QLocale::Navajo,   Ndonga = QLocale::Ndonga,   Nepali = QLocale::Nepali,   Newari = QLocale::Newari,   Ngiemboon = QLocale::Ngiemboon,   Ngomba = QLocale::Ngomba,   NigerianPidgin = QLocale::NigerianPidgin,   Nko = QLocale::Nko,   NorthernLuri = QLocale::NorthernLuri,   NorthernSami = QLocale::NorthernSami,   NorthernSotho = QLocale::NorthernSotho,   NorthNdebele = QLocale::NorthNdebele,   NorwegianBokmal = QLocale::NorwegianBokmal,   NorwegianNynorsk = QLocale::NorwegianNynorsk,   Nuer = QLocale::Nuer,   Nyanja = QLocale::Nyanja,   Nyankole = QLocale::Nyankole,   Occitan = QLocale::Occitan,   Odia = QLocale::Odia,   Ojibwa = QLocale::Ojibwa,   OldIrish = QLocale::OldIrish,   OldNorse = QLocale::OldNorse,   OldPersian = QLocale::OldPersian,   Oromo = QLocale::Oromo,   Osage = QLocale::Osage,   Ossetic = QLocale::Ossetic,   Pahlavi = QLocale::Pahlavi,   Palauan = QLocale::Palauan,   Pali = QLocale::Pali,   Papiamento = QLocale::Papiamento,   Pashto = QLocale::Pashto,   Persian = QLocale::Persian,   Phoenician = QLocale::Phoenician,   Polish = QLocale::Polish,   Portuguese = QLocale::Portuguese,   Prussian = QLocale::Prussian,   Punjabi = QLocale::Punjabi,   Quechua = QLocale::Quechua,   Romanian = QLocale::Romanian,   Romansh = QLocale::Romansh,   Rombo = QLocale::Rombo,   Rundi = QLocale::Rundi,   Russian = QLocale::Russian,   Rwa = QLocale::Rwa,   Saho = QLocale::Saho,   Sakha = QLocale::Sakha,   Samburu = QLocale::Samburu,   Samoan = QLocale::Samoan,   Sango = QLocale::Sango,   Sangu = QLocale::Sangu,   Sanskrit = QLocale::Sanskrit,   Santali = QLocale::Santali,   Sardinian = QLocale::Sardinian,   Saurashtra = QLocale::Saurashtra,   Sena = QLocale::Sena,   Serbian = QLocale::Serbian,   Shambala = QLocale::Shambala,   Shona = QLocale::Shona,   SichuanYi = QLocale::SichuanYi,   Sicilian = QLocale::Sicilian,   Sidamo = QLocale::Sidamo,   Silesian = QLocale::Silesian,   Sindhi = QLocale::Sindhi,   Sinhala = QLocale::Sinhala,   SkoltSami = QLocale::SkoltSami,   Slovak = QLocale::Slovak,   Slovenian = QLocale::Slovenian,   Soga = QLocale::Soga,   Somali = QLocale::Somali,   SouthernKurdish = QLocale::SouthernKurdish,   SouthernSami = QLocale::SouthernSami,   SouthernSotho = QLocale::SouthernSotho,   SouthNdebele = QLocale::SouthNdebele,   Spanish = QLocale::Spanish,   StandardMoroccanTamazight = QLocale::StandardMoroccanTamazight,   Sundanese = QLocale::Sundanese,   Swahili = QLocale::Swahili,   Swati = QLocale::Swati,   Swedish = QLocale::Swedish,   SwissGerman = QLocale::SwissGerman,   Syriac = QLocale::Syriac,   Tachelhit = QLocale::Tachelhit,   Tahitian = QLocale::Tahitian,   TaiDam = QLocale::TaiDam,   Taita = QLocale::Taita,   Tajik = QLocale::Tajik,   Tamil = QLocale::Tamil,   Taroko = QLocale::Taroko,   Tasawaq = QLocale::Tasawaq,   Tatar = QLocale::Tatar,   Telugu = QLocale::Telugu,   Teso = QLocale::Teso,   Thai = QLocale::Thai,   Tibetan = QLocale::Tibetan,   Tigre = QLocale::Tigre,   Tigrinya = QLocale::Tigrinya,   TokelauLanguage = QLocale::TokelauLanguage,   TokPisin = QLocale::TokPisin,   Tongan = QLocale::Tongan,   Tsonga = QLocale::Tsonga,   Tswana = QLocale::Tswana,   Turkish = QLocale::Turkish,   Turkmen = QLocale::Turkmen,   TuvaluLanguage = QLocale::TuvaluLanguage,   Tyap = QLocale::Tyap,   Ugaritic = QLocale::Ugaritic,   Ukrainian = QLocale::Ukrainian,   UpperSorbian = QLocale::UpperSorbian,   Urdu = QLocale::Urdu,   Uyghur = QLocale::Uyghur,   Uzbek = QLocale::Uzbek,   Vai = QLocale::Vai,   Venda = QLocale::Venda,   Vietnamese = QLocale::Vietnamese,   Volapuk = QLocale::Volapuk,   Vunjo = QLocale::Vunjo,   Walloon = QLocale::Walloon,   Walser = QLocale::Walser,   Warlpiri = QLocale::Warlpiri,   Welsh = QLocale::Welsh,   WesternBalochi = QLocale::WesternBalochi,   WesternFrisian = QLocale::WesternFrisian,   Wolaytta = QLocale::Wolaytta,   Wolof = QLocale::Wolof,   Xhosa = QLocale::Xhosa,   Yangben = QLocale::Yangben,   Yiddish = QLocale::Yiddish,   Yoruba = QLocale::Yoruba,   Zarma = QLocale::Zarma,   Zhuang = QLocale::Zhuang,   Zulu = QLocale::Zulu,   Kaingang = QLocale::Kaingang,   Nheengatu = QLocale::Nheengatu,   Haryanvi = QLocale::Haryanvi,   NorthernFrisian = QLocale::NorthernFrisian,   Rajasthani = QLocale::Rajasthani,   Moksha = QLocale::Moksha,   TokiPona = QLocale::TokiPona,   Pijin = QLocale::Pijin,   Obolo = QLocale::Obolo,   Baluchi = QLocale::Baluchi,   Ligurian = QLocale::Ligurian,   Rohingya = QLocale::Rohingya,   Torwali = QLocale::Torwali,   Anii = QLocale::Anii,   Kangri = QLocale::Kangri,   Venetian = QLocale::Venetian,   Kuvi = QLocale::Kuvi,   KaraKalpak = QLocale::KaraKalpak,   SwampyCree = QLocale::SwampyCree,   Ladin = QLocale::Ladin,   Shan = QLocale::Shan,   Afan = QLocale::Afan,   Bengali = QLocale::Bengali,   Bhutani = QLocale::Bhutani,   Byelorussian = QLocale::Byelorussian,   Cambodian = QLocale::Cambodian,   CentralMoroccoTamazight = QLocale::CentralMoroccoTamazight,   Chewa = QLocale::Chewa,   Frisian = QLocale::Frisian,   Greenlandic = QLocale::Greenlandic,   Inupiak = QLocale::Inupiak,   Kirghiz = QLocale::Kirghiz,   Kurundi = QLocale::Kurundi,   Kwanyama = QLocale::Kwanyama,   Navaho = QLocale::Navaho,   Oriya = QLocale::Oriya,   RhaetoRomance = QLocale::RhaetoRomance,   Uighur = QLocale::Uighur,   Uigur = QLocale::Uigur,   Walamo = QLocale::Walamo,   LastLanguage = QLocale::LastLanguage};
enum LanguageCodeType{
  ISO639Part1 = QLocale::ISO639Part1,   ISO639Part2B = QLocale::ISO639Part2B,   ISO639Part2T = QLocale::ISO639Part2T,   ISO639Part3 = QLocale::ISO639Part3,   LegacyLanguageCode = QLocale::LegacyLanguageCode,   ISO639Part2 = QLocale::ISO639Part2,   ISO639Alpha2 = QLocale::ISO639Alpha2,   ISO639Alpha3 = QLocale::ISO639Alpha3,   ISO639 = QLocale::ISO639,   AnyLanguageCode = QLocale::AnyLanguageCode};
enum MeasurementSystem{
  MetricSystem = QLocale::MetricSystem,   ImperialUSSystem = QLocale::ImperialUSSystem,   ImperialUKSystem = QLocale::ImperialUKSystem,   ImperialSystem = QLocale::ImperialSystem};
enum NumberOption{
  DefaultNumberOptions = QLocale::DefaultNumberOptions,   OmitGroupSeparator = QLocale::OmitGroupSeparator,   RejectGroupSeparator = QLocale::RejectGroupSeparator,   OmitLeadingZeroInExponent = QLocale::OmitLeadingZeroInExponent,   RejectLeadingZeroInExponent = QLocale::RejectLeadingZeroInExponent,   IncludeTrailingZeroesAfterDot = QLocale::IncludeTrailingZeroesAfterDot,   RejectTrailingZeroesAfterDot = QLocale::RejectTrailingZeroesAfterDot};
enum QuotationStyle{
  StandardQuotation = QLocale::StandardQuotation,   AlternateQuotation = QLocale::AlternateQuotation};
enum Script{
  AnyScript = QLocale::AnyScript,   AdlamScript = QLocale::AdlamScript,   AhomScript = QLocale::AhomScript,   AnatolianHieroglyphsScript = QLocale::AnatolianHieroglyphsScript,   ArabicScript = QLocale::ArabicScript,   ArmenianScript = QLocale::ArmenianScript,   AvestanScript = QLocale::AvestanScript,   BalineseScript = QLocale::BalineseScript,   BamumScript = QLocale::BamumScript,   BanglaScript = QLocale::BanglaScript,   BassaVahScript = QLocale::BassaVahScript,   BatakScript = QLocale::BatakScript,   BhaiksukiScript = QLocale::BhaiksukiScript,   BopomofoScript = QLocale::BopomofoScript,   BrahmiScript = QLocale::BrahmiScript,   BrailleScript = QLocale::BrailleScript,   BugineseScript = QLocale::BugineseScript,   BuhidScript = QLocale::BuhidScript,   CanadianAboriginalScript = QLocale::CanadianAboriginalScript,   CarianScript = QLocale::CarianScript,   CaucasianAlbanianScript = QLocale::CaucasianAlbanianScript,   ChakmaScript = QLocale::ChakmaScript,   ChamScript = QLocale::ChamScript,   CherokeeScript = QLocale::CherokeeScript,   CopticScript = QLocale::CopticScript,   CuneiformScript = QLocale::CuneiformScript,   CypriotScript = QLocale::CypriotScript,   CyrillicScript = QLocale::CyrillicScript,   DeseretScript = QLocale::DeseretScript,   DevanagariScript = QLocale::DevanagariScript,   DuployanScript = QLocale::DuployanScript,   EgyptianHieroglyphsScript = QLocale::EgyptianHieroglyphsScript,   ElbasanScript = QLocale::ElbasanScript,   EthiopicScript = QLocale::EthiopicScript,   FraserScript = QLocale::FraserScript,   GeorgianScript = QLocale::GeorgianScript,   GlagoliticScript = QLocale::GlagoliticScript,   GothicScript = QLocale::GothicScript,   GranthaScript = QLocale::GranthaScript,   GreekScript = QLocale::GreekScript,   GujaratiScript = QLocale::GujaratiScript,   GurmukhiScript = QLocale::GurmukhiScript,   HangulScript = QLocale::HangulScript,   HanScript = QLocale::HanScript,   HanunooScript = QLocale::HanunooScript,   HanWithBopomofoScript = QLocale::HanWithBopomofoScript,   HatranScript = QLocale::HatranScript,   HebrewScript = QLocale::HebrewScript,   HiraganaScript = QLocale::HiraganaScript,   ImperialAramaicScript = QLocale::ImperialAramaicScript,   InscriptionalPahlaviScript = QLocale::InscriptionalPahlaviScript,   InscriptionalParthianScript = QLocale::InscriptionalParthianScript,   JamoScript = QLocale::JamoScript,   JapaneseScript = QLocale::JapaneseScript,   JavaneseScript = QLocale::JavaneseScript,   KaithiScript = QLocale::KaithiScript,   KannadaScript = QLocale::KannadaScript,   KatakanaScript = QLocale::KatakanaScript,   KayahLiScript = QLocale::KayahLiScript,   KharoshthiScript = QLocale::KharoshthiScript,   KhmerScript = QLocale::KhmerScript,   KhojkiScript = QLocale::KhojkiScript,   KhudawadiScript = QLocale::KhudawadiScript,   KoreanScript = QLocale::KoreanScript,   LannaScript = QLocale::LannaScript,   LaoScript = QLocale::LaoScript,   LatinScript = QLocale::LatinScript,   LepchaScript = QLocale::LepchaScript,   LimbuScript = QLocale::LimbuScript,   LinearAScript = QLocale::LinearAScript,   LinearBScript = QLocale::LinearBScript,   LycianScript = QLocale::LycianScript,   LydianScript = QLocale::LydianScript,   MahajaniScript = QLocale::MahajaniScript,   MalayalamScript = QLocale::MalayalamScript,   MandaeanScript = QLocale::MandaeanScript,   ManichaeanScript = QLocale::ManichaeanScript,   MarchenScript = QLocale::MarchenScript,   MeiteiMayekScript = QLocale::MeiteiMayekScript,   MendeScript = QLocale::MendeScript,   MeroiticCursiveScript = QLocale::MeroiticCursiveScript,   MeroiticScript = QLocale::MeroiticScript,   ModiScript = QLocale::ModiScript,   MongolianScript = QLocale::MongolianScript,   MroScript = QLocale::MroScript,   MultaniScript = QLocale::MultaniScript,   MyanmarScript = QLocale::MyanmarScript,   NabataeanScript = QLocale::NabataeanScript,   NewaScript = QLocale::NewaScript,   NewTaiLueScript = QLocale::NewTaiLueScript,   NkoScript = QLocale::NkoScript,   OdiaScript = QLocale::OdiaScript,   OghamScript = QLocale::OghamScript,   OlChikiScript = QLocale::OlChikiScript,   OldHungarianScript = QLocale::OldHungarianScript,   OldItalicScript = QLocale::OldItalicScript,   OldNorthArabianScript = QLocale::OldNorthArabianScript,   OldPermicScript = QLocale::OldPermicScript,   OldPersianScript = QLocale::OldPersianScript,   OldSouthArabianScript = QLocale::OldSouthArabianScript,   OrkhonScript = QLocale::OrkhonScript,   OsageScript = QLocale::OsageScript,   OsmanyaScript = QLocale::OsmanyaScript,   PahawhHmongScript = QLocale::PahawhHmongScript,   PalmyreneScript = QLocale::PalmyreneScript,   PauCinHauScript = QLocale::PauCinHauScript,   PhagsPaScript = QLocale::PhagsPaScript,   PhoenicianScript = QLocale::PhoenicianScript,   PollardPhoneticScript = QLocale::PollardPhoneticScript,   PsalterPahlaviScript = QLocale::PsalterPahlaviScript,   RejangScript = QLocale::RejangScript,   RunicScript = QLocale::RunicScript,   SamaritanScript = QLocale::SamaritanScript,   SaurashtraScript = QLocale::SaurashtraScript,   SharadaScript = QLocale::SharadaScript,   ShavianScript = QLocale::ShavianScript,   SiddhamScript = QLocale::SiddhamScript,   SignWritingScript = QLocale::SignWritingScript,   SimplifiedHanScript = QLocale::SimplifiedHanScript,   SinhalaScript = QLocale::SinhalaScript,   SoraSompengScript = QLocale::SoraSompengScript,   SundaneseScript = QLocale::SundaneseScript,   SylotiNagriScript = QLocale::SylotiNagriScript,   SyriacScript = QLocale::SyriacScript,   TagalogScript = QLocale::TagalogScript,   TagbanwaScript = QLocale::TagbanwaScript,   TaiLeScript = QLocale::TaiLeScript,   TaiVietScript = QLocale::TaiVietScript,   TakriScript = QLocale::TakriScript,   TamilScript = QLocale::TamilScript,   TangutScript = QLocale::TangutScript,   TeluguScript = QLocale::TeluguScript,   ThaanaScript = QLocale::ThaanaScript,   ThaiScript = QLocale::ThaiScript,   TibetanScript = QLocale::TibetanScript,   TifinaghScript = QLocale::TifinaghScript,   TirhutaScript = QLocale::TirhutaScript,   TraditionalHanScript = QLocale::TraditionalHanScript,   UgariticScript = QLocale::UgariticScript,   VaiScript = QLocale::VaiScript,   VarangKshitiScript = QLocale::VarangKshitiScript,   YiScript = QLocale::YiScript,   HanifiScript = QLocale::HanifiScript,   BengaliScript = QLocale::BengaliScript,   MendeKikakuiScript = QLocale::MendeKikakuiScript,   OriyaScript = QLocale::OriyaScript,   SimplifiedChineseScript = QLocale::SimplifiedChineseScript,   TraditionalChineseScript = QLocale::TraditionalChineseScript,   LastScript = QLocale::LastScript};
enum class TagSeparator{
  Dash = static_cast<int>(QLocale::TagSeparator::Dash),   Underscore = static_cast<int>(QLocale::TagSeparator::Underscore)};
Q_DECLARE_FLAGS(LanguageCodeTypes, LanguageCodeType)
Q_DECLARE_FLAGS(NumberOptions, NumberOption)
public Q_SLOTS:
QLocale* new_QLocale();
QLocale* new_QLocale(QLocale::Language  language, QLocale::Country  territory);
QLocale* new_QLocale(QLocale::Language  language, QLocale::Script  script = QLocale::AnyScript, QLocale::Country  territory = QLocale::AnyTerritory);
QLocale* new_QLocale(const QLocale&  other);
QLocale* new_QLocale(const QString&  name);
void delete_QLocale(QLocale* obj) { delete obj; }
   QString  amText(QLocale* theWrappedObject) const;
   QString  bcp47Name(QLocale* theWrappedObject, QLocale::TagSeparator  separator = QLocale::TagSeparator::Dash) const;
   QLocale  static_QLocale_c();
   QLocale::Country  static_QLocale_codeToCountry(QStringView  countryCode);
   QLocale::Language  static_QLocale_codeToLanguage(QStringView  languageCode, QLocale::LanguageCodeTypes  codeTypes = QLocale::AnyLanguageCode);
   QLocale::Script  static_QLocale_codeToScript(QStringView  scriptCode);
   QLocale::Country  static_QLocale_codeToTerritory(QStringView  territoryCode);
   QLocale  collation(QLocale* theWrappedObject) const;
   QList<QLocale::Country >  static_QLocale_countriesForLanguage(QLocale::Language  lang);
   QLocale::Country  country(QLocale* theWrappedObject) const;
   QString  static_QLocale_countryToCode(QLocale::Country  country);
   QString  static_QLocale_countryToString(QLocale::Country  country);
   QString  createSeparatedList(QLocale* theWrappedObject, const QStringList&  strl) const;
   QString  currencySymbol(QLocale* theWrappedObject, QLocale::CurrencySymbolFormat  arg__1 = QLocale::CurrencySymbol) const;
   QString  dateFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  dateTimeFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  dayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  decimalPoint(QLocale* theWrappedObject) const;
   QString  exponential(QLocale* theWrappedObject) const;
   Qt::DayOfWeek  firstDayOfWeek(QLocale* theWrappedObject) const;
   QString  groupSeparator(QLocale* theWrappedObject) const;
   QLocale::Language  language(QLocale* theWrappedObject) const;
   QString  static_QLocale_languageToCode(QLocale::Language  language, QLocale::LanguageCodeTypes  codeTypes = QLocale::AnyLanguageCode);
   QString  static_QLocale_languageToString(QLocale::Language  language);
   QList<QLocale >  static_QLocale_matchingLocales(QLocale::Language  language, QLocale::Script  script, QLocale::Country  territory);
   QLocale::MeasurementSystem  measurementSystem(QLocale* theWrappedObject) const;
   QString  monthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  name(QLocale* theWrappedObject, QLocale::TagSeparator  separator = QLocale::TagSeparator::Underscore) const;
   QString  nativeCountryName(QLocale* theWrappedObject) const;
   QString  nativeLanguageName(QLocale* theWrappedObject) const;
   QString  nativeTerritoryName(QLocale* theWrappedObject) const;
   QString  negativeSign(QLocale* theWrappedObject) const;
   QLocale::NumberOptions  numberOptions(QLocale* theWrappedObject) const;
   bool  __ne__(QLocale* theWrappedObject, const QLocale&  rhs);
   void writeTo(QLocale* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLocale* theWrappedObject, const QLocale&  rhs);
   void readFrom(QLocale* theWrappedObject, QDataStream&  arg__1);
   QString  percent(QLocale* theWrappedObject) const;
   QString  pmText(QLocale* theWrappedObject) const;
   QString  positiveSign(QLocale* theWrappedObject) const;
   QString  quoteString(QLocale* theWrappedObject, const QString&  str, QLocale::QuotationStyle  style = QLocale::StandardQuotation) const;
   QLocale::Script  script(QLocale* theWrappedObject) const;
   QString  static_QLocale_scriptToCode(QLocale::Script  script);
   QString  static_QLocale_scriptToString(QLocale::Script  script);
   void static_QLocale_setDefault(const QLocale&  locale);
   void setNumberOptions(QLocale* theWrappedObject, QLocale::NumberOptions  options);
   QString  standaloneDayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  standaloneMonthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   void swap(QLocale* theWrappedObject, QLocale&  other);
   QLocale  static_QLocale_system();
   QLocale::Country  territory(QLocale* theWrappedObject) const;
   QString  static_QLocale_territoryToCode(QLocale::Country  territory);
   QString  static_QLocale_territoryToString(QLocale::Country  territory);
   Qt::LayoutDirection  textDirection(QLocale* theWrappedObject) const;
   QString  timeFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toCurrencyString(QLocale* theWrappedObject, double  arg__1, const QString&  symbol = QString(), int  precision = -1) const;
   QString  toCurrencyString(QLocale* theWrappedObject, float  i, const QString&  symbol = QString(), int  precision = -1) const;
   QString  toCurrencyString(QLocale* theWrappedObject, int  i, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, qlonglong  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, qulonglong  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, short  i, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, uint  i, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, ushort  i, const QString&  symbol = QString()) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2 = QLocale::LongFormat, int  baseYear = DefaultTwoDigitBaseYear) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format, QCalendar  cal, int  baseYear = DefaultTwoDigitBaseYear) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, const QString&  format, QCalendar  cal, int  baseYear = DefaultTwoDigitBaseYear) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, const QString&  format, int  baseYear = DefaultTwoDigitBaseYear) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format, QCalendar  cal, int  baseYear = DefaultTwoDigitBaseYear) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format = QLocale::LongFormat, int  baseYear = DefaultTwoDigitBaseYear) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, const QString&  format, QCalendar  cal, int  baseYear = DefaultTwoDigitBaseYear) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, const QString&  format, int  baseYear = DefaultTwoDigitBaseYear) const;
   double  toDouble(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   float  toFloat(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   int  toInt(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   long  toLong(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   qlonglong  toLongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   QString  toLower(QLocale* theWrappedObject, const QString&  str) const;
   short  toShort(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   QString  toString(QLocale* theWrappedObject, QDate  date, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, QDate  date, QLocale::FormatType  format, QCalendar  cal) const;
   QString  toString(QLocale* theWrappedObject, QDate  date, QStringView  format, QCalendar  cal) const;
   QString  toString(QLocale* theWrappedObject, QDate  date, const QString&  format) const;
   QString  toString(QLocale* theWrappedObject, QTime  time, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, QTime  time, const QString&  format) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QLocale::FormatType  format, QCalendar  cal) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QStringView  format, QCalendar  cal) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, const QString&  format) const;
   QString  toString(QLocale* theWrappedObject, double  f, char  format = 'g', int  precision = 6) const;
   QString  toString(QLocale* theWrappedObject, float  f, char  format = 'g', int  precision = 6) const;
   QString  toString(QLocale* theWrappedObject, int  i) const;
   QString  toString(QLocale* theWrappedObject, long  i) const;
   QString  toString(QLocale* theWrappedObject, qlonglong  i) const;
   QString  toString(QLocale* theWrappedObject, short  i) const;
   QString  toString(QLocale* theWrappedObject, ulong  i) const;
   QTime  toTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2 = QLocale::LongFormat) const;
   QTime  toTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   uint  toUInt(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   ulong  toULong(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   qulonglong  toULongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   ushort  toUShort(QLocale* theWrappedObject, const QString&  s, bool*  ok = nullptr) const;
   QString  toUpper(QLocale* theWrappedObject, const QString&  str) const;
   QStringList  uiLanguages(QLocale* theWrappedObject, QLocale::TagSeparator  separator = QLocale::TagSeparator::Dash) const;
   QList<Qt::DayOfWeek >  weekdays(QLocale* theWrappedObject) const;
   QString  zeroDigit(QLocale* theWrappedObject) const;
    QString py_toString(QLocale*);

public:
    const static int DefaultTwoDigitBaseYear = QLocale::DefaultTwoDigitBaseYear;
    
};





class PythonQtWrapper_QPoint : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPoint* new_QPoint();
QPoint* new_QPoint(int  xpos, int  ypos);
QPoint* new_QPoint(const QPoint& other) {
QPoint* a = new QPoint();
*((QPoint*)a) = other;
return a; }
void delete_QPoint(QPoint* obj) { delete obj; }
   int  static_QPoint_dotProduct(const QPoint&  p1, const QPoint&  p2);
   bool  isNull(QPoint* theWrappedObject) const;
   int  manhattanLength(QPoint* theWrappedObject) const;
   bool  __ne__(QPoint* theWrappedObject, const QPoint&  rhs);
   bool  __ne__(QPoint* theWrappedObject, const QPointF&  rhs);
   QPoint  __mul__(QPoint* theWrappedObject, const QMatrix4x4&  matrix);
   QPoint  __mul__(QPoint* theWrappedObject, const QTransform&  m);
   QPoint  __mul__(QPoint* theWrappedObject, double  factor);
   QPoint  __mul__(QPoint* theWrappedObject, float  factor);
   QPoint  __mul__(QPoint* theWrappedObject, int  factor);
   QPoint*  __imul__(QPoint* theWrappedObject, double  factor);
   QPoint*  __imul__(QPoint* theWrappedObject, float  factor);
   QPoint*  __imul__(QPoint* theWrappedObject, int  factor);
   QPoint  __add__(QPoint* theWrappedObject);
   QPoint  __add__(QPoint* theWrappedObject, const QPoint&  p2);
   QPoint*  __iadd__(QPoint* theWrappedObject, const QPoint&  p);
   QPoint  __sub__(QPoint* theWrappedObject);
   QPoint  __sub__(QPoint* theWrappedObject, const QPoint&  p2);
   QPoint*  __isub__(QPoint* theWrappedObject, const QPoint&  p);
   QPoint  __div__(QPoint* theWrappedObject, qreal  c);
   QPoint*  __idiv__(QPoint* theWrappedObject, qreal  divisor);
   void writeTo(QPoint* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPoint* theWrappedObject, const QPoint&  rhs);
   bool  __eq__(QPoint* theWrappedObject, const QPointF&  rhs);
   void readFrom(QPoint* theWrappedObject, QDataStream&  arg__1);
   void setX(QPoint* theWrappedObject, int  x);
   void setY(QPoint* theWrappedObject, int  y);
   QPointF  toPointF(QPoint* theWrappedObject) const;
   QPoint  transposed(QPoint* theWrappedObject) const;
   int  x(QPoint* theWrappedObject) const;
   int  y(QPoint* theWrappedObject) const;
    QString py_toString(QPoint*);
    bool __nonzero__(QPoint* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QPointF : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPointF* new_QPointF();
QPointF* new_QPointF(const QPoint&  p);
QPointF* new_QPointF(qreal  xpos, qreal  ypos);
QPointF* new_QPointF(const QPointF& other) {
QPointF* a = new QPointF();
*((QPointF*)a) = other;
return a; }
void delete_QPointF(QPointF* obj) { delete obj; }
   qreal  static_QPointF_dotProduct(const QPointF&  p1, const QPointF&  p2);
   bool  isNull(QPointF* theWrappedObject) const;
   qreal  manhattanLength(QPointF* theWrappedObject) const;
   bool  __ne__(QPointF* theWrappedObject, const QPoint&  rhs);
   bool  __ne__(QPointF* theWrappedObject, const QPointF&  rhs);
   QPointF  __mul__(QPointF* theWrappedObject, const QMatrix4x4&  matrix);
   QPointF  __mul__(QPointF* theWrappedObject, const QTransform&  m);
   QPointF  __mul__(QPointF* theWrappedObject, qreal  c);
   QPointF*  __imul__(QPointF* theWrappedObject, qreal  c);
   QPointF  __add__(QPointF* theWrappedObject);
   QPointF  __add__(QPointF* theWrappedObject, const QPointF&  p2);
   QPointF*  __iadd__(QPointF* theWrappedObject, const QPointF&  p);
   QPointF  __sub__(QPointF* theWrappedObject);
   QPointF  __sub__(QPointF* theWrappedObject, const QPointF&  p2);
   QPointF*  __isub__(QPointF* theWrappedObject, const QPointF&  p);
   QPointF  __div__(QPointF* theWrappedObject, qreal  divisor);
   QPointF*  __idiv__(QPointF* theWrappedObject, qreal  c);
   void writeTo(QPointF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPointF* theWrappedObject, const QPoint&  rhs);
   bool  __eq__(QPointF* theWrappedObject, const QPointF&  rhs);
   void readFrom(QPointF* theWrappedObject, QDataStream&  arg__1);
   void setX(QPointF* theWrappedObject, qreal  x);
   void setY(QPointF* theWrappedObject, qreal  y);
   QPoint  toPoint(QPointF* theWrappedObject) const;
   QPointF  transposed(QPointF* theWrappedObject) const;
   qreal  x(QPointF* theWrappedObject) const;
   qreal  y(QPointF* theWrappedObject) const;
    QString py_toString(QPointF*);
    bool __nonzero__(QPointF* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QRect : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRect* new_QRect();
QRect* new_QRect(const QPoint&  topleft, const QPoint&  bottomright);
QRect* new_QRect(const QPoint&  topleft, const QSize&  size);
QRect* new_QRect(int  left, int  top, int  width, int  height);
QRect* new_QRect(const QRect& other) {
QRect* a = new QRect();
*((QRect*)a) = other;
return a; }
void delete_QRect(QRect* obj) { delete obj; }
   void adjust(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   QRect  adjusted(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2) const;
   int  bottom(QRect* theWrappedObject) const;
   QPoint  bottomLeft(QRect* theWrappedObject) const;
   QPoint  bottomRight(QRect* theWrappedObject) const;
   QPoint  center(QRect* theWrappedObject) const;
   bool  contains(QRect* theWrappedObject, const QPoint&  p, bool  proper = false) const;
   bool  contains(QRect* theWrappedObject, const QRect&  r, bool  proper = false) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y, bool  proper) const;
   int  height(QRect* theWrappedObject) const;
   QRect  intersected(QRect* theWrappedObject, const QRect&  other) const;
   bool  intersects(QRect* theWrappedObject, const QRect&  r) const;
   bool  isEmpty(QRect* theWrappedObject) const;
   bool  isNull(QRect* theWrappedObject) const;
   bool  isValid(QRect* theWrappedObject) const;
   int  left(QRect* theWrappedObject) const;
   QRect  marginsAdded(QRect* theWrappedObject, const QMargins&  margins) const;
   QRect  marginsRemoved(QRect* theWrappedObject, const QMargins&  margins) const;
   void moveBottom(QRect* theWrappedObject, int  pos);
   void moveBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   void moveBottomRight(QRect* theWrappedObject, const QPoint&  p);
   void moveCenter(QRect* theWrappedObject, const QPoint&  p);
   void moveLeft(QRect* theWrappedObject, int  pos);
   void moveRight(QRect* theWrappedObject, int  pos);
   void moveTo(QRect* theWrappedObject, const QPoint&  p);
   void moveTo(QRect* theWrappedObject, int  x, int  t);
   void moveTop(QRect* theWrappedObject, int  pos);
   void moveTopLeft(QRect* theWrappedObject, const QPoint&  p);
   void moveTopRight(QRect* theWrappedObject, const QPoint&  p);
   QRect  normalized(QRect* theWrappedObject) const;
   bool  __ne__(QRect* theWrappedObject, const QRect&  rhs);
   bool  __ne__(QRect* theWrappedObject, const QRectF&  rhs);
   QRect  __and__(QRect* theWrappedObject, const QRect&  r) const;
   QRect*  __iand__(QRect* theWrappedObject, const QRect&  r);
   QRect  __add__(QRect* theWrappedObject, const QMargins&  margins);
   QRect*  __iadd__(QRect* theWrappedObject, const QMargins&  margins);
   QRect  __sub__(QRect* theWrappedObject, const QMargins&  rhs);
   QRect*  __isub__(QRect* theWrappedObject, const QMargins&  margins);
   void writeTo(QRect* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QRect* theWrappedObject, const QRect&  rhs);
   bool  __eq__(QRect* theWrappedObject, const QRectF&  rhs);
   void readFrom(QRect* theWrappedObject, QDataStream&  arg__1);
   QRect  __or__(QRect* theWrappedObject, const QRect&  r) const;
   QRect*  __ior__(QRect* theWrappedObject, const QRect&  r);
   int  right(QRect* theWrappedObject) const;
   void setBottom(QRect* theWrappedObject, int  pos);
   void setBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   void setBottomRight(QRect* theWrappedObject, const QPoint&  p);
   void setCoords(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void setHeight(QRect* theWrappedObject, int  h);
   void setLeft(QRect* theWrappedObject, int  pos);
   void setRect(QRect* theWrappedObject, int  x, int  y, int  w, int  h);
   void setRight(QRect* theWrappedObject, int  pos);
   void setSize(QRect* theWrappedObject, const QSize&  s);
   void setTop(QRect* theWrappedObject, int  pos);
   void setTopLeft(QRect* theWrappedObject, const QPoint&  p);
   void setTopRight(QRect* theWrappedObject, const QPoint&  p);
   void setWidth(QRect* theWrappedObject, int  w);
   void setX(QRect* theWrappedObject, int  x);
   void setY(QRect* theWrappedObject, int  y);
   QSize  size(QRect* theWrappedObject) const;
   QRect  static_QRect_span(const QPoint&  p1, const QPoint&  p2);
   QRectF  toRectF(QRect* theWrappedObject) const;
   int  top(QRect* theWrappedObject) const;
   QPoint  topLeft(QRect* theWrappedObject) const;
   QPoint  topRight(QRect* theWrappedObject) const;
   void translate(QRect* theWrappedObject, const QPoint&  p);
   void translate(QRect* theWrappedObject, int  dx, int  dy);
   QRect  translated(QRect* theWrappedObject, const QPoint&  p) const;
   QRect  translated(QRect* theWrappedObject, int  dx, int  dy) const;
   QRect  transposed(QRect* theWrappedObject) const;
   QRect  united(QRect* theWrappedObject, const QRect&  other) const;
   int  width(QRect* theWrappedObject) const;
   int  x(QRect* theWrappedObject) const;
   int  y(QRect* theWrappedObject) const;
    QString py_toString(QRect*);
    bool __nonzero__(QRect* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QRectF : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRectF* new_QRectF();
QRectF* new_QRectF(const QPointF&  topleft, const QPointF&  bottomRight);
QRectF* new_QRectF(const QPointF&  topleft, const QSizeF&  size);
QRectF* new_QRectF(const QRect&  rect);
QRectF* new_QRectF(qreal  left, qreal  top, qreal  width, qreal  height);
QRectF* new_QRectF(const QRectF& other) {
QRectF* a = new QRectF();
*((QRectF*)a) = other;
return a; }
void delete_QRectF(QRectF* obj) { delete obj; }
   void adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   QRectF  adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const;
   qreal  bottom(QRectF* theWrappedObject) const;
   QPointF  bottomLeft(QRectF* theWrappedObject) const;
   QPointF  bottomRight(QRectF* theWrappedObject) const;
   QPointF  center(QRectF* theWrappedObject) const;
   bool  contains(QRectF* theWrappedObject, const QPointF&  p) const;
   bool  contains(QRectF* theWrappedObject, const QRectF&  r) const;
   bool  contains(QRectF* theWrappedObject, qreal  x, qreal  y) const;
   qreal  height(QRectF* theWrappedObject) const;
   QRectF  intersected(QRectF* theWrappedObject, const QRectF&  other) const;
   bool  intersects(QRectF* theWrappedObject, const QRectF&  r) const;
   bool  isEmpty(QRectF* theWrappedObject) const;
   bool  isNull(QRectF* theWrappedObject) const;
   bool  isValid(QRectF* theWrappedObject) const;
   qreal  left(QRectF* theWrappedObject) const;
   QRectF  marginsAdded(QRectF* theWrappedObject, const QMarginsF&  margins) const;
   QRectF  marginsRemoved(QRectF* theWrappedObject, const QMarginsF&  margins) const;
   void moveBottom(QRectF* theWrappedObject, qreal  pos);
   void moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void moveBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void moveCenter(QRectF* theWrappedObject, const QPointF&  p);
   void moveLeft(QRectF* theWrappedObject, qreal  pos);
   void moveRight(QRectF* theWrappedObject, qreal  pos);
   void moveTo(QRectF* theWrappedObject, const QPointF&  p);
   void moveTo(QRectF* theWrappedObject, qreal  x, qreal  y);
   void moveTop(QRectF* theWrappedObject, qreal  pos);
   void moveTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void moveTopRight(QRectF* theWrappedObject, const QPointF&  p);
   QRectF  normalized(QRectF* theWrappedObject) const;
   bool  __ne__(QRectF* theWrappedObject, const QRect&  rhs);
   bool  __ne__(QRectF* theWrappedObject, const QRectF&  rhs);
   QRectF  __and__(QRectF* theWrappedObject, const QRectF&  r) const;
   QRectF*  __iand__(QRectF* theWrappedObject, const QRectF&  r);
   QRectF  __add__(QRectF* theWrappedObject, const QMarginsF&  rhs);
   QRectF*  __iadd__(QRectF* theWrappedObject, const QMarginsF&  margins);
   QRectF  __sub__(QRectF* theWrappedObject, const QMarginsF&  rhs);
   QRectF*  __isub__(QRectF* theWrappedObject, const QMarginsF&  margins);
   void writeTo(QRectF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QRectF* theWrappedObject, const QRect&  rhs);
   bool  __eq__(QRectF* theWrappedObject, const QRectF&  rhs);
   void readFrom(QRectF* theWrappedObject, QDataStream&  arg__1);
   QRectF  __or__(QRectF* theWrappedObject, const QRectF&  r) const;
   QRectF*  __ior__(QRectF* theWrappedObject, const QRectF&  r);
   qreal  right(QRectF* theWrappedObject) const;
   void setBottom(QRectF* theWrappedObject, qreal  pos);
   void setBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setHeight(QRectF* theWrappedObject, qreal  h);
   void setLeft(QRectF* theWrappedObject, qreal  pos);
   void setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setRight(QRectF* theWrappedObject, qreal  pos);
   void setSize(QRectF* theWrappedObject, const QSizeF&  s);
   void setTop(QRectF* theWrappedObject, qreal  pos);
   void setTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setTopRight(QRectF* theWrappedObject, const QPointF&  p);
   void setWidth(QRectF* theWrappedObject, qreal  w);
   void setX(QRectF* theWrappedObject, qreal  pos);
   void setY(QRectF* theWrappedObject, qreal  pos);
   QSizeF  size(QRectF* theWrappedObject) const;
   QRect  toAlignedRect(QRectF* theWrappedObject) const;
   QRect  toRect(QRectF* theWrappedObject) const;
   qreal  top(QRectF* theWrappedObject) const;
   QPointF  topLeft(QRectF* theWrappedObject) const;
   QPointF  topRight(QRectF* theWrappedObject) const;
   void translate(QRectF* theWrappedObject, const QPointF&  p);
   void translate(QRectF* theWrappedObject, qreal  dx, qreal  dy);
   QRectF  translated(QRectF* theWrappedObject, const QPointF&  p) const;
   QRectF  translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const;
   QRectF  transposed(QRectF* theWrappedObject) const;
   QRectF  united(QRectF* theWrappedObject, const QRectF&  other) const;
   qreal  width(QRectF* theWrappedObject) const;
   qreal  x(QRectF* theWrappedObject) const;
   qreal  y(QRectF* theWrappedObject) const;
    QString py_toString(QRectF*);
    bool __nonzero__(QRectF* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QRegularExpression : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MatchOption MatchType PatternOption WildcardConversionOption )
Q_FLAGS(MatchOptions PatternOptions WildcardConversionOptions )
enum MatchOption{
  NoMatchOption = QRegularExpression::NoMatchOption,   AnchorAtOffsetMatchOption = QRegularExpression::AnchorAtOffsetMatchOption,   AnchoredMatchOption = QRegularExpression::AnchoredMatchOption,   DontCheckSubjectStringMatchOption = QRegularExpression::DontCheckSubjectStringMatchOption};
enum MatchType{
  NormalMatch = QRegularExpression::NormalMatch,   PartialPreferCompleteMatch = QRegularExpression::PartialPreferCompleteMatch,   PartialPreferFirstMatch = QRegularExpression::PartialPreferFirstMatch,   NoMatch = QRegularExpression::NoMatch};
enum PatternOption{
  NoPatternOption = QRegularExpression::NoPatternOption,   CaseInsensitiveOption = QRegularExpression::CaseInsensitiveOption,   DotMatchesEverythingOption = QRegularExpression::DotMatchesEverythingOption,   MultilineOption = QRegularExpression::MultilineOption,   ExtendedPatternSyntaxOption = QRegularExpression::ExtendedPatternSyntaxOption,   InvertedGreedinessOption = QRegularExpression::InvertedGreedinessOption,   DontCaptureOption = QRegularExpression::DontCaptureOption,   UseUnicodePropertiesOption = QRegularExpression::UseUnicodePropertiesOption};
enum WildcardConversionOption{
  DefaultWildcardConversion = QRegularExpression::DefaultWildcardConversion,   UnanchoredWildcardConversion = QRegularExpression::UnanchoredWildcardConversion,   NonPathWildcardConversion = QRegularExpression::NonPathWildcardConversion};
Q_DECLARE_FLAGS(MatchOptions, MatchOption)
Q_DECLARE_FLAGS(PatternOptions, PatternOption)
Q_DECLARE_FLAGS(WildcardConversionOptions, WildcardConversionOption)
public Q_SLOTS:
QRegularExpression* new_QRegularExpression();
QRegularExpression* new_QRegularExpression(const QRegularExpression&  re);
QRegularExpression* new_QRegularExpression(const QString&  pattern, QRegularExpression::PatternOptions  options = QRegularExpression::NoPatternOption);
void delete_QRegularExpression(QRegularExpression* obj) { delete obj; }
   QString  static_QRegularExpression_anchoredPattern(const QString&  expression);
   int  captureCount(QRegularExpression* theWrappedObject) const;
   QString  errorString(QRegularExpression* theWrappedObject) const;
   QString  static_QRegularExpression_escape(const QString&  str);
   QRegularExpression  static_QRegularExpression_fromWildcard(QStringView  pattern, Qt::CaseSensitivity  cs = Qt::CaseInsensitive, QRegularExpression::WildcardConversionOptions  options = QRegularExpression::DefaultWildcardConversion);
   QRegularExpressionMatchIterator  globalMatch(QRegularExpression* theWrappedObject, const QString&  subject, qsizetype  offset = 0, QRegularExpression::MatchType  matchType = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions  matchOptions = QRegularExpression::NoMatchOption) const;
   QRegularExpressionMatchIterator  globalMatchView(QRegularExpression* theWrappedObject, QStringView  subjectView, qsizetype  offset = 0, QRegularExpression::MatchType  matchType = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions  matchOptions = QRegularExpression::NoMatchOption) const;
   bool  isValid(QRegularExpression* theWrappedObject) const;
   QRegularExpressionMatch  match(QRegularExpression* theWrappedObject, const QString&  subject, qsizetype  offset = 0, QRegularExpression::MatchType  matchType = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions  matchOptions = QRegularExpression::NoMatchOption) const;
   QRegularExpressionMatch  matchView(QRegularExpression* theWrappedObject, QStringView  subjectView, qsizetype  offset = 0, QRegularExpression::MatchType  matchType = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions  matchOptions = QRegularExpression::NoMatchOption) const;
   QStringList  namedCaptureGroups(QRegularExpression* theWrappedObject) const;
   bool  __ne__(QRegularExpression* theWrappedObject, const QRegularExpression&  rhs);
   void writeTo(QRegularExpression* theWrappedObject, QDataStream&  out);
   QRegularExpression*  operator_assign(QRegularExpression* theWrappedObject, const QRegularExpression&  re);
   bool  __eq__(QRegularExpression* theWrappedObject, const QRegularExpression&  rhs);
   void readFrom(QRegularExpression* theWrappedObject, QDataStream&  in);
   void optimize(QRegularExpression* theWrappedObject) const;
   QString  pattern(QRegularExpression* theWrappedObject) const;
   qsizetype  patternErrorOffset(QRegularExpression* theWrappedObject) const;
   QRegularExpression::PatternOptions  patternOptions(QRegularExpression* theWrappedObject) const;
   void setPattern(QRegularExpression* theWrappedObject, const QString&  pattern);
   void setPatternOptions(QRegularExpression* theWrappedObject, QRegularExpression::PatternOptions  options);
   void swap(QRegularExpression* theWrappedObject, QRegularExpression&  other);
   QString  static_QRegularExpression_wildcardToRegularExpression(const QString&  str, QRegularExpression::WildcardConversionOptions  options = QRegularExpression::DefaultWildcardConversion);
    QString py_toString(QRegularExpression*);
    bool __nonzero__(QRegularExpression* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QSize : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSize* new_QSize();
QSize* new_QSize(int  w, int  h);
QSize* new_QSize(const QSize& other) {
QSize* a = new QSize();
*((QSize*)a) = other;
return a; }
void delete_QSize(QSize* obj) { delete obj; }
   QSize  boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   QSize  expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   QSize  grownBy(QSize* theWrappedObject, QMargins  m) const;
   int  height(QSize* theWrappedObject) const;
   bool  isEmpty(QSize* theWrappedObject) const;
   bool  isNull(QSize* theWrappedObject) const;
   bool  isValid(QSize* theWrappedObject) const;
   bool  __ne__(QSize* theWrappedObject, const QSize&  rhs);
   bool  __ne__(QSize* theWrappedObject, const QSizeF&  rhs);
   QSize  __mul__(QSize* theWrappedObject, qreal  c);
   QSize*  __imul__(QSize* theWrappedObject, qreal  c);
   QSize  __add__(QSize* theWrappedObject, const QSize&  s2);
   QSize*  __iadd__(QSize* theWrappedObject, const QSize&  arg__1);
   QSize  __sub__(QSize* theWrappedObject, const QSize&  s2);
   QSize*  __isub__(QSize* theWrappedObject, const QSize&  arg__1);
   QSize  __div__(QSize* theWrappedObject, qreal  c);
   QSize*  __idiv__(QSize* theWrappedObject, qreal  c);
   void writeTo(QSize* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QSize* theWrappedObject, const QSize&  rhs);
   bool  __eq__(QSize* theWrappedObject, const QSizeF&  rhs);
   void readFrom(QSize* theWrappedObject, QDataStream&  arg__1);
   void scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode);
   void scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode);
   QSize  scaled(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode) const;
   QSize  scaled(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode) const;
   void setHeight(QSize* theWrappedObject, int  h);
   void setWidth(QSize* theWrappedObject, int  w);
   QSize  shrunkBy(QSize* theWrappedObject, QMargins  m) const;
   QSizeF  toSizeF(QSize* theWrappedObject) const;
   void transpose(QSize* theWrappedObject);
   QSize  transposed(QSize* theWrappedObject) const;
   int  width(QSize* theWrappedObject) const;
    QString py_toString(QSize*);
    bool __nonzero__(QSize* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QSizeF : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSizeF* new_QSizeF();
QSizeF* new_QSizeF(const QSize&  sz);
QSizeF* new_QSizeF(qreal  w, qreal  h);
QSizeF* new_QSizeF(const QSizeF& other) {
QSizeF* a = new QSizeF();
*((QSizeF*)a) = other;
return a; }
void delete_QSizeF(QSizeF* obj) { delete obj; }
   QSizeF  boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   QSizeF  expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   QSizeF  grownBy(QSizeF* theWrappedObject, QMarginsF  m) const;
   qreal  height(QSizeF* theWrappedObject) const;
   bool  isEmpty(QSizeF* theWrappedObject) const;
   bool  isNull(QSizeF* theWrappedObject) const;
   bool  isValid(QSizeF* theWrappedObject) const;
   bool  __ne__(QSizeF* theWrappedObject, const QSize&  rhs);
   bool  __ne__(QSizeF* theWrappedObject, const QSizeF&  rhs);
   QSizeF  __mul__(QSizeF* theWrappedObject, qreal  c);
   QSizeF*  __imul__(QSizeF* theWrappedObject, qreal  c);
   QSizeF  __add__(QSizeF* theWrappedObject, const QSizeF&  s2);
   QSizeF*  __iadd__(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   QSizeF  __sub__(QSizeF* theWrappedObject, const QSizeF&  s2);
   QSizeF*  __isub__(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   QSizeF  __div__(QSizeF* theWrappedObject, qreal  c);
   QSizeF*  __idiv__(QSizeF* theWrappedObject, qreal  c);
   void writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QSizeF* theWrappedObject, const QSize&  rhs);
   bool  __eq__(QSizeF* theWrappedObject, const QSizeF&  rhs);
   void readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1);
   void scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode);
   void scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode);
   QSizeF  scaled(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode) const;
   QSizeF  scaled(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode) const;
   void setHeight(QSizeF* theWrappedObject, qreal  h);
   void setWidth(QSizeF* theWrappedObject, qreal  w);
   QSizeF  shrunkBy(QSizeF* theWrappedObject, QMarginsF  m) const;
   QSize  toSize(QSizeF* theWrappedObject) const;
   void transpose(QSizeF* theWrappedObject);
   QSizeF  transposed(QSizeF* theWrappedObject) const;
   qreal  width(QSizeF* theWrappedObject) const;
    QString py_toString(QSizeF*);
    bool __nonzero__(QSizeF* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QTime : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QTime* new_QTime();
QTime* new_QTime(int  h, int  m, int  s = 0, int  ms = 0);
QTime* new_QTime(const QTime& other) {
QTime* a = new QTime();
*((QTime*)a) = other;
return a; }
void delete_QTime(QTime* obj) { delete obj; }
   QTime  addMSecs(QTime* theWrappedObject, int  ms) const;
   QTime  addSecs(QTime* theWrappedObject, int  secs) const;
   QTime  static_QTime_currentTime();
   QTime  static_QTime_fromMSecsSinceStartOfDay(int  msecs);
   QTime  static_QTime_fromString(const QString&  string, Qt::DateFormat  format = Qt::TextDate);
   QTime  static_QTime_fromString(const QString&  string, const QString&  format);
   int  hour(QTime* theWrappedObject) const;
   bool  isNull(QTime* theWrappedObject) const;
   bool  isValid(QTime* theWrappedObject) const;
   bool  static_QTime_isValid(int  h, int  m, int  s, int  ms = 0);
   int  minute(QTime* theWrappedObject) const;
   int  msec(QTime* theWrappedObject) const;
   int  msecsSinceStartOfDay(QTime* theWrappedObject) const;
   int  msecsTo(QTime* theWrappedObject, QTime  t) const;
   bool  __ne__(QTime* theWrappedObject, const QTime&  rhs);
   bool  __lt__(QTime* theWrappedObject, const QTime&  rhs);
   void writeTo(QTime* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QTime* theWrappedObject, const QTime&  rhs);
   bool  __eq__(QTime* theWrappedObject, const QTime&  rhs);
   bool  __gt__(QTime* theWrappedObject, const QTime&  rhs);
   bool  __ge__(QTime* theWrappedObject, const QTime&  rhs);
   void readFrom(QTime* theWrappedObject, QDataStream&  arg__1);
   int  second(QTime* theWrappedObject) const;
   int  secsTo(QTime* theWrappedObject, QTime  t) const;
   bool  setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms = 0);
   QString  toString(QTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QTime* theWrappedObject, const QString&  format) const;
    QString py_toString(QTime*);
    bool __nonzero__(QTime* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QUrl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AceProcessingOption ComponentFormattingOption ParsingMode UrlFormattingOption UserInputResolutionOption )
Q_FLAGS(AceProcessingOptions ComponentFormattingOptions FormattingOptions )
enum AceProcessingOption{
  IgnoreIDNWhitelist = QUrl::IgnoreIDNWhitelist,   AceTransitionalProcessing = QUrl::AceTransitionalProcessing};
enum ComponentFormattingOption{
  PrettyDecoded = QUrl::PrettyDecoded,   EncodeSpaces = QUrl::EncodeSpaces,   EncodeUnicode = QUrl::EncodeUnicode,   EncodeDelimiters = QUrl::EncodeDelimiters,   EncodeReserved = QUrl::EncodeReserved,   DecodeReserved = QUrl::DecodeReserved,   FullyEncoded = QUrl::FullyEncoded,   FullyDecoded = QUrl::FullyDecoded};
enum ParsingMode{
  TolerantMode = QUrl::TolerantMode,   StrictMode = QUrl::StrictMode,   DecodedMode = QUrl::DecodedMode};
enum UrlFormattingOption{
  None = QUrl::None,   RemoveScheme = QUrl::RemoveScheme,   RemovePassword = QUrl::RemovePassword,   RemoveUserInfo = QUrl::RemoveUserInfo,   RemovePort = QUrl::RemovePort,   RemoveAuthority = QUrl::RemoveAuthority,   RemovePath = QUrl::RemovePath,   RemoveQuery = QUrl::RemoveQuery,   RemoveFragment = QUrl::RemoveFragment,   PreferLocalFile = QUrl::PreferLocalFile,   StripTrailingSlash = QUrl::StripTrailingSlash,   RemoveFilename = QUrl::RemoveFilename,   NormalizePathSegments = QUrl::NormalizePathSegments};
enum UserInputResolutionOption{
  DefaultResolution = QUrl::DefaultResolution,   AssumeLocalFile = QUrl::AssumeLocalFile};
Q_DECLARE_FLAGS(AceProcessingOptions, AceProcessingOption)
Q_DECLARE_FLAGS(ComponentFormattingOptions, ComponentFormattingOption)
Q_DECLARE_FLAGS(FormattingOptions, UrlFormattingOption)
public Q_SLOTS:
QUrl* new_QUrl();
QUrl* new_QUrl(const QString&  url, QUrl::ParsingMode  mode = QUrl::TolerantMode);
QUrl* new_QUrl(const QUrl&  copy);
void delete_QUrl(QUrl* obj) { delete obj; }
   QUrl  adjusted(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const;
   QString  authority(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::PrettyDecoded) const;
   void clear(QUrl* theWrappedObject);
   QString  errorString(QUrl* theWrappedObject) const;
   QString  fileName(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::FullyDecoded) const;
   QString  fragment(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::PrettyDecoded) const;
   QString  static_QUrl_fromAce(const QByteArray&  domain, QUrl::AceProcessingOptions  options = {});
   QUrl  static_QUrl_fromEncoded(QByteArrayView  input, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   QUrl  static_QUrl_fromLocalFile(const QString&  localfile);
   QString  static_QUrl_fromPercentEncoding(const QByteArray&  arg__1);
   QList<QUrl >  static_QUrl_fromStringList(const QStringList&  uris, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   bool  hasFragment(QUrl* theWrappedObject) const;
   bool  hasQuery(QUrl* theWrappedObject) const;
   QString  host(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1 = QUrl::FullyDecoded) const;
   QStringList  static_QUrl_idnWhitelist();
   bool  isEmpty(QUrl* theWrappedObject) const;
   bool  isLocalFile(QUrl* theWrappedObject) const;
   bool  isParentOf(QUrl* theWrappedObject, const QUrl&  url) const;
   bool  isRelative(QUrl* theWrappedObject) const;
   bool  isValid(QUrl* theWrappedObject) const;
   bool  matches(QUrl* theWrappedObject, const QUrl&  url, QUrl::FormattingOptions  options) const;
   bool  __ne__(QUrl* theWrappedObject, const QUrl&  rhs);
   bool  __lt__(QUrl* theWrappedObject, const QUrl&  rhs);
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QUrl* theWrappedObject, const QUrl&  rhs);
   bool  __eq__(QUrl* theWrappedObject, const QUrl&  rhs);
   bool  __gt__(QUrl* theWrappedObject, const QUrl&  rhs);
   bool  __ge__(QUrl* theWrappedObject, const QUrl&  rhs);
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
   QString  password(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1 = QUrl::FullyDecoded) const;
   QString  path(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::FullyDecoded) const;
   int  port(QUrl* theWrappedObject, int  defaultPort = -1) const;
   QString  query(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1 = QUrl::PrettyDecoded) const;
   QUrl  resolved(QUrl* theWrappedObject, const QUrl&  relative) const;
   QString  scheme(QUrl* theWrappedObject) const;
   void setAuthority(QUrl* theWrappedObject, const QString&  authority, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setFragment(QUrl* theWrappedObject, const QString&  fragment, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setHost(QUrl* theWrappedObject, const QString&  host, QUrl::ParsingMode  mode = QUrl::DecodedMode);
   void static_QUrl_setIdnWhitelist(const QStringList&  arg__1);
   void setPassword(QUrl* theWrappedObject, const QString&  password, QUrl::ParsingMode  mode = QUrl::DecodedMode);
   void setPath(QUrl* theWrappedObject, const QString&  path, QUrl::ParsingMode  mode = QUrl::DecodedMode);
   void setPort(QUrl* theWrappedObject, int  port);
   void setQuery(QUrl* theWrappedObject, const QString&  query, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setQuery(QUrl* theWrappedObject, const QUrlQuery&  query);
   void setScheme(QUrl* theWrappedObject, const QString&  scheme);
   void setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setUserInfo(QUrl* theWrappedObject, const QString&  userInfo, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setUserName(QUrl* theWrappedObject, const QString&  userName, QUrl::ParsingMode  mode = QUrl::DecodedMode);
   void swap(QUrl* theWrappedObject, QUrl&  other);
   QByteArray  static_QUrl_toAce(const QString&  domain, QUrl::AceProcessingOptions  options = {});
   QString  toDisplayString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::FormattingOptions(PrettyDecoded)) const;
   QByteArray  toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::FullyEncoded) const;
   QString  toLocalFile(QUrl* theWrappedObject) const;
   QByteArray  static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray());
   QString  toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::FormattingOptions(PrettyDecoded)) const;
   QStringList  static_QUrl_toStringList(const QList<QUrl >&  uris, QUrl::FormattingOptions  options = QUrl::FormattingOptions(PrettyDecoded));
   QString  url(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::FormattingOptions(PrettyDecoded)) const;
   QString  userInfo(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::PrettyDecoded) const;
   QString  userName(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::FullyDecoded) const;
    QString py_toString(QUrl*);
    bool __nonzero__(QUrl* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_Qt : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AlignmentFlag AnchorPoint ApplicationAttribute ApplicationState ArrowType AspectRatioMode Axis BGMode BrushStyle CaseSensitivity CheckState ChecksumType ClipOperation ColorScheme ConnectionType ContextMenuPolicy ContextMenuTrigger ContrastPreference CoordinateSystem Corner CursorMoveStyle CursorShape DateFormat DayOfWeek DockWidgetArea DockWidgetAreaSizes DropAction Edge EnterKeyType EventPriority FillRule FindChildOption FocusPolicy FocusReason GestureFlag GestureState GestureType GlobalColor HighDpiScaleFactorRoundingPolicy HitTestAccuracy ImageConversionFlag InputMethodHint InputMethodQuery ItemDataRole ItemFlag ItemSelectionMode ItemSelectionOperation Key KeyboardModifier LayoutDirection MaskMode MatchFlag MouseButton MouseEventFlag MouseEventSource NativeGestureType NavigationMode Orientation PenCapStyle PenJoinStyle PenStyle ScreenOrientation ScrollBarPolicy ScrollPhase ShortcutContext SizeHint SizeMode SortOrder SplitBehaviorFlags TabFocusBehavior TextElideMode TextFlag TextFormat TextInteractionFlag TileRule TimeSpec TimerId TimerType ToolBarArea ToolBarAreaSizes ToolButtonStyle TouchPointState TransformationMode UIEffect WhiteSpaceMode WidgetAttribute WindowFrameSection WindowModality WindowState WindowType )
Q_FLAGS(Alignment DockWidgetAreas DropActions FindChildOptions GestureFlags ImageConversionFlags InputMethodHints InputMethodQueries ItemFlags KeyboardModifiers MatchFlags MouseButtons MouseEventFlags Orientations ScreenOrientations SplitBehavior TextInteractionFlags ToolBarAreas TouchPointStates WindowStates WindowFlags )
enum AlignmentFlag{
  AlignLeft = Qt::AlignLeft,   AlignLeading = Qt::AlignLeading,   AlignRight = Qt::AlignRight,   AlignTrailing = Qt::AlignTrailing,   AlignHCenter = Qt::AlignHCenter,   AlignJustify = Qt::AlignJustify,   AlignAbsolute = Qt::AlignAbsolute,   AlignHorizontal_Mask = Qt::AlignHorizontal_Mask,   AlignTop = Qt::AlignTop,   AlignBottom = Qt::AlignBottom,   AlignVCenter = Qt::AlignVCenter,   AlignBaseline = Qt::AlignBaseline,   AlignVertical_Mask = Qt::AlignVertical_Mask,   AlignCenter = Qt::AlignCenter};
enum AnchorPoint{
  AnchorLeft = Qt::AnchorLeft,   AnchorHorizontalCenter = Qt::AnchorHorizontalCenter,   AnchorRight = Qt::AnchorRight,   AnchorTop = Qt::AnchorTop,   AnchorVerticalCenter = Qt::AnchorVerticalCenter,   AnchorBottom = Qt::AnchorBottom};
enum ApplicationAttribute{
  AA_QtQuickUseDefaultSizePolicy = Qt::AA_QtQuickUseDefaultSizePolicy,   AA_DontShowIconsInMenus = Qt::AA_DontShowIconsInMenus,   AA_NativeWindows = Qt::AA_NativeWindows,   AA_DontCreateNativeWidgetSiblings = Qt::AA_DontCreateNativeWidgetSiblings,   AA_PluginApplication = Qt::AA_PluginApplication,   AA_DontUseNativeMenuBar = Qt::AA_DontUseNativeMenuBar,   AA_MacDontSwapCtrlAndMeta = Qt::AA_MacDontSwapCtrlAndMeta,   AA_Use96Dpi = Qt::AA_Use96Dpi,   AA_DisableNativeVirtualKeyboard = Qt::AA_DisableNativeVirtualKeyboard,   AA_DontUseNativeMenuWindows = Qt::AA_DontUseNativeMenuWindows,   AA_SynthesizeTouchForUnhandledMouseEvents = Qt::AA_SynthesizeTouchForUnhandledMouseEvents,   AA_SynthesizeMouseForUnhandledTouchEvents = Qt::AA_SynthesizeMouseForUnhandledTouchEvents,   AA_UseHighDpiPixmaps = Qt::AA_UseHighDpiPixmaps,   AA_ForceRasterWidgets = Qt::AA_ForceRasterWidgets,   AA_UseDesktopOpenGL = Qt::AA_UseDesktopOpenGL,   AA_UseOpenGLES = Qt::AA_UseOpenGLES,   AA_UseSoftwareOpenGL = Qt::AA_UseSoftwareOpenGL,   AA_ShareOpenGLContexts = Qt::AA_ShareOpenGLContexts,   AA_SetPalette = Qt::AA_SetPalette,   AA_EnableHighDpiScaling = Qt::AA_EnableHighDpiScaling,   AA_DisableHighDpiScaling = Qt::AA_DisableHighDpiScaling,   AA_UseStyleSheetPropagationInWidgetStyles = Qt::AA_UseStyleSheetPropagationInWidgetStyles,   AA_DontUseNativeDialogs = Qt::AA_DontUseNativeDialogs,   AA_SynthesizeMouseForUnhandledTabletEvents = Qt::AA_SynthesizeMouseForUnhandledTabletEvents,   AA_CompressHighFrequencyEvents = Qt::AA_CompressHighFrequencyEvents,   AA_DontCheckOpenGLContextThreadAffinity = Qt::AA_DontCheckOpenGLContextThreadAffinity,   AA_DisableShaderDiskCache = Qt::AA_DisableShaderDiskCache,   AA_DontShowShortcutsInContextMenus = Qt::AA_DontShowShortcutsInContextMenus,   AA_CompressTabletEvents = Qt::AA_CompressTabletEvents,   AA_DisableSessionManager = Qt::AA_DisableSessionManager,   AA_AttributeCount = Qt::AA_AttributeCount};
enum ApplicationState{
  ApplicationSuspended = Qt::ApplicationSuspended,   ApplicationHidden = Qt::ApplicationHidden,   ApplicationInactive = Qt::ApplicationInactive,   ApplicationActive = Qt::ApplicationActive};
enum ArrowType{
  NoArrow = Qt::NoArrow,   UpArrow = Qt::UpArrow,   DownArrow = Qt::DownArrow,   LeftArrow = Qt::LeftArrow,   RightArrow = Qt::RightArrow};
enum AspectRatioMode{
  IgnoreAspectRatio = Qt::IgnoreAspectRatio,   KeepAspectRatio = Qt::KeepAspectRatio,   KeepAspectRatioByExpanding = Qt::KeepAspectRatioByExpanding};
enum Axis{
  XAxis = Qt::XAxis,   YAxis = Qt::YAxis,   ZAxis = Qt::ZAxis};
enum BGMode{
  TransparentMode = Qt::TransparentMode,   OpaqueMode = Qt::OpaqueMode};
enum BrushStyle{
  NoBrush = Qt::NoBrush,   SolidPattern = Qt::SolidPattern,   Dense1Pattern = Qt::Dense1Pattern,   Dense2Pattern = Qt::Dense2Pattern,   Dense3Pattern = Qt::Dense3Pattern,   Dense4Pattern = Qt::Dense4Pattern,   Dense5Pattern = Qt::Dense5Pattern,   Dense6Pattern = Qt::Dense6Pattern,   Dense7Pattern = Qt::Dense7Pattern,   HorPattern = Qt::HorPattern,   VerPattern = Qt::VerPattern,   CrossPattern = Qt::CrossPattern,   BDiagPattern = Qt::BDiagPattern,   FDiagPattern = Qt::FDiagPattern,   DiagCrossPattern = Qt::DiagCrossPattern,   LinearGradientPattern = Qt::LinearGradientPattern,   RadialGradientPattern = Qt::RadialGradientPattern,   ConicalGradientPattern = Qt::ConicalGradientPattern,   TexturePattern = Qt::TexturePattern};
enum CaseSensitivity{
  CaseInsensitive = Qt::CaseInsensitive,   CaseSensitive = Qt::CaseSensitive};
enum CheckState{
  Unchecked = Qt::Unchecked,   PartiallyChecked = Qt::PartiallyChecked,   Checked = Qt::Checked};
enum ChecksumType{
  ChecksumIso3309 = Qt::ChecksumIso3309,   ChecksumItuV41 = Qt::ChecksumItuV41};
enum ClipOperation{
  NoClip = Qt::NoClip,   ReplaceClip = Qt::ReplaceClip,   IntersectClip = Qt::IntersectClip};
enum class ColorScheme{
  Unknown = static_cast<int>(Qt::ColorScheme::Unknown),   Light = static_cast<int>(Qt::ColorScheme::Light),   Dark = static_cast<int>(Qt::ColorScheme::Dark)};
enum ConnectionType{
  AutoConnection = Qt::AutoConnection,   DirectConnection = Qt::DirectConnection,   QueuedConnection = Qt::QueuedConnection,   BlockingQueuedConnection = Qt::BlockingQueuedConnection,   UniqueConnection = Qt::UniqueConnection,   SingleShotConnection = Qt::SingleShotConnection};
enum ContextMenuPolicy{
  NoContextMenu = Qt::NoContextMenu,   DefaultContextMenu = Qt::DefaultContextMenu,   ActionsContextMenu = Qt::ActionsContextMenu,   CustomContextMenu = Qt::CustomContextMenu,   PreventContextMenu = Qt::PreventContextMenu};
enum class ContextMenuTrigger{
  Press = static_cast<int>(Qt::ContextMenuTrigger::Press),   Release = static_cast<int>(Qt::ContextMenuTrigger::Release)};
enum class ContrastPreference{
  NoPreference = static_cast<int>(Qt::ContrastPreference::NoPreference),   HighContrast = static_cast<int>(Qt::ContrastPreference::HighContrast)};
enum CoordinateSystem{
  DeviceCoordinates = Qt::DeviceCoordinates,   LogicalCoordinates = Qt::LogicalCoordinates};
enum Corner{
  TopLeftCorner = Qt::TopLeftCorner,   TopRightCorner = Qt::TopRightCorner,   BottomLeftCorner = Qt::BottomLeftCorner,   BottomRightCorner = Qt::BottomRightCorner};
enum CursorMoveStyle{
  LogicalMoveStyle = Qt::LogicalMoveStyle,   VisualMoveStyle = Qt::VisualMoveStyle};
enum CursorShape{
  ArrowCursor = Qt::ArrowCursor,   UpArrowCursor = Qt::UpArrowCursor,   CrossCursor = Qt::CrossCursor,   WaitCursor = Qt::WaitCursor,   IBeamCursor = Qt::IBeamCursor,   SizeVerCursor = Qt::SizeVerCursor,   SizeHorCursor = Qt::SizeHorCursor,   SizeBDiagCursor = Qt::SizeBDiagCursor,   SizeFDiagCursor = Qt::SizeFDiagCursor,   SizeAllCursor = Qt::SizeAllCursor,   BlankCursor = Qt::BlankCursor,   SplitVCursor = Qt::SplitVCursor,   SplitHCursor = Qt::SplitHCursor,   PointingHandCursor = Qt::PointingHandCursor,   ForbiddenCursor = Qt::ForbiddenCursor,   WhatsThisCursor = Qt::WhatsThisCursor,   BusyCursor = Qt::BusyCursor,   OpenHandCursor = Qt::OpenHandCursor,   ClosedHandCursor = Qt::ClosedHandCursor,   DragCopyCursor = Qt::DragCopyCursor,   DragMoveCursor = Qt::DragMoveCursor,   DragLinkCursor = Qt::DragLinkCursor,   LastCursor = Qt::LastCursor,   BitmapCursor = Qt::BitmapCursor,   CustomCursor = Qt::CustomCursor};
enum DateFormat{
  TextDate = Qt::TextDate,   ISODate = Qt::ISODate,   RFC2822Date = Qt::RFC2822Date,   ISODateWithMs = Qt::ISODateWithMs};
enum DayOfWeek{
  Monday = Qt::Monday,   Tuesday = Qt::Tuesday,   Wednesday = Qt::Wednesday,   Thursday = Qt::Thursday,   Friday = Qt::Friday,   Saturday = Qt::Saturday,   Sunday = Qt::Sunday};
enum DockWidgetArea{
  LeftDockWidgetArea = Qt::LeftDockWidgetArea,   RightDockWidgetArea = Qt::RightDockWidgetArea,   TopDockWidgetArea = Qt::TopDockWidgetArea,   BottomDockWidgetArea = Qt::BottomDockWidgetArea,   DockWidgetArea_Mask = Qt::DockWidgetArea_Mask,   AllDockWidgetAreas = Qt::AllDockWidgetAreas,   NoDockWidgetArea = Qt::NoDockWidgetArea};
enum DockWidgetAreaSizes{
  NDockWidgetAreas = Qt::NDockWidgetAreas};
enum DropAction{
  CopyAction = Qt::CopyAction,   MoveAction = Qt::MoveAction,   LinkAction = Qt::LinkAction,   ActionMask = Qt::ActionMask,   TargetMoveAction = Qt::TargetMoveAction,   IgnoreAction = Qt::IgnoreAction};
enum Edge{
  TopEdge = Qt::TopEdge,   LeftEdge = Qt::LeftEdge,   RightEdge = Qt::RightEdge,   BottomEdge = Qt::BottomEdge};
enum EnterKeyType{
  EnterKeyDefault = Qt::EnterKeyDefault,   EnterKeyReturn = Qt::EnterKeyReturn,   EnterKeyDone = Qt::EnterKeyDone,   EnterKeyGo = Qt::EnterKeyGo,   EnterKeySend = Qt::EnterKeySend,   EnterKeySearch = Qt::EnterKeySearch,   EnterKeyNext = Qt::EnterKeyNext,   EnterKeyPrevious = Qt::EnterKeyPrevious};
enum EventPriority{
  HighEventPriority = Qt::HighEventPriority,   NormalEventPriority = Qt::NormalEventPriority,   LowEventPriority = Qt::LowEventPriority};
enum FillRule{
  OddEvenFill = Qt::OddEvenFill,   WindingFill = Qt::WindingFill};
enum FindChildOption{
  FindDirectChildrenOnly = Qt::FindDirectChildrenOnly,   FindChildrenRecursively = Qt::FindChildrenRecursively};
enum FocusPolicy{
  NoFocus = Qt::NoFocus,   TabFocus = Qt::TabFocus,   ClickFocus = Qt::ClickFocus,   StrongFocus = Qt::StrongFocus,   WheelFocus = Qt::WheelFocus};
enum FocusReason{
  MouseFocusReason = Qt::MouseFocusReason,   TabFocusReason = Qt::TabFocusReason,   BacktabFocusReason = Qt::BacktabFocusReason,   ActiveWindowFocusReason = Qt::ActiveWindowFocusReason,   PopupFocusReason = Qt::PopupFocusReason,   ShortcutFocusReason = Qt::ShortcutFocusReason,   MenuBarFocusReason = Qt::MenuBarFocusReason,   OtherFocusReason = Qt::OtherFocusReason,   NoFocusReason = Qt::NoFocusReason};
enum GestureFlag{
  DontStartGestureOnChildren = Qt::DontStartGestureOnChildren,   ReceivePartialGestures = Qt::ReceivePartialGestures,   IgnoredGesturesPropagateToParent = Qt::IgnoredGesturesPropagateToParent};
enum GestureState{
  NoGesture = Qt::NoGesture,   GestureStarted = Qt::GestureStarted,   GestureUpdated = Qt::GestureUpdated,   GestureFinished = Qt::GestureFinished,   GestureCanceled = Qt::GestureCanceled};
enum GestureType{
  TapGesture = Qt::TapGesture,   TapAndHoldGesture = Qt::TapAndHoldGesture,   PanGesture = Qt::PanGesture,   PinchGesture = Qt::PinchGesture,   SwipeGesture = Qt::SwipeGesture,   CustomGesture = Qt::CustomGesture,   LastGestureType = Qt::LastGestureType};
enum GlobalColor{
  color0 = Qt::color0,   color1 = Qt::color1,   black = Qt::black,   white = Qt::white,   darkGray = Qt::darkGray,   gray = Qt::gray,   lightGray = Qt::lightGray,   red = Qt::red,   green = Qt::green,   blue = Qt::blue,   cyan = Qt::cyan,   magenta = Qt::magenta,   yellow = Qt::yellow,   darkRed = Qt::darkRed,   darkGreen = Qt::darkGreen,   darkBlue = Qt::darkBlue,   darkCyan = Qt::darkCyan,   darkMagenta = Qt::darkMagenta,   darkYellow = Qt::darkYellow,   transparent = Qt::transparent};
enum class HighDpiScaleFactorRoundingPolicy{
  Unset = static_cast<int>(Qt::HighDpiScaleFactorRoundingPolicy::Unset),   Round = static_cast<int>(Qt::HighDpiScaleFactorRoundingPolicy::Round),   Ceil = static_cast<int>(Qt::HighDpiScaleFactorRoundingPolicy::Ceil),   Floor = static_cast<int>(Qt::HighDpiScaleFactorRoundingPolicy::Floor),   RoundPreferFloor = static_cast<int>(Qt::HighDpiScaleFactorRoundingPolicy::RoundPreferFloor),   PassThrough = static_cast<int>(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough)};
enum HitTestAccuracy{
  ExactHit = Qt::ExactHit,   FuzzyHit = Qt::FuzzyHit};
enum ImageConversionFlag{
  ColorMode_Mask = Qt::ColorMode_Mask,   AutoColor = Qt::AutoColor,   ColorOnly = Qt::ColorOnly,   MonoOnly = Qt::MonoOnly,   AlphaDither_Mask = Qt::AlphaDither_Mask,   ThresholdAlphaDither = Qt::ThresholdAlphaDither,   OrderedAlphaDither = Qt::OrderedAlphaDither,   DiffuseAlphaDither = Qt::DiffuseAlphaDither,   NoAlpha = Qt::NoAlpha,   Dither_Mask = Qt::Dither_Mask,   DiffuseDither = Qt::DiffuseDither,   OrderedDither = Qt::OrderedDither,   ThresholdDither = Qt::ThresholdDither,   DitherMode_Mask = Qt::DitherMode_Mask,   AutoDither = Qt::AutoDither,   PreferDither = Qt::PreferDither,   AvoidDither = Qt::AvoidDither,   NoOpaqueDetection = Qt::NoOpaqueDetection,   NoFormatConversion = Qt::NoFormatConversion};
enum InputMethodHint{
  ImhNone = Qt::ImhNone,   ImhHiddenText = Qt::ImhHiddenText,   ImhSensitiveData = Qt::ImhSensitiveData,   ImhNoAutoUppercase = Qt::ImhNoAutoUppercase,   ImhPreferNumbers = Qt::ImhPreferNumbers,   ImhPreferUppercase = Qt::ImhPreferUppercase,   ImhPreferLowercase = Qt::ImhPreferLowercase,   ImhNoPredictiveText = Qt::ImhNoPredictiveText,   ImhDate = Qt::ImhDate,   ImhTime = Qt::ImhTime,   ImhPreferLatin = Qt::ImhPreferLatin,   ImhMultiLine = Qt::ImhMultiLine,   ImhNoEditMenu = Qt::ImhNoEditMenu,   ImhNoTextHandles = Qt::ImhNoTextHandles,   ImhDigitsOnly = Qt::ImhDigitsOnly,   ImhFormattedNumbersOnly = Qt::ImhFormattedNumbersOnly,   ImhUppercaseOnly = Qt::ImhUppercaseOnly,   ImhLowercaseOnly = Qt::ImhLowercaseOnly,   ImhDialableCharactersOnly = Qt::ImhDialableCharactersOnly,   ImhEmailCharactersOnly = Qt::ImhEmailCharactersOnly,   ImhUrlCharactersOnly = Qt::ImhUrlCharactersOnly,   ImhLatinOnly = Qt::ImhLatinOnly,   ImhExclusiveInputMask = Qt::ImhExclusiveInputMask};
enum InputMethodQuery{
  ImEnabled = Qt::ImEnabled,   ImCursorRectangle = Qt::ImCursorRectangle,   ImFont = Qt::ImFont,   ImCursorPosition = Qt::ImCursorPosition,   ImSurroundingText = Qt::ImSurroundingText,   ImCurrentSelection = Qt::ImCurrentSelection,   ImMaximumTextLength = Qt::ImMaximumTextLength,   ImAnchorPosition = Qt::ImAnchorPosition,   ImHints = Qt::ImHints,   ImPreferredLanguage = Qt::ImPreferredLanguage,   ImAbsolutePosition = Qt::ImAbsolutePosition,   ImTextBeforeCursor = Qt::ImTextBeforeCursor,   ImTextAfterCursor = Qt::ImTextAfterCursor,   ImEnterKeyType = Qt::ImEnterKeyType,   ImAnchorRectangle = Qt::ImAnchorRectangle,   ImInputItemClipRectangle = Qt::ImInputItemClipRectangle,   ImReadOnly = Qt::ImReadOnly,   ImPlatformData = Qt::ImPlatformData,   ImQueryInput = Qt::ImQueryInput,   ImQueryAll = Qt::ImQueryAll};
enum ItemDataRole{
  DisplayRole = Qt::DisplayRole,   DecorationRole = Qt::DecorationRole,   EditRole = Qt::EditRole,   ToolTipRole = Qt::ToolTipRole,   StatusTipRole = Qt::StatusTipRole,   WhatsThisRole = Qt::WhatsThisRole,   FontRole = Qt::FontRole,   TextAlignmentRole = Qt::TextAlignmentRole,   BackgroundRole = Qt::BackgroundRole,   ForegroundRole = Qt::ForegroundRole,   CheckStateRole = Qt::CheckStateRole,   AccessibleTextRole = Qt::AccessibleTextRole,   AccessibleDescriptionRole = Qt::AccessibleDescriptionRole,   SizeHintRole = Qt::SizeHintRole,   InitialSortOrderRole = Qt::InitialSortOrderRole,   DisplayPropertyRole = Qt::DisplayPropertyRole,   DecorationPropertyRole = Qt::DecorationPropertyRole,   ToolTipPropertyRole = Qt::ToolTipPropertyRole,   StatusTipPropertyRole = Qt::StatusTipPropertyRole,   WhatsThisPropertyRole = Qt::WhatsThisPropertyRole,   RangeModelDataRole = Qt::RangeModelDataRole,   RangeModelAdapterRole = Qt::RangeModelAdapterRole,   UserRole = Qt::UserRole,   StandardItemFlagsRole = Qt::StandardItemFlagsRole,   FileInfoRole = Qt::FileInfoRole,   RemoteObjectsCacheRole = Qt::RemoteObjectsCacheRole};
enum ItemFlag{
  NoItemFlags = Qt::NoItemFlags,   ItemIsSelectable = Qt::ItemIsSelectable,   ItemIsEditable = Qt::ItemIsEditable,   ItemIsDragEnabled = Qt::ItemIsDragEnabled,   ItemIsDropEnabled = Qt::ItemIsDropEnabled,   ItemIsUserCheckable = Qt::ItemIsUserCheckable,   ItemIsEnabled = Qt::ItemIsEnabled,   ItemIsAutoTristate = Qt::ItemIsAutoTristate,   ItemNeverHasChildren = Qt::ItemNeverHasChildren,   ItemIsUserTristate = Qt::ItemIsUserTristate};
enum ItemSelectionMode{
  ContainsItemShape = Qt::ContainsItemShape,   IntersectsItemShape = Qt::IntersectsItemShape,   ContainsItemBoundingRect = Qt::ContainsItemBoundingRect,   IntersectsItemBoundingRect = Qt::IntersectsItemBoundingRect};
enum ItemSelectionOperation{
  ReplaceSelection = Qt::ReplaceSelection,   AddToSelection = Qt::AddToSelection};
enum Key{
  Key_Space = Qt::Key_Space,   Key_Any = Qt::Key_Any,   Key_Exclam = Qt::Key_Exclam,   Key_QuoteDbl = Qt::Key_QuoteDbl,   Key_NumberSign = Qt::Key_NumberSign,   Key_Dollar = Qt::Key_Dollar,   Key_Percent = Qt::Key_Percent,   Key_Ampersand = Qt::Key_Ampersand,   Key_Apostrophe = Qt::Key_Apostrophe,   Key_ParenLeft = Qt::Key_ParenLeft,   Key_ParenRight = Qt::Key_ParenRight,   Key_Asterisk = Qt::Key_Asterisk,   Key_Plus = Qt::Key_Plus,   Key_Comma = Qt::Key_Comma,   Key_Minus = Qt::Key_Minus,   Key_Period = Qt::Key_Period,   Key_Slash = Qt::Key_Slash,   Key_0 = Qt::Key_0,   Key_1 = Qt::Key_1,   Key_2 = Qt::Key_2,   Key_3 = Qt::Key_3,   Key_4 = Qt::Key_4,   Key_5 = Qt::Key_5,   Key_6 = Qt::Key_6,   Key_7 = Qt::Key_7,   Key_8 = Qt::Key_8,   Key_9 = Qt::Key_9,   Key_Colon = Qt::Key_Colon,   Key_Semicolon = Qt::Key_Semicolon,   Key_Less = Qt::Key_Less,   Key_Equal = Qt::Key_Equal,   Key_Greater = Qt::Key_Greater,   Key_Question = Qt::Key_Question,   Key_At = Qt::Key_At,   Key_A = Qt::Key_A,   Key_B = Qt::Key_B,   Key_C = Qt::Key_C,   Key_D = Qt::Key_D,   Key_E = Qt::Key_E,   Key_F = Qt::Key_F,   Key_G = Qt::Key_G,   Key_H = Qt::Key_H,   Key_I = Qt::Key_I,   Key_J = Qt::Key_J,   Key_K = Qt::Key_K,   Key_L = Qt::Key_L,   Key_M = Qt::Key_M,   Key_N = Qt::Key_N,   Key_O = Qt::Key_O,   Key_P = Qt::Key_P,   Key_Q = Qt::Key_Q,   Key_R = Qt::Key_R,   Key_S = Qt::Key_S,   Key_T = Qt::Key_T,   Key_U = Qt::Key_U,   Key_V = Qt::Key_V,   Key_W = Qt::Key_W,   Key_X = Qt::Key_X,   Key_Y = Qt::Key_Y,   Key_Z = Qt::Key_Z,   Key_BracketLeft = Qt::Key_BracketLeft,   Key_Backslash = Qt::Key_Backslash,   Key_BracketRight = Qt::Key_BracketRight,   Key_AsciiCircum = Qt::Key_AsciiCircum,   Key_Underscore = Qt::Key_Underscore,   Key_QuoteLeft = Qt::Key_QuoteLeft,   Key_BraceLeft = Qt::Key_BraceLeft,   Key_Bar = Qt::Key_Bar,   Key_BraceRight = Qt::Key_BraceRight,   Key_AsciiTilde = Qt::Key_AsciiTilde,   Key_nobreakspace = Qt::Key_nobreakspace,   Key_exclamdown = Qt::Key_exclamdown,   Key_cent = Qt::Key_cent,   Key_sterling = Qt::Key_sterling,   Key_currency = Qt::Key_currency,   Key_yen = Qt::Key_yen,   Key_brokenbar = Qt::Key_brokenbar,   Key_section = Qt::Key_section,   Key_diaeresis = Qt::Key_diaeresis,   Key_copyright = Qt::Key_copyright,   Key_ordfeminine = Qt::Key_ordfeminine,   Key_guillemotleft = Qt::Key_guillemotleft,   Key_notsign = Qt::Key_notsign,   Key_hyphen = Qt::Key_hyphen,   Key_registered = Qt::Key_registered,   Key_macron = Qt::Key_macron,   Key_degree = Qt::Key_degree,   Key_plusminus = Qt::Key_plusminus,   Key_twosuperior = Qt::Key_twosuperior,   Key_threesuperior = Qt::Key_threesuperior,   Key_acute = Qt::Key_acute,   Key_micro = Qt::Key_micro,   Key_mu = Qt::Key_mu,   Key_paragraph = Qt::Key_paragraph,   Key_periodcentered = Qt::Key_periodcentered,   Key_cedilla = Qt::Key_cedilla,   Key_onesuperior = Qt::Key_onesuperior,   Key_masculine = Qt::Key_masculine,   Key_guillemotright = Qt::Key_guillemotright,   Key_onequarter = Qt::Key_onequarter,   Key_onehalf = Qt::Key_onehalf,   Key_threequarters = Qt::Key_threequarters,   Key_questiondown = Qt::Key_questiondown,   Key_Agrave = Qt::Key_Agrave,   Key_Aacute = Qt::Key_Aacute,   Key_Acircumflex = Qt::Key_Acircumflex,   Key_Atilde = Qt::Key_Atilde,   Key_Adiaeresis = Qt::Key_Adiaeresis,   Key_Aring = Qt::Key_Aring,   Key_AE = Qt::Key_AE,   Key_Ccedilla = Qt::Key_Ccedilla,   Key_Egrave = Qt::Key_Egrave,   Key_Eacute = Qt::Key_Eacute,   Key_Ecircumflex = Qt::Key_Ecircumflex,   Key_Ediaeresis = Qt::Key_Ediaeresis,   Key_Igrave = Qt::Key_Igrave,   Key_Iacute = Qt::Key_Iacute,   Key_Icircumflex = Qt::Key_Icircumflex,   Key_Idiaeresis = Qt::Key_Idiaeresis,   Key_ETH = Qt::Key_ETH,   Key_Ntilde = Qt::Key_Ntilde,   Key_Ograve = Qt::Key_Ograve,   Key_Oacute = Qt::Key_Oacute,   Key_Ocircumflex = Qt::Key_Ocircumflex,   Key_Otilde = Qt::Key_Otilde,   Key_Odiaeresis = Qt::Key_Odiaeresis,   Key_multiply = Qt::Key_multiply,   Key_Ooblique = Qt::Key_Ooblique,   Key_Ugrave = Qt::Key_Ugrave,   Key_Uacute = Qt::Key_Uacute,   Key_Ucircumflex = Qt::Key_Ucircumflex,   Key_Udiaeresis = Qt::Key_Udiaeresis,   Key_Yacute = Qt::Key_Yacute,   Key_THORN = Qt::Key_THORN,   Key_ssharp = Qt::Key_ssharp,   Key_division = Qt::Key_division,   Key_ydiaeresis = Qt::Key_ydiaeresis,   Key_Escape = Qt::Key_Escape,   Key_Tab = Qt::Key_Tab,   Key_Backtab = Qt::Key_Backtab,   Key_Backspace = Qt::Key_Backspace,   Key_Return = Qt::Key_Return,   Key_Enter = Qt::Key_Enter,   Key_Insert = Qt::Key_Insert,   Key_Delete = Qt::Key_Delete,   Key_Pause = Qt::Key_Pause,   Key_Print = Qt::Key_Print,   Key_SysReq = Qt::Key_SysReq,   Key_Clear = Qt::Key_Clear,   Key_Home = Qt::Key_Home,   Key_End = Qt::Key_End,   Key_Left = Qt::Key_Left,   Key_Up = Qt::Key_Up,   Key_Right = Qt::Key_Right,   Key_Down = Qt::Key_Down,   Key_PageUp = Qt::Key_PageUp,   Key_PageDown = Qt::Key_PageDown,   Key_Shift = Qt::Key_Shift,   Key_Control = Qt::Key_Control,   Key_Meta = Qt::Key_Meta,   Key_Alt = Qt::Key_Alt,   Key_CapsLock = Qt::Key_CapsLock,   Key_NumLock = Qt::Key_NumLock,   Key_ScrollLock = Qt::Key_ScrollLock,   Key_F1 = Qt::Key_F1,   Key_F2 = Qt::Key_F2,   Key_F3 = Qt::Key_F3,   Key_F4 = Qt::Key_F4,   Key_F5 = Qt::Key_F5,   Key_F6 = Qt::Key_F6,   Key_F7 = Qt::Key_F7,   Key_F8 = Qt::Key_F8,   Key_F9 = Qt::Key_F9,   Key_F10 = Qt::Key_F10,   Key_F11 = Qt::Key_F11,   Key_F12 = Qt::Key_F12,   Key_F13 = Qt::Key_F13,   Key_F14 = Qt::Key_F14,   Key_F15 = Qt::Key_F15,   Key_F16 = Qt::Key_F16,   Key_F17 = Qt::Key_F17,   Key_F18 = Qt::Key_F18,   Key_F19 = Qt::Key_F19,   Key_F20 = Qt::Key_F20,   Key_F21 = Qt::Key_F21,   Key_F22 = Qt::Key_F22,   Key_F23 = Qt::Key_F23,   Key_F24 = Qt::Key_F24,   Key_F25 = Qt::Key_F25,   Key_F26 = Qt::Key_F26,   Key_F27 = Qt::Key_F27,   Key_F28 = Qt::Key_F28,   Key_F29 = Qt::Key_F29,   Key_F30 = Qt::Key_F30,   Key_F31 = Qt::Key_F31,   Key_F32 = Qt::Key_F32,   Key_F33 = Qt::Key_F33,   Key_F34 = Qt::Key_F34,   Key_F35 = Qt::Key_F35,   Key_Super_L = Qt::Key_Super_L,   Key_Super_R = Qt::Key_Super_R,   Key_Menu = Qt::Key_Menu,   Key_Hyper_L = Qt::Key_Hyper_L,   Key_Hyper_R = Qt::Key_Hyper_R,   Key_Help = Qt::Key_Help,   Key_Direction_L = Qt::Key_Direction_L,   Key_Direction_R = Qt::Key_Direction_R,   Key_AltGr = Qt::Key_AltGr,   Key_Multi_key = Qt::Key_Multi_key,   Key_Codeinput = Qt::Key_Codeinput,   Key_SingleCandidate = Qt::Key_SingleCandidate,   Key_MultipleCandidate = Qt::Key_MultipleCandidate,   Key_PreviousCandidate = Qt::Key_PreviousCandidate,   Key_Mode_switch = Qt::Key_Mode_switch,   Key_Kanji = Qt::Key_Kanji,   Key_Muhenkan = Qt::Key_Muhenkan,   Key_Henkan = Qt::Key_Henkan,   Key_Romaji = Qt::Key_Romaji,   Key_Hiragana = Qt::Key_Hiragana,   Key_Katakana = Qt::Key_Katakana,   Key_Hiragana_Katakana = Qt::Key_Hiragana_Katakana,   Key_Zenkaku = Qt::Key_Zenkaku,   Key_Hankaku = Qt::Key_Hankaku,   Key_Zenkaku_Hankaku = Qt::Key_Zenkaku_Hankaku,   Key_Touroku = Qt::Key_Touroku,   Key_Massyo = Qt::Key_Massyo,   Key_Kana_Lock = Qt::Key_Kana_Lock,   Key_Kana_Shift = Qt::Key_Kana_Shift,   Key_Eisu_Shift = Qt::Key_Eisu_Shift,   Key_Eisu_toggle = Qt::Key_Eisu_toggle,   Key_Hangul = Qt::Key_Hangul,   Key_Hangul_Start = Qt::Key_Hangul_Start,   Key_Hangul_End = Qt::Key_Hangul_End,   Key_Hangul_Hanja = Qt::Key_Hangul_Hanja,   Key_Hangul_Jamo = Qt::Key_Hangul_Jamo,   Key_Hangul_Romaja = Qt::Key_Hangul_Romaja,   Key_Hangul_Jeonja = Qt::Key_Hangul_Jeonja,   Key_Hangul_Banja = Qt::Key_Hangul_Banja,   Key_Hangul_PreHanja = Qt::Key_Hangul_PreHanja,   Key_Hangul_PostHanja = Qt::Key_Hangul_PostHanja,   Key_Hangul_Special = Qt::Key_Hangul_Special,   Key_Dead_Grave = Qt::Key_Dead_Grave,   Key_Dead_Acute = Qt::Key_Dead_Acute,   Key_Dead_Circumflex = Qt::Key_Dead_Circumflex,   Key_Dead_Tilde = Qt::Key_Dead_Tilde,   Key_Dead_Macron = Qt::Key_Dead_Macron,   Key_Dead_Breve = Qt::Key_Dead_Breve,   Key_Dead_Abovedot = Qt::Key_Dead_Abovedot,   Key_Dead_Diaeresis = Qt::Key_Dead_Diaeresis,   Key_Dead_Abovering = Qt::Key_Dead_Abovering,   Key_Dead_Doubleacute = Qt::Key_Dead_Doubleacute,   Key_Dead_Caron = Qt::Key_Dead_Caron,   Key_Dead_Cedilla = Qt::Key_Dead_Cedilla,   Key_Dead_Ogonek = Qt::Key_Dead_Ogonek,   Key_Dead_Iota = Qt::Key_Dead_Iota,   Key_Dead_Voiced_Sound = Qt::Key_Dead_Voiced_Sound,   Key_Dead_Semivoiced_Sound = Qt::Key_Dead_Semivoiced_Sound,   Key_Dead_Belowdot = Qt::Key_Dead_Belowdot,   Key_Dead_Hook = Qt::Key_Dead_Hook,   Key_Dead_Horn = Qt::Key_Dead_Horn,   Key_Dead_Stroke = Qt::Key_Dead_Stroke,   Key_Dead_Abovecomma = Qt::Key_Dead_Abovecomma,   Key_Dead_Abovereversedcomma = Qt::Key_Dead_Abovereversedcomma,   Key_Dead_Doublegrave = Qt::Key_Dead_Doublegrave,   Key_Dead_Belowring = Qt::Key_Dead_Belowring,   Key_Dead_Belowmacron = Qt::Key_Dead_Belowmacron,   Key_Dead_Belowcircumflex = Qt::Key_Dead_Belowcircumflex,   Key_Dead_Belowtilde = Qt::Key_Dead_Belowtilde,   Key_Dead_Belowbreve = Qt::Key_Dead_Belowbreve,   Key_Dead_Belowdiaeresis = Qt::Key_Dead_Belowdiaeresis,   Key_Dead_Invertedbreve = Qt::Key_Dead_Invertedbreve,   Key_Dead_Belowcomma = Qt::Key_Dead_Belowcomma,   Key_Dead_Currency = Qt::Key_Dead_Currency,   Key_Dead_a = Qt::Key_Dead_a,   Key_Dead_A = Qt::Key_Dead_A,   Key_Dead_e = Qt::Key_Dead_e,   Key_Dead_E = Qt::Key_Dead_E,   Key_Dead_i = Qt::Key_Dead_i,   Key_Dead_I = Qt::Key_Dead_I,   Key_Dead_o = Qt::Key_Dead_o,   Key_Dead_O = Qt::Key_Dead_O,   Key_Dead_u = Qt::Key_Dead_u,   Key_Dead_U = Qt::Key_Dead_U,   Key_Dead_Small_Schwa = Qt::Key_Dead_Small_Schwa,   Key_Dead_Capital_Schwa = Qt::Key_Dead_Capital_Schwa,   Key_Dead_Greek = Qt::Key_Dead_Greek,   Key_Dead_Lowline = Qt::Key_Dead_Lowline,   Key_Dead_Aboveverticalline = Qt::Key_Dead_Aboveverticalline,   Key_Dead_Belowverticalline = Qt::Key_Dead_Belowverticalline,   Key_Dead_Longsolidusoverlay = Qt::Key_Dead_Longsolidusoverlay,   Key_Back = Qt::Key_Back,   Key_Forward = Qt::Key_Forward,   Key_Stop = Qt::Key_Stop,   Key_Refresh = Qt::Key_Refresh,   Key_VolumeDown = Qt::Key_VolumeDown,   Key_VolumeMute = Qt::Key_VolumeMute,   Key_VolumeUp = Qt::Key_VolumeUp,   Key_BassBoost = Qt::Key_BassBoost,   Key_BassUp = Qt::Key_BassUp,   Key_BassDown = Qt::Key_BassDown,   Key_TrebleUp = Qt::Key_TrebleUp,   Key_TrebleDown = Qt::Key_TrebleDown,   Key_MediaPlay = Qt::Key_MediaPlay,   Key_MediaStop = Qt::Key_MediaStop,   Key_MediaPrevious = Qt::Key_MediaPrevious,   Key_MediaNext = Qt::Key_MediaNext,   Key_MediaRecord = Qt::Key_MediaRecord,   Key_MediaPause = Qt::Key_MediaPause,   Key_MediaTogglePlayPause = Qt::Key_MediaTogglePlayPause,   Key_HomePage = Qt::Key_HomePage,   Key_Favorites = Qt::Key_Favorites,   Key_Search = Qt::Key_Search,   Key_Standby = Qt::Key_Standby,   Key_OpenUrl = Qt::Key_OpenUrl,   Key_LaunchMail = Qt::Key_LaunchMail,   Key_LaunchMedia = Qt::Key_LaunchMedia,   Key_Launch0 = Qt::Key_Launch0,   Key_Launch1 = Qt::Key_Launch1,   Key_Launch2 = Qt::Key_Launch2,   Key_Launch3 = Qt::Key_Launch3,   Key_Launch4 = Qt::Key_Launch4,   Key_Launch5 = Qt::Key_Launch5,   Key_Launch6 = Qt::Key_Launch6,   Key_Launch7 = Qt::Key_Launch7,   Key_Launch8 = Qt::Key_Launch8,   Key_Launch9 = Qt::Key_Launch9,   Key_LaunchA = Qt::Key_LaunchA,   Key_LaunchB = Qt::Key_LaunchB,   Key_LaunchC = Qt::Key_LaunchC,   Key_LaunchD = Qt::Key_LaunchD,   Key_LaunchE = Qt::Key_LaunchE,   Key_LaunchF = Qt::Key_LaunchF,   Key_MonBrightnessUp = Qt::Key_MonBrightnessUp,   Key_MonBrightnessDown = Qt::Key_MonBrightnessDown,   Key_KeyboardLightOnOff = Qt::Key_KeyboardLightOnOff,   Key_KeyboardBrightnessUp = Qt::Key_KeyboardBrightnessUp,   Key_KeyboardBrightnessDown = Qt::Key_KeyboardBrightnessDown,   Key_PowerOff = Qt::Key_PowerOff,   Key_WakeUp = Qt::Key_WakeUp,   Key_Eject = Qt::Key_Eject,   Key_ScreenSaver = Qt::Key_ScreenSaver,   Key_WWW = Qt::Key_WWW,   Key_Memo = Qt::Key_Memo,   Key_LightBulb = Qt::Key_LightBulb,   Key_Shop = Qt::Key_Shop,   Key_History = Qt::Key_History,   Key_AddFavorite = Qt::Key_AddFavorite,   Key_HotLinks = Qt::Key_HotLinks,   Key_BrightnessAdjust = Qt::Key_BrightnessAdjust,   Key_Finance = Qt::Key_Finance,   Key_Community = Qt::Key_Community,   Key_AudioRewind = Qt::Key_AudioRewind,   Key_BackForward = Qt::Key_BackForward,   Key_ApplicationLeft = Qt::Key_ApplicationLeft,   Key_ApplicationRight = Qt::Key_ApplicationRight,   Key_Book = Qt::Key_Book,   Key_CD = Qt::Key_CD,   Key_Calculator = Qt::Key_Calculator,   Key_ToDoList = Qt::Key_ToDoList,   Key_ClearGrab = Qt::Key_ClearGrab,   Key_Close = Qt::Key_Close,   Key_Copy = Qt::Key_Copy,   Key_Cut = Qt::Key_Cut,   Key_Display = Qt::Key_Display,   Key_DOS = Qt::Key_DOS,   Key_Documents = Qt::Key_Documents,   Key_Excel = Qt::Key_Excel,   Key_Explorer = Qt::Key_Explorer,   Key_Game = Qt::Key_Game,   Key_Go = Qt::Key_Go,   Key_iTouch = Qt::Key_iTouch,   Key_LogOff = Qt::Key_LogOff,   Key_Market = Qt::Key_Market,   Key_Meeting = Qt::Key_Meeting,   Key_MenuKB = Qt::Key_MenuKB,   Key_MenuPB = Qt::Key_MenuPB,   Key_MySites = Qt::Key_MySites,   Key_News = Qt::Key_News,   Key_OfficeHome = Qt::Key_OfficeHome,   Key_Option = Qt::Key_Option,   Key_Paste = Qt::Key_Paste,   Key_Phone = Qt::Key_Phone,   Key_Calendar = Qt::Key_Calendar,   Key_Reply = Qt::Key_Reply,   Key_Reload = Qt::Key_Reload,   Key_RotateWindows = Qt::Key_RotateWindows,   Key_RotationPB = Qt::Key_RotationPB,   Key_RotationKB = Qt::Key_RotationKB,   Key_Save = Qt::Key_Save,   Key_Send = Qt::Key_Send,   Key_Spell = Qt::Key_Spell,   Key_SplitScreen = Qt::Key_SplitScreen,   Key_Support = Qt::Key_Support,   Key_TaskPane = Qt::Key_TaskPane,   Key_Terminal = Qt::Key_Terminal,   Key_Tools = Qt::Key_Tools,   Key_Travel = Qt::Key_Travel,   Key_Video = Qt::Key_Video,   Key_Word = Qt::Key_Word,   Key_Xfer = Qt::Key_Xfer,   Key_ZoomIn = Qt::Key_ZoomIn,   Key_ZoomOut = Qt::Key_ZoomOut,   Key_Away = Qt::Key_Away,   Key_Messenger = Qt::Key_Messenger,   Key_WebCam = Qt::Key_WebCam,   Key_MailForward = Qt::Key_MailForward,   Key_Pictures = Qt::Key_Pictures,   Key_Music = Qt::Key_Music,   Key_Battery = Qt::Key_Battery,   Key_Bluetooth = Qt::Key_Bluetooth,   Key_WLAN = Qt::Key_WLAN,   Key_UWB = Qt::Key_UWB,   Key_AudioForward = Qt::Key_AudioForward,   Key_AudioRepeat = Qt::Key_AudioRepeat,   Key_AudioRandomPlay = Qt::Key_AudioRandomPlay,   Key_Subtitle = Qt::Key_Subtitle,   Key_AudioCycleTrack = Qt::Key_AudioCycleTrack,   Key_Time = Qt::Key_Time,   Key_Hibernate = Qt::Key_Hibernate,   Key_View = Qt::Key_View,   Key_TopMenu = Qt::Key_TopMenu,   Key_PowerDown = Qt::Key_PowerDown,   Key_Suspend = Qt::Key_Suspend,   Key_ContrastAdjust = Qt::Key_ContrastAdjust,   Key_LaunchG = Qt::Key_LaunchG,   Key_LaunchH = Qt::Key_LaunchH,   Key_TouchpadToggle = Qt::Key_TouchpadToggle,   Key_TouchpadOn = Qt::Key_TouchpadOn,   Key_TouchpadOff = Qt::Key_TouchpadOff,   Key_MicMute = Qt::Key_MicMute,   Key_Red = Qt::Key_Red,   Key_Green = Qt::Key_Green,   Key_Yellow = Qt::Key_Yellow,   Key_Blue = Qt::Key_Blue,   Key_ChannelUp = Qt::Key_ChannelUp,   Key_ChannelDown = Qt::Key_ChannelDown,   Key_Guide = Qt::Key_Guide,   Key_Info = Qt::Key_Info,   Key_Settings = Qt::Key_Settings,   Key_MicVolumeUp = Qt::Key_MicVolumeUp,   Key_MicVolumeDown = Qt::Key_MicVolumeDown,   Key_Keyboard = Qt::Key_Keyboard,   Key_New = Qt::Key_New,   Key_Open = Qt::Key_Open,   Key_Find = Qt::Key_Find,   Key_Undo = Qt::Key_Undo,   Key_Redo = Qt::Key_Redo,   Key_MediaLast = Qt::Key_MediaLast,   Key_Select = Qt::Key_Select,   Key_Yes = Qt::Key_Yes,   Key_No = Qt::Key_No,   Key_Cancel = Qt::Key_Cancel,   Key_Printer = Qt::Key_Printer,   Key_Execute = Qt::Key_Execute,   Key_Sleep = Qt::Key_Sleep,   Key_Play = Qt::Key_Play,   Key_Zoom = Qt::Key_Zoom,   Key_Exit = Qt::Key_Exit,   Key_Context1 = Qt::Key_Context1,   Key_Context2 = Qt::Key_Context2,   Key_Context3 = Qt::Key_Context3,   Key_Context4 = Qt::Key_Context4,   Key_Call = Qt::Key_Call,   Key_Hangup = Qt::Key_Hangup,   Key_Flip = Qt::Key_Flip,   Key_ToggleCallHangup = Qt::Key_ToggleCallHangup,   Key_VoiceDial = Qt::Key_VoiceDial,   Key_LastNumberRedial = Qt::Key_LastNumberRedial,   Key_Camera = Qt::Key_Camera,   Key_CameraFocus = Qt::Key_CameraFocus,   Key_unknown = Qt::Key_unknown};
enum KeyboardModifier{
  NoModifier = Qt::NoModifier,   ShiftModifier = Qt::ShiftModifier,   ControlModifier = Qt::ControlModifier,   AltModifier = Qt::AltModifier,   MetaModifier = Qt::MetaModifier,   KeypadModifier = Qt::KeypadModifier,   GroupSwitchModifier = Qt::GroupSwitchModifier,   KeyboardModifierMask = Qt::KeyboardModifierMask};
enum LayoutDirection{
  LeftToRight = Qt::LeftToRight,   RightToLeft = Qt::RightToLeft,   LayoutDirectionAuto = Qt::LayoutDirectionAuto};
enum MaskMode{
  MaskInColor = Qt::MaskInColor,   MaskOutColor = Qt::MaskOutColor};
enum MatchFlag{
  MatchExactly = Qt::MatchExactly,   MatchContains = Qt::MatchContains,   MatchStartsWith = Qt::MatchStartsWith,   MatchEndsWith = Qt::MatchEndsWith,   MatchRegularExpression = Qt::MatchRegularExpression,   MatchWildcard = Qt::MatchWildcard,   MatchFixedString = Qt::MatchFixedString,   MatchTypeMask = Qt::MatchTypeMask,   MatchCaseSensitive = Qt::MatchCaseSensitive,   MatchWrap = Qt::MatchWrap,   MatchRecursive = Qt::MatchRecursive};
enum MouseButton{
  NoButton = Qt::NoButton,   LeftButton = Qt::LeftButton,   RightButton = Qt::RightButton,   MiddleButton = Qt::MiddleButton,   BackButton = Qt::BackButton,   XButton1 = Qt::XButton1,   ExtraButton1 = Qt::ExtraButton1,   ForwardButton = Qt::ForwardButton,   XButton2 = Qt::XButton2,   ExtraButton2 = Qt::ExtraButton2,   TaskButton = Qt::TaskButton,   ExtraButton3 = Qt::ExtraButton3,   ExtraButton4 = Qt::ExtraButton4,   ExtraButton5 = Qt::ExtraButton5,   ExtraButton6 = Qt::ExtraButton6,   ExtraButton7 = Qt::ExtraButton7,   ExtraButton8 = Qt::ExtraButton8,   ExtraButton9 = Qt::ExtraButton9,   ExtraButton10 = Qt::ExtraButton10,   ExtraButton11 = Qt::ExtraButton11,   ExtraButton12 = Qt::ExtraButton12,   ExtraButton13 = Qt::ExtraButton13,   ExtraButton14 = Qt::ExtraButton14,   ExtraButton15 = Qt::ExtraButton15,   ExtraButton16 = Qt::ExtraButton16,   ExtraButton17 = Qt::ExtraButton17,   ExtraButton18 = Qt::ExtraButton18,   ExtraButton19 = Qt::ExtraButton19,   ExtraButton20 = Qt::ExtraButton20,   ExtraButton21 = Qt::ExtraButton21,   ExtraButton22 = Qt::ExtraButton22,   ExtraButton23 = Qt::ExtraButton23,   ExtraButton24 = Qt::ExtraButton24,   AllButtons = Qt::AllButtons,   MaxMouseButton = Qt::MaxMouseButton,   MouseButtonMask = Qt::MouseButtonMask};
enum MouseEventFlag{
  NoMouseEventFlag = Qt::NoMouseEventFlag,   MouseEventCreatedDoubleClick = Qt::MouseEventCreatedDoubleClick,   MouseEventFlagMask = Qt::MouseEventFlagMask};
enum MouseEventSource{
  MouseEventNotSynthesized = Qt::MouseEventNotSynthesized,   MouseEventSynthesizedBySystem = Qt::MouseEventSynthesizedBySystem,   MouseEventSynthesizedByQt = Qt::MouseEventSynthesizedByQt,   MouseEventSynthesizedByApplication = Qt::MouseEventSynthesizedByApplication};
enum NativeGestureType{
  BeginNativeGesture = Qt::BeginNativeGesture,   EndNativeGesture = Qt::EndNativeGesture,   PanNativeGesture = Qt::PanNativeGesture,   ZoomNativeGesture = Qt::ZoomNativeGesture,   SmartZoomNativeGesture = Qt::SmartZoomNativeGesture,   RotateNativeGesture = Qt::RotateNativeGesture,   SwipeNativeGesture = Qt::SwipeNativeGesture};
enum NavigationMode{
  NavigationModeNone = Qt::NavigationModeNone,   NavigationModeKeypadTabOrder = Qt::NavigationModeKeypadTabOrder,   NavigationModeKeypadDirectional = Qt::NavigationModeKeypadDirectional,   NavigationModeCursorAuto = Qt::NavigationModeCursorAuto,   NavigationModeCursorForceVisible = Qt::NavigationModeCursorForceVisible};
enum Orientation{
  Horizontal = Qt::Horizontal,   Vertical = Qt::Vertical};
enum PenCapStyle{
  FlatCap = Qt::FlatCap,   SquareCap = Qt::SquareCap,   RoundCap = Qt::RoundCap,   MPenCapStyle = Qt::MPenCapStyle};
enum PenJoinStyle{
  MiterJoin = Qt::MiterJoin,   BevelJoin = Qt::BevelJoin,   RoundJoin = Qt::RoundJoin,   SvgMiterJoin = Qt::SvgMiterJoin,   MPenJoinStyle = Qt::MPenJoinStyle};
enum PenStyle{
  NoPen = Qt::NoPen,   SolidLine = Qt::SolidLine,   DashLine = Qt::DashLine,   DotLine = Qt::DotLine,   DashDotLine = Qt::DashDotLine,   DashDotDotLine = Qt::DashDotDotLine,   CustomDashLine = Qt::CustomDashLine,   MPenStyle = Qt::MPenStyle};
enum ScreenOrientation{
  PrimaryOrientation = Qt::PrimaryOrientation,   PortraitOrientation = Qt::PortraitOrientation,   LandscapeOrientation = Qt::LandscapeOrientation,   InvertedPortraitOrientation = Qt::InvertedPortraitOrientation,   InvertedLandscapeOrientation = Qt::InvertedLandscapeOrientation};
enum ScrollBarPolicy{
  ScrollBarAsNeeded = Qt::ScrollBarAsNeeded,   ScrollBarAlwaysOff = Qt::ScrollBarAlwaysOff,   ScrollBarAlwaysOn = Qt::ScrollBarAlwaysOn};
enum ScrollPhase{
  NoScrollPhase = Qt::NoScrollPhase,   ScrollBegin = Qt::ScrollBegin,   ScrollUpdate = Qt::ScrollUpdate,   ScrollEnd = Qt::ScrollEnd,   ScrollMomentum = Qt::ScrollMomentum};
enum ShortcutContext{
  WidgetShortcut = Qt::WidgetShortcut,   WindowShortcut = Qt::WindowShortcut,   ApplicationShortcut = Qt::ApplicationShortcut,   WidgetWithChildrenShortcut = Qt::WidgetWithChildrenShortcut};
enum SizeHint{
  MinimumSize = Qt::MinimumSize,   PreferredSize = Qt::PreferredSize,   MaximumSize = Qt::MaximumSize,   MinimumDescent = Qt::MinimumDescent,   NSizeHints = Qt::NSizeHints};
enum SizeMode{
  AbsoluteSize = Qt::AbsoluteSize,   RelativeSize = Qt::RelativeSize};
enum SortOrder{
  AscendingOrder = Qt::AscendingOrder,   DescendingOrder = Qt::DescendingOrder};
enum SplitBehaviorFlags{
  KeepEmptyParts = Qt::KeepEmptyParts,   SkipEmptyParts = Qt::SkipEmptyParts};
enum TabFocusBehavior{
  NoTabFocus = Qt::NoTabFocus,   TabFocusTextControls = Qt::TabFocusTextControls,   TabFocusListControls = Qt::TabFocusListControls,   TabFocusAllControls = Qt::TabFocusAllControls};
enum TextElideMode{
  ElideLeft = Qt::ElideLeft,   ElideRight = Qt::ElideRight,   ElideMiddle = Qt::ElideMiddle,   ElideNone = Qt::ElideNone};
enum TextFlag{
  TextSingleLine = Qt::TextSingleLine,   TextDontClip = Qt::TextDontClip,   TextExpandTabs = Qt::TextExpandTabs,   TextShowMnemonic = Qt::TextShowMnemonic,   TextWordWrap = Qt::TextWordWrap,   TextWrapAnywhere = Qt::TextWrapAnywhere,   TextDontPrint = Qt::TextDontPrint,   TextIncludeTrailingSpaces = Qt::TextIncludeTrailingSpaces,   TextHideMnemonic = Qt::TextHideMnemonic,   TextJustificationForced = Qt::TextJustificationForced,   TextForceLeftToRight = Qt::TextForceLeftToRight,   TextForceRightToLeft = Qt::TextForceRightToLeft,   TextLongestVariant = Qt::TextLongestVariant};
enum TextFormat{
  PlainText = Qt::PlainText,   RichText = Qt::RichText,   AutoText = Qt::AutoText,   MarkdownText = Qt::MarkdownText};
enum TextInteractionFlag{
  NoTextInteraction = Qt::NoTextInteraction,   TextSelectableByMouse = Qt::TextSelectableByMouse,   TextSelectableByKeyboard = Qt::TextSelectableByKeyboard,   LinksAccessibleByMouse = Qt::LinksAccessibleByMouse,   LinksAccessibleByKeyboard = Qt::LinksAccessibleByKeyboard,   TextEditable = Qt::TextEditable,   TextEditorInteraction = Qt::TextEditorInteraction,   TextBrowserInteraction = Qt::TextBrowserInteraction};
enum TileRule{
  StretchTile = Qt::StretchTile,   RepeatTile = Qt::RepeatTile,   RoundTile = Qt::RoundTile};
enum TimeSpec{
  LocalTime = Qt::LocalTime,   UTC = Qt::UTC,   OffsetFromUTC = Qt::OffsetFromUTC,   TimeZone = Qt::TimeZone};
enum class TimerId{
  Invalid = static_cast<int>(Qt::TimerId::Invalid)};
enum TimerType{
  PreciseTimer = Qt::PreciseTimer,   CoarseTimer = Qt::CoarseTimer,   VeryCoarseTimer = Qt::VeryCoarseTimer};
enum ToolBarArea{
  LeftToolBarArea = Qt::LeftToolBarArea,   RightToolBarArea = Qt::RightToolBarArea,   TopToolBarArea = Qt::TopToolBarArea,   BottomToolBarArea = Qt::BottomToolBarArea,   ToolBarArea_Mask = Qt::ToolBarArea_Mask,   AllToolBarAreas = Qt::AllToolBarAreas,   NoToolBarArea = Qt::NoToolBarArea};
enum ToolBarAreaSizes{
  NToolBarAreas = Qt::NToolBarAreas};
enum ToolButtonStyle{
  ToolButtonIconOnly = Qt::ToolButtonIconOnly,   ToolButtonTextOnly = Qt::ToolButtonTextOnly,   ToolButtonTextBesideIcon = Qt::ToolButtonTextBesideIcon,   ToolButtonTextUnderIcon = Qt::ToolButtonTextUnderIcon,   ToolButtonFollowStyle = Qt::ToolButtonFollowStyle};
enum TouchPointState{
  TouchPointUnknownState = Qt::TouchPointUnknownState,   TouchPointPressed = Qt::TouchPointPressed,   TouchPointMoved = Qt::TouchPointMoved,   TouchPointStationary = Qt::TouchPointStationary,   TouchPointReleased = Qt::TouchPointReleased};
enum TransformationMode{
  FastTransformation = Qt::FastTransformation,   SmoothTransformation = Qt::SmoothTransformation};
enum UIEffect{
  UI_General = Qt::UI_General,   UI_AnimateMenu = Qt::UI_AnimateMenu,   UI_FadeMenu = Qt::UI_FadeMenu,   UI_AnimateCombo = Qt::UI_AnimateCombo,   UI_AnimateTooltip = Qt::UI_AnimateTooltip,   UI_FadeTooltip = Qt::UI_FadeTooltip,   UI_AnimateToolBox = Qt::UI_AnimateToolBox};
enum WhiteSpaceMode{
  WhiteSpaceNormal = Qt::WhiteSpaceNormal,   WhiteSpacePre = Qt::WhiteSpacePre,   WhiteSpaceNoWrap = Qt::WhiteSpaceNoWrap,   WhiteSpaceModeUndefined = Qt::WhiteSpaceModeUndefined};
enum WidgetAttribute{
  WA_Disabled = Qt::WA_Disabled,   WA_UnderMouse = Qt::WA_UnderMouse,   WA_MouseTracking = Qt::WA_MouseTracking,   WA_OpaquePaintEvent = Qt::WA_OpaquePaintEvent,   WA_StaticContents = Qt::WA_StaticContents,   WA_LaidOut = Qt::WA_LaidOut,   WA_PaintOnScreen = Qt::WA_PaintOnScreen,   WA_NoSystemBackground = Qt::WA_NoSystemBackground,   WA_UpdatesDisabled = Qt::WA_UpdatesDisabled,   WA_Mapped = Qt::WA_Mapped,   WA_InputMethodEnabled = Qt::WA_InputMethodEnabled,   WA_WState_Visible = Qt::WA_WState_Visible,   WA_WState_Hidden = Qt::WA_WState_Hidden,   WA_ForceDisabled = Qt::WA_ForceDisabled,   WA_KeyCompression = Qt::WA_KeyCompression,   WA_PendingMoveEvent = Qt::WA_PendingMoveEvent,   WA_PendingResizeEvent = Qt::WA_PendingResizeEvent,   WA_SetPalette = Qt::WA_SetPalette,   WA_SetFont = Qt::WA_SetFont,   WA_SetCursor = Qt::WA_SetCursor,   WA_NoChildEventsFromChildren = Qt::WA_NoChildEventsFromChildren,   WA_WindowModified = Qt::WA_WindowModified,   WA_Resized = Qt::WA_Resized,   WA_Moved = Qt::WA_Moved,   WA_PendingUpdate = Qt::WA_PendingUpdate,   WA_InvalidSize = Qt::WA_InvalidSize,   WA_CustomWhatsThis = Qt::WA_CustomWhatsThis,   WA_LayoutOnEntireRect = Qt::WA_LayoutOnEntireRect,   WA_OutsideWSRange = Qt::WA_OutsideWSRange,   WA_GrabbedShortcut = Qt::WA_GrabbedShortcut,   WA_TransparentForMouseEvents = Qt::WA_TransparentForMouseEvents,   WA_PaintUnclipped = Qt::WA_PaintUnclipped,   WA_SetWindowIcon = Qt::WA_SetWindowIcon,   WA_NoMouseReplay = Qt::WA_NoMouseReplay,   WA_DeleteOnClose = Qt::WA_DeleteOnClose,   WA_RightToLeft = Qt::WA_RightToLeft,   WA_SetLayoutDirection = Qt::WA_SetLayoutDirection,   WA_NoChildEventsForParent = Qt::WA_NoChildEventsForParent,   WA_ForceUpdatesDisabled = Qt::WA_ForceUpdatesDisabled,   WA_WState_Created = Qt::WA_WState_Created,   WA_WState_CompressKeys = Qt::WA_WState_CompressKeys,   WA_WState_InPaintEvent = Qt::WA_WState_InPaintEvent,   WA_WState_Reparented = Qt::WA_WState_Reparented,   WA_WState_ConfigPending = Qt::WA_WState_ConfigPending,   WA_WState_Polished = Qt::WA_WState_Polished,   WA_WState_OwnSizePolicy = Qt::WA_WState_OwnSizePolicy,   WA_WState_ExplicitShowHide = Qt::WA_WState_ExplicitShowHide,   WA_ShowModal = Qt::WA_ShowModal,   WA_MouseNoMask = Qt::WA_MouseNoMask,   WA_NoMousePropagation = Qt::WA_NoMousePropagation,   WA_Hover = Qt::WA_Hover,   WA_InputMethodTransparent = Qt::WA_InputMethodTransparent,   WA_QuitOnClose = Qt::WA_QuitOnClose,   WA_KeyboardFocusChange = Qt::WA_KeyboardFocusChange,   WA_AcceptDrops = Qt::WA_AcceptDrops,   WA_DropSiteRegistered = Qt::WA_DropSiteRegistered,   WA_WindowPropagation = Qt::WA_WindowPropagation,   WA_NoX11EventCompression = Qt::WA_NoX11EventCompression,   WA_TintedBackground = Qt::WA_TintedBackground,   WA_X11OpenGLOverlay = Qt::WA_X11OpenGLOverlay,   WA_AlwaysShowToolTips = Qt::WA_AlwaysShowToolTips,   WA_MacOpaqueSizeGrip = Qt::WA_MacOpaqueSizeGrip,   WA_SetStyle = Qt::WA_SetStyle,   WA_SetLocale = Qt::WA_SetLocale,   WA_MacShowFocusRect = Qt::WA_MacShowFocusRect,   WA_MacNormalSize = Qt::WA_MacNormalSize,   WA_MacSmallSize = Qt::WA_MacSmallSize,   WA_MacMiniSize = Qt::WA_MacMiniSize,   WA_LayoutUsesWidgetRect = Qt::WA_LayoutUsesWidgetRect,   WA_StyledBackground = Qt::WA_StyledBackground,   WA_CanHostQMdiSubWindowTitleBar = Qt::WA_CanHostQMdiSubWindowTitleBar,   WA_MacAlwaysShowToolWindow = Qt::WA_MacAlwaysShowToolWindow,   WA_StyleSheet = Qt::WA_StyleSheet,   WA_ShowWithoutActivating = Qt::WA_ShowWithoutActivating,   WA_X11BypassTransientForHint = Qt::WA_X11BypassTransientForHint,   WA_NativeWindow = Qt::WA_NativeWindow,   WA_DontCreateNativeAncestors = Qt::WA_DontCreateNativeAncestors,   WA_DontShowOnScreen = Qt::WA_DontShowOnScreen,   WA_X11NetWmWindowTypeDesktop = Qt::WA_X11NetWmWindowTypeDesktop,   WA_X11NetWmWindowTypeDock = Qt::WA_X11NetWmWindowTypeDock,   WA_X11NetWmWindowTypeToolBar = Qt::WA_X11NetWmWindowTypeToolBar,   WA_X11NetWmWindowTypeMenu = Qt::WA_X11NetWmWindowTypeMenu,   WA_X11NetWmWindowTypeUtility = Qt::WA_X11NetWmWindowTypeUtility,   WA_X11NetWmWindowTypeSplash = Qt::WA_X11NetWmWindowTypeSplash,   WA_X11NetWmWindowTypeDialog = Qt::WA_X11NetWmWindowTypeDialog,   WA_X11NetWmWindowTypeDropDownMenu = Qt::WA_X11NetWmWindowTypeDropDownMenu,   WA_X11NetWmWindowTypePopupMenu = Qt::WA_X11NetWmWindowTypePopupMenu,   WA_X11NetWmWindowTypeToolTip = Qt::WA_X11NetWmWindowTypeToolTip,   WA_X11NetWmWindowTypeNotification = Qt::WA_X11NetWmWindowTypeNotification,   WA_X11NetWmWindowTypeCombo = Qt::WA_X11NetWmWindowTypeCombo,   WA_X11NetWmWindowTypeDND = Qt::WA_X11NetWmWindowTypeDND,   WA_SetWindowModality = Qt::WA_SetWindowModality,   WA_WState_WindowOpacitySet = Qt::WA_WState_WindowOpacitySet,   WA_TranslucentBackground = Qt::WA_TranslucentBackground,   WA_AcceptTouchEvents = Qt::WA_AcceptTouchEvents,   WA_WState_AcceptedTouchBeginEvent = Qt::WA_WState_AcceptedTouchBeginEvent,   WA_TouchPadAcceptSingleTouchEvents = Qt::WA_TouchPadAcceptSingleTouchEvents,   WA_X11DoNotAcceptFocus = Qt::WA_X11DoNotAcceptFocus,   WA_AlwaysStackOnTop = Qt::WA_AlwaysStackOnTop,   WA_TabletTracking = Qt::WA_TabletTracking,   WA_ContentsMarginsRespectsSafeArea = Qt::WA_ContentsMarginsRespectsSafeArea,   WA_StyleSheetTarget = Qt::WA_StyleSheetTarget,   WA_AttributeCount = Qt::WA_AttributeCount};
enum WindowFrameSection{
  NoSection = Qt::NoSection,   LeftSection = Qt::LeftSection,   TopLeftSection = Qt::TopLeftSection,   TopSection = Qt::TopSection,   TopRightSection = Qt::TopRightSection,   RightSection = Qt::RightSection,   BottomRightSection = Qt::BottomRightSection,   BottomSection = Qt::BottomSection,   BottomLeftSection = Qt::BottomLeftSection,   TitleBarArea = Qt::TitleBarArea};
enum WindowModality{
  NonModal = Qt::NonModal,   WindowModal = Qt::WindowModal,   ApplicationModal = Qt::ApplicationModal};
enum WindowState{
  WindowNoState = Qt::WindowNoState,   WindowMinimized = Qt::WindowMinimized,   WindowMaximized = Qt::WindowMaximized,   WindowFullScreen = Qt::WindowFullScreen,   WindowActive = Qt::WindowActive};
enum WindowType{
  Widget = Qt::Widget,   Window = Qt::Window,   Dialog = Qt::Dialog,   Sheet = Qt::Sheet,   Drawer = Qt::Drawer,   Popup = Qt::Popup,   Tool = Qt::Tool,   ToolTip = Qt::ToolTip,   SplashScreen = Qt::SplashScreen,   Desktop = Qt::Desktop,   SubWindow = Qt::SubWindow,   ForeignWindow = Qt::ForeignWindow,   CoverWindow = Qt::CoverWindow,   WindowType_Mask = Qt::WindowType_Mask,   MSWindowsFixedSizeDialogHint = Qt::MSWindowsFixedSizeDialogHint,   MSWindowsOwnDC = Qt::MSWindowsOwnDC,   BypassWindowManagerHint = Qt::BypassWindowManagerHint,   X11BypassWindowManagerHint = Qt::X11BypassWindowManagerHint,   FramelessWindowHint = Qt::FramelessWindowHint,   WindowTitleHint = Qt::WindowTitleHint,   WindowSystemMenuHint = Qt::WindowSystemMenuHint,   WindowMinimizeButtonHint = Qt::WindowMinimizeButtonHint,   WindowMaximizeButtonHint = Qt::WindowMaximizeButtonHint,   WindowMinMaxButtonsHint = Qt::WindowMinMaxButtonsHint,   WindowContextHelpButtonHint = Qt::WindowContextHelpButtonHint,   WindowShadeButtonHint = Qt::WindowShadeButtonHint,   WindowStaysOnTopHint = Qt::WindowStaysOnTopHint,   WindowTransparentForInput = Qt::WindowTransparentForInput,   WindowOverridesSystemGestures = Qt::WindowOverridesSystemGestures,   WindowDoesNotAcceptFocus = Qt::WindowDoesNotAcceptFocus,   MaximizeUsingFullscreenGeometryHint = Qt::MaximizeUsingFullscreenGeometryHint,   ExpandedClientAreaHint = Qt::ExpandedClientAreaHint,   NoTitleBarBackgroundHint = Qt::NoTitleBarBackgroundHint,   CustomizeWindowHint = Qt::CustomizeWindowHint,   WindowStaysOnBottomHint = Qt::WindowStaysOnBottomHint,   WindowCloseButtonHint = Qt::WindowCloseButtonHint,   MacWindowToolBarButtonHint = Qt::MacWindowToolBarButtonHint,   BypassGraphicsProxyWidget = Qt::BypassGraphicsProxyWidget,   NoDropShadowWindowHint = Qt::NoDropShadowWindowHint,   WindowFullscreenButtonHint = Qt::WindowFullscreenButtonHint};
Q_DECLARE_FLAGS(Alignment, AlignmentFlag)
Q_DECLARE_FLAGS(DockWidgetAreas, DockWidgetArea)
Q_DECLARE_FLAGS(DropActions, DropAction)
Q_DECLARE_FLAGS(FindChildOptions, FindChildOption)
Q_DECLARE_FLAGS(GestureFlags, GestureFlag)
Q_DECLARE_FLAGS(ImageConversionFlags, ImageConversionFlag)
Q_DECLARE_FLAGS(InputMethodHints, InputMethodHint)
Q_DECLARE_FLAGS(InputMethodQueries, InputMethodQuery)
Q_DECLARE_FLAGS(ItemFlags, ItemFlag)
Q_DECLARE_FLAGS(KeyboardModifiers, KeyboardModifier)
Q_DECLARE_FLAGS(MatchFlags, MatchFlag)
Q_DECLARE_FLAGS(MouseButtons, MouseButton)
Q_DECLARE_FLAGS(MouseEventFlags, MouseEventFlag)
Q_DECLARE_FLAGS(Orientations, Orientation)
Q_DECLARE_FLAGS(ScreenOrientations, ScreenOrientation)
Q_DECLARE_FLAGS(SplitBehavior, SplitBehaviorFlags)
Q_DECLARE_FLAGS(TextInteractionFlags, TextInteractionFlag)
Q_DECLARE_FLAGS(ToolBarAreas, ToolBarArea)
Q_DECLARE_FLAGS(TouchPointStates, TouchPointState)
Q_DECLARE_FLAGS(WindowStates, WindowState)
Q_DECLARE_FLAGS(WindowFlags, WindowType)
public Q_SLOTS:
   void static_Qt_beginPropertyUpdateGroup();
   QTextStream*  static_Qt_bin(QTextStream&  s);
   QTextStream*  static_Qt_bom(QTextStream&  s);
   QTextStream*  static_Qt_center(QTextStream&  s);
   QString  static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode = Qt::WhiteSpacePre);
   QTextStream*  static_Qt_dec(QTextStream&  s);
   void static_Qt_endPropertyUpdateGroup();
   QTextStream*  static_Qt_endl(QTextStream&  s);
   QTextStream*  static_Qt_fixed(QTextStream&  s);
   QTextStream*  static_Qt_flush(QTextStream&  s);
   QTextStream*  static_Qt_forcepoint(QTextStream&  s);
   QTextStream*  static_Qt_forcesign(QTextStream&  s);
   QTextStream*  static_Qt_hex(QTextStream&  s);
   QTextStream*  static_Qt_left(QTextStream&  s);
   QTextStream*  static_Qt_lowercasebase(QTextStream&  s);
   QTextStream*  static_Qt_lowercasedigits(QTextStream&  s);
   bool  static_Qt_mightBeRichText(QAnyStringView  arg__1);
   QTextStream*  static_Qt_noforcepoint(QTextStream&  s);
   QTextStream*  static_Qt_noforcesign(QTextStream&  s);
   QTextStream*  static_Qt_noshowbase(QTextStream&  s);
   QTextStream*  static_Qt_oct(QTextStream&  s);
   QTextStream*  static_Qt_reset(QTextStream&  s);
   QTextStream*  static_Qt_right(QTextStream&  s);
   QTextStream*  static_Qt_scientific(QTextStream&  s);
   QTextStream*  static_Qt_showbase(QTextStream&  s);
   QTextStream*  static_Qt_uppercasebase(QTextStream&  s);
   QTextStream*  static_Qt_uppercasedigits(QTextStream&  s);
   QTextStream*  static_Qt_ws(QTextStream&  s);
};


