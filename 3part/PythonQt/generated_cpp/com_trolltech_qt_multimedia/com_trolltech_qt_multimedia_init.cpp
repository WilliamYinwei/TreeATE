#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_multimedia0.h"
#include "com_trolltech_qt_multimedia1.h"



void PythonQt_init_QtMultimedia(PyObject* module) {
PythonQt::priv()->registerCPPClass("QAudio", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudio>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QAudioBuffer", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioBuffer>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QAudioBufferInput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioBufferInput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioBufferInput>, module, 0);
PythonQt::priv()->registerClass(&QAudioBufferOutput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioBufferOutput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioBufferOutput>, module, 0);
PythonQt::priv()->registerClass(&QAudioDecoder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioDecoder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioDecoder>, module, 0);
PythonQt::priv()->registerCPPClass("QAudioDevice", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioDevice>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QAudioFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioFormat>, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QAudioInput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioInput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioInput>, module, 0);
PythonQt::priv()->registerClass(&QAudioOutput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioOutput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioOutput>, module, 0);
PythonQt::priv()->registerClass(&QAudioSink::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioSink>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioSink>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QAudioSource::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioSource>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioSource>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QCamera::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCamera>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCamera>, module, 0);
PythonQt::priv()->registerCPPClass("QCameraDevice", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraDevice>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QCameraFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraFormat>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QCapturableWindow", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCapturableWindow>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QGraphicsVideoItem::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QGraphicsVideoItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsVideoItem>, module, 0);
PythonQt::priv()->registerClass(&QImageCapture::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QImageCapture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageCapture>, module, 0);
PythonQt::priv()->registerClass(&QMediaCaptureSession::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaCaptureSession>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaCaptureSession>, module, 0);
PythonQt::priv()->registerClass(&QMediaDevices::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaDevices>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaDevices>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaFormat>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMediaMetaData", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaMetaData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaMetaData>, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QMediaPlayer::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaPlayer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaPlayer>, module, 0);
PythonQt::priv()->registerClass(&QMediaRecorder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaRecorder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaRecorder>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaTimeRange", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaTimeRange>, nullptr, module, PythonQt::Type_Add|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceSubtract|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QMediaTimeRange::Interval", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaTimeRange__Interval>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QPlaybackOptions", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QPlaybackOptions>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QScreenCapture::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QScreenCapture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScreenCapture>, module, 0);
PythonQt::priv()->registerClass(&QSoundEffect::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QSoundEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSoundEffect>, module, 0);
PythonQt::priv()->registerCPPClass("QVideoFrame", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoFrame>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QVideoFrameFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoFrameFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoFrameFormat>, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QVideoFrameInput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoFrameInput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoFrameInput>, module, 0);
PythonQt::priv()->registerCPPClass("QVideoFrame::PaintOptions", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoFrame__PaintOptions>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoFrame__PaintOptions>, module, 0);
PythonQt::priv()->registerClass(&QVideoSink::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoSink>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoSink>, module, 0);
PythonQt::priv()->registerClass(&QVideoWidget::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoWidget>, module, 0);
PythonQt::priv()->registerClass(&QWindowCapture::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QWindowCapture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWindowCapture>, module, 0);


PythonQtMethodInfo::addParameterTypeAlias("QList<QAudioFormat::SampleFormat>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QImageCapture::FileFormat>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QMediaFormat::AudioCodec>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QMediaFormat::FileFormat>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QMediaFormat::VideoCodec>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QMediaMetaData::Key>", "QList<int>");
PythonQtRegisterListTemplateConverterForKnownClass(QList, QAudioDevice);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QCameraDevice);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QCameraFormat);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QCapturableWindow);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMediaMetaData);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMediaTimeRange::Interval);
}
