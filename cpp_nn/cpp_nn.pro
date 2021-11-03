TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        activations.cpp \
        initializers.cpp \
        layers.cpp \
        losses.cpp \
        main.cpp \
        module.cpp \
        utils.cpp

HEADERS += \
    activations.h \
    initializers.h \
    layers.h \
    losses.h \
    module.h \
    utils.h
