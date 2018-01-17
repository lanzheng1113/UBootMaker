#-------------------------------------------------
#
# Project created by QtCreator 2017-05-03T21:55:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UBootMaker
TEMPLATE = app

#INCLUDEPATH += F:\work\UBootMaker\trunk\UBootMaker\Util
# DEPENDPATH += UBootMaker\build-Util-Desktop_Qt_5_8_0_MSVC2015_32bit-Debug\debug\Util.lib
#LIBS += -LF:\work\UBootMaker\trunk\UBootMaker\build-Util-Desktop_Qt_5_8_0_MSVC2015_32bit-Debug\debug -lUtil

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogfeedback.cpp \
    dialogtutorial.cpp \
    dialogshortcutquery.cpp \
    formdefaultstyle.cpp \
    formiso.cpp \
    formlocal.cpp \
    formmaincenter.cpp \
    formhelpinfo.cpp \
    dlgadvancesetting.cpp \
    dialogcancelsupport.cpp \
    dialogmenusettings.cpp \
    qwininterface.cpp \
    qlaunchmenuitem.cpp \
    launchmenuitemproperty.cpp \
    startmenuwidget.cpp \
    ctrlstartmenumodify.cpp

HEADERS  += mainwindow.h \
    dialogfeedback.h \
    dialogtutorial.h \
    dialogshortcutquery.h \
    formdefaultstyle.h \
    formiso.h \
    formlocal.h \
    formmaincenter.h \
    formhelpinfo.h \
    dlgadvancesetting.h \
    dialogcancelsupport.h \
    dialogmenusettings.h \
    qwininterface.h \
    qlaunchmenuitem.h \
    LaunchMenuItemProperty.h \
    startmenuwidget.h \
    ctrlstartmenumodify.h

FORMS    += mainwindow.ui \
    dialogfeedback.ui \
    dialogtutorial.ui \
    dialogshortcutquery.ui \
    formdefaultstyle.ui \
    formiso.ui \
    formlocal.ui \
    formmaincenter.ui \
    formhelpinfo.ui \
    dlgadvancesetting.ui \
    dialogcancelsupport.ui \
    dialogmenusettings.ui \
    startmenuwidget.ui

RESOURCES += \
    resource.qrc
