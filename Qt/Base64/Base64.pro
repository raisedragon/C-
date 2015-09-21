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
        maindialog.cpp \
    base64utils.cpp

HEADERS  += maindialog.h

FORMS    += maindialog.ui

unix|win32: LIBS += -L$$PWD/D:/software/boost/boost_1_56_0_build/lib/ -llibboost_serialization-vc90-mt-1_56

INCLUDEPATH += $$PWD/D:/software/boost/boost_1_56_0_build/include
DEPENDPATH += $$PWD/D:/software/boost/boost_1_56_0_build/include
