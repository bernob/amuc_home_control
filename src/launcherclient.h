#ifndef LAUNCHERCLIENT_H
#define LAUNCHERCLIENT_H

#include <QObject>
#include <QtAndroidExtras/QAndroidJniObject>

class LauncherClient : public QObject
{
    Q_OBJECT
public:
    explicit LauncherClient(QObject *parent = 0);
    Q_INVOKABLE void launchApp(QString packageName);
signals:

public slots:

};

#endif // LAUNCHERCLIENT_H
