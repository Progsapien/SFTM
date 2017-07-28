#-------------------------------------------------
#
# Project created by QtCreator 2017-07-29T02:39:24
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SFTM
TEMPLATE = app


SOURCES += main.cpp\
        generalwindow.cpp \
    core/senderfiles.cpp \
    core/connectionsmanager.cpp \
    core/server.cpp

HEADERS  += generalwindow.h \
    core/senderfiles.h \
    core/connectionsmanager.h \
    core/server.h
