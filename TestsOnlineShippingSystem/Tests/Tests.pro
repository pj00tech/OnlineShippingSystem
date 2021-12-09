QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

INCLUDEPATH += ../app
SOURCES += ../app/cookware.cpp \
           ../app/customer.cpp \
           ../app/shipping.cpp \
           ../app/shippingDepartment.cpp \
           tests.cpp
