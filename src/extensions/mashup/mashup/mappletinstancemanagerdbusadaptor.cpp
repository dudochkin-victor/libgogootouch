/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp mappletinstancemanagerdbusinterface.xml -a mappletinstancemanagerdbusadaptor -c MAppletInstanceManagerDBusAdaptor -l MAppletInstanceManager -i mappletinstancemanager.h
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "mappletinstancemanagerdbusadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class MAppletInstanceManagerDBusAdaptor
 */

MAppletInstanceManagerDBusAdaptor::MAppletInstanceManagerDBusAdaptor(MAppletInstanceManager *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MAppletInstanceManagerDBusAdaptor::~MAppletInstanceManagerDBusAdaptor()
{
    // destructor
}

void MAppletInstanceManagerDBusAdaptor::instantiateAppletFromPackage(const QString &packageName, const QMap<QString, QVariant> &metaData)
{
    // handle method call com.meego.core.MAppletInstanceManager.instantiateAppletFromPackage
    parent()->instantiateAppletFromPackage(packageName, metaData);
}

