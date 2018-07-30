#-------------------------------------------------
#
# Project created by QtCreator 2018-05-17T15:08:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT-control
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    motion_setting.cpp \
    value_setting.cpp \
    main.cpp \
    mainwindow.cpp \
    motion_setting.cpp \
    value_setting.cpp \
    main.cpp \
    mainwindow.cpp \
    motion_setting.cpp \
    value_setting.cpp

HEADERS  += mainwindow.h \
    Resource.h \
    motion_setting.h \
    value_setting.h \
    mainwindow.h \
    motion_setting.h \
    Resource.h \
    value_setting.h \
    mainwindow.h \
    motion_setting.h \
    Resource.h \
    value_setting.h

FORMS    += mainwindow.ui \
    motion_setting.ui \
    mainwindow.ui \
    motion_setting.ui \
    mainwindow.ui \
    motion_setting.ui

INCLUDEPATH += $$quote(C:\Program Files (x86)\Advantech\AMONet\Include)

LIBS += $$quote(C:\Program Files (x86)\Advantech\AMONet\Lib\AMONet.lib)

SUBDIRS += \
    QT-control.pro \
    QT-control.pro

DISTFILES += \
    README.md \
    README.md
