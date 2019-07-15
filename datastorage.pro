QT += core
QT -= gui

TARGET = datastorage
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

LIBS += \
    -lboost_system\
