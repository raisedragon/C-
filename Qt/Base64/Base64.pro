#-------------------------------------------------
#
# Project created by QtCreator 2015-09-21T10:39:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Base64
TEMPLATE = app


SOURCES += main.cpp\
    base64_coder.cpp \
    maindialog.cpp \
    fileutils.cpp

HEADERS  += \
    base64_coder.h \
    maindialog.h \
    fileutils.h

FORMS    += \
    maindialog.ui

INCLUDEPATH += D:/software/boost/boost_1_56_0_build/include/boost-1_56/
LIBS += -LD:/software/boost/boost_1_56_0_build/lib/libboost_serialization-vc120-mt-1_56


