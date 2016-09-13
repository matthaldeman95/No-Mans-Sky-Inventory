#-------------------------------------------------
#
# Project created by QtCreator 2016-08-27T13:43:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Inventory
TEMPLATE = app


SOURCES += main.cpp\
        inventory.cpp \
    blueprint.cpp \
    bp_class_selector.cpp \
    bp_subclass.cpp \
    comp_window.cpp

HEADERS  += inventory.h \
    blueprint.h \
    bp_class_selector.h \
    bp_subclass.h \
    comp_window.h

FORMS    += inventory.ui \
    bp_class_selector.ui \
    bp_subclass.ui \
    comp_window.ui

DISTFILES +=
