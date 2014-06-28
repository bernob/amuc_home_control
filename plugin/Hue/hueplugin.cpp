/*
 * Copyright 2013 Michael Zanetti
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *      Michael Zanetti <michael_zanetti@gmx.net>
 */

#include "hueplugin.h"

#include "../../libhue/huebridgeconnection.h"
#include "../../libhue/lights.h"
#include "../../libhue/light.h"
#include "../../libhue/groups.h"
#include "../../libhue/group.h"
#include "../../libhue/lightsfiltermodel.h"

#include <QtQml/qqml.h>

static QObject* hueBridgeInstance(QQmlEngine* /* engine */, QJSEngine* /* scriptEngine */)
{
    return HueBridgeConnection::instance();
}

void HuePlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("Hue"));

    qmlRegisterSingletonType<HueBridgeConnection>(uri, 0, 1, "HueBridge", hueBridgeInstance);
    qmlRegisterType<Lights>(uri, 0, 1, "Lights");
    qmlRegisterUncreatableType<Light>(uri, 0, 1, "Light", "Cannot create lights. Get them from the Lights model.");
    qmlRegisterUncreatableType<LightInterface>(uri, 0, 1, "LightInterface", "Abstract interface.");
    qmlRegisterType<Groups>(uri, 0, 1, "Groups");
    //FIXME: eventually creatable
    qmlRegisterUncreatableType<Group>(uri, 0, 1, "Group", "Cannot create groups. Get them from the Groups model.");
    qmlRegisterType<LightsFilterModel>(uri, 0, 1, "LightsFilterModel");
}
