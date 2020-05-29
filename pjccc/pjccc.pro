TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp \
    symulacja.cpp \
    uzytkownik.cpp \
    tura.cpp \
    zwierze.cpp \
    lew.cpp \
    gazela.cpp \
    krokodyl.cpp

HEADERS += \
    symulacja.h \
    uzytkownik.h \
    tura.h \
    zwierze.h \
    lew.h \
    gazela.h \
    krokodyl.h

