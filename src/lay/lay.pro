QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = subdirs
SUBDIRS = lay unit_tests

unit_tests.depends += lay

