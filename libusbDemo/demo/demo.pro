TEMPLATE = app
CONFIG += console c++11

OBJECTS_DIR = .obj

LIBS += -L../libusb-1.0.19\MinGW32\dll -llibusb-1.0
                                       
INCLUDEPATH += \
	$$PWD/../libusb-1.0.19/include/libusb-1.0

HEADERS += \

SOURCES += \
	main.cpp \
