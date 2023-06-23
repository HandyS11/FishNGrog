# NOTICE:
#
# Application name defined in TARGET has a corresponding QML filename.
# If name defined in TARGET is changed, the following needs to be done
# to match new name:
#   - corresponding QML filename must be changed
#   - desktop icon filename must be changed
#   - desktop filename must be changed
#   - icon definition filename in desktop file must be changed
#   - translation filenames have to be changed

# The name of your application
TARGET = FishNGrog

CONFIG += sailfishapp

SOURCES += src/FishNGrog.cpp \
    src/fish.cpp \
    src/fishlist.cpp \
    src/fishlistmodel.cpp \
    src/stub.cpp

DISTFILES += qml/FishNGrog.qml \
    qml/cover/CoverPage.qml \
    qml/pages/DetailPage.qml \
    qml/pages/MasterPage.qml \
    rpm/FishNGrog.changes.in \
    rpm/FishNGrog.changes.run.in \
    rpm/FishNGrog.spec \
    translations/*.ts \
    FishNGrog.desktop

SAILFISHAPP_ICONS = 86x86 108x108 128x128 172x172

# to disable building translations every time, comment out the
# following CONFIG line
CONFIG += sailfishapp_i18n

# German translation is enabled as an example. If you aren't
# planning to localize your app, remember to comment out the
# following TRANSLATIONS line. And also do not forget to
# modify the localized app name in the the .desktop file.
TRANSLATIONS += translations/FishNGrog-de.ts

HEADERS += \
    src/enums.h \
    src/fish.h \
    src/fishlist.h \
    src/fishlistmodel.h \
    src/stub.h

database.files = images
database.path = /usr/share/$${TARGET}

RESOURCES += \
    resources.qrc

INSTALLS += database
