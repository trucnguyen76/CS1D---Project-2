#-------------------------------------------------
#
# Project created by QtCreator 2015-04-30T23:01:50
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Stadium_Trip
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    adminLogIn.cpp \
    customizeShortestTrip.cpp \
    graph.cpp \
    initializeGraph.cpp \
    loadData.cpp \
    mainPage.cpp \
    mst.cpp \
    shortestFromAngel.cpp \
    souvenir.cpp \
    stadium.cpp \
    shoppingCart.cpp \
    viewMajorLeagues.cpp

HEADERS  += mainwindow.h \
    graph.h \
    souvenir.h \
    stadium.h \
    mst.h \
    shoppingCart.h

FORMS    += mainwindow.ui \
    shoppingCart.ui

RESOURCES += \
    Images.qrc

OTHER_FILES += \
    ballgame_icon.png \
    inputFile.txt
