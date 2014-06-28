TEMPLATE = lib
CONFIG += qt plugin
QT += qml

include(../../libhue/libhue.pri)

TARGET = hueplugin
HEADERS += hueplugin.h
SOURCES += hueplugin.cpp
