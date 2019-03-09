#-------------------------------------------------
#
# Project created by QtCreator 2018-09-05T12:18:12
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += network

QMAKE_CXXFLAGS += -std=c++0x

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app


SOURCES += main.cpp\
    server.cpp \
    mail.cpp \
    database.cpp \
    user.cpp \
    jsoncpp.cpp

HEADERS  += \
    server.h \
    mail.h \
    database.h \
    user.h \
    json/json.h \
    json/json-forwards.h

FORMS    +=
