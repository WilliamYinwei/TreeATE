#include <PythonQt.h>
#include <QDateTime>
#include <QObject>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatetime.h>
#include <qdtls.h>
#include <qhostaddress.h>
#include <qhttp1configuration.h>
#include <qhttp2configuration.h>
#include <qhttpheaders.h>
#include <qhttpmultipart.h>
#include <qiodevice.h>
#include <qjsondocument.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkcookie.h>
#include <qnetworkcookiejar.h>
#include <qnetworkdatagram.h>
#include <qnetworkdiskcache.h>
#include <qnetworkinformation.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qnetworkrequestfactory.h>
#include <qobject.h>
#include <qocspresponse.h>
#include <qrestaccessmanager.h>
#include <qrestreply.h>
#include <qssl.h>
#include <qsslcertificate.h>
#include <qsslcertificateextension.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qssldiffiehellmanparameters.h>
#include <qsslellipticcurve.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslpresharedkeyauthenticator.h>
#include <qsslserver.h>
#include <qsslsocket.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qthread.h>
#include <qudpsocket.h>
#include <qurl.h>
#include <qurlquery.h>



class PythonQtShell_QNetworkCookieJar : public QNetworkCookieJar
{
public:
    PythonQtShell_QNetworkCookieJar(QObject*  parent = nullptr):QNetworkCookieJar(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QNetworkCookieJar() override;

void childEvent(QChildEvent*  event) override;
QList<QNetworkCookie >  cookiesForUrl(const QUrl&  url) const override;
void customEvent(QEvent*  event) override;
bool  deleteCookie(const QNetworkCookie&  cookie) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  insertCookie(const QNetworkCookie&  cookie) override;
bool  setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url) override;
void timerEvent(QTimerEvent*  event) override;
bool  updateCookie(const QNetworkCookie&  cookie) override;
bool  validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QNetworkCookieJar : public QNetworkCookieJar
{ public:
inline QList<QNetworkCookie >  promoted_allCookies() const { return this->allCookies(); }
inline void promoted_setAllCookies(const QList<QNetworkCookie >&  cookieList) { this->setAllCookies(cookieList); }
inline bool  promoted_validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const { return this->validateCookie(cookie, url); }
inline QList<QNetworkCookie >  py_q_cookiesForUrl(const QUrl&  url) const { return QNetworkCookieJar::cookiesForUrl(url); }
inline bool  py_q_deleteCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::deleteCookie(cookie); }
inline bool  py_q_insertCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::insertCookie(cookie); }
inline bool  py_q_setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url) { return QNetworkCookieJar::setCookiesFromUrl(cookieList, url); }
inline bool  py_q_updateCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::updateCookie(cookie); }
inline bool  py_q_validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const { return QNetworkCookieJar::validateCookie(cookie, url); }
};

class PythonQtWrapper_QNetworkCookieJar : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QNetworkCookieJar* new_QNetworkCookieJar(QObject*  parent = nullptr);
void delete_QNetworkCookieJar(QNetworkCookieJar* obj) { delete obj; }
   QList<QNetworkCookie >  allCookies(QNetworkCookieJar* theWrappedObject) const;
   QList<QNetworkCookie >  cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const;
   QList<QNetworkCookie >  py_q_cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const{  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_cookiesForUrl(url));}
   bool  deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_deleteCookie(cookie));}
   bool  insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_insertCookie(cookie));}
   void setAllCookies(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList);
   bool  setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
   bool  py_q_setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_setCookiesFromUrl(cookieList, url));}
   bool  updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_updateCookie(cookie));}
   bool  validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const;
   bool  py_q_validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const{  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_validateCookie(cookie, url));}
};





class PythonQtWrapper_QNetworkDatagram : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QNetworkDatagram* new_QNetworkDatagram();
QNetworkDatagram* new_QNetworkDatagram(const QByteArray&  data, const QHostAddress&  destinationAddress = QHostAddress(), unsigned short  port = 0);
QNetworkDatagram* new_QNetworkDatagram(const QNetworkDatagram&  other);
void delete_QNetworkDatagram(QNetworkDatagram* obj) { delete obj; }
   void clear(QNetworkDatagram* theWrappedObject);
   QByteArray  data(QNetworkDatagram* theWrappedObject) const;
   QHostAddress  destinationAddress(QNetworkDatagram* theWrappedObject) const;
   int  destinationPort(QNetworkDatagram* theWrappedObject) const;
   int  hopLimit(QNetworkDatagram* theWrappedObject) const;
   uint  interfaceIndex(QNetworkDatagram* theWrappedObject) const;
   bool  isNull(QNetworkDatagram* theWrappedObject) const;
   bool  isValid(QNetworkDatagram* theWrappedObject) const;
   QNetworkDatagram  makeReply(QNetworkDatagram* theWrappedObject, const QByteArray&  paylaod) const;
   QNetworkDatagram*  operator_assign(QNetworkDatagram* theWrappedObject, const QNetworkDatagram&  other);
   QHostAddress  senderAddress(QNetworkDatagram* theWrappedObject) const;
   int  senderPort(QNetworkDatagram* theWrappedObject) const;
   void setData(QNetworkDatagram* theWrappedObject, const QByteArray&  data);
   void setDestination(QNetworkDatagram* theWrappedObject, const QHostAddress&  address, unsigned short  port);
   void setHopLimit(QNetworkDatagram* theWrappedObject, int  count);
   void setInterfaceIndex(QNetworkDatagram* theWrappedObject, uint  index);
   void setSender(QNetworkDatagram* theWrappedObject, const QHostAddress&  address, unsigned short  port = 0);
   void swap(QNetworkDatagram* theWrappedObject, QNetworkDatagram&  other);
    bool __nonzero__(QNetworkDatagram* obj) { return obj->isValid(); }
};





class PythonQtShell_QNetworkDiskCache : public QNetworkDiskCache
{
public:
    PythonQtShell_QNetworkDiskCache(QObject*  parent = nullptr):QNetworkDiskCache(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QNetworkDiskCache() override;

qint64  cacheSize() const override;
void childEvent(QChildEvent*  event) override;
void clear() override;
void customEvent(QEvent*  event) override;
QIODevice*  data(const QUrl&  url) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
qint64  expire() override;
void insert(QIODevice*  device) override;
QNetworkCacheMetaData  metaData(const QUrl&  url) override;
QIODevice*  prepare(const QNetworkCacheMetaData&  metaData) override;
bool  remove(const QUrl&  url) override;
void timerEvent(QTimerEvent*  event) override;
void updateMetaData(const QNetworkCacheMetaData&  metaData) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QNetworkDiskCache : public QNetworkDiskCache
{ public:
inline qint64  promoted_expire() { return this->expire(); }
inline qint64  py_q_cacheSize() const { return QNetworkDiskCache::cacheSize(); }
inline void py_q_clear() { QNetworkDiskCache::clear(); }
inline QIODevice*  py_q_data(const QUrl&  url) { return QNetworkDiskCache::data(url); }
inline qint64  py_q_expire() { return QNetworkDiskCache::expire(); }
inline void py_q_insert(QIODevice*  device) { QNetworkDiskCache::insert(device); }
inline QNetworkCacheMetaData  py_q_metaData(const QUrl&  url) { return QNetworkDiskCache::metaData(url); }
inline QIODevice*  py_q_prepare(const QNetworkCacheMetaData&  metaData) { return QNetworkDiskCache::prepare(metaData); }
inline bool  py_q_remove(const QUrl&  url) { return QNetworkDiskCache::remove(url); }
inline void py_q_updateMetaData(const QNetworkCacheMetaData&  metaData) { QNetworkDiskCache::updateMetaData(metaData); }
};

class PythonQtWrapper_QNetworkDiskCache : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QNetworkDiskCache* new_QNetworkDiskCache(QObject*  parent = nullptr);
void delete_QNetworkDiskCache(QNetworkDiskCache* obj) { delete obj; }
   QString  cacheDirectory(QNetworkDiskCache* theWrappedObject) const;
   qint64  py_q_cacheSize(QNetworkDiskCache* theWrappedObject) const{  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_cacheSize());}
   void py_q_clear(QNetworkDiskCache* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_clear());}
   QIODevice*  py_q_data(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_data(url));}
   qint64  expire(QNetworkDiskCache* theWrappedObject);
   qint64  py_q_expire(QNetworkDiskCache* theWrappedObject){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_expire());}
   QNetworkCacheMetaData  fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const;
   void py_q_insert(QNetworkDiskCache* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_insert(device));}
   qint64  maximumCacheSize(QNetworkDiskCache* theWrappedObject) const;
   QNetworkCacheMetaData  py_q_metaData(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_metaData(url));}
   QIODevice*  py_q_prepare(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_prepare(metaData));}
   bool  py_q_remove(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_remove(url));}
   void setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir);
   void setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size);
   void py_q_updateMetaData(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_updateMetaData(metaData));}
};





class PythonQtWrapper_QNetworkInformation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Feature )
Q_FLAGS(Features )
enum class Feature{
  Reachability = static_cast<int>(QNetworkInformation::Feature::Reachability),   CaptivePortal = static_cast<int>(QNetworkInformation::Feature::CaptivePortal),   TransportMedium = static_cast<int>(QNetworkInformation::Feature::TransportMedium),   Metered = static_cast<int>(QNetworkInformation::Feature::Metered)};
Q_DECLARE_FLAGS(Features, Feature)
public Q_SLOTS:
   QStringList  static_QNetworkInformation_availableBackends();
   QString  backendName(QNetworkInformation* theWrappedObject) const;
   QNetworkInformation*  static_QNetworkInformation_instance();
   bool  isBehindCaptivePortal(QNetworkInformation* theWrappedObject) const;
   bool  isMetered(QNetworkInformation* theWrappedObject) const;
   bool  static_QNetworkInformation_load(QNetworkInformation::Features  features);
   bool  static_QNetworkInformation_load(QStringView  backend);
   bool  static_QNetworkInformation_loadBackendByFeatures(QNetworkInformation::Features  features);
   bool  static_QNetworkInformation_loadBackendByName(QStringView  backend);
   bool  static_QNetworkInformation_loadDefaultBackend();
   QNetworkInformation::Reachability  reachability(QNetworkInformation* theWrappedObject) const;
   QNetworkInformation::Features  supportedFeatures(QNetworkInformation* theWrappedObject) const;
   bool  supports(QNetworkInformation* theWrappedObject, QNetworkInformation::Features  features) const;
   QNetworkInformation::TransportMedium  transportMedium(QNetworkInformation* theWrappedObject) const;
};





class PythonQtWrapper_QNetworkInterface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InterfaceFlag InterfaceType )
Q_FLAGS(InterfaceFlags )
enum InterfaceFlag{
  IsUp = QNetworkInterface::IsUp,   IsRunning = QNetworkInterface::IsRunning,   CanBroadcast = QNetworkInterface::CanBroadcast,   IsLoopBack = QNetworkInterface::IsLoopBack,   IsPointToPoint = QNetworkInterface::IsPointToPoint,   CanMulticast = QNetworkInterface::CanMulticast};
enum InterfaceType{
  Loopback = QNetworkInterface::Loopback,   Virtual = QNetworkInterface::Virtual,   Ethernet = QNetworkInterface::Ethernet,   Slip = QNetworkInterface::Slip,   CanBus = QNetworkInterface::CanBus,   Ppp = QNetworkInterface::Ppp,   Fddi = QNetworkInterface::Fddi,   Wifi = QNetworkInterface::Wifi,   Ieee80211 = QNetworkInterface::Ieee80211,   Phonet = QNetworkInterface::Phonet,   Ieee802154 = QNetworkInterface::Ieee802154,   SixLoWPAN = QNetworkInterface::SixLoWPAN,   Ieee80216 = QNetworkInterface::Ieee80216,   Ieee1394 = QNetworkInterface::Ieee1394,   Unknown = QNetworkInterface::Unknown};
Q_DECLARE_FLAGS(InterfaceFlags, InterfaceFlag)
public Q_SLOTS:
QNetworkInterface* new_QNetworkInterface();
QNetworkInterface* new_QNetworkInterface(const QNetworkInterface&  other);
void delete_QNetworkInterface(QNetworkInterface* obj) { delete obj; }
   QList<QNetworkAddressEntry >  addressEntries(QNetworkInterface* theWrappedObject) const;
   QList<QHostAddress >  static_QNetworkInterface_allAddresses();
   QList<QNetworkInterface >  static_QNetworkInterface_allInterfaces();
   QNetworkInterface::InterfaceFlags  flags(QNetworkInterface* theWrappedObject) const;
   QString  hardwareAddress(QNetworkInterface* theWrappedObject) const;
   QString  humanReadableName(QNetworkInterface* theWrappedObject) const;
   int  index(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface  static_QNetworkInterface_interfaceFromIndex(int  index);
   QNetworkInterface  static_QNetworkInterface_interfaceFromName(const QString&  name);
   int  static_QNetworkInterface_interfaceIndexFromName(const QString&  name);
   QString  static_QNetworkInterface_interfaceNameFromIndex(int  index);
   bool  isValid(QNetworkInterface* theWrappedObject) const;
   int  maximumTransmissionUnit(QNetworkInterface* theWrappedObject) const;
   QString  name(QNetworkInterface* theWrappedObject) const;
   void swap(QNetworkInterface* theWrappedObject, QNetworkInterface&  other);
   QNetworkInterface::InterfaceType  type(QNetworkInterface* theWrappedObject) const;
    QString py_toString(QNetworkInterface*);
    bool __nonzero__(QNetworkInterface* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QNetworkProxy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability ProxyType )
Q_FLAGS(Capabilities )
enum Capability{
  TunnelingCapability = QNetworkProxy::TunnelingCapability,   ListeningCapability = QNetworkProxy::ListeningCapability,   UdpTunnelingCapability = QNetworkProxy::UdpTunnelingCapability,   CachingCapability = QNetworkProxy::CachingCapability,   HostNameLookupCapability = QNetworkProxy::HostNameLookupCapability,   SctpTunnelingCapability = QNetworkProxy::SctpTunnelingCapability,   SctpListeningCapability = QNetworkProxy::SctpListeningCapability};
enum ProxyType{
  DefaultProxy = QNetworkProxy::DefaultProxy,   Socks5Proxy = QNetworkProxy::Socks5Proxy,   NoProxy = QNetworkProxy::NoProxy,   HttpProxy = QNetworkProxy::HttpProxy,   HttpCachingProxy = QNetworkProxy::HttpCachingProxy,   FtpCachingProxy = QNetworkProxy::FtpCachingProxy};
Q_DECLARE_FLAGS(Capabilities, Capability)
public Q_SLOTS:
QNetworkProxy* new_QNetworkProxy();
QNetworkProxy* new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName = QString(), unsigned short  port = 0, const QString&  user = QString(), const QString&  password = QString());
QNetworkProxy* new_QNetworkProxy(const QNetworkProxy&  other);
void delete_QNetworkProxy(QNetworkProxy* obj) { delete obj; }
   QNetworkProxy  static_QNetworkProxy_applicationProxy();
   QNetworkProxy::Capabilities  capabilities(QNetworkProxy* theWrappedObject) const;
   bool  hasRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   QHttpHeaders  headers(QNetworkProxy* theWrappedObject) const;
   QString  hostName(QNetworkProxy* theWrappedObject) const;
   bool  isCachingProxy(QNetworkProxy* theWrappedObject) const;
   bool  isTransparentProxy(QNetworkProxy* theWrappedObject) const;
   bool  __ne__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   bool  __eq__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   QString  password(QNetworkProxy* theWrappedObject) const;
   unsigned short  port(QNetworkProxy* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkProxy* theWrappedObject) const;
   void static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy);
   void setCapabilities(QNetworkProxy* theWrappedObject, QNetworkProxy::Capabilities  capab);
   void setHeader(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setHeaders(QNetworkProxy* theWrappedObject, const QHttpHeaders&  newHeaders);
   void setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName);
   void setPassword(QNetworkProxy* theWrappedObject, const QString&  password);
   void setPort(QNetworkProxy* theWrappedObject, unsigned short  port);
   void setRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type);
   void setUser(QNetworkProxy* theWrappedObject, const QString&  userName);
   void swap(QNetworkProxy* theWrappedObject, QNetworkProxy&  other);
   QNetworkProxy::ProxyType  type(QNetworkProxy* theWrappedObject) const;
   QString  user(QNetworkProxy* theWrappedObject) const;
    QString py_toString(QNetworkProxy*);
};





class PythonQtShell_QNetworkProxyFactory : public QNetworkProxyFactory
{
public:
    PythonQtShell_QNetworkProxyFactory():QNetworkProxyFactory(),_wrapper(nullptr) {};

   ~PythonQtShell_QNetworkProxyFactory() override;

QList<QNetworkProxy >  queryProxy(const QNetworkProxyQuery&  query = QNetworkProxyQuery()) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QNetworkProxyFactory : public QNetworkProxyFactory
{ public:
inline QList<QNetworkProxy >  py_q_queryProxy(const QNetworkProxyQuery&  query = QNetworkProxyQuery()) { return this->queryProxy(query); }
};

class PythonQtWrapper_QNetworkProxyFactory : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QNetworkProxyFactory* new_QNetworkProxyFactory();
void delete_QNetworkProxyFactory(QNetworkProxyFactory* obj) { delete obj; }
   QList<QNetworkProxy >  static_QNetworkProxyFactory_proxyForQuery(const QNetworkProxyQuery&  query);
   QList<QNetworkProxy >  queryProxy(QNetworkProxyFactory* theWrappedObject, const QNetworkProxyQuery&  query = QNetworkProxyQuery());
   QList<QNetworkProxy >  py_q_queryProxy(QNetworkProxyFactory* theWrappedObject, const QNetworkProxyQuery&  query = QNetworkProxyQuery()){  return (((PythonQtPublicPromoter_QNetworkProxyFactory*)theWrappedObject)->py_q_queryProxy(query));}
   void static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory*  factory);
   void static_QNetworkProxyFactory_setUseSystemConfiguration(bool  enable);
   QList<QNetworkProxy >  static_QNetworkProxyFactory_systemProxyForQuery(const QNetworkProxyQuery&  query = QNetworkProxyQuery());
   bool  static_QNetworkProxyFactory_usesSystemConfiguration();
};





class PythonQtWrapper_QNetworkProxyQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QueryType )
enum QueryType{
  TcpSocket = QNetworkProxyQuery::TcpSocket,   UdpSocket = QNetworkProxyQuery::UdpSocket,   SctpSocket = QNetworkProxyQuery::SctpSocket,   TcpServer = QNetworkProxyQuery::TcpServer,   UrlRequest = QNetworkProxyQuery::UrlRequest,   SctpServer = QNetworkProxyQuery::SctpServer};
public Q_SLOTS:
QNetworkProxyQuery* new_QNetworkProxyQuery();
QNetworkProxyQuery* new_QNetworkProxyQuery(const QNetworkProxyQuery&  other);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QString&  hostname, int  port, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpSocket);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::UrlRequest);
QNetworkProxyQuery* new_QNetworkProxyQuery(unsigned short  bindPort, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpServer);
void delete_QNetworkProxyQuery(QNetworkProxyQuery* obj) { delete obj; }
   int  localPort(QNetworkProxyQuery* theWrappedObject) const;
   bool  __ne__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const;
   bool  __eq__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const;
   QString  peerHostName(QNetworkProxyQuery* theWrappedObject) const;
   int  peerPort(QNetworkProxyQuery* theWrappedObject) const;
   QString  protocolTag(QNetworkProxyQuery* theWrappedObject) const;
   QNetworkProxyQuery::QueryType  queryType(QNetworkProxyQuery* theWrappedObject) const;
   void setLocalPort(QNetworkProxyQuery* theWrappedObject, int  port);
   void setPeerHostName(QNetworkProxyQuery* theWrappedObject, const QString&  hostname);
   void setPeerPort(QNetworkProxyQuery* theWrappedObject, int  port);
   void setProtocolTag(QNetworkProxyQuery* theWrappedObject, const QString&  protocolTag);
   void setQueryType(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery::QueryType  type);
   void setUrl(QNetworkProxyQuery* theWrappedObject, const QUrl&  url);
   void swap(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery&  other);
   QUrl  url(QNetworkProxyQuery* theWrappedObject) const;
    QString py_toString(QNetworkProxyQuery*);
};





class PythonQtShell_QNetworkReply : public QNetworkReply
{
public:
    PythonQtShell_QNetworkReply(QObject*  parent = nullptr):QNetworkReply(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QNetworkReply() override;

void abort() override;
bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void ignoreSslErrors() override;
void ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1) override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  mode) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  seek(qint64  pos) override;
void setReadBufferSize(qint64  size) override;
void setSslConfigurationImplementation(const QSslConfiguration&  arg__1) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
void sslConfigurationImplementation(QSslConfiguration&  arg__1) const override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QNetworkReply : public QNetworkReply
{ public:
inline void promoted_ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1) { this->ignoreSslErrorsImplementation(arg__1); }
inline void promoted_setAttribute(QNetworkRequest::Attribute  code, const QVariant&  value) { this->setAttribute(code, value); }
inline void promoted_setError(QNetworkReply::NetworkError  errorCode, const QString&  errorString) { this->setError(errorCode, errorString); }
inline void promoted_setFinished(bool  arg__1) { this->setFinished(arg__1); }
inline void promoted_setHeader(QNetworkRequest::KnownHeaders  header, const QVariant&  value) { this->setHeader(header, value); }
inline void promoted_setHeaders(const QHttpHeaders&  newHeaders) { this->setHeaders(newHeaders); }
inline void promoted_setOperation(QNetworkAccessManager::Operation  operation) { this->setOperation(operation); }
inline void promoted_setRawHeader(const QByteArray&  headerName, const QByteArray&  value) { this->setRawHeader(headerName, value); }
inline void promoted_setRequest(const QNetworkRequest&  request) { this->setRequest(request); }
inline void promoted_setSslConfigurationImplementation(const QSslConfiguration&  arg__1) { this->setSslConfigurationImplementation(arg__1); }
inline void promoted_setUrl(const QUrl&  url) { this->setUrl(url); }
inline void promoted_setWellKnownHeader(QHttpHeaders::WellKnownHeader  name, QByteArrayView  value) { this->setWellKnownHeader(name, value); }
inline void promoted_sslConfigurationImplementation(QSslConfiguration&  arg__1) const { this->sslConfigurationImplementation(arg__1); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline void py_q_abort() { this->abort(); }
inline void py_q_close() { QNetworkReply::close(); }
inline void py_q_ignoreSslErrors() { QNetworkReply::ignoreSslErrors(); }
inline void py_q_ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1) { QNetworkReply::ignoreSslErrorsImplementation(arg__1); }
inline bool  py_q_isSequential() const { return QNetworkReply::isSequential(); }
inline void py_q_setReadBufferSize(qint64  size) { QNetworkReply::setReadBufferSize(size); }
inline void py_q_setSslConfigurationImplementation(const QSslConfiguration&  arg__1) { QNetworkReply::setSslConfigurationImplementation(arg__1); }
inline void py_q_sslConfigurationImplementation(QSslConfiguration&  arg__1) const { QNetworkReply::sslConfigurationImplementation(arg__1); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QNetworkReply::writeData(data, len); }
};

class PythonQtWrapper_QNetworkReply : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QNetworkReply* new_QNetworkReply(QObject*  parent = nullptr);
void delete_QNetworkReply(QNetworkReply* obj) { delete obj; }
   void py_q_abort(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_abort());}
   QVariant  attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const;
   void py_q_close(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_close());}
   QNetworkReply::NetworkError  error(QNetworkReply* theWrappedObject) const;
   bool  hasRawHeader(QNetworkReply* theWrappedObject, QAnyStringView  headerName) const;
   QVariant  header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   QHttpHeaders  headers(QNetworkReply* theWrappedObject) const;
   void py_q_ignoreSslErrors(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_ignoreSslErrors());}
   void ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1);
   void py_q_ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_ignoreSslErrorsImplementation(arg__1));}
   bool  isFinished(QNetworkReply* theWrappedObject) const;
   bool  isRunning(QNetworkReply* theWrappedObject) const;
   bool  py_q_isSequential(QNetworkReply* theWrappedObject) const{  return (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_isSequential());}
   QNetworkAccessManager*  manager(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager::Operation  operation(QNetworkReply* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkReply* theWrappedObject, QAnyStringView  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkReply* theWrappedObject) const;
   const QList<std::pair<QByteArray , QByteArray >  >*  rawHeaderPairs(QNetworkReply* theWrappedObject) const;
   qint64  readBufferSize(QNetworkReply* theWrappedObject) const;
   QNetworkRequest  request(QNetworkReply* theWrappedObject) const;
   void setAttribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   void setError(QNetworkReply* theWrappedObject, QNetworkReply::NetworkError  errorCode, const QString&  errorString);
   void setFinished(QNetworkReply* theWrappedObject, bool  arg__1);
   void setHeader(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setHeaders(QNetworkReply* theWrappedObject, const QHttpHeaders&  newHeaders);
   void setOperation(QNetworkReply* theWrappedObject, QNetworkAccessManager::Operation  operation);
   void setRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size);
   void py_q_setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_setReadBufferSize(size));}
   void setRequest(QNetworkReply* theWrappedObject, const QNetworkRequest&  request);
   void setSslConfiguration(QNetworkReply* theWrappedObject, const QSslConfiguration&  configuration);
   void setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1);
   void py_q_setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_setSslConfigurationImplementation(arg__1));}
   void setUrl(QNetworkReply* theWrappedObject, const QUrl&  url);
   void setWellKnownHeader(QNetworkReply* theWrappedObject, QHttpHeaders::WellKnownHeader  name, QByteArrayView  value);
   QSslConfiguration  sslConfiguration(QNetworkReply* theWrappedObject) const;
   void sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const;
   void py_q_sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const{  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_sslConfigurationImplementation(arg__1));}
   QUrl  url(QNetworkReply* theWrappedObject) const;
   qint64  py_q_writeData(QNetworkReply* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtShell_QNetworkRequest : public QNetworkRequest
{
public:
    PythonQtShell_QNetworkRequest():QNetworkRequest(),_wrapper(nullptr) {};
    PythonQtShell_QNetworkRequest(const QNetworkRequest&  other):QNetworkRequest(other),_wrapper(nullptr) {};
    PythonQtShell_QNetworkRequest(const QUrl&  url):QNetworkRequest(url),_wrapper(nullptr) {};

   ~PythonQtShell_QNetworkRequest();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QNetworkRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attribute CacheLoadControl KnownHeaders LoadControl Priority RedirectPolicy TransferTimeoutConstant )
enum Attribute{
  HttpStatusCodeAttribute = QNetworkRequest::HttpStatusCodeAttribute,   HttpReasonPhraseAttribute = QNetworkRequest::HttpReasonPhraseAttribute,   RedirectionTargetAttribute = QNetworkRequest::RedirectionTargetAttribute,   ConnectionEncryptedAttribute = QNetworkRequest::ConnectionEncryptedAttribute,   CacheLoadControlAttribute = QNetworkRequest::CacheLoadControlAttribute,   CacheSaveControlAttribute = QNetworkRequest::CacheSaveControlAttribute,   SourceIsFromCacheAttribute = QNetworkRequest::SourceIsFromCacheAttribute,   DoNotBufferUploadDataAttribute = QNetworkRequest::DoNotBufferUploadDataAttribute,   HttpPipeliningAllowedAttribute = QNetworkRequest::HttpPipeliningAllowedAttribute,   HttpPipeliningWasUsedAttribute = QNetworkRequest::HttpPipeliningWasUsedAttribute,   CustomVerbAttribute = QNetworkRequest::CustomVerbAttribute,   CookieLoadControlAttribute = QNetworkRequest::CookieLoadControlAttribute,   AuthenticationReuseAttribute = QNetworkRequest::AuthenticationReuseAttribute,   CookieSaveControlAttribute = QNetworkRequest::CookieSaveControlAttribute,   MaximumDownloadBufferSizeAttribute = QNetworkRequest::MaximumDownloadBufferSizeAttribute,   DownloadBufferAttribute = QNetworkRequest::DownloadBufferAttribute,   SynchronousRequestAttribute = QNetworkRequest::SynchronousRequestAttribute,   BackgroundRequestAttribute = QNetworkRequest::BackgroundRequestAttribute,   EmitAllUploadProgressSignalsAttribute = QNetworkRequest::EmitAllUploadProgressSignalsAttribute,   Http2AllowedAttribute = QNetworkRequest::Http2AllowedAttribute,   Http2WasUsedAttribute = QNetworkRequest::Http2WasUsedAttribute,   OriginalContentLengthAttribute = QNetworkRequest::OriginalContentLengthAttribute,   RedirectPolicyAttribute = QNetworkRequest::RedirectPolicyAttribute,   Http2DirectAttribute = QNetworkRequest::Http2DirectAttribute,   ResourceTypeAttribute = QNetworkRequest::ResourceTypeAttribute,   AutoDeleteReplyOnFinishAttribute = QNetworkRequest::AutoDeleteReplyOnFinishAttribute,   ConnectionCacheExpiryTimeoutSecondsAttribute = QNetworkRequest::ConnectionCacheExpiryTimeoutSecondsAttribute,   Http2CleartextAllowedAttribute = QNetworkRequest::Http2CleartextAllowedAttribute,   UseCredentialsAttribute = QNetworkRequest::UseCredentialsAttribute,   FullLocalServerNameAttribute = QNetworkRequest::FullLocalServerNameAttribute,   User = QNetworkRequest::User,   UserMax = QNetworkRequest::UserMax};
enum CacheLoadControl{
  AlwaysNetwork = QNetworkRequest::AlwaysNetwork,   PreferNetwork = QNetworkRequest::PreferNetwork,   PreferCache = QNetworkRequest::PreferCache,   AlwaysCache = QNetworkRequest::AlwaysCache};
enum KnownHeaders{
  ContentTypeHeader = QNetworkRequest::ContentTypeHeader,   ContentLengthHeader = QNetworkRequest::ContentLengthHeader,   LocationHeader = QNetworkRequest::LocationHeader,   LastModifiedHeader = QNetworkRequest::LastModifiedHeader,   CookieHeader = QNetworkRequest::CookieHeader,   SetCookieHeader = QNetworkRequest::SetCookieHeader,   ContentDispositionHeader = QNetworkRequest::ContentDispositionHeader,   UserAgentHeader = QNetworkRequest::UserAgentHeader,   ServerHeader = QNetworkRequest::ServerHeader,   IfModifiedSinceHeader = QNetworkRequest::IfModifiedSinceHeader,   ETagHeader = QNetworkRequest::ETagHeader,   IfMatchHeader = QNetworkRequest::IfMatchHeader,   IfNoneMatchHeader = QNetworkRequest::IfNoneMatchHeader,   NumKnownHeaders = QNetworkRequest::NumKnownHeaders};
enum LoadControl{
  Automatic = QNetworkRequest::Automatic,   Manual = QNetworkRequest::Manual};
enum Priority{
  HighPriority = QNetworkRequest::HighPriority,   NormalPriority = QNetworkRequest::NormalPriority,   LowPriority = QNetworkRequest::LowPriority};
enum RedirectPolicy{
  ManualRedirectPolicy = QNetworkRequest::ManualRedirectPolicy,   NoLessSafeRedirectPolicy = QNetworkRequest::NoLessSafeRedirectPolicy,   SameOriginRedirectPolicy = QNetworkRequest::SameOriginRedirectPolicy,   UserVerifiedRedirectPolicy = QNetworkRequest::UserVerifiedRedirectPolicy};
enum TransferTimeoutConstant{
  DefaultTransferTimeoutConstant = QNetworkRequest::DefaultTransferTimeoutConstant};
public Q_SLOTS:
QNetworkRequest* new_QNetworkRequest();
QNetworkRequest* new_QNetworkRequest(const QNetworkRequest&  other);
QNetworkRequest* new_QNetworkRequest(const QUrl&  url);
void delete_QNetworkRequest(QNetworkRequest* obj) { delete obj; }
   QVariant  attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue = QVariant()) const;
   qint64  decompressedSafetyCheckThreshold(QNetworkRequest* theWrappedObject) const;
   bool  hasRawHeader(QNetworkRequest* theWrappedObject, QAnyStringView  headerName) const;
   QVariant  header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   QHttpHeaders  headers(QNetworkRequest* theWrappedObject) const;
   QHttp1Configuration  http1Configuration(QNetworkRequest* theWrappedObject) const;
   QHttp2Configuration  http2Configuration(QNetworkRequest* theWrappedObject) const;
   int  maximumRedirectsAllowed(QNetworkRequest* theWrappedObject) const;
   bool  __ne__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   bool  __eq__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   QObject*  originatingObject(QNetworkRequest* theWrappedObject) const;
   QString  peerVerifyName(QNetworkRequest* theWrappedObject) const;
   QNetworkRequest::Priority  priority(QNetworkRequest* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkRequest* theWrappedObject, QAnyStringView  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkRequest* theWrappedObject) const;
   void setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   void setDecompressedSafetyCheckThreshold(QNetworkRequest* theWrappedObject, qint64  threshold);
   void setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setHeaders(QNetworkRequest* theWrappedObject, const QHttpHeaders&  newHeaders);
   void setHttp1Configuration(QNetworkRequest* theWrappedObject, const QHttp1Configuration&  configuration);
   void setHttp2Configuration(QNetworkRequest* theWrappedObject, const QHttp2Configuration&  configuration);
   void setMaximumRedirectsAllowed(QNetworkRequest* theWrappedObject, int  maximumRedirectsAllowed);
   void setOriginatingObject(QNetworkRequest* theWrappedObject, QObject*  object);
   void setPeerVerifyName(QNetworkRequest* theWrappedObject, const QString&  peerName);
   void setPriority(QNetworkRequest* theWrappedObject, QNetworkRequest::Priority  priority);
   void setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setSslConfiguration(QNetworkRequest* theWrappedObject, const QSslConfiguration&  configuration);
   void setTcpKeepAliveProbeCount(QNetworkRequest* theWrappedObject, int  probes);
   void setTransferTimeout(QNetworkRequest* theWrappedObject, int  timeout);
   void setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url);
   QSslConfiguration  sslConfiguration(QNetworkRequest* theWrappedObject) const;
   void swap(QNetworkRequest* theWrappedObject, QNetworkRequest&  other);
   int  tcpKeepAliveProbeCount(QNetworkRequest* theWrappedObject) const;
   int  transferTimeout(QNetworkRequest* theWrappedObject) const;
   QUrl  url(QNetworkRequest* theWrappedObject) const;
};





class PythonQtWrapper_QNetworkRequestFactory : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QNetworkRequestFactory* new_QNetworkRequestFactory();
QNetworkRequestFactory* new_QNetworkRequestFactory(const QNetworkRequestFactory&  other);
QNetworkRequestFactory* new_QNetworkRequestFactory(const QUrl&  baseUrl);
void delete_QNetworkRequestFactory(QNetworkRequestFactory* obj) { delete obj; }
   QVariant  attribute(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Attribute  attribute) const;
   QVariant  attribute(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Attribute  attribute, const QVariant&  defaultValue) const;
   QUrl  baseUrl(QNetworkRequestFactory* theWrappedObject) const;
   QByteArray  bearerToken(QNetworkRequestFactory* theWrappedObject) const;
   void clearAttribute(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Attribute  attribute);
   void clearAttributes(QNetworkRequestFactory* theWrappedObject);
   void clearBearerToken(QNetworkRequestFactory* theWrappedObject);
   void clearCommonHeaders(QNetworkRequestFactory* theWrappedObject);
   void clearPassword(QNetworkRequestFactory* theWrappedObject);
   void clearQueryParameters(QNetworkRequestFactory* theWrappedObject);
   void clearUserName(QNetworkRequestFactory* theWrappedObject);
   QHttpHeaders  commonHeaders(QNetworkRequestFactory* theWrappedObject) const;
   QNetworkRequest  createRequest(QNetworkRequestFactory* theWrappedObject) const;
   QNetworkRequest  createRequest(QNetworkRequestFactory* theWrappedObject, const QString&  path) const;
   QNetworkRequest  createRequest(QNetworkRequestFactory* theWrappedObject, const QString&  path, const QUrlQuery&  query) const;
   QNetworkRequest  createRequest(QNetworkRequestFactory* theWrappedObject, const QUrlQuery&  query) const;
   QNetworkRequestFactory*  operator_assign(QNetworkRequestFactory* theWrappedObject, const QNetworkRequestFactory&  other);
   QString  password(QNetworkRequestFactory* theWrappedObject) const;
   QNetworkRequest::Priority  priority(QNetworkRequestFactory* theWrappedObject) const;
   QUrlQuery  queryParameters(QNetworkRequestFactory* theWrappedObject) const;
   void setAttribute(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Attribute  attribute, const QVariant&  value);
   void setBaseUrl(QNetworkRequestFactory* theWrappedObject, const QUrl&  url);
   void setBearerToken(QNetworkRequestFactory* theWrappedObject, const QByteArray&  token);
   void setCommonHeaders(QNetworkRequestFactory* theWrappedObject, const QHttpHeaders&  headers);
   void setPassword(QNetworkRequestFactory* theWrappedObject, const QString&  password);
   void setPriority(QNetworkRequestFactory* theWrappedObject, QNetworkRequest::Priority  priority);
   void setQueryParameters(QNetworkRequestFactory* theWrappedObject, const QUrlQuery&  query);
   void setSslConfiguration(QNetworkRequestFactory* theWrappedObject, const QSslConfiguration&  configuration);
   void setUserName(QNetworkRequestFactory* theWrappedObject, const QString&  userName);
   QSslConfiguration  sslConfiguration(QNetworkRequestFactory* theWrappedObject) const;
   void swap(QNetworkRequestFactory* theWrappedObject, QNetworkRequestFactory&  other);
   QString  userName(QNetworkRequestFactory* theWrappedObject) const;
    QString py_toString(QNetworkRequestFactory*);
};





class PythonQtWrapper_QOcspResponse : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QOcspResponse* new_QOcspResponse();
QOcspResponse* new_QOcspResponse(const QOcspResponse&  other);
void delete_QOcspResponse(QOcspResponse* obj) { delete obj; }
   QOcspCertificateStatus  certificateStatus(QOcspResponse* theWrappedObject) const;
   bool  __ne__(QOcspResponse* theWrappedObject, const QOcspResponse&  rhs);
   QOcspResponse*  operator_assign(QOcspResponse* theWrappedObject, const QOcspResponse&  other);
   bool  __eq__(QOcspResponse* theWrappedObject, const QOcspResponse&  rhs);
   QSslCertificate  responder(QOcspResponse* theWrappedObject) const;
   QOcspRevocationReason  revocationReason(QOcspResponse* theWrappedObject) const;
   QSslCertificate  subject(QOcspResponse* theWrappedObject) const;
   void swap(QOcspResponse* theWrappedObject, QOcspResponse&  other);
};





class PythonQtShell_QRestAccessManager : public QRestAccessManager
{
public:
    PythonQtShell_QRestAccessManager(QNetworkAccessManager*  manager, QObject*  parent = nullptr):QRestAccessManager(manager, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QRestAccessManager() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QRestAccessManager : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRestAccessManager* new_QRestAccessManager(QNetworkAccessManager*  manager, QObject*  parent = nullptr);
void delete_QRestAccessManager(QRestAccessManager* obj) { delete obj; }
   QNetworkReply*  deleteResource(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  get(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  get(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  get(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  get(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QJsonDocument&  data);
   QNetworkReply*  head(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkAccessManager*  networkAccessManager(QRestAccessManager* theWrappedObject) const;
   QNetworkReply*  patch(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  patch(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  patch(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QJsonDocument&  data);
   QNetworkReply*  patch(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QMap<QString , QVariant >&  data);
   QNetworkReply*  post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  data);
   QNetworkReply*  post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QJsonDocument&  data);
   QNetworkReply*  post(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QMap<QString , QVariant >&  data);
   QNetworkReply*  put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  data);
   QNetworkReply*  put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QJsonDocument&  data);
   QNetworkReply*  put(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QMap<QString , QVariant >&  data);
   QNetworkReply*  sendCustomRequest(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  method, QHttpMultiPart*  data);
   QNetworkReply*  sendCustomRequest(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  method, QIODevice*  data);
   QNetworkReply*  sendCustomRequest(QRestAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  method, const QByteArray&  data);
};





class PythonQtWrapper_QRestReply : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QRestReply* new_QRestReply(QNetworkReply*  reply);
void delete_QRestReply(QRestReply* obj) { delete obj; }
   QNetworkReply::NetworkError  error(QRestReply* theWrappedObject) const;
   QString  errorString(QRestReply* theWrappedObject) const;
   bool  hasError(QRestReply* theWrappedObject) const;
   int  httpStatus(QRestReply* theWrappedObject) const;
   bool  isHttpStatusSuccess(QRestReply* theWrappedObject) const;
   bool  isSuccess(QRestReply* theWrappedObject) const;
   QNetworkReply*  networkReply(QRestReply* theWrappedObject) const;
   QByteArray  readBody(QRestReply* theWrappedObject);
   QString  readText(QRestReply* theWrappedObject);
   void swap(QRestReply* theWrappedObject, QRestReply&  other);
    QString py_toString(QRestReply*);
};





#ifndef QT_NO_SSL
class PythonQtWrapper_QSsl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AlertLevel AlertType AlternativeNameEntryType EncodingFormat ImplementedClass KeyAlgorithm KeyType SslOption SslProtocol SupportedFeature )
Q_FLAGS(SslOptions )
enum class AlertLevel{
  Warning = static_cast<int>(QSsl::AlertLevel::Warning),   Fatal = static_cast<int>(QSsl::AlertLevel::Fatal),   Unknown = static_cast<int>(QSsl::AlertLevel::Unknown)};
enum class AlertType{
  CloseNotify = static_cast<int>(QSsl::AlertType::CloseNotify),   UnexpectedMessage = static_cast<int>(QSsl::AlertType::UnexpectedMessage),   BadRecordMac = static_cast<int>(QSsl::AlertType::BadRecordMac),   RecordOverflow = static_cast<int>(QSsl::AlertType::RecordOverflow),   DecompressionFailure = static_cast<int>(QSsl::AlertType::DecompressionFailure),   HandshakeFailure = static_cast<int>(QSsl::AlertType::HandshakeFailure),   NoCertificate = static_cast<int>(QSsl::AlertType::NoCertificate),   BadCertificate = static_cast<int>(QSsl::AlertType::BadCertificate),   UnsupportedCertificate = static_cast<int>(QSsl::AlertType::UnsupportedCertificate),   CertificateRevoked = static_cast<int>(QSsl::AlertType::CertificateRevoked),   CertificateExpired = static_cast<int>(QSsl::AlertType::CertificateExpired),   CertificateUnknown = static_cast<int>(QSsl::AlertType::CertificateUnknown),   IllegalParameter = static_cast<int>(QSsl::AlertType::IllegalParameter),   UnknownCa = static_cast<int>(QSsl::AlertType::UnknownCa),   AccessDenied = static_cast<int>(QSsl::AlertType::AccessDenied),   DecodeError = static_cast<int>(QSsl::AlertType::DecodeError),   DecryptError = static_cast<int>(QSsl::AlertType::DecryptError),   ExportRestriction = static_cast<int>(QSsl::AlertType::ExportRestriction),   ProtocolVersion = static_cast<int>(QSsl::AlertType::ProtocolVersion),   InsufficientSecurity = static_cast<int>(QSsl::AlertType::InsufficientSecurity),   InternalError = static_cast<int>(QSsl::AlertType::InternalError),   InappropriateFallback = static_cast<int>(QSsl::AlertType::InappropriateFallback),   UserCancelled = static_cast<int>(QSsl::AlertType::UserCancelled),   NoRenegotiation = static_cast<int>(QSsl::AlertType::NoRenegotiation),   MissingExtension = static_cast<int>(QSsl::AlertType::MissingExtension),   UnsupportedExtension = static_cast<int>(QSsl::AlertType::UnsupportedExtension),   CertificateUnobtainable = static_cast<int>(QSsl::AlertType::CertificateUnobtainable),   UnrecognizedName = static_cast<int>(QSsl::AlertType::UnrecognizedName),   BadCertificateStatusResponse = static_cast<int>(QSsl::AlertType::BadCertificateStatusResponse),   BadCertificateHashValue = static_cast<int>(QSsl::AlertType::BadCertificateHashValue),   UnknownPskIdentity = static_cast<int>(QSsl::AlertType::UnknownPskIdentity),   CertificateRequired = static_cast<int>(QSsl::AlertType::CertificateRequired),   NoApplicationProtocol = static_cast<int>(QSsl::AlertType::NoApplicationProtocol),   UnknownAlertMessage = static_cast<int>(QSsl::AlertType::UnknownAlertMessage)};
enum AlternativeNameEntryType{
  EmailEntry = QSsl::EmailEntry,   DnsEntry = QSsl::DnsEntry,   IpAddressEntry = QSsl::IpAddressEntry};
enum EncodingFormat{
  Pem = QSsl::Pem,   Der = QSsl::Der};
enum class ImplementedClass{
  Key = static_cast<int>(QSsl::ImplementedClass::Key),   Certificate = static_cast<int>(QSsl::ImplementedClass::Certificate),   Socket = static_cast<int>(QSsl::ImplementedClass::Socket),   DiffieHellman = static_cast<int>(QSsl::ImplementedClass::DiffieHellman),   EllipticCurve = static_cast<int>(QSsl::ImplementedClass::EllipticCurve),   Dtls = static_cast<int>(QSsl::ImplementedClass::Dtls),   DtlsCookie = static_cast<int>(QSsl::ImplementedClass::DtlsCookie)};
enum KeyAlgorithm{
  Opaque = QSsl::Opaque,   Rsa = QSsl::Rsa,   Dsa = QSsl::Dsa,   Ec = QSsl::Ec,   Dh = QSsl::Dh,   MlDsa = QSsl::MlDsa};
enum KeyType{
  PrivateKey = QSsl::PrivateKey,   PublicKey = QSsl::PublicKey};
enum SslOption{
  SslOptionDisableEmptyFragments = QSsl::SslOptionDisableEmptyFragments,   SslOptionDisableSessionTickets = QSsl::SslOptionDisableSessionTickets,   SslOptionDisableCompression = QSsl::SslOptionDisableCompression,   SslOptionDisableServerNameIndication = QSsl::SslOptionDisableServerNameIndication,   SslOptionDisableLegacyRenegotiation = QSsl::SslOptionDisableLegacyRenegotiation,   SslOptionDisableSessionSharing = QSsl::SslOptionDisableSessionSharing,   SslOptionDisableSessionPersistence = QSsl::SslOptionDisableSessionPersistence,   SslOptionDisableServerCipherPreference = QSsl::SslOptionDisableServerCipherPreference};
enum SslProtocol{
  TlsV1_0 = QSsl::TlsV1_0,   TlsV1_1 = QSsl::TlsV1_1,   TlsV1_2 = QSsl::TlsV1_2,   AnyProtocol = QSsl::AnyProtocol,   SecureProtocols = QSsl::SecureProtocols,   TlsV1_0OrLater = QSsl::TlsV1_0OrLater,   TlsV1_1OrLater = QSsl::TlsV1_1OrLater,   TlsV1_2OrLater = QSsl::TlsV1_2OrLater,   DtlsV1_0 = QSsl::DtlsV1_0,   DtlsV1_0OrLater = QSsl::DtlsV1_0OrLater,   DtlsV1_2 = QSsl::DtlsV1_2,   DtlsV1_2OrLater = QSsl::DtlsV1_2OrLater,   TlsV1_3 = QSsl::TlsV1_3,   TlsV1_3OrLater = QSsl::TlsV1_3OrLater,   UnknownProtocol = QSsl::UnknownProtocol};
enum class SupportedFeature{
  CertificateVerification = static_cast<int>(QSsl::SupportedFeature::CertificateVerification),   ClientSideAlpn = static_cast<int>(QSsl::SupportedFeature::ClientSideAlpn),   ServerSideAlpn = static_cast<int>(QSsl::SupportedFeature::ServerSideAlpn),   Ocsp = static_cast<int>(QSsl::SupportedFeature::Ocsp),   Psk = static_cast<int>(QSsl::SupportedFeature::Psk),   SessionTicket = static_cast<int>(QSsl::SupportedFeature::SessionTicket),   Alerts = static_cast<int>(QSsl::SupportedFeature::Alerts)};
Q_DECLARE_FLAGS(SslOptions, SslOption)
public Q_SLOTS:
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslCertificate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PatternSyntax SubjectInfo )
enum class PatternSyntax{
  RegularExpression = static_cast<int>(QSslCertificate::PatternSyntax::RegularExpression),   Wildcard = static_cast<int>(QSslCertificate::PatternSyntax::Wildcard),   FixedString = static_cast<int>(QSslCertificate::PatternSyntax::FixedString)};
enum SubjectInfo{
  Organization = QSslCertificate::Organization,   CommonName = QSslCertificate::CommonName,   LocalityName = QSslCertificate::LocalityName,   OrganizationalUnitName = QSslCertificate::OrganizationalUnitName,   CountryName = QSslCertificate::CountryName,   StateOrProvinceName = QSslCertificate::StateOrProvinceName,   DistinguishedNameQualifier = QSslCertificate::DistinguishedNameQualifier,   SerialNumber = QSslCertificate::SerialNumber,   EmailAddress = QSslCertificate::EmailAddress};
public Q_SLOTS:
QSslCertificate* new_QSslCertificate(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
QSslCertificate* new_QSslCertificate(const QByteArray&  data = QByteArray(), QSsl::EncodingFormat  format = QSsl::Pem);
QSslCertificate* new_QSslCertificate(const QSslCertificate&  other);
void delete_QSslCertificate(QSslCertificate* obj) { delete obj; }
   void clear(QSslCertificate* theWrappedObject);
   QByteArray  digest(QSslCertificate* theWrappedObject, QCryptographicHash::Algorithm  algorithm = QCryptographicHash::Md5) const;
   QDateTime  effectiveDate(QSslCertificate* theWrappedObject) const;
   QDateTime  expiryDate(QSslCertificate* theWrappedObject) const;
   QList<QSslCertificateExtension >  extensions(QSslCertificate* theWrappedObject) const;
   QList<QSslCertificate >  static_QSslCertificate_fromData(const QByteArray&  data, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromDevice(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromFile(const QString&  filePath, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromPath(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QSslCertificate::PatternSyntax  syntax = QSslCertificate::PatternSyntax::FixedString);
   Qt::HANDLE  handle(QSslCertificate* theWrappedObject) const;
   bool  static_QSslCertificate_importPkcs12(QIODevice*  device, QSslKey*  key, QSslCertificate*  cert, QList<QSslCertificate >*  caCertificates = nullptr, const QByteArray&  passPhrase = QByteArray());
   bool  isBlacklisted(QSslCertificate* theWrappedObject) const;
   bool  isNull(QSslCertificate* theWrappedObject) const;
   bool  isSelfSigned(QSslCertificate* theWrappedObject) const;
   QString  issuerDisplayName(QSslCertificate* theWrappedObject) const;
   QStringList  issuerInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const;
   QStringList  issuerInfo(QSslCertificate* theWrappedObject, const QByteArray&  attribute) const;
   QList<QByteArray >  issuerInfoAttributes(QSslCertificate* theWrappedObject) const;
   bool  __ne__(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const;
   QSslCertificate*  operator_assign(QSslCertificate* theWrappedObject, const QSslCertificate&  other);
   bool  __eq__(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const;
   QSslKey  publicKey(QSslCertificate* theWrappedObject) const;
   QByteArray  serialNumber(QSslCertificate* theWrappedObject) const;
   QMultiMap<QSsl::AlternativeNameEntryType , QString >  subjectAlternativeNames(QSslCertificate* theWrappedObject) const;
   QString  subjectDisplayName(QSslCertificate* theWrappedObject) const;
   QStringList  subjectInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const;
   QStringList  subjectInfo(QSslCertificate* theWrappedObject, const QByteArray&  attribute) const;
   QList<QByteArray >  subjectInfoAttributes(QSslCertificate* theWrappedObject) const;
   void swap(QSslCertificate* theWrappedObject, QSslCertificate&  other);
   QByteArray  toDer(QSslCertificate* theWrappedObject) const;
   QByteArray  toPem(QSslCertificate* theWrappedObject) const;
   QString  toText(QSslCertificate* theWrappedObject) const;
   QList<QSslError >  static_QSslCertificate_verify(const QList<QSslCertificate >&  certificateChain, const QString&  hostName = QString());
   QByteArray  version(QSslCertificate* theWrappedObject) const;
    QString py_toString(QSslCertificate*);
    bool __nonzero__(QSslCertificate* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslCertificateExtension : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSslCertificateExtension* new_QSslCertificateExtension();
QSslCertificateExtension* new_QSslCertificateExtension(const QSslCertificateExtension&  other);
void delete_QSslCertificateExtension(QSslCertificateExtension* obj) { delete obj; }
   bool  isCritical(QSslCertificateExtension* theWrappedObject) const;
   bool  isSupported(QSslCertificateExtension* theWrappedObject) const;
   QString  name(QSslCertificateExtension* theWrappedObject) const;
   QString  oid(QSslCertificateExtension* theWrappedObject) const;
   QSslCertificateExtension*  operator_assign(QSslCertificateExtension* theWrappedObject, const QSslCertificateExtension&  other);
   void swap(QSslCertificateExtension* theWrappedObject, QSslCertificateExtension&  other);
   QVariant  value(QSslCertificateExtension* theWrappedObject) const;
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslCipher : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSslCipher* new_QSslCipher();
QSslCipher* new_QSslCipher(const QSslCipher&  other);
QSslCipher* new_QSslCipher(const QString&  name);
QSslCipher* new_QSslCipher(const QString&  name, QSsl::SslProtocol  protocol);
void delete_QSslCipher(QSslCipher* obj) { delete obj; }
   QString  authenticationMethod(QSslCipher* theWrappedObject) const;
   QString  encryptionMethod(QSslCipher* theWrappedObject) const;
   bool  isNull(QSslCipher* theWrappedObject) const;
   QString  keyExchangeMethod(QSslCipher* theWrappedObject) const;
   QString  name(QSslCipher* theWrappedObject) const;
   bool  __ne__(QSslCipher* theWrappedObject, const QSslCipher&  other) const;
   QSslCipher*  operator_assign(QSslCipher* theWrappedObject, const QSslCipher&  other);
   bool  __eq__(QSslCipher* theWrappedObject, const QSslCipher&  other) const;
   QSsl::SslProtocol  protocol(QSslCipher* theWrappedObject) const;
   QString  protocolString(QSslCipher* theWrappedObject) const;
   int  supportedBits(QSslCipher* theWrappedObject) const;
   void swap(QSslCipher* theWrappedObject, QSslCipher&  other);
   int  usedBits(QSslCipher* theWrappedObject) const;
    QString py_toString(QSslCipher*);
    bool __nonzero__(QSslCipher* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_SSL
class PythonQtShell_QSslConfiguration : public QSslConfiguration
{
public:
    PythonQtShell_QSslConfiguration():QSslConfiguration(),_wrapper(nullptr) {};
    PythonQtShell_QSslConfiguration(const QSslConfiguration&  other):QSslConfiguration(other),_wrapper(nullptr) {};

   ~PythonQtShell_QSslConfiguration();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSslConfiguration : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NextProtocolNegotiationStatus )
enum NextProtocolNegotiationStatus{
  NextProtocolNegotiationNone = QSslConfiguration::NextProtocolNegotiationNone,   NextProtocolNegotiationNegotiated = QSslConfiguration::NextProtocolNegotiationNegotiated,   NextProtocolNegotiationUnsupported = QSslConfiguration::NextProtocolNegotiationUnsupported};
public Q_SLOTS:
QSslConfiguration* new_QSslConfiguration();
QSslConfiguration* new_QSslConfiguration(const QSslConfiguration&  other);
void delete_QSslConfiguration(QSslConfiguration* obj) { delete obj; }
   void addCaCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate);
   void addCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates);
   bool  addCaCertificates(QSslConfiguration* theWrappedObject, const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QSslCertificate::PatternSyntax  syntax = QSslCertificate::PatternSyntax::FixedString);
   QList<QByteArray >  allowedNextProtocols(QSslConfiguration* theWrappedObject) const;
   QMap<QByteArray , QVariant >  backendConfiguration(QSslConfiguration* theWrappedObject) const;
   QList<QSslCertificate >  caCertificates(QSslConfiguration* theWrappedObject) const;
   QList<QSslCipher >  ciphers(QSslConfiguration* theWrappedObject) const;
   QSslConfiguration  static_QSslConfiguration_defaultConfiguration();
   QSslConfiguration  static_QSslConfiguration_defaultDtlsConfiguration();
   QSslDiffieHellmanParameters  diffieHellmanParameters(QSslConfiguration* theWrappedObject) const;
   bool  dtlsCookieVerificationEnabled(QSslConfiguration* theWrappedObject) const;
   QList<QSslEllipticCurve >  ellipticCurves(QSslConfiguration* theWrappedObject) const;
   QSslKey  ephemeralServerKey(QSslConfiguration* theWrappedObject) const;
   bool  handshakeMustInterruptOnError(QSslConfiguration* theWrappedObject) const;
   bool  isNull(QSslConfiguration* theWrappedObject) const;
   QSslCertificate  localCertificate(QSslConfiguration* theWrappedObject) const;
   QList<QSslCertificate >  localCertificateChain(QSslConfiguration* theWrappedObject) const;
   bool  missingCertificateIsFatal(QSslConfiguration* theWrappedObject) const;
   QByteArray  nextNegotiatedProtocol(QSslConfiguration* theWrappedObject) const;
   QSslConfiguration::NextProtocolNegotiationStatus  nextProtocolNegotiationStatus(QSslConfiguration* theWrappedObject) const;
   bool  ocspStaplingEnabled(QSslConfiguration* theWrappedObject) const;
   bool  __ne__(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const;
   QSslConfiguration*  operator_assign(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other);
   bool  __eq__(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const;
   QSslCertificate  peerCertificate(QSslConfiguration* theWrappedObject) const;
   QList<QSslCertificate >  peerCertificateChain(QSslConfiguration* theWrappedObject) const;
   int  peerVerifyDepth(QSslConfiguration* theWrappedObject) const;
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslConfiguration* theWrappedObject) const;
   QByteArray  preSharedKeyIdentityHint(QSslConfiguration* theWrappedObject) const;
   QSslKey  privateKey(QSslConfiguration* theWrappedObject) const;
   QSsl::SslProtocol  protocol(QSslConfiguration* theWrappedObject) const;
   QSslCipher  sessionCipher(QSslConfiguration* theWrappedObject) const;
   QSsl::SslProtocol  sessionProtocol(QSslConfiguration* theWrappedObject) const;
   QByteArray  sessionTicket(QSslConfiguration* theWrappedObject) const;
   int  sessionTicketLifeTimeHint(QSslConfiguration* theWrappedObject) const;
   void setAllowedNextProtocols(QSslConfiguration* theWrappedObject, const QList<QByteArray >&  protocols);
   void setBackendConfiguration(QSslConfiguration* theWrappedObject, const QMap<QByteArray , QVariant >&  backendConfiguration = QMap<QByteArray,QVariant>());
   void setBackendConfigurationOption(QSslConfiguration* theWrappedObject, const QByteArray&  name, const QVariant&  value);
   void setCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates);
   void setCiphers(QSslConfiguration* theWrappedObject, const QList<QSslCipher >&  ciphers);
   void setCiphers(QSslConfiguration* theWrappedObject, const QString&  ciphers);
   void static_QSslConfiguration_setDefaultConfiguration(const QSslConfiguration&  configuration);
   void static_QSslConfiguration_setDefaultDtlsConfiguration(const QSslConfiguration&  configuration);
   void setDiffieHellmanParameters(QSslConfiguration* theWrappedObject, const QSslDiffieHellmanParameters&  dhparams);
   void setDtlsCookieVerificationEnabled(QSslConfiguration* theWrappedObject, bool  enable);
   void setEllipticCurves(QSslConfiguration* theWrappedObject, const QList<QSslEllipticCurve >&  curves);
   void setHandshakeMustInterruptOnError(QSslConfiguration* theWrappedObject, bool  interrupt);
   void setLocalCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate);
   void setLocalCertificateChain(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  localChain);
   void setMissingCertificateIsFatal(QSslConfiguration* theWrappedObject, bool  cannotRecover);
   void setOcspStaplingEnabled(QSslConfiguration* theWrappedObject, bool  enable);
   void setPeerVerifyDepth(QSslConfiguration* theWrappedObject, int  depth);
   void setPeerVerifyMode(QSslConfiguration* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   void setPreSharedKeyIdentityHint(QSslConfiguration* theWrappedObject, const QByteArray&  hint);
   void setPrivateKey(QSslConfiguration* theWrappedObject, const QSslKey&  key);
   void setProtocol(QSslConfiguration* theWrappedObject, QSsl::SslProtocol  protocol);
   void setSessionTicket(QSslConfiguration* theWrappedObject, const QByteArray&  sessionTicket);
   void setSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option, bool  on);
   QList<QSslCipher >  static_QSslConfiguration_supportedCiphers();
   QList<QSslEllipticCurve >  static_QSslConfiguration_supportedEllipticCurves();
   void swap(QSslConfiguration* theWrappedObject, QSslConfiguration&  other);
   QList<QSslCertificate >  static_QSslConfiguration_systemCaCertificates();
   bool  testSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option) const;
    bool __nonzero__(QSslConfiguration* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslDiffieHellmanParameters : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error )
enum Error{
  NoError = QSslDiffieHellmanParameters::NoError,   InvalidInputDataError = QSslDiffieHellmanParameters::InvalidInputDataError,   UnsafeParametersError = QSslDiffieHellmanParameters::UnsafeParametersError};
public Q_SLOTS:
QSslDiffieHellmanParameters* new_QSslDiffieHellmanParameters();
QSslDiffieHellmanParameters* new_QSslDiffieHellmanParameters(const QSslDiffieHellmanParameters&  other);
void delete_QSslDiffieHellmanParameters(QSslDiffieHellmanParameters* obj) { delete obj; }
   QSslDiffieHellmanParameters  static_QSslDiffieHellmanParameters_defaultParameters();
   QSslDiffieHellmanParameters::Error  error(QSslDiffieHellmanParameters* theWrappedObject) const;
   QString  errorString(QSslDiffieHellmanParameters* theWrappedObject) const;
   QSslDiffieHellmanParameters  static_QSslDiffieHellmanParameters_fromEncoded(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
   QSslDiffieHellmanParameters  static_QSslDiffieHellmanParameters_fromEncoded(const QByteArray&  encoded, QSsl::EncodingFormat  format = QSsl::Pem);
   bool  isEmpty(QSslDiffieHellmanParameters* theWrappedObject) const;
   bool  isValid(QSslDiffieHellmanParameters* theWrappedObject) const;
   bool  __ne__(QSslDiffieHellmanParameters* theWrappedObject, const QSslDiffieHellmanParameters&  rhs);
   QSslDiffieHellmanParameters*  operator_assign(QSslDiffieHellmanParameters* theWrappedObject, const QSslDiffieHellmanParameters&  other);
   bool  __eq__(QSslDiffieHellmanParameters* theWrappedObject, const QSslDiffieHellmanParameters&  rhs);
   void swap(QSslDiffieHellmanParameters* theWrappedObject, QSslDiffieHellmanParameters&  other);
    QString py_toString(QSslDiffieHellmanParameters*);
    bool __nonzero__(QSslDiffieHellmanParameters* obj) { return !obj->isEmpty(); }
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslEllipticCurve : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSslEllipticCurve* new_QSslEllipticCurve();
void delete_QSslEllipticCurve(QSslEllipticCurve* obj) { delete obj; }
   QSslEllipticCurve  static_QSslEllipticCurve_fromLongName(const QString&  name);
   QSslEllipticCurve  static_QSslEllipticCurve_fromShortName(const QString&  name);
   bool  isTlsNamedCurve(QSslEllipticCurve* theWrappedObject) const;
   bool  isValid(QSslEllipticCurve* theWrappedObject) const;
   QString  longName(QSslEllipticCurve* theWrappedObject) const;
   bool  __ne__(QSslEllipticCurve* theWrappedObject, QSslEllipticCurve  rhs);
   bool  __eq__(QSslEllipticCurve* theWrappedObject, QSslEllipticCurve  rhs);
   QString  shortName(QSslEllipticCurve* theWrappedObject) const;
    QString py_toString(QSslEllipticCurve*);
    bool __nonzero__(QSslEllipticCurve* obj) { return obj->isValid(); }
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SslError )
enum SslError{
  NoError = QSslError::NoError,   UnableToGetIssuerCertificate = QSslError::UnableToGetIssuerCertificate,   UnableToDecryptCertificateSignature = QSslError::UnableToDecryptCertificateSignature,   UnableToDecodeIssuerPublicKey = QSslError::UnableToDecodeIssuerPublicKey,   CertificateSignatureFailed = QSslError::CertificateSignatureFailed,   CertificateNotYetValid = QSslError::CertificateNotYetValid,   CertificateExpired = QSslError::CertificateExpired,   InvalidNotBeforeField = QSslError::InvalidNotBeforeField,   InvalidNotAfterField = QSslError::InvalidNotAfterField,   SelfSignedCertificate = QSslError::SelfSignedCertificate,   SelfSignedCertificateInChain = QSslError::SelfSignedCertificateInChain,   UnableToGetLocalIssuerCertificate = QSslError::UnableToGetLocalIssuerCertificate,   UnableToVerifyFirstCertificate = QSslError::UnableToVerifyFirstCertificate,   CertificateRevoked = QSslError::CertificateRevoked,   InvalidCaCertificate = QSslError::InvalidCaCertificate,   PathLengthExceeded = QSslError::PathLengthExceeded,   InvalidPurpose = QSslError::InvalidPurpose,   CertificateUntrusted = QSslError::CertificateUntrusted,   CertificateRejected = QSslError::CertificateRejected,   SubjectIssuerMismatch = QSslError::SubjectIssuerMismatch,   AuthorityIssuerSerialNumberMismatch = QSslError::AuthorityIssuerSerialNumberMismatch,   NoPeerCertificate = QSslError::NoPeerCertificate,   HostNameMismatch = QSslError::HostNameMismatch,   NoSslSupport = QSslError::NoSslSupport,   CertificateBlacklisted = QSslError::CertificateBlacklisted,   CertificateStatusUnknown = QSslError::CertificateStatusUnknown,   OcspNoResponseFound = QSslError::OcspNoResponseFound,   OcspMalformedRequest = QSslError::OcspMalformedRequest,   OcspMalformedResponse = QSslError::OcspMalformedResponse,   OcspInternalError = QSslError::OcspInternalError,   OcspTryLater = QSslError::OcspTryLater,   OcspSigRequred = QSslError::OcspSigRequred,   OcspUnauthorized = QSslError::OcspUnauthorized,   OcspResponseCannotBeTrusted = QSslError::OcspResponseCannotBeTrusted,   OcspResponseCertIdUnknown = QSslError::OcspResponseCertIdUnknown,   OcspResponseExpired = QSslError::OcspResponseExpired,   OcspStatusUnknown = QSslError::OcspStatusUnknown,   UnspecifiedError = QSslError::UnspecifiedError};
public Q_SLOTS:
QSslError* new_QSslError();
QSslError* new_QSslError(QSslError::SslError  error);
QSslError* new_QSslError(QSslError::SslError  error, const QSslCertificate&  certificate);
QSslError* new_QSslError(const QSslError&  other);
void delete_QSslError(QSslError* obj) { delete obj; }
   QSslCertificate  certificate(QSslError* theWrappedObject) const;
   QSslError::SslError  error(QSslError* theWrappedObject) const;
   QString  errorString(QSslError* theWrappedObject) const;
   bool  __ne__(QSslError* theWrappedObject, const QSslError&  other) const;
   QSslError*  operator_assign(QSslError* theWrappedObject, const QSslError&  other);
   bool  __eq__(QSslError* theWrappedObject, const QSslError&  other) const;
   void swap(QSslError* theWrappedObject, QSslError&  other);
    QString py_toString(QSslError*);
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslKey : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSslKey* new_QSslKey();
QSslKey* new_QSslKey(QIODevice*  device, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format = QSsl::Pem, QSsl::KeyType  type = QSsl::PrivateKey, const QByteArray&  passPhrase = QByteArray());
QSslKey* new_QSslKey(Qt::HANDLE  handle, QSsl::KeyType  type = QSsl::PrivateKey);
QSslKey* new_QSslKey(const QByteArray&  encoded, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format = QSsl::Pem, QSsl::KeyType  type = QSsl::PrivateKey, const QByteArray&  passPhrase = QByteArray());
QSslKey* new_QSslKey(const QSslKey&  other);
void delete_QSslKey(QSslKey* obj) { delete obj; }
   QSsl::KeyAlgorithm  algorithm(QSslKey* theWrappedObject) const;
   void clear(QSslKey* theWrappedObject);
   Qt::HANDLE  handle(QSslKey* theWrappedObject) const;
   bool  isNull(QSslKey* theWrappedObject) const;
   int  length(QSslKey* theWrappedObject) const;
   bool  __ne__(QSslKey* theWrappedObject, const QSslKey&  key) const;
   QSslKey*  operator_assign(QSslKey* theWrappedObject, const QSslKey&  other);
   bool  __eq__(QSslKey* theWrappedObject, const QSslKey&  key) const;
   void swap(QSslKey* theWrappedObject, QSslKey&  other);
   QByteArray  toDer(QSslKey* theWrappedObject, const QByteArray&  passPhrase = QByteArray()) const;
   QByteArray  toPem(QSslKey* theWrappedObject, const QByteArray&  passPhrase = QByteArray()) const;
   QSsl::KeyType  type(QSslKey* theWrappedObject) const;
    QString py_toString(QSslKey*);
    bool __nonzero__(QSslKey* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslPreSharedKeyAuthenticator : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSslPreSharedKeyAuthenticator* new_QSslPreSharedKeyAuthenticator();
QSslPreSharedKeyAuthenticator* new_QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator&  authenticator);
void delete_QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator* obj) { delete obj; }
   QByteArray  identity(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   QByteArray  identityHint(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   int  maximumIdentityLength(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   int  maximumPreSharedKeyLength(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   bool  __ne__(QSslPreSharedKeyAuthenticator* theWrappedObject, const QSslPreSharedKeyAuthenticator&  rhs);
   QSslPreSharedKeyAuthenticator*  operator_assign(QSslPreSharedKeyAuthenticator* theWrappedObject, const QSslPreSharedKeyAuthenticator&  authenticator);
   bool  __eq__(QSslPreSharedKeyAuthenticator* theWrappedObject, const QSslPreSharedKeyAuthenticator&  rhs);
   QByteArray  preSharedKey(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   void setIdentity(QSslPreSharedKeyAuthenticator* theWrappedObject, const QByteArray&  identity);
   void setPreSharedKey(QSslPreSharedKeyAuthenticator* theWrappedObject, const QByteArray&  preSharedKey);
   void swap(QSslPreSharedKeyAuthenticator* theWrappedObject, QSslPreSharedKeyAuthenticator&  other);
};

#endif





#ifndef QT_NO_SSL
class PythonQtShell_QSslServer : public QSslServer
{
public:
    PythonQtShell_QSslServer(QObject*  parent = nullptr):QSslServer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSslServer() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  hasPendingConnections() const override;
void incomingConnection(qintptr  socket) override;
QTcpSocket*  nextPendingConnection() override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSslServer : public QSslServer
{ public:
inline void promoted_incomingConnection(qintptr  socket) { this->incomingConnection(socket); }
inline void py_q_incomingConnection(qintptr  socket) { QSslServer::incomingConnection(socket); }
};

class PythonQtWrapper_QSslServer : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSslServer* new_QSslServer(QObject*  parent = nullptr);
void delete_QSslServer(QSslServer* obj) { delete obj; }
   int  handshakeTimeout(QSslServer* theWrappedObject) const;
   void py_q_incomingConnection(QSslServer* theWrappedObject, qintptr  socket){  (((PythonQtPublicPromoter_QSslServer*)theWrappedObject)->py_q_incomingConnection(socket));}
   void setHandshakeTimeout(QSslServer* theWrappedObject, int  timeout);
   void setSslConfiguration(QSslServer* theWrappedObject, const QSslConfiguration&  sslConfiguration);
   QSslConfiguration  sslConfiguration(QSslServer* theWrappedObject) const;
};

#endif





#ifndef QT_NO_SSL
class PythonQtShell_QSslSocket : public QSslSocket
{
public:
    PythonQtShell_QSslSocket(QObject*  parent = nullptr):QSslSocket(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSslSocket() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void connectToHost(const QString&  hostName, unsigned short  port, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) override;
void customEvent(QEvent*  event) override;
void disconnectFromHost() override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  mode) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
void resume() override;
bool  seek(qint64  pos) override;
void setReadBufferSize(qint64  size) override;
bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite) override;
void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
qintptr  socketDescriptor() const override;
QVariant  socketOption(QAbstractSocket::SocketOption  option) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs = 30000) override;
bool  waitForConnected(int  msecs = 30000) override;
bool  waitForDisconnected(int  msecs = 30000) override;
bool  waitForReadyRead(int  msecs = 30000) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSslSocket : public QSslSocket
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_skipData(qint64  maxSize) { return this->skipData(maxSize); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QSslSocket::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QSslSocket::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QSslSocket::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QSslSocket::canReadLine(); }
inline void py_q_close() { QSslSocket::close(); }
inline void py_q_connectToHost(const QString&  hostName, unsigned short  port, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) { QSslSocket::connectToHost(hostName, port, openMode, protocol); }
inline void py_q_disconnectFromHost() { QSslSocket::disconnectFromHost(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QSslSocket::readData(data, maxlen); }
inline void py_q_resume() { QSslSocket::resume(); }
inline void py_q_setReadBufferSize(qint64  size) { QSslSocket::setReadBufferSize(size); }
inline bool  py_q_setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite) { return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode); }
inline void py_q_setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) { QSslSocket::setSocketOption(option, value); }
inline qint64  py_q_skipData(qint64  maxSize) { return QSslSocket::skipData(maxSize); }
inline QVariant  py_q_socketOption(QAbstractSocket::SocketOption  option) { return QSslSocket::socketOption(option); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QSslSocket::waitForBytesWritten(msecs); }
inline bool  py_q_waitForConnected(int  msecs = 30000) { return QSslSocket::waitForConnected(msecs); }
inline bool  py_q_waitForDisconnected(int  msecs = 30000) { return QSslSocket::waitForDisconnected(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QSslSocket::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QSslSocket::writeData(data, len); }
};

class PythonQtWrapper_QSslSocket : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QSslSocket* new_QSslSocket(QObject*  parent = nullptr);
void delete_QSslSocket(QSslSocket* obj) { delete obj; }
   QString  static_QSslSocket_activeBackend();
   bool  py_q_atEnd(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_atEnd());}
   QList<QString >  static_QSslSocket_availableBackends();
   qint64  py_q_bytesAvailable(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  py_q_bytesToWrite(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_bytesToWrite());}
   bool  py_q_canReadLine(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_close());}
   void py_q_connectToHost(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_connectToHost(hostName, port, openMode, protocol));}
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, const QString&  sslPeerName, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   void continueInterruptedHandshake(QSslSocket* theWrappedObject);
   void py_q_disconnectFromHost(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_disconnectFromHost());}
   qint64  encryptedBytesAvailable(QSslSocket* theWrappedObject) const;
   qint64  encryptedBytesToWrite(QSslSocket* theWrappedObject) const;
   void ignoreSslErrors(QSslSocket* theWrappedObject, const QList<QSslError >&  errors);
   QList<QSsl::ImplementedClass >  static_QSslSocket_implementedClasses(const QString&  backendName = {});
   bool  static_QSslSocket_isClassImplemented(QSsl::ImplementedClass  cl, const QString&  backendName = {});
   bool  isEncrypted(QSslSocket* theWrappedObject) const;
   bool  static_QSslSocket_isFeatureSupported(QSsl::SupportedFeature  feat, const QString&  backendName = {});
   bool  static_QSslSocket_isProtocolSupported(QSsl::SslProtocol  protocol, const QString&  backendName = {});
   QSslCertificate  localCertificate(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  localCertificateChain(QSslSocket* theWrappedObject) const;
   QSslSocket::SslMode  mode(QSslSocket* theWrappedObject) const;
   QList<QOcspResponse >  ocspResponses(QSslSocket* theWrappedObject) const;
   QSslCertificate  peerCertificate(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  peerCertificateChain(QSslSocket* theWrappedObject) const;
   int  peerVerifyDepth(QSslSocket* theWrappedObject) const;
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslSocket* theWrappedObject) const;
   QString  peerVerifyName(QSslSocket* theWrappedObject) const;
   QSslKey  privateKey(QSslSocket* theWrappedObject) const;
   QSsl::SslProtocol  protocol(QSslSocket* theWrappedObject) const;
   qint64  py_q_readData(QSslSocket* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_readData(data, maxlen));}
   void py_q_resume(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_resume());}
   QSslCipher  sessionCipher(QSslSocket* theWrappedObject) const;
   QSsl::SslProtocol  sessionProtocol(QSslSocket* theWrappedObject) const;
   bool  static_QSslSocket_setActiveBackend(const QString&  backendName);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::EncodingFormat  format = QSsl::Pem);
   void setLocalCertificateChain(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  localChain);
   void setPeerVerifyDepth(QSslSocket* theWrappedObject, int  depth);
   void setPeerVerifyMode(QSslSocket* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   void setPeerVerifyName(QSslSocket* theWrappedObject, const QString&  hostName);
   void setPrivateKey(QSslSocket* theWrappedObject, const QSslKey&  key);
   void setPrivateKey(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::KeyAlgorithm  algorithm = QSsl::Rsa, QSsl::EncodingFormat  format = QSsl::Pem, const QByteArray&  passPhrase = QByteArray());
   void setProtocol(QSslSocket* theWrappedObject, QSsl::SslProtocol  protocol);
   void py_q_setReadBufferSize(QSslSocket* theWrappedObject, qint64  size){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setReadBufferSize(size));}
   bool  py_q_setSocketDescriptor(QSslSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setSocketDescriptor(socketDescriptor, state, openMode));}
   void py_q_setSocketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setSocketOption(option, value));}
   void setSslConfiguration(QSslSocket* theWrappedObject, const QSslConfiguration&  config);
   qint64  py_q_skipData(QSslSocket* theWrappedObject, qint64  maxSize){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_skipData(maxSize));}
   QVariant  py_q_socketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_socketOption(option));}
   QSslConfiguration  sslConfiguration(QSslSocket* theWrappedObject) const;
   QList<QSslError >  sslHandshakeErrors(QSslSocket* theWrappedObject) const;
   long  static_QSslSocket_sslLibraryBuildVersionNumber();
   QString  static_QSslSocket_sslLibraryBuildVersionString();
   long  static_QSslSocket_sslLibraryVersionNumber();
   QString  static_QSslSocket_sslLibraryVersionString();
   QList<QSsl::SupportedFeature >  static_QSslSocket_supportedFeatures(const QString&  backendName = {});
   QList<QSsl::SslProtocol >  static_QSslSocket_supportedProtocols(const QString&  backendName = {});
   bool  static_QSslSocket_supportsSsl();
   bool  py_q_waitForBytesWritten(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  py_q_waitForConnected(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForConnected(msecs));}
   bool  py_q_waitForDisconnected(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForDisconnected(msecs));}
   bool  waitForEncrypted(QSslSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForReadyRead(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  py_q_writeData(QSslSocket* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_writeData(data, len));}
    bool __nonzero__(QSslSocket* obj) { return obj->isValid(); }
};

#endif





class PythonQtShell_QTcpServer : public QTcpServer
{
public:
    PythonQtShell_QTcpServer(QObject*  parent = nullptr):QTcpServer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTcpServer() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  hasPendingConnections() const override;
void incomingConnection(qintptr  handle) override;
QTcpSocket*  nextPendingConnection() override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTcpServer : public QTcpServer
{ public:
inline void promoted_addPendingConnection(QTcpSocket*  socket) { this->addPendingConnection(socket); }
inline void promoted_incomingConnection(qintptr  handle) { this->incomingConnection(handle); }
inline bool  py_q_hasPendingConnections() const { return QTcpServer::hasPendingConnections(); }
inline void py_q_incomingConnection(qintptr  handle) { QTcpServer::incomingConnection(handle); }
inline QTcpSocket*  py_q_nextPendingConnection() { return QTcpServer::nextPendingConnection(); }
};

class PythonQtWrapper_QTcpServer : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QTcpServer* new_QTcpServer(QObject*  parent = nullptr);
void delete_QTcpServer(QTcpServer* obj) { delete obj; }
   void addPendingConnection(QTcpServer* theWrappedObject, QTcpSocket*  socket);
   void close(QTcpServer* theWrappedObject);
   QString  errorString(QTcpServer* theWrappedObject) const;
   bool  hasPendingConnections(QTcpServer* theWrappedObject) const;
   bool  py_q_hasPendingConnections(QTcpServer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_hasPendingConnections());}
   void incomingConnection(QTcpServer* theWrappedObject, qintptr  handle);
   void py_q_incomingConnection(QTcpServer* theWrappedObject, qintptr  handle){  (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_incomingConnection(handle));}
   bool  isListening(QTcpServer* theWrappedObject) const;
   bool  listen(QTcpServer* theWrappedObject, const QHostAddress&  address = QHostAddress::Any, unsigned short  port = 0);
   int  listenBacklogSize(QTcpServer* theWrappedObject) const;
   int  maxPendingConnections(QTcpServer* theWrappedObject) const;
   QTcpSocket*  nextPendingConnection(QTcpServer* theWrappedObject);
   QTcpSocket*  py_q_nextPendingConnection(QTcpServer* theWrappedObject){  return (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_nextPendingConnection());}
   void pauseAccepting(QTcpServer* theWrappedObject);
   QNetworkProxy  proxy(QTcpServer* theWrappedObject) const;
   void resumeAccepting(QTcpServer* theWrappedObject);
   QHostAddress  serverAddress(QTcpServer* theWrappedObject) const;
   QAbstractSocket::SocketError  serverError(QTcpServer* theWrappedObject) const;
   unsigned short  serverPort(QTcpServer* theWrappedObject) const;
   void setListenBacklogSize(QTcpServer* theWrappedObject, int  size);
   void setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections);
   void setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy);
   bool  setSocketDescriptor(QTcpServer* theWrappedObject, qintptr  socketDescriptor);
   qintptr  socketDescriptor(QTcpServer* theWrappedObject) const;
   bool  waitForNewConnection(QTcpServer* theWrappedObject, int  msec = 0, bool*  timedOut = nullptr);
};





class PythonQtShell_QTcpSocket : public QTcpSocket
{
public:
    PythonQtShell_QTcpSocket(QObject*  parent = nullptr):QTcpSocket(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTcpSocket() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void connectToHost(const QString&  hostName, unsigned short  port, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) override;
void customEvent(QEvent*  event) override;
void disconnectFromHost() override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  mode) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
void resume() override;
bool  seek(qint64  pos) override;
void setReadBufferSize(qint64  size) override;
bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite) override;
void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
qintptr  socketDescriptor() const override;
QVariant  socketOption(QAbstractSocket::SocketOption  option) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs = 30000) override;
bool  waitForConnected(int  msecs = 30000) override;
bool  waitForDisconnected(int  msecs = 30000) override;
bool  waitForReadyRead(int  msecs = 30000) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTcpSocket : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QTcpSocket* new_QTcpSocket(QObject*  parent = nullptr);
void delete_QTcpSocket(QTcpSocket* obj) { delete obj; }
   bool  bind(QTcpSocket* theWrappedObject, QHostAddress::SpecialAddress  addr, unsigned short  port = 0, QAbstractSocket::BindMode  mode = QAbstractSocket::DefaultForPlatform);
    bool __nonzero__(QTcpSocket* obj) { return obj->isValid(); }
};





class PythonQtShell_QUdpSocket : public QUdpSocket
{
public:
    PythonQtShell_QUdpSocket(QObject*  parent = nullptr):QUdpSocket(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QUdpSocket() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void connectToHost(const QString&  hostName, unsigned short  port, QIODeviceBase::OpenMode  mode = QIODeviceBase::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) override;
void customEvent(QEvent*  event) override;
void disconnectFromHost() override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODeviceBase::OpenMode  mode) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
void resume() override;
bool  seek(qint64  pos) override;
void setReadBufferSize(qint64  size) override;
bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite) override;
void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) override;
qint64  size() const override;
qint64  skipData(qint64  maxSize) override;
qintptr  socketDescriptor() const override;
QVariant  socketOption(QAbstractSocket::SocketOption  option) override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs = 30000) override;
bool  waitForConnected(int  msecs = 30000) override;
bool  waitForDisconnected(int  msecs = 30000) override;
bool  waitForReadyRead(int  msecs = 30000) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QUdpSocket : public QObject
{ Q_OBJECT
public:
public Q_SLOTS:
QUdpSocket* new_QUdpSocket(QObject*  parent = nullptr);
void delete_QUdpSocket(QUdpSocket* obj) { delete obj; }
   bool  bind(QUdpSocket* theWrappedObject, QHostAddress::SpecialAddress  addr, unsigned short  port = 0, QAbstractSocket::BindMode  mode = QAbstractSocket::DefaultForPlatform);
   bool  hasPendingDatagrams(QUdpSocket* theWrappedObject) const;
   bool  joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress);
   bool  joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface);
   bool  leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress);
   bool  leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface);
   QNetworkInterface  multicastInterface(QUdpSocket* theWrappedObject) const;
   qint64  pendingDatagramSize(QUdpSocket* theWrappedObject) const;
   qint64  readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host = nullptr, unsigned short*  port = nullptr);
   QNetworkDatagram  receiveDatagram(QUdpSocket* theWrappedObject, qint64  maxSize = -1);
   void setMulticastInterface(QUdpSocket* theWrappedObject, const QNetworkInterface&  iface);
   qint64  writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port);
   qint64  writeDatagram(QUdpSocket* theWrappedObject, const QNetworkDatagram&  datagram);
    bool __nonzero__(QUdpSocket* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QtNetwork : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QDtlsError QOcspCertificateStatus QOcspRevocationReason )
enum class QDtlsError{
  NoError = static_cast<int>(::QDtlsError::NoError),   InvalidInputParameters = static_cast<int>(::QDtlsError::InvalidInputParameters),   InvalidOperation = static_cast<int>(::QDtlsError::InvalidOperation),   UnderlyingSocketError = static_cast<int>(::QDtlsError::UnderlyingSocketError),   RemoteClosedConnectionError = static_cast<int>(::QDtlsError::RemoteClosedConnectionError),   PeerVerificationError = static_cast<int>(::QDtlsError::PeerVerificationError),   TlsInitializationError = static_cast<int>(::QDtlsError::TlsInitializationError),   TlsFatalError = static_cast<int>(::QDtlsError::TlsFatalError),   TlsNonFatalError = static_cast<int>(::QDtlsError::TlsNonFatalError)};
enum class QOcspCertificateStatus{
  Good = static_cast<int>(::QOcspCertificateStatus::Good),   Revoked = static_cast<int>(::QOcspCertificateStatus::Revoked),   Unknown = static_cast<int>(::QOcspCertificateStatus::Unknown)};
enum class QOcspRevocationReason{
  None = static_cast<int>(::QOcspRevocationReason::None),   Unspecified = static_cast<int>(::QOcspRevocationReason::Unspecified),   KeyCompromise = static_cast<int>(::QOcspRevocationReason::KeyCompromise),   CACompromise = static_cast<int>(::QOcspRevocationReason::CACompromise),   AffiliationChanged = static_cast<int>(::QOcspRevocationReason::AffiliationChanged),   Superseded = static_cast<int>(::QOcspRevocationReason::Superseded),   CessationOfOperation = static_cast<int>(::QOcspRevocationReason::CessationOfOperation),   CertificateHold = static_cast<int>(::QOcspRevocationReason::CertificateHold),   RemoveFromCRL = static_cast<int>(::QOcspRevocationReason::RemoveFromCRL)};
public Q_SLOTS:
};


