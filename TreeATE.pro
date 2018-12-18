TEMPLATE = subdirs
SUBDIRS += Src Example Plugins \
    Libs
CONFIG +=ordered

CONFIG(debug, debug|release) {
    SUBDIRS +=
}
