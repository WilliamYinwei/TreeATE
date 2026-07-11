#include <PythonQt.h>
#include <QBrush>
#include <QObject>
#include <QPixmap>
#include <QStringList>
#include <QVariant>
#include <QtWidgets/qsizepolicy.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcolorspace.h>
#include <qcolortransform.h>
#include <qcontainerfwd.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qline.h>
#include <qlist.h>
#include <qmatrix4x4.h>
#include <qnamespace.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixelformat.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qquaternion.h>
#include <qrect.h>
#include <qregion.h>
#include <qrgba64.h>
#include <qscreen.h>
#include <qsize.h>
#include <qtextformat.h>
#include <qtransform.h>
#include <qvectornd.h>
#include <qwindow.h>



class PythonQtShell_QBitmap : public QBitmap
{
public:
    PythonQtShell_QBitmap():QBitmap(),_wrapper(nullptr) {};
    PythonQtShell_QBitmap(const QPixmap&  arg__1):QBitmap(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QBitmap(const QSize&  arg__1):QBitmap(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QBitmap(const QString&  fileName, const char*  format = nullptr):QBitmap(fileName, format),_wrapper(nullptr) {};
    PythonQtShell_QBitmap(int  w, int  h):QBitmap(w, h),_wrapper(nullptr) {};

   ~PythonQtShell_QBitmap() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QBitmap : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QBitmap* new_QBitmap();
QBitmap* new_QBitmap(const QPixmap&  arg__1);
QBitmap* new_QBitmap(const QSize&  arg__1);
QBitmap* new_QBitmap(const QString&  fileName, const char*  format = nullptr);
QBitmap* new_QBitmap(int  w, int  h);
QBitmap* new_QBitmap(const QBitmap& other) {
PythonQtShell_QBitmap* a = new PythonQtShell_QBitmap();
*((QBitmap*)a) = other;
return a; }
void delete_QBitmap(QBitmap* obj) { delete obj; }
   void clear(QBitmap* theWrappedObject);
   QBitmap  static_QBitmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QBitmap  static_QBitmap_fromPixmap(const QPixmap&  pixmap);
   void swap(QBitmap* theWrappedObject, QBitmap&  other);
   QBitmap  transformed(QBitmap* theWrappedObject, const QTransform&  matrix) const;
    bool __nonzero__(QBitmap* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QBrush : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QBrush* new_QBrush();
QBrush* new_QBrush(Qt::BrushStyle  bs);
QBrush* new_QBrush(Qt::GlobalColor  color, const QPixmap&  pixmap);
QBrush* new_QBrush(const QBrush&  brush);
QBrush* new_QBrush(const QColor&  color, Qt::BrushStyle  bs = Qt::SolidPattern);
QBrush* new_QBrush(const QColor&  color, const QPixmap&  pixmap);
QBrush* new_QBrush(const QGradient&  gradient);
QBrush* new_QBrush(const QImage&  image);
QBrush* new_QBrush(const QPixmap&  pixmap);
void delete_QBrush(QBrush* obj) { delete obj; }
   const QColor*  color(QBrush* theWrappedObject) const;
   const QGradient*  gradient(QBrush* theWrappedObject) const;
   bool  isOpaque(QBrush* theWrappedObject) const;
   bool  __ne__(QBrush* theWrappedObject, const QBrush&  b) const;
   bool  __ne__(QBrush* theWrappedObject, const QColor&  rhs);
   void writeTo(QBrush* theWrappedObject, QDataStream&  arg__1);
   QBrush*  operator_assign(QBrush* theWrappedObject, QColor  color);
   QBrush*  operator_assign(QBrush* theWrappedObject, Qt::BrushStyle  style);
   QBrush*  operator_assign(QBrush* theWrappedObject, Qt::GlobalColor  color);
   bool  __eq__(QBrush* theWrappedObject, const QBrush&  b) const;
   bool  __eq__(QBrush* theWrappedObject, const QColor&  rhs);
   void readFrom(QBrush* theWrappedObject, QDataStream&  arg__1);
   void setColor(QBrush* theWrappedObject, Qt::GlobalColor  color);
   void setColor(QBrush* theWrappedObject, const QColor&  color);
   void setStyle(QBrush* theWrappedObject, Qt::BrushStyle  arg__1);
   void setTexture(QBrush* theWrappedObject, const QPixmap&  pixmap);
   void setTextureImage(QBrush* theWrappedObject, const QImage&  image);
   void setTransform(QBrush* theWrappedObject, const QTransform&  arg__1);
   Qt::BrushStyle  style(QBrush* theWrappedObject) const;
   void swap(QBrush* theWrappedObject, QBrush&  other);
   QPixmap  texture(QBrush* theWrappedObject) const;
   QImage  textureImage(QBrush* theWrappedObject) const;
   QTransform  transform(QBrush* theWrappedObject) const;
    QString py_toString(QBrush*);
};





class PythonQtWrapper_QColor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NameFormat Spec )
enum NameFormat{
  HexRgb = QColor::HexRgb,   HexArgb = QColor::HexArgb};
enum Spec{
  Invalid = QColor::Invalid,   Rgb = QColor::Rgb,   Hsv = QColor::Hsv,   Cmyk = QColor::Cmyk,   Hsl = QColor::Hsl,   ExtendedRgb = QColor::ExtendedRgb};
public Q_SLOTS:
QColor* new_QColor();
QColor* new_QColor(QRgba64  rgba64);
QColor* new_QColor(Qt::GlobalColor  color);
QColor* new_QColor(const QString&  name);
QColor* new_QColor(int  r, int  g, int  b, int  a = 255);
QColor* new_QColor(unsigned int  rgb);
QColor* new_QColor(const QColor& other) {
QColor* a = new QColor();
*((QColor*)a) = other;
return a; }
void delete_QColor(QColor* obj) { delete obj; }
   int  alpha(QColor* theWrappedObject) const;
   float  alphaF(QColor* theWrappedObject) const;
   int  black(QColor* theWrappedObject) const;
   float  blackF(QColor* theWrappedObject) const;
   int  blue(QColor* theWrappedObject) const;
   float  blueF(QColor* theWrappedObject) const;
   QStringList  static_QColor_colorNames();
   QColor  convertTo(QColor* theWrappedObject, QColor::Spec  colorSpec) const;
   int  cyan(QColor* theWrappedObject) const;
   float  cyanF(QColor* theWrappedObject) const;
   QColor  darker(QColor* theWrappedObject, int  f = 200) const;
   QColor  static_QColor_fromCmyk(int  c, int  m, int  y, int  k, int  a = 255);
   QColor  static_QColor_fromCmykF(float  c, float  m, float  y, float  k, float  a = 1.0);
   QColor  static_QColor_fromHsl(int  h, int  s, int  l, int  a = 255);
   QColor  static_QColor_fromHslF(float  h, float  s, float  l, float  a = 1.0);
   QColor  static_QColor_fromHsv(int  h, int  s, int  v, int  a = 255);
   QColor  static_QColor_fromHsvF(float  h, float  s, float  v, float  a = 1.0);
   QColor  static_QColor_fromRgb(int  r, int  g, int  b, int  a = 255);
   QColor  static_QColor_fromRgb(unsigned int  rgb);
   QColor  static_QColor_fromRgbF(float  r, float  g, float  b, float  a = 1.0);
   QColor  static_QColor_fromRgba(unsigned int  rgba);
   QColor  static_QColor_fromRgba64(QRgba64  rgba);
   QColor  static_QColor_fromRgba64(ushort  r, ushort  g, ushort  b, ushort  a = USHRT_MAX);
   QColor  static_QColor_fromString(QAnyStringView  name);
   void getCmyk(QColor* theWrappedObject, int*  c, int*  m, int*  y, int*  k, int*  a = nullptr) const;
   void getCmykF(QColor* theWrappedObject, float*  c, float*  m, float*  y, float*  k, float*  a = nullptr) const;
   void getHsl(QColor* theWrappedObject, int*  h, int*  s, int*  l, int*  a = nullptr) const;
   void getHslF(QColor* theWrappedObject, float*  h, float*  s, float*  l, float*  a = nullptr) const;
   void getHsvF(QColor* theWrappedObject, float*  h, float*  s, float*  v, float*  a = nullptr) const;
   void getRgbF(QColor* theWrappedObject, float*  r, float*  g, float*  b, float*  a = nullptr) const;
   int  green(QColor* theWrappedObject) const;
   float  greenF(QColor* theWrappedObject) const;
   int  hslHue(QColor* theWrappedObject) const;
   float  hslHueF(QColor* theWrappedObject) const;
   int  hslSaturation(QColor* theWrappedObject) const;
   float  hslSaturationF(QColor* theWrappedObject) const;
   int  hsvHue(QColor* theWrappedObject) const;
   float  hsvHueF(QColor* theWrappedObject) const;
   int  hsvSaturation(QColor* theWrappedObject) const;
   float  hsvSaturationF(QColor* theWrappedObject) const;
   int  hue(QColor* theWrappedObject) const;
   float  hueF(QColor* theWrappedObject) const;
   bool  isValid(QColor* theWrappedObject) const;
   bool  static_QColor_isValidColor(const QString&  name);
   bool  static_QColor_isValidColorName(QAnyStringView  arg__1);
   QColor  lighter(QColor* theWrappedObject, int  f = 150) const;
   int  lightness(QColor* theWrappedObject) const;
   float  lightnessF(QColor* theWrappedObject) const;
   int  magenta(QColor* theWrappedObject) const;
   float  magentaF(QColor* theWrappedObject) const;
   QString  name(QColor* theWrappedObject, QColor::NameFormat  format = QColor::HexRgb) const;
   bool  __ne__(QColor* theWrappedObject, const QColor&  c) const;
   void writeTo(QColor* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QColor* theWrappedObject, const QColor&  c) const;
   void readFrom(QColor* theWrappedObject, QDataStream&  arg__1);
   int  red(QColor* theWrappedObject) const;
   float  redF(QColor* theWrappedObject) const;
   unsigned int  rgb(QColor* theWrappedObject) const;
   unsigned int  rgba(QColor* theWrappedObject) const;
   QRgba64  rgba64(QColor* theWrappedObject) const;
   int  saturation(QColor* theWrappedObject) const;
   float  saturationF(QColor* theWrappedObject) const;
   void setAlpha(QColor* theWrappedObject, int  alpha);
   void setAlphaF(QColor* theWrappedObject, float  alpha);
   void setBlue(QColor* theWrappedObject, int  blue);
   void setBlueF(QColor* theWrappedObject, float  blue);
   void setCmyk(QColor* theWrappedObject, int  c, int  m, int  y, int  k, int  a = 255);
   void setCmykF(QColor* theWrappedObject, float  c, float  m, float  y, float  k, float  a = 1.0);
   void setGreen(QColor* theWrappedObject, int  green);
   void setGreenF(QColor* theWrappedObject, float  green);
   void setHsl(QColor* theWrappedObject, int  h, int  s, int  l, int  a = 255);
   void setHslF(QColor* theWrappedObject, float  h, float  s, float  l, float  a = 1.0);
   void setHsv(QColor* theWrappedObject, int  h, int  s, int  v, int  a = 255);
   void setHsvF(QColor* theWrappedObject, float  h, float  s, float  v, float  a = 1.0);
   void setNamedColor(QColor* theWrappedObject, const QString&  name);
   void setRed(QColor* theWrappedObject, int  red);
   void setRedF(QColor* theWrappedObject, float  red);
   void setRgb(QColor* theWrappedObject, int  r, int  g, int  b, int  a = 255);
   void setRgb(QColor* theWrappedObject, unsigned int  rgb);
   void setRgbF(QColor* theWrappedObject, float  r, float  g, float  b, float  a = 1.0);
   void setRgba(QColor* theWrappedObject, unsigned int  rgba);
   void setRgba64(QColor* theWrappedObject, QRgba64  rgba);
   QColor::Spec  spec(QColor* theWrappedObject) const;
   QColor  toCmyk(QColor* theWrappedObject) const;
   QColor  toExtendedRgb(QColor* theWrappedObject) const;
   QColor  toHsl(QColor* theWrappedObject) const;
   QColor  toHsv(QColor* theWrappedObject) const;
   QColor  toRgb(QColor* theWrappedObject) const;
   int  value(QColor* theWrappedObject) const;
   float  valueF(QColor* theWrappedObject) const;
   int  yellow(QColor* theWrappedObject) const;
   float  yellowF(QColor* theWrappedObject) const;
    QString py_toString(QColor*);
    bool __nonzero__(QColor* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QCursor : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QCursor* new_QCursor();
QCursor* new_QCursor(Qt::CursorShape  shape);
QCursor* new_QCursor(const QBitmap&  bitmap, const QBitmap&  mask, int  hotX = -1, int  hotY = -1);
QCursor* new_QCursor(const QCursor&  cursor);
QCursor* new_QCursor(const QPixmap&  pixmap, int  hotX = -1, int  hotY = -1);
void delete_QCursor(QCursor* obj) { delete obj; }
   QBitmap  bitmap(QCursor* theWrappedObject) const;
   QPoint  hotSpot(QCursor* theWrappedObject) const;
   QBitmap  mask(QCursor* theWrappedObject) const;
   bool  __ne__(QCursor* theWrappedObject, const QCursor&  rhs);
   void writeTo(QCursor* theWrappedObject, QDataStream&  outS);
   bool  __eq__(QCursor* theWrappedObject, const QCursor&  rhs);
   void readFrom(QCursor* theWrappedObject, QDataStream&  inS);
   QPixmap  pixmap(QCursor* theWrappedObject) const;
   QPoint  static_QCursor_pos();
   QPoint  static_QCursor_pos(const QScreen*  screen);
   void static_QCursor_setPos(QScreen*  screen, const QPoint&  p);
   void static_QCursor_setPos(QScreen*  screen, int  x, int  y);
   void static_QCursor_setPos(const QPoint&  p);
   void static_QCursor_setPos(int  x, int  y);
   void setShape(QCursor* theWrappedObject, Qt::CursorShape  newShape);
   Qt::CursorShape  shape(QCursor* theWrappedObject) const;
   void swap(QCursor* theWrappedObject, QCursor&  other);
    QString py_toString(QCursor*);
};





class PythonQtWrapper_QFont : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capitalization HintingPreference SpacingType Stretch Style StyleHint StyleStrategy Weight )
enum Capitalization{
  MixedCase = QFont::MixedCase,   AllUppercase = QFont::AllUppercase,   AllLowercase = QFont::AllLowercase,   SmallCaps = QFont::SmallCaps,   Capitalize = QFont::Capitalize};
enum HintingPreference{
  PreferDefaultHinting = QFont::PreferDefaultHinting,   PreferNoHinting = QFont::PreferNoHinting,   PreferVerticalHinting = QFont::PreferVerticalHinting,   PreferFullHinting = QFont::PreferFullHinting};
enum SpacingType{
  PercentageSpacing = QFont::PercentageSpacing,   AbsoluteSpacing = QFont::AbsoluteSpacing};
enum Stretch{
  AnyStretch = QFont::AnyStretch,   UltraCondensed = QFont::UltraCondensed,   ExtraCondensed = QFont::ExtraCondensed,   Condensed = QFont::Condensed,   SemiCondensed = QFont::SemiCondensed,   Unstretched = QFont::Unstretched,   SemiExpanded = QFont::SemiExpanded,   Expanded = QFont::Expanded,   ExtraExpanded = QFont::ExtraExpanded,   UltraExpanded = QFont::UltraExpanded};
enum Style{
  StyleNormal = QFont::StyleNormal,   StyleItalic = QFont::StyleItalic,   StyleOblique = QFont::StyleOblique};
enum StyleHint{
  Helvetica = QFont::Helvetica,   SansSerif = QFont::SansSerif,   Times = QFont::Times,   Serif = QFont::Serif,   Courier = QFont::Courier,   TypeWriter = QFont::TypeWriter,   OldEnglish = QFont::OldEnglish,   Decorative = QFont::Decorative,   System = QFont::System,   AnyStyle = QFont::AnyStyle,   Cursive = QFont::Cursive,   Monospace = QFont::Monospace,   Fantasy = QFont::Fantasy};
enum StyleStrategy{
  PreferDefault = QFont::PreferDefault,   PreferBitmap = QFont::PreferBitmap,   PreferDevice = QFont::PreferDevice,   PreferOutline = QFont::PreferOutline,   ForceOutline = QFont::ForceOutline,   PreferMatch = QFont::PreferMatch,   PreferQuality = QFont::PreferQuality,   PreferAntialias = QFont::PreferAntialias,   NoAntialias = QFont::NoAntialias,   NoSubpixelAntialias = QFont::NoSubpixelAntialias,   PreferNoShaping = QFont::PreferNoShaping,   ContextFontMerging = QFont::ContextFontMerging,   PreferTypoLineMetrics = QFont::PreferTypoLineMetrics,   NoFontMerging = QFont::NoFontMerging};
enum Weight{
  Thin = QFont::Thin,   ExtraLight = QFont::ExtraLight,   Light = QFont::Light,   Normal = QFont::Normal,   Medium = QFont::Medium,   DemiBold = QFont::DemiBold,   Bold = QFont::Bold,   ExtraBold = QFont::ExtraBold,   Black = QFont::Black};
public Q_SLOTS:
QFont* new_QFont();
QFont* new_QFont(const QFont&  font);
QFont* new_QFont(const QFont&  font, const QPaintDevice*  pd);
QFont* new_QFont(const QString&  family, int  pointSize = -1, int  weight = -1, bool  italic = false);
QFont* new_QFont(const QStringList&  families, int  pointSize = -1, int  weight = -1, bool  italic = false);
void delete_QFont(QFont* obj) { delete obj; }
   bool  bold(QFont* theWrappedObject) const;
   void static_QFont_cacheStatistics();
   QFont::Capitalization  capitalization(QFont* theWrappedObject) const;
   void static_QFont_cleanup();
   void clearFeatures(QFont* theWrappedObject);
   void clearVariableAxes(QFont* theWrappedObject);
   QString  defaultFamily(QFont* theWrappedObject) const;
   bool  exactMatch(QFont* theWrappedObject) const;
   QStringList  families(QFont* theWrappedObject) const;
   QString  family(QFont* theWrappedObject) const;
   QList<QFont::Tag >  featureTags(QFont* theWrappedObject) const;
   unsigned int  featureValue(QFont* theWrappedObject, QFont::Tag  tag) const;
   bool  fixedPitch(QFont* theWrappedObject) const;
   bool  fromString(QFont* theWrappedObject, const QString&  arg__1);
   QFont::HintingPreference  hintingPreference(QFont* theWrappedObject) const;
   void static_QFont_initialize();
   void static_QFont_insertSubstitution(const QString&  arg__1, const QString&  arg__2);
   void static_QFont_insertSubstitutions(const QString&  arg__1, const QStringList&  arg__2);
   bool  isCopyOf(QFont* theWrappedObject, const QFont&  arg__1) const;
   bool  isFeatureSet(QFont* theWrappedObject, QFont::Tag  tag) const;
   bool  isVariableAxisSet(QFont* theWrappedObject, QFont::Tag  tag) const;
   bool  italic(QFont* theWrappedObject) const;
   bool  kerning(QFont* theWrappedObject) const;
   QString  key(QFont* theWrappedObject) const;
   int  legacyWeight(QFont* theWrappedObject) const;
   qreal  letterSpacing(QFont* theWrappedObject) const;
   QFont::SpacingType  letterSpacingType(QFont* theWrappedObject) const;
   bool  __ne__(QFont* theWrappedObject, const QFont&  arg__1) const;
   bool  __lt__(QFont* theWrappedObject, const QFont&  arg__1) const;
   void writeTo(QFont* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QFont* theWrappedObject, const QFont&  arg__1) const;
   void readFrom(QFont* theWrappedObject, QDataStream&  arg__1);
   bool  overline(QFont* theWrappedObject) const;
   int  pixelSize(QFont* theWrappedObject) const;
   int  pointSize(QFont* theWrappedObject) const;
   qreal  pointSizeF(QFont* theWrappedObject) const;
   void static_QFont_removeSubstitutions(const QString&  arg__1);
   QFont  resolve(QFont* theWrappedObject, const QFont&  arg__1) const;
   uint  resolveMask(QFont* theWrappedObject) const;
   void setBold(QFont* theWrappedObject, bool  arg__1);
   void setCapitalization(QFont* theWrappedObject, QFont::Capitalization  arg__1);
   void setFamilies(QFont* theWrappedObject, const QStringList&  arg__1);
   void setFamily(QFont* theWrappedObject, const QString&  arg__1);
   void setFeature(QFont* theWrappedObject, QFont::Tag  tag, unsigned int  value);
   void setFixedPitch(QFont* theWrappedObject, bool  arg__1);
   void setHintingPreference(QFont* theWrappedObject, QFont::HintingPreference  hintingPreference);
   void setItalic(QFont* theWrappedObject, bool  b);
   void setKerning(QFont* theWrappedObject, bool  arg__1);
   void setLegacyWeight(QFont* theWrappedObject, int  legacyWeight);
   void setLetterSpacing(QFont* theWrappedObject, QFont::SpacingType  type, qreal  spacing);
   void setOverline(QFont* theWrappedObject, bool  arg__1);
   void setPixelSize(QFont* theWrappedObject, int  arg__1);
   void setPointSize(QFont* theWrappedObject, int  arg__1);
   void setPointSizeF(QFont* theWrappedObject, qreal  arg__1);
   void setResolveMask(QFont* theWrappedObject, uint  mask);
   void setStretch(QFont* theWrappedObject, int  arg__1);
   void setStrikeOut(QFont* theWrappedObject, bool  arg__1);
   void setStyle(QFont* theWrappedObject, QFont::Style  style);
   void setStyleHint(QFont* theWrappedObject, QFont::StyleHint  arg__1, QFont::StyleStrategy  arg__2 = QFont::PreferDefault);
   void setStyleName(QFont* theWrappedObject, const QString&  arg__1);
   void setStyleStrategy(QFont* theWrappedObject, QFont::StyleStrategy  s);
   void setUnderline(QFont* theWrappedObject, bool  arg__1);
   void setVariableAxis(QFont* theWrappedObject, QFont::Tag  tag, float  value);
   void setWeight(QFont* theWrappedObject, QFont::Weight  weight);
   void setWordSpacing(QFont* theWrappedObject, qreal  spacing);
   int  stretch(QFont* theWrappedObject) const;
   bool  strikeOut(QFont* theWrappedObject) const;
   QFont::Style  style(QFont* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFont* theWrappedObject) const;
   QString  styleName(QFont* theWrappedObject) const;
   QFont::StyleStrategy  styleStrategy(QFont* theWrappedObject) const;
   QString  static_QFont_substitute(const QString&  arg__1);
   QStringList  static_QFont_substitutes(const QString&  arg__1);
   QStringList  static_QFont_substitutions();
   void swap(QFont* theWrappedObject, QFont&  other);
   QString  toString(QFont* theWrappedObject) const;
   bool  underline(QFont* theWrappedObject) const;
   void unsetFeature(QFont* theWrappedObject, QFont::Tag  tag);
   void unsetVariableAxis(QFont* theWrappedObject, QFont::Tag  tag);
   QList<QFont::Tag >  variableAxisTags(QFont* theWrappedObject) const;
   float  variableAxisValue(QFont* theWrappedObject, QFont::Tag  tag) const;
   QFont::Weight  weight(QFont* theWrappedObject) const;
   qreal  wordSpacing(QFont* theWrappedObject) const;
    QString py_toString(QFont*);
};





class PythonQtWrapper_QIcon : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode State ThemeIcon )
enum Mode{
  Normal = QIcon::Normal,   Disabled = QIcon::Disabled,   Active = QIcon::Active,   Selected = QIcon::Selected};
enum State{
  On = QIcon::On,   Off = QIcon::Off};
enum class ThemeIcon{
  AddressBookNew = static_cast<int>(QIcon::ThemeIcon::AddressBookNew),   ApplicationExit = static_cast<int>(QIcon::ThemeIcon::ApplicationExit),   AppointmentNew = static_cast<int>(QIcon::ThemeIcon::AppointmentNew),   CallStart = static_cast<int>(QIcon::ThemeIcon::CallStart),   CallStop = static_cast<int>(QIcon::ThemeIcon::CallStop),   ContactNew = static_cast<int>(QIcon::ThemeIcon::ContactNew),   DocumentNew = static_cast<int>(QIcon::ThemeIcon::DocumentNew),   DocumentOpen = static_cast<int>(QIcon::ThemeIcon::DocumentOpen),   DocumentOpenRecent = static_cast<int>(QIcon::ThemeIcon::DocumentOpenRecent),   DocumentPageSetup = static_cast<int>(QIcon::ThemeIcon::DocumentPageSetup),   DocumentPrint = static_cast<int>(QIcon::ThemeIcon::DocumentPrint),   DocumentPrintPreview = static_cast<int>(QIcon::ThemeIcon::DocumentPrintPreview),   DocumentProperties = static_cast<int>(QIcon::ThemeIcon::DocumentProperties),   DocumentRevert = static_cast<int>(QIcon::ThemeIcon::DocumentRevert),   DocumentSave = static_cast<int>(QIcon::ThemeIcon::DocumentSave),   DocumentSaveAs = static_cast<int>(QIcon::ThemeIcon::DocumentSaveAs),   DocumentSend = static_cast<int>(QIcon::ThemeIcon::DocumentSend),   EditClear = static_cast<int>(QIcon::ThemeIcon::EditClear),   EditCopy = static_cast<int>(QIcon::ThemeIcon::EditCopy),   EditCut = static_cast<int>(QIcon::ThemeIcon::EditCut),   EditDelete = static_cast<int>(QIcon::ThemeIcon::EditDelete),   EditFind = static_cast<int>(QIcon::ThemeIcon::EditFind),   EditPaste = static_cast<int>(QIcon::ThemeIcon::EditPaste),   EditRedo = static_cast<int>(QIcon::ThemeIcon::EditRedo),   EditSelectAll = static_cast<int>(QIcon::ThemeIcon::EditSelectAll),   EditUndo = static_cast<int>(QIcon::ThemeIcon::EditUndo),   FolderNew = static_cast<int>(QIcon::ThemeIcon::FolderNew),   FormatIndentLess = static_cast<int>(QIcon::ThemeIcon::FormatIndentLess),   FormatIndentMore = static_cast<int>(QIcon::ThemeIcon::FormatIndentMore),   FormatJustifyCenter = static_cast<int>(QIcon::ThemeIcon::FormatJustifyCenter),   FormatJustifyFill = static_cast<int>(QIcon::ThemeIcon::FormatJustifyFill),   FormatJustifyLeft = static_cast<int>(QIcon::ThemeIcon::FormatJustifyLeft),   FormatJustifyRight = static_cast<int>(QIcon::ThemeIcon::FormatJustifyRight),   FormatTextDirectionLtr = static_cast<int>(QIcon::ThemeIcon::FormatTextDirectionLtr),   FormatTextDirectionRtl = static_cast<int>(QIcon::ThemeIcon::FormatTextDirectionRtl),   FormatTextBold = static_cast<int>(QIcon::ThemeIcon::FormatTextBold),   FormatTextItalic = static_cast<int>(QIcon::ThemeIcon::FormatTextItalic),   FormatTextUnderline = static_cast<int>(QIcon::ThemeIcon::FormatTextUnderline),   FormatTextStrikethrough = static_cast<int>(QIcon::ThemeIcon::FormatTextStrikethrough),   GoDown = static_cast<int>(QIcon::ThemeIcon::GoDown),   GoHome = static_cast<int>(QIcon::ThemeIcon::GoHome),   GoNext = static_cast<int>(QIcon::ThemeIcon::GoNext),   GoPrevious = static_cast<int>(QIcon::ThemeIcon::GoPrevious),   GoUp = static_cast<int>(QIcon::ThemeIcon::GoUp),   HelpAbout = static_cast<int>(QIcon::ThemeIcon::HelpAbout),   HelpFaq = static_cast<int>(QIcon::ThemeIcon::HelpFaq),   InsertImage = static_cast<int>(QIcon::ThemeIcon::InsertImage),   InsertLink = static_cast<int>(QIcon::ThemeIcon::InsertLink),   InsertText = static_cast<int>(QIcon::ThemeIcon::InsertText),   ListAdd = static_cast<int>(QIcon::ThemeIcon::ListAdd),   ListRemove = static_cast<int>(QIcon::ThemeIcon::ListRemove),   MailForward = static_cast<int>(QIcon::ThemeIcon::MailForward),   MailMarkImportant = static_cast<int>(QIcon::ThemeIcon::MailMarkImportant),   MailMarkRead = static_cast<int>(QIcon::ThemeIcon::MailMarkRead),   MailMarkUnread = static_cast<int>(QIcon::ThemeIcon::MailMarkUnread),   MailMessageNew = static_cast<int>(QIcon::ThemeIcon::MailMessageNew),   MailReplyAll = static_cast<int>(QIcon::ThemeIcon::MailReplyAll),   MailReplySender = static_cast<int>(QIcon::ThemeIcon::MailReplySender),   MailSend = static_cast<int>(QIcon::ThemeIcon::MailSend),   MediaEject = static_cast<int>(QIcon::ThemeIcon::MediaEject),   MediaPlaybackPause = static_cast<int>(QIcon::ThemeIcon::MediaPlaybackPause),   MediaPlaybackStart = static_cast<int>(QIcon::ThemeIcon::MediaPlaybackStart),   MediaPlaybackStop = static_cast<int>(QIcon::ThemeIcon::MediaPlaybackStop),   MediaRecord = static_cast<int>(QIcon::ThemeIcon::MediaRecord),   MediaSeekBackward = static_cast<int>(QIcon::ThemeIcon::MediaSeekBackward),   MediaSeekForward = static_cast<int>(QIcon::ThemeIcon::MediaSeekForward),   MediaSkipBackward = static_cast<int>(QIcon::ThemeIcon::MediaSkipBackward),   MediaSkipForward = static_cast<int>(QIcon::ThemeIcon::MediaSkipForward),   ObjectRotateLeft = static_cast<int>(QIcon::ThemeIcon::ObjectRotateLeft),   ObjectRotateRight = static_cast<int>(QIcon::ThemeIcon::ObjectRotateRight),   ProcessStop = static_cast<int>(QIcon::ThemeIcon::ProcessStop),   SystemLockScreen = static_cast<int>(QIcon::ThemeIcon::SystemLockScreen),   SystemLogOut = static_cast<int>(QIcon::ThemeIcon::SystemLogOut),   SystemSearch = static_cast<int>(QIcon::ThemeIcon::SystemSearch),   SystemReboot = static_cast<int>(QIcon::ThemeIcon::SystemReboot),   SystemShutdown = static_cast<int>(QIcon::ThemeIcon::SystemShutdown),   ToolsCheckSpelling = static_cast<int>(QIcon::ThemeIcon::ToolsCheckSpelling),   ViewFullscreen = static_cast<int>(QIcon::ThemeIcon::ViewFullscreen),   ViewRefresh = static_cast<int>(QIcon::ThemeIcon::ViewRefresh),   ViewRestore = static_cast<int>(QIcon::ThemeIcon::ViewRestore),   WindowClose = static_cast<int>(QIcon::ThemeIcon::WindowClose),   WindowNew = static_cast<int>(QIcon::ThemeIcon::WindowNew),   ZoomFitBest = static_cast<int>(QIcon::ThemeIcon::ZoomFitBest),   ZoomIn = static_cast<int>(QIcon::ThemeIcon::ZoomIn),   ZoomOut = static_cast<int>(QIcon::ThemeIcon::ZoomOut),   AudioCard = static_cast<int>(QIcon::ThemeIcon::AudioCard),   AudioInputMicrophone = static_cast<int>(QIcon::ThemeIcon::AudioInputMicrophone),   Battery = static_cast<int>(QIcon::ThemeIcon::Battery),   CameraPhoto = static_cast<int>(QIcon::ThemeIcon::CameraPhoto),   CameraVideo = static_cast<int>(QIcon::ThemeIcon::CameraVideo),   CameraWeb = static_cast<int>(QIcon::ThemeIcon::CameraWeb),   Computer = static_cast<int>(QIcon::ThemeIcon::Computer),   DriveHarddisk = static_cast<int>(QIcon::ThemeIcon::DriveHarddisk),   DriveOptical = static_cast<int>(QIcon::ThemeIcon::DriveOptical),   InputGaming = static_cast<int>(QIcon::ThemeIcon::InputGaming),   InputKeyboard = static_cast<int>(QIcon::ThemeIcon::InputKeyboard),   InputMouse = static_cast<int>(QIcon::ThemeIcon::InputMouse),   InputTablet = static_cast<int>(QIcon::ThemeIcon::InputTablet),   MediaFlash = static_cast<int>(QIcon::ThemeIcon::MediaFlash),   MediaOptical = static_cast<int>(QIcon::ThemeIcon::MediaOptical),   MediaTape = static_cast<int>(QIcon::ThemeIcon::MediaTape),   MultimediaPlayer = static_cast<int>(QIcon::ThemeIcon::MultimediaPlayer),   NetworkWired = static_cast<int>(QIcon::ThemeIcon::NetworkWired),   NetworkWireless = static_cast<int>(QIcon::ThemeIcon::NetworkWireless),   Phone = static_cast<int>(QIcon::ThemeIcon::Phone),   Printer = static_cast<int>(QIcon::ThemeIcon::Printer),   Scanner = static_cast<int>(QIcon::ThemeIcon::Scanner),   VideoDisplay = static_cast<int>(QIcon::ThemeIcon::VideoDisplay),   AppointmentMissed = static_cast<int>(QIcon::ThemeIcon::AppointmentMissed),   AppointmentSoon = static_cast<int>(QIcon::ThemeIcon::AppointmentSoon),   AudioVolumeHigh = static_cast<int>(QIcon::ThemeIcon::AudioVolumeHigh),   AudioVolumeLow = static_cast<int>(QIcon::ThemeIcon::AudioVolumeLow),   AudioVolumeMedium = static_cast<int>(QIcon::ThemeIcon::AudioVolumeMedium),   AudioVolumeMuted = static_cast<int>(QIcon::ThemeIcon::AudioVolumeMuted),   BatteryCaution = static_cast<int>(QIcon::ThemeIcon::BatteryCaution),   BatteryLow = static_cast<int>(QIcon::ThemeIcon::BatteryLow),   DialogError = static_cast<int>(QIcon::ThemeIcon::DialogError),   DialogInformation = static_cast<int>(QIcon::ThemeIcon::DialogInformation),   DialogPassword = static_cast<int>(QIcon::ThemeIcon::DialogPassword),   DialogQuestion = static_cast<int>(QIcon::ThemeIcon::DialogQuestion),   DialogWarning = static_cast<int>(QIcon::ThemeIcon::DialogWarning),   FolderDragAccept = static_cast<int>(QIcon::ThemeIcon::FolderDragAccept),   FolderOpen = static_cast<int>(QIcon::ThemeIcon::FolderOpen),   FolderVisiting = static_cast<int>(QIcon::ThemeIcon::FolderVisiting),   ImageLoading = static_cast<int>(QIcon::ThemeIcon::ImageLoading),   ImageMissing = static_cast<int>(QIcon::ThemeIcon::ImageMissing),   MailAttachment = static_cast<int>(QIcon::ThemeIcon::MailAttachment),   MailUnread = static_cast<int>(QIcon::ThemeIcon::MailUnread),   MailRead = static_cast<int>(QIcon::ThemeIcon::MailRead),   MailReplied = static_cast<int>(QIcon::ThemeIcon::MailReplied),   MediaPlaylistRepeat = static_cast<int>(QIcon::ThemeIcon::MediaPlaylistRepeat),   MediaPlaylistShuffle = static_cast<int>(QIcon::ThemeIcon::MediaPlaylistShuffle),   NetworkOffline = static_cast<int>(QIcon::ThemeIcon::NetworkOffline),   PrinterPrinting = static_cast<int>(QIcon::ThemeIcon::PrinterPrinting),   SecurityHigh = static_cast<int>(QIcon::ThemeIcon::SecurityHigh),   SecurityLow = static_cast<int>(QIcon::ThemeIcon::SecurityLow),   SoftwareUpdateAvailable = static_cast<int>(QIcon::ThemeIcon::SoftwareUpdateAvailable),   SoftwareUpdateUrgent = static_cast<int>(QIcon::ThemeIcon::SoftwareUpdateUrgent),   SyncError = static_cast<int>(QIcon::ThemeIcon::SyncError),   SyncSynchronizing = static_cast<int>(QIcon::ThemeIcon::SyncSynchronizing),   UserAvailable = static_cast<int>(QIcon::ThemeIcon::UserAvailable),   UserOffline = static_cast<int>(QIcon::ThemeIcon::UserOffline),   WeatherClear = static_cast<int>(QIcon::ThemeIcon::WeatherClear),   WeatherClearNight = static_cast<int>(QIcon::ThemeIcon::WeatherClearNight),   WeatherFewClouds = static_cast<int>(QIcon::ThemeIcon::WeatherFewClouds),   WeatherFewCloudsNight = static_cast<int>(QIcon::ThemeIcon::WeatherFewCloudsNight),   WeatherFog = static_cast<int>(QIcon::ThemeIcon::WeatherFog),   WeatherShowers = static_cast<int>(QIcon::ThemeIcon::WeatherShowers),   WeatherSnow = static_cast<int>(QIcon::ThemeIcon::WeatherSnow),   WeatherStorm = static_cast<int>(QIcon::ThemeIcon::WeatherStorm),   NThemeIcons = static_cast<int>(QIcon::ThemeIcon::NThemeIcons)};
public Q_SLOTS:
QIcon* new_QIcon();
QIcon* new_QIcon(PythonQtPassOwnershipToCPP<QIconEngine* >  engine);
QIcon* new_QIcon(const QIcon&  other);
QIcon* new_QIcon(const QPixmap&  pixmap);
QIcon* new_QIcon(const QString&  fileName);
void delete_QIcon(QIcon* obj) { delete obj; }
   QSize  actualSize(QIcon* theWrappedObject, QWindow*  window, const QSize&  size, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QSize  actualSize(QIcon* theWrappedObject, const QSize&  size, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void addFile(QIcon* theWrappedObject, const QString&  fileName, const QSize&  size = QSize(), QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   void addPixmap(QIcon* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   QList<QSize >  availableSizes(QIcon* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   qint64  cacheKey(QIcon* theWrappedObject) const;
   QStringList  static_QIcon_fallbackSearchPaths();
   QString  static_QIcon_fallbackThemeName();
   QIcon  static_QIcon_fromTheme(QIcon::ThemeIcon  icon);
   QIcon  static_QIcon_fromTheme(QIcon::ThemeIcon  icon, const QIcon&  fallback);
   QIcon  static_QIcon_fromTheme(const QString&  name);
   QIcon  static_QIcon_fromTheme(const QString&  name, const QIcon&  fallback);
   bool  static_QIcon_hasThemeIcon(QIcon::ThemeIcon  icon);
   bool  static_QIcon_hasThemeIcon(const QString&  name);
   bool  isMask(QIcon* theWrappedObject) const;
   bool  isNull(QIcon* theWrappedObject) const;
   QString  name(QIcon* theWrappedObject) const;
   void writeTo(QIcon* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QIcon* theWrappedObject, QDataStream&  arg__1);
   void paint(QIcon* theWrappedObject, QPainter*  painter, const QRect&  rect, Qt::Alignment  alignment = Qt::AlignCenter, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void paint(QIcon* theWrappedObject, QPainter*  painter, int  x, int  y, int  w, int  h, Qt::Alignment  alignment = Qt::AlignCenter, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QPixmap  pixmap(QIcon* theWrappedObject, QWindow*  window, const QSize&  size, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QPixmap  pixmap(QIcon* theWrappedObject, const QSize&  size, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QPixmap  pixmap(QIcon* theWrappedObject, const QSize&  size, qreal  devicePixelRatio, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QPixmap  pixmap(QIcon* theWrappedObject, int  extent, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QPixmap  pixmap(QIcon* theWrappedObject, int  w, int  h, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void static_QIcon_setFallbackSearchPaths(const QStringList&  paths);
   void static_QIcon_setFallbackThemeName(const QString&  name);
   void setIsMask(QIcon* theWrappedObject, bool  isMask);
   void static_QIcon_setThemeName(const QString&  path);
   void static_QIcon_setThemeSearchPaths(const QStringList&  searchpath);
   void swap(QIcon* theWrappedObject, QIcon&  other);
   QString  static_QIcon_themeName();
   QStringList  static_QIcon_themeSearchPaths();
    QString py_toString(QIcon*);
    bool __nonzero__(QIcon* obj) { return !obj->isNull(); }
};





class PythonQtShell_QImage : public QImage
{
public:
    PythonQtShell_QImage():QImage(),_wrapper(nullptr) {};
    PythonQtShell_QImage(const QImage&  arg__1):QImage(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QImage(const QSize&  size, QImage::Format  format):QImage(size, format),_wrapper(nullptr) {};
    PythonQtShell_QImage(const QString&  fileName, const char*  format = nullptr):QImage(fileName, format),_wrapper(nullptr) {};
    PythonQtShell_QImage(int  width, int  height, QImage::Format  format):QImage(width, height, format),_wrapper(nullptr) {};

   ~PythonQtShell_QImage() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QImage : public QImage
{ public:
inline QImage  promoted_convertToFormat_helper(QImage::Format  format, Qt::ImageConversionFlags  flags) const { return this->convertToFormat_helper(format, flags); }
inline bool  promoted_convertToFormat_inplace(QImage::Format  format, Qt::ImageConversionFlags  flags) { return this->convertToFormat_inplace(format, flags); }
inline void promoted_detachMetadata(bool  invalidateCache = false) { this->detachMetadata(invalidateCache); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QImage  promoted_mirrored_helper(bool  horizontal, bool  vertical) const { return this->mirrored_helper(horizontal, vertical); }
inline void promoted_mirrored_inplace(bool  horizontal, bool  vertical) { this->mirrored_inplace(horizontal, vertical); }
inline QImage  promoted_rgbSwapped_helper() const { return this->rgbSwapped_helper(); }
inline void promoted_rgbSwapped_inplace() { this->rgbSwapped_inplace(); }
inline QImage  promoted_smoothScaled(int  w, int  h) const { return this->smoothScaled(w, h); }
inline int  py_q_devType() const { return QImage::devType(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QImage::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QImage::paintEngine(); }
};

class PythonQtWrapper_QImage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Format InvertMode )
enum Format{
  Format_Invalid = QImage::Format_Invalid,   Format_Mono = QImage::Format_Mono,   Format_MonoLSB = QImage::Format_MonoLSB,   Format_Indexed8 = QImage::Format_Indexed8,   Format_RGB32 = QImage::Format_RGB32,   Format_ARGB32 = QImage::Format_ARGB32,   Format_ARGB32_Premultiplied = QImage::Format_ARGB32_Premultiplied,   Format_RGB16 = QImage::Format_RGB16,   Format_ARGB8565_Premultiplied = QImage::Format_ARGB8565_Premultiplied,   Format_RGB666 = QImage::Format_RGB666,   Format_ARGB6666_Premultiplied = QImage::Format_ARGB6666_Premultiplied,   Format_RGB555 = QImage::Format_RGB555,   Format_ARGB8555_Premultiplied = QImage::Format_ARGB8555_Premultiplied,   Format_RGB888 = QImage::Format_RGB888,   Format_RGB444 = QImage::Format_RGB444,   Format_ARGB4444_Premultiplied = QImage::Format_ARGB4444_Premultiplied,   Format_RGBX8888 = QImage::Format_RGBX8888,   Format_RGBA8888 = QImage::Format_RGBA8888,   Format_RGBA8888_Premultiplied = QImage::Format_RGBA8888_Premultiplied,   Format_BGR30 = QImage::Format_BGR30,   Format_A2BGR30_Premultiplied = QImage::Format_A2BGR30_Premultiplied,   Format_RGB30 = QImage::Format_RGB30,   Format_A2RGB30_Premultiplied = QImage::Format_A2RGB30_Premultiplied,   Format_Alpha8 = QImage::Format_Alpha8,   Format_Grayscale8 = QImage::Format_Grayscale8,   Format_RGBX64 = QImage::Format_RGBX64,   Format_RGBA64 = QImage::Format_RGBA64,   Format_RGBA64_Premultiplied = QImage::Format_RGBA64_Premultiplied,   Format_Grayscale16 = QImage::Format_Grayscale16,   Format_BGR888 = QImage::Format_BGR888,   Format_RGBX16FPx4 = QImage::Format_RGBX16FPx4,   Format_RGBA16FPx4 = QImage::Format_RGBA16FPx4,   Format_RGBA16FPx4_Premultiplied = QImage::Format_RGBA16FPx4_Premultiplied,   Format_RGBX32FPx4 = QImage::Format_RGBX32FPx4,   Format_RGBA32FPx4 = QImage::Format_RGBA32FPx4,   Format_RGBA32FPx4_Premultiplied = QImage::Format_RGBA32FPx4_Premultiplied,   Format_CMYK8888 = QImage::Format_CMYK8888,   NImageFormats = QImage::NImageFormats};
enum InvertMode{
  InvertRgb = QImage::InvertRgb,   InvertRgba = QImage::InvertRgba};
public Q_SLOTS:
QImage* new_QImage();
QImage* new_QImage(const QImage&  arg__1);
QImage* new_QImage(const QSize&  size, QImage::Format  format);
QImage* new_QImage(const QString&  fileName, const char*  format = nullptr);
QImage* new_QImage(int  width, int  height, QImage::Format  format);
void delete_QImage(QImage* obj) { delete obj; }
   bool  allGray(QImage* theWrappedObject) const;
   void applyColorTransform(QImage* theWrappedObject, const QColorTransform&  transform);
   void applyColorTransform(QImage* theWrappedObject, const QColorTransform&  transform, QImage::Format  format, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   int  bitPlaneCount(QImage* theWrappedObject) const;
   qsizetype  bytesPerLine(QImage* theWrappedObject) const;
   qint64  cacheKey(QImage* theWrappedObject) const;
   unsigned int  color(QImage* theWrappedObject, int  i) const;
   int  colorCount(QImage* theWrappedObject) const;
   QColorSpace  colorSpace(QImage* theWrappedObject) const;
   QList<unsigned int >  colorTable(QImage* theWrappedObject) const;
   QImage  colorTransformed(QImage* theWrappedObject, const QColorTransform&  transform);
   QImage  colorTransformed(QImage* theWrappedObject, const QColorTransform&  transform) const;
   QImage  colorTransformed(QImage* theWrappedObject, const QColorTransform&  transform, QImage::Format  format, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QImage  colorTransformed(QImage* theWrappedObject, const QColorTransform&  transform, QImage::Format  format, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   void convertTo(QImage* theWrappedObject, QImage::Format  f, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void convertToColorSpace(QImage* theWrappedObject, const QColorSpace&  colorSpace);
   void convertToColorSpace(QImage* theWrappedObject, const QColorSpace&  colorSpace, QImage::Format  format, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QImage  convertToFormat(QImage* theWrappedObject, QImage::Format  f, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   QImage  convertToFormat(QImage* theWrappedObject, QImage::Format  f, const QList<unsigned int >&  colorTable, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   QImage  convertToFormat_helper(QImage* theWrappedObject, QImage::Format  format, Qt::ImageConversionFlags  flags) const;
   bool  convertToFormat_inplace(QImage* theWrappedObject, QImage::Format  format, Qt::ImageConversionFlags  flags);
   QImage  convertedTo(QImage* theWrappedObject, QImage::Format  f, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   QImage  convertedToColorSpace(QImage* theWrappedObject, const QColorSpace&  colorSpace) const;
   QImage  convertedToColorSpace(QImage* theWrappedObject, const QColorSpace&  colorSpace, QImage::Format  format, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QImage  convertedToColorSpace(QImage* theWrappedObject, const QColorSpace&  colorSpace, QImage::Format  format, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   QImage  copy(QImage* theWrappedObject, const QRect&  rect = QRect()) const;
   QImage  copy(QImage* theWrappedObject, int  x, int  y, int  w, int  h) const;
   QImage  createAlphaMask(QImage* theWrappedObject, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   QImage  createHeuristicMask(QImage* theWrappedObject, bool  clipTight = true) const;
   QImage  createMaskFromColor(QImage* theWrappedObject, unsigned int  color, Qt::MaskMode  mode = Qt::MaskInColor) const;
   int  depth(QImage* theWrappedObject) const;
   void detachMetadata(QImage* theWrappedObject, bool  invalidateCache = false);
   int  py_q_devType(QImage* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImage*)theWrappedObject)->py_q_devType());}
   QSizeF  deviceIndependentSize(QImage* theWrappedObject) const;
   qreal  devicePixelRatio(QImage* theWrappedObject) const;
   int  dotsPerMeterX(QImage* theWrappedObject) const;
   int  dotsPerMeterY(QImage* theWrappedObject) const;
   void fill(QImage* theWrappedObject, Qt::GlobalColor  color);
   void fill(QImage* theWrappedObject, const QColor&  color);
   void fill(QImage* theWrappedObject, uint  pixel);
   void flip(QImage* theWrappedObject, Qt::Orientations  orient = Qt::Vertical);
   QImage  flipped(QImage* theWrappedObject, Qt::Orientations  orient = Qt::Vertical) const;
   QImage::Format  format(QImage* theWrappedObject) const;
   QImage  static_QImage_fromData(const QByteArray&  data, const char*  format = nullptr);
   bool  hasAlphaChannel(QImage* theWrappedObject) const;
   int  height(QImage* theWrappedObject) const;
   void invertPixels(QImage* theWrappedObject, QImage::InvertMode  arg__1 = QImage::InvertRgb);
   bool  isGrayscale(QImage* theWrappedObject) const;
   bool  isNull(QImage* theWrappedObject) const;
   bool  load(QImage* theWrappedObject, QIODevice*  device, const char*  format);
   bool  load(QImage* theWrappedObject, const QString&  fileName, const char*  format = nullptr);
   bool  loadFromData(QImage* theWrappedObject, const QByteArray&  data, const char*  format = nullptr);
   int  py_q_metric(QImage* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QImage*)theWrappedObject)->py_q_metric(metric));}
   void mirror(QImage* theWrappedObject, bool  horizontally = false, bool  vertically = true);
   QImage  mirrored(QImage* theWrappedObject, bool  horizontally = false, bool  vertically = true) const;
   QImage  mirrored_helper(QImage* theWrappedObject, bool  horizontal, bool  vertical) const;
   void mirrored_inplace(QImage* theWrappedObject, bool  horizontal, bool  vertical);
   QPoint  offset(QImage* theWrappedObject) const;
   bool  __ne__(QImage* theWrappedObject, const QImage&  arg__1) const;
   void writeTo(QImage* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QImage* theWrappedObject, const QImage&  arg__1) const;
   void readFrom(QImage* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  py_q_paintEngine(QImage* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImage*)theWrappedObject)->py_q_paintEngine());}
   unsigned int  pixel(QImage* theWrappedObject, const QPoint&  pt) const;
   unsigned int  pixel(QImage* theWrappedObject, int  x, int  y) const;
   QColor  pixelColor(QImage* theWrappedObject, const QPoint&  pt) const;
   QColor  pixelColor(QImage* theWrappedObject, int  x, int  y) const;
   QPixelFormat  pixelFormat(QImage* theWrappedObject) const;
   int  pixelIndex(QImage* theWrappedObject, const QPoint&  pt) const;
   int  pixelIndex(QImage* theWrappedObject, int  x, int  y) const;
   QRect  rect(QImage* theWrappedObject) const;
   bool  reinterpretAsFormat(QImage* theWrappedObject, QImage::Format  f);
   void rgbSwap(QImage* theWrappedObject);
   QImage  rgbSwapped(QImage* theWrappedObject) const;
   QImage  rgbSwapped_helper(QImage* theWrappedObject) const;
   void rgbSwapped_inplace(QImage* theWrappedObject);
   bool  save(QImage* theWrappedObject, QIODevice*  device, const char*  format = nullptr, int  quality = -1) const;
   bool  save(QImage* theWrappedObject, const QString&  fileName, const char*  format = nullptr, int  quality = -1) const;
   QImage  scaled(QImage* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QImage  scaled(QImage* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QImage  scaledToHeight(QImage* theWrappedObject, int  h, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QImage  scaledToWidth(QImage* theWrappedObject, int  w, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   void setAlphaChannel(QImage* theWrappedObject, const QImage&  alphaChannel);
   void setColor(QImage* theWrappedObject, int  i, unsigned int  c);
   void setColorCount(QImage* theWrappedObject, int  arg__1);
   void setColorSpace(QImage* theWrappedObject, const QColorSpace&  colorSpace);
   void setDevicePixelRatio(QImage* theWrappedObject, qreal  scaleFactor);
   void setDotsPerMeterX(QImage* theWrappedObject, int  arg__1);
   void setDotsPerMeterY(QImage* theWrappedObject, int  arg__1);
   void setOffset(QImage* theWrappedObject, const QPoint&  arg__1);
   void setPixel(QImage* theWrappedObject, const QPoint&  pt, uint  index_or_rgb);
   void setPixel(QImage* theWrappedObject, int  x, int  y, uint  index_or_rgb);
   void setPixelColor(QImage* theWrappedObject, const QPoint&  pt, const QColor&  c);
   void setPixelColor(QImage* theWrappedObject, int  x, int  y, const QColor&  c);
   void setText(QImage* theWrappedObject, const QString&  key, const QString&  value);
   QSize  size(QImage* theWrappedObject) const;
   qsizetype  sizeInBytes(QImage* theWrappedObject) const;
   QImage  smoothScaled(QImage* theWrappedObject, int  w, int  h) const;
   void swap(QImage* theWrappedObject, QImage&  other);
   QString  text(QImage* theWrappedObject, const QString&  key = QString()) const;
   QStringList  textKeys(QImage* theWrappedObject) const;
   QImage::Format  static_QImage_toImageFormat(QPixelFormat  format);
   QPixelFormat  static_QImage_toPixelFormat(QImage::Format  format);
   QImage  transformed(QImage* theWrappedObject, const QTransform&  matrix, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QTransform  static_QImage_trueMatrix(const QTransform&  arg__1, int  w, int  h);
   bool  valid(QImage* theWrappedObject, const QPoint&  pt) const;
   bool  valid(QImage* theWrappedObject, int  x, int  y) const;
   int  width(QImage* theWrappedObject) const;
    QString py_toString(QImage*);
    bool __nonzero__(QImage* obj) { return !obj->isNull(); }

QImage* new_QImage( const uchar * data, int width, int height, QImage::Format format )
{
  QImage* image = new QImage(width, height, format);
#if QT_VERSION >= QT_VERSION_CHECK(5,10,0)
  memcpy(image->bits(), data, image->sizeInBytes());
#else
  memcpy(image->bits(), data, image->byteCount());
#endif
  return image;
}

PyObject* bits(QImage* image) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->bits(), image->bytesPerLine()* image->height());
}

#if QT_VERSION >= QT_VERSION_CHECK(5,10,0)
PyObject* constBits(QImage* image) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->constBits(), image->sizeInBytes());
}
#elif QT_VERSION >= QT_VERSION_CHECK(4,7,0)
PyObject* constBits(QImage* image) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->constBits(), image->byteCount());
}
#endif

PyObject* scanLine(QImage* image, int line) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->scanLine(line), image->bytesPerLine());
}

#if QT_VERSION >= QT_VERSION_CHECK(4,7,0)
PyObject* constScanLine(QImage* image, int line) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->constScanLine(line), image->bytesPerLine());
}
#endif


};





class PythonQtWrapper_QKeySequence : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SequenceFormat SequenceMatch StandardKey )
enum SequenceFormat{
  NativeText = QKeySequence::NativeText,   PortableText = QKeySequence::PortableText};
enum SequenceMatch{
  NoMatch = QKeySequence::NoMatch,   PartialMatch = QKeySequence::PartialMatch,   ExactMatch = QKeySequence::ExactMatch};
enum StandardKey{
  UnknownKey = QKeySequence::UnknownKey,   HelpContents = QKeySequence::HelpContents,   WhatsThis = QKeySequence::WhatsThis,   Open = QKeySequence::Open,   Close = QKeySequence::Close,   Save = QKeySequence::Save,   New = QKeySequence::New,   Delete = QKeySequence::Delete,   Cut = QKeySequence::Cut,   Copy = QKeySequence::Copy,   Paste = QKeySequence::Paste,   Undo = QKeySequence::Undo,   Redo = QKeySequence::Redo,   Back = QKeySequence::Back,   Forward = QKeySequence::Forward,   Refresh = QKeySequence::Refresh,   ZoomIn = QKeySequence::ZoomIn,   ZoomOut = QKeySequence::ZoomOut,   Print = QKeySequence::Print,   AddTab = QKeySequence::AddTab,   NextChild = QKeySequence::NextChild,   PreviousChild = QKeySequence::PreviousChild,   Find = QKeySequence::Find,   FindNext = QKeySequence::FindNext,   FindPrevious = QKeySequence::FindPrevious,   Replace = QKeySequence::Replace,   SelectAll = QKeySequence::SelectAll,   Bold = QKeySequence::Bold,   Italic = QKeySequence::Italic,   Underline = QKeySequence::Underline,   MoveToNextChar = QKeySequence::MoveToNextChar,   MoveToPreviousChar = QKeySequence::MoveToPreviousChar,   MoveToNextWord = QKeySequence::MoveToNextWord,   MoveToPreviousWord = QKeySequence::MoveToPreviousWord,   MoveToNextLine = QKeySequence::MoveToNextLine,   MoveToPreviousLine = QKeySequence::MoveToPreviousLine,   MoveToNextPage = QKeySequence::MoveToNextPage,   MoveToPreviousPage = QKeySequence::MoveToPreviousPage,   MoveToStartOfLine = QKeySequence::MoveToStartOfLine,   MoveToEndOfLine = QKeySequence::MoveToEndOfLine,   MoveToStartOfBlock = QKeySequence::MoveToStartOfBlock,   MoveToEndOfBlock = QKeySequence::MoveToEndOfBlock,   MoveToStartOfDocument = QKeySequence::MoveToStartOfDocument,   MoveToEndOfDocument = QKeySequence::MoveToEndOfDocument,   SelectNextChar = QKeySequence::SelectNextChar,   SelectPreviousChar = QKeySequence::SelectPreviousChar,   SelectNextWord = QKeySequence::SelectNextWord,   SelectPreviousWord = QKeySequence::SelectPreviousWord,   SelectNextLine = QKeySequence::SelectNextLine,   SelectPreviousLine = QKeySequence::SelectPreviousLine,   SelectNextPage = QKeySequence::SelectNextPage,   SelectPreviousPage = QKeySequence::SelectPreviousPage,   SelectStartOfLine = QKeySequence::SelectStartOfLine,   SelectEndOfLine = QKeySequence::SelectEndOfLine,   SelectStartOfBlock = QKeySequence::SelectStartOfBlock,   SelectEndOfBlock = QKeySequence::SelectEndOfBlock,   SelectStartOfDocument = QKeySequence::SelectStartOfDocument,   SelectEndOfDocument = QKeySequence::SelectEndOfDocument,   DeleteStartOfWord = QKeySequence::DeleteStartOfWord,   DeleteEndOfWord = QKeySequence::DeleteEndOfWord,   DeleteEndOfLine = QKeySequence::DeleteEndOfLine,   InsertParagraphSeparator = QKeySequence::InsertParagraphSeparator,   InsertLineSeparator = QKeySequence::InsertLineSeparator,   SaveAs = QKeySequence::SaveAs,   Preferences = QKeySequence::Preferences,   Quit = QKeySequence::Quit,   FullScreen = QKeySequence::FullScreen,   Deselect = QKeySequence::Deselect,   DeleteCompleteLine = QKeySequence::DeleteCompleteLine,   Backspace = QKeySequence::Backspace,   Cancel = QKeySequence::Cancel};
public Q_SLOTS:
QKeySequence* new_QKeySequence();
QKeySequence* new_QKeySequence(QKeyCombination  k1, QKeyCombination  k2 = QKeyCombination::fromCombined(0), QKeyCombination  k3 = QKeyCombination::fromCombined(0), QKeyCombination  k4 = QKeyCombination::fromCombined(0));
QKeySequence* new_QKeySequence(QKeySequence::StandardKey  key);
QKeySequence* new_QKeySequence(const QKeySequence&  ks);
QKeySequence* new_QKeySequence(const QString&  key, QKeySequence::SequenceFormat  format = QKeySequence::NativeText);
QKeySequence* new_QKeySequence(int  k1, int  k2 = 0, int  k3 = 0, int  k4 = 0);
void delete_QKeySequence(QKeySequence* obj) { delete obj; }
   int  count(QKeySequence* theWrappedObject) const;
   QKeySequence  static_QKeySequence_fromString(const QString&  str, QKeySequence::SequenceFormat  format = QKeySequence::PortableText);
   bool  isEmpty(QKeySequence* theWrappedObject) const;
   QList<QKeySequence >  static_QKeySequence_keyBindings(QKeySequence::StandardKey  key);
   QList<QKeySequence >  static_QKeySequence_listFromString(const QString&  str, QKeySequence::SequenceFormat  format = QKeySequence::PortableText);
   QString  static_QKeySequence_listToString(const QList<QKeySequence >&  list, QKeySequence::SequenceFormat  format = QKeySequence::PortableText);
   QKeySequence::SequenceMatch  matches(QKeySequence* theWrappedObject, const QKeySequence&  seq) const;
   QKeySequence  static_QKeySequence_mnemonic(const QString&  text);
   bool  __ne__(QKeySequence* theWrappedObject, const QKeySequence&  other) const;
   bool  __lt__(QKeySequence* theWrappedObject, const QKeySequence&  ks) const;
   void writeTo(QKeySequence* theWrappedObject, QDataStream&  in);
   bool  __le__(QKeySequence* theWrappedObject, const QKeySequence&  other) const;
   bool  __eq__(QKeySequence* theWrappedObject, const QKeySequence&  other) const;
   bool  __gt__(QKeySequence* theWrappedObject, const QKeySequence&  other) const;
   bool  __ge__(QKeySequence* theWrappedObject, const QKeySequence&  other) const;
   void readFrom(QKeySequence* theWrappedObject, QDataStream&  in);
   QKeyCombination  operator_subscript(QKeySequence* theWrappedObject, uint  i) const;
   void swap(QKeySequence* theWrappedObject, QKeySequence&  other);
   QString  toString(QKeySequence* theWrappedObject, QKeySequence::SequenceFormat  format = QKeySequence::PortableText) const;
    QString py_toString(QKeySequence*);
    bool __nonzero__(QKeySequence* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QMatrix4x4 : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMatrix4x4* new_QMatrix4x4();
QMatrix4x4* new_QMatrix4x4(const QTransform&  transform);
QMatrix4x4* new_QMatrix4x4(const float*  values);
QMatrix4x4* new_QMatrix4x4(const float*  values, int  cols, int  rows);
QMatrix4x4* new_QMatrix4x4(float  m11, float  m12, float  m13, float  m14, float  m21, float  m22, float  m23, float  m24, float  m31, float  m32, float  m33, float  m34, float  m41, float  m42, float  m43, float  m44);
QMatrix4x4* new_QMatrix4x4(const QMatrix4x4& other) {
QMatrix4x4* a = new QMatrix4x4();
*((QMatrix4x4*)a) = other;
return a; }
void delete_QMatrix4x4(QMatrix4x4* obj) { delete obj; }
   QVector4D  column(QMatrix4x4* theWrappedObject, int  index) const;
   const float*  constData(QMatrix4x4* theWrappedObject) const;
   void copyDataTo(QMatrix4x4* theWrappedObject, float*  values) const;
   float*  data(QMatrix4x4* theWrappedObject);
   double  determinant(QMatrix4x4* theWrappedObject) const;
   void fill(QMatrix4x4* theWrappedObject, float  value);
   void flipCoordinates(QMatrix4x4* theWrappedObject);
   void frustum(QMatrix4x4* theWrappedObject, float  left, float  right, float  bottom, float  top, float  nearPlane, float  farPlane);
   QMatrix4x4  inverted(QMatrix4x4* theWrappedObject, bool*  invertible = nullptr) const;
   bool  isAffine(QMatrix4x4* theWrappedObject) const;
   bool  isIdentity(QMatrix4x4* theWrappedObject) const;
   void lookAt(QMatrix4x4* theWrappedObject, const QVector3D&  eye, const QVector3D&  center, const QVector3D&  up);
   QPoint  map(QMatrix4x4* theWrappedObject, const QPoint&  point) const;
   QPointF  map(QMatrix4x4* theWrappedObject, const QPointF&  point) const;
   QVector3D  map(QMatrix4x4* theWrappedObject, const QVector3D&  point) const;
   QVector4D  map(QMatrix4x4* theWrappedObject, const QVector4D&  point) const;
   QRect  mapRect(QMatrix4x4* theWrappedObject, const QRect&  rect) const;
   QRectF  mapRect(QMatrix4x4* theWrappedObject, const QRectF&  rect) const;
   QVector3D  mapVector(QMatrix4x4* theWrappedObject, const QVector3D&  vector) const;
   bool  __ne__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   float*  operator_cast_(QMatrix4x4* theWrappedObject, int  row, int  column);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QPoint  __mul__(QMatrix4x4* theWrappedObject, const QPoint&  point);
   QPointF  __mul__(QMatrix4x4* theWrappedObject, const QPointF&  point);
   QVector3D  __mul__(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   QVector4D  __mul__(QMatrix4x4* theWrappedObject, const QVector4D&  vector);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, float  factor);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, float  factor);
   QMatrix4x4  __add__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __iadd__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __sub__(QMatrix4x4* theWrappedObject);
   QMatrix4x4  __sub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __isub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __div__(QMatrix4x4* theWrappedObject, float  divisor);
   QMatrix4x4*  __idiv__(QMatrix4x4* theWrappedObject, float  divisor);
   void writeTo(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   void readFrom(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   void optimize(QMatrix4x4* theWrappedObject);
   void ortho(QMatrix4x4* theWrappedObject, const QRect&  rect);
   void ortho(QMatrix4x4* theWrappedObject, const QRectF&  rect);
   void ortho(QMatrix4x4* theWrappedObject, float  left, float  right, float  bottom, float  top, float  nearPlane, float  farPlane);
   void perspective(QMatrix4x4* theWrappedObject, float  verticalAngle, float  aspectRatio, float  nearPlane, float  farPlane);
   void projectedRotate(QMatrix4x4* theWrappedObject, float  angle, float  x, float  y, float  z);
   void projectedRotate(QMatrix4x4* theWrappedObject, float  angle, float  x, float  y, float  z, float  distanceToPlane);
   void rotate(QMatrix4x4* theWrappedObject, const QQuaternion&  quaternion);
   void rotate(QMatrix4x4* theWrappedObject, float  angle, const QVector3D&  vector);
   void rotate(QMatrix4x4* theWrappedObject, float  angle, float  x, float  y, float  z = 0.0f);
   QVector4D  row(QMatrix4x4* theWrappedObject, int  index) const;
   void scale(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void scale(QMatrix4x4* theWrappedObject, float  factor);
   void scale(QMatrix4x4* theWrappedObject, float  x, float  y);
   void scale(QMatrix4x4* theWrappedObject, float  x, float  y, float  z);
   void setColumn(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void setRow(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void setToIdentity(QMatrix4x4* theWrappedObject);
   QTransform  toTransform(QMatrix4x4* theWrappedObject) const;
   QTransform  toTransform(QMatrix4x4* theWrappedObject, float  distanceToPlane) const;
   void translate(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void translate(QMatrix4x4* theWrappedObject, float  x, float  y);
   void translate(QMatrix4x4* theWrappedObject, float  x, float  y, float  z);
   QMatrix4x4  transposed(QMatrix4x4* theWrappedObject) const;
   void viewport(QMatrix4x4* theWrappedObject, const QRectF&  rect);
   void viewport(QMatrix4x4* theWrappedObject, float  left, float  bottom, float  width, float  height, float  nearPlane = 0.0f, float  farPlane = 1.0f);
    QString py_toString(QMatrix4x4*);
};





class PythonQtWrapper_QPalette : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorGroup ColorRole )
enum ColorGroup{
  Active = QPalette::Active,   Disabled = QPalette::Disabled,   Inactive = QPalette::Inactive,   NColorGroups = QPalette::NColorGroups,   Current = QPalette::Current,   All = QPalette::All,   Normal = QPalette::Normal};
enum ColorRole{
  WindowText = QPalette::WindowText,   Button = QPalette::Button,   Light = QPalette::Light,   Midlight = QPalette::Midlight,   Dark = QPalette::Dark,   Mid = QPalette::Mid,   Text = QPalette::Text,   BrightText = QPalette::BrightText,   ButtonText = QPalette::ButtonText,   Base = QPalette::Base,   Window = QPalette::Window,   Shadow = QPalette::Shadow,   Highlight = QPalette::Highlight,   HighlightedText = QPalette::HighlightedText,   Link = QPalette::Link,   LinkVisited = QPalette::LinkVisited,   AlternateBase = QPalette::AlternateBase,   NoRole = QPalette::NoRole,   ToolTipBase = QPalette::ToolTipBase,   ToolTipText = QPalette::ToolTipText,   PlaceholderText = QPalette::PlaceholderText,   Accent = QPalette::Accent,   NColorRoles = QPalette::NColorRoles};
public Q_SLOTS:
QPalette* new_QPalette();
QPalette* new_QPalette(Qt::GlobalColor  button);
QPalette* new_QPalette(const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window);
QPalette* new_QPalette(const QColor&  button);
QPalette* new_QPalette(const QColor&  button, const QColor&  window);
QPalette* new_QPalette(const QPalette&  palette);
void delete_QPalette(QPalette* obj) { delete obj; }
   const QBrush*  accent(QPalette* theWrappedObject) const;
   const QBrush*  alternateBase(QPalette* theWrappedObject) const;
   const QBrush*  base(QPalette* theWrappedObject) const;
   const QBrush*  brightText(QPalette* theWrappedObject) const;
   const QBrush*  brush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   const QBrush*  brush(QPalette* theWrappedObject, QPalette::ColorRole  cr) const;
   const QBrush*  button(QPalette* theWrappedObject) const;
   const QBrush*  buttonText(QPalette* theWrappedObject) const;
   qint64  cacheKey(QPalette* theWrappedObject) const;
   const QColor*  color(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   const QColor*  color(QPalette* theWrappedObject, QPalette::ColorRole  cr) const;
   QPalette::ColorGroup  currentColorGroup(QPalette* theWrappedObject) const;
   const QBrush*  dark(QPalette* theWrappedObject) const;
   const QBrush*  highlight(QPalette* theWrappedObject) const;
   const QBrush*  highlightedText(QPalette* theWrappedObject) const;
   bool  isBrushSet(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   bool  isCopyOf(QPalette* theWrappedObject, const QPalette&  p) const;
   bool  isEqual(QPalette* theWrappedObject, QPalette::ColorGroup  cr1, QPalette::ColorGroup  cr2) const;
   const QBrush*  light(QPalette* theWrappedObject) const;
   const QBrush*  link(QPalette* theWrappedObject) const;
   const QBrush*  linkVisited(QPalette* theWrappedObject) const;
   const QBrush*  mid(QPalette* theWrappedObject) const;
   const QBrush*  midlight(QPalette* theWrappedObject) const;
   bool  __ne__(QPalette* theWrappedObject, const QPalette&  p) const;
   void writeTo(QPalette* theWrappedObject, QDataStream&  ds);
   bool  __eq__(QPalette* theWrappedObject, const QPalette&  p) const;
   void readFrom(QPalette* theWrappedObject, QDataStream&  ds);
   const QBrush*  placeholderText(QPalette* theWrappedObject) const;
   QPalette  resolve(QPalette* theWrappedObject, const QPalette&  other) const;
   quint64  resolveMask(QPalette* theWrappedObject) const;
   void setBrush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QBrush&  brush);
   void setBrush(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QBrush&  brush);
   void setColor(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QColor&  color);
   void setColor(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QColor&  color);
   void setColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cr, const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window);
   void setCurrentColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cg);
   void setResolveMask(QPalette* theWrappedObject, quint64  mask);
   const QBrush*  shadow(QPalette* theWrappedObject) const;
   void swap(QPalette* theWrappedObject, QPalette&  other);
   const QBrush*  text(QPalette* theWrappedObject) const;
   const QBrush*  toolTipBase(QPalette* theWrappedObject) const;
   const QBrush*  toolTipText(QPalette* theWrappedObject) const;
   const QBrush*  window(QPalette* theWrappedObject) const;
   const QBrush*  windowText(QPalette* theWrappedObject) const;
    QString py_toString(QPalette*);
};





class PythonQtWrapper_QPen : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPen* new_QPen();
QPen* new_QPen(Qt::PenStyle  arg__1);
QPen* new_QPen(const QBrush&  brush, qreal  width, Qt::PenStyle  s = Qt::SolidLine, Qt::PenCapStyle  c = Qt::SquareCap, Qt::PenJoinStyle  j = Qt::BevelJoin);
QPen* new_QPen(const QColor&  color);
QPen* new_QPen(const QPen&  pen);
void delete_QPen(QPen* obj) { delete obj; }
   QBrush  brush(QPen* theWrappedObject) const;
   Qt::PenCapStyle  capStyle(QPen* theWrappedObject) const;
   QColor  color(QPen* theWrappedObject) const;
   qreal  dashOffset(QPen* theWrappedObject) const;
   QList<qreal >  dashPattern(QPen* theWrappedObject) const;
   bool  isCosmetic(QPen* theWrappedObject) const;
   bool  isSolid(QPen* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPen* theWrappedObject) const;
   qreal  miterLimit(QPen* theWrappedObject) const;
   bool  __ne__(QPen* theWrappedObject, const QColor&  rhs);
   bool  __ne__(QPen* theWrappedObject, const QPen&  p) const;
   void writeTo(QPen* theWrappedObject, QDataStream&  arg__1);
   QPen*  operator_assign(QPen* theWrappedObject, QColor  color);
   QPen*  operator_assign(QPen* theWrappedObject, Qt::PenStyle  style);
   bool  __eq__(QPen* theWrappedObject, const QColor&  rhs);
   bool  __eq__(QPen* theWrappedObject, const QPen&  p) const;
   void readFrom(QPen* theWrappedObject, QDataStream&  arg__1);
   void setBrush(QPen* theWrappedObject, const QBrush&  brush);
   void setCapStyle(QPen* theWrappedObject, Qt::PenCapStyle  pcs);
   void setColor(QPen* theWrappedObject, const QColor&  color);
   void setCosmetic(QPen* theWrappedObject, bool  cosmetic);
   void setDashOffset(QPen* theWrappedObject, qreal  doffset);
   void setDashPattern(QPen* theWrappedObject, const QList<qreal >&  pattern);
   void setJoinStyle(QPen* theWrappedObject, Qt::PenJoinStyle  pcs);
   void setMiterLimit(QPen* theWrappedObject, qreal  limit);
   void setStyle(QPen* theWrappedObject, Qt::PenStyle  arg__1);
   void setWidth(QPen* theWrappedObject, int  width);
   void setWidthF(QPen* theWrappedObject, qreal  width);
   Qt::PenStyle  style(QPen* theWrappedObject) const;
   void swap(QPen* theWrappedObject, QPen&  other);
   int  width(QPen* theWrappedObject) const;
   qreal  widthF(QPen* theWrappedObject) const;
    QString py_toString(QPen*);
};





class PythonQtShell_QPixmap : public QPixmap
{
public:
    PythonQtShell_QPixmap():QPixmap(),_wrapper(nullptr) {};
    PythonQtShell_QPixmap(const QPixmap&  arg__1):QPixmap(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QPixmap(const QSize&  arg__1):QPixmap(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QPixmap(const QString&  fileName, const char*  format = nullptr, Qt::ImageConversionFlags  flags = Qt::AutoColor):QPixmap(fileName, format, flags),_wrapper(nullptr) {};
    PythonQtShell_QPixmap(int  w, int  h):QPixmap(w, h),_wrapper(nullptr) {};

   ~PythonQtShell_QPixmap() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPixmap : public QPixmap
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return this->metric(arg__1); }
inline int  py_q_devType() const { return QPixmap::devType(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QPixmap::metric(arg__1); }
inline QPaintEngine*  py_q_paintEngine() const { return QPixmap::paintEngine(); }
};

class PythonQtWrapper_QPixmap : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPixmap* new_QPixmap();
QPixmap* new_QPixmap(const QPixmap&  arg__1);
QPixmap* new_QPixmap(const QSize&  arg__1);
QPixmap* new_QPixmap(const QString&  fileName, const char*  format = nullptr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
QPixmap* new_QPixmap(int  w, int  h);
void delete_QPixmap(QPixmap* obj) { delete obj; }
   qint64  cacheKey(QPixmap* theWrappedObject) const;
   bool  convertFromImage(QPixmap* theWrappedObject, const QImage&  img, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QPixmap  copy(QPixmap* theWrappedObject, const QRect&  rect = QRect()) const;
   QPixmap  copy(QPixmap* theWrappedObject, int  x, int  y, int  width, int  height) const;
   QBitmap  createHeuristicMask(QPixmap* theWrappedObject, bool  clipTight = true) const;
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor, Qt::MaskMode  mode = Qt::MaskInColor) const;
   int  static_QPixmap_defaultDepth();
   int  depth(QPixmap* theWrappedObject) const;
   int  py_q_devType(QPixmap* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPixmap*)theWrappedObject)->py_q_devType());}
   QSizeF  deviceIndependentSize(QPixmap* theWrappedObject) const;
   qreal  devicePixelRatio(QPixmap* theWrappedObject) const;
   void fill(QPixmap* theWrappedObject, const QColor&  fillColor = Qt::white);
   QPixmap  static_QPixmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QPixmap  static_QPixmap_fromImageReader(QImageReader*  imageReader, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   bool  hasAlpha(QPixmap* theWrappedObject) const;
   bool  hasAlphaChannel(QPixmap* theWrappedObject) const;
   int  height(QPixmap* theWrappedObject) const;
   bool  isNull(QPixmap* theWrappedObject) const;
   bool  isQBitmap(QPixmap* theWrappedObject) const;
   bool  load(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = nullptr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   bool  loadFromData(QPixmap* theWrappedObject, const QByteArray&  data, const char*  format = nullptr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QBitmap  mask(QPixmap* theWrappedObject) const;
   int  py_q_metric(QPixmap* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const{  return (((PythonQtPublicPromoter_QPixmap*)theWrappedObject)->py_q_metric(arg__1));}
   void writeTo(QPixmap* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPixmap* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  py_q_paintEngine(QPixmap* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPixmap*)theWrappedObject)->py_q_paintEngine());}
   QRect  rect(QPixmap* theWrappedObject) const;
   bool  save(QPixmap* theWrappedObject, QIODevice*  device, const char*  format = nullptr, int  quality = -1) const;
   bool  save(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = nullptr, int  quality = -1) const;
   QPixmap  scaled(QPixmap* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  scaled(QPixmap* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  scaledToHeight(QPixmap* theWrappedObject, int  h, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  scaledToWidth(QPixmap* theWrappedObject, int  w, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   void scroll(QPixmap* theWrappedObject, int  dx, int  dy, const QRect&  rect, QRegion*  exposed = nullptr);
   void scroll(QPixmap* theWrappedObject, int  dx, int  dy, int  x, int  y, int  width, int  height, QRegion*  exposed = nullptr);
   void setDevicePixelRatio(QPixmap* theWrappedObject, qreal  scaleFactor);
   void setMask(QPixmap* theWrappedObject, const QBitmap&  arg__1);
   QSize  size(QPixmap* theWrappedObject) const;
   void swap(QPixmap* theWrappedObject, QPixmap&  other);
   QImage  toImage(QPixmap* theWrappedObject) const;
   QPixmap  transformed(QPixmap* theWrappedObject, const QTransform&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QTransform  static_QPixmap_trueMatrix(const QTransform&  m, int  w, int  h);
   int  width(QPixmap* theWrappedObject) const;
    QString py_toString(QPixmap*);
    bool __nonzero__(QPixmap* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QPolygon : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPolygon* new_QPolygon();
QPolygon* new_QPolygon(const QList<QPoint >&  v);
QPolygon* new_QPolygon(const QRect&  r, bool  closed = false);
QPolygon* new_QPolygon(const QPolygon& other) {
QPolygon* a = new QPolygon();
*((QPolygon*)a) = other;
return a; }
void delete_QPolygon(QPolygon* obj) { delete obj; }
   void append(QPolygon* theWrappedObject, const QList<QPoint >&  l);
   const QPoint  at(QPolygon* theWrappedObject, qsizetype  i) const;
   const QPoint  back(QPolygon* theWrappedObject) const;
   QRect  boundingRect(QPolygon* theWrappedObject) const;
   qsizetype  capacity(QPolygon* theWrappedObject) const;
   void clear(QPolygon* theWrappedObject);
   const QPoint*  constFirst(QPolygon* theWrappedObject) const;
   const QPoint*  constLast(QPolygon* theWrappedObject) const;
   bool  containsPoint(QPolygon* theWrappedObject, const QPoint&  pt, Qt::FillRule  fillRule) const;
   qsizetype  count(QPolygon* theWrappedObject) const;
   bool  empty(QPolygon* theWrappedObject) const;
   const QPoint*  first(QPolygon* theWrappedObject) const;
   QList<QPoint >  first(QPolygon* theWrappedObject, qsizetype  n) const;
   QList<QPoint >  static_QPolygon_fromVector(const QList<QPoint >&  vector);
   const QPoint  front(QPolygon* theWrappedObject) const;
   QPolygon  intersected(QPolygon* theWrappedObject, const QPolygon&  r) const;
   bool  intersects(QPolygon* theWrappedObject, const QPolygon&  r) const;
   bool  isEmpty(QPolygon* theWrappedObject) const;
   bool  isSharedWith(QPolygon* theWrappedObject, const QList<QPoint >&  other) const;
   const QPoint*  last(QPolygon* theWrappedObject) const;
   QList<QPoint >  last(QPolygon* theWrappedObject, qsizetype  n) const;
   qsizetype  length(QPolygon* theWrappedObject) const;
   qsizetype  static_QPolygon_maxSize();
   qsizetype  max_size(QPolygon* theWrappedObject) const;
   QList<QPoint >  mid(QPolygon* theWrappedObject, qsizetype  pos, qsizetype  len = -1) const;
   void move(QPolygon* theWrappedObject, qsizetype  from, qsizetype  to);
   QPolygon  __mul__(QPolygon* theWrappedObject, const QTransform&  m);
   QList<QPoint >*  __iadd__(QPolygon* theWrappedObject, const QList<QPoint >&  l);
   void writeTo(QPolygon* theWrappedObject, QDataStream&  stream);
   void readFrom(QPolygon* theWrappedObject, QDataStream&  stream);
   QPoint  operator_subscript(QPolygon* theWrappedObject, qsizetype  i);
   const QPoint  operator_subscript(QPolygon* theWrappedObject, qsizetype  i) const;
   void pop_back(QPolygon* theWrappedObject);
   void pop_front(QPolygon* theWrappedObject);
   void remove(QPolygon* theWrappedObject, qsizetype  i, qsizetype  n = 1);
   void removeAt(QPolygon* theWrappedObject, qsizetype  i);
   void removeFirst(QPolygon* theWrappedObject);
   void removeLast(QPolygon* theWrappedObject);
   void reserve(QPolygon* theWrappedObject, qsizetype  size);
   void resize(QPolygon* theWrappedObject, qsizetype  size);
   void resizeForOverwrite(QPolygon* theWrappedObject, qsizetype  size);
   void shrink_to_fit(QPolygon* theWrappedObject);
   qsizetype  size(QPolygon* theWrappedObject) const;
   QList<QPoint >  sliced(QPolygon* theWrappedObject, qsizetype  pos) const;
   QList<QPoint >  sliced(QPolygon* theWrappedObject, qsizetype  pos, qsizetype  n) const;
   void squeeze(QPolygon* theWrappedObject);
   QPolygon  subtracted(QPolygon* theWrappedObject, const QPolygon&  r) const;
   void swap(QPolygon* theWrappedObject, QPolygon&  other);
   void swapItemsAt(QPolygon* theWrappedObject, qsizetype  i, qsizetype  j);
   QPoint  takeAt(QPolygon* theWrappedObject, qsizetype  i);
   QPoint  takeFirst(QPolygon* theWrappedObject);
   QPoint  takeLast(QPolygon* theWrappedObject);
   QList<QPoint >  toList(QPolygon* theWrappedObject) const;
   QPolygonF  toPolygonF(QPolygon* theWrappedObject) const;
   QList<QPoint >  toVector(QPolygon* theWrappedObject) const;
   void translate(QPolygon* theWrappedObject, const QPoint&  offset);
   void translate(QPolygon* theWrappedObject, int  dx, int  dy);
   QPolygon  translated(QPolygon* theWrappedObject, const QPoint&  offset) const;
   QPolygon  translated(QPolygon* theWrappedObject, int  dx, int  dy) const;
   QPolygon  united(QPolygon* theWrappedObject, const QPolygon&  r) const;
   QPoint  value(QPolygon* theWrappedObject, qsizetype  i) const;
    QString py_toString(QPolygon*);
    bool __nonzero__(QPolygon* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QRegion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RegionType )
enum RegionType{
  Rectangle = QRegion::Rectangle,   Ellipse = QRegion::Ellipse};
public Q_SLOTS:
QRegion* new_QRegion();
QRegion* new_QRegion(const QBitmap&  bitmap);
QRegion* new_QRegion(const QPolygon&  pa, Qt::FillRule  fillRule = Qt::OddEvenFill);
QRegion* new_QRegion(const QRect&  r, QRegion::RegionType  t = QRegion::Rectangle);
QRegion* new_QRegion(const QRegion&  region);
QRegion* new_QRegion(int  x, int  y, int  w, int  h, QRegion::RegionType  t = QRegion::Rectangle);
void delete_QRegion(QRegion* obj) { delete obj; }
   const QRect*  begin(QRegion* theWrappedObject) const;
   QRect  boundingRect(QRegion* theWrappedObject) const;
   const QRect*  cbegin(QRegion* theWrappedObject) const;
   const QRect*  cend(QRegion* theWrappedObject) const;
   bool  contains(QRegion* theWrappedObject, const QPoint&  p) const;
   bool  contains(QRegion* theWrappedObject, const QRect&  r) const;
   const QRect*  end(QRegion* theWrappedObject) const;
   QRegion  intersected(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  intersected(QRegion* theWrappedObject, const QRegion&  r) const;
   bool  intersects(QRegion* theWrappedObject, const QRect&  r) const;
   bool  intersects(QRegion* theWrappedObject, const QRegion&  r) const;
   bool  isEmpty(QRegion* theWrappedObject) const;
   bool  isNull(QRegion* theWrappedObject) const;
   bool  __ne__(QRegion* theWrappedObject, const QRegion&  r) const;
   QRegion  __and__(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  __mul__(QRegion* theWrappedObject, const QTransform&  m);
   QRegion  __add__(QRegion* theWrappedObject, const QRect&  r) const;
   void writeTo(QRegion* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QRegion* theWrappedObject, const QRegion&  r) const;
   void readFrom(QRegion* theWrappedObject, QDataStream&  arg__1);
   int  rectCount(QRegion* theWrappedObject) const;
   void setRects(QRegion* theWrappedObject, const QRect*  rect, int  num);
   QRegion  subtracted(QRegion* theWrappedObject, const QRegion&  r) const;
   void swap(QRegion* theWrappedObject, QRegion&  other);
   void translate(QRegion* theWrappedObject, const QPoint&  p);
   void translate(QRegion* theWrappedObject, int  dx, int  dy);
   QRegion  translated(QRegion* theWrappedObject, const QPoint&  p) const;
   QRegion  translated(QRegion* theWrappedObject, int  dx, int  dy) const;
   QRegion  united(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  united(QRegion* theWrappedObject, const QRegion&  r) const;
   QRegion  xored(QRegion* theWrappedObject, const QRegion&  r) const;
    QString py_toString(QRegion*);
    bool __nonzero__(QRegion* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QSizePolicy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ControlType Policy PolicyFlag )
Q_FLAGS(ControlTypes )
enum ControlType{
  DefaultType = QSizePolicy::DefaultType,   ButtonBox = QSizePolicy::ButtonBox,   CheckBox = QSizePolicy::CheckBox,   ComboBox = QSizePolicy::ComboBox,   Frame = QSizePolicy::Frame,   GroupBox = QSizePolicy::GroupBox,   Label = QSizePolicy::Label,   Line = QSizePolicy::Line,   LineEdit = QSizePolicy::LineEdit,   PushButton = QSizePolicy::PushButton,   RadioButton = QSizePolicy::RadioButton,   Slider = QSizePolicy::Slider,   SpinBox = QSizePolicy::SpinBox,   TabWidget = QSizePolicy::TabWidget,   ToolButton = QSizePolicy::ToolButton};
enum Policy{
  Fixed = QSizePolicy::Fixed,   Minimum = QSizePolicy::Minimum,   Maximum = QSizePolicy::Maximum,   Preferred = QSizePolicy::Preferred,   MinimumExpanding = QSizePolicy::MinimumExpanding,   Expanding = QSizePolicy::Expanding,   Ignored = QSizePolicy::Ignored};
enum PolicyFlag{
  GrowFlag = QSizePolicy::GrowFlag,   ExpandFlag = QSizePolicy::ExpandFlag,   ShrinkFlag = QSizePolicy::ShrinkFlag,   IgnoreFlag = QSizePolicy::IgnoreFlag};
Q_DECLARE_FLAGS(ControlTypes, ControlType)
public Q_SLOTS:
QSizePolicy* new_QSizePolicy();
QSizePolicy* new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical, QSizePolicy::ControlType  type = QSizePolicy::DefaultType);
QSizePolicy* new_QSizePolicy(const QSizePolicy& other) {
QSizePolicy* a = new QSizePolicy();
*((QSizePolicy*)a) = other;
return a; }
void delete_QSizePolicy(QSizePolicy* obj) { delete obj; }
   QSizePolicy::ControlType  controlType(QSizePolicy* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QSizePolicy* theWrappedObject) const;
   bool  hasHeightForWidth(QSizePolicy* theWrappedObject) const;
   bool  hasWidthForHeight(QSizePolicy* theWrappedObject) const;
   QSizePolicy::Policy  horizontalPolicy(QSizePolicy* theWrappedObject) const;
   int  horizontalStretch(QSizePolicy* theWrappedObject) const;
   bool  __ne__(QSizePolicy* theWrappedObject, const QSizePolicy&  s) const;
   void writeTo(QSizePolicy* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QSizePolicy* theWrappedObject, const QSizePolicy&  s) const;
   void readFrom(QSizePolicy* theWrappedObject, QDataStream&  arg__1);
   bool  retainSizeWhenHidden(QSizePolicy* theWrappedObject) const;
   void setControlType(QSizePolicy* theWrappedObject, QSizePolicy::ControlType  type);
   void setHeightForWidth(QSizePolicy* theWrappedObject, bool  b);
   void setHorizontalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d);
   void setHorizontalStretch(QSizePolicy* theWrappedObject, int  stretchFactor);
   void setRetainSizeWhenHidden(QSizePolicy* theWrappedObject, bool  retainSize);
   void setVerticalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d);
   void setVerticalStretch(QSizePolicy* theWrappedObject, int  stretchFactor);
   void setWidthForHeight(QSizePolicy* theWrappedObject, bool  b);
   void transpose(QSizePolicy* theWrappedObject);
   QSizePolicy  transposed(QSizePolicy* theWrappedObject) const;
   QSizePolicy::Policy  verticalPolicy(QSizePolicy* theWrappedObject) const;
   int  verticalStretch(QSizePolicy* theWrappedObject) const;
    QString py_toString(QSizePolicy*);
};





class PythonQtWrapper_QTextFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FormatType ObjectTypes PageBreakFlag Property )
Q_FLAGS(PageBreakFlags )
enum FormatType{
  InvalidFormat = QTextFormat::InvalidFormat,   BlockFormat = QTextFormat::BlockFormat,   CharFormat = QTextFormat::CharFormat,   ListFormat = QTextFormat::ListFormat,   FrameFormat = QTextFormat::FrameFormat,   UserFormat = QTextFormat::UserFormat};
enum ObjectTypes{
  NoObject = QTextFormat::NoObject,   ImageObject = QTextFormat::ImageObject,   TableObject = QTextFormat::TableObject,   TableCellObject = QTextFormat::TableCellObject,   UserObject = QTextFormat::UserObject};
enum PageBreakFlag{
  PageBreak_Auto = QTextFormat::PageBreak_Auto,   PageBreak_AlwaysBefore = QTextFormat::PageBreak_AlwaysBefore,   PageBreak_AlwaysAfter = QTextFormat::PageBreak_AlwaysAfter};
enum Property{
  ObjectIndex = QTextFormat::ObjectIndex,   CssFloat = QTextFormat::CssFloat,   LayoutDirection = QTextFormat::LayoutDirection,   OutlinePen = QTextFormat::OutlinePen,   BackgroundBrush = QTextFormat::BackgroundBrush,   ForegroundBrush = QTextFormat::ForegroundBrush,   BackgroundImageUrl = QTextFormat::BackgroundImageUrl,   BlockAlignment = QTextFormat::BlockAlignment,   BlockTopMargin = QTextFormat::BlockTopMargin,   BlockBottomMargin = QTextFormat::BlockBottomMargin,   BlockLeftMargin = QTextFormat::BlockLeftMargin,   BlockRightMargin = QTextFormat::BlockRightMargin,   TextIndent = QTextFormat::TextIndent,   TabPositions = QTextFormat::TabPositions,   BlockIndent = QTextFormat::BlockIndent,   LineHeight = QTextFormat::LineHeight,   LineHeightType = QTextFormat::LineHeightType,   BlockNonBreakableLines = QTextFormat::BlockNonBreakableLines,   BlockTrailingHorizontalRulerWidth = QTextFormat::BlockTrailingHorizontalRulerWidth,   HeadingLevel = QTextFormat::HeadingLevel,   BlockQuoteLevel = QTextFormat::BlockQuoteLevel,   BlockCodeLanguage = QTextFormat::BlockCodeLanguage,   BlockCodeFence = QTextFormat::BlockCodeFence,   BlockMarker = QTextFormat::BlockMarker,   FirstFontProperty = QTextFormat::FirstFontProperty,   FontCapitalization = QTextFormat::FontCapitalization,   FontLetterSpacing = QTextFormat::FontLetterSpacing,   FontWordSpacing = QTextFormat::FontWordSpacing,   FontStyleHint = QTextFormat::FontStyleHint,   FontStyleStrategy = QTextFormat::FontStyleStrategy,   FontKerning = QTextFormat::FontKerning,   FontHintingPreference = QTextFormat::FontHintingPreference,   FontFamilies = QTextFormat::FontFamilies,   FontStyleName = QTextFormat::FontStyleName,   FontLetterSpacingType = QTextFormat::FontLetterSpacingType,   FontStretch = QTextFormat::FontStretch,   FontFamily = QTextFormat::FontFamily,   FontPointSize = QTextFormat::FontPointSize,   FontSizeAdjustment = QTextFormat::FontSizeAdjustment,   FontSizeIncrement = QTextFormat::FontSizeIncrement,   FontWeight = QTextFormat::FontWeight,   FontItalic = QTextFormat::FontItalic,   FontUnderline = QTextFormat::FontUnderline,   FontOverline = QTextFormat::FontOverline,   FontStrikeOut = QTextFormat::FontStrikeOut,   FontFixedPitch = QTextFormat::FontFixedPitch,   FontPixelSize = QTextFormat::FontPixelSize,   FontFeatures = QTextFormat::FontFeatures,   FontVariableAxes = QTextFormat::FontVariableAxes,   LastFontProperty = QTextFormat::LastFontProperty,   TextUnderlineColor = QTextFormat::TextUnderlineColor,   TextVerticalAlignment = QTextFormat::TextVerticalAlignment,   TextOutline = QTextFormat::TextOutline,   TextUnderlineStyle = QTextFormat::TextUnderlineStyle,   TextToolTip = QTextFormat::TextToolTip,   TextSuperScriptBaseline = QTextFormat::TextSuperScriptBaseline,   TextSubScriptBaseline = QTextFormat::TextSubScriptBaseline,   TextBaselineOffset = QTextFormat::TextBaselineOffset,   IsAnchor = QTextFormat::IsAnchor,   AnchorHref = QTextFormat::AnchorHref,   AnchorName = QTextFormat::AnchorName,   OldFontLetterSpacingType = QTextFormat::OldFontLetterSpacingType,   OldFontStretch = QTextFormat::OldFontStretch,   OldTextUnderlineColor = QTextFormat::OldTextUnderlineColor,   OldFontFamily = QTextFormat::OldFontFamily,   ObjectType = QTextFormat::ObjectType,   ListStyle = QTextFormat::ListStyle,   ListIndent = QTextFormat::ListIndent,   ListNumberPrefix = QTextFormat::ListNumberPrefix,   ListNumberSuffix = QTextFormat::ListNumberSuffix,   ListStart = QTextFormat::ListStart,   FrameBorder = QTextFormat::FrameBorder,   FrameMargin = QTextFormat::FrameMargin,   FramePadding = QTextFormat::FramePadding,   FrameWidth = QTextFormat::FrameWidth,   FrameHeight = QTextFormat::FrameHeight,   FrameTopMargin = QTextFormat::FrameTopMargin,   FrameBottomMargin = QTextFormat::FrameBottomMargin,   FrameLeftMargin = QTextFormat::FrameLeftMargin,   FrameRightMargin = QTextFormat::FrameRightMargin,   FrameBorderBrush = QTextFormat::FrameBorderBrush,   FrameBorderStyle = QTextFormat::FrameBorderStyle,   TableColumns = QTextFormat::TableColumns,   TableColumnWidthConstraints = QTextFormat::TableColumnWidthConstraints,   TableCellSpacing = QTextFormat::TableCellSpacing,   TableCellPadding = QTextFormat::TableCellPadding,   TableHeaderRowCount = QTextFormat::TableHeaderRowCount,   TableBorderCollapse = QTextFormat::TableBorderCollapse,   TableCellRowSpan = QTextFormat::TableCellRowSpan,   TableCellColumnSpan = QTextFormat::TableCellColumnSpan,   TableCellTopPadding = QTextFormat::TableCellTopPadding,   TableCellBottomPadding = QTextFormat::TableCellBottomPadding,   TableCellLeftPadding = QTextFormat::TableCellLeftPadding,   TableCellRightPadding = QTextFormat::TableCellRightPadding,   TableCellTopBorder = QTextFormat::TableCellTopBorder,   TableCellBottomBorder = QTextFormat::TableCellBottomBorder,   TableCellLeftBorder = QTextFormat::TableCellLeftBorder,   TableCellRightBorder = QTextFormat::TableCellRightBorder,   TableCellTopBorderStyle = QTextFormat::TableCellTopBorderStyle,   TableCellBottomBorderStyle = QTextFormat::TableCellBottomBorderStyle,   TableCellLeftBorderStyle = QTextFormat::TableCellLeftBorderStyle,   TableCellRightBorderStyle = QTextFormat::TableCellRightBorderStyle,   TableCellTopBorderBrush = QTextFormat::TableCellTopBorderBrush,   TableCellBottomBorderBrush = QTextFormat::TableCellBottomBorderBrush,   TableCellLeftBorderBrush = QTextFormat::TableCellLeftBorderBrush,   TableCellRightBorderBrush = QTextFormat::TableCellRightBorderBrush,   ImageName = QTextFormat::ImageName,   ImageTitle = QTextFormat::ImageTitle,   ImageAltText = QTextFormat::ImageAltText,   ImageWidth = QTextFormat::ImageWidth,   ImageHeight = QTextFormat::ImageHeight,   ImageQuality = QTextFormat::ImageQuality,   ImageMaxWidth = QTextFormat::ImageMaxWidth,   FullWidthSelection = QTextFormat::FullWidthSelection,   PageBreakPolicy = QTextFormat::PageBreakPolicy,   UserProperty = QTextFormat::UserProperty};
Q_DECLARE_FLAGS(PageBreakFlags, PageBreakFlag)
public Q_SLOTS:
QTextFormat* new_QTextFormat();
QTextFormat* new_QTextFormat(const QTextFormat&  rhs);
QTextFormat* new_QTextFormat(int  type);
void delete_QTextFormat(QTextFormat* obj) { delete obj; }
   QBrush  background(QTextFormat* theWrappedObject) const;
   bool  boolProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QBrush  brushProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void clearBackground(QTextFormat* theWrappedObject);
   void clearForeground(QTextFormat* theWrappedObject);
   void clearProperty(QTextFormat* theWrappedObject, int  propertyId);
   QColor  colorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   qreal  doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QBrush  foreground(QTextFormat* theWrappedObject) const;
   bool  hasProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   int  intProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isBlockFormat(QTextFormat* theWrappedObject) const;
   bool  isCharFormat(QTextFormat* theWrappedObject) const;
   bool  isEmpty(QTextFormat* theWrappedObject) const;
   bool  isFrameFormat(QTextFormat* theWrappedObject) const;
   bool  isImageFormat(QTextFormat* theWrappedObject) const;
   bool  isListFormat(QTextFormat* theWrappedObject) const;
   bool  isTableCellFormat(QTextFormat* theWrappedObject) const;
   bool  isTableFormat(QTextFormat* theWrappedObject) const;
   bool  isValid(QTextFormat* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QTextFormat* theWrappedObject) const;
   QTextLength  lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QList<QTextLength >  lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void merge(QTextFormat* theWrappedObject, const QTextFormat&  other);
   int  objectIndex(QTextFormat* theWrappedObject) const;
   int  objectType(QTextFormat* theWrappedObject) const;
   bool  __ne__(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const;
   void writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const;
   void readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   QPen  penProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QMap<int , QVariant >  properties(QTextFormat* theWrappedObject) const;
   QVariant  property(QTextFormat* theWrappedObject, int  propertyId) const;
   int  propertyCount(QTextFormat* theWrappedObject) const;
   void setBackground(QTextFormat* theWrappedObject, const QBrush&  brush);
   void setForeground(QTextFormat* theWrappedObject, const QBrush&  brush);
   void setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction);
   void setObjectIndex(QTextFormat* theWrappedObject, int  object);
   void setObjectType(QTextFormat* theWrappedObject, int  type);
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QList<QTextLength >&  lengths);
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value);
   QString  stringProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void swap(QTextFormat* theWrappedObject, QTextFormat&  other);
   QTextBlockFormat  toBlockFormat(QTextFormat* theWrappedObject) const;
   QTextCharFormat  toCharFormat(QTextFormat* theWrappedObject) const;
   QTextFrameFormat  toFrameFormat(QTextFormat* theWrappedObject) const;
   QTextImageFormat  toImageFormat(QTextFormat* theWrappedObject) const;
   QTextListFormat  toListFormat(QTextFormat* theWrappedObject) const;
   QTextTableCellFormat  toTableCellFormat(QTextFormat* theWrappedObject) const;
   QTextTableFormat  toTableFormat(QTextFormat* theWrappedObject) const;
   int  type(QTextFormat* theWrappedObject) const;
    QString py_toString(QTextFormat*);
    bool __nonzero__(QTextFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QTextLength : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  VariableLength = QTextLength::VariableLength,   FixedLength = QTextLength::FixedLength,   PercentageLength = QTextLength::PercentageLength};
public Q_SLOTS:
QTextLength* new_QTextLength();
QTextLength* new_QTextLength(QTextLength::Type  type, qreal  value);
QTextLength* new_QTextLength(const QTextLength& other) {
QTextLength* a = new QTextLength();
*((QTextLength*)a) = other;
return a; }
void delete_QTextLength(QTextLength* obj) { delete obj; }
   bool  __ne__(QTextLength* theWrappedObject, const QTextLength&  other) const;
   void writeTo(QTextLength* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTextLength* theWrappedObject, const QTextLength&  other) const;
   void readFrom(QTextLength* theWrappedObject, QDataStream&  arg__1);
   qreal  rawValue(QTextLength* theWrappedObject) const;
   QTextLength::Type  type(QTextLength* theWrappedObject) const;
   qreal  value(QTextLength* theWrappedObject, qreal  maximumLength) const;
    QString py_toString(QTextLength*);
};





class PythonQtWrapper_QTransform : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransformationType )
enum TransformationType{
  TxNone = QTransform::TxNone,   TxTranslate = QTransform::TxTranslate,   TxScale = QTransform::TxScale,   TxRotate = QTransform::TxRotate,   TxShear = QTransform::TxShear,   TxProject = QTransform::TxProject};
public Q_SLOTS:
QTransform* new_QTransform();
QTransform* new_QTransform(const QTransform&  other);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h21, qreal  h22, qreal  dx, qreal  dy);
void delete_QTransform(QTransform* obj) { delete obj; }
   QTransform  adjoint(QTransform* theWrappedObject) const;
   qreal  determinant(QTransform* theWrappedObject) const;
   qreal  dx(QTransform* theWrappedObject) const;
   qreal  dy(QTransform* theWrappedObject) const;
   QTransform  static_QTransform_fromScale(qreal  dx, qreal  dy);
   QTransform  static_QTransform_fromTranslate(qreal  dx, qreal  dy);
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = nullptr) const;
   bool  isAffine(QTransform* theWrappedObject) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   bool  isInvertible(QTransform* theWrappedObject) const;
   bool  isRotating(QTransform* theWrappedObject) const;
   bool  isScaling(QTransform* theWrappedObject) const;
   bool  isTranslating(QTransform* theWrappedObject) const;
   qreal  m11(QTransform* theWrappedObject) const;
   qreal  m12(QTransform* theWrappedObject) const;
   qreal  m13(QTransform* theWrappedObject) const;
   qreal  m21(QTransform* theWrappedObject) const;
   qreal  m22(QTransform* theWrappedObject) const;
   qreal  m23(QTransform* theWrappedObject) const;
   qreal  m31(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   qreal  m33(QTransform* theWrappedObject) const;
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   bool  __ne__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   QTransform  __mul__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __imul__(QTransform* theWrappedObject, const QTransform&  arg__1);
   QTransform*  __imul__(QTransform* theWrappedObject, qreal  div);
   QTransform  __add__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __iadd__(QTransform* theWrappedObject, qreal  div);
   QTransform  __sub__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __isub__(QTransform* theWrappedObject, qreal  div);
   QTransform  __div__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __idiv__(QTransform* theWrappedObject, qreal  div);
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   void reset(QTransform* theWrappedObject);
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis, qreal  distanceToPlane);
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis, qreal  distanceToPlane);
   QTransform*  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   QTransform*  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   QTransform*  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   QTransform  transposed(QTransform* theWrappedObject) const;
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
    QString py_toString(QTransform*);
};


