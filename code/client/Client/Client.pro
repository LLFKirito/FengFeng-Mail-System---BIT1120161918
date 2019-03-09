#-------------------------------------------------
#
# Project created by QtCreator 2018-09-06T13:56:53
#
#-------------------------------------------------

QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    register.cpp \
    inbox.cpp \
    edit.cpp \
    contactwidget.cpp \
    contact.cpp \
    inboxwidget.cpp \
    send.cpp \
    drafts.cpp \
    client.cpp \
    jsoncpp.cpp \
    dustbin.cpp \
    manager.cpp \
    detail.cpp

HEADERS  += login.h \
    register.h \
    inbox.h \
    edit.h \
    contactwidget.h \
    contact.h \
    inboxwidget.h \
    send.h \
    drafts.h \
    client.h \
    json/json.h \
    json/json-forwards.h \
    drafts.h \
    dustbin.h \
    manager.h \
    detail.h

FORMS    += login.ui \
    register.ui \
    inbox.ui \
    edit.ui \
    contactwidget.ui \
    contact.ui \
    inboxwidget.ui \
    send.ui \
    drafts.ui \
    dustbin.ui \
    manager.ui \
    detail.ui

RESOURCES += \
    img.qrc

DISTFILES += \
    dustbin.png \
    contact.png \
    draft.png \
    inbox.png
