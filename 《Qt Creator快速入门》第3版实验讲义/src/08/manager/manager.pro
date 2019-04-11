#-------------------------------------------------
#
# Project created by QtCreator 2011-12-28T09:23:16
#
#-------------------------------------------------

QT       += core gui widgets
QT       += sql

TARGET = manager
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    logindialog.cpp

HEADERS  += widget.h \
    connection.h \
    logindialog.h

FORMS    += widget.ui \
    logindialog.ui

RC_FILE = \
  my.rc

