#-------------------------------------------------
#
# Project created by QtCreator 2015-04-09T22:14:59
#
#-------------------------------------------------

QT       += core gui
QT       += core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Stadium_Trip
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainPage.cpp \
    stadium.cpp \
    souvenir.cpp \
    adminwindow.cpp

HEADERS  += mainwindow.h \
    stadium.h \
    souvenir.h \
    adminwindow.h

FORMS    += mainwindow.ui \
    adminwindow.ui

RESOURCES += \
    Images.qrc
