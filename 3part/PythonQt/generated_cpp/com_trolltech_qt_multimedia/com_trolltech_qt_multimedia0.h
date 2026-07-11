#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <QtMultimedia/qaudio.h>
#include <QtMultimedia/qaudiobuffer.h>
#include <QtMultimedia/qaudiobufferinput.h>
#include <QtMultimedia/qaudiobufferoutput.h>
#include <QtMultimedia/qaudiodecoder.h>
#include <QtMultimedia/qaudiodevice.h>
#include <QtMultimedia/qaudioformat.h>
#include <QtMultimedia/qaudioinput.h>
#include <QtMultimedia/qaudiooutput.h>
#include <QtMultimedia/qaudiosink.h>
#include <QtMultimedia/qaudiosource.h>
#include <QtMultimedia/qcamera.h>
#include <QtMultimedia/qcameradevice.h>
#include <QtMultimedia/qcapturablewindow.h>
#include <QtMultimedia/qimagecapture.h>
#include <QtMultimedia/qmediacapturesession.h>
#include <QtMultimedia/qmediadevices.h>
#include <QtMultimedia/qmediaformat.h>
#include <QtMultimedia/qmediametadata.h>
#include <QtMultimedia/qmediaplayer.h>
#include <QtMultimedia/qmediarecorder.h>
#include <QtMultimedia/qmediatimerange.h>
#include <QtMultimedia/qplaybackoptions.h>
#include <QtMultimedia/qscreencapture.h>
#include <QtMultimedia/qsoundeffect.h>
#include <QtMultimedia/qvideoframe.h>
#include <QtMultimedia/qvideoframeformat.h>
#include <QtMultimedia/qvideoframeinput.h>
#include <QtMultimedia/qvideosink.h>
#include <QtMultimedia/qwindowcapture.h>
#include <QtMultimediaWidgets/qgraphicsvideoitem.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtWidgets/qgraphicsscene.h>
#include <QtWidgets/qgraphicssceneevent.h>
#include <QtWidgets/qgraphicstransform.h>
#include <QtWidgets/qgraphicswidget.h>
#include <QtWidgets/qstyleoption.h>
#include <QtWidgets/qwidget.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimetype.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qthread.h>
#include <qtransform.h>
#include <qurl.h>
#include <qwindow.h>



class PythonQtWrapper_QAudio : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error State VolumeScale )
enum Error{
  NoError = QAudio::NoError,   OpenError = QAudio::OpenError,   IOError = QAudio::IOError,   UnderrunError = QAudio::UnderrunError,   FatalError = QAudio::FatalError};
enum State{
  ActiveState = QAudio::ActiveState,   SuspendedState = QAudio::SuspendedState,   StoppedState = QAudio::StoppedState,   IdleState = QAudio::IdleState};
enum VolumeScale{
  LinearVolumeScale = QAudio::LinearVolumeScale,   CubicVolumeScale = QAudio::CubicVolumeScale,   LogarithmicVolumeScale = QAudio::LogarithmicVolumeScale,   DecibelVolumeScale = QAudio::DecibelVolumeScale};
public Q_SLOTS:

   float static_QAudio_convertVolume(float  volume, QAudio::VolumeScale  from, QAudio::VolumeScale  to)
   {
     return (QtAudio::convertVolume(volume, from, to));
   }
  
};





class PythonQtWrapper_QAudioBuffer : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QAudioBuffer* new_QAudioBuffer();
QAudioBuffer* new_QAudioBuffer(const QAudioBuffer&  other);
QAudioBuffer* new_QAudioBuffer(const QByteArray&  data, const QAudioFormat&  format, qint64  startTime = -1);
QAudioBuffer* new_QAudioBuffer(int  numFrames, const QAudioFormat&  format, qint64  startTime = -1);
void delete_QAudioBuffer(QAudioBuffer* obj) { delete obj; }
   qsizetype  byteCount(QAudioBuffer* theWrappedObject) const;
   qint64  duration(QAudioBuffer* theWrappedObject) const;
   QAudioFormat  format(QAudioBuffer* theWrappedObject) const;
   qsizetype  frameCount(QAudioBuffer* theWrappedObject) const;
   bool  isValid(QAudioBuffer* theWrappedObject) const;
   QAudioBuffer*  operator_assign(QAudioBuffer* theWrappedObject, const QAudioBuffer&  other);
   qsizetype  sampleCount(QAudioBuffer* theWrappedObject) const;
   qint64  startTime(QAudioBuffer* theWrappedObject) const;
   void swap(QAudioBuffer* theWrappedObject, QAudioBuffer&  other);
    bool __nonzero__(QAudioBuffer* obj) { return obj->isValid(); }
};





class PythonQtShell_QAudioBufferInput : public QAudioBufferInput
{
public:
    PythonQtShell_QAudioBufferInput(QObject*  parent = nullptr):QAudioBufferInput(parent),_wrapper(nullptr) {};
    PythonQtShell_QAudioBufferInput(const QAudioFormat&  format, QObject*  parent = nullptr):QAudioBufferInput(format, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAudioBufferInput() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAudioBufferInput : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QAudioBufferInput* new_QAudioBufferInput(QObject*  parent = nullptr);
QAudioBufferInput* new_QAudioBufferInput(const QAudioFormat&  format, QObject*  parent = nullptr);
void delete_QAudioBufferInput(QAudioBufferInput* obj) { delete obj; }
   QMediaCaptureSession*  captureSession(QAudioBufferInput* theWrappedObject) const;
   QAudioFormat  format(QAudioBufferInput* theWrappedObject) const;
   bool  sendAudioBuffer(QAudioBufferInput* theWrappedObject, const QAudioBuffer&  audioBuffer);
};





class PythonQtShell_QAudioBufferOutput : public QAudioBufferOutput
{
public:
    PythonQtShell_QAudioBufferOutput(QObject*  parent = nullptr):QAudioBufferOutput(parent),_wrapper(nullptr) {};
    PythonQtShell_QAudioBufferOutput(const QAudioFormat&  format, QObject*  parent = nullptr):QAudioBufferOutput(format, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAudioBufferOutput() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAudioBufferOutput : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QAudioBufferOutput* new_QAudioBufferOutput(QObject*  parent = nullptr);
QAudioBufferOutput* new_QAudioBufferOutput(const QAudioFormat&  format, QObject*  parent = nullptr);
void delete_QAudioBufferOutput(QAudioBufferOutput* obj) { delete obj; }
   QAudioFormat  format(QAudioBufferOutput* theWrappedObject) const;
};





class PythonQtShell_QAudioDecoder : public QAudioDecoder
{
public:
    PythonQtShell_QAudioDecoder(QObject*  parent = nullptr):QAudioDecoder(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAudioDecoder() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAudioDecoder : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QAudioDecoder* new_QAudioDecoder(QObject*  parent = nullptr);
void delete_QAudioDecoder(QAudioDecoder* obj) { delete obj; }
   QAudioFormat  audioFormat(QAudioDecoder* theWrappedObject) const;
   bool  bufferAvailable(QAudioDecoder* theWrappedObject) const;
   qint64  duration(QAudioDecoder* theWrappedObject) const;
   QAudioDecoder::Error  error(QAudioDecoder* theWrappedObject) const;
   QString  errorString(QAudioDecoder* theWrappedObject) const;
   bool  isDecoding(QAudioDecoder* theWrappedObject) const;
   bool  isSupported(QAudioDecoder* theWrappedObject) const;
   qint64  position(QAudioDecoder* theWrappedObject) const;
   QAudioBuffer  read(QAudioDecoder* theWrappedObject) const;
   void setAudioFormat(QAudioDecoder* theWrappedObject, const QAudioFormat&  format);
   void setSource(QAudioDecoder* theWrappedObject, const QUrl&  fileName);
   void setSourceDevice(QAudioDecoder* theWrappedObject, QIODevice*  device);
   QUrl  source(QAudioDecoder* theWrappedObject) const;
   QIODevice*  sourceDevice(QAudioDecoder* theWrappedObject) const;
};





class PythonQtWrapper_QAudioDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode )
enum Mode{
  Null = QAudioDevice::Null,   Input = QAudioDevice::Input,   Output = QAudioDevice::Output};
public Q_SLOTS:
QAudioDevice* new_QAudioDevice();
QAudioDevice* new_QAudioDevice(const QAudioDevice&  other);
void delete_QAudioDevice(QAudioDevice* obj) { delete obj; }
   QAudioFormat::ChannelConfig  channelConfiguration(QAudioDevice* theWrappedObject) const;
   QString  description(QAudioDevice* theWrappedObject) const;
   QByteArray  id(QAudioDevice* theWrappedObject) const;
   bool  isDefault(QAudioDevice* theWrappedObject) const;
   bool  isFormatSupported(QAudioDevice* theWrappedObject, const QAudioFormat&  format) const;
   bool  isNull(QAudioDevice* theWrappedObject) const;
   int  maximumChannelCount(QAudioDevice* theWrappedObject) const;
   int  maximumSampleRate(QAudioDevice* theWrappedObject) const;
   int  minimumChannelCount(QAudioDevice* theWrappedObject) const;
   int  minimumSampleRate(QAudioDevice* theWrappedObject) const;
   QAudioDevice::Mode  mode(QAudioDevice* theWrappedObject) const;
   bool  __ne__(QAudioDevice* theWrappedObject, const QAudioDevice&  other) const;
   QAudioDevice*  operator_assign(QAudioDevice* theWrappedObject, const QAudioDevice&  other);
   bool  __eq__(QAudioDevice* theWrappedObject, const QAudioDevice&  other) const;
   QAudioFormat  preferredFormat(QAudioDevice* theWrappedObject) const;
   QList<QAudioFormat::SampleFormat >  supportedSampleFormats(QAudioDevice* theWrappedObject) const;
   void swap(QAudioDevice* theWrappedObject, QAudioDevice&  other);
    bool __nonzero__(QAudioDevice* obj) { return !obj->isNull(); }
};





class PythonQtShell_QAudioFormat : public QAudioFormat
{
public:
    PythonQtShell_QAudioFormat():QAudioFormat(),_wrapper(nullptr) {};

   ~PythonQtShell_QAudioFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAudioFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AudioChannelPosition ChannelConfig SampleFormat )
enum AudioChannelPosition{
  UnknownPosition = QAudioFormat::UnknownPosition,   FrontLeft = QAudioFormat::FrontLeft,   FrontRight = QAudioFormat::FrontRight,   FrontCenter = QAudioFormat::FrontCenter,   LFE = QAudioFormat::LFE,   BackLeft = QAudioFormat::BackLeft,   BackRight = QAudioFormat::BackRight,   FrontLeftOfCenter = QAudioFormat::FrontLeftOfCenter,   FrontRightOfCenter = QAudioFormat::FrontRightOfCenter,   BackCenter = QAudioFormat::BackCenter,   SideLeft = QAudioFormat::SideLeft,   SideRight = QAudioFormat::SideRight,   TopCenter = QAudioFormat::TopCenter,   TopFrontLeft = QAudioFormat::TopFrontLeft,   TopFrontCenter = QAudioFormat::TopFrontCenter,   TopFrontRight = QAudioFormat::TopFrontRight,   TopBackLeft = QAudioFormat::TopBackLeft,   TopBackCenter = QAudioFormat::TopBackCenter,   TopBackRight = QAudioFormat::TopBackRight,   LFE2 = QAudioFormat::LFE2,   TopSideLeft = QAudioFormat::TopSideLeft,   TopSideRight = QAudioFormat::TopSideRight,   BottomFrontCenter = QAudioFormat::BottomFrontCenter,   BottomFrontLeft = QAudioFormat::BottomFrontLeft,   BottomFrontRight = QAudioFormat::BottomFrontRight};
enum ChannelConfig{
  ChannelConfigUnknown = QAudioFormat::ChannelConfigUnknown,   ChannelConfigMono = QAudioFormat::ChannelConfigMono,   ChannelConfigStereo = QAudioFormat::ChannelConfigStereo,   ChannelConfig2Dot1 = QAudioFormat::ChannelConfig2Dot1,   ChannelConfig3Dot0 = QAudioFormat::ChannelConfig3Dot0,   ChannelConfig3Dot1 = QAudioFormat::ChannelConfig3Dot1,   ChannelConfigSurround5Dot0 = QAudioFormat::ChannelConfigSurround5Dot0,   ChannelConfigSurround5Dot1 = QAudioFormat::ChannelConfigSurround5Dot1,   ChannelConfigSurround7Dot0 = QAudioFormat::ChannelConfigSurround7Dot0,   ChannelConfigSurround7Dot1 = QAudioFormat::ChannelConfigSurround7Dot1};
enum SampleFormat{
  Unknown = QAudioFormat::Unknown,   UInt8 = QAudioFormat::UInt8,   Int16 = QAudioFormat::Int16,   Int32 = QAudioFormat::Int32,   Float = QAudioFormat::Float,   NSampleFormats = QAudioFormat::NSampleFormats};
public Q_SLOTS:
QAudioFormat* new_QAudioFormat();
void delete_QAudioFormat(QAudioFormat* obj) { delete obj; }
   int  bytesForDuration(QAudioFormat* theWrappedObject, qint64  microseconds) const;
   int  bytesForFrames(QAudioFormat* theWrappedObject, int  frameCount) const;
   int  bytesPerFrame(QAudioFormat* theWrappedObject) const;
   int  bytesPerSample(QAudioFormat* theWrappedObject) const;
   QAudioFormat::ChannelConfig  channelConfig(QAudioFormat* theWrappedObject) const;
   int  channelCount(QAudioFormat* theWrappedObject) const;
   int  channelOffset(QAudioFormat* theWrappedObject, QAudioFormat::AudioChannelPosition  channel) const;
   QAudioFormat::ChannelConfig  static_QAudioFormat_defaultChannelConfigForChannelCount(int  channelCount);
   qint64  durationForBytes(QAudioFormat* theWrappedObject, int  byteCount) const;
   qint64  durationForFrames(QAudioFormat* theWrappedObject, int  frameCount) const;
   int  framesForBytes(QAudioFormat* theWrappedObject, int  byteCount) const;
   int  framesForDuration(QAudioFormat* theWrappedObject, qint64  microseconds) const;
   bool  isValid(QAudioFormat* theWrappedObject) const;
   float  normalizedSampleValue(QAudioFormat* theWrappedObject, const void*  sample) const;
   bool  __ne__(QAudioFormat* theWrappedObject, const QAudioFormat&  b);
   bool  __eq__(QAudioFormat* theWrappedObject, const QAudioFormat&  b);
   QAudioFormat::SampleFormat  sampleFormat(QAudioFormat* theWrappedObject) const;
   int  sampleRate(QAudioFormat* theWrappedObject) const;
   void setChannelConfig(QAudioFormat* theWrappedObject, QAudioFormat::ChannelConfig  config);
   void setChannelCount(QAudioFormat* theWrappedObject, int  channelCount);
   void setSampleFormat(QAudioFormat* theWrappedObject, QAudioFormat::SampleFormat  f);
   void setSampleRate(QAudioFormat* theWrappedObject, int  sampleRate);
    QString py_toString(QAudioFormat*);
    bool __nonzero__(QAudioFormat* obj) { return obj->isValid(); }
};





class PythonQtShell_QAudioInput : public QAudioInput
{
public:
    PythonQtShell_QAudioInput(QObject*  parent = nullptr):QAudioInput(parent),_wrapper(nullptr) {};
    PythonQtShell_QAudioInput(const QAudioDevice&  deviceInfo, QObject*  parent = nullptr):QAudioInput(deviceInfo, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAudioInput() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAudioInput : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QAudioInput* new_QAudioInput(QObject*  parent = nullptr);
QAudioInput* new_QAudioInput(const QAudioDevice&  deviceInfo, QObject*  parent = nullptr);
void delete_QAudioInput(QAudioInput* obj) { delete obj; }
   QAudioDevice  device(QAudioInput* theWrappedObject) const;
   bool  isMuted(QAudioInput* theWrappedObject) const;
   float  volume(QAudioInput* theWrappedObject) const;
};





class PythonQtShell_QAudioOutput : public QAudioOutput
{
public:
    PythonQtShell_QAudioOutput(QObject*  parent = nullptr):QAudioOutput(parent),_wrapper(nullptr) {};
    PythonQtShell_QAudioOutput(const QAudioDevice&  device, QObject*  parent = nullptr):QAudioOutput(device, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAudioOutput() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAudioOutput : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QAudioOutput* new_QAudioOutput(QObject*  parent = nullptr);
QAudioOutput* new_QAudioOutput(const QAudioDevice&  device, QObject*  parent = nullptr);
void delete_QAudioOutput(QAudioOutput* obj) { delete obj; }
   QAudioDevice  device(QAudioOutput* theWrappedObject) const;
   bool  isMuted(QAudioOutput* theWrappedObject) const;
   float  volume(QAudioOutput* theWrappedObject) const;
};





class PythonQtShell_QAudioSink : public QAudioSink
{
public:
    PythonQtShell_QAudioSink(const QAudioDevice&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr):QAudioSink(audioDeviceInfo, format, parent),_wrapper(nullptr) {};
    PythonQtShell_QAudioSink(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr):QAudioSink(format, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAudioSink() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAudioSink : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QAudioSink* new_QAudioSink(const QAudioDevice&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr);
QAudioSink* new_QAudioSink(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr);
void delete_QAudioSink(QAudioSink* obj) { delete obj; }
   qsizetype  bufferFrameCount(QAudioSink* theWrappedObject) const;
   qsizetype  bufferSize(QAudioSink* theWrappedObject) const;
   qsizetype  bytesFree(QAudioSink* theWrappedObject) const;
   qint64  elapsedUSecs(QAudioSink* theWrappedObject) const;
   QAudio::Error  error(QAudioSink* theWrappedObject) const;
   QAudioFormat  format(QAudioSink* theWrappedObject) const;
   qsizetype  framesFree(QAudioSink* theWrappedObject) const;
   bool  isNull(QAudioSink* theWrappedObject) const;
   qint64  processedUSecs(QAudioSink* theWrappedObject) const;
   void reset(QAudioSink* theWrappedObject);
   void resume(QAudioSink* theWrappedObject);
   void setBufferFrameCount(QAudioSink* theWrappedObject, qsizetype  framesCount);
   void setBufferSize(QAudioSink* theWrappedObject, qsizetype  bytes);
   void setVolume(QAudioSink* theWrappedObject, qreal  arg__1);
   QIODevice*  start(QAudioSink* theWrappedObject);
   void start(QAudioSink* theWrappedObject, QIODevice*  device);
   QAudio::State  state(QAudioSink* theWrappedObject) const;
   void stop(QAudioSink* theWrappedObject);
   void suspend(QAudioSink* theWrappedObject);
   qreal  volume(QAudioSink* theWrappedObject) const;
    bool __nonzero__(QAudioSink* obj) { return !obj->isNull(); }
};





class PythonQtShell_QAudioSource : public QAudioSource
{
public:
    PythonQtShell_QAudioSource(const QAudioDevice&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr):QAudioSource(audioDeviceInfo, format, parent),_wrapper(nullptr) {};
    PythonQtShell_QAudioSource(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr):QAudioSource(format, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAudioSource() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAudioSource : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QAudioSource* new_QAudioSource(const QAudioDevice&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr);
QAudioSource* new_QAudioSource(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr);
void delete_QAudioSource(QAudioSource* obj) { delete obj; }
   qsizetype  bufferFrameCount(QAudioSource* theWrappedObject) const;
   qsizetype  bufferSize(QAudioSource* theWrappedObject) const;
   qsizetype  bytesAvailable(QAudioSource* theWrappedObject) const;
   qint64  elapsedUSecs(QAudioSource* theWrappedObject) const;
   QAudio::Error  error(QAudioSource* theWrappedObject) const;
   QAudioFormat  format(QAudioSource* theWrappedObject) const;
   qsizetype  framesAvailable(QAudioSource* theWrappedObject) const;
   bool  isNull(QAudioSource* theWrappedObject) const;
   qint64  processedUSecs(QAudioSource* theWrappedObject) const;
   void reset(QAudioSource* theWrappedObject);
   void resume(QAudioSource* theWrappedObject);
   void setBufferFrameCount(QAudioSource* theWrappedObject, qsizetype  frames);
   void setBufferSize(QAudioSource* theWrappedObject, qsizetype  bytes);
   void setVolume(QAudioSource* theWrappedObject, qreal  volume);
   QIODevice*  start(QAudioSource* theWrappedObject);
   void start(QAudioSource* theWrappedObject, QIODevice*  device);
   QAudio::State  state(QAudioSource* theWrappedObject) const;
   void stop(QAudioSource* theWrappedObject);
   void suspend(QAudioSource* theWrappedObject);
   qreal  volume(QAudioSource* theWrappedObject) const;
    bool __nonzero__(QAudioSource* obj) { return !obj->isNull(); }
};





class PythonQtShell_QCamera : public QCamera
{
public:
    PythonQtShell_QCamera(QCameraDevice::Position  position, QObject*  parent = nullptr):QCamera(position, parent),_wrapper(nullptr) {};
    PythonQtShell_QCamera(QObject*  parent = nullptr):QCamera(parent),_wrapper(nullptr) {};
    PythonQtShell_QCamera(const QCameraDevice&  cameraDevice, QObject*  parent = nullptr):QCamera(cameraDevice, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QCamera() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QCamera : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Feature )
Q_FLAGS(Features )
enum class Feature{
  ColorTemperature = static_cast<int>(QCamera::Feature::ColorTemperature),   ExposureCompensation = static_cast<int>(QCamera::Feature::ExposureCompensation),   IsoSensitivity = static_cast<int>(QCamera::Feature::IsoSensitivity),   ManualExposureTime = static_cast<int>(QCamera::Feature::ManualExposureTime),   CustomFocusPoint = static_cast<int>(QCamera::Feature::CustomFocusPoint),   FocusDistance = static_cast<int>(QCamera::Feature::FocusDistance)};
Q_DECLARE_FLAGS(Features, Feature)
public Q_SLOTS:
QCamera* new_QCamera(QCameraDevice::Position  position, QObject*  parent = nullptr);
QCamera* new_QCamera(QObject*  parent = nullptr);
QCamera* new_QCamera(const QCameraDevice&  cameraDevice, QObject*  parent = nullptr);
void delete_QCamera(QCamera* obj) { delete obj; }
   QCameraDevice  cameraDevice(QCamera* theWrappedObject) const;
   QCameraFormat  cameraFormat(QCamera* theWrappedObject) const;
   QMediaCaptureSession*  captureSession(QCamera* theWrappedObject) const;
   int  colorTemperature(QCamera* theWrappedObject) const;
   QPointF  customFocusPoint(QCamera* theWrappedObject) const;
   QCamera::Error  error(QCamera* theWrappedObject) const;
   QString  errorString(QCamera* theWrappedObject) const;
   float  exposureCompensation(QCamera* theWrappedObject) const;
   QCamera::ExposureMode  exposureMode(QCamera* theWrappedObject) const;
   float  exposureTime(QCamera* theWrappedObject) const;
   QCamera::FlashMode  flashMode(QCamera* theWrappedObject) const;
   float  focusDistance(QCamera* theWrappedObject) const;
   QCamera::FocusMode  focusMode(QCamera* theWrappedObject) const;
   QPointF  focusPoint(QCamera* theWrappedObject) const;
   bool  isActive(QCamera* theWrappedObject) const;
   bool  isAvailable(QCamera* theWrappedObject) const;
   bool  isExposureModeSupported(QCamera* theWrappedObject, QCamera::ExposureMode  mode) const;
   bool  isFlashModeSupported(QCamera* theWrappedObject, QCamera::FlashMode  mode) const;
   bool  isFlashReady(QCamera* theWrappedObject) const;
   bool  isFocusModeSupported(QCamera* theWrappedObject, QCamera::FocusMode  mode) const;
   bool  isTorchModeSupported(QCamera* theWrappedObject, QCamera::TorchMode  mode) const;
   bool  isWhiteBalanceModeSupported(QCamera* theWrappedObject, QCamera::WhiteBalanceMode  mode) const;
   int  isoSensitivity(QCamera* theWrappedObject) const;
   float  manualExposureTime(QCamera* theWrappedObject) const;
   int  manualIsoSensitivity(QCamera* theWrappedObject) const;
   float  maximumExposureTime(QCamera* theWrappedObject) const;
   int  maximumIsoSensitivity(QCamera* theWrappedObject) const;
   float  maximumZoomFactor(QCamera* theWrappedObject) const;
   float  minimumExposureTime(QCamera* theWrappedObject) const;
   int  minimumIsoSensitivity(QCamera* theWrappedObject) const;
   float  minimumZoomFactor(QCamera* theWrappedObject) const;
   void setCameraDevice(QCamera* theWrappedObject, const QCameraDevice&  cameraDevice);
   void setCameraFormat(QCamera* theWrappedObject, const QCameraFormat&  format);
   void setCustomFocusPoint(QCamera* theWrappedObject, const QPointF&  point);
   void setFocusDistance(QCamera* theWrappedObject, float  d);
   void setFocusMode(QCamera* theWrappedObject, QCamera::FocusMode  mode);
   void setZoomFactor(QCamera* theWrappedObject, float  factor);
   QCamera::Features  supportedFeatures(QCamera* theWrappedObject) const;
   QCamera::TorchMode  torchMode(QCamera* theWrappedObject) const;
   QCamera::WhiteBalanceMode  whiteBalanceMode(QCamera* theWrappedObject) const;
   float  zoomFactor(QCamera* theWrappedObject) const;
};





class PythonQtWrapper_QCameraDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Position )
enum Position{
  UnspecifiedPosition = QCameraDevice::UnspecifiedPosition,   BackFace = QCameraDevice::BackFace,   FrontFace = QCameraDevice::FrontFace};
public Q_SLOTS:
QCameraDevice* new_QCameraDevice();
QCameraDevice* new_QCameraDevice(const QCameraDevice&  other);
void delete_QCameraDevice(QCameraDevice* obj) { delete obj; }
   QString  description(QCameraDevice* theWrappedObject) const;
   QByteArray  id(QCameraDevice* theWrappedObject) const;
   bool  isDefault(QCameraDevice* theWrappedObject) const;
   bool  isNull(QCameraDevice* theWrappedObject) const;
   bool  __ne__(QCameraDevice* theWrappedObject, const QCameraDevice&  other) const;
   QCameraDevice*  operator_assign(QCameraDevice* theWrappedObject, const QCameraDevice&  other);
   bool  __eq__(QCameraDevice* theWrappedObject, const QCameraDevice&  other) const;
   QList<QSize >  photoResolutions(QCameraDevice* theWrappedObject) const;
   QCameraDevice::Position  position(QCameraDevice* theWrappedObject) const;
   QList<QCameraFormat >  videoFormats(QCameraDevice* theWrappedObject) const;
    QString py_toString(QCameraDevice*);
    bool __nonzero__(QCameraDevice* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QCameraFormat : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QCameraFormat* new_QCameraFormat();
QCameraFormat* new_QCameraFormat(const QCameraFormat&  other);
void delete_QCameraFormat(QCameraFormat* obj) { delete obj; }
   bool  isNull(QCameraFormat* theWrappedObject) const;
   float  maxFrameRate(QCameraFormat* theWrappedObject) const;
   float  minFrameRate(QCameraFormat* theWrappedObject) const;
   bool  __ne__(QCameraFormat* theWrappedObject, const QCameraFormat&  other) const;
   QCameraFormat*  operator_assign(QCameraFormat* theWrappedObject, const QCameraFormat&  other);
   bool  __eq__(QCameraFormat* theWrappedObject, const QCameraFormat&  other) const;
   QVideoFrameFormat::PixelFormat  pixelFormat(QCameraFormat* theWrappedObject) const;
   QSize  resolution(QCameraFormat* theWrappedObject) const;
    QString py_toString(QCameraFormat*);
    bool __nonzero__(QCameraFormat* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QCapturableWindow : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QCapturableWindow* new_QCapturableWindow();
QCapturableWindow* new_QCapturableWindow(QWindow*  window);
QCapturableWindow* new_QCapturableWindow(const QCapturableWindow&  other);
void delete_QCapturableWindow(QCapturableWindow* obj) { delete obj; }
   QString  description(QCapturableWindow* theWrappedObject) const;
   bool  isValid(QCapturableWindow* theWrappedObject) const;
   bool  __ne__(QCapturableWindow* theWrappedObject, const QCapturableWindow&  rhs);
   QCapturableWindow*  operator_assign(QCapturableWindow* theWrappedObject, const QCapturableWindow&  other);
   bool  __eq__(QCapturableWindow* theWrappedObject, const QCapturableWindow&  rhs);
   void swap(QCapturableWindow* theWrappedObject, QCapturableWindow&  other);
    QString py_toString(QCapturableWindow*);
    bool __nonzero__(QCapturableWindow* obj) { return obj->isValid(); }
};





class PythonQtShell_QGraphicsVideoItem : public QGraphicsVideoItem
{
public:
    PythonQtShell_QGraphicsVideoItem(QGraphicsItem*  parent = nullptr):QGraphicsVideoItem(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsVideoItem() override;

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

class PythonQtPublicPromoter_QGraphicsVideoItem : public QGraphicsVideoItem
{ public:
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline QRectF  py_q_boundingRect() const { return QGraphicsVideoItem::boundingRect(); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsVideoItem::itemChange(change, value); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsVideoItem::paint(painter, option, widget); }
inline void py_q_timerEvent(QTimerEvent*  event) { QGraphicsVideoItem::timerEvent(event); }
inline int  py_q_type() const { return QGraphicsVideoItem::type(); }
};

class PythonQtWrapper_QGraphicsVideoItem : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QGraphicsVideoItem* new_QGraphicsVideoItem(QGraphicsItem*  parent = nullptr);
void delete_QGraphicsVideoItem(QGraphicsVideoItem* obj) { delete obj; }
   Qt::AspectRatioMode  aspectRatioMode(QGraphicsVideoItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsVideoItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_boundingRect());}
   QVariant  py_q_itemChange(QGraphicsVideoItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_itemChange(change, value));}
   QSizeF  nativeSize(QGraphicsVideoItem* theWrappedObject) const;
   QPointF  offset(QGraphicsVideoItem* theWrappedObject) const;
   void py_q_paint(QGraphicsVideoItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void setAspectRatioMode(QGraphicsVideoItem* theWrappedObject, Qt::AspectRatioMode  mode);
   void setOffset(QGraphicsVideoItem* theWrappedObject, const QPointF&  offset);
   void setSize(QGraphicsVideoItem* theWrappedObject, const QSizeF&  size);
   QSizeF  size(QGraphicsVideoItem* theWrappedObject) const;
   void py_q_timerEvent(QGraphicsVideoItem* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_timerEvent(event));}
   int  py_q_type(QGraphicsVideoItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_type());}
   QVideoSink*  videoSink(QGraphicsVideoItem* theWrappedObject) const;
};





class PythonQtShell_QImageCapture : public QImageCapture
{
public:
    PythonQtShell_QImageCapture(QObject*  parent = nullptr):QImageCapture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QImageCapture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QImageCapture : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QImageCapture* new_QImageCapture(QObject*  parent = nullptr);
void delete_QImageCapture(QImageCapture* obj) { delete obj; }
   void addMetaData(QImageCapture* theWrappedObject, const QMediaMetaData&  metaData);
   QMediaCaptureSession*  captureSession(QImageCapture* theWrappedObject) const;
   QImageCapture::Error  error(QImageCapture* theWrappedObject) const;
   QString  errorString(QImageCapture* theWrappedObject) const;
   QImageCapture::FileFormat  fileFormat(QImageCapture* theWrappedObject) const;
   QString  static_QImageCapture_fileFormatDescription(QImageCapture::FileFormat  c);
   QString  static_QImageCapture_fileFormatName(QImageCapture::FileFormat  c);
   bool  isAvailable(QImageCapture* theWrappedObject) const;
   bool  isReadyForCapture(QImageCapture* theWrappedObject) const;
   QMediaMetaData  metaData(QImageCapture* theWrappedObject) const;
   QImageCapture::Quality  quality(QImageCapture* theWrappedObject) const;
   QSize  resolution(QImageCapture* theWrappedObject) const;
   void setFileFormat(QImageCapture* theWrappedObject, QImageCapture::FileFormat  format);
   void setMetaData(QImageCapture* theWrappedObject, const QMediaMetaData&  metaData);
   void setQuality(QImageCapture* theWrappedObject, QImageCapture::Quality  quality);
   void setResolution(QImageCapture* theWrappedObject, const QSize&  arg__1);
   void setResolution(QImageCapture* theWrappedObject, int  width, int  height);
   QList<QImageCapture::FileFormat >  static_QImageCapture_supportedFormats();
};





class PythonQtShell_QMediaCaptureSession : public QMediaCaptureSession
{
public:
    PythonQtShell_QMediaCaptureSession(QObject*  parent = nullptr):QMediaCaptureSession(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMediaCaptureSession() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMediaCaptureSession : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMediaCaptureSession* new_QMediaCaptureSession(QObject*  parent = nullptr);
void delete_QMediaCaptureSession(QMediaCaptureSession* obj) { delete obj; }
   QAudioBufferInput*  audioBufferInput(QMediaCaptureSession* theWrappedObject) const;
   QAudioInput*  audioInput(QMediaCaptureSession* theWrappedObject) const;
   QAudioOutput*  audioOutput(QMediaCaptureSession* theWrappedObject) const;
   QCamera*  camera(QMediaCaptureSession* theWrappedObject) const;
   QImageCapture*  imageCapture(QMediaCaptureSession* theWrappedObject);
   QMediaRecorder*  recorder(QMediaCaptureSession* theWrappedObject);
   QScreenCapture*  screenCapture(QMediaCaptureSession* theWrappedObject);
   void setAudioBufferInput(QMediaCaptureSession* theWrappedObject, QAudioBufferInput*  input);
   void setAudioInput(QMediaCaptureSession* theWrappedObject, QAudioInput*  input);
   void setAudioOutput(QMediaCaptureSession* theWrappedObject, QAudioOutput*  output);
   void setCamera(QMediaCaptureSession* theWrappedObject, QCamera*  camera);
   void setImageCapture(QMediaCaptureSession* theWrappedObject, QImageCapture*  imageCapture);
   void setRecorder(QMediaCaptureSession* theWrappedObject, QMediaRecorder*  recorder);
   void setScreenCapture(QMediaCaptureSession* theWrappedObject, QScreenCapture*  screenCapture);
   void setVideoFrameInput(QMediaCaptureSession* theWrappedObject, QVideoFrameInput*  input);
   void setVideoOutput(QMediaCaptureSession* theWrappedObject, QObject*  output);
   void setVideoSink(QMediaCaptureSession* theWrappedObject, QVideoSink*  sink);
   void setWindowCapture(QMediaCaptureSession* theWrappedObject, QWindowCapture*  windowCapture);
   QVideoFrameInput*  videoFrameInput(QMediaCaptureSession* theWrappedObject) const;
   QObject*  videoOutput(QMediaCaptureSession* theWrappedObject) const;
   QVideoSink*  videoSink(QMediaCaptureSession* theWrappedObject) const;
   QWindowCapture*  windowCapture(QMediaCaptureSession* theWrappedObject);
};





class PythonQtShell_QMediaDevices : public QMediaDevices
{
public:
    PythonQtShell_QMediaDevices(QObject*  parent = nullptr):QMediaDevices(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMediaDevices() override;

void childEvent(QChildEvent*  event) override;
void connectNotify(const QMetaMethod&  signal) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMediaDevices : public QMediaDevices
{ public:
inline void promoted_connectNotify(const QMetaMethod&  signal) { this->connectNotify(signal); }
inline void py_q_connectNotify(const QMetaMethod&  signal) { QMediaDevices::connectNotify(signal); }
};

class PythonQtWrapper_QMediaDevices : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMediaDevices* new_QMediaDevices(QObject*  parent = nullptr);
void delete_QMediaDevices(QMediaDevices* obj) { delete obj; }
   QList<QAudioDevice >  static_QMediaDevices_audioInputs();
   QList<QAudioDevice >  static_QMediaDevices_audioOutputs();
   void connectNotify(QMediaDevices* theWrappedObject, const QMetaMethod&  signal);
   void py_q_connectNotify(QMediaDevices* theWrappedObject, const QMetaMethod&  signal){  (((PythonQtPublicPromoter_QMediaDevices*)theWrappedObject)->py_q_connectNotify(signal));}
   QAudioDevice  static_QMediaDevices_defaultAudioInput();
   QAudioDevice  static_QMediaDevices_defaultAudioOutput();
   QCameraDevice  static_QMediaDevices_defaultVideoInput();
   QList<QCameraDevice >  static_QMediaDevices_videoInputs();
};





class PythonQtShell_QMediaFormat : public QMediaFormat
{
public:
    PythonQtShell_QMediaFormat(QMediaFormat::FileFormat  format = QMediaFormat::UnspecifiedFormat):QMediaFormat(format),_wrapper(nullptr) {};
    PythonQtShell_QMediaFormat(const QMediaFormat&  other):QMediaFormat(other),_wrapper(nullptr) {};

   ~PythonQtShell_QMediaFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMediaFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AudioCodec ConversionMode FileFormat ResolveFlags VideoCodec )
enum class AudioCodec{
  Unspecified = static_cast<int>(QMediaFormat::AudioCodec::Unspecified),   MP3 = static_cast<int>(QMediaFormat::AudioCodec::MP3),   AAC = static_cast<int>(QMediaFormat::AudioCodec::AAC),   AC3 = static_cast<int>(QMediaFormat::AudioCodec::AC3),   EAC3 = static_cast<int>(QMediaFormat::AudioCodec::EAC3),   FLAC = static_cast<int>(QMediaFormat::AudioCodec::FLAC),   DolbyTrueHD = static_cast<int>(QMediaFormat::AudioCodec::DolbyTrueHD),   Opus = static_cast<int>(QMediaFormat::AudioCodec::Opus),   Vorbis = static_cast<int>(QMediaFormat::AudioCodec::Vorbis),   Wave = static_cast<int>(QMediaFormat::AudioCodec::Wave),   WMA = static_cast<int>(QMediaFormat::AudioCodec::WMA),   ALAC = static_cast<int>(QMediaFormat::AudioCodec::ALAC),   LastAudioCodec = static_cast<int>(QMediaFormat::AudioCodec::LastAudioCodec)};
enum ConversionMode{
  Encode = QMediaFormat::Encode,   Decode = QMediaFormat::Decode};
enum FileFormat{
  UnspecifiedFormat = QMediaFormat::UnspecifiedFormat,   WMV = QMediaFormat::WMV,   AVI = QMediaFormat::AVI,   Matroska = QMediaFormat::Matroska,   MPEG4 = QMediaFormat::MPEG4,   Ogg = QMediaFormat::Ogg,   QuickTime = QMediaFormat::QuickTime,   WebM = QMediaFormat::WebM,   Mpeg4Audio = QMediaFormat::Mpeg4Audio,   AAC = QMediaFormat::AAC,   WMA = QMediaFormat::WMA,   MP3 = QMediaFormat::MP3,   FLAC = QMediaFormat::FLAC,   Wave = QMediaFormat::Wave,   LastFileFormat = QMediaFormat::LastFileFormat};
enum ResolveFlags{
  NoFlags = QMediaFormat::NoFlags,   RequiresVideo = QMediaFormat::RequiresVideo};
enum class VideoCodec{
  Unspecified = static_cast<int>(QMediaFormat::VideoCodec::Unspecified),   MPEG1 = static_cast<int>(QMediaFormat::VideoCodec::MPEG1),   MPEG2 = static_cast<int>(QMediaFormat::VideoCodec::MPEG2),   MPEG4 = static_cast<int>(QMediaFormat::VideoCodec::MPEG4),   H264 = static_cast<int>(QMediaFormat::VideoCodec::H264),   H265 = static_cast<int>(QMediaFormat::VideoCodec::H265),   VP8 = static_cast<int>(QMediaFormat::VideoCodec::VP8),   VP9 = static_cast<int>(QMediaFormat::VideoCodec::VP9),   AV1 = static_cast<int>(QMediaFormat::VideoCodec::AV1),   Theora = static_cast<int>(QMediaFormat::VideoCodec::Theora),   WMV = static_cast<int>(QMediaFormat::VideoCodec::WMV),   MotionJPEG = static_cast<int>(QMediaFormat::VideoCodec::MotionJPEG),   LastVideoCodec = static_cast<int>(QMediaFormat::VideoCodec::LastVideoCodec)};
public Q_SLOTS:
QMediaFormat* new_QMediaFormat(QMediaFormat::FileFormat  format = QMediaFormat::UnspecifiedFormat);
QMediaFormat* new_QMediaFormat(const QMediaFormat&  other);
void delete_QMediaFormat(QMediaFormat* obj) { delete obj; }
   QMediaFormat::AudioCodec  audioCodec(QMediaFormat* theWrappedObject) const;
   QString  static_QMediaFormat_audioCodecDescription(QMediaFormat::AudioCodec  codec);
   QString  static_QMediaFormat_audioCodecName(QMediaFormat::AudioCodec  codec);
   QMediaFormat::FileFormat  fileFormat(QMediaFormat* theWrappedObject) const;
   QString  static_QMediaFormat_fileFormatDescription(QMediaFormat::FileFormat  fileFormat);
   QString  static_QMediaFormat_fileFormatName(QMediaFormat::FileFormat  fileFormat);
   bool  isSupported(QMediaFormat* theWrappedObject, QMediaFormat::ConversionMode  mode) const;
   QMimeType  mimeType(QMediaFormat* theWrappedObject) const;
   bool  __ne__(QMediaFormat* theWrappedObject, const QMediaFormat&  other) const;
   QMediaFormat*  operator_assign(QMediaFormat* theWrappedObject, const QMediaFormat&  other);
   bool  __eq__(QMediaFormat* theWrappedObject, const QMediaFormat&  other) const;
   void resolveForEncoding(QMediaFormat* theWrappedObject, QMediaFormat::ResolveFlags  flags);
   void setAudioCodec(QMediaFormat* theWrappedObject, QMediaFormat::AudioCodec  codec);
   void setFileFormat(QMediaFormat* theWrappedObject, QMediaFormat::FileFormat  f);
   void setVideoCodec(QMediaFormat* theWrappedObject, QMediaFormat::VideoCodec  codec);
   QList<QMediaFormat::AudioCodec >  supportedAudioCodecs(QMediaFormat* theWrappedObject, QMediaFormat::ConversionMode  m);
   QList<QMediaFormat::FileFormat >  supportedFileFormats(QMediaFormat* theWrappedObject, QMediaFormat::ConversionMode  m);
   QList<QMediaFormat::VideoCodec >  supportedVideoCodecs(QMediaFormat* theWrappedObject, QMediaFormat::ConversionMode  m);
   void swap(QMediaFormat* theWrappedObject, QMediaFormat&  other);
   QMediaFormat::VideoCodec  videoCodec(QMediaFormat* theWrappedObject) const;
   QString  static_QMediaFormat_videoCodecDescription(QMediaFormat::VideoCodec  codec);
   QString  static_QMediaFormat_videoCodecName(QMediaFormat::VideoCodec  codec);
};





class PythonQtShell_QMediaMetaData : public QMediaMetaData
{
public:
    PythonQtShell_QMediaMetaData():QMediaMetaData(),_wrapper(nullptr) {};

   ~PythonQtShell_QMediaMetaData();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMediaMetaData : public QMediaMetaData
{ public:
static inline QMetaType  promoted_keyType(QMediaMetaData::Key  key) { return keyType(key); }
};

class PythonQtWrapper_QMediaMetaData : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Key )
enum Key{
  Title = QMediaMetaData::Title,   Author = QMediaMetaData::Author,   Comment = QMediaMetaData::Comment,   Description = QMediaMetaData::Description,   Genre = QMediaMetaData::Genre,   Date = QMediaMetaData::Date,   Language = QMediaMetaData::Language,   Publisher = QMediaMetaData::Publisher,   Copyright = QMediaMetaData::Copyright,   Url = QMediaMetaData::Url,   Duration = QMediaMetaData::Duration,   MediaType = QMediaMetaData::MediaType,   FileFormat = QMediaMetaData::FileFormat,   AudioBitRate = QMediaMetaData::AudioBitRate,   AudioCodec = QMediaMetaData::AudioCodec,   VideoBitRate = QMediaMetaData::VideoBitRate,   VideoCodec = QMediaMetaData::VideoCodec,   VideoFrameRate = QMediaMetaData::VideoFrameRate,   AlbumTitle = QMediaMetaData::AlbumTitle,   AlbumArtist = QMediaMetaData::AlbumArtist,   ContributingArtist = QMediaMetaData::ContributingArtist,   TrackNumber = QMediaMetaData::TrackNumber,   Composer = QMediaMetaData::Composer,   LeadPerformer = QMediaMetaData::LeadPerformer,   ThumbnailImage = QMediaMetaData::ThumbnailImage,   CoverArtImage = QMediaMetaData::CoverArtImage,   Orientation = QMediaMetaData::Orientation,   Resolution = QMediaMetaData::Resolution,   HasHdrContent = QMediaMetaData::HasHdrContent};
public Q_SLOTS:
QMediaMetaData* new_QMediaMetaData();
void delete_QMediaMetaData(QMediaMetaData* obj) { delete obj; }
   void clear(QMediaMetaData* theWrappedObject);
   void insert(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k, const QVariant&  value);
   bool  isEmpty(QMediaMetaData* theWrappedObject) const;
   QMetaType  static_QMediaMetaData_keyType(QMediaMetaData::Key  key);
   QList<QMediaMetaData::Key >  keys(QMediaMetaData* theWrappedObject) const;
   QString  static_QMediaMetaData_metaDataKeyToString(QMediaMetaData::Key  k);
   bool  __ne__(QMediaMetaData* theWrappedObject, const QMediaMetaData&  b);
   bool  __eq__(QMediaMetaData* theWrappedObject, const QMediaMetaData&  b);
   QVariant*  operator_subscript(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k);
   void remove(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k);
   QString  stringValue(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k) const;
   QVariant  value(QMediaMetaData* theWrappedObject, QMediaMetaData::Key  k) const;
    QString py_toString(QMediaMetaData*);
    bool __nonzero__(QMediaMetaData* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QMediaPlayer : public QMediaPlayer
{
public:
    PythonQtShell_QMediaPlayer(QObject*  parent = nullptr):QMediaPlayer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMediaPlayer() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMediaPlayer : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMediaPlayer* new_QMediaPlayer(QObject*  parent = nullptr);
void delete_QMediaPlayer(QMediaPlayer* obj) { delete obj; }
   int  activeAudioTrack(QMediaPlayer* theWrappedObject) const;
   int  activeSubtitleTrack(QMediaPlayer* theWrappedObject) const;
   int  activeVideoTrack(QMediaPlayer* theWrappedObject) const;
   QAudioBufferOutput*  audioBufferOutput(QMediaPlayer* theWrappedObject) const;
   QAudioOutput*  audioOutput(QMediaPlayer* theWrappedObject) const;
   QList<QMediaMetaData >  audioTracks(QMediaPlayer* theWrappedObject) const;
   float  bufferProgress(QMediaPlayer* theWrappedObject) const;
   QMediaTimeRange  bufferedTimeRange(QMediaPlayer* theWrappedObject) const;
   qint64  duration(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::Error  error(QMediaPlayer* theWrappedObject) const;
   QString  errorString(QMediaPlayer* theWrappedObject) const;
   bool  hasAudio(QMediaPlayer* theWrappedObject) const;
   bool  hasVideo(QMediaPlayer* theWrappedObject) const;
   bool  isAvailable(QMediaPlayer* theWrappedObject) const;
   bool  isPlaying(QMediaPlayer* theWrappedObject) const;
   bool  isSeekable(QMediaPlayer* theWrappedObject) const;
   int  loops(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::MediaStatus  mediaStatus(QMediaPlayer* theWrappedObject) const;
   QMediaMetaData  metaData(QMediaPlayer* theWrappedObject) const;
   bool  pitchCompensation(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::PitchCompensationAvailability  pitchCompensationAvailability(QMediaPlayer* theWrappedObject) const;
   QPlaybackOptions  playbackOptions(QMediaPlayer* theWrappedObject) const;
   qreal  playbackRate(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::PlaybackState  playbackState(QMediaPlayer* theWrappedObject) const;
   qint64  position(QMediaPlayer* theWrappedObject) const;
   void setActiveAudioTrack(QMediaPlayer* theWrappedObject, int  index);
   void setActiveSubtitleTrack(QMediaPlayer* theWrappedObject, int  index);
   void setActiveVideoTrack(QMediaPlayer* theWrappedObject, int  index);
   void setAudioBufferOutput(QMediaPlayer* theWrappedObject, QAudioBufferOutput*  output);
   void setAudioOutput(QMediaPlayer* theWrappedObject, QAudioOutput*  output);
   void setLoops(QMediaPlayer* theWrappedObject, int  loops);
   void setVideoOutput(QMediaPlayer* theWrappedObject, QObject*  arg__1);
   void setVideoSink(QMediaPlayer* theWrappedObject, QVideoSink*  sink);
   QUrl  source(QMediaPlayer* theWrappedObject) const;
   const QIODevice*  sourceDevice(QMediaPlayer* theWrappedObject) const;
   QList<QMediaMetaData >  subtitleTracks(QMediaPlayer* theWrappedObject) const;
   QObject*  videoOutput(QMediaPlayer* theWrappedObject) const;
   QVideoSink*  videoSink(QMediaPlayer* theWrappedObject) const;
   QList<QMediaMetaData >  videoTracks(QMediaPlayer* theWrappedObject) const;
};





class PythonQtShell_QMediaRecorder : public QMediaRecorder
{
public:
    PythonQtShell_QMediaRecorder(QObject*  parent = nullptr):QMediaRecorder(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMediaRecorder() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMediaRecorder : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMediaRecorder* new_QMediaRecorder(QObject*  parent = nullptr);
void delete_QMediaRecorder(QMediaRecorder* obj) { delete obj; }
   QUrl  actualLocation(QMediaRecorder* theWrappedObject) const;
   void addMetaData(QMediaRecorder* theWrappedObject, const QMediaMetaData&  metaData);
   int  audioBitRate(QMediaRecorder* theWrappedObject) const;
   int  audioChannelCount(QMediaRecorder* theWrappedObject) const;
   int  audioSampleRate(QMediaRecorder* theWrappedObject) const;
   bool  autoStop(QMediaRecorder* theWrappedObject) const;
   QMediaCaptureSession*  captureSession(QMediaRecorder* theWrappedObject) const;
   qint64  duration(QMediaRecorder* theWrappedObject) const;
   QMediaRecorder::EncodingMode  encodingMode(QMediaRecorder* theWrappedObject) const;
   QMediaRecorder::Error  error(QMediaRecorder* theWrappedObject) const;
   QString  errorString(QMediaRecorder* theWrappedObject) const;
   bool  isAvailable(QMediaRecorder* theWrappedObject) const;
   QMediaFormat  mediaFormat(QMediaRecorder* theWrappedObject) const;
   QMediaMetaData  metaData(QMediaRecorder* theWrappedObject) const;
   QIODevice*  outputDevice(QMediaRecorder* theWrappedObject) const;
   QUrl  outputLocation(QMediaRecorder* theWrappedObject) const;
   QMediaRecorder::Quality  quality(QMediaRecorder* theWrappedObject) const;
   QMediaRecorder::RecorderState  recorderState(QMediaRecorder* theWrappedObject) const;
   void setAudioBitRate(QMediaRecorder* theWrappedObject, int  bitRate);
   void setAudioChannelCount(QMediaRecorder* theWrappedObject, int  channels);
   void setAudioSampleRate(QMediaRecorder* theWrappedObject, int  sampleRate);
   void setAutoStop(QMediaRecorder* theWrappedObject, bool  autoStop);
   void setEncodingMode(QMediaRecorder* theWrappedObject, QMediaRecorder::EncodingMode  arg__1);
   void setMediaFormat(QMediaRecorder* theWrappedObject, const QMediaFormat&  format);
   void setMetaData(QMediaRecorder* theWrappedObject, const QMediaMetaData&  metaData);
   void setOutputDevice(QMediaRecorder* theWrappedObject, QIODevice*  device);
   void setOutputLocation(QMediaRecorder* theWrappedObject, const QUrl&  location);
   void setQuality(QMediaRecorder* theWrappedObject, QMediaRecorder::Quality  quality);
   void setVideoBitRate(QMediaRecorder* theWrappedObject, int  bitRate);
   void setVideoFrameRate(QMediaRecorder* theWrappedObject, qreal  frameRate);
   void setVideoResolution(QMediaRecorder* theWrappedObject, const QSize&  arg__1);
   void setVideoResolution(QMediaRecorder* theWrappedObject, int  width, int  height);
   int  videoBitRate(QMediaRecorder* theWrappedObject) const;
   qreal  videoFrameRate(QMediaRecorder* theWrappedObject) const;
   QSize  videoResolution(QMediaRecorder* theWrappedObject) const;
};





class PythonQtWrapper_QMediaTimeRange : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMediaTimeRange* new_QMediaTimeRange();
QMediaTimeRange* new_QMediaTimeRange(const QMediaTimeRange&  range);
QMediaTimeRange* new_QMediaTimeRange(const QMediaTimeRange::Interval&  arg__1);
QMediaTimeRange* new_QMediaTimeRange(qint64  start, qint64  end);
void delete_QMediaTimeRange(QMediaTimeRange* obj) { delete obj; }
   void addInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  interval);
   void addInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end);
   void addTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   void clear(QMediaTimeRange* theWrappedObject);
   bool  contains(QMediaTimeRange* theWrappedObject, qint64  time) const;
   qint64  earliestTime(QMediaTimeRange* theWrappedObject) const;
   QList<QMediaTimeRange::Interval >  intervals(QMediaTimeRange* theWrappedObject) const;
   bool  isContinuous(QMediaTimeRange* theWrappedObject) const;
   bool  isEmpty(QMediaTimeRange* theWrappedObject) const;
   qint64  latestTime(QMediaTimeRange* theWrappedObject) const;
   bool  __ne__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  rhs);
   QMediaTimeRange  __add__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  r2);
   QMediaTimeRange*  __iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   QMediaTimeRange*  __iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1);
   QMediaTimeRange  __sub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  r2);
   QMediaTimeRange*  __isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   QMediaTimeRange*  __isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1);
   QMediaTimeRange*  operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   QMediaTimeRange*  operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1);
   bool  __eq__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  rhs);
   void removeInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  interval);
   void removeInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end);
   void removeTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   void swap(QMediaTimeRange* theWrappedObject, QMediaTimeRange&  other);
    QString py_toString(QMediaTimeRange*);
    bool __nonzero__(QMediaTimeRange* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QMediaTimeRange__Interval : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QMediaTimeRange::Interval* new_QMediaTimeRange__Interval();
QMediaTimeRange::Interval* new_QMediaTimeRange__Interval(qint64  start, qint64  end);
void delete_QMediaTimeRange__Interval(QMediaTimeRange::Interval* obj) { delete obj; }
   bool  contains(QMediaTimeRange::Interval* theWrappedObject, qint64  time) const;
   qint64  end(QMediaTimeRange::Interval* theWrappedObject) const;
   bool  isNormal(QMediaTimeRange::Interval* theWrappedObject) const;
   QMediaTimeRange::Interval  normalized(QMediaTimeRange::Interval* theWrappedObject) const;
   qint64  start(QMediaTimeRange::Interval* theWrappedObject) const;
   QMediaTimeRange::Interval  translated(QMediaTimeRange::Interval* theWrappedObject, qint64  offset) const;
    QString py_toString(QMediaTimeRange::Interval*);
};





class PythonQtWrapper_QPlaybackOptions : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PlaybackIntent )
enum class PlaybackIntent{
  Playback = static_cast<int>(QPlaybackOptions::PlaybackIntent::Playback),   LowLatencyStreaming = static_cast<int>(QPlaybackOptions::PlaybackIntent::LowLatencyStreaming)};
public Q_SLOTS:
QPlaybackOptions* new_QPlaybackOptions();
QPlaybackOptions* new_QPlaybackOptions(const QPlaybackOptions&  arg__1);
void delete_QPlaybackOptions(QPlaybackOptions* obj) { delete obj; }
   bool  __ne__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs);
   bool  __lt__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs);
   bool  __le__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs);
   QPlaybackOptions*  operator_assign(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  arg__1);
   bool  __eq__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs);
   bool  __gt__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs);
   bool  __ge__(QPlaybackOptions* theWrappedObject, const QPlaybackOptions&  rhs);
   QPlaybackOptions::PlaybackIntent  playbackIntent(QPlaybackOptions* theWrappedObject) const;
   qsizetype  probeSize(QPlaybackOptions* theWrappedObject) const;
   void resetNetworkTimeout(QPlaybackOptions* theWrappedObject);
   void resetPlaybackIntent(QPlaybackOptions* theWrappedObject);
   void resetProbeSize(QPlaybackOptions* theWrappedObject);
   void setPlaybackIntent(QPlaybackOptions* theWrappedObject, QPlaybackOptions::PlaybackIntent  intent);
   void setProbeSize(QPlaybackOptions* theWrappedObject, qsizetype  probeSizeBytes);
   void swap(QPlaybackOptions* theWrappedObject, QPlaybackOptions&  other);
};





class PythonQtShell_QScreenCapture : public QScreenCapture
{
public:
    PythonQtShell_QScreenCapture(QObject*  parent = nullptr):QScreenCapture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QScreenCapture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QScreenCapture : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QScreenCapture* new_QScreenCapture(QObject*  parent = nullptr);
void delete_QScreenCapture(QScreenCapture* obj) { delete obj; }
   QMediaCaptureSession*  captureSession(QScreenCapture* theWrappedObject) const;
   QScreenCapture::Error  error(QScreenCapture* theWrappedObject) const;
   QString  errorString(QScreenCapture* theWrappedObject) const;
   bool  isActive(QScreenCapture* theWrappedObject) const;
   QScreen*  screen(QScreenCapture* theWrappedObject) const;
   void setScreen(QScreenCapture* theWrappedObject, QScreen*  screen);
};





class PythonQtShell_QSoundEffect : public QSoundEffect
{
public:
    PythonQtShell_QSoundEffect(QObject*  parent = nullptr):QSoundEffect(parent),_wrapper(nullptr) {};
    PythonQtShell_QSoundEffect(const QAudioDevice&  audioDevice, QObject*  parent = nullptr):QSoundEffect(audioDevice, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSoundEffect() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSoundEffect : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSoundEffect* new_QSoundEffect(QObject*  parent = nullptr);
QSoundEffect* new_QSoundEffect(const QAudioDevice&  audioDevice, QObject*  parent = nullptr);
void delete_QSoundEffect(QSoundEffect* obj) { delete obj; }
   QAudioDevice  audioDevice(QSoundEffect* theWrappedObject);
   bool  isLoaded(QSoundEffect* theWrappedObject) const;
   bool  isMuted(QSoundEffect* theWrappedObject) const;
   bool  isPlaying(QSoundEffect* theWrappedObject) const;
   int  loopCount(QSoundEffect* theWrappedObject) const;
   int  loopsRemaining(QSoundEffect* theWrappedObject) const;
   void setAudioDevice(QSoundEffect* theWrappedObject, const QAudioDevice&  device);
   void setLoopCount(QSoundEffect* theWrappedObject, int  loopCount);
   void setMuted(QSoundEffect* theWrappedObject, bool  muted);
   void setSource(QSoundEffect* theWrappedObject, const QUrl&  url);
   void setVolume(QSoundEffect* theWrappedObject, float  volume);
   QUrl  source(QSoundEffect* theWrappedObject) const;
   QSoundEffect::Status  status(QSoundEffect* theWrappedObject) const;
   QStringList  static_QSoundEffect_supportedMimeTypes();
   float  volume(QSoundEffect* theWrappedObject) const;
};





class PythonQtWrapper_QVideoFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HandleType MapMode RotationAngle )
enum HandleType{
  NoHandle = QVideoFrame::NoHandle,   RhiTextureHandle = QVideoFrame::RhiTextureHandle};
enum MapMode{
  NotMapped = QVideoFrame::NotMapped,   ReadOnly = QVideoFrame::ReadOnly,   WriteOnly = QVideoFrame::WriteOnly,   ReadWrite = QVideoFrame::ReadWrite};
enum RotationAngle{
  Rotation0 = QVideoFrame::Rotation0,   Rotation90 = QVideoFrame::Rotation90,   Rotation180 = QVideoFrame::Rotation180,   Rotation270 = QVideoFrame::Rotation270};
public Q_SLOTS:
QVideoFrame* new_QVideoFrame();
QVideoFrame* new_QVideoFrame(const QImage&  image);
QVideoFrame* new_QVideoFrame(const QVideoFrame&  other);
QVideoFrame* new_QVideoFrame(const QVideoFrameFormat&  format);
void delete_QVideoFrame(QVideoFrame* obj) { delete obj; }
   uchar*  bits(QVideoFrame* theWrappedObject, int  plane);
   const uchar*  bits(QVideoFrame* theWrappedObject, int  plane) const;
   int  bytesPerLine(QVideoFrame* theWrappedObject, int  plane) const;
   qint64  endTime(QVideoFrame* theWrappedObject) const;
   QVideoFrame::HandleType  handleType(QVideoFrame* theWrappedObject) const;
   int  height(QVideoFrame* theWrappedObject) const;
   bool  isMapped(QVideoFrame* theWrappedObject) const;
   bool  isReadable(QVideoFrame* theWrappedObject) const;
   bool  isValid(QVideoFrame* theWrappedObject) const;
   bool  isWritable(QVideoFrame* theWrappedObject) const;
   bool  map(QVideoFrame* theWrappedObject, QVideoFrame::MapMode  mode);
   QVideoFrame::MapMode  mapMode(QVideoFrame* theWrappedObject) const;
   int  mappedBytes(QVideoFrame* theWrappedObject, int  plane) const;
   bool  mirrored(QVideoFrame* theWrappedObject) const;
   bool  __ne__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const;
   QVideoFrame*  operator_assign(QVideoFrame* theWrappedObject, const QVideoFrame&  other);
   bool  __eq__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const;
   void paint(QVideoFrame* theWrappedObject, QPainter*  painter, const QRectF&  rect, const QVideoFrame::PaintOptions&  options);
   QVideoFrameFormat::PixelFormat  pixelFormat(QVideoFrame* theWrappedObject) const;
   int  planeCount(QVideoFrame* theWrappedObject) const;
   QVideoFrame::RotationAngle  rotationAngle(QVideoFrame* theWrappedObject) const;
   void setEndTime(QVideoFrame* theWrappedObject, qint64  time);
   void setMirrored(QVideoFrame* theWrappedObject, bool  arg__1);
   void setRotationAngle(QVideoFrame* theWrappedObject, QVideoFrame::RotationAngle  angle);
   void setStartTime(QVideoFrame* theWrappedObject, qint64  time);
   void setStreamFrameRate(QVideoFrame* theWrappedObject, qreal  rate);
   void setSubtitleText(QVideoFrame* theWrappedObject, const QString&  text);
   QSize  size(QVideoFrame* theWrappedObject) const;
   qint64  startTime(QVideoFrame* theWrappedObject) const;
   qreal  streamFrameRate(QVideoFrame* theWrappedObject) const;
   QString  subtitleText(QVideoFrame* theWrappedObject) const;
   QVideoFrameFormat  surfaceFormat(QVideoFrame* theWrappedObject) const;
   void swap(QVideoFrame* theWrappedObject, QVideoFrame&  other);
   QImage  toImage(QVideoFrame* theWrappedObject) const;
   void unmap(QVideoFrame* theWrappedObject);
   int  width(QVideoFrame* theWrappedObject) const;
    QString py_toString(QVideoFrame*);
    bool __nonzero__(QVideoFrame* obj) { return obj->isValid(); }
};





class PythonQtShell_QVideoFrameFormat : public QVideoFrameFormat
{
public:
    PythonQtShell_QVideoFrameFormat():QVideoFrameFormat(),_wrapper(nullptr) {};
    PythonQtShell_QVideoFrameFormat(const QSize&  size, QVideoFrameFormat::PixelFormat  pixelFormat):QVideoFrameFormat(size, pixelFormat),_wrapper(nullptr) {};
    PythonQtShell_QVideoFrameFormat(const QVideoFrameFormat&  format):QVideoFrameFormat(format),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoFrameFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QVideoFrameFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorRange ColorSpace ColorTransfer Direction PixelFormat YCbCrColorSpace )
enum ColorRange{
  ColorRange_Unknown = QVideoFrameFormat::ColorRange_Unknown,   ColorRange_Video = QVideoFrameFormat::ColorRange_Video,   ColorRange_Full = QVideoFrameFormat::ColorRange_Full};
enum ColorSpace{
  ColorSpace_Undefined = QVideoFrameFormat::ColorSpace_Undefined,   ColorSpace_BT601 = QVideoFrameFormat::ColorSpace_BT601,   ColorSpace_BT709 = QVideoFrameFormat::ColorSpace_BT709,   ColorSpace_AdobeRgb = QVideoFrameFormat::ColorSpace_AdobeRgb,   ColorSpace_BT2020 = QVideoFrameFormat::ColorSpace_BT2020};
enum ColorTransfer{
  ColorTransfer_Unknown = QVideoFrameFormat::ColorTransfer_Unknown,   ColorTransfer_BT709 = QVideoFrameFormat::ColorTransfer_BT709,   ColorTransfer_BT601 = QVideoFrameFormat::ColorTransfer_BT601,   ColorTransfer_Linear = QVideoFrameFormat::ColorTransfer_Linear,   ColorTransfer_Gamma22 = QVideoFrameFormat::ColorTransfer_Gamma22,   ColorTransfer_Gamma28 = QVideoFrameFormat::ColorTransfer_Gamma28,   ColorTransfer_ST2084 = QVideoFrameFormat::ColorTransfer_ST2084,   ColorTransfer_STD_B67 = QVideoFrameFormat::ColorTransfer_STD_B67};
enum Direction{
  TopToBottom = QVideoFrameFormat::TopToBottom,   BottomToTop = QVideoFrameFormat::BottomToTop};
enum PixelFormat{
  Format_Invalid = QVideoFrameFormat::Format_Invalid,   Format_ARGB8888 = QVideoFrameFormat::Format_ARGB8888,   Format_ARGB8888_Premultiplied = QVideoFrameFormat::Format_ARGB8888_Premultiplied,   Format_XRGB8888 = QVideoFrameFormat::Format_XRGB8888,   Format_BGRA8888 = QVideoFrameFormat::Format_BGRA8888,   Format_BGRA8888_Premultiplied = QVideoFrameFormat::Format_BGRA8888_Premultiplied,   Format_BGRX8888 = QVideoFrameFormat::Format_BGRX8888,   Format_ABGR8888 = QVideoFrameFormat::Format_ABGR8888,   Format_XBGR8888 = QVideoFrameFormat::Format_XBGR8888,   Format_RGBA8888 = QVideoFrameFormat::Format_RGBA8888,   Format_RGBX8888 = QVideoFrameFormat::Format_RGBX8888,   Format_AYUV = QVideoFrameFormat::Format_AYUV,   Format_AYUV_Premultiplied = QVideoFrameFormat::Format_AYUV_Premultiplied,   Format_YUV420P = QVideoFrameFormat::Format_YUV420P,   Format_YUV422P = QVideoFrameFormat::Format_YUV422P,   Format_YV12 = QVideoFrameFormat::Format_YV12,   Format_UYVY = QVideoFrameFormat::Format_UYVY,   Format_YUYV = QVideoFrameFormat::Format_YUYV,   Format_NV12 = QVideoFrameFormat::Format_NV12,   Format_NV21 = QVideoFrameFormat::Format_NV21,   Format_IMC1 = QVideoFrameFormat::Format_IMC1,   Format_IMC2 = QVideoFrameFormat::Format_IMC2,   Format_IMC3 = QVideoFrameFormat::Format_IMC3,   Format_IMC4 = QVideoFrameFormat::Format_IMC4,   Format_Y8 = QVideoFrameFormat::Format_Y8,   Format_Y16 = QVideoFrameFormat::Format_Y16,   Format_P010 = QVideoFrameFormat::Format_P010,   Format_P016 = QVideoFrameFormat::Format_P016,   Format_SamplerExternalOES = QVideoFrameFormat::Format_SamplerExternalOES,   Format_Jpeg = QVideoFrameFormat::Format_Jpeg,   Format_SamplerRect = QVideoFrameFormat::Format_SamplerRect,   Format_YUV420P10 = QVideoFrameFormat::Format_YUV420P10};
enum YCbCrColorSpace{
  YCbCr_Undefined = QVideoFrameFormat::YCbCr_Undefined,   YCbCr_BT601 = QVideoFrameFormat::YCbCr_BT601,   YCbCr_BT709 = QVideoFrameFormat::YCbCr_BT709,   YCbCr_xvYCC601 = QVideoFrameFormat::YCbCr_xvYCC601,   YCbCr_xvYCC709 = QVideoFrameFormat::YCbCr_xvYCC709,   YCbCr_JPEG = QVideoFrameFormat::YCbCr_JPEG,   YCbCr_BT2020 = QVideoFrameFormat::YCbCr_BT2020};
public Q_SLOTS:
QVideoFrameFormat* new_QVideoFrameFormat();
QVideoFrameFormat* new_QVideoFrameFormat(const QSize&  size, QVideoFrameFormat::PixelFormat  pixelFormat);
QVideoFrameFormat* new_QVideoFrameFormat(const QVideoFrameFormat&  format);
void delete_QVideoFrameFormat(QVideoFrameFormat* obj) { delete obj; }
   QVideoFrameFormat::ColorRange  colorRange(QVideoFrameFormat* theWrappedObject) const;
   QVideoFrameFormat::ColorSpace  colorSpace(QVideoFrameFormat* theWrappedObject) const;
   QVideoFrameFormat::ColorTransfer  colorTransfer(QVideoFrameFormat* theWrappedObject) const;
   QString  fragmentShaderFileName(QVideoFrameFormat* theWrappedObject) const;
   int  frameHeight(QVideoFrameFormat* theWrappedObject) const;
   qreal  frameRate(QVideoFrameFormat* theWrappedObject) const;
   QSize  frameSize(QVideoFrameFormat* theWrappedObject) const;
   int  frameWidth(QVideoFrameFormat* theWrappedObject) const;
   QImage::Format  static_QVideoFrameFormat_imageFormatFromPixelFormat(QVideoFrameFormat::PixelFormat  format);
   bool  isMirrored(QVideoFrameFormat* theWrappedObject) const;
   bool  isValid(QVideoFrameFormat* theWrappedObject) const;
   float  maxLuminance(QVideoFrameFormat* theWrappedObject) const;
   bool  __ne__(QVideoFrameFormat* theWrappedObject, const QVideoFrameFormat&  format) const;
   QVideoFrameFormat*  operator_assign(QVideoFrameFormat* theWrappedObject, const QVideoFrameFormat&  format);
   bool  __eq__(QVideoFrameFormat* theWrappedObject, const QVideoFrameFormat&  format) const;
   QVideoFrameFormat::PixelFormat  pixelFormat(QVideoFrameFormat* theWrappedObject) const;
   QVideoFrameFormat::PixelFormat  static_QVideoFrameFormat_pixelFormatFromImageFormat(QImage::Format  format);
   QString  static_QVideoFrameFormat_pixelFormatToString(QVideoFrameFormat::PixelFormat  pixelFormat);
   int  planeCount(QVideoFrameFormat* theWrappedObject) const;
   QVideoFrameFormat::Direction  scanLineDirection(QVideoFrameFormat* theWrappedObject) const;
   void setColorRange(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::ColorRange  range);
   void setColorSpace(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::ColorSpace  colorSpace);
   void setColorTransfer(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::ColorTransfer  colorTransfer);
   void setFrameRate(QVideoFrameFormat* theWrappedObject, qreal  rate);
   void setFrameSize(QVideoFrameFormat* theWrappedObject, const QSize&  size);
   void setFrameSize(QVideoFrameFormat* theWrappedObject, int  width, int  height);
   void setMaxLuminance(QVideoFrameFormat* theWrappedObject, float  lum);
   void setMirrored(QVideoFrameFormat* theWrappedObject, bool  mirrored);
   void setScanLineDirection(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::Direction  direction);
   void setStreamFrameRate(QVideoFrameFormat* theWrappedObject, qreal  rate);
   void setViewport(QVideoFrameFormat* theWrappedObject, const QRect&  viewport);
   void setYCbCrColorSpace(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat::YCbCrColorSpace  colorSpace);
   qreal  streamFrameRate(QVideoFrameFormat* theWrappedObject) const;
   void swap(QVideoFrameFormat* theWrappedObject, QVideoFrameFormat&  other);
   void updateUniformData(QVideoFrameFormat* theWrappedObject, QByteArray*  dst, const QVideoFrame&  frame, const QMatrix4x4&  transform, float  opacity) const;
   QString  vertexShaderFileName(QVideoFrameFormat* theWrappedObject) const;
   QRect  viewport(QVideoFrameFormat* theWrappedObject) const;
   QVideoFrameFormat::YCbCrColorSpace  yCbCrColorSpace(QVideoFrameFormat* theWrappedObject) const;
    QString py_toString(QVideoFrameFormat*);
    bool __nonzero__(QVideoFrameFormat* obj) { return obj->isValid(); }
};


