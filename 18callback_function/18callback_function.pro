TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    link.c

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    link.h

