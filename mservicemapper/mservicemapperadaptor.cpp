/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c MServiceMapperAdaptor -a mservicemapperadaptor.h:mservicemapperadaptor.cpp mservicefw.xml
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "mservicemapperadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class MServiceMapperAdaptor
 */

MServiceMapperAdaptor::MServiceMapperAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MServiceMapperAdaptor::~MServiceMapperAdaptor()
{
    // destructor
}

QString MServiceMapperAdaptor::serviceName(const QString &interfaceName)
{
    // handle method call com.nokia.MServiceFwIf.serviceName
    QString out0;
    QMetaObject::invokeMethod(parent(), "serviceName", Q_RETURN_ARG(QString, out0), Q_ARG(QString, interfaceName));
    return out0;
}

QStringList MServiceMapperAdaptor::serviceNames(const QString &interfaceName)
{
    // handle method call com.nokia.MServiceFwIf.serviceNames
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "serviceNames", Q_RETURN_ARG(QStringList, out0), Q_ARG(QString, interfaceName));
    return out0;
}

QString MServiceMapperAdaptor::servicePath(const QString &interfaceName)
{
    // handle method call com.nokia.MServiceFwIf.servicePath
    QString out0;
    QMetaObject::invokeMethod(parent(), "servicePath", Q_RETURN_ARG(QString, out0), Q_ARG(QString, interfaceName));
    return out0;
}

QString MServiceMapperAdaptor::interfaceName(const QString &serviceName)
{
    // handle method call com.nokia.MServiceFwIf.interfaceName
    QString out0;
    QMetaObject::invokeMethod(parent(), "interfaceName", Q_RETURN_ARG(QString, out0), Q_ARG(QString, serviceName));
    return out0;
}
