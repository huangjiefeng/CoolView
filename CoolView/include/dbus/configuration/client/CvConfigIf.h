/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c CvConfigIf -p CvConfigIf.h:CvConfigIf.cpp .\com.dcampus.coolview.configuration.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CVCONFIGIF_H_1339123385
#define CVCONFIGIF_H_1339123385

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.dcampus.coolview.configuration
 */
class CvConfigIf: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.dcampus.coolview.configuration"; }

public:
    CvConfigIf(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~CvConfigIf();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> QueryAllConfig(int subscribe_id)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(subscribe_id);
        return asyncCallWithArgumentList(QLatin1String("QueryAllConfig"), argumentList);
    }

    inline QDBusPendingReply<> QueryCurrentConfig(int subscribe_id)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(subscribe_id);
        return asyncCallWithArgumentList(QLatin1String("QueryCurrentConfig"), argumentList);
    }

    inline QDBusPendingReply<> RefreshConfig()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("RefreshConfig"), argumentList);
    }

    inline QDBusPendingReply<> SetCamera(const QString &camera_name, const QString &crossbar_name, const QString &crossbar_type, int video_width, int video_height)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(camera_name) << qVariantFromValue(crossbar_name) << qVariantFromValue(crossbar_type) << qVariantFromValue(video_width) << qVariantFromValue(video_height);
        return asyncCallWithArgumentList(QLatin1String("SetCamera"), argumentList);
    }

    inline QDBusPendingReply<> SetIP(const QString &ip)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(ip);
        return asyncCallWithArgumentList(QLatin1String("SetIP"), argumentList);
    }

    inline QDBusPendingReply<> SetMic(const QString &mic_name, int mic_volumn)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(mic_name) << qVariantFromValue(mic_volumn);
        return asyncCallWithArgumentList(QLatin1String("SetMic"), argumentList);
    }

    inline QDBusPendingReply<> SetSpeaker(const QString &speaker_name, int speaker_volumn)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(speaker_name) << qVariantFromValue(speaker_volumn);
        return asyncCallWithArgumentList(QLatin1String("SetSpeaker"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace dcampus {
    namespace coolview {
      typedef ::CvConfigIf configuration;
    }
  }
}
#endif
