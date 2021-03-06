/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c ChannelDispatcherAdaptor -a ChannelDispatcherAdaptor.h:ChannelDispatcherAdaptor.cpp .\com.dcampus.coolview.channelDispatcher.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "ChannelDispatcherAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ChannelDispatcherAdaptor
 */

ChannelDispatcherAdaptor::ChannelDispatcherAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ChannelDispatcherAdaptor::~ChannelDispatcherAdaptor()
{
    // destructor
}

void ChannelDispatcherAdaptor::ChannelStateChanged(const QString &channel_id, const QString &user_id, const QString &channel_type, int channel_state)
{
    // handle method call com.dcampus.coolview.channelDispatcher.ChannelStateChanged
    QMetaObject::invokeMethod(parent(), "ChannelStateChanged", Q_ARG(QString, channel_id), Q_ARG(QString, user_id), Q_ARG(QString, channel_type), Q_ARG(int, channel_state));
}

void ChannelDispatcherAdaptor::CreateChannel(const QString &channel_id, const QString &channel_type, const QByteArray &input_garray)
{
    // handle method call com.dcampus.coolview.channelDispatcher.CreateChannel
    QMetaObject::invokeMethod(parent(), "CreateChannel", Q_ARG(QString, channel_id), Q_ARG(QString, channel_type), Q_ARG(QByteArray, input_garray));
}

void ChannelDispatcherAdaptor::Destroy()
{
    // handle method call com.dcampus.coolview.channelDispatcher.Destroy
    QMetaObject::invokeMethod(parent(), "Destroy");
}

void ChannelDispatcherAdaptor::ModifyChannel(const QString &channel_id, const QString &channel_type, int modify_type, const QByteArray &input_garray)
{
    // handle method call com.dcampus.coolview.channelDispatcher.ModifyChannel
    QMetaObject::invokeMethod(parent(), "ModifyChannel", Q_ARG(QString, channel_id), Q_ARG(QString, channel_type), Q_ARG(int, modify_type), Q_ARG(QByteArray, input_garray));
}

void ChannelDispatcherAdaptor::ReleaseChannel(const QString &channel_id, const QString &channel_type)
{
    // handle method call com.dcampus.coolview.channelDispatcher.ReleaseChannel
    QMetaObject::invokeMethod(parent(), "ReleaseChannel", Q_ARG(QString, channel_id), Q_ARG(QString, channel_type));
}

