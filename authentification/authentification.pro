QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authentification.cpp \
    controller.cpp \
    dbaccess.cpp \
    find.cpp \
    main.cpp \
    mainwindow.cpp \
    person.cpp \
    personmodel.cpp \
    personslist.cpp \
    uimain.cpp \
    uipersonlist.cpp \
    user.cpp \
    usermodel.cpp

HEADERS += \
    authentification.h \
    controller.h \
    dbaccess.h \
    find.h \
    mainwindow.h \
    person.h \
    personmodel.h \
    personslist.h \
    uimain.h \
    uipersonlist.h \
    user.h \
    usermodel.h

FORMS += \
    authentification.ui \
    find.ui \
    mainwindow.ui \
    personslist.ui \
    uipersonlist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
