#-------------------------------------------------
#
# Project created by QtCreator 2013-03-31T20:19:02
#
#-------------------------------------------------

QT += core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fund_test
TEMPLATE = app


SOURCES += main.cpp\
        accountwindow.cpp \
    mainwindow.cpp \
    FundDatabase.cpp \
    database_error.cpp

HEADERS  += accountwindow.h \
    mainwindow.h \
    FundDatabase.h \
    database_error.h

FORMS    += accountwindow.ui \
    mainwindow.ui \
    database_error.ui
