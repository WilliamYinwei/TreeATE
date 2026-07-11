#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qbytearray.h>
#include <qdom.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qtextstream.h>
#include <qxmlstream.h>



class PythonQtWrapper_QDomAttr : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomAttr* new_QDomAttr();
QDomAttr* new_QDomAttr(const QDomAttr&  attr);
void delete_QDomAttr(QDomAttr* obj) { delete obj; }
   QString  name(QDomAttr* theWrappedObject) const;
   QDomElement  ownerElement(QDomAttr* theWrappedObject) const;
   void setValue(QDomAttr* theWrappedObject, const QString&  value);
   bool  specified(QDomAttr* theWrappedObject) const;
   QString  value(QDomAttr* theWrappedObject) const;
    bool __nonzero__(QDomAttr* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomCDATASection : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomCDATASection* new_QDomCDATASection();
QDomCDATASection* new_QDomCDATASection(const QDomCDATASection&  cdataSection);
void delete_QDomCDATASection(QDomCDATASection* obj) { delete obj; }
    bool __nonzero__(QDomCDATASection* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomCharacterData : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomCharacterData* new_QDomCharacterData();
QDomCharacterData* new_QDomCharacterData(const QDomCharacterData&  characterData);
void delete_QDomCharacterData(QDomCharacterData* obj) { delete obj; }
   void appendData(QDomCharacterData* theWrappedObject, const QString&  arg);
   QString  data(QDomCharacterData* theWrappedObject) const;
   void deleteData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count);
   void insertData(QDomCharacterData* theWrappedObject, unsigned long  offset, const QString&  arg);
   int  length(QDomCharacterData* theWrappedObject) const;
   void replaceData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count, const QString&  arg);
   void setData(QDomCharacterData* theWrappedObject, const QString&  data);
   QString  substringData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count);
    bool __nonzero__(QDomCharacterData* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomComment : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomComment* new_QDomComment();
QDomComment* new_QDomComment(const QDomComment&  comment);
void delete_QDomComment(QDomComment* obj) { delete obj; }
    bool __nonzero__(QDomComment* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParseOption )
Q_FLAGS(ParseOptions )
enum class ParseOption{
  Default = static_cast<int>(QDomDocument::ParseOption::Default),   UseNamespaceProcessing = static_cast<int>(QDomDocument::ParseOption::UseNamespaceProcessing),   PreserveSpacingOnlyNodes = static_cast<int>(QDomDocument::ParseOption::PreserveSpacingOnlyNodes)};
Q_DECLARE_FLAGS(ParseOptions, ParseOption)
public Q_SLOTS:
QDomDocument* new_QDomDocument();
QDomDocument* new_QDomDocument(const QDomDocument&  document);
QDomDocument* new_QDomDocument(const QDomDocumentType&  doctype);
QDomDocument* new_QDomDocument(const QString&  name);
void delete_QDomDocument(QDomDocument* obj) { delete obj; }
   QDomAttr  createAttribute(QDomDocument* theWrappedObject, const QString&  name);
   QDomAttr  createAttributeNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName);
   QDomCDATASection  createCDATASection(QDomDocument* theWrappedObject, const QString&  data);
   QDomComment  createComment(QDomDocument* theWrappedObject, const QString&  data);
   QDomDocumentFragment  createDocumentFragment(QDomDocument* theWrappedObject);
   QDomElement  createElement(QDomDocument* theWrappedObject, const QString&  tagName);
   QDomElement  createElementNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName);
   QDomEntityReference  createEntityReference(QDomDocument* theWrappedObject, const QString&  name);
   QDomProcessingInstruction  createProcessingInstruction(QDomDocument* theWrappedObject, const QString&  target, const QString&  data);
   QDomText  createTextNode(QDomDocument* theWrappedObject, const QString&  data);
   QDomDocumentType  doctype(QDomDocument* theWrappedObject) const;
   QDomElement  documentElement(QDomDocument* theWrappedObject) const;
   QDomElement  elementById(QDomDocument* theWrappedObject, const QString&  elementId);
   QDomNodeList  elementsByTagName(QDomDocument* theWrappedObject, const QString&  tagname) const;
   QDomNodeList  elementsByTagNameNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomImplementation  implementation(QDomDocument* theWrappedObject) const;
   QDomNode  importNode(QDomDocument* theWrappedObject, const QDomNode&  importedNode, bool  deep);
   QDomDocument::ParseResult  setContent(QDomDocument* theWrappedObject, QAnyStringView  data, QDomDocument::ParseOptions  options = QDomDocument::ParseOption::Default);
   bool  setContent(QDomDocument* theWrappedObject, QIODevice*  dev, QString*  errorMsg, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, QIODevice*  dev, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   QDomDocument::ParseResult  setContent(QDomDocument* theWrappedObject, QIODevice*  device, QDomDocument::ParseOptions  options = QDomDocument::ParseOption::Default);
   QDomDocument::ParseResult  setContent(QDomDocument* theWrappedObject, QXmlStreamReader*  reader, QDomDocument::ParseOptions  options = QDomDocument::ParseOption::Default);
   bool  setContent(QDomDocument* theWrappedObject, QXmlStreamReader*  reader, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, const QByteArray&  text, QString*  errorMsg, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, const QByteArray&  text, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, const QString&  text, QString*  errorMsg, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, const QString&  text, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   QByteArray  toByteArray(QDomDocument* theWrappedObject, int  indent = 1) const;
   QString  toString(QDomDocument* theWrappedObject, int  indent = 1) const;
    QString py_toString(QDomDocument*);
    bool __nonzero__(QDomDocument* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomDocumentFragment : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomDocumentFragment* new_QDomDocumentFragment();
QDomDocumentFragment* new_QDomDocumentFragment(const QDomDocumentFragment&  documentFragment);
void delete_QDomDocumentFragment(QDomDocumentFragment* obj) { delete obj; }
    bool __nonzero__(QDomDocumentFragment* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomDocumentType : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomDocumentType* new_QDomDocumentType();
QDomDocumentType* new_QDomDocumentType(const QDomDocumentType&  documentType);
void delete_QDomDocumentType(QDomDocumentType* obj) { delete obj; }
   QDomNamedNodeMap  entities(QDomDocumentType* theWrappedObject) const;
   QString  internalSubset(QDomDocumentType* theWrappedObject) const;
   QString  name(QDomDocumentType* theWrappedObject) const;
   QDomNamedNodeMap  notations(QDomDocumentType* theWrappedObject) const;
   QString  publicId(QDomDocumentType* theWrappedObject) const;
   QString  systemId(QDomDocumentType* theWrappedObject) const;
    bool __nonzero__(QDomDocumentType* obj) { return !obj->isNull(); }
};





class PythonQtShell_QDomDocument__ParseResult : public QDomDocument::ParseResult
{
public:
    PythonQtShell_QDomDocument__ParseResult():QDomDocument::ParseResult(),_wrapper(nullptr) {};

   ~PythonQtShell_QDomDocument__ParseResult();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QDomDocument__ParseResult : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomDocument::ParseResult* new_QDomDocument__ParseResult();
QDomDocument::ParseResult* new_QDomDocument__ParseResult(const QDomDocument::ParseResult& other) {
PythonQtShell_QDomDocument__ParseResult* a = new PythonQtShell_QDomDocument__ParseResult();
*((QDomDocument::ParseResult*)a) = other;
return a; }
void delete_QDomDocument__ParseResult(QDomDocument::ParseResult* obj) { delete obj; }
   bool  operator_cast_bool(QDomDocument::ParseResult* theWrappedObject) const;
void py_set_errorColumn(QDomDocument::ParseResult* theWrappedObject, qsizetype  errorColumn){ theWrappedObject->errorColumn = errorColumn; }
qsizetype  py_get_errorColumn(QDomDocument::ParseResult* theWrappedObject){ return theWrappedObject->errorColumn; }
void py_set_errorLine(QDomDocument::ParseResult* theWrappedObject, qsizetype  errorLine){ theWrappedObject->errorLine = errorLine; }
qsizetype  py_get_errorLine(QDomDocument::ParseResult* theWrappedObject){ return theWrappedObject->errorLine; }
void py_set_errorMessage(QDomDocument::ParseResult* theWrappedObject, QString  errorMessage){ theWrappedObject->errorMessage = errorMessage; }
QString  py_get_errorMessage(QDomDocument::ParseResult* theWrappedObject){ return theWrappedObject->errorMessage; }
};





class PythonQtWrapper_QDomElement : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomElement* new_QDomElement();
QDomElement* new_QDomElement(const QDomElement&  element);
void delete_QDomElement(QDomElement* obj) { delete obj; }
   QString  attribute(QDomElement* theWrappedObject, const QString&  name, const QString&  defValue = QString()) const;
   QString  attributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName, const QString&  defValue = QString()) const;
   QDomAttr  attributeNode(QDomElement* theWrappedObject, const QString&  name);
   QDomAttr  attributeNodeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomNamedNodeMap  attributes(QDomElement* theWrappedObject) const;
   QDomNodeList  elementsByTagName(QDomElement* theWrappedObject, const QString&  tagname) const;
   QDomNodeList  elementsByTagNameNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   bool  hasAttribute(QDomElement* theWrappedObject, const QString&  name) const;
   bool  hasAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   void removeAttribute(QDomElement* theWrappedObject, const QString&  name);
   void removeAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomAttr  removeAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  oldAttr);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, const QString&  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, double  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, float  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, int  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, qlonglong  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  qName, const QString&  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  qName, double  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  qName, int  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  qName, qlonglong  value);
   QDomAttr  setAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   QDomAttr  setAttributeNodeNS(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   void setTagName(QDomElement* theWrappedObject, const QString&  name);
   QString  tagName(QDomElement* theWrappedObject) const;
   QString  text(QDomElement* theWrappedObject) const;
    bool __nonzero__(QDomElement* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomEntity : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomEntity* new_QDomEntity();
QDomEntity* new_QDomEntity(const QDomEntity&  entity);
void delete_QDomEntity(QDomEntity* obj) { delete obj; }
   QString  notationName(QDomEntity* theWrappedObject) const;
   QString  publicId(QDomEntity* theWrappedObject) const;
   QString  systemId(QDomEntity* theWrappedObject) const;
    bool __nonzero__(QDomEntity* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomEntityReference : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomEntityReference* new_QDomEntityReference();
QDomEntityReference* new_QDomEntityReference(const QDomEntityReference&  entityReference);
void delete_QDomEntityReference(QDomEntityReference* obj) { delete obj; }
    bool __nonzero__(QDomEntityReference* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomImplementation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InvalidDataPolicy )
enum InvalidDataPolicy{
  AcceptInvalidChars = QDomImplementation::AcceptInvalidChars,   DropInvalidChars = QDomImplementation::DropInvalidChars,   ReturnNullNode = QDomImplementation::ReturnNullNode};
public Q_SLOTS:
QDomImplementation* new_QDomImplementation();
QDomImplementation* new_QDomImplementation(const QDomImplementation&  implementation);
void delete_QDomImplementation(QDomImplementation* obj) { delete obj; }
   QDomDocument  createDocument(QDomImplementation* theWrappedObject, const QString&  nsURI, const QString&  qName, const QDomDocumentType&  doctype);
   QDomDocumentType  createDocumentType(QDomImplementation* theWrappedObject, const QString&  qName, const QString&  publicId, const QString&  systemId);
   bool  hasFeature(QDomImplementation* theWrappedObject, const QString&  feature, const QString&  version) const;
   QDomImplementation::InvalidDataPolicy  static_QDomImplementation_invalidDataPolicy();
   bool  isNull(QDomImplementation* theWrappedObject);
   bool  __ne__(QDomImplementation* theWrappedObject, const QDomImplementation&  other) const;
   bool  __eq__(QDomImplementation* theWrappedObject, const QDomImplementation&  other) const;
   void static_QDomImplementation_setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy  policy);
    bool __nonzero__(QDomImplementation* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomNamedNodeMap : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomNamedNodeMap* new_QDomNamedNodeMap();
QDomNamedNodeMap* new_QDomNamedNodeMap(const QDomNamedNodeMap&  namedNodeMap);
void delete_QDomNamedNodeMap(QDomNamedNodeMap* obj) { delete obj; }
   bool  contains(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   int  count(QDomNamedNodeMap* theWrappedObject) const;
   bool  isEmpty(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  item(QDomNamedNodeMap* theWrappedObject, int  index) const;
   int  length(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  namedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   QDomNode  namedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   bool  __ne__(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  other) const;
   bool  __eq__(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  other) const;
   QDomNode  removeNamedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name);
   QDomNode  removeNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomNode  setNamedItem(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   QDomNode  setNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   int  size(QDomNamedNodeMap* theWrappedObject) const;
    bool __nonzero__(QDomNamedNodeMap* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QDomNode : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EncodingPolicy NodeType )
enum EncodingPolicy{
  EncodingFromDocument = QDomNode::EncodingFromDocument,   EncodingFromTextStream = QDomNode::EncodingFromTextStream};
enum NodeType{
  ElementNode = QDomNode::ElementNode,   AttributeNode = QDomNode::AttributeNode,   TextNode = QDomNode::TextNode,   CDATASectionNode = QDomNode::CDATASectionNode,   EntityReferenceNode = QDomNode::EntityReferenceNode,   EntityNode = QDomNode::EntityNode,   ProcessingInstructionNode = QDomNode::ProcessingInstructionNode,   CommentNode = QDomNode::CommentNode,   DocumentNode = QDomNode::DocumentNode,   DocumentTypeNode = QDomNode::DocumentTypeNode,   DocumentFragmentNode = QDomNode::DocumentFragmentNode,   NotationNode = QDomNode::NotationNode,   BaseNode = QDomNode::BaseNode,   CharacterDataNode = QDomNode::CharacterDataNode};
public Q_SLOTS:
QDomNode* new_QDomNode();
QDomNode* new_QDomNode(const QDomNode&  node);
void delete_QDomNode(QDomNode* obj) { delete obj; }
   QDomNode  appendChild(QDomNode* theWrappedObject, const QDomNode&  newChild);
   QDomNodeList  childNodes(QDomNode* theWrappedObject) const;
   void clear(QDomNode* theWrappedObject);
   QDomNode  cloneNode(QDomNode* theWrappedObject, bool  deep = true) const;
   int  columnNumber(QDomNode* theWrappedObject) const;
   QDomNode  firstChild(QDomNode* theWrappedObject) const;
   QDomElement  firstChildElement(QDomNode* theWrappedObject, const QString&  tagName = QString(), const QString&  namespaceURI = QString()) const;
   bool  hasAttributes(QDomNode* theWrappedObject) const;
   bool  hasChildNodes(QDomNode* theWrappedObject) const;
   QDomNode  insertAfter(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild);
   QDomNode  insertBefore(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild);
   bool  isAttr(QDomNode* theWrappedObject) const;
   bool  isCDATASection(QDomNode* theWrappedObject) const;
   bool  isCharacterData(QDomNode* theWrappedObject) const;
   bool  isComment(QDomNode* theWrappedObject) const;
   bool  isDocument(QDomNode* theWrappedObject) const;
   bool  isDocumentFragment(QDomNode* theWrappedObject) const;
   bool  isDocumentType(QDomNode* theWrappedObject) const;
   bool  isElement(QDomNode* theWrappedObject) const;
   bool  isEntity(QDomNode* theWrappedObject) const;
   bool  isEntityReference(QDomNode* theWrappedObject) const;
   bool  isNotation(QDomNode* theWrappedObject) const;
   bool  isNull(QDomNode* theWrappedObject) const;
   bool  isProcessingInstruction(QDomNode* theWrappedObject) const;
   bool  isSupported(QDomNode* theWrappedObject, const QString&  feature, const QString&  version) const;
   bool  isText(QDomNode* theWrappedObject) const;
   QDomNode  lastChild(QDomNode* theWrappedObject) const;
   QDomElement  lastChildElement(QDomNode* theWrappedObject, const QString&  tagName = QString(), const QString&  namespaceURI = QString()) const;
   int  lineNumber(QDomNode* theWrappedObject) const;
   QString  localName(QDomNode* theWrappedObject) const;
   QDomNode  namedItem(QDomNode* theWrappedObject, const QString&  name) const;
   QString  namespaceURI(QDomNode* theWrappedObject) const;
   QDomNode  nextSibling(QDomNode* theWrappedObject) const;
   QDomElement  nextSiblingElement(QDomNode* theWrappedObject, const QString&  taName = QString(), const QString&  namespaceURI = QString()) const;
   QString  nodeName(QDomNode* theWrappedObject) const;
   QDomNode::NodeType  nodeType(QDomNode* theWrappedObject) const;
   QString  nodeValue(QDomNode* theWrappedObject) const;
   void normalize(QDomNode* theWrappedObject);
   bool  __ne__(QDomNode* theWrappedObject, const QDomNode&  other) const;
   void writeTo(QDomNode* theWrappedObject, QTextStream&  stream);
   bool  __eq__(QDomNode* theWrappedObject, const QDomNode&  other) const;
   QDomDocument  ownerDocument(QDomNode* theWrappedObject) const;
   QDomNode  parentNode(QDomNode* theWrappedObject) const;
   QString  prefix(QDomNode* theWrappedObject) const;
   QDomNode  previousSibling(QDomNode* theWrappedObject) const;
   QDomElement  previousSiblingElement(QDomNode* theWrappedObject, const QString&  tagName = QString(), const QString&  namespaceURI = QString()) const;
   QDomNode  removeChild(QDomNode* theWrappedObject, const QDomNode&  oldChild);
   QDomNode  replaceChild(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  oldChild);
   void save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2, QDomNode::EncodingPolicy  arg__3 = QDomNode::EncodingFromDocument) const;
   void setNodeValue(QDomNode* theWrappedObject, const QString&  value);
   void setPrefix(QDomNode* theWrappedObject, const QString&  pre);
   QDomAttr  toAttr(QDomNode* theWrappedObject) const;
   QDomCDATASection  toCDATASection(QDomNode* theWrappedObject) const;
   QDomCharacterData  toCharacterData(QDomNode* theWrappedObject) const;
   QDomComment  toComment(QDomNode* theWrappedObject) const;
   QDomDocument  toDocument(QDomNode* theWrappedObject) const;
   QDomDocumentFragment  toDocumentFragment(QDomNode* theWrappedObject) const;
   QDomDocumentType  toDocumentType(QDomNode* theWrappedObject) const;
   QDomElement  toElement(QDomNode* theWrappedObject) const;
   QDomEntity  toEntity(QDomNode* theWrappedObject) const;
   QDomEntityReference  toEntityReference(QDomNode* theWrappedObject) const;
   QDomNotation  toNotation(QDomNode* theWrappedObject) const;
   QDomProcessingInstruction  toProcessingInstruction(QDomNode* theWrappedObject) const;
   QDomText  toText(QDomNode* theWrappedObject) const;
    bool __nonzero__(QDomNode* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomNodeList : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomNodeList* new_QDomNodeList();
QDomNodeList* new_QDomNodeList(const QDomNodeList&  nodeList);
void delete_QDomNodeList(QDomNodeList* obj) { delete obj; }
   QDomNode  at(QDomNodeList* theWrappedObject, int  index) const;
   int  count(QDomNodeList* theWrappedObject) const;
   bool  isEmpty(QDomNodeList* theWrappedObject) const;
   QDomNode  item(QDomNodeList* theWrappedObject, int  index) const;
   int  length(QDomNodeList* theWrappedObject) const;
   bool  __ne__(QDomNodeList* theWrappedObject, const QDomNodeList&  rhs);
   bool  __eq__(QDomNodeList* theWrappedObject, const QDomNodeList&  rhs);
   int  size(QDomNodeList* theWrappedObject) const;
    bool __nonzero__(QDomNodeList* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QDomNotation : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomNotation* new_QDomNotation();
QDomNotation* new_QDomNotation(const QDomNotation&  notation);
void delete_QDomNotation(QDomNotation* obj) { delete obj; }
   QString  publicId(QDomNotation* theWrappedObject) const;
   QString  systemId(QDomNotation* theWrappedObject) const;
    bool __nonzero__(QDomNotation* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomProcessingInstruction : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomProcessingInstruction* new_QDomProcessingInstruction();
QDomProcessingInstruction* new_QDomProcessingInstruction(const QDomProcessingInstruction&  processingInstruction);
void delete_QDomProcessingInstruction(QDomProcessingInstruction* obj) { delete obj; }
   QString  data(QDomProcessingInstruction* theWrappedObject) const;
   void setData(QDomProcessingInstruction* theWrappedObject, const QString&  data);
   QString  target(QDomProcessingInstruction* theWrappedObject) const;
    bool __nonzero__(QDomProcessingInstruction* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomText : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QDomText* new_QDomText();
QDomText* new_QDomText(const QDomText&  text);
void delete_QDomText(QDomText* obj) { delete obj; }
   QDomText  splitText(QDomText* theWrappedObject, int  offset);
    bool __nonzero__(QDomText* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QXmlStreamAttribute : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QXmlStreamAttribute* new_QXmlStreamAttribute();
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QXmlStreamAttribute& other) {
QXmlStreamAttribute* a = new QXmlStreamAttribute();
*((QXmlStreamAttribute*)a) = other;
return a; }
void delete_QXmlStreamAttribute(QXmlStreamAttribute* obj) { delete obj; }
   bool  isDefault(QXmlStreamAttribute* theWrappedObject) const;
   QStringView  name(QXmlStreamAttribute* theWrappedObject) const;
   QStringView  namespaceUri(QXmlStreamAttribute* theWrappedObject) const;
   bool  __ne__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  rhs);
   bool  __eq__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  rhs);
   QStringView  prefix(QXmlStreamAttribute* theWrappedObject) const;
   QStringView  qualifiedName(QXmlStreamAttribute* theWrappedObject) const;
   QStringView  value(QXmlStreamAttribute* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamAttributes : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QXmlStreamAttributes* new_QXmlStreamAttributes();
QXmlStreamAttributes* new_QXmlStreamAttributes(const QXmlStreamAttributes& other) {
QXmlStreamAttributes* a = new QXmlStreamAttributes();
*((QXmlStreamAttributes*)a) = other;
return a; }
void delete_QXmlStreamAttributes(QXmlStreamAttributes* obj) { delete obj; }
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   const QXmlStreamAttribute  at(QXmlStreamAttributes* theWrappedObject, qsizetype  i) const;
   const QXmlStreamAttribute  back(QXmlStreamAttributes* theWrappedObject) const;
   qsizetype  capacity(QXmlStreamAttributes* theWrappedObject) const;
   void clear(QXmlStreamAttributes* theWrappedObject);
   const QXmlStreamAttribute*  constFirst(QXmlStreamAttributes* theWrappedObject) const;
   const QXmlStreamAttribute*  constLast(QXmlStreamAttributes* theWrappedObject) const;
   qsizetype  count(QXmlStreamAttributes* theWrappedObject) const;
   bool  empty(QXmlStreamAttributes* theWrappedObject) const;
   const QXmlStreamAttribute*  first(QXmlStreamAttributes* theWrappedObject) const;
   QList<QXmlStreamAttribute >  first(QXmlStreamAttributes* theWrappedObject, qsizetype  n) const;
   QList<QXmlStreamAttribute >  static_QXmlStreamAttributes_fromVector(const QList<QXmlStreamAttribute >&  vector);
   const QXmlStreamAttribute  front(QXmlStreamAttributes* theWrappedObject) const;
   bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name) const;
   bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, QAnyStringView  qualifiedName) const;
   bool  isEmpty(QXmlStreamAttributes* theWrappedObject) const;
   bool  isSharedWith(QXmlStreamAttributes* theWrappedObject, const QList<QXmlStreamAttribute >&  other) const;
   const QXmlStreamAttribute*  last(QXmlStreamAttributes* theWrappedObject) const;
   QList<QXmlStreamAttribute >  last(QXmlStreamAttributes* theWrappedObject, qsizetype  n) const;
   qsizetype  length(QXmlStreamAttributes* theWrappedObject) const;
   qsizetype  static_QXmlStreamAttributes_maxSize();
   qsizetype  max_size(QXmlStreamAttributes* theWrappedObject) const;
   QList<QXmlStreamAttribute >  mid(QXmlStreamAttributes* theWrappedObject, qsizetype  pos, qsizetype  len = -1) const;
   void move(QXmlStreamAttributes* theWrappedObject, qsizetype  from, qsizetype  to);
   QList<QXmlStreamAttribute >*  __iadd__(QXmlStreamAttributes* theWrappedObject, const QList<QXmlStreamAttribute >&  l);
   QXmlStreamAttribute  operator_subscript(QXmlStreamAttributes* theWrappedObject, qsizetype  i);
   const QXmlStreamAttribute  operator_subscript(QXmlStreamAttributes* theWrappedObject, qsizetype  i) const;
   void remove(QXmlStreamAttributes* theWrappedObject, qsizetype  i, qsizetype  n = 1);
   void removeAt(QXmlStreamAttributes* theWrappedObject, qsizetype  i);
   void removeFirst(QXmlStreamAttributes* theWrappedObject);
   void removeLast(QXmlStreamAttributes* theWrappedObject);
   void reserve(QXmlStreamAttributes* theWrappedObject, qsizetype  size);
   void resize(QXmlStreamAttributes* theWrappedObject, qsizetype  size);
   void resizeForOverwrite(QXmlStreamAttributes* theWrappedObject, qsizetype  size);
   void shrink_to_fit(QXmlStreamAttributes* theWrappedObject);
   qsizetype  size(QXmlStreamAttributes* theWrappedObject) const;
   QList<QXmlStreamAttribute >  sliced(QXmlStreamAttributes* theWrappedObject, qsizetype  pos) const;
   QList<QXmlStreamAttribute >  sliced(QXmlStreamAttributes* theWrappedObject, qsizetype  pos, qsizetype  n) const;
   void squeeze(QXmlStreamAttributes* theWrappedObject);
   void swap(QXmlStreamAttributes* theWrappedObject, QList<QXmlStreamAttribute >&  other);
   void swapItemsAt(QXmlStreamAttributes* theWrappedObject, qsizetype  i, qsizetype  j);
   QXmlStreamAttribute  takeAt(QXmlStreamAttributes* theWrappedObject, qsizetype  i);
   QXmlStreamAttribute  takeFirst(QXmlStreamAttributes* theWrappedObject);
   QXmlStreamAttribute  takeLast(QXmlStreamAttributes* theWrappedObject);
   QList<QXmlStreamAttribute >  toList(QXmlStreamAttributes* theWrappedObject) const;
   QList<QXmlStreamAttribute >  toVector(QXmlStreamAttributes* theWrappedObject) const;
   QStringView  value(QXmlStreamAttributes* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name) const;
   QStringView  value(QXmlStreamAttributes* theWrappedObject, QAnyStringView  qualifiedName) const;
    bool __nonzero__(QXmlStreamAttributes* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QXmlStreamEntityDeclaration : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration();
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration& other) {
QXmlStreamEntityDeclaration* a = new QXmlStreamEntityDeclaration();
*((QXmlStreamEntityDeclaration*)a) = other;
return a; }
void delete_QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration* obj) { delete obj; }
   QStringView  name(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringView  notationName(QXmlStreamEntityDeclaration* theWrappedObject) const;
   bool  __ne__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  rhs);
   bool  __eq__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  rhs);
   QStringView  publicId(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringView  systemId(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringView  value(QXmlStreamEntityDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamNamespaceDeclaration : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration();
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri);
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration& other) {
QXmlStreamNamespaceDeclaration* a = new QXmlStreamNamespaceDeclaration();
*((QXmlStreamNamespaceDeclaration*)a) = other;
return a; }
void delete_QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration* obj) { delete obj; }
   QStringView  namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
   bool  __ne__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  rhs);
   bool  __eq__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  rhs);
   QStringView  prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamNotationDeclaration : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration();
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration& other) {
QXmlStreamNotationDeclaration* a = new QXmlStreamNotationDeclaration();
*((QXmlStreamNotationDeclaration*)a) = other;
return a; }
void delete_QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration* obj) { delete obj; }
   QStringView  name(QXmlStreamNotationDeclaration* theWrappedObject) const;
   bool  __ne__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  rhs);
   bool  __eq__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  rhs);
   QStringView  publicId(QXmlStreamNotationDeclaration* theWrappedObject) const;
   QStringView  systemId(QXmlStreamNotationDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error ReadElementTextBehaviour TokenType )
enum Error{
  NoError = QXmlStreamReader::NoError,   UnexpectedElementError = QXmlStreamReader::UnexpectedElementError,   CustomError = QXmlStreamReader::CustomError,   NotWellFormedError = QXmlStreamReader::NotWellFormedError,   PrematureEndOfDocumentError = QXmlStreamReader::PrematureEndOfDocumentError};
enum ReadElementTextBehaviour{
  ErrorOnUnexpectedElement = QXmlStreamReader::ErrorOnUnexpectedElement,   IncludeChildElements = QXmlStreamReader::IncludeChildElements,   SkipChildElements = QXmlStreamReader::SkipChildElements};
enum TokenType{
  NoToken = QXmlStreamReader::NoToken,   Invalid = QXmlStreamReader::Invalid,   StartDocument = QXmlStreamReader::StartDocument,   EndDocument = QXmlStreamReader::EndDocument,   StartElement = QXmlStreamReader::StartElement,   EndElement = QXmlStreamReader::EndElement,   Characters = QXmlStreamReader::Characters,   Comment = QXmlStreamReader::Comment,   DTD = QXmlStreamReader::DTD,   EntityReference = QXmlStreamReader::EntityReference,   ProcessingInstruction = QXmlStreamReader::ProcessingInstruction};
public Q_SLOTS:
QXmlStreamReader* new_QXmlStreamReader();
QXmlStreamReader* new_QXmlStreamReader(QAnyStringView  data);
QXmlStreamReader* new_QXmlStreamReader(QIODevice*  device);
void delete_QXmlStreamReader(QXmlStreamReader* obj) { delete obj; }
   void addData(QXmlStreamReader* theWrappedObject, QAnyStringView  data);
   void addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction);
   void addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QList<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions);
   bool  atEnd(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamAttributes  attributes(QXmlStreamReader* theWrappedObject) const;
   qint64  characterOffset(QXmlStreamReader* theWrappedObject) const;
   void clear(QXmlStreamReader* theWrappedObject);
   qint64  columnNumber(QXmlStreamReader* theWrappedObject) const;
   QIODevice*  device(QXmlStreamReader* theWrappedObject) const;
   QStringView  documentEncoding(QXmlStreamReader* theWrappedObject) const;
   QStringView  documentVersion(QXmlStreamReader* theWrappedObject) const;
   QStringView  dtdName(QXmlStreamReader* theWrappedObject) const;
   QStringView  dtdPublicId(QXmlStreamReader* theWrappedObject) const;
   QStringView  dtdSystemId(QXmlStreamReader* theWrappedObject) const;
   QList<QXmlStreamEntityDeclaration >  entityDeclarations(QXmlStreamReader* theWrappedObject) const;
   int  entityExpansionLimit(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamEntityResolver*  entityResolver(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::Error  error(QXmlStreamReader* theWrappedObject) const;
   QString  errorString(QXmlStreamReader* theWrappedObject) const;
   bool  hasError(QXmlStreamReader* theWrappedObject) const;
   bool  hasStandaloneDeclaration(QXmlStreamReader* theWrappedObject) const;
   bool  isCDATA(QXmlStreamReader* theWrappedObject) const;
   bool  isCharacters(QXmlStreamReader* theWrappedObject) const;
   bool  isComment(QXmlStreamReader* theWrappedObject) const;
   bool  isDTD(QXmlStreamReader* theWrappedObject) const;
   bool  isEndDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isEndElement(QXmlStreamReader* theWrappedObject) const;
   bool  isEntityReference(QXmlStreamReader* theWrappedObject) const;
   bool  isProcessingInstruction(QXmlStreamReader* theWrappedObject) const;
   bool  isStandaloneDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isStartDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isStartElement(QXmlStreamReader* theWrappedObject) const;
   bool  isWhitespace(QXmlStreamReader* theWrappedObject) const;
   qint64  lineNumber(QXmlStreamReader* theWrappedObject) const;
   QStringView  name(QXmlStreamReader* theWrappedObject) const;
   QList<QXmlStreamNamespaceDeclaration >  namespaceDeclarations(QXmlStreamReader* theWrappedObject) const;
   bool  namespaceProcessing(QXmlStreamReader* theWrappedObject) const;
   QStringView  namespaceUri(QXmlStreamReader* theWrappedObject) const;
   QList<QXmlStreamNotationDeclaration >  notationDeclarations(QXmlStreamReader* theWrappedObject) const;
   QStringView  prefix(QXmlStreamReader* theWrappedObject) const;
   QStringView  processingInstructionData(QXmlStreamReader* theWrappedObject) const;
   QStringView  processingInstructionTarget(QXmlStreamReader* theWrappedObject) const;
   QStringView  qualifiedName(QXmlStreamReader* theWrappedObject) const;
   void raiseError(QXmlStreamReader* theWrappedObject, const QString&  message = QString());
   QString  readElementText(QXmlStreamReader* theWrappedObject, QXmlStreamReader::ReadElementTextBehaviour  behaviour = QXmlStreamReader::ErrorOnUnexpectedElement);
   QXmlStreamReader::TokenType  readNext(QXmlStreamReader* theWrappedObject);
   bool  readNextStartElement(QXmlStreamReader* theWrappedObject);
   QString  readRawInnerData(QXmlStreamReader* theWrappedObject);
   void setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device);
   void setEntityExpansionLimit(QXmlStreamReader* theWrappedObject, int  limit);
   void setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver);
   void setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1);
   void skipCurrentElement(QXmlStreamReader* theWrappedObject);
   QStringView  text(QXmlStreamReader* theWrappedObject) const;
   QString  tokenString(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::TokenType  tokenType(QXmlStreamReader* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error )
enum class Error{
  None = static_cast<int>(QXmlStreamWriter::Error::None),   IO = static_cast<int>(QXmlStreamWriter::Error::IO),   Encoding = static_cast<int>(QXmlStreamWriter::Error::Encoding),   InvalidCharacter = static_cast<int>(QXmlStreamWriter::Error::InvalidCharacter),   Custom = static_cast<int>(QXmlStreamWriter::Error::Custom)};
public Q_SLOTS:
QXmlStreamWriter* new_QXmlStreamWriter();
QXmlStreamWriter* new_QXmlStreamWriter(QByteArray*  array);
QXmlStreamWriter* new_QXmlStreamWriter(QIODevice*  device);
void delete_QXmlStreamWriter(QXmlStreamWriter* obj) { delete obj; }
   bool  autoFormatting(QXmlStreamWriter* theWrappedObject) const;
   int  autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const;
   QIODevice*  device(QXmlStreamWriter* theWrappedObject) const;
   QXmlStreamWriter::Error  error(QXmlStreamWriter* theWrappedObject) const;
   QString  errorString(QXmlStreamWriter* theWrappedObject) const;
   bool  hasError(QXmlStreamWriter* theWrappedObject) const;
   void raiseError(QXmlStreamWriter* theWrappedObject, QAnyStringView  message);
   void setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1);
   void setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spacesOrTabs);
   void setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device);
   void setStopWritingOnError(QXmlStreamWriter* theWrappedObject, bool  stop);
   bool  stopWritingOnError(QXmlStreamWriter* theWrappedObject) const;
   void writeAttribute(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name, QAnyStringView  value);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, QAnyStringView  qualifiedName, QAnyStringView  value);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute);
   void writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes);
   void writeCDATA(QXmlStreamWriter* theWrappedObject, QAnyStringView  text);
   void writeCharacters(QXmlStreamWriter* theWrappedObject, QAnyStringView  text);
   void writeComment(QXmlStreamWriter* theWrappedObject, QAnyStringView  text);
   void writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader);
   void writeDTD(QXmlStreamWriter* theWrappedObject, QAnyStringView  dtd);
   void writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  qualifiedName);
   void writeEndDocument(QXmlStreamWriter* theWrappedObject);
   void writeEndElement(QXmlStreamWriter* theWrappedObject);
   void writeEntityReference(QXmlStreamWriter* theWrappedObject, QAnyStringView  name);
   void writeNamespace(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  prefix = {});
   void writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, QAnyStringView  target, QAnyStringView  data = {});
   void writeStartDocument(QXmlStreamWriter* theWrappedObject);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, QAnyStringView  version);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, QAnyStringView  version, bool  standalone);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  qualifiedName);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  namespaceUri, QAnyStringView  name, QAnyStringView  text);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, QAnyStringView  qualifiedName, QAnyStringView  text);
};


