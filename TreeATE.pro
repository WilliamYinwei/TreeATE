TEMPLATE = subdirs
SUBDIRS += Libs Src Example Plugins \
CONFIG +=ordered

CONFIG(debug, debug|release) {
    SUBDIRS +=
}
