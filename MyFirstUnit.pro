#-------------------------------------------------
#
# Project created by QtCreator 2018-10-05T12:34:11
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_myfirstunittest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_myfirstunittest.cpp \
    myclass.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    myclass.h
