QT += charts sql
requires(qtConfig(combobox))

HEADERS += \
    authentification.h \
    controller.h \
    dbaccess.h \
    find.h \
    formatexcel.h \
    mainwindow.h \
    parcourir.h \
    person.h \
    personmodel.h \
    themewidget.h \
    uimain.h \
    uipersonlist.h \
    user.h \
    usermodel.h

SOURCES += \
    authentification.cpp \
    controller.cpp \
    dbaccess.cpp \
    find.cpp \
    formatexcel.cpp \
    main.cpp \
    mainwindow.cpp \
    parcourir.cpp \
    person.cpp \
    personmodel.cpp \
    themewidget.cpp \
    uimain.cpp \
    uipersonlist.cpp \
    user.cpp \
    usermodel.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/charts/chartthemes
INSTALLS += target

FORMS += \
    authentification.ui \
    find.ui \
    mainwindow.ui \
    parcourir.ui \
    themewidget.ui \
    uipersonlist.ui

RESOURCES += \
    pics.qrc


QXLSX_PARENTPATH=./
QXLSX_HEADERPATH=./header/
QXLSX_SOURCEPATH=./source/
include(./QXlsx.pri)
