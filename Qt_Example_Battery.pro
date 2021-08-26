QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    MyBatteryWidget/mybattery.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    MyBatteryWidget/mybattery.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

RC_ICONS = ico.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    MyBatteryWidget/Battery.qrc
