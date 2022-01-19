QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = subdirs

!equals(HAVE_QT, "0") {
  SUBDIRS = lay_plugin
}

