QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = import_ui
DESTDIR = $$OUT_PWD/../../../../lay_plugins

include($$PWD/../../../lay_plugin.pri)

HEADERS = \
  layStreamImporter.h \
  layStreamImportDialog.h

SOURCES = \
  layStreamImporter.cc \
  layStreamImportDialog.cc \
  layStreamImport.cc

FORMS = \
  StreamImportDialog.ui \
