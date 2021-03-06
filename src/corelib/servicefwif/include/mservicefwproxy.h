/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c MServiceFwProxy -p mservicefwproxy.h:mservicefwproxy.cpp mservicefw.xml
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MSERVICEFWPROXY_H_1235929249
#define MSERVICEFWPROXY_H_1235929249

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.nokia.MServiceFwIf
 */
class MServiceFwProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName() {
        return "com.nokia.MServiceFwIf";
    }

public:
    MServiceFwProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    virtual ~MServiceFwProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> serviceName(const QString &interfaceName) {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(interfaceName);
        return asyncCallWithArgumentList(QLatin1String("serviceName"), argumentList);
    }

    inline QDBusPendingReply<QStringList> serviceNames(const QString &interfaceName) {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(interfaceName);
        return asyncCallWithArgumentList(QLatin1String("serviceNames"), argumentList);
    }

    inline QDBusPendingReply<QString> servicePath(const QString &interfaceName) {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(interfaceName);
        return asyncCallWithArgumentList(QLatin1String("servicePath"), argumentList);
    }

    inline QDBusPendingReply<QString> interfaceName(const QString &serviceName) {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(serviceName);
        return asyncCallWithArgumentList(QLatin1String("interfaceName"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void serviceAvailable(const QString &service, const QString &interface);
    void serviceUnavailable(const QString &service);

};

namespace com
{
    namespace nokia
    {
        typedef ::MServiceFwProxy MServiceFwIf;
    }
}
#endif
