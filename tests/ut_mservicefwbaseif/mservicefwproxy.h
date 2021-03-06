/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c MServiceFwProxy -p mservicefwproxy.h:mservicefwproxy.cpp mservicefw.xml
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MSERVICEFWPROXY_H_LOCAL
#define MSERVICEFWPROXY_H_LOCAL

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

class QDBusConnection;

class MockQDBusConnection
{
public:
    bool isConnected() const {
        return true;
    };
};

/*
 * Proxy class for interface com.nokia.MServiceFwIf
 */
class MServiceFwProxy : public QObject
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName() {
        return "com.nokia.MServiceFwIf";
    }

public:
    MServiceFwProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    virtual ~MServiceFwProxy();

    MockQDBusConnection connection() {
        static MockQDBusConnection myConnection;
        return myConnection;
    };

public Q_SLOTS: // METHODS
    QString serviceName(const QString &interfaceName);

    QStringList serviceNames(const QString &interfaceName);

    QString servicePath(const QString &interfaceName);

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
