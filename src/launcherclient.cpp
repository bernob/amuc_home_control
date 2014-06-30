#include "launcherclient.h"

LauncherClient::LauncherClient(QObject *parent) :
    QObject(parent)
{
}

void LauncherClient::launchApp(QString packageName)
{
    QAndroidJniObject javaAppPackage = QAndroidJniObject::fromString(packageName);
    QAndroidJniObject::callStaticMethod<void>(
        "org.amuc.olevigs.launcher/LauncherClient",
        "launchApp",
        "(Ljava/lang/String;)V",
        javaAppPackage.object<jstring>());
}
