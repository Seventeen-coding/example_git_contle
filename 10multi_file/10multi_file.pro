TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    myfunc.c

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    myhead.h

