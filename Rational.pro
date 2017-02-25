TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    rational.cpp
QMAKE_CXXFLAGS += -std=c++1z

HEADERS += \
    rational.h
