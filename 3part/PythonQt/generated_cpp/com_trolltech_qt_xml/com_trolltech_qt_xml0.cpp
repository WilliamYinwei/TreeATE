#include "com_trolltech_qt_xml0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qbytearray.h>
#include <qdom.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qtextstream.h>
#include <qxmlstream.h>

QDomAttr* PythonQtWrapper_QDomAttr::new_QDomAttr()
{ 
return new QDomAttr(); }

QDomAttr* PythonQtWrapper_QDomAttr::new_QDomAttr(const QDomAttr&  attr)
{ 
return new QDomAttr(attr); }

QString  PythonQtWrapper_QDomAttr::name(QDomAttr* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDomElement  PythonQtWrapper_QDomAttr::ownerElement(QDomAttr* theWrappedObject) const
{
  return ( theWrappedObject->ownerElement());
}

void PythonQtWrapper_QDomAttr::setValue(QDomAttr* theWrappedObject, const QString&  value)
{
  ( theWrappedObject->setValue(value));
}

bool  PythonQtWrapper_QDomAttr::specified(QDomAttr* theWrappedObject) const
{
  return ( theWrappedObject->specified());
}

QString  PythonQtWrapper_QDomAttr::value(QDomAttr* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QDomCDATASection* PythonQtWrapper_QDomCDATASection::new_QDomCDATASection()
{ 
return new QDomCDATASection(); }

QDomCDATASection* PythonQtWrapper_QDomCDATASection::new_QDomCDATASection(const QDomCDATASection&  cdataSection)
{ 
return new QDomCDATASection(cdataSection); }



QDomCharacterData* PythonQtWrapper_QDomCharacterData::new_QDomCharacterData()
{ 
return new QDomCharacterData(); }

QDomCharacterData* PythonQtWrapper_QDomCharacterData::new_QDomCharacterData(const QDomCharacterData&  characterData)
{ 
return new QDomCharacterData(characterData); }

void PythonQtWrapper_QDomCharacterData::appendData(QDomCharacterData* theWrappedObject, const QString&  arg)
{
  ( theWrappedObject->appendData(arg));
}

QString  PythonQtWrapper_QDomCharacterData::data(QDomCharacterData* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

void PythonQtWrapper_QDomCharacterData::deleteData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count)
{
  ( theWrappedObject->deleteData(offset, count));
}

void PythonQtWrapper_QDomCharacterData::insertData(QDomCharacterData* theWrappedObject, unsigned long  offset, const QString&  arg)
{
  ( theWrappedObject->insertData(offset, arg));
}

int  PythonQtWrapper_QDomCharacterData::length(QDomCharacterData* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

void PythonQtWrapper_QDomCharacterData::replaceData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count, const QString&  arg)
{
  ( theWrappedObject->replaceData(offset, count, arg));
}

void PythonQtWrapper_QDomCharacterData::setData(QDomCharacterData* theWrappedObject, const QString&  data)
{
  ( theWrappedObject->setData(data));
}

QString  PythonQtWrapper_QDomCharacterData::substringData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count)
{
  return ( theWrappedObject->substringData(offset, count));
}



QDomComment* PythonQtWrapper_QDomComment::new_QDomComment()
{ 
return new QDomComment(); }

QDomComment* PythonQtWrapper_QDomComment::new_QDomComment(const QDomComment&  comment)
{ 
return new QDomComment(comment); }



QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument()
{ 
return new QDomDocument(); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QDomDocument&  document)
{ 
return new QDomDocument(document); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QDomDocumentType&  doctype)
{ 
return new QDomDocument(doctype); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QString&  name)
{ 
return new QDomDocument(name); }

QDomAttr  PythonQtWrapper_QDomDocument::createAttribute(QDomDocument* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->createAttribute(name));
}

QDomAttr  PythonQtWrapper_QDomDocument::createAttributeNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName)
{
  return ( theWrappedObject->createAttributeNS(nsURI, qName));
}

QDomCDATASection  PythonQtWrapper_QDomDocument::createCDATASection(QDomDocument* theWrappedObject, const QString&  data)
{
  return ( theWrappedObject->createCDATASection(data));
}

QDomComment  PythonQtWrapper_QDomDocument::createComment(QDomDocument* theWrappedObject, const QString&  data)
{
  return ( theWrappedObject->createComment(data));
}

QDomDocumentFragment  PythonQtWrapper_QDomDocument::createDocumentFragment(QDomDocument* theWrappedObject)
{
  return ( theWrappedObject->createDocumentFragment());
}

QDomElement  PythonQtWrapper_QDomDocument::createElement(QDomDocument* theWrappedObject, const QString&  tagName)
{
  return ( theWrappedObject->createElement(tagName));
}

QDomElement  PythonQtWrapper_QDomDocument::createElementNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName)
{
  return ( theWrappedObject->createElementNS(nsURI, qName));
}

QDomEntityReference  PythonQtWrapper_QDomDocument::createEntityReference(QDomDocument* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->createEntityReference(name));
}

QDomProcessingInstruction  PythonQtWrapper_QDomDocument::createProcessingInstruction(QDomDocument* theWrappedObject, const QString&  target, const QString&  data)
{
  return ( theWrappedObject->createProcessingInstruction(target, data));
}

QDomText  PythonQtWrapper_QDomDocument::createTextNode(QDomDocument* theWrappedObject, const QString&  data)
{
  return ( theWrappedObject->createTextNode(data));
}

QDomDocumentType  PythonQtWrapper_QDomDocument::doctype(QDomDocument* theWrappedObject) const
{
  return ( theWrappedObject->doctype());
}

QDomElement  PythonQtWrapper_QDomDocument::documentElement(QDomDocument* theWrappedObject) const
{
  return ( theWrappedObject->documentElement());
}

QDomElement  PythonQtWrapper_QDomDocument::elementById(QDomDocument* theWrappedObject, const QString&  elementId)
{
  return ( theWrappedObject->elementById(elementId));
}

QDomNodeList  PythonQtWrapper_QDomDocument::elementsByTagName(QDomDocument* theWrappedObject, const QString&  tagname) const
{
  return ( theWrappedObject->elementsByTagName(tagname));
}

QDomNodeList  PythonQtWrapper_QDomDocument::elementsByTagNameNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
  return ( theWrappedObject->elementsByTagNameNS(nsURI, localName));
}

QDomImplementation  PythonQtWrapper_QDomDocument::implementation(QDomDocument* theWrappedObject) const
{
  return ( theWrappedObject->implementation());
}

QDomNode  PythonQtWrapper_QDomDocument::importNode(QDomDocument* theWrappedObject, const QDomNode&  importedNode, bool  deep)
{
  return ( theWrappedObject->importNode(importedNode, deep));
}

QDomDocument::ParseResult  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QAnyStringView  data, QDomDocument::ParseOptions  options)
{
  return ( theWrappedObject->setContent(data, options));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QIODevice*  dev, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(dev, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QIODevice*  dev, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(dev, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

QDomDocument::ParseResult  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QIODevice*  device, QDomDocument::ParseOptions  options)
{
  return ( theWrappedObject->setContent(device, options));
}

QDomDocument::ParseResult  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QXmlStreamReader*  reader, QDomDocument::ParseOptions  options)
{
  return ( theWrappedObject->setContent(reader, options));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QXmlStreamReader*  reader, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(reader, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QByteArray&  text, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(text, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QByteArray&  text, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(text, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QString&  text, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(text, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QString&  text, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(text, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

QByteArray  PythonQtWrapper_QDomDocument::toByteArray(QDomDocument* theWrappedObject, int  indent) const
{
  return ( theWrappedObject->toByteArray(indent));
}

QString  PythonQtWrapper_QDomDocument::toString(QDomDocument* theWrappedObject, int  indent) const
{
  return ( theWrappedObject->toString(indent));
}

QString PythonQtWrapper_QDomDocument::py_toString(QDomDocument* obj) { return obj->toString(); }


QDomDocumentFragment* PythonQtWrapper_QDomDocumentFragment::new_QDomDocumentFragment()
{ 
return new QDomDocumentFragment(); }

QDomDocumentFragment* PythonQtWrapper_QDomDocumentFragment::new_QDomDocumentFragment(const QDomDocumentFragment&  documentFragment)
{ 
return new QDomDocumentFragment(documentFragment); }



QDomDocumentType* PythonQtWrapper_QDomDocumentType::new_QDomDocumentType()
{ 
return new QDomDocumentType(); }

QDomDocumentType* PythonQtWrapper_QDomDocumentType::new_QDomDocumentType(const QDomDocumentType&  documentType)
{ 
return new QDomDocumentType(documentType); }

QDomNamedNodeMap  PythonQtWrapper_QDomDocumentType::entities(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->entities());
}

QString  PythonQtWrapper_QDomDocumentType::internalSubset(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->internalSubset());
}

QString  PythonQtWrapper_QDomDocumentType::name(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDomNamedNodeMap  PythonQtWrapper_QDomDocumentType::notations(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->notations());
}

QString  PythonQtWrapper_QDomDocumentType::publicId(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QString  PythonQtWrapper_QDomDocumentType::systemId(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



PythonQtShell_QDomDocument__ParseResult::~PythonQtShell_QDomDocument__ParseResult() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDomDocument::ParseResult* PythonQtWrapper_QDomDocument__ParseResult::new_QDomDocument__ParseResult()
{ 
return new PythonQtShell_QDomDocument__ParseResult(); }

bool  PythonQtWrapper_QDomDocument__ParseResult::operator_cast_bool(QDomDocument::ParseResult* theWrappedObject) const
{
  return ( theWrappedObject->operator bool());
}



QDomElement* PythonQtWrapper_QDomElement::new_QDomElement()
{ 
return new QDomElement(); }

QDomElement* PythonQtWrapper_QDomElement::new_QDomElement(const QDomElement&  element)
{ 
return new QDomElement(element); }

QString  PythonQtWrapper_QDomElement::attribute(QDomElement* theWrappedObject, const QString&  name, const QString&  defValue) const
{
  return ( theWrappedObject->attribute(name, defValue));
}

QString  PythonQtWrapper_QDomElement::attributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName, const QString&  defValue) const
{
  return ( theWrappedObject->attributeNS(nsURI, localName, defValue));
}

QDomAttr  PythonQtWrapper_QDomElement::attributeNode(QDomElement* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->attributeNode(name));
}

QDomAttr  PythonQtWrapper_QDomElement::attributeNodeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
  return ( theWrappedObject->attributeNodeNS(nsURI, localName));
}

QDomNamedNodeMap  PythonQtWrapper_QDomElement::attributes(QDomElement* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

QDomNodeList  PythonQtWrapper_QDomElement::elementsByTagName(QDomElement* theWrappedObject, const QString&  tagname) const
{
  return ( theWrappedObject->elementsByTagName(tagname));
}

QDomNodeList  PythonQtWrapper_QDomElement::elementsByTagNameNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
  return ( theWrappedObject->elementsByTagNameNS(nsURI, localName));
}

bool  PythonQtWrapper_QDomElement::hasAttribute(QDomElement* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasAttribute(name));
}

bool  PythonQtWrapper_QDomElement::hasAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
  return ( theWrappedObject->hasAttributeNS(nsURI, localName));
}

void PythonQtWrapper_QDomElement::removeAttribute(QDomElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->removeAttribute(name));
}

void PythonQtWrapper_QDomElement::removeAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
  ( theWrappedObject->removeAttributeNS(nsURI, localName));
}

QDomAttr  PythonQtWrapper_QDomElement::removeAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  oldAttr)
{
  return ( theWrappedObject->removeAttributeNode(oldAttr));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, double  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, float  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, int  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, qlonglong  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  qName, const QString&  value)
{
  ( theWrappedObject->setAttributeNS(nsURI, qName, value));
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  qName, double  value)
{
  ( theWrappedObject->setAttributeNS(nsURI, qName, value));
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  qName, int  value)
{
  ( theWrappedObject->setAttributeNS(nsURI, qName, value));
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  qName, qlonglong  value)
{
  ( theWrappedObject->setAttributeNS(nsURI, qName, value));
}

QDomAttr  PythonQtWrapper_QDomElement::setAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  newAttr)
{
  return ( theWrappedObject->setAttributeNode(newAttr));
}

QDomAttr  PythonQtWrapper_QDomElement::setAttributeNodeNS(QDomElement* theWrappedObject, const QDomAttr&  newAttr)
{
  return ( theWrappedObject->setAttributeNodeNS(newAttr));
}

void PythonQtWrapper_QDomElement::setTagName(QDomElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setTagName(name));
}

QString  PythonQtWrapper_QDomElement::tagName(QDomElement* theWrappedObject) const
{
  return ( theWrappedObject->tagName());
}

QString  PythonQtWrapper_QDomElement::text(QDomElement* theWrappedObject) const
{
  return ( theWrappedObject->text());
}



QDomEntity* PythonQtWrapper_QDomEntity::new_QDomEntity()
{ 
return new QDomEntity(); }

QDomEntity* PythonQtWrapper_QDomEntity::new_QDomEntity(const QDomEntity&  entity)
{ 
return new QDomEntity(entity); }

QString  PythonQtWrapper_QDomEntity::notationName(QDomEntity* theWrappedObject) const
{
  return ( theWrappedObject->notationName());
}

QString  PythonQtWrapper_QDomEntity::publicId(QDomEntity* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QString  PythonQtWrapper_QDomEntity::systemId(QDomEntity* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QDomEntityReference* PythonQtWrapper_QDomEntityReference::new_QDomEntityReference()
{ 
return new QDomEntityReference(); }

QDomEntityReference* PythonQtWrapper_QDomEntityReference::new_QDomEntityReference(const QDomEntityReference&  entityReference)
{ 
return new QDomEntityReference(entityReference); }



QDomImplementation* PythonQtWrapper_QDomImplementation::new_QDomImplementation()
{ 
return new QDomImplementation(); }

QDomImplementation* PythonQtWrapper_QDomImplementation::new_QDomImplementation(const QDomImplementation&  implementation)
{ 
return new QDomImplementation(implementation); }

QDomDocument  PythonQtWrapper_QDomImplementation::createDocument(QDomImplementation* theWrappedObject, const QString&  nsURI, const QString&  qName, const QDomDocumentType&  doctype)
{
  return ( theWrappedObject->createDocument(nsURI, qName, doctype));
}

QDomDocumentType  PythonQtWrapper_QDomImplementation::createDocumentType(QDomImplementation* theWrappedObject, const QString&  qName, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->createDocumentType(qName, publicId, systemId));
}

bool  PythonQtWrapper_QDomImplementation::hasFeature(QDomImplementation* theWrappedObject, const QString&  feature, const QString&  version) const
{
  return ( theWrappedObject->hasFeature(feature, version));
}

QDomImplementation::InvalidDataPolicy  PythonQtWrapper_QDomImplementation::static_QDomImplementation_invalidDataPolicy()
{
  return (QDomImplementation::invalidDataPolicy());
}

bool  PythonQtWrapper_QDomImplementation::isNull(QDomImplementation* theWrappedObject)
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDomImplementation::__ne__(QDomImplementation* theWrappedObject, const QDomImplementation&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QDomImplementation::__eq__(QDomImplementation* theWrappedObject, const QDomImplementation&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QDomImplementation::static_QDomImplementation_setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy  policy)
{
  (QDomImplementation::setInvalidDataPolicy(policy));
}



QDomNamedNodeMap* PythonQtWrapper_QDomNamedNodeMap::new_QDomNamedNodeMap()
{ 
return new QDomNamedNodeMap(); }

QDomNamedNodeMap* PythonQtWrapper_QDomNamedNodeMap::new_QDomNamedNodeMap(const QDomNamedNodeMap&  namedNodeMap)
{ 
return new QDomNamedNodeMap(namedNodeMap); }

bool  PythonQtWrapper_QDomNamedNodeMap::contains(QDomNamedNodeMap* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

int  PythonQtWrapper_QDomNamedNodeMap::count(QDomNamedNodeMap* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QDomNamedNodeMap::isEmpty(QDomNamedNodeMap* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::item(QDomNamedNodeMap* theWrappedObject, int  index) const
{
  return ( theWrappedObject->item(index));
}

int  PythonQtWrapper_QDomNamedNodeMap::length(QDomNamedNodeMap* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::namedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->namedItem(name));
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::namedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
  return ( theWrappedObject->namedItemNS(nsURI, localName));
}

bool  PythonQtWrapper_QDomNamedNodeMap::__ne__(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QDomNamedNodeMap::__eq__(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  other) const
{
  return ( (*theWrappedObject)== other);
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::removeNamedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->removeNamedItem(name));
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::removeNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
  return ( theWrappedObject->removeNamedItemNS(nsURI, localName));
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::setNamedItem(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode)
{
  return ( theWrappedObject->setNamedItem(newNode));
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::setNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode)
{
  return ( theWrappedObject->setNamedItemNS(newNode));
}

int  PythonQtWrapper_QDomNamedNodeMap::size(QDomNamedNodeMap* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



QDomNode* PythonQtWrapper_QDomNode::new_QDomNode()
{ 
return new QDomNode(); }

QDomNode* PythonQtWrapper_QDomNode::new_QDomNode(const QDomNode&  node)
{ 
return new QDomNode(node); }

QDomNode  PythonQtWrapper_QDomNode::appendChild(QDomNode* theWrappedObject, const QDomNode&  newChild)
{
  return ( theWrappedObject->appendChild(newChild));
}

QDomNodeList  PythonQtWrapper_QDomNode::childNodes(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->childNodes());
}

void PythonQtWrapper_QDomNode::clear(QDomNode* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QDomNode  PythonQtWrapper_QDomNode::cloneNode(QDomNode* theWrappedObject, bool  deep) const
{
  return ( theWrappedObject->cloneNode(deep));
}

int  PythonQtWrapper_QDomNode::columnNumber(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QDomNode  PythonQtWrapper_QDomNode::firstChild(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->firstChild());
}

QDomElement  PythonQtWrapper_QDomNode::firstChildElement(QDomNode* theWrappedObject, const QString&  tagName, const QString&  namespaceURI) const
{
  return ( theWrappedObject->firstChildElement(tagName, namespaceURI));
}

bool  PythonQtWrapper_QDomNode::hasAttributes(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->hasAttributes());
}

bool  PythonQtWrapper_QDomNode::hasChildNodes(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->hasChildNodes());
}

QDomNode  PythonQtWrapper_QDomNode::insertAfter(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild)
{
  return ( theWrappedObject->insertAfter(newChild, refChild));
}

QDomNode  PythonQtWrapper_QDomNode::insertBefore(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild)
{
  return ( theWrappedObject->insertBefore(newChild, refChild));
}

bool  PythonQtWrapper_QDomNode::isAttr(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isAttr());
}

bool  PythonQtWrapper_QDomNode::isCDATASection(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isCDATASection());
}

bool  PythonQtWrapper_QDomNode::isCharacterData(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isCharacterData());
}

bool  PythonQtWrapper_QDomNode::isComment(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isComment());
}

bool  PythonQtWrapper_QDomNode::isDocument(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isDocument());
}

bool  PythonQtWrapper_QDomNode::isDocumentFragment(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isDocumentFragment());
}

bool  PythonQtWrapper_QDomNode::isDocumentType(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isDocumentType());
}

bool  PythonQtWrapper_QDomNode::isElement(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isElement());
}

bool  PythonQtWrapper_QDomNode::isEntity(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isEntity());
}

bool  PythonQtWrapper_QDomNode::isEntityReference(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isEntityReference());
}

bool  PythonQtWrapper_QDomNode::isNotation(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isNotation());
}

bool  PythonQtWrapper_QDomNode::isNull(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDomNode::isProcessingInstruction(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isProcessingInstruction());
}

bool  PythonQtWrapper_QDomNode::isSupported(QDomNode* theWrappedObject, const QString&  feature, const QString&  version) const
{
  return ( theWrappedObject->isSupported(feature, version));
}

bool  PythonQtWrapper_QDomNode::isText(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isText());
}

QDomNode  PythonQtWrapper_QDomNode::lastChild(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->lastChild());
}

QDomElement  PythonQtWrapper_QDomNode::lastChildElement(QDomNode* theWrappedObject, const QString&  tagName, const QString&  namespaceURI) const
{
  return ( theWrappedObject->lastChildElement(tagName, namespaceURI));
}

int  PythonQtWrapper_QDomNode::lineNumber(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QString  PythonQtWrapper_QDomNode::localName(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->localName());
}

QDomNode  PythonQtWrapper_QDomNode::namedItem(QDomNode* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->namedItem(name));
}

QString  PythonQtWrapper_QDomNode::namespaceURI(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->namespaceURI());
}

QDomNode  PythonQtWrapper_QDomNode::nextSibling(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->nextSibling());
}

QDomElement  PythonQtWrapper_QDomNode::nextSiblingElement(QDomNode* theWrappedObject, const QString&  taName, const QString&  namespaceURI) const
{
  return ( theWrappedObject->nextSiblingElement(taName, namespaceURI));
}

QString  PythonQtWrapper_QDomNode::nodeName(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->nodeName());
}

QDomNode::NodeType  PythonQtWrapper_QDomNode::nodeType(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->nodeType());
}

QString  PythonQtWrapper_QDomNode::nodeValue(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->nodeValue());
}

void PythonQtWrapper_QDomNode::normalize(QDomNode* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

bool  PythonQtWrapper_QDomNode::__ne__(QDomNode* theWrappedObject, const QDomNode&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QDomNode::writeTo(QDomNode* theWrappedObject, QTextStream&  stream)
{
  stream <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QDomNode::__eq__(QDomNode* theWrappedObject, const QDomNode&  other) const
{
  return ( (*theWrappedObject)== other);
}

QDomDocument  PythonQtWrapper_QDomNode::ownerDocument(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->ownerDocument());
}

QDomNode  PythonQtWrapper_QDomNode::parentNode(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->parentNode());
}

QString  PythonQtWrapper_QDomNode::prefix(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QDomNode  PythonQtWrapper_QDomNode::previousSibling(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->previousSibling());
}

QDomElement  PythonQtWrapper_QDomNode::previousSiblingElement(QDomNode* theWrappedObject, const QString&  tagName, const QString&  namespaceURI) const
{
  return ( theWrappedObject->previousSiblingElement(tagName, namespaceURI));
}

QDomNode  PythonQtWrapper_QDomNode::removeChild(QDomNode* theWrappedObject, const QDomNode&  oldChild)
{
  return ( theWrappedObject->removeChild(oldChild));
}

QDomNode  PythonQtWrapper_QDomNode::replaceChild(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  oldChild)
{
  return ( theWrappedObject->replaceChild(newChild, oldChild));
}

void PythonQtWrapper_QDomNode::save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2, QDomNode::EncodingPolicy  arg__3) const
{
  ( theWrappedObject->save(arg__1, arg__2, arg__3));
}

void PythonQtWrapper_QDomNode::setNodeValue(QDomNode* theWrappedObject, const QString&  value)
{
  ( theWrappedObject->setNodeValue(value));
}

void PythonQtWrapper_QDomNode::setPrefix(QDomNode* theWrappedObject, const QString&  pre)
{
  ( theWrappedObject->setPrefix(pre));
}

QDomAttr  PythonQtWrapper_QDomNode::toAttr(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toAttr());
}

QDomCDATASection  PythonQtWrapper_QDomNode::toCDATASection(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toCDATASection());
}

QDomCharacterData  PythonQtWrapper_QDomNode::toCharacterData(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toCharacterData());
}

QDomComment  PythonQtWrapper_QDomNode::toComment(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toComment());
}

QDomDocument  PythonQtWrapper_QDomNode::toDocument(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toDocument());
}

QDomDocumentFragment  PythonQtWrapper_QDomNode::toDocumentFragment(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toDocumentFragment());
}

QDomDocumentType  PythonQtWrapper_QDomNode::toDocumentType(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toDocumentType());
}

QDomElement  PythonQtWrapper_QDomNode::toElement(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toElement());
}

QDomEntity  PythonQtWrapper_QDomNode::toEntity(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toEntity());
}

QDomEntityReference  PythonQtWrapper_QDomNode::toEntityReference(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toEntityReference());
}

QDomNotation  PythonQtWrapper_QDomNode::toNotation(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toNotation());
}

QDomProcessingInstruction  PythonQtWrapper_QDomNode::toProcessingInstruction(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toProcessingInstruction());
}

QDomText  PythonQtWrapper_QDomNode::toText(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toText());
}



QDomNodeList* PythonQtWrapper_QDomNodeList::new_QDomNodeList()
{ 
return new QDomNodeList(); }

QDomNodeList* PythonQtWrapper_QDomNodeList::new_QDomNodeList(const QDomNodeList&  nodeList)
{ 
return new QDomNodeList(nodeList); }

QDomNode  PythonQtWrapper_QDomNodeList::at(QDomNodeList* theWrappedObject, int  index) const
{
  return ( theWrappedObject->at(index));
}

int  PythonQtWrapper_QDomNodeList::count(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QDomNodeList::isEmpty(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QDomNode  PythonQtWrapper_QDomNodeList::item(QDomNodeList* theWrappedObject, int  index) const
{
  return ( theWrappedObject->item(index));
}

int  PythonQtWrapper_QDomNodeList::length(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QDomNodeList::__ne__(QDomNodeList* theWrappedObject, const QDomNodeList&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QDomNodeList::__eq__(QDomNodeList* theWrappedObject, const QDomNodeList&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

int  PythonQtWrapper_QDomNodeList::size(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



QDomNotation* PythonQtWrapper_QDomNotation::new_QDomNotation()
{ 
return new QDomNotation(); }

QDomNotation* PythonQtWrapper_QDomNotation::new_QDomNotation(const QDomNotation&  notation)
{ 
return new QDomNotation(notation); }

QString  PythonQtWrapper_QDomNotation::publicId(QDomNotation* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QString  PythonQtWrapper_QDomNotation::systemId(QDomNotation* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QDomProcessingInstruction* PythonQtWrapper_QDomProcessingInstruction::new_QDomProcessingInstruction()
{ 
return new QDomProcessingInstruction(); }

QDomProcessingInstruction* PythonQtWrapper_QDomProcessingInstruction::new_QDomProcessingInstruction(const QDomProcessingInstruction&  processingInstruction)
{ 
return new QDomProcessingInstruction(processingInstruction); }

QString  PythonQtWrapper_QDomProcessingInstruction::data(QDomProcessingInstruction* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

void PythonQtWrapper_QDomProcessingInstruction::setData(QDomProcessingInstruction* theWrappedObject, const QString&  data)
{
  ( theWrappedObject->setData(data));
}

QString  PythonQtWrapper_QDomProcessingInstruction::target(QDomProcessingInstruction* theWrappedObject) const
{
  return ( theWrappedObject->target());
}



QDomText* PythonQtWrapper_QDomText::new_QDomText()
{ 
return new QDomText(); }

QDomText* PythonQtWrapper_QDomText::new_QDomText(const QDomText&  text)
{ 
return new QDomText(text); }

QDomText  PythonQtWrapper_QDomText::splitText(QDomText* theWrappedObject, int  offset)
{
  return ( theWrappedObject->splitText(offset));
}



QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute()
{ 
return new QXmlStreamAttribute(); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value)
{ 
return new QXmlStreamAttribute(namespaceUri, name, value); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value)
{ 
return new QXmlStreamAttribute(qualifiedName, value); }

bool  PythonQtWrapper_QXmlStreamAttribute::isDefault(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

QStringView  PythonQtWrapper_QXmlStreamAttribute::name(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QStringView  PythonQtWrapper_QXmlStreamAttribute::namespaceUri(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

bool  PythonQtWrapper_QXmlStreamAttribute::__ne__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QXmlStreamAttribute::__eq__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QStringView  PythonQtWrapper_QXmlStreamAttribute::prefix(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringView  PythonQtWrapper_QXmlStreamAttribute::qualifiedName(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->qualifiedName());
}

QStringView  PythonQtWrapper_QXmlStreamAttribute::value(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QXmlStreamAttributes* PythonQtWrapper_QXmlStreamAttributes::new_QXmlStreamAttributes()
{ 
return new QXmlStreamAttributes(); }

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->append(namespaceUri, name, value));
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
  ( theWrappedObject->append(qualifiedName, value));
}

const QXmlStreamAttribute  PythonQtWrapper_QXmlStreamAttributes::at(QXmlStreamAttributes* theWrappedObject, qsizetype  i) const
{
  return ( theWrappedObject->at(i));
}

const QXmlStreamAttribute  PythonQtWrapper_QXmlStreamAttributes::back(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->back());
}

qsizetype  PythonQtWrapper_QXmlStreamAttributes::capacity(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->capacity());
}

void PythonQtWrapper_QXmlStreamAttributes::clear(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->clear());
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::constFirst(QXmlStreamAttributes* theWrappedObject) const
{
  return &( theWrappedObject->constFirst());
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::constLast(QXmlStreamAttributes* theWrappedObject) const
{
  return &( theWrappedObject->constLast());
}

qsizetype  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QXmlStreamAttributes::empty(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::first(QXmlStreamAttributes* theWrappedObject) const
{
  return &( theWrappedObject->first());
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::first(QXmlStreamAttributes* theWrappedObject, qsizetype  n) const
{
  return ( theWrappedObject->first(n));
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::static_QXmlStreamAttributes_fromVector(const QList<QXmlStreamAttribute >&  vector)
{
  return (QXmlStreamAttributes::fromVector(vector));
}

const QXmlStreamAttribute  PythonQtWrapper_QXmlStreamAttributes::front(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->front());
}

bool  PythonQtWrapper_QXmlStreamAttributes::hasAttribute(QXmlStreamAttributes* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name) const
{
  return ( theWrappedObject->hasAttribute(namespaceUri, name));
}

bool  PythonQtWrapper_QXmlStreamAttributes::hasAttribute(QXmlStreamAttributes* theWrappedObject, QAnyStringView  qualifiedName) const
{
  return ( theWrappedObject->hasAttribute(qualifiedName));
}

bool  PythonQtWrapper_QXmlStreamAttributes::isEmpty(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QXmlStreamAttributes::isSharedWith(QXmlStreamAttributes* theWrappedObject, const QList<QXmlStreamAttribute >&  other) const
{
  return ( theWrappedObject->isSharedWith(other));
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::last(QXmlStreamAttributes* theWrappedObject) const
{
  return &( theWrappedObject->last());
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::last(QXmlStreamAttributes* theWrappedObject, qsizetype  n) const
{
  return ( theWrappedObject->last(n));
}

qsizetype  PythonQtWrapper_QXmlStreamAttributes::length(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

qsizetype  PythonQtWrapper_QXmlStreamAttributes::static_QXmlStreamAttributes_maxSize()
{
  return (QXmlStreamAttributes::maxSize());
}

qsizetype  PythonQtWrapper_QXmlStreamAttributes::max_size(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->max_size());
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::mid(QXmlStreamAttributes* theWrappedObject, qsizetype  pos, qsizetype  len) const
{
  return ( theWrappedObject->mid(pos, len));
}

void PythonQtWrapper_QXmlStreamAttributes::move(QXmlStreamAttributes* theWrappedObject, qsizetype  from, qsizetype  to)
{
  ( theWrappedObject->move(from, to));
}

QList<QXmlStreamAttribute >*  PythonQtWrapper_QXmlStreamAttributes::__iadd__(QXmlStreamAttributes* theWrappedObject, const QList<QXmlStreamAttribute >&  l)
{
  return &( (*theWrappedObject)+= l);
}

QXmlStreamAttribute  PythonQtWrapper_QXmlStreamAttributes::operator_subscript(QXmlStreamAttributes* theWrappedObject, qsizetype  i)
{
  return ( (*theWrappedObject)[i]);
}

const QXmlStreamAttribute  PythonQtWrapper_QXmlStreamAttributes::operator_subscript(QXmlStreamAttributes* theWrappedObject, qsizetype  i) const
{
  return ( (*theWrappedObject)[i]);
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, qsizetype  i, qsizetype  n)
{
  ( theWrappedObject->remove(i, n));
}

void PythonQtWrapper_QXmlStreamAttributes::removeAt(QXmlStreamAttributes* theWrappedObject, qsizetype  i)
{
  ( theWrappedObject->removeAt(i));
}

void PythonQtWrapper_QXmlStreamAttributes::removeFirst(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->removeFirst());
}

void PythonQtWrapper_QXmlStreamAttributes::removeLast(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->removeLast());
}

void PythonQtWrapper_QXmlStreamAttributes::reserve(QXmlStreamAttributes* theWrappedObject, qsizetype  size)
{
  ( theWrappedObject->reserve(size));
}

void PythonQtWrapper_QXmlStreamAttributes::resize(QXmlStreamAttributes* theWrappedObject, qsizetype  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QXmlStreamAttributes::resizeForOverwrite(QXmlStreamAttributes* theWrappedObject, qsizetype  size)
{
  ( theWrappedObject->resizeForOverwrite(size));
}

void PythonQtWrapper_QXmlStreamAttributes::shrink_to_fit(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->shrink_to_fit());
}

qsizetype  PythonQtWrapper_QXmlStreamAttributes::size(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::sliced(QXmlStreamAttributes* theWrappedObject, qsizetype  pos) const
{
  return ( theWrappedObject->sliced(pos));
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::sliced(QXmlStreamAttributes* theWrappedObject, qsizetype  pos, qsizetype  n) const
{
  return ( theWrappedObject->sliced(pos, n));
}

void PythonQtWrapper_QXmlStreamAttributes::squeeze(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->squeeze());
}

void PythonQtWrapper_QXmlStreamAttributes::swap(QXmlStreamAttributes* theWrappedObject, QList<QXmlStreamAttribute >&  other)
{
  ( theWrappedObject->swap(other));
}

void PythonQtWrapper_QXmlStreamAttributes::swapItemsAt(QXmlStreamAttributes* theWrappedObject, qsizetype  i, qsizetype  j)
{
  ( theWrappedObject->swapItemsAt(i, j));
}

QXmlStreamAttribute  PythonQtWrapper_QXmlStreamAttributes::takeAt(QXmlStreamAttributes* theWrappedObject, qsizetype  i)
{
  return ( theWrappedObject->takeAt(i));
}

QXmlStreamAttribute  PythonQtWrapper_QXmlStreamAttributes::takeFirst(QXmlStreamAttributes* theWrappedObject)
{
  return ( theWrappedObject->takeFirst());
}

QXmlStreamAttribute  PythonQtWrapper_QXmlStreamAttributes::takeLast(QXmlStreamAttributes* theWrappedObject)
{
  return ( theWrappedObject->takeLast());
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::toList(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->toList());
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::toVector(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->toVector());
}

QStringView  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name) const
{
  return ( theWrappedObject->value(namespaceUri, name));
}

QStringView  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, QAnyStringView  qualifiedName) const
{
  return ( theWrappedObject->value(qualifiedName));
}



QXmlStreamEntityDeclaration* PythonQtWrapper_QXmlStreamEntityDeclaration::new_QXmlStreamEntityDeclaration()
{ 
return new QXmlStreamEntityDeclaration(); }

QStringView  PythonQtWrapper_QXmlStreamEntityDeclaration::name(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QStringView  PythonQtWrapper_QXmlStreamEntityDeclaration::notationName(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->notationName());
}

bool  PythonQtWrapper_QXmlStreamEntityDeclaration::__ne__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QXmlStreamEntityDeclaration::__eq__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QStringView  PythonQtWrapper_QXmlStreamEntityDeclaration::publicId(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QStringView  PythonQtWrapper_QXmlStreamEntityDeclaration::systemId(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}

QStringView  PythonQtWrapper_QXmlStreamEntityDeclaration::value(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration()
{ 
return new QXmlStreamNamespaceDeclaration(); }

QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri)
{ 
return new QXmlStreamNamespaceDeclaration(prefix, namespaceUri); }

QStringView  PythonQtWrapper_QXmlStreamNamespaceDeclaration::namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

bool  PythonQtWrapper_QXmlStreamNamespaceDeclaration::__ne__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QXmlStreamNamespaceDeclaration::__eq__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QStringView  PythonQtWrapper_QXmlStreamNamespaceDeclaration::prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}



QXmlStreamNotationDeclaration* PythonQtWrapper_QXmlStreamNotationDeclaration::new_QXmlStreamNotationDeclaration()
{ 
return new QXmlStreamNotationDeclaration(); }

QStringView  PythonQtWrapper_QXmlStreamNotationDeclaration::name(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QXmlStreamNotationDeclaration::__ne__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QXmlStreamNotationDeclaration::__eq__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QStringView  PythonQtWrapper_QXmlStreamNotationDeclaration::publicId(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QStringView  PythonQtWrapper_QXmlStreamNotationDeclaration::systemId(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader()
{ 
return new QXmlStreamReader(); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(QAnyStringView  data)
{ 
return new QXmlStreamReader(data); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(QIODevice*  device)
{ 
return new QXmlStreamReader(device); }

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, QAnyStringView  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction)
{
  ( theWrappedObject->addExtraNamespaceDeclaration(extraNamespaceDeclaraction));
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QList<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions)
{
  ( theWrappedObject->addExtraNamespaceDeclarations(extraNamespaceDeclaractions));
}

bool  PythonQtWrapper_QXmlStreamReader::atEnd(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

QXmlStreamAttributes  PythonQtWrapper_QXmlStreamReader::attributes(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

qint64  PythonQtWrapper_QXmlStreamReader::characterOffset(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->characterOffset());
}

void PythonQtWrapper_QXmlStreamReader::clear(QXmlStreamReader* theWrappedObject)
{
  ( theWrappedObject->clear());
}

qint64  PythonQtWrapper_QXmlStreamReader::columnNumber(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QIODevice*  PythonQtWrapper_QXmlStreamReader::device(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QStringView  PythonQtWrapper_QXmlStreamReader::documentEncoding(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->documentEncoding());
}

QStringView  PythonQtWrapper_QXmlStreamReader::documentVersion(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->documentVersion());
}

QStringView  PythonQtWrapper_QXmlStreamReader::dtdName(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdName());
}

QStringView  PythonQtWrapper_QXmlStreamReader::dtdPublicId(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdPublicId());
}

QStringView  PythonQtWrapper_QXmlStreamReader::dtdSystemId(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdSystemId());
}

QList<QXmlStreamEntityDeclaration >  PythonQtWrapper_QXmlStreamReader::entityDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityDeclarations());
}

int  PythonQtWrapper_QXmlStreamReader::entityExpansionLimit(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityExpansionLimit());
}

QXmlStreamEntityResolver*  PythonQtWrapper_QXmlStreamReader::entityResolver(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityResolver());
}

QXmlStreamReader::Error  PythonQtWrapper_QXmlStreamReader::error(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QXmlStreamReader::errorString(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlStreamReader::hasError(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

bool  PythonQtWrapper_QXmlStreamReader::hasStandaloneDeclaration(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->hasStandaloneDeclaration());
}

bool  PythonQtWrapper_QXmlStreamReader::isCDATA(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isCDATA());
}

bool  PythonQtWrapper_QXmlStreamReader::isCharacters(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isCharacters());
}

bool  PythonQtWrapper_QXmlStreamReader::isComment(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isComment());
}

bool  PythonQtWrapper_QXmlStreamReader::isDTD(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isDTD());
}

bool  PythonQtWrapper_QXmlStreamReader::isEndDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEndDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isEndElement(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEndElement());
}

bool  PythonQtWrapper_QXmlStreamReader::isEntityReference(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEntityReference());
}

bool  PythonQtWrapper_QXmlStreamReader::isProcessingInstruction(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isProcessingInstruction());
}

bool  PythonQtWrapper_QXmlStreamReader::isStandaloneDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStandaloneDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isStartDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStartDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isStartElement(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStartElement());
}

bool  PythonQtWrapper_QXmlStreamReader::isWhitespace(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isWhitespace());
}

qint64  PythonQtWrapper_QXmlStreamReader::lineNumber(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QStringView  PythonQtWrapper_QXmlStreamReader::name(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QList<QXmlStreamNamespaceDeclaration >  PythonQtWrapper_QXmlStreamReader::namespaceDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceDeclarations());
}

bool  PythonQtWrapper_QXmlStreamReader::namespaceProcessing(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceProcessing());
}

QStringView  PythonQtWrapper_QXmlStreamReader::namespaceUri(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

QList<QXmlStreamNotationDeclaration >  PythonQtWrapper_QXmlStreamReader::notationDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->notationDeclarations());
}

QStringView  PythonQtWrapper_QXmlStreamReader::prefix(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringView  PythonQtWrapper_QXmlStreamReader::processingInstructionData(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->processingInstructionData());
}

QStringView  PythonQtWrapper_QXmlStreamReader::processingInstructionTarget(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->processingInstructionTarget());
}

QStringView  PythonQtWrapper_QXmlStreamReader::qualifiedName(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->qualifiedName());
}

void PythonQtWrapper_QXmlStreamReader::raiseError(QXmlStreamReader* theWrappedObject, const QString&  message)
{
  ( theWrappedObject->raiseError(message));
}

QString  PythonQtWrapper_QXmlStreamReader::readElementText(QXmlStreamReader* theWrappedObject, QXmlStreamReader::ReadElementTextBehaviour  behaviour)
{
  return ( theWrappedObject->readElementText(behaviour));
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::readNext(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readNext());
}

bool  PythonQtWrapper_QXmlStreamReader::readNextStartElement(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readNextStartElement());
}

QString  PythonQtWrapper_QXmlStreamReader::readRawInnerData(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readRawInnerData());
}

void PythonQtWrapper_QXmlStreamReader::setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QXmlStreamReader::setEntityExpansionLimit(QXmlStreamReader* theWrappedObject, int  limit)
{
  ( theWrappedObject->setEntityExpansionLimit(limit));
}

void PythonQtWrapper_QXmlStreamReader::setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver)
{
  ( theWrappedObject->setEntityResolver(resolver));
}

void PythonQtWrapper_QXmlStreamReader::setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setNamespaceProcessing(arg__1));
}

void PythonQtWrapper_QXmlStreamReader::skipCurrentElement(QXmlStreamReader* theWrappedObject)
{
  ( theWrappedObject->skipCurrentElement());
}

QStringView  PythonQtWrapper_QXmlStreamReader::text(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QString  PythonQtWrapper_QXmlStreamReader::tokenString(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->tokenString());
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::tokenType(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->tokenType());
}



QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter()
{ 
return new QXmlStreamWriter(); }

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter(QByteArray*  array)
{ 
return new QXmlStreamWriter(array); }

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter(QIODevice*  device)
{ 
return new QXmlStreamWriter(device); }

bool  PythonQtWrapper_QXmlStreamWriter::autoFormatting(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->autoFormatting());
}

int  PythonQtWrapper_QXmlStreamWriter::autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->autoFormattingIndent());
}

QIODevice*  PythonQtWrapper_QXmlStreamWriter::device(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QXmlStreamWriter::Error  PythonQtWrapper_QXmlStreamWriter::error(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QXmlStreamWriter::errorString(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlStreamWriter::hasError(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

void PythonQtWrapper_QXmlStreamWriter::raiseError(QXmlStreamWriter* theWrappedObject, QAnyStringView  message)
{
  ( theWrappedObject->raiseError(message));
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setAutoFormatting(arg__1));
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spacesOrTabs)
{
  ( theWrappedObject->setAutoFormattingIndent(spacesOrTabs));
}

void PythonQtWrapper_QXmlStreamWriter::setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QXmlStreamWriter::setStopWritingOnError(QXmlStreamWriter* theWrappedObject, bool  stop)
{
  ( theWrappedObject->setStopWritingOnError(stop));
}

bool  PythonQtWrapper_QXmlStreamWriter::stopWritingOnError(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->stopWritingOnError());
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name, QAnyStringView  value)
{
  ( theWrappedObject->writeAttribute(namespaceUri, name, value));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, QAnyStringView  qualifiedName, QAnyStringView  value)
{
  ( theWrappedObject->writeAttribute(qualifiedName, value));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
  ( theWrappedObject->writeAttribute(attribute));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes)
{
  ( theWrappedObject->writeAttributes(attributes));
}

void PythonQtWrapper_QXmlStreamWriter::writeCDATA(QXmlStreamWriter* theWrappedObject, QAnyStringView  text)
{
  ( theWrappedObject->writeCDATA(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeCharacters(QXmlStreamWriter* theWrappedObject, QAnyStringView  text)
{
  ( theWrappedObject->writeCharacters(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeComment(QXmlStreamWriter* theWrappedObject, QAnyStringView  text)
{
  ( theWrappedObject->writeComment(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader)
{
  ( theWrappedObject->writeCurrentToken(reader));
}

void PythonQtWrapper_QXmlStreamWriter::writeDTD(QXmlStreamWriter* theWrappedObject, QAnyStringView  dtd)
{
  ( theWrappedObject->writeDTD(dtd));
}

void PythonQtWrapper_QXmlStreamWriter::writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri)
{
  ( theWrappedObject->writeDefaultNamespace(namespaceUri));
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name)
{
  ( theWrappedObject->writeEmptyElement(namespaceUri, name));
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  qualifiedName)
{
  ( theWrappedObject->writeEmptyElement(qualifiedName));
}

void PythonQtWrapper_QXmlStreamWriter::writeEndDocument(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeEndDocument());
}

void PythonQtWrapper_QXmlStreamWriter::writeEndElement(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeEndElement());
}

void PythonQtWrapper_QXmlStreamWriter::writeEntityReference(QXmlStreamWriter* theWrappedObject, QAnyStringView  name)
{
  ( theWrappedObject->writeEntityReference(name));
}

void PythonQtWrapper_QXmlStreamWriter::writeNamespace(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  prefix)
{
  ( theWrappedObject->writeNamespace(namespaceUri, prefix));
}

void PythonQtWrapper_QXmlStreamWriter::writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, QAnyStringView  target, QAnyStringView  data)
{
  ( theWrappedObject->writeProcessingInstruction(target, data));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeStartDocument());
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject, QAnyStringView  version)
{
  ( theWrappedObject->writeStartDocument(version));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject, QAnyStringView  version, bool  standalone)
{
  ( theWrappedObject->writeStartDocument(version, standalone));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name)
{
  ( theWrappedObject->writeStartElement(namespaceUri, name));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  qualifiedName)
{
  ( theWrappedObject->writeStartElement(qualifiedName));
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name, QAnyStringView  text)
{
  ( theWrappedObject->writeTextElement(namespaceUri, name, text));
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  qualifiedName, QAnyStringView  text)
{
  ( theWrappedObject->writeTextElement(qualifiedName, text));
}


