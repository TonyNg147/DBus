QT+= qml dbus
DBUS_INTERFACES+=controller.xml
HEADERS += \
    consumer.h
SOURCES += \
    consumer.cpp \
    main.cpp

RESOURCES += \
    Resources.qrc

DISTFILES+=    controller.xml
