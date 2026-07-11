#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_xml0.h"



void PythonQt_init_QtXml(PyObject* module) {
PythonQt::priv()->registerCPPClass("QDomAttr", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomAttr>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomCDATASection", "QDomText", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomCDATASection>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomCharacterData", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomCharacterData>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomComment", "QDomCharacterData", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomComment>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomDocument", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocument>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomDocumentFragment", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocumentFragment>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomDocumentType", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocumentType>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomDocument::ParseResult", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocument__ParseResult>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDomDocument__ParseResult>, module, 0);
PythonQt::priv()->registerCPPClass("QDomElement", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomElement>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomEntity", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomEntity>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomEntityReference", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomEntityReference>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomImplementation", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomImplementation>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomNamedNodeMap", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNamedNodeMap>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomNode", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNode>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomNodeList", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNodeList>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomNotation", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNotation>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomProcessingInstruction", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomProcessingInstruction>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDomText", "QDomCharacterData", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomText>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QXmlStreamAttribute", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamAttribute>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QXmlStreamAttributes", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamAttributes>, nullptr, module, PythonQt::Type_Add|PythonQt::Type_InplaceAdd|PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QXmlStreamEntityDeclaration", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamEntityDeclaration>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QXmlStreamNamespaceDeclaration", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamNamespaceDeclaration>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QXmlStreamNotationDeclaration", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamNotationDeclaration>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QXmlStreamReader", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamReader>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QXmlStreamWriter", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamWriter>, nullptr, module, 0);


PythonQtRegisterListTemplateConverterForKnownClass(QList, QXmlStreamAttribute);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QXmlStreamEntityDeclaration);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QXmlStreamNamespaceDeclaration);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QXmlStreamNotationDeclaration);
}
