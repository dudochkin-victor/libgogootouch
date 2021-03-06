/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp mappletinstancemanagerdbusinterface.xml -a mappletinstancemanagerdbusadaptor -c MAppletInstanceManagerDBusAdaptor -l MAppletInstanceManager -i mappletinstancemanager.h
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef MAPPLETINSTANCEMANAGERDBUSADAPTOR_H_1265801264
#define MAPPLETINSTANCEMANAGERDBUSADAPTOR_H_1265801264

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "mappletinstancemanager.h"
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.meego.core.MAppletInstanceManager
 */
class MAppletInstanceManagerDBusAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.meego.core.MAppletInstanceManager")
    Q_CLASSINFO("D-Bus Introspection", ""
                "  <interface name=\"com.meego.core.MAppletInstanceManager\">\n"
                "    <method name=\"instantiateAppletFromPackage\">\n"
                "      <annotation value=\"QMap&lt;QString, QVariant>\" name=\"com.trolltech.QtDBus.QtTypeName.In1\"/>\n"
                "      <arg direction=\"in\" type=\"s\" name=\"packageName\"/>\n"
                "      <arg direction=\"in\" type=\"a{sv}\" name=\"metaData\"/>\n"
                "    </method>\n"
                "  </interface>\n"
                "")
public:
    MAppletInstanceManagerDBusAdaptor(MAppletInstanceManager *parent);
    virtual ~MAppletInstanceManagerDBusAdaptor();

    inline MAppletInstanceManager *parent() const {
        return static_cast<MAppletInstanceManager *>(QObject::parent());
    }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void instantiateAppletFromPackage(const QString &packageName, const QMap<QString, QVariant> &metaData);
Q_SIGNALS: // SIGNALS
};

#endif
