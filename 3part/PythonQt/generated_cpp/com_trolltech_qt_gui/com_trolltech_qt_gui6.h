#include <PythonQt.h>
#include <QObject>
#include <QPainterPath>
#include <QPixmap>
#include <QVarLengthArray>
#include <QVariant>
#include <QWidget>
#include <QtOpenGLWidgets/qopenglwidget.h>
#include <QtPrintSupport/qpagesetupdialog.h>
#include <QtPrintSupport/qprinter.h>
#include <QtWidgets/qgesture.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsproxywidget.h>
#include <QtWidgets/qlayout.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qwidget.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcolorspace.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qglyphrun.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qopenglcontext.h>
#include <qopengltexture.h>
#include <qopengltextureblitter.h>
#include <qopengltimerquery.h>
#include <qopenglversionfunctionsfactory.h>
#include <qopenglversionprofile.h>
#include <qopenglvertexarrayobject.h>
#include <qopenglwindow.h>
#include <qpagedpaintdevice.h>
#include <qpagelayout.h>
#include <qpageranges.h>
#include <qpagesize.h>
#include <qpaintdevice.h>
#include <qpaintdevicewindow.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpainterstateguard.h>
#include <qpalette.h>
#include <qpdfoutputintent.h>
#include <qpdfwriter.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qstatictext.h>
#include <qsurfaceformat.h>
#include <qtextoption.h>
#include <qthread.h>
#include <qtransform.h>
#include <qurl.h>
#include <quuid.h>
#include <qwindow.h>



class PythonQtWrapper_QOpenGLTexture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindingTarget ComparisonFunction ComparisonMode CoordinateDirection CubeMapFace DepthStencilMode Feature Filter MipMapGeneration PixelFormat PixelType SwizzleComponent SwizzleValue Target TextureFormat TextureFormatClass TextureUnitReset WrapMode )
Q_FLAGS(Features )
enum BindingTarget{
  BindingTarget1D = QOpenGLTexture::BindingTarget1D,   BindingTarget1DArray = QOpenGLTexture::BindingTarget1DArray,   BindingTarget2D = QOpenGLTexture::BindingTarget2D,   BindingTarget2DArray = QOpenGLTexture::BindingTarget2DArray,   BindingTarget3D = QOpenGLTexture::BindingTarget3D,   BindingTargetCubeMap = QOpenGLTexture::BindingTargetCubeMap,   BindingTargetCubeMapArray = QOpenGLTexture::BindingTargetCubeMapArray,   BindingTarget2DMultisample = QOpenGLTexture::BindingTarget2DMultisample,   BindingTarget2DMultisampleArray = QOpenGLTexture::BindingTarget2DMultisampleArray,   BindingTargetRectangle = QOpenGLTexture::BindingTargetRectangle,   BindingTargetBuffer = QOpenGLTexture::BindingTargetBuffer};
enum ComparisonFunction{
  CompareLessEqual = QOpenGLTexture::CompareLessEqual,   CompareGreaterEqual = QOpenGLTexture::CompareGreaterEqual,   CompareLess = QOpenGLTexture::CompareLess,   CompareGreater = QOpenGLTexture::CompareGreater,   CompareEqual = QOpenGLTexture::CompareEqual,   CompareNotEqual = QOpenGLTexture::CompareNotEqual,   CompareAlways = QOpenGLTexture::CompareAlways,   CompareNever = QOpenGLTexture::CompareNever,   CommpareNotEqual = QOpenGLTexture::CommpareNotEqual};
enum ComparisonMode{
  CompareRefToTexture = QOpenGLTexture::CompareRefToTexture,   CompareNone = QOpenGLTexture::CompareNone};
enum CoordinateDirection{
  DirectionS = QOpenGLTexture::DirectionS,   DirectionT = QOpenGLTexture::DirectionT,   DirectionR = QOpenGLTexture::DirectionR};
enum CubeMapFace{
  CubeMapPositiveX = QOpenGLTexture::CubeMapPositiveX,   CubeMapNegativeX = QOpenGLTexture::CubeMapNegativeX,   CubeMapPositiveY = QOpenGLTexture::CubeMapPositiveY,   CubeMapNegativeY = QOpenGLTexture::CubeMapNegativeY,   CubeMapPositiveZ = QOpenGLTexture::CubeMapPositiveZ,   CubeMapNegativeZ = QOpenGLTexture::CubeMapNegativeZ};
enum DepthStencilMode{
  DepthMode = QOpenGLTexture::DepthMode,   StencilMode = QOpenGLTexture::StencilMode};
enum Feature{
  ImmutableStorage = QOpenGLTexture::ImmutableStorage,   ImmutableMultisampleStorage = QOpenGLTexture::ImmutableMultisampleStorage,   TextureRectangle = QOpenGLTexture::TextureRectangle,   TextureArrays = QOpenGLTexture::TextureArrays,   Texture3D = QOpenGLTexture::Texture3D,   TextureMultisample = QOpenGLTexture::TextureMultisample,   TextureBuffer = QOpenGLTexture::TextureBuffer,   TextureCubeMapArrays = QOpenGLTexture::TextureCubeMapArrays,   Swizzle = QOpenGLTexture::Swizzle,   StencilTexturing = QOpenGLTexture::StencilTexturing,   AnisotropicFiltering = QOpenGLTexture::AnisotropicFiltering,   NPOTTextures = QOpenGLTexture::NPOTTextures,   NPOTTextureRepeat = QOpenGLTexture::NPOTTextureRepeat,   Texture1D = QOpenGLTexture::Texture1D,   TextureComparisonOperators = QOpenGLTexture::TextureComparisonOperators,   TextureMipMapLevel = QOpenGLTexture::TextureMipMapLevel,   MaxFeatureFlag = QOpenGLTexture::MaxFeatureFlag};
enum Filter{
  Nearest = QOpenGLTexture::Nearest,   Linear = QOpenGLTexture::Linear,   NearestMipMapNearest = QOpenGLTexture::NearestMipMapNearest,   NearestMipMapLinear = QOpenGLTexture::NearestMipMapLinear,   LinearMipMapNearest = QOpenGLTexture::LinearMipMapNearest,   LinearMipMapLinear = QOpenGLTexture::LinearMipMapLinear};
enum MipMapGeneration{
  GenerateMipMaps = QOpenGLTexture::GenerateMipMaps,   DontGenerateMipMaps = QOpenGLTexture::DontGenerateMipMaps};
enum PixelFormat{
  NoSourceFormat = QOpenGLTexture::NoSourceFormat,   Red = QOpenGLTexture::Red,   RG = QOpenGLTexture::RG,   RGB = QOpenGLTexture::RGB,   BGR = QOpenGLTexture::BGR,   RGBA = QOpenGLTexture::RGBA,   BGRA = QOpenGLTexture::BGRA,   Red_Integer = QOpenGLTexture::Red_Integer,   RG_Integer = QOpenGLTexture::RG_Integer,   RGB_Integer = QOpenGLTexture::RGB_Integer,   BGR_Integer = QOpenGLTexture::BGR_Integer,   RGBA_Integer = QOpenGLTexture::RGBA_Integer,   BGRA_Integer = QOpenGLTexture::BGRA_Integer,   Stencil = QOpenGLTexture::Stencil,   Depth = QOpenGLTexture::Depth,   DepthStencil = QOpenGLTexture::DepthStencil,   Alpha = QOpenGLTexture::Alpha,   Luminance = QOpenGLTexture::Luminance,   LuminanceAlpha = QOpenGLTexture::LuminanceAlpha};
enum PixelType{
  NoPixelType = QOpenGLTexture::NoPixelType,   Int8 = QOpenGLTexture::Int8,   UInt8 = QOpenGLTexture::UInt8,   Int16 = QOpenGLTexture::Int16,   UInt16 = QOpenGLTexture::UInt16,   Int32 = QOpenGLTexture::Int32,   UInt32 = QOpenGLTexture::UInt32,   Float16 = QOpenGLTexture::Float16,   Float16OES = QOpenGLTexture::Float16OES,   Float32 = QOpenGLTexture::Float32,   UInt32_RGB9_E5 = QOpenGLTexture::UInt32_RGB9_E5,   UInt32_RG11B10F = QOpenGLTexture::UInt32_RG11B10F,   UInt8_RG3B2 = QOpenGLTexture::UInt8_RG3B2,   UInt8_RG3B2_Rev = QOpenGLTexture::UInt8_RG3B2_Rev,   UInt16_RGB5A1 = QOpenGLTexture::UInt16_RGB5A1,   UInt16_RGB5A1_Rev = QOpenGLTexture::UInt16_RGB5A1_Rev,   UInt16_R5G6B5 = QOpenGLTexture::UInt16_R5G6B5,   UInt16_R5G6B5_Rev = QOpenGLTexture::UInt16_R5G6B5_Rev,   UInt16_RGBA4 = QOpenGLTexture::UInt16_RGBA4,   UInt16_RGBA4_Rev = QOpenGLTexture::UInt16_RGBA4_Rev,   UInt32_RGBA8 = QOpenGLTexture::UInt32_RGBA8,   UInt32_RGBA8_Rev = QOpenGLTexture::UInt32_RGBA8_Rev,   UInt32_RGB10A2 = QOpenGLTexture::UInt32_RGB10A2,   UInt32_RGB10A2_Rev = QOpenGLTexture::UInt32_RGB10A2_Rev,   UInt32_D24S8 = QOpenGLTexture::UInt32_D24S8,   Float32_D32_UInt32_S8_X24 = QOpenGLTexture::Float32_D32_UInt32_S8_X24};
enum SwizzleComponent{
  SwizzleRed = QOpenGLTexture::SwizzleRed,   SwizzleGreen = QOpenGLTexture::SwizzleGreen,   SwizzleBlue = QOpenGLTexture::SwizzleBlue,   SwizzleAlpha = QOpenGLTexture::SwizzleAlpha};
enum SwizzleValue{
  RedValue = QOpenGLTexture::RedValue,   GreenValue = QOpenGLTexture::GreenValue,   BlueValue = QOpenGLTexture::BlueValue,   AlphaValue = QOpenGLTexture::AlphaValue,   ZeroValue = QOpenGLTexture::ZeroValue,   OneValue = QOpenGLTexture::OneValue};
enum Target{
  Target1D = QOpenGLTexture::Target1D,   Target1DArray = QOpenGLTexture::Target1DArray,   Target2D = QOpenGLTexture::Target2D,   Target2DArray = QOpenGLTexture::Target2DArray,   Target3D = QOpenGLTexture::Target3D,   TargetCubeMap = QOpenGLTexture::TargetCubeMap,   TargetCubeMapArray = QOpenGLTexture::TargetCubeMapArray,   Target2DMultisample = QOpenGLTexture::Target2DMultisample,   Target2DMultisampleArray = QOpenGLTexture::Target2DMultisampleArray,   TargetRectangle = QOpenGLTexture::TargetRectangle,   TargetBuffer = QOpenGLTexture::TargetBuffer};
enum TextureFormat{
  NoFormat = QOpenGLTexture::NoFormat,   R8_UNorm = QOpenGLTexture::R8_UNorm,   RG8_UNorm = QOpenGLTexture::RG8_UNorm,   RGB8_UNorm = QOpenGLTexture::RGB8_UNorm,   RGBA8_UNorm = QOpenGLTexture::RGBA8_UNorm,   R16_UNorm = QOpenGLTexture::R16_UNorm,   RG16_UNorm = QOpenGLTexture::RG16_UNorm,   RGB16_UNorm = QOpenGLTexture::RGB16_UNorm,   RGBA16_UNorm = QOpenGLTexture::RGBA16_UNorm,   R8_SNorm = QOpenGLTexture::R8_SNorm,   RG8_SNorm = QOpenGLTexture::RG8_SNorm,   RGB8_SNorm = QOpenGLTexture::RGB8_SNorm,   RGBA8_SNorm = QOpenGLTexture::RGBA8_SNorm,   R16_SNorm = QOpenGLTexture::R16_SNorm,   RG16_SNorm = QOpenGLTexture::RG16_SNorm,   RGB16_SNorm = QOpenGLTexture::RGB16_SNorm,   RGBA16_SNorm = QOpenGLTexture::RGBA16_SNorm,   R8U = QOpenGLTexture::R8U,   RG8U = QOpenGLTexture::RG8U,   RGB8U = QOpenGLTexture::RGB8U,   RGBA8U = QOpenGLTexture::RGBA8U,   R16U = QOpenGLTexture::R16U,   RG16U = QOpenGLTexture::RG16U,   RGB16U = QOpenGLTexture::RGB16U,   RGBA16U = QOpenGLTexture::RGBA16U,   R32U = QOpenGLTexture::R32U,   RG32U = QOpenGLTexture::RG32U,   RGB32U = QOpenGLTexture::RGB32U,   RGBA32U = QOpenGLTexture::RGBA32U,   R8I = QOpenGLTexture::R8I,   RG8I = QOpenGLTexture::RG8I,   RGB8I = QOpenGLTexture::RGB8I,   RGBA8I = QOpenGLTexture::RGBA8I,   R16I = QOpenGLTexture::R16I,   RG16I = QOpenGLTexture::RG16I,   RGB16I = QOpenGLTexture::RGB16I,   RGBA16I = QOpenGLTexture::RGBA16I,   R32I = QOpenGLTexture::R32I,   RG32I = QOpenGLTexture::RG32I,   RGB32I = QOpenGLTexture::RGB32I,   RGBA32I = QOpenGLTexture::RGBA32I,   R16F = QOpenGLTexture::R16F,   RG16F = QOpenGLTexture::RG16F,   RGB16F = QOpenGLTexture::RGB16F,   RGBA16F = QOpenGLTexture::RGBA16F,   R32F = QOpenGLTexture::R32F,   RG32F = QOpenGLTexture::RG32F,   RGB32F = QOpenGLTexture::RGB32F,   RGBA32F = QOpenGLTexture::RGBA32F,   RGB9E5 = QOpenGLTexture::RGB9E5,   RG11B10F = QOpenGLTexture::RG11B10F,   RG3B2 = QOpenGLTexture::RG3B2,   R5G6B5 = QOpenGLTexture::R5G6B5,   RGB5A1 = QOpenGLTexture::RGB5A1,   RGBA4 = QOpenGLTexture::RGBA4,   RGB10A2 = QOpenGLTexture::RGB10A2,   D16 = QOpenGLTexture::D16,   D24 = QOpenGLTexture::D24,   D24S8 = QOpenGLTexture::D24S8,   D32 = QOpenGLTexture::D32,   D32F = QOpenGLTexture::D32F,   D32FS8X24 = QOpenGLTexture::D32FS8X24,   S8 = QOpenGLTexture::S8,   RGB_DXT1 = QOpenGLTexture::RGB_DXT1,   RGBA_DXT1 = QOpenGLTexture::RGBA_DXT1,   RGBA_DXT3 = QOpenGLTexture::RGBA_DXT3,   RGBA_DXT5 = QOpenGLTexture::RGBA_DXT5,   R_ATI1N_UNorm = QOpenGLTexture::R_ATI1N_UNorm,   R_ATI1N_SNorm = QOpenGLTexture::R_ATI1N_SNorm,   RG_ATI2N_UNorm = QOpenGLTexture::RG_ATI2N_UNorm,   RG_ATI2N_SNorm = QOpenGLTexture::RG_ATI2N_SNorm,   RGB_BP_UNSIGNED_FLOAT = QOpenGLTexture::RGB_BP_UNSIGNED_FLOAT,   RGB_BP_SIGNED_FLOAT = QOpenGLTexture::RGB_BP_SIGNED_FLOAT,   RGB_BP_UNorm = QOpenGLTexture::RGB_BP_UNorm,   R11_EAC_UNorm = QOpenGLTexture::R11_EAC_UNorm,   R11_EAC_SNorm = QOpenGLTexture::R11_EAC_SNorm,   RG11_EAC_UNorm = QOpenGLTexture::RG11_EAC_UNorm,   RG11_EAC_SNorm = QOpenGLTexture::RG11_EAC_SNorm,   RGB8_ETC2 = QOpenGLTexture::RGB8_ETC2,   SRGB8_ETC2 = QOpenGLTexture::SRGB8_ETC2,   RGB8_PunchThrough_Alpha1_ETC2 = QOpenGLTexture::RGB8_PunchThrough_Alpha1_ETC2,   SRGB8_PunchThrough_Alpha1_ETC2 = QOpenGLTexture::SRGB8_PunchThrough_Alpha1_ETC2,   RGBA8_ETC2_EAC = QOpenGLTexture::RGBA8_ETC2_EAC,   SRGB8_Alpha8_ETC2_EAC = QOpenGLTexture::SRGB8_Alpha8_ETC2_EAC,   RGB8_ETC1 = QOpenGLTexture::RGB8_ETC1,   RGBA_ASTC_4x4 = QOpenGLTexture::RGBA_ASTC_4x4,   RGBA_ASTC_5x4 = QOpenGLTexture::RGBA_ASTC_5x4,   RGBA_ASTC_5x5 = QOpenGLTexture::RGBA_ASTC_5x5,   RGBA_ASTC_6x5 = QOpenGLTexture::RGBA_ASTC_6x5,   RGBA_ASTC_6x6 = QOpenGLTexture::RGBA_ASTC_6x6,   RGBA_ASTC_8x5 = QOpenGLTexture::RGBA_ASTC_8x5,   RGBA_ASTC_8x6 = QOpenGLTexture::RGBA_ASTC_8x6,   RGBA_ASTC_8x8 = QOpenGLTexture::RGBA_ASTC_8x8,   RGBA_ASTC_10x5 = QOpenGLTexture::RGBA_ASTC_10x5,   RGBA_ASTC_10x6 = QOpenGLTexture::RGBA_ASTC_10x6,   RGBA_ASTC_10x8 = QOpenGLTexture::RGBA_ASTC_10x8,   RGBA_ASTC_10x10 = QOpenGLTexture::RGBA_ASTC_10x10,   RGBA_ASTC_12x10 = QOpenGLTexture::RGBA_ASTC_12x10,   RGBA_ASTC_12x12 = QOpenGLTexture::RGBA_ASTC_12x12,   SRGB8_Alpha8_ASTC_4x4 = QOpenGLTexture::SRGB8_Alpha8_ASTC_4x4,   SRGB8_Alpha8_ASTC_5x4 = QOpenGLTexture::SRGB8_Alpha8_ASTC_5x4,   SRGB8_Alpha8_ASTC_5x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_5x5,   SRGB8_Alpha8_ASTC_6x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_6x5,   SRGB8_Alpha8_ASTC_6x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_6x6,   SRGB8_Alpha8_ASTC_8x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x5,   SRGB8_Alpha8_ASTC_8x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x6,   SRGB8_Alpha8_ASTC_8x8 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x8,   SRGB8_Alpha8_ASTC_10x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x5,   SRGB8_Alpha8_ASTC_10x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x6,   SRGB8_Alpha8_ASTC_10x8 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x8,   SRGB8_Alpha8_ASTC_10x10 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x10,   SRGB8_Alpha8_ASTC_12x10 = QOpenGLTexture::SRGB8_Alpha8_ASTC_12x10,   SRGB8_Alpha8_ASTC_12x12 = QOpenGLTexture::SRGB8_Alpha8_ASTC_12x12,   SRGB8 = QOpenGLTexture::SRGB8,   SRGB8_Alpha8 = QOpenGLTexture::SRGB8_Alpha8,   SRGB_DXT1 = QOpenGLTexture::SRGB_DXT1,   SRGB_Alpha_DXT1 = QOpenGLTexture::SRGB_Alpha_DXT1,   SRGB_Alpha_DXT3 = QOpenGLTexture::SRGB_Alpha_DXT3,   SRGB_Alpha_DXT5 = QOpenGLTexture::SRGB_Alpha_DXT5,   SRGB_BP_UNorm = QOpenGLTexture::SRGB_BP_UNorm,   DepthFormat = QOpenGLTexture::DepthFormat,   AlphaFormat = QOpenGLTexture::AlphaFormat,   RGBFormat = QOpenGLTexture::RGBFormat,   RGBAFormat = QOpenGLTexture::RGBAFormat,   LuminanceFormat = QOpenGLTexture::LuminanceFormat,   LuminanceAlphaFormat = QOpenGLTexture::LuminanceAlphaFormat};
enum TextureFormatClass{
  NoFormatClass = QOpenGLTexture::NoFormatClass,   FormatClass_128Bit = QOpenGLTexture::FormatClass_128Bit,   FormatClass_96Bit = QOpenGLTexture::FormatClass_96Bit,   FormatClass_64Bit = QOpenGLTexture::FormatClass_64Bit,   FormatClass_48Bit = QOpenGLTexture::FormatClass_48Bit,   FormatClass_32Bit = QOpenGLTexture::FormatClass_32Bit,   FormatClass_24Bit = QOpenGLTexture::FormatClass_24Bit,   FormatClass_16Bit = QOpenGLTexture::FormatClass_16Bit,   FormatClass_8Bit = QOpenGLTexture::FormatClass_8Bit,   FormatClass_RGTC1_R = QOpenGLTexture::FormatClass_RGTC1_R,   FormatClass_RGTC2_RG = QOpenGLTexture::FormatClass_RGTC2_RG,   FormatClass_BPTC_Unorm = QOpenGLTexture::FormatClass_BPTC_Unorm,   FormatClass_BPTC_Float = QOpenGLTexture::FormatClass_BPTC_Float,   FormatClass_S3TC_DXT1_RGB = QOpenGLTexture::FormatClass_S3TC_DXT1_RGB,   FormatClass_S3TC_DXT1_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT1_RGBA,   FormatClass_S3TC_DXT3_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT3_RGBA,   FormatClass_S3TC_DXT5_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT5_RGBA,   FormatClass_Unique = QOpenGLTexture::FormatClass_Unique};
enum TextureUnitReset{
  ResetTextureUnit = QOpenGLTexture::ResetTextureUnit,   DontResetTextureUnit = QOpenGLTexture::DontResetTextureUnit};
enum WrapMode{
  Repeat = QOpenGLTexture::Repeat,   MirroredRepeat = QOpenGLTexture::MirroredRepeat,   ClampToEdge = QOpenGLTexture::ClampToEdge,   ClampToBorder = QOpenGLTexture::ClampToBorder};
Q_DECLARE_FLAGS(Features, Feature)
public Q_SLOTS:
QOpenGLTexture* new_QOpenGLTexture(QOpenGLTexture::Target  target);
QOpenGLTexture* new_QOpenGLTexture(const QImage&  image, QOpenGLTexture::MipMapGeneration  genMipMaps = QOpenGLTexture::GenerateMipMaps);
void delete_QOpenGLTexture(QOpenGLTexture* obj) { delete obj; }
   void allocateStorage(QOpenGLTexture* theWrappedObject);
   void allocateStorage(QOpenGLTexture* theWrappedObject, QOpenGLTexture::PixelFormat  pixelFormat, QOpenGLTexture::PixelType  pixelType);
   void bind(QOpenGLTexture* theWrappedObject);
   void bind(QOpenGLTexture* theWrappedObject, uint  unit, QOpenGLTexture::TextureUnitReset  reset = QOpenGLTexture::DontResetTextureUnit);
   QColor  borderColor(QOpenGLTexture* theWrappedObject) const;
   void borderColor(QOpenGLTexture* theWrappedObject, float*  border) const;
   void borderColor(QOpenGLTexture* theWrappedObject, int*  border) const;
   void borderColor(QOpenGLTexture* theWrappedObject, unsigned int*  border) const;
   GLuint  static_QOpenGLTexture_boundTextureId(QOpenGLTexture::BindingTarget  target);
   GLuint  static_QOpenGLTexture_boundTextureId(uint  unit, QOpenGLTexture::BindingTarget  target);
   QOpenGLTexture::ComparisonFunction  comparisonFunction(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::ComparisonMode  comparisonMode(QOpenGLTexture* theWrappedObject) const;
   bool  create(QOpenGLTexture* theWrappedObject);
   QOpenGLTexture*  createTextureView(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Target  target, QOpenGLTexture::TextureFormat  viewFormat, int  minimumMipmapLevel, int  maximumMipmapLevel, int  minimumLayer, int  maximumLayer) const;
   int  depth(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::DepthStencilMode  depthStencilMode(QOpenGLTexture* theWrappedObject) const;
   void destroy(QOpenGLTexture* theWrappedObject);
   int  faces(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::TextureFormat  format(QOpenGLTexture* theWrappedObject) const;
   void generateMipMaps(QOpenGLTexture* theWrappedObject);
   void generateMipMaps(QOpenGLTexture* theWrappedObject, int  baseLevel, bool  resetBaseLevel = true);
   bool  static_QOpenGLTexture_hasFeature(QOpenGLTexture::Feature  feature);
   int  height(QOpenGLTexture* theWrappedObject) const;
   bool  isAutoMipMapGenerationEnabled(QOpenGLTexture* theWrappedObject) const;
   bool  isBound(QOpenGLTexture* theWrappedObject) const;
   bool  isBound(QOpenGLTexture* theWrappedObject, uint  unit);
   bool  isCreated(QOpenGLTexture* theWrappedObject) const;
   bool  isFixedSamplePositions(QOpenGLTexture* theWrappedObject) const;
   bool  isStorageAllocated(QOpenGLTexture* theWrappedObject) const;
   bool  isTextureView(QOpenGLTexture* theWrappedObject) const;
   int  layers(QOpenGLTexture* theWrappedObject) const;
   std::pair<float , float >  levelOfDetailRange(QOpenGLTexture* theWrappedObject) const;
   float  levelofDetailBias(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::Filter  magnificationFilter(QOpenGLTexture* theWrappedObject) const;
   float  maximumAnisotropy(QOpenGLTexture* theWrappedObject) const;
   float  maximumLevelOfDetail(QOpenGLTexture* theWrappedObject) const;
   int  maximumMipLevels(QOpenGLTexture* theWrappedObject) const;
   std::pair<QOpenGLTexture::Filter , QOpenGLTexture::Filter >  minMagFilters(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::Filter  minificationFilter(QOpenGLTexture* theWrappedObject) const;
   float  minimumLevelOfDetail(QOpenGLTexture* theWrappedObject) const;
   int  mipBaseLevel(QOpenGLTexture* theWrappedObject) const;
   std::pair<int , int >  mipLevelRange(QOpenGLTexture* theWrappedObject) const;
   int  mipLevels(QOpenGLTexture* theWrappedObject) const;
   int  mipMaxLevel(QOpenGLTexture* theWrappedObject) const;
   void release(QOpenGLTexture* theWrappedObject);
   void release(QOpenGLTexture* theWrappedObject, uint  unit, QOpenGLTexture::TextureUnitReset  reset = QOpenGLTexture::DontResetTextureUnit);
   int  samples(QOpenGLTexture* theWrappedObject) const;
   void setAutoMipMapGenerationEnabled(QOpenGLTexture* theWrappedObject, bool  enabled);
   void setBorderColor(QOpenGLTexture* theWrappedObject, const QColor&  color);
   void setBorderColor(QOpenGLTexture* theWrappedObject, float  r, float  g, float  b, float  a);
   void setBorderColor(QOpenGLTexture* theWrappedObject, int  r, int  g, int  b, int  a);
   void setBorderColor(QOpenGLTexture* theWrappedObject, uint  r, uint  g, uint  b, uint  a);
   void setComparisonFunction(QOpenGLTexture* theWrappedObject, QOpenGLTexture::ComparisonFunction  function);
   void setComparisonMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::ComparisonMode  mode);
   void setData(QOpenGLTexture* theWrappedObject, const QImage&  image, QOpenGLTexture::MipMapGeneration  genMipMaps = QOpenGLTexture::GenerateMipMaps);
   void setDepthStencilMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::DepthStencilMode  mode);
   void setFixedSamplePositions(QOpenGLTexture* theWrappedObject, bool  fixed);
   void setFormat(QOpenGLTexture* theWrappedObject, QOpenGLTexture::TextureFormat  format);
   void setLayers(QOpenGLTexture* theWrappedObject, int  layers);
   void setLevelOfDetailRange(QOpenGLTexture* theWrappedObject, float  min, float  max);
   void setLevelofDetailBias(QOpenGLTexture* theWrappedObject, float  bias);
   void setMagnificationFilter(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  filter);
   void setMaximumAnisotropy(QOpenGLTexture* theWrappedObject, float  anisotropy);
   void setMaximumLevelOfDetail(QOpenGLTexture* theWrappedObject, float  value);
   void setMinMagFilters(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  minificationFilter, QOpenGLTexture::Filter  magnificationFilter);
   void setMinificationFilter(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  filter);
   void setMinimumLevelOfDetail(QOpenGLTexture* theWrappedObject, float  value);
   void setMipBaseLevel(QOpenGLTexture* theWrappedObject, int  baseLevel);
   void setMipLevelRange(QOpenGLTexture* theWrappedObject, int  baseLevel, int  maxLevel);
   void setMipLevels(QOpenGLTexture* theWrappedObject, int  levels);
   void setMipMaxLevel(QOpenGLTexture* theWrappedObject, int  maxLevel);
   void setSamples(QOpenGLTexture* theWrappedObject, int  samples);
   void setSize(QOpenGLTexture* theWrappedObject, int  width, int  height = 1, int  depth = 1);
   void setSwizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleComponent  component, QOpenGLTexture::SwizzleValue  value);
   void setSwizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleValue  r, QOpenGLTexture::SwizzleValue  g, QOpenGLTexture::SwizzleValue  b, QOpenGLTexture::SwizzleValue  a);
   void setWrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::CoordinateDirection  direction, QOpenGLTexture::WrapMode  mode);
   void setWrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::WrapMode  mode);
   QOpenGLTexture::SwizzleValue  swizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleComponent  component) const;
   QOpenGLTexture::Target  target(QOpenGLTexture* theWrappedObject) const;
   GLuint  textureId(QOpenGLTexture* theWrappedObject) const;
   int  width(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::WrapMode  wrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::CoordinateDirection  direction) const;
    QString py_toString(QOpenGLTexture*);
};





class PythonQtWrapper_QOpenGLTextureBlitter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Origin )
enum Origin{
  OriginBottomLeft = QOpenGLTextureBlitter::OriginBottomLeft,   OriginTopLeft = QOpenGLTextureBlitter::OriginTopLeft};
public Q_SLOTS:
QOpenGLTextureBlitter* new_QOpenGLTextureBlitter();
void delete_QOpenGLTextureBlitter(QOpenGLTextureBlitter* obj) { delete obj; }
   void bind(QOpenGLTextureBlitter* theWrappedObject, GLenum  target = GL_TEXTURE_2D);
   void blit(QOpenGLTextureBlitter* theWrappedObject, GLuint  texture, const QMatrix4x4&  targetTransform, QOpenGLTextureBlitter::Origin  sourceOrigin);
   bool  create(QOpenGLTextureBlitter* theWrappedObject);
   void destroy(QOpenGLTextureBlitter* theWrappedObject);
   bool  isCreated(QOpenGLTextureBlitter* theWrappedObject) const;
   void release(QOpenGLTextureBlitter* theWrappedObject);
   void setOpacity(QOpenGLTextureBlitter* theWrappedObject, float  opacity);
   void setRedBlueSwizzle(QOpenGLTextureBlitter* theWrappedObject, bool  swizzle);
   bool  supportsExternalOESTarget(QOpenGLTextureBlitter* theWrappedObject) const;
   bool  supportsRectangleTarget(QOpenGLTextureBlitter* theWrappedObject) const;
   QMatrix4x4  static_QOpenGLTextureBlitter_targetTransform(const QRectF&  target, const QRect&  viewport);
};





class PythonQtShell_QOpenGLTimeMonitor : public QOpenGLTimeMonitor
{
public:
    PythonQtShell_QOpenGLTimeMonitor(QObject*  parent = nullptr):QOpenGLTimeMonitor(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLTimeMonitor() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOpenGLTimeMonitor : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLTimeMonitor* new_QOpenGLTimeMonitor(QObject*  parent = nullptr);
void delete_QOpenGLTimeMonitor(QOpenGLTimeMonitor* obj) { delete obj; }
   bool  create(QOpenGLTimeMonitor* theWrappedObject);
   void destroy(QOpenGLTimeMonitor* theWrappedObject);
   bool  isCreated(QOpenGLTimeMonitor* theWrappedObject) const;
   bool  isResultAvailable(QOpenGLTimeMonitor* theWrappedObject) const;
   QList<GLuint >  objectIds(QOpenGLTimeMonitor* theWrappedObject) const;
   int  recordSample(QOpenGLTimeMonitor* theWrappedObject);
   void reset(QOpenGLTimeMonitor* theWrappedObject);
   int  sampleCount(QOpenGLTimeMonitor* theWrappedObject) const;
   void setSampleCount(QOpenGLTimeMonitor* theWrappedObject, int  sampleCount);
   QList<GLuint64 >  waitForIntervals(QOpenGLTimeMonitor* theWrappedObject) const;
   QList<GLuint64 >  waitForSamples(QOpenGLTimeMonitor* theWrappedObject) const;
};





class PythonQtShell_QOpenGLTimerQuery : public QOpenGLTimerQuery
{
public:
    PythonQtShell_QOpenGLTimerQuery(QObject*  parent = nullptr):QOpenGLTimerQuery(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLTimerQuery() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOpenGLTimerQuery : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLTimerQuery* new_QOpenGLTimerQuery(QObject*  parent = nullptr);
void delete_QOpenGLTimerQuery(QOpenGLTimerQuery* obj) { delete obj; }
   void begin(QOpenGLTimerQuery* theWrappedObject);
   bool  create(QOpenGLTimerQuery* theWrappedObject);
   void destroy(QOpenGLTimerQuery* theWrappedObject);
   void end(QOpenGLTimerQuery* theWrappedObject);
   bool  isCreated(QOpenGLTimerQuery* theWrappedObject) const;
   bool  isResultAvailable(QOpenGLTimerQuery* theWrappedObject) const;
   GLuint  objectId(QOpenGLTimerQuery* theWrappedObject) const;
   void recordTimestamp(QOpenGLTimerQuery* theWrappedObject);
   GLuint64  waitForResult(QOpenGLTimerQuery* theWrappedObject) const;
   GLuint64  waitForTimestamp(QOpenGLTimerQuery* theWrappedObject) const;
};





class PythonQtShell_QOpenGLVersionFunctionsFactory : public QOpenGLVersionFunctionsFactory
{
public:
    PythonQtShell_QOpenGLVersionFunctionsFactory():QOpenGLVersionFunctionsFactory(),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLVersionFunctionsFactory();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOpenGLVersionFunctionsFactory : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLVersionFunctionsFactory* new_QOpenGLVersionFunctionsFactory();
void delete_QOpenGLVersionFunctionsFactory(QOpenGLVersionFunctionsFactory* obj) { delete obj; }
};





class PythonQtWrapper_QOpenGLVersionProfile : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLVersionProfile* new_QOpenGLVersionProfile();
QOpenGLVersionProfile* new_QOpenGLVersionProfile(const QOpenGLVersionProfile&  other);
QOpenGLVersionProfile* new_QOpenGLVersionProfile(const QSurfaceFormat&  format);
void delete_QOpenGLVersionProfile(QOpenGLVersionProfile* obj) { delete obj; }
   bool  hasProfiles(QOpenGLVersionProfile* theWrappedObject) const;
   bool  isLegacyVersion(QOpenGLVersionProfile* theWrappedObject) const;
   bool  isValid(QOpenGLVersionProfile* theWrappedObject) const;
   bool  __ne__(QOpenGLVersionProfile* theWrappedObject, const QOpenGLVersionProfile&  rhs);
   QOpenGLVersionProfile*  operator_assign(QOpenGLVersionProfile* theWrappedObject, const QOpenGLVersionProfile&  rhs);
   bool  __eq__(QOpenGLVersionProfile* theWrappedObject, const QOpenGLVersionProfile&  rhs);
   QSurfaceFormat::OpenGLContextProfile  profile(QOpenGLVersionProfile* theWrappedObject) const;
   void setProfile(QOpenGLVersionProfile* theWrappedObject, QSurfaceFormat::OpenGLContextProfile  profile);
   void setVersion(QOpenGLVersionProfile* theWrappedObject, int  majorVersion, int  minorVersion);
   std::pair<int , int >  version(QOpenGLVersionProfile* theWrappedObject) const;
    QString py_toString(QOpenGLVersionProfile*);
    bool __nonzero__(QOpenGLVersionProfile* obj) { return obj->isValid(); }
};





class PythonQtShell_QOpenGLVertexArrayObject : public QOpenGLVertexArrayObject
{
public:
    PythonQtShell_QOpenGLVertexArrayObject(QObject*  parent = nullptr):QOpenGLVertexArrayObject(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLVertexArrayObject() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOpenGLVertexArrayObject : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLVertexArrayObject* new_QOpenGLVertexArrayObject(QObject*  parent = nullptr);
void delete_QOpenGLVertexArrayObject(QOpenGLVertexArrayObject* obj) { delete obj; }
   void bind(QOpenGLVertexArrayObject* theWrappedObject);
   bool  create(QOpenGLVertexArrayObject* theWrappedObject);
   void destroy(QOpenGLVertexArrayObject* theWrappedObject);
   bool  isCreated(QOpenGLVertexArrayObject* theWrappedObject) const;
   GLuint  objectId(QOpenGLVertexArrayObject* theWrappedObject) const;
   void release(QOpenGLVertexArrayObject* theWrappedObject);
};





class PythonQtShell_QOpenGLWidget : public QOpenGLWidget
{
public:
    PythonQtShell_QOpenGLWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QOpenGLWidget(parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLWidget() override;

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
void initializeGL() override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
void paintGL() override;
QPaintDevice*  redirected(QPoint*  p) const override;
void resizeEvent(QResizeEvent*  e) override;
void resizeGL(int  w, int  h) override;
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

class PythonQtPublicPromoter_QOpenGLWidget : public QOpenGLWidget
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initializeGL() { this->initializeGL(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_paintGL() { this->paintGL(); }
inline QPaintDevice*  promoted_redirected(QPoint*  p) const { return this->redirected(p); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_resizeGL(int  w, int  h) { this->resizeGL(w, h); }
inline bool  py_q_event(QEvent*  e) { return QOpenGLWidget::event(e); }
inline void py_q_initializeGL() { QOpenGLWidget::initializeGL(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLWidget::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QOpenGLWidget::paintEngine(); }
inline void py_q_paintEvent(QPaintEvent*  e) { QOpenGLWidget::paintEvent(e); }
inline void py_q_paintGL() { QOpenGLWidget::paintGL(); }
inline QPaintDevice*  py_q_redirected(QPoint*  p) const { return QOpenGLWidget::redirected(p); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QOpenGLWidget::resizeEvent(e); }
inline void py_q_resizeGL(int  w, int  h) { QOpenGLWidget::resizeGL(w, h); }
};

class PythonQtWrapper_QOpenGLWidget : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOpenGLWidget* new_QOpenGLWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QOpenGLWidget(QOpenGLWidget* obj) { delete obj; }
   QOpenGLContext*  context(QOpenGLWidget* theWrappedObject) const;
   QOpenGLWidget::TargetBuffer  currentTargetBuffer(QOpenGLWidget* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWidget* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWidget* theWrappedObject, QOpenGLWidget::TargetBuffer  targetBuffer) const;
   void doneCurrent(QOpenGLWidget* theWrappedObject);
   bool  py_q_event(QOpenGLWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_event(e));}
   QSurfaceFormat  format(QOpenGLWidget* theWrappedObject) const;
   QImage  grabFramebuffer(QOpenGLWidget* theWrappedObject);
   QImage  grabFramebuffer(QOpenGLWidget* theWrappedObject, QOpenGLWidget::TargetBuffer  targetBuffer);
   void initializeGL(QOpenGLWidget* theWrappedObject);
   void py_q_initializeGL(QOpenGLWidget* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_initializeGL());}
   bool  isValid(QOpenGLWidget* theWrappedObject) const;
   void makeCurrent(QOpenGLWidget* theWrappedObject);
   void makeCurrent(QOpenGLWidget* theWrappedObject, QOpenGLWidget::TargetBuffer  targetBuffer);
   int  py_q_metric(QOpenGLWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  py_q_paintEngine(QOpenGLWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintEngine());}
   void py_q_paintEvent(QOpenGLWidget* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintEvent(e));}
   void paintGL(QOpenGLWidget* theWrappedObject);
   void py_q_paintGL(QOpenGLWidget* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintGL());}
   QPaintDevice*  py_q_redirected(QOpenGLWidget* theWrappedObject, QPoint*  p) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_redirected(p));}
   void py_q_resizeEvent(QOpenGLWidget* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_resizeEvent(e));}
   void resizeGL(QOpenGLWidget* theWrappedObject, int  w, int  h);
   void py_q_resizeGL(QOpenGLWidget* theWrappedObject, int  w, int  h){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_resizeGL(w, h));}
   void setFormat(QOpenGLWidget* theWrappedObject, const QSurfaceFormat&  format);
   void setTextureFormat(QOpenGLWidget* theWrappedObject, GLenum  texFormat);
   void setUpdateBehavior(QOpenGLWidget* theWrappedObject, QOpenGLWidget::UpdateBehavior  updateBehavior);
   GLenum  textureFormat(QOpenGLWidget* theWrappedObject) const;
   QOpenGLWidget::UpdateBehavior  updateBehavior(QOpenGLWidget* theWrappedObject) const;
    bool __nonzero__(QOpenGLWidget* obj) { return obj->isValid(); }
};





class PythonQtShell_QOpenGLWindow : public QOpenGLWindow
{
public:
    PythonQtShell_QOpenGLWindow(QOpenGLContext*  shareContext, QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr):QOpenGLWindow(shareContext, updateBehavior, parent),_wrapper(nullptr) {};
    PythonQtShell_QOpenGLWindow(QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr):QOpenGLWindow(updateBehavior, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QOpenGLWindow() override;

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
void initializeGL() override;
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
void paintGL() override;
void paintOverGL() override;
void paintUnderGL() override;
QPaintDevice*  redirected(QPoint*  arg__1) const override;
void resizeEvent(QResizeEvent*  event) override;
void resizeGL(int  w, int  h) override;
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

class PythonQtPublicPromoter_QOpenGLWindow : public QOpenGLWindow
{ public:
inline void promoted_initializeGL() { this->initializeGL(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_paintGL() { this->paintGL(); }
inline void promoted_paintOverGL() { this->paintOverGL(); }
inline void promoted_paintUnderGL() { this->paintUnderGL(); }
inline QPaintDevice*  promoted_redirected(QPoint*  arg__1) const { return this->redirected(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_resizeGL(int  w, int  h) { this->resizeGL(w, h); }
inline void py_q_initializeGL() { QOpenGLWindow::initializeGL(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLWindow::metric(metric); }
inline void py_q_paintEvent(QPaintEvent*  event) { QOpenGLWindow::paintEvent(event); }
inline void py_q_paintGL() { QOpenGLWindow::paintGL(); }
inline void py_q_paintOverGL() { QOpenGLWindow::paintOverGL(); }
inline void py_q_paintUnderGL() { QOpenGLWindow::paintUnderGL(); }
inline QPaintDevice*  py_q_redirected(QPoint*  arg__1) const { return QOpenGLWindow::redirected(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QOpenGLWindow::resizeEvent(event); }
inline void py_q_resizeGL(int  w, int  h) { QOpenGLWindow::resizeGL(w, h); }
};

class PythonQtWrapper_QOpenGLWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(UpdateBehavior )
enum UpdateBehavior{
  NoPartialUpdate = QOpenGLWindow::NoPartialUpdate,   PartialUpdateBlit = QOpenGLWindow::PartialUpdateBlit,   PartialUpdateBlend = QOpenGLWindow::PartialUpdateBlend};
public Q_SLOTS:
QOpenGLWindow* new_QOpenGLWindow(QOpenGLContext*  shareContext, QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr);
QOpenGLWindow* new_QOpenGLWindow(QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr);
void delete_QOpenGLWindow(QOpenGLWindow* obj) { delete obj; }
   QOpenGLContext*  context(QOpenGLWindow* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWindow* theWrappedObject) const;
   void doneCurrent(QOpenGLWindow* theWrappedObject);
   QImage  grabFramebuffer(QOpenGLWindow* theWrappedObject);
   void initializeGL(QOpenGLWindow* theWrappedObject);
   void py_q_initializeGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_initializeGL());}
   bool  isValid(QOpenGLWindow* theWrappedObject) const;
   void makeCurrent(QOpenGLWindow* theWrappedObject);
   int  py_q_metric(QOpenGLWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_metric(metric));}
   void py_q_paintEvent(QOpenGLWindow* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintEvent(event));}
   void paintGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintGL());}
   void paintOverGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintOverGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintOverGL());}
   void paintUnderGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintUnderGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintUnderGL());}
   QPaintDevice*  py_q_redirected(QOpenGLWindow* theWrappedObject, QPoint*  arg__1) const{  return (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_redirected(arg__1));}
   void py_q_resizeEvent(QOpenGLWindow* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_resizeEvent(event));}
   void resizeGL(QOpenGLWindow* theWrappedObject, int  w, int  h);
   void py_q_resizeGL(QOpenGLWindow* theWrappedObject, int  w, int  h){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_resizeGL(w, h));}
   QOpenGLContext*  shareContext(QOpenGLWindow* theWrappedObject) const;
   QOpenGLWindow::UpdateBehavior  updateBehavior(QOpenGLWindow* theWrappedObject) const;
    bool __nonzero__(QOpenGLWindow* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QPageLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode Orientation OutOfBoundsPolicy Unit )
enum Mode{
  StandardMode = QPageLayout::StandardMode,   FullPageMode = QPageLayout::FullPageMode};
enum Orientation{
  Portrait = QPageLayout::Portrait,   Landscape = QPageLayout::Landscape};
enum class OutOfBoundsPolicy{
  Reject = static_cast<int>(QPageLayout::OutOfBoundsPolicy::Reject),   Clamp = static_cast<int>(QPageLayout::OutOfBoundsPolicy::Clamp)};
enum Unit{
  Millimeter = QPageLayout::Millimeter,   Point = QPageLayout::Point,   Inch = QPageLayout::Inch,   Pica = QPageLayout::Pica,   Didot = QPageLayout::Didot,   Cicero = QPageLayout::Cicero};
public Q_SLOTS:
QPageLayout* new_QPageLayout();
QPageLayout* new_QPageLayout(const QPageLayout&  other);
QPageLayout* new_QPageLayout(const QPageSize&  pageSize, QPageLayout::Orientation  orientation, const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Point, const QMarginsF&  minMargins = QMarginsF(0,0,0,0));
void delete_QPageLayout(QPageLayout* obj) { delete obj; }
   QRectF  fullRect(QPageLayout* theWrappedObject) const;
   QRectF  fullRect(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QRect  fullRectPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QRect  fullRectPoints(QPageLayout* theWrappedObject) const;
   bool  isEquivalentTo(QPageLayout* theWrappedObject, const QPageLayout&  other) const;
   bool  isValid(QPageLayout* theWrappedObject) const;
   QMarginsF  margins(QPageLayout* theWrappedObject) const;
   QMarginsF  margins(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QMargins  marginsPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QMargins  marginsPoints(QPageLayout* theWrappedObject) const;
   QMarginsF  maximumMargins(QPageLayout* theWrappedObject) const;
   QMarginsF  minimumMargins(QPageLayout* theWrappedObject) const;
   QPageLayout::Mode  mode(QPageLayout* theWrappedObject) const;
   bool  __ne__(QPageLayout* theWrappedObject, const QPageLayout&  rhs);
   QPageLayout*  operator_assign(QPageLayout* theWrappedObject, const QPageLayout&  other);
   bool  __eq__(QPageLayout* theWrappedObject, const QPageLayout&  rhs);
   QPageLayout::Orientation  orientation(QPageLayout* theWrappedObject) const;
   QPageSize  pageSize(QPageLayout* theWrappedObject) const;
   QRectF  paintRect(QPageLayout* theWrappedObject) const;
   QRectF  paintRect(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QRect  paintRectPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QRect  paintRectPoints(QPageLayout* theWrappedObject) const;
   bool  setBottomMargin(QPageLayout* theWrappedObject, qreal  bottomMargin, QPageLayout::OutOfBoundsPolicy  outOfBoundsPolicy = QPageLayout::OutOfBoundsPolicy::Reject);
   bool  setLeftMargin(QPageLayout* theWrappedObject, qreal  leftMargin, QPageLayout::OutOfBoundsPolicy  outOfBoundsPolicy = QPageLayout::OutOfBoundsPolicy::Reject);
   bool  setMargins(QPageLayout* theWrappedObject, const QMarginsF&  margins, QPageLayout::OutOfBoundsPolicy  outOfBoundsPolicy = QPageLayout::OutOfBoundsPolicy::Reject);
   void setMinimumMargins(QPageLayout* theWrappedObject, const QMarginsF&  minMargins);
   void setMode(QPageLayout* theWrappedObject, QPageLayout::Mode  mode);
   void setOrientation(QPageLayout* theWrappedObject, QPageLayout::Orientation  orientation);
   void setPageSize(QPageLayout* theWrappedObject, const QPageSize&  pageSize, const QMarginsF&  minMargins = QMarginsF(0,0,0,0));
   bool  setRightMargin(QPageLayout* theWrappedObject, qreal  rightMargin, QPageLayout::OutOfBoundsPolicy  outOfBoundsPolicy = QPageLayout::OutOfBoundsPolicy::Reject);
   bool  setTopMargin(QPageLayout* theWrappedObject, qreal  topMargin, QPageLayout::OutOfBoundsPolicy  outOfBoundsPolicy = QPageLayout::OutOfBoundsPolicy::Reject);
   void setUnits(QPageLayout* theWrappedObject, QPageLayout::Unit  units);
   void swap(QPageLayout* theWrappedObject, QPageLayout&  other);
   QPageLayout::Unit  units(QPageLayout* theWrappedObject) const;
    QString py_toString(QPageLayout*);
    bool __nonzero__(QPageLayout* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QPageRanges : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPageRanges* new_QPageRanges();
QPageRanges* new_QPageRanges(const QPageRanges&  other);
void delete_QPageRanges(QPageRanges* obj) { delete obj; }
   void addPage(QPageRanges* theWrappedObject, int  pageNumber);
   void addRange(QPageRanges* theWrappedObject, int  from, int  to);
   void clear(QPageRanges* theWrappedObject);
   bool  contains(QPageRanges* theWrappedObject, int  pageNumber) const;
   int  firstPage(QPageRanges* theWrappedObject) const;
   QPageRanges  static_QPageRanges_fromString(const QString&  ranges);
   bool  isEmpty(QPageRanges* theWrappedObject) const;
   int  lastPage(QPageRanges* theWrappedObject) const;
   bool  __ne__(QPageRanges* theWrappedObject, const QPageRanges&  rhs);
   void writeTo(QPageRanges* theWrappedObject, QDataStream&  arg__1);
   QPageRanges*  operator_assign(QPageRanges* theWrappedObject, const QPageRanges&  other);
   bool  __eq__(QPageRanges* theWrappedObject, const QPageRanges&  rhs);
   void readFrom(QPageRanges* theWrappedObject, QDataStream&  arg__1);
   void swap(QPageRanges* theWrappedObject, QPageRanges&  other);
   QList<QPageRanges::Range >  toRangeList(QPageRanges* theWrappedObject) const;
   QString  toString(QPageRanges* theWrappedObject) const;
    QString py_toString(QPageRanges*);
    bool __nonzero__(QPageRanges* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QPageRanges__Range : public QPageRanges::Range
{
public:
    PythonQtShell_QPageRanges__Range():QPageRanges::Range(),_wrapper(nullptr) {};

   ~PythonQtShell_QPageRanges__Range();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPageRanges__Range : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPageRanges::Range* new_QPageRanges__Range();
QPageRanges::Range* new_QPageRanges__Range(const QPageRanges::Range& other) {
PythonQtShell_QPageRanges__Range* a = new PythonQtShell_QPageRanges__Range();
*((QPageRanges::Range*)a) = other;
return a; }
void delete_QPageRanges__Range(QPageRanges::Range* obj) { delete obj; }
   bool  contains(QPageRanges::Range* theWrappedObject, int  pageNumber) const;
void py_set_from(QPageRanges::Range* theWrappedObject, int  from){ theWrappedObject->from = from; }
int  py_get_from(QPageRanges::Range* theWrappedObject){ return theWrappedObject->from; }
void py_set_to(QPageRanges::Range* theWrappedObject, int  to){ theWrappedObject->to = to; }
int  py_get_to(QPageRanges::Range* theWrappedObject){ return theWrappedObject->to; }
};





class PythonQtShell_QPageSetupDialog : public QPageSetupDialog
{
public:
    PythonQtShell_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = nullptr):QPageSetupDialog(printer, parent),_wrapper(nullptr) {};
    PythonQtShell_QPageSetupDialog(QWidget*  parent = nullptr):QPageSetupDialog(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPageSetupDialog() override;

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

class PythonQtPublicPromoter_QPageSetupDialog : public QPageSetupDialog
{ public:
inline void py_q_done(int  result) { QPageSetupDialog::done(result); }
inline int  py_q_exec() { return QPageSetupDialog::exec(); }
};

class PythonQtWrapper_QPageSetupDialog : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPageSetupDialog* new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = nullptr);
QPageSetupDialog* new_QPageSetupDialog(QWidget*  parent = nullptr);
void delete_QPageSetupDialog(QPageSetupDialog* obj) { delete obj; }
   void py_q_done(QPageSetupDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QPageSetupDialog*)theWrappedObject)->py_q_done(result));}
   int  py_q_exec(QPageSetupDialog* theWrappedObject){  return (((PythonQtPublicPromoter_QPageSetupDialog*)theWrappedObject)->py_q_exec());}
   void open(QPageSetupDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QPrinter*  printer(QPageSetupDialog* theWrappedObject);
};





class PythonQtWrapper_QPageSize : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PageSizeId SizeMatchPolicy Unit )
enum PageSizeId{
  Letter = QPageSize::Letter,   Legal = QPageSize::Legal,   Executive = QPageSize::Executive,   A0 = QPageSize::A0,   A1 = QPageSize::A1,   A2 = QPageSize::A2,   A3 = QPageSize::A3,   A4 = QPageSize::A4,   A5 = QPageSize::A5,   A6 = QPageSize::A6,   A7 = QPageSize::A7,   A8 = QPageSize::A8,   A9 = QPageSize::A9,   A10 = QPageSize::A10,   B0 = QPageSize::B0,   B1 = QPageSize::B1,   B2 = QPageSize::B2,   B3 = QPageSize::B3,   B4 = QPageSize::B4,   B5 = QPageSize::B5,   B6 = QPageSize::B6,   B7 = QPageSize::B7,   B8 = QPageSize::B8,   B9 = QPageSize::B9,   B10 = QPageSize::B10,   C5E = QPageSize::C5E,   Comm10E = QPageSize::Comm10E,   DLE = QPageSize::DLE,   Folio = QPageSize::Folio,   Ledger = QPageSize::Ledger,   Tabloid = QPageSize::Tabloid,   Custom = QPageSize::Custom,   A3Extra = QPageSize::A3Extra,   A4Extra = QPageSize::A4Extra,   A4Plus = QPageSize::A4Plus,   A4Small = QPageSize::A4Small,   A5Extra = QPageSize::A5Extra,   B5Extra = QPageSize::B5Extra,   JisB0 = QPageSize::JisB0,   JisB1 = QPageSize::JisB1,   JisB2 = QPageSize::JisB2,   JisB3 = QPageSize::JisB3,   JisB4 = QPageSize::JisB4,   JisB5 = QPageSize::JisB5,   JisB6 = QPageSize::JisB6,   JisB7 = QPageSize::JisB7,   JisB8 = QPageSize::JisB8,   JisB9 = QPageSize::JisB9,   JisB10 = QPageSize::JisB10,   AnsiC = QPageSize::AnsiC,   AnsiD = QPageSize::AnsiD,   AnsiE = QPageSize::AnsiE,   LegalExtra = QPageSize::LegalExtra,   LetterExtra = QPageSize::LetterExtra,   LetterPlus = QPageSize::LetterPlus,   LetterSmall = QPageSize::LetterSmall,   TabloidExtra = QPageSize::TabloidExtra,   ArchA = QPageSize::ArchA,   ArchB = QPageSize::ArchB,   ArchC = QPageSize::ArchC,   ArchD = QPageSize::ArchD,   ArchE = QPageSize::ArchE,   Imperial7x9 = QPageSize::Imperial7x9,   Imperial8x10 = QPageSize::Imperial8x10,   Imperial9x11 = QPageSize::Imperial9x11,   Imperial9x12 = QPageSize::Imperial9x12,   Imperial10x11 = QPageSize::Imperial10x11,   Imperial10x13 = QPageSize::Imperial10x13,   Imperial10x14 = QPageSize::Imperial10x14,   Imperial12x11 = QPageSize::Imperial12x11,   Imperial15x11 = QPageSize::Imperial15x11,   ExecutiveStandard = QPageSize::ExecutiveStandard,   Note = QPageSize::Note,   Quarto = QPageSize::Quarto,   Statement = QPageSize::Statement,   SuperA = QPageSize::SuperA,   SuperB = QPageSize::SuperB,   Postcard = QPageSize::Postcard,   DoublePostcard = QPageSize::DoublePostcard,   Prc16K = QPageSize::Prc16K,   Prc32K = QPageSize::Prc32K,   Prc32KBig = QPageSize::Prc32KBig,   FanFoldUS = QPageSize::FanFoldUS,   FanFoldGerman = QPageSize::FanFoldGerman,   FanFoldGermanLegal = QPageSize::FanFoldGermanLegal,   EnvelopeB4 = QPageSize::EnvelopeB4,   EnvelopeB5 = QPageSize::EnvelopeB5,   EnvelopeB6 = QPageSize::EnvelopeB6,   EnvelopeC0 = QPageSize::EnvelopeC0,   EnvelopeC1 = QPageSize::EnvelopeC1,   EnvelopeC2 = QPageSize::EnvelopeC2,   EnvelopeC3 = QPageSize::EnvelopeC3,   EnvelopeC4 = QPageSize::EnvelopeC4,   EnvelopeC6 = QPageSize::EnvelopeC6,   EnvelopeC65 = QPageSize::EnvelopeC65,   EnvelopeC7 = QPageSize::EnvelopeC7,   Envelope9 = QPageSize::Envelope9,   Envelope11 = QPageSize::Envelope11,   Envelope12 = QPageSize::Envelope12,   Envelope14 = QPageSize::Envelope14,   EnvelopeMonarch = QPageSize::EnvelopeMonarch,   EnvelopePersonal = QPageSize::EnvelopePersonal,   EnvelopeChou3 = QPageSize::EnvelopeChou3,   EnvelopeChou4 = QPageSize::EnvelopeChou4,   EnvelopeInvite = QPageSize::EnvelopeInvite,   EnvelopeItalian = QPageSize::EnvelopeItalian,   EnvelopeKaku2 = QPageSize::EnvelopeKaku2,   EnvelopeKaku3 = QPageSize::EnvelopeKaku3,   EnvelopePrc1 = QPageSize::EnvelopePrc1,   EnvelopePrc2 = QPageSize::EnvelopePrc2,   EnvelopePrc3 = QPageSize::EnvelopePrc3,   EnvelopePrc4 = QPageSize::EnvelopePrc4,   EnvelopePrc5 = QPageSize::EnvelopePrc5,   EnvelopePrc6 = QPageSize::EnvelopePrc6,   EnvelopePrc7 = QPageSize::EnvelopePrc7,   EnvelopePrc8 = QPageSize::EnvelopePrc8,   EnvelopePrc9 = QPageSize::EnvelopePrc9,   EnvelopePrc10 = QPageSize::EnvelopePrc10,   EnvelopeYou4 = QPageSize::EnvelopeYou4,   LastPageSize = QPageSize::LastPageSize,   AnsiA = QPageSize::AnsiA,   AnsiB = QPageSize::AnsiB,   EnvelopeC5 = QPageSize::EnvelopeC5,   EnvelopeDL = QPageSize::EnvelopeDL,   Envelope10 = QPageSize::Envelope10};
enum SizeMatchPolicy{
  FuzzyMatch = QPageSize::FuzzyMatch,   FuzzyOrientationMatch = QPageSize::FuzzyOrientationMatch,   ExactMatch = QPageSize::ExactMatch};
enum Unit{
  Millimeter = QPageSize::Millimeter,   Point = QPageSize::Point,   Inch = QPageSize::Inch,   Pica = QPageSize::Pica,   Didot = QPageSize::Didot,   Cicero = QPageSize::Cicero};
public Q_SLOTS:
QPageSize* new_QPageSize();
QPageSize* new_QPageSize(QPageSize::PageSizeId  pageSizeId);
QPageSize* new_QPageSize(const QPageSize&  other);
QPageSize* new_QPageSize(const QSize&  pointSize, const QString&  name = QString(), QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
QPageSize* new_QPageSize(const QSizeF&  size, QPageSize::Unit  units, const QString&  name = QString(), QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
void delete_QPageSize(QPageSize* obj) { delete obj; }
   QSizeF  definitionSize(QPageSize* theWrappedObject) const;
   QSizeF  static_QPageSize_definitionSize(QPageSize::PageSizeId  pageSizeId);
   QPageSize::Unit  definitionUnits(QPageSize* theWrappedObject) const;
   QPageSize::Unit  static_QPageSize_definitionUnits(QPageSize::PageSizeId  pageSizeId);
   QPageSize::PageSizeId  id(QPageSize* theWrappedObject) const;
   QPageSize::PageSizeId  static_QPageSize_id(const QSize&  pointSize, QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
   QPageSize::PageSizeId  static_QPageSize_id(const QSizeF&  size, QPageSize::Unit  units, QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
   QPageSize::PageSizeId  static_QPageSize_id(int  windowsId);
   bool  isEquivalentTo(QPageSize* theWrappedObject, const QPageSize&  other) const;
   bool  isValid(QPageSize* theWrappedObject) const;
   QString  key(QPageSize* theWrappedObject) const;
   QString  static_QPageSize_key(QPageSize::PageSizeId  pageSizeId);
   QString  name(QPageSize* theWrappedObject) const;
   QString  static_QPageSize_name(QPageSize::PageSizeId  pageSizeId);
   bool  __ne__(QPageSize* theWrappedObject, const QPageSize&  rhs);
   QPageSize*  operator_assign(QPageSize* theWrappedObject, const QPageSize&  other);
   bool  __eq__(QPageSize* theWrappedObject, const QPageSize&  rhs);
   QRectF  rect(QPageSize* theWrappedObject, QPageSize::Unit  units) const;
   QRect  rectPixels(QPageSize* theWrappedObject, int  resolution) const;
   QRect  rectPoints(QPageSize* theWrappedObject) const;
   QSizeF  static_QPageSize_size(QPageSize::PageSizeId  pageSizeId, QPageSize::Unit  units);
   QSizeF  size(QPageSize* theWrappedObject, QPageSize::Unit  units) const;
   QSize  static_QPageSize_sizePixels(QPageSize::PageSizeId  pageSizeId, int  resolution);
   QSize  sizePixels(QPageSize* theWrappedObject, int  resolution) const;
   QSize  sizePoints(QPageSize* theWrappedObject) const;
   QSize  static_QPageSize_sizePoints(QPageSize::PageSizeId  pageSizeId);
   void swap(QPageSize* theWrappedObject, QPageSize&  other);
   int  windowsId(QPageSize* theWrappedObject) const;
   int  static_QPageSize_windowsId(QPageSize::PageSizeId  pageSizeId);
    QString py_toString(QPageSize*);
    bool __nonzero__(QPageSize* obj) { return obj->isValid(); }
};





class PythonQtPublicPromoter_QPagedPaintDevice : public QPagedPaintDevice
{ public:
inline bool  py_q_newPage() { return this->newPage(); }
inline bool  py_q_setPageLayout(const QPageLayout&  pageLayout) { return QPagedPaintDevice::setPageLayout(pageLayout); }
inline bool  py_q_setPageMargins(const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter) { return QPagedPaintDevice::setPageMargins(margins, units); }
inline bool  py_q_setPageOrientation(QPageLayout::Orientation  orientation) { return QPagedPaintDevice::setPageOrientation(orientation); }
inline void py_q_setPageRanges(const QPageRanges&  ranges) { QPagedPaintDevice::setPageRanges(ranges); }
inline bool  py_q_setPageSize(const QPageSize&  pageSize) { return QPagedPaintDevice::setPageSize(pageSize); }
};

class PythonQtWrapper_QPagedPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PdfVersion )
enum PdfVersion{
  PdfVersion_1_4 = QPagedPaintDevice::PdfVersion_1_4,   PdfVersion_A1b = QPagedPaintDevice::PdfVersion_A1b,   PdfVersion_1_6 = QPagedPaintDevice::PdfVersion_1_6,   PdfVersion_X4 = QPagedPaintDevice::PdfVersion_X4};
public Q_SLOTS:
void delete_QPagedPaintDevice(QPagedPaintDevice* obj) { delete obj; }
   bool  newPage(QPagedPaintDevice* theWrappedObject);
   bool  py_q_newPage(QPagedPaintDevice* theWrappedObject){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_newPage());}
   QPageLayout  pageLayout(QPagedPaintDevice* theWrappedObject) const;
   QPageRanges  pageRanges(QPagedPaintDevice* theWrappedObject) const;
   bool  setPageLayout(QPagedPaintDevice* theWrappedObject, const QPageLayout&  pageLayout);
   bool  py_q_setPageLayout(QPagedPaintDevice* theWrappedObject, const QPageLayout&  pageLayout){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageLayout(pageLayout));}
   bool  setPageMargins(QPagedPaintDevice* theWrappedObject, const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter);
   bool  py_q_setPageMargins(QPagedPaintDevice* theWrappedObject, const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageMargins(margins, units));}
   bool  setPageOrientation(QPagedPaintDevice* theWrappedObject, QPageLayout::Orientation  orientation);
   bool  py_q_setPageOrientation(QPagedPaintDevice* theWrappedObject, QPageLayout::Orientation  orientation){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageOrientation(orientation));}
   void setPageRanges(QPagedPaintDevice* theWrappedObject, const QPageRanges&  ranges);
   void py_q_setPageRanges(QPagedPaintDevice* theWrappedObject, const QPageRanges&  ranges){  (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageRanges(ranges));}
   bool  setPageSize(QPagedPaintDevice* theWrappedObject, const QPageSize&  pageSize);
   bool  py_q_setPageSize(QPagedPaintDevice* theWrappedObject, const QPageSize&  pageSize){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageSize(pageSize));}
};





class PythonQtShell_QPaintDevice : public QPaintDevice
{
public:
    PythonQtShell_QPaintDevice():QPaintDevice(),_wrapper(nullptr) {};

   ~PythonQtShell_QPaintDevice() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPaintDevice : public QPaintDevice
{ public:
inline double  promoted_getDecodedMetricF(QPaintDevice::PaintDeviceMetric  metricA, QPaintDevice::PaintDeviceMetric  metricB) const { return this->getDecodedMetricF(metricA, metricB); }
inline void promoted_initPainter(QPainter*  painter) const { this->initPainter(painter); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintDevice*  promoted_redirected(QPoint*  offset) const { return this->redirected(offset); }
inline QPainter*  promoted_sharedPainter() const { return this->sharedPainter(); }
inline int  py_q_devType() const { return QPaintDevice::devType(); }
inline void py_q_initPainter(QPainter*  painter) const { QPaintDevice::initPainter(painter); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDevice::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return this->paintEngine(); }
inline QPaintDevice*  py_q_redirected(QPoint*  offset) const { return QPaintDevice::redirected(offset); }
inline QPainter*  py_q_sharedPainter() const { return QPaintDevice::sharedPainter(); }
};

class PythonQtWrapper_QPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PaintDeviceMetric )
enum PaintDeviceMetric{
  PdmWidth = QPaintDevice::PdmWidth,   PdmHeight = QPaintDevice::PdmHeight,   PdmWidthMM = QPaintDevice::PdmWidthMM,   PdmHeightMM = QPaintDevice::PdmHeightMM,   PdmNumColors = QPaintDevice::PdmNumColors,   PdmDepth = QPaintDevice::PdmDepth,   PdmDpiX = QPaintDevice::PdmDpiX,   PdmDpiY = QPaintDevice::PdmDpiY,   PdmPhysicalDpiX = QPaintDevice::PdmPhysicalDpiX,   PdmPhysicalDpiY = QPaintDevice::PdmPhysicalDpiY,   PdmDevicePixelRatio = QPaintDevice::PdmDevicePixelRatio,   PdmDevicePixelRatioScaled = QPaintDevice::PdmDevicePixelRatioScaled,   PdmDevicePixelRatioF_EncodedA = QPaintDevice::PdmDevicePixelRatioF_EncodedA,   PdmDevicePixelRatioF_EncodedB = QPaintDevice::PdmDevicePixelRatioF_EncodedB};
public Q_SLOTS:
QPaintDevice* new_QPaintDevice();
void delete_QPaintDevice(QPaintDevice* obj) { delete obj; }
   int  colorCount(QPaintDevice* theWrappedObject) const;
   int  depth(QPaintDevice* theWrappedObject) const;
   int  devType(QPaintDevice* theWrappedObject) const;
   int  py_q_devType(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_devType());}
   qreal  devicePixelRatio(QPaintDevice* theWrappedObject) const;
   qreal  devicePixelRatioF(QPaintDevice* theWrappedObject) const;
   qreal  static_QPaintDevice_devicePixelRatioFScale();
   int  static_QPaintDevice_encodeMetricF(QPaintDevice::PaintDeviceMetric  metric, double  value);
   double  getDecodedMetricF(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metricA, QPaintDevice::PaintDeviceMetric  metricB) const;
   int  height(QPaintDevice* theWrappedObject) const;
   int  heightMM(QPaintDevice* theWrappedObject) const;
   void initPainter(QPaintDevice* theWrappedObject, QPainter*  painter) const;
   void py_q_initPainter(QPaintDevice* theWrappedObject, QPainter*  painter) const{  (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_initPainter(painter));}
   int  logicalDpiX(QPaintDevice* theWrappedObject) const;
   int  logicalDpiY(QPaintDevice* theWrappedObject) const;
   int  metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   int  py_q_metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  paintEngine(QPaintDevice* theWrappedObject) const;
   QPaintEngine*  py_q_paintEngine(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_paintEngine());}
   bool  paintingActive(QPaintDevice* theWrappedObject) const;
   int  physicalDpiX(QPaintDevice* theWrappedObject) const;
   int  physicalDpiY(QPaintDevice* theWrappedObject) const;
   QPaintDevice*  redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const;
   QPaintDevice*  py_q_redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_redirected(offset));}
   QPainter*  sharedPainter(QPaintDevice* theWrappedObject) const;
   QPainter*  py_q_sharedPainter(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_sharedPainter());}
   int  width(QPaintDevice* theWrappedObject) const;
   int  widthMM(QPaintDevice* theWrappedObject) const;
};





class PythonQtPublicPromoter_QPaintDeviceWindow : public QPaintDeviceWindow
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_exposeEvent(QExposeEvent*  arg__1) { this->exposeEvent(arg__1); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QPaintDeviceWindow::event(event); }
inline void py_q_exposeEvent(QExposeEvent*  arg__1) { QPaintDeviceWindow::exposeEvent(arg__1); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDeviceWindow::metric(metric); }
inline void py_q_paintEvent(QPaintEvent*  event) { QPaintDeviceWindow::paintEvent(event); }
};

class PythonQtWrapper_QPaintDeviceWindow : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
void delete_QPaintDeviceWindow(QPaintDeviceWindow* obj) { delete obj; }
   bool  py_q_event(QPaintDeviceWindow* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QPaintDeviceWindow*)theWrappedObject)->py_q_event(event));}
   void py_q_exposeEvent(QPaintDeviceWindow* theWrappedObject, QExposeEvent*  arg__1){  (((PythonQtPublicPromoter_QPaintDeviceWindow*)theWrappedObject)->py_q_exposeEvent(arg__1));}
   int  py_q_metric(QPaintDeviceWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QPaintDeviceWindow*)theWrappedObject)->py_q_metric(metric));}
   void py_q_paintEvent(QPaintDeviceWindow* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QPaintDeviceWindow*)theWrappedObject)->py_q_paintEvent(event));}
   void update(QPaintDeviceWindow* theWrappedObject, const QRect&  rect);
   void update(QPaintDeviceWindow* theWrappedObject, const QRegion&  region);
};





class PythonQtShell_QPaintEngine : public QPaintEngine
{
public:
    PythonQtShell_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = QPaintEngine::PaintEngineFeatures()):QPaintEngine(features),_wrapper(nullptr) {};

   ~PythonQtShell_QPaintEngine() override;

bool  begin(QPaintDevice*  pdev) override;
QPoint  coordinateOffset() const override;
QPixmap  createPixmap(QSize  size) override;
QPixmap  createPixmapFromImage(QImage  image, Qt::ImageConversionFlags  flags = Qt::AutoColor) override;
void drawEllipse(const QRect&  r) override;
void drawEllipse(const QRectF&  r) override;
void drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) override;
void drawLines(const QLine*  lines, int  lineCount) override;
void drawLines(const QLineF*  lines, int  lineCount) override;
void drawPath(const QPainterPath&  path) override;
void drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr) override;
void drawPoints(const QPoint*  points, int  pointCount) override;
void drawPoints(const QPointF*  points, int  pointCount) override;
void drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) override;
void drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) override;
void drawRects(const QRect*  rects, int  rectCount) override;
void drawRects(const QRectF*  rects, int  rectCount) override;
void drawTextItem(const QPointF&  p, const QTextItem&  textItem) override;
void drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) override;
bool  end() override;
QPaintEngine::Type  type() const override;
void updateState(const QPaintEngineState&  state) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPaintEngine : public QPaintEngine
{ public:
inline bool  py_q_begin(QPaintDevice*  pdev) { return this->begin(pdev); }
inline QPoint  py_q_coordinateOffset() const { return QPaintEngine::coordinateOffset(); }
inline QPixmap  py_q_createPixmap(QSize  size) { return QPaintEngine::createPixmap(size); }
inline QPixmap  py_q_createPixmapFromImage(QImage  image, Qt::ImageConversionFlags  flags = Qt::AutoColor) { return QPaintEngine::createPixmapFromImage(image, flags); }
inline void py_q_drawEllipse(const QRect&  r) { QPaintEngine::drawEllipse(r); }
inline void py_q_drawEllipse(const QRectF&  r) { QPaintEngine::drawEllipse(r); }
inline void py_q_drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) { QPaintEngine::drawImage(r, pm, sr, flags); }
inline void py_q_drawLines(const QLine*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void py_q_drawLines(const QLineF*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void py_q_drawPath(const QPainterPath&  path) { QPaintEngine::drawPath(path); }
inline void py_q_drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr) { this->drawPixmap(r, pm, sr); }
inline void py_q_drawPoints(const QPoint*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void py_q_drawPoints(const QPointF*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void py_q_drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void py_q_drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void py_q_drawRects(const QRect*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void py_q_drawRects(const QRectF*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void py_q_drawTextItem(const QPointF&  p, const QTextItem&  textItem) { QPaintEngine::drawTextItem(p, textItem); }
inline void py_q_drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) { QPaintEngine::drawTiledPixmap(r, pixmap, s); }
inline bool  py_q_end() { return this->end(); }
inline QPaintEngine::Type  py_q_type() const { return this->type(); }
inline void py_q_updateState(const QPaintEngineState&  state) { this->updateState(state); }
};

class PythonQtWrapper_QPaintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DirtyFlag PaintEngineFeature PolygonDrawMode Type )
Q_FLAGS(DirtyFlags PaintEngineFeatures )
enum DirtyFlag{
  DirtyPen = QPaintEngine::DirtyPen,   DirtyBrush = QPaintEngine::DirtyBrush,   DirtyBrushOrigin = QPaintEngine::DirtyBrushOrigin,   DirtyFont = QPaintEngine::DirtyFont,   DirtyBackground = QPaintEngine::DirtyBackground,   DirtyBackgroundMode = QPaintEngine::DirtyBackgroundMode,   DirtyTransform = QPaintEngine::DirtyTransform,   DirtyClipRegion = QPaintEngine::DirtyClipRegion,   DirtyClipPath = QPaintEngine::DirtyClipPath,   DirtyHints = QPaintEngine::DirtyHints,   DirtyCompositionMode = QPaintEngine::DirtyCompositionMode,   DirtyClipEnabled = QPaintEngine::DirtyClipEnabled,   DirtyOpacity = QPaintEngine::DirtyOpacity,   AllDirty = QPaintEngine::AllDirty};
enum PaintEngineFeature{
  PrimitiveTransform = QPaintEngine::PrimitiveTransform,   PatternTransform = QPaintEngine::PatternTransform,   PixmapTransform = QPaintEngine::PixmapTransform,   PatternBrush = QPaintEngine::PatternBrush,   LinearGradientFill = QPaintEngine::LinearGradientFill,   RadialGradientFill = QPaintEngine::RadialGradientFill,   ConicalGradientFill = QPaintEngine::ConicalGradientFill,   AlphaBlend = QPaintEngine::AlphaBlend,   PorterDuff = QPaintEngine::PorterDuff,   PainterPaths = QPaintEngine::PainterPaths,   Antialiasing = QPaintEngine::Antialiasing,   BrushStroke = QPaintEngine::BrushStroke,   ConstantOpacity = QPaintEngine::ConstantOpacity,   MaskedBrush = QPaintEngine::MaskedBrush,   PerspectiveTransform = QPaintEngine::PerspectiveTransform,   BlendModes = QPaintEngine::BlendModes,   ObjectBoundingModeGradients = QPaintEngine::ObjectBoundingModeGradients,   RasterOpModes = QPaintEngine::RasterOpModes,   PaintOutsidePaintEvent = QPaintEngine::PaintOutsidePaintEvent,   AllFeatures = QPaintEngine::AllFeatures};
enum PolygonDrawMode{
  OddEvenMode = QPaintEngine::OddEvenMode,   WindingMode = QPaintEngine::WindingMode,   ConvexMode = QPaintEngine::ConvexMode,   PolylineMode = QPaintEngine::PolylineMode};
enum Type{
  X11 = QPaintEngine::X11,   Windows = QPaintEngine::Windows,   QuickDraw = QPaintEngine::QuickDraw,   CoreGraphics = QPaintEngine::CoreGraphics,   MacPrinter = QPaintEngine::MacPrinter,   QWindowSystem = QPaintEngine::QWindowSystem,   OpenGL = QPaintEngine::OpenGL,   Picture = QPaintEngine::Picture,   SVG = QPaintEngine::SVG,   Raster = QPaintEngine::Raster,   Direct3D = QPaintEngine::Direct3D,   Pdf = QPaintEngine::Pdf,   OpenVG = QPaintEngine::OpenVG,   OpenGL2 = QPaintEngine::OpenGL2,   PaintBuffer = QPaintEngine::PaintBuffer,   Blitter = QPaintEngine::Blitter,   Direct2D = QPaintEngine::Direct2D,   User = QPaintEngine::User,   MaxUser = QPaintEngine::MaxUser};
Q_DECLARE_FLAGS(DirtyFlags, DirtyFlag)
Q_DECLARE_FLAGS(PaintEngineFeatures, PaintEngineFeature)
public Q_SLOTS:
QPaintEngine* new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = QPaintEngine::PaintEngineFeatures());
void delete_QPaintEngine(QPaintEngine* obj) { delete obj; }
   bool  begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev);
   bool  py_q_begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev){  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_begin(pdev));}
   void clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPoint  coordinateOffset(QPaintEngine* theWrappedObject) const;
   QPoint  py_q_coordinateOffset(QPaintEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_coordinateOffset());}
   QPixmap  createPixmap(QPaintEngine* theWrappedObject, QSize  size);
   QPixmap  py_q_createPixmap(QPaintEngine* theWrappedObject, QSize  size){  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_createPixmap(size));}
   QPixmap  createPixmapFromImage(QPaintEngine* theWrappedObject, QImage  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QPixmap  py_q_createPixmapFromImage(QPaintEngine* theWrappedObject, QImage  image, Qt::ImageConversionFlags  flags = Qt::AutoColor){  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_createPixmapFromImage(image, flags));}
   void drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r);
   void py_q_drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawEllipse(r));}
   void drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r);
   void py_q_drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawEllipse(r));}
   void drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void py_q_drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawImage(r, pm, sr, flags));}
   void drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount);
   void py_q_drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawLines(lines, lineCount));}
   void drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount);
   void py_q_drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawLines(lines, lineCount));}
   void drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path);
   void py_q_drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPath(path));}
   void drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
   void py_q_drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPixmap(r, pm, sr));}
   void drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount);
   void py_q_drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPoints(points, pointCount));}
   void drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount);
   void py_q_drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPoints(points, pointCount));}
   void drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void py_q_drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPolygon(points, pointCount, mode));}
   void drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void py_q_drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPolygon(points, pointCount, mode));}
   void drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount);
   void py_q_drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawRects(rects, rectCount));}
   void drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount);
   void py_q_drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawRects(rects, rectCount));}
   void drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem);
   void py_q_drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawTextItem(p, textItem));}
   void drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
   void py_q_drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawTiledPixmap(r, pixmap, s));}
   bool  end(QPaintEngine* theWrappedObject);
   bool  py_q_end(QPaintEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_end());}
   bool  hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const;
   bool  isActive(QPaintEngine* theWrappedObject) const;
   bool  isExtended(QPaintEngine* theWrappedObject) const;
   QPaintDevice*  paintDevice(QPaintEngine* theWrappedObject) const;
   QPainter*  painter(QPaintEngine* theWrappedObject) const;
   void setActive(QPaintEngine* theWrappedObject, bool  newState);
   void setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip);
   void setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect);
   void syncState(QPaintEngine* theWrappedObject);
   QRegion  systemClip(QPaintEngine* theWrappedObject) const;
   QRect  systemRect(QPaintEngine* theWrappedObject) const;
   bool  testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPaintEngine::Type  type(QPaintEngine* theWrappedObject) const;
   QPaintEngine::Type  py_q_type(QPaintEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_type());}
   void updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state);
   void py_q_updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_updateState(state));}
};





class PythonQtShell_QPaintEngineState : public QPaintEngineState
{
public:
    PythonQtShell_QPaintEngineState():QPaintEngineState(),_wrapper(nullptr) {};

   ~PythonQtShell_QPaintEngineState();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPaintEngineState : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPaintEngineState* new_QPaintEngineState();
void delete_QPaintEngineState(QPaintEngineState* obj) { delete obj; }
   QBrush  backgroundBrush(QPaintEngineState* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPaintEngineState* theWrappedObject) const;
   QBrush  brush(QPaintEngineState* theWrappedObject) const;
   bool  brushNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPointF  brushOrigin(QPaintEngineState* theWrappedObject) const;
   Qt::ClipOperation  clipOperation(QPaintEngineState* theWrappedObject) const;
   QPainterPath  clipPath(QPaintEngineState* theWrappedObject) const;
   QRegion  clipRegion(QPaintEngineState* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPaintEngineState* theWrappedObject) const;
   QFont  font(QPaintEngineState* theWrappedObject) const;
   bool  isClipEnabled(QPaintEngineState* theWrappedObject) const;
   qreal  opacity(QPaintEngineState* theWrappedObject) const;
   QPainter*  painter(QPaintEngineState* theWrappedObject) const;
   QPen  pen(QPaintEngineState* theWrappedObject) const;
   bool  penNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPaintEngineState* theWrappedObject) const;
   QPaintEngine::DirtyFlags  state(QPaintEngineState* theWrappedObject) const;
   QTransform  transform(QPaintEngineState* theWrappedObject) const;
};





class PythonQtShell_QPaintEvent : public QPaintEvent
{
public:
    PythonQtShell_QPaintEvent(const QPaintEvent&  arg__1):QPaintEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(nullptr) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(nullptr) {};

   ~PythonQtShell_QPaintEvent() override;

QPaintEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPaintEvent : public QPaintEvent
{ public:
inline QPaintEvent&  promoted_operator_assign(const QPaintEvent&  other) { return this->QPaintEvent::operator=(other); }
inline QPaintEvent*  py_q_clone() const { return QPaintEvent::clone(); }
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPaintEvent* new_QPaintEvent(const QPaintEvent&  arg__1);
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; }
   QPaintEvent*  py_q_clone(QPaintEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintEvent*)theWrappedObject)->py_q_clone());}
   QPaintEvent*  operator_assign(QPaintEvent* theWrappedObject, const QPaintEvent&  other);
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
};





class PythonQtWrapper_QPainter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompositionMode PixmapFragmentHint RenderHint )
Q_FLAGS(PixmapFragmentHints RenderHints )
enum CompositionMode{
  CompositionMode_SourceOver = QPainter::CompositionMode_SourceOver,   CompositionMode_DestinationOver = QPainter::CompositionMode_DestinationOver,   CompositionMode_Clear = QPainter::CompositionMode_Clear,   CompositionMode_Source = QPainter::CompositionMode_Source,   CompositionMode_Destination = QPainter::CompositionMode_Destination,   CompositionMode_SourceIn = QPainter::CompositionMode_SourceIn,   CompositionMode_DestinationIn = QPainter::CompositionMode_DestinationIn,   CompositionMode_SourceOut = QPainter::CompositionMode_SourceOut,   CompositionMode_DestinationOut = QPainter::CompositionMode_DestinationOut,   CompositionMode_SourceAtop = QPainter::CompositionMode_SourceAtop,   CompositionMode_DestinationAtop = QPainter::CompositionMode_DestinationAtop,   CompositionMode_Xor = QPainter::CompositionMode_Xor,   CompositionMode_Plus = QPainter::CompositionMode_Plus,   CompositionMode_Multiply = QPainter::CompositionMode_Multiply,   CompositionMode_Screen = QPainter::CompositionMode_Screen,   CompositionMode_Overlay = QPainter::CompositionMode_Overlay,   CompositionMode_Darken = QPainter::CompositionMode_Darken,   CompositionMode_Lighten = QPainter::CompositionMode_Lighten,   CompositionMode_ColorDodge = QPainter::CompositionMode_ColorDodge,   CompositionMode_ColorBurn = QPainter::CompositionMode_ColorBurn,   CompositionMode_HardLight = QPainter::CompositionMode_HardLight,   CompositionMode_SoftLight = QPainter::CompositionMode_SoftLight,   CompositionMode_Difference = QPainter::CompositionMode_Difference,   CompositionMode_Exclusion = QPainter::CompositionMode_Exclusion,   RasterOp_SourceOrDestination = QPainter::RasterOp_SourceOrDestination,   RasterOp_SourceAndDestination = QPainter::RasterOp_SourceAndDestination,   RasterOp_SourceXorDestination = QPainter::RasterOp_SourceXorDestination,   RasterOp_NotSourceAndNotDestination = QPainter::RasterOp_NotSourceAndNotDestination,   RasterOp_NotSourceOrNotDestination = QPainter::RasterOp_NotSourceOrNotDestination,   RasterOp_NotSourceXorDestination = QPainter::RasterOp_NotSourceXorDestination,   RasterOp_NotSource = QPainter::RasterOp_NotSource,   RasterOp_NotSourceAndDestination = QPainter::RasterOp_NotSourceAndDestination,   RasterOp_SourceAndNotDestination = QPainter::RasterOp_SourceAndNotDestination,   RasterOp_NotSourceOrDestination = QPainter::RasterOp_NotSourceOrDestination,   RasterOp_SourceOrNotDestination = QPainter::RasterOp_SourceOrNotDestination,   RasterOp_ClearDestination = QPainter::RasterOp_ClearDestination,   RasterOp_SetDestination = QPainter::RasterOp_SetDestination,   RasterOp_NotDestination = QPainter::RasterOp_NotDestination,   NCompositionModes = QPainter::NCompositionModes};
enum PixmapFragmentHint{
  OpaqueHint = QPainter::OpaqueHint};
enum RenderHint{
  Antialiasing = QPainter::Antialiasing,   TextAntialiasing = QPainter::TextAntialiasing,   SmoothPixmapTransform = QPainter::SmoothPixmapTransform,   VerticalSubpixelPositioning = QPainter::VerticalSubpixelPositioning,   LosslessImageRendering = QPainter::LosslessImageRendering,   NonCosmeticBrushPatterns = QPainter::NonCosmeticBrushPatterns};
Q_DECLARE_FLAGS(PixmapFragmentHints, PixmapFragmentHint)
Q_DECLARE_FLAGS(RenderHints, RenderHint)
public Q_SLOTS:
QPainter* new_QPainter();
QPainter* new_QPainter(QPaintDevice*  arg__1);
void delete_QPainter(QPainter* obj) { delete obj; }
   const QBrush*  background(QPainter* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPainter* theWrappedObject) const;
   bool  begin(QPainter* theWrappedObject, QPaintDevice*  arg__1);
   void beginNativePainting(QPainter* theWrappedObject);
   QRect  boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o = QTextOption());
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text);
   QRect  boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text);
   const QBrush*  brush(QPainter* theWrappedObject) const;
   QPoint  brushOrigin(QPainter* theWrappedObject) const;
   QPointF  brushOriginF(QPainter* theWrappedObject) const;
   QRectF  clipBoundingRect(QPainter* theWrappedObject) const;
   QPainterPath  clipPath(QPainter* theWrappedObject) const;
   QRegion  clipRegion(QPainter* theWrappedObject) const;
   QTransform  combinedTransform(QPainter* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPainter* theWrappedObject) const;
   QPaintDevice*  device(QPainter* theWrappedObject) const;
   const QTransform*  deviceTransform(QPainter* theWrappedObject) const;
   void drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon);
   void drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry);
   void drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void drawEllipse(QPainter* theWrappedObject, const QRect&  r);
   void drawEllipse(QPainter* theWrappedObject, const QRectF&  r);
   void drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void drawGlyphRun(QPainter* theWrappedObject, const QPointF&  position, const QGlyphRun&  glyphRun);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx = 0, int  sy = 0, int  sw = -1, int  sh = -1, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawLine(QPainter* theWrappedObject, const QLine&  line);
   void drawLine(QPainter* theWrappedObject, const QLineF&  line);
   void drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   void drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void drawLines(QPainter* theWrappedObject, const QList<QLine >&  lines);
   void drawLines(QPainter* theWrappedObject, const QList<QLineF >&  lines);
   void drawLines(QPainter* theWrappedObject, const QList<QPoint >&  pointPairs);
   void drawLines(QPainter* theWrappedObject, const QList<QPointF >&  pointPairs);
   void drawPath(QPainter* theWrappedObject, const QPainterPath&  path);
   void drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture);
   void drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmapFragments(QPainter* theWrappedObject, const QPainter::PixmapFragment*  fragments, int  fragmentCount, const QPixmap&  pixmap, QPainter::PixmapFragmentHints  hints = QPainter::PixmapFragmentHints());
   void drawPoint(QPainter* theWrappedObject, const QPoint&  p);
   void drawPoint(QPainter* theWrappedObject, const QPointF&  pt);
   void drawPoint(QPainter* theWrappedObject, int  x, int  y);
   void drawPoints(QPainter* theWrappedObject, const QPolygon&  points);
   void drawPoints(QPainter* theWrappedObject, const QPolygonF&  points);
   void drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline);
   void drawRect(QPainter* theWrappedObject, const QRect&  rect);
   void drawRect(QPainter* theWrappedObject, const QRectF&  rect);
   void drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h);
   void drawRects(QPainter* theWrappedObject, const QList<QRect >&  rectangles);
   void drawRects(QPainter* theWrappedObject, const QList<QRectF >&  rectangles);
   void drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawStaticText(QPainter* theWrappedObject, const QPoint&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, const QPointF&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, int  left, int  top, const QStaticText&  staticText);
   void drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br = nullptr);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o = QTextOption());
   void drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br = nullptr);
   void drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s);
   void drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br = nullptr);
   void drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3 = QPoint());
   void drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset = QPointF());
   void drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx = 0, int  sy = 0);
   bool  end(QPainter* theWrappedObject);
   void endNativePainting(QPainter* theWrappedObject);
   void eraseRect(QPainter* theWrappedObject, const QRect&  arg__1);
   void eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1);
   void eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, QGradient::Preset  preset);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, QGradient::Preset  preset);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, QGradient::Preset  preset);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QColor&  color);
   const QFont*  font(QPainter* theWrappedObject) const;
   QFontInfo  fontInfo(QPainter* theWrappedObject) const;
   QFontMetrics  fontMetrics(QPainter* theWrappedObject) const;
   bool  hasClipping(QPainter* theWrappedObject) const;
   bool  isActive(QPainter* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QPainter* theWrappedObject) const;
   qreal  opacity(QPainter* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPainter* theWrappedObject) const;
   const QPen*  pen(QPainter* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPainter* theWrappedObject) const;
   void resetTransform(QPainter* theWrappedObject);
   void restore(QPainter* theWrappedObject);
   void rotate(QPainter* theWrappedObject, qreal  a);
   void save(QPainter* theWrappedObject);
   void scale(QPainter* theWrappedObject, qreal  sx, qreal  sy);
   void setBackground(QPainter* theWrappedObject, const QBrush&  bg);
   void setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode);
   void setBrush(QPainter* theWrappedObject, QColor  color);
   void setBrush(QPainter* theWrappedObject, Qt::GlobalColor  color);
   void setBrush(QPainter* theWrappedObject, const QBrush&  brush);
   void setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, int  x, int  y);
   void setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipping(QPainter* theWrappedObject, bool  enable);
   void setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode);
   void setFont(QPainter* theWrappedObject, const QFont&  f);
   void setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction);
   void setOpacity(QPainter* theWrappedObject, qreal  opacity);
   void setPen(QPainter* theWrappedObject, Qt::PenStyle  style);
   void setPen(QPainter* theWrappedObject, const QColor&  color);
   void setPen(QPainter* theWrappedObject, const QPen&  pen);
   void setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on = true);
   void setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on = true);
   void setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine = false);
   void setViewTransformEnabled(QPainter* theWrappedObject, bool  enable);
   void setViewport(QPainter* theWrappedObject, const QRect&  viewport);
   void setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWindow(QPainter* theWrappedObject, const QRect&  window);
   void setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled);
   void setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void shear(QPainter* theWrappedObject, qreal  sh, qreal  sv);
   void strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen);
   bool  testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const;
   const QTransform*  transform(QPainter* theWrappedObject) const;
   void translate(QPainter* theWrappedObject, const QPoint&  offset);
   void translate(QPainter* theWrappedObject, const QPointF&  offset);
   void translate(QPainter* theWrappedObject, qreal  dx, qreal  dy);
   bool  viewTransformEnabled(QPainter* theWrappedObject) const;
   QRect  viewport(QPainter* theWrappedObject) const;
   QRect  window(QPainter* theWrappedObject) const;
   bool  worldMatrixEnabled(QPainter* theWrappedObject) const;
   const QTransform*  worldTransform(QPainter* theWrappedObject) const;
};





class PythonQtWrapper_QPainterPath : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ElementType )
enum ElementType{
  MoveToElement = QPainterPath::MoveToElement,   LineToElement = QPainterPath::LineToElement,   CurveToElement = QPainterPath::CurveToElement,   CurveToDataElement = QPainterPath::CurveToDataElement};
public Q_SLOTS:
QPainterPath* new_QPainterPath();
QPainterPath* new_QPainterPath(const QPainterPath&  other);
QPainterPath* new_QPainterPath(const QPointF&  startPoint);
void delete_QPainterPath(QPainterPath* obj) { delete obj; }
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   int  capacity(QPainterPath* theWrappedObject) const;
   void clear(QPainterPath* theWrappedObject);
   void closeSubpath(QPainterPath* theWrappedObject);
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   QPainterPath::Element  elementAt(QPainterPath* theWrappedObject, int  i) const;
   int  elementCount(QPainterPath* theWrappedObject) const;
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   bool  isCachingEnabled(QPainterPath* theWrappedObject) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   qreal  length(QPainterPath* theWrappedObject) const;
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   bool  __ne__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath  __and__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iand__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QTransform&  m);
   QPainterPath  __add__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iadd__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __sub__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __isub__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   QPainterPath  __or__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __ior__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  len) const;
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   void reserve(QPainterPath* theWrappedObject, int  size);
   void setCachingEnabled(QPainterPath* theWrappedObject, bool  enabled);
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void swap(QPainterPath* theWrappedObject, QPainterPath&  other);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix = QTransform()) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix = QTransform()) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix = QTransform()) const;
   void translate(QPainterPath* theWrappedObject, const QPointF&  offset);
   void translate(QPainterPath* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  translated(QPainterPath* theWrappedObject, const QPointF&  offset) const;
   QPainterPath  translated(QPainterPath* theWrappedObject, qreal  dx, qreal  dy) const;
   QPainterPath  trimmed(QPainterPath* theWrappedObject, qreal  fromFraction, qreal  toFraction, qreal  offset = 0) const;
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
    QString py_toString(QPainterPath*);
    bool __nonzero__(QPainterPath* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QPainterPathStroker : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPainterPathStroker* new_QPainterPathStroker();
QPainterPathStroker* new_QPainterPathStroker(const QPen&  pen);
void delete_QPainterPathStroker(QPainterPathStroker* obj) { delete obj; }
   Qt::PenCapStyle  capStyle(QPainterPathStroker* theWrappedObject) const;
   QPainterPath  createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const;
   qreal  curveThreshold(QPainterPathStroker* theWrappedObject) const;
   qreal  dashOffset(QPainterPathStroker* theWrappedObject) const;
   QList<qreal >  dashPattern(QPainterPathStroker* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPainterPathStroker* theWrappedObject) const;
   qreal  miterLimit(QPainterPathStroker* theWrappedObject) const;
   void setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style);
   void setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold);
   void setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset);
   void setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1);
   void setDashPattern(QPainterPathStroker* theWrappedObject, const QList<qreal >&  dashPattern);
   void setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style);
   void setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length);
   void setWidth(QPainterPathStroker* theWrappedObject, qreal  width);
   qreal  width(QPainterPathStroker* theWrappedObject) const;
};





class PythonQtShell_QPainterPath__Element : public QPainterPath::Element
{
public:
    PythonQtShell_QPainterPath__Element():QPainterPath::Element(),_wrapper(nullptr) {};

   ~PythonQtShell_QPainterPath__Element();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPainterPath__Element : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPainterPath::Element* new_QPainterPath__Element();
QPainterPath::Element* new_QPainterPath__Element(const QPainterPath::Element& other) {
PythonQtShell_QPainterPath__Element* a = new PythonQtShell_QPainterPath__Element();
*((QPainterPath::Element*)a) = other;
return a; }
void delete_QPainterPath__Element(QPainterPath::Element* obj) { delete obj; }
   bool  isCurveTo(QPainterPath::Element* theWrappedObject) const;
   bool  isLineTo(QPainterPath::Element* theWrappedObject) const;
   bool  isMoveTo(QPainterPath::Element* theWrappedObject) const;
   QPointF  operator_cast_QPointF(QPainterPath::Element* theWrappedObject) const;
   bool  __ne__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const;
   bool  __eq__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const;
void py_set_type(QPainterPath::Element* theWrappedObject, QPainterPath::ElementType  type){ theWrappedObject->type = type; }
QPainterPath::ElementType  py_get_type(QPainterPath::Element* theWrappedObject){ return theWrappedObject->type; }
void py_set_x(QPainterPath::Element* theWrappedObject, qreal  x){ theWrappedObject->x = x; }
qreal  py_get_x(QPainterPath::Element* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QPainterPath::Element* theWrappedObject, qreal  y){ theWrappedObject->y = y; }
qreal  py_get_y(QPainterPath::Element* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtWrapper_QPainterStateGuard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InitialState )
enum class InitialState{
  Save = static_cast<int>(QPainterStateGuard::InitialState::Save),   NoSave = static_cast<int>(QPainterStateGuard::InitialState::NoSave)};
public Q_SLOTS:
QPainterStateGuard* new_QPainterStateGuard(QPainter*  painter, QPainterStateGuard::InitialState  state = QPainterStateGuard::InitialState::Save);
void delete_QPainterStateGuard(QPainterStateGuard* obj) { delete obj; }
   void restore(QPainterStateGuard* theWrappedObject);
   void save(QPainterStateGuard* theWrappedObject);
   void swap(QPainterStateGuard* theWrappedObject, QPainterStateGuard&  other);
};





class PythonQtShell_QPainter__PixmapFragment : public QPainter::PixmapFragment
{
public:
    PythonQtShell_QPainter__PixmapFragment():QPainter::PixmapFragment(),_wrapper(nullptr) {};

   ~PythonQtShell_QPainter__PixmapFragment();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPainter__PixmapFragment : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPainter::PixmapFragment* new_QPainter__PixmapFragment();
QPainter::PixmapFragment* new_QPainter__PixmapFragment(const QPainter::PixmapFragment& other) {
PythonQtShell_QPainter__PixmapFragment* a = new PythonQtShell_QPainter__PixmapFragment();
*((QPainter::PixmapFragment*)a) = other;
return a; }
void delete_QPainter__PixmapFragment(QPainter::PixmapFragment* obj) { delete obj; }
   QPainter::PixmapFragment  static_QPainter__PixmapFragment_create(const QPointF&  pos, const QRectF&  sourceRect, qreal  scaleX = 1, qreal  scaleY = 1, qreal  rotation = 0, qreal  opacity = 1);
void py_set_height(QPainter::PixmapFragment* theWrappedObject, qreal  height){ theWrappedObject->height = height; }
qreal  py_get_height(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->height; }
void py_set_opacity(QPainter::PixmapFragment* theWrappedObject, qreal  opacity){ theWrappedObject->opacity = opacity; }
qreal  py_get_opacity(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->opacity; }
void py_set_rotation(QPainter::PixmapFragment* theWrappedObject, qreal  rotation){ theWrappedObject->rotation = rotation; }
qreal  py_get_rotation(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->rotation; }
void py_set_scaleX(QPainter::PixmapFragment* theWrappedObject, qreal  scaleX){ theWrappedObject->scaleX = scaleX; }
qreal  py_get_scaleX(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->scaleX; }
void py_set_scaleY(QPainter::PixmapFragment* theWrappedObject, qreal  scaleY){ theWrappedObject->scaleY = scaleY; }
qreal  py_get_scaleY(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->scaleY; }
void py_set_sourceLeft(QPainter::PixmapFragment* theWrappedObject, qreal  sourceLeft){ theWrappedObject->sourceLeft = sourceLeft; }
qreal  py_get_sourceLeft(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->sourceLeft; }
void py_set_sourceTop(QPainter::PixmapFragment* theWrappedObject, qreal  sourceTop){ theWrappedObject->sourceTop = sourceTop; }
qreal  py_get_sourceTop(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->sourceTop; }
void py_set_width(QPainter::PixmapFragment* theWrappedObject, qreal  width){ theWrappedObject->width = width; }
qreal  py_get_width(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->width; }
void py_set_x(QPainter::PixmapFragment* theWrappedObject, qreal  x){ theWrappedObject->x = x; }
qreal  py_get_x(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QPainter::PixmapFragment* theWrappedObject, qreal  y){ theWrappedObject->y = y; }
qreal  py_get_y(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtShell_QPanGesture : public QPanGesture
{
public:
    PythonQtShell_QPanGesture(QObject*  parent = nullptr):QPanGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QPanGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QPanGesture : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPanGesture* new_QPanGesture(QObject*  parent = nullptr);
void delete_QPanGesture(QPanGesture* obj) { delete obj; }
   qreal  acceleration(QPanGesture* theWrappedObject) const;
   QPointF  delta(QPanGesture* theWrappedObject) const;
   QPointF  lastOffset(QPanGesture* theWrappedObject) const;
   QPointF  offset(QPanGesture* theWrappedObject) const;
   void setAcceleration(QPanGesture* theWrappedObject, qreal  value);
   void setLastOffset(QPanGesture* theWrappedObject, const QPointF&  value);
   void setOffset(QPanGesture* theWrappedObject, const QPointF&  value);
};





class PythonQtWrapper_QPdfOutputIntent : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPdfOutputIntent* new_QPdfOutputIntent();
QPdfOutputIntent* new_QPdfOutputIntent(const QPdfOutputIntent&  other);
void delete_QPdfOutputIntent(QPdfOutputIntent* obj) { delete obj; }
   QPdfOutputIntent*  operator_assign(QPdfOutputIntent* theWrappedObject, const QPdfOutputIntent&  other);
   QString  outputCondition(QPdfOutputIntent* theWrappedObject) const;
   QString  outputConditionIdentifier(QPdfOutputIntent* theWrappedObject) const;
   QColorSpace  outputProfile(QPdfOutputIntent* theWrappedObject) const;
   QUrl  registryName(QPdfOutputIntent* theWrappedObject) const;
   void setOutputCondition(QPdfOutputIntent* theWrappedObject, const QString&  condition);
   void setOutputConditionIdentifier(QPdfOutputIntent* theWrappedObject, const QString&  identifier);
   void setOutputProfile(QPdfOutputIntent* theWrappedObject, const QColorSpace&  profile);
   void setRegistryName(QPdfOutputIntent* theWrappedObject, const QUrl&  name);
   void swap(QPdfOutputIntent* theWrappedObject, QPdfOutputIntent&  other);
};





class PythonQtShell_QPdfWriter : public QPdfWriter
{
public:
    PythonQtShell_QPdfWriter(QIODevice*  device):QPdfWriter(device),_wrapper(nullptr) {};
    PythonQtShell_QPdfWriter(const QString&  filename):QPdfWriter(filename),_wrapper(nullptr) {};

   ~PythonQtShell_QPdfWriter() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  id) const override;
bool  newPage() override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
bool  setPageLayout(const QPageLayout&  pageLayout) override;
bool  setPageMargins(const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Millimeter) override;
bool  setPageOrientation(QPageLayout::Orientation  orientation) override;
void setPageRanges(const QPageRanges&  ranges) override;
bool  setPageSize(const QPageSize&  pageSize) override;
QPainter*  sharedPainter() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPdfWriter : public QPdfWriter
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  id) const { return this->metric(id); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  id) const { return QPdfWriter::metric(id); }
inline bool  py_q_newPage() { return QPdfWriter::newPage(); }
inline QPaintEngine*  py_q_paintEngine() const { return QPdfWriter::paintEngine(); }
};

class PythonQtWrapper_QPdfWriter : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPdfWriter* new_QPdfWriter(QIODevice*  device);
QPdfWriter* new_QPdfWriter(const QString&  filename);
void delete_QPdfWriter(QPdfWriter* obj) { delete obj; }
   void addFileAttachment(QPdfWriter* theWrappedObject, const QString&  fileName, const QByteArray&  data, const QString&  mimeType = QString());
   QString  author(QPdfWriter* theWrappedObject) const;
   QPdfWriter::ColorModel  colorModel(QPdfWriter* theWrappedObject) const;
   QString  creator(QPdfWriter* theWrappedObject) const;
   QUuid  documentId(QPdfWriter* theWrappedObject) const;
   QByteArray  documentXmpMetadata(QPdfWriter* theWrappedObject) const;
   int  py_q_metric(QPdfWriter* theWrappedObject, QPaintDevice::PaintDeviceMetric  id) const{  return (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_metric(id));}
   bool  py_q_newPage(QPdfWriter* theWrappedObject){  return (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_newPage());}
   QPdfOutputIntent  outputIntent(QPdfWriter* theWrappedObject) const;
   QPaintEngine*  py_q_paintEngine(QPdfWriter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->py_q_paintEngine());}
   QPagedPaintDevice::PdfVersion  pdfVersion(QPdfWriter* theWrappedObject) const;
   int  resolution(QPdfWriter* theWrappedObject) const;
   void setAuthor(QPdfWriter* theWrappedObject, const QString&  author);
   void setColorModel(QPdfWriter* theWrappedObject, QPdfWriter::ColorModel  model);
   void setCreator(QPdfWriter* theWrappedObject, const QString&  creator);
   void setDocumentId(QPdfWriter* theWrappedObject, QUuid  documentId);
   void setDocumentXmpMetadata(QPdfWriter* theWrappedObject, const QByteArray&  xmpMetadata);
   void setOutputIntent(QPdfWriter* theWrappedObject, const QPdfOutputIntent&  intent);
   void setPdfVersion(QPdfWriter* theWrappedObject, QPagedPaintDevice::PdfVersion  version);
   void setResolution(QPdfWriter* theWrappedObject, int  resolution);
   void setTitle(QPdfWriter* theWrappedObject, const QString&  title);
   QString  title(QPdfWriter* theWrappedObject) const;
};





class PythonQtShell_QPicture : public QPicture
{
public:
    PythonQtShell_QPicture(const QPicture&  arg__1):QPicture(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QPicture(int  formatVersion = -1):QPicture(formatVersion),_wrapper(nullptr) {};

   ~PythonQtShell_QPicture() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  m) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QPicture : public QPicture
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  m) const { return this->metric(m); }
inline int  py_q_devType() const { return QPicture::devType(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  m) const { return QPicture::metric(m); }
inline QPaintEngine*  py_q_paintEngine() const { return QPicture::paintEngine(); }
};

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; }
   QRect  boundingRect(QPicture* theWrappedObject) const;
   const char*  data(QPicture* theWrappedObject) const;
   int  py_q_devType(QPicture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPicture*)theWrappedObject)->py_q_devType());}
   bool  isNull(QPicture* theWrappedObject) const;
   bool  load(QPicture* theWrappedObject, QIODevice*  dev);
   bool  load(QPicture* theWrappedObject, const QString&  fileName);
   int  py_q_metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const{  return (((PythonQtPublicPromoter_QPicture*)theWrappedObject)->py_q_metric(m));}
   void writeTo(QPicture* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPicture* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  py_q_paintEngine(QPicture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPicture*)theWrappedObject)->py_q_paintEngine());}
   bool  play(QPicture* theWrappedObject, QPainter*  p);
   bool  save(QPicture* theWrappedObject, QIODevice*  dev);
   bool  save(QPicture* theWrappedObject, const QString&  fileName);
   void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
   uint  size(QPicture* theWrappedObject) const;
   void swap(QPicture* theWrappedObject, QPicture&  other);
    bool __nonzero__(QPicture* obj) { return !obj->isNull(); }
};


