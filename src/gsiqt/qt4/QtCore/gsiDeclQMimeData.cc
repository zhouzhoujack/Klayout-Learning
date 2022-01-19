
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQMimeData.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMimeData>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMimeData

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMimeData::staticMetaObject);
}


// void QMimeData::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData *)cls)->clear ();
}


// QVariant QMimeData::colorData()


static void _init_f_colorData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_colorData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QMimeData *)cls)->colorData ());
}


// QByteArray QMimeData::data(const QString &mimetype)


static void _init_f_data_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimetype");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_data_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)((QMimeData *)cls)->data (arg1));
}


// QStringList QMimeData::formats()


static void _init_f_formats_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_formats_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMimeData *)cls)->formats ());
}


// bool QMimeData::hasColor()


static void _init_f_hasColor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasColor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMimeData *)cls)->hasColor ());
}


// bool QMimeData::hasFormat(const QString &mimetype)


static void _init_f_hasFormat_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimetype");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasFormat_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QMimeData *)cls)->hasFormat (arg1));
}


// bool QMimeData::hasHtml()


static void _init_f_hasHtml_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasHtml_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMimeData *)cls)->hasHtml ());
}


// bool QMimeData::hasImage()


static void _init_f_hasImage_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasImage_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMimeData *)cls)->hasImage ());
}


// bool QMimeData::hasText()


static void _init_f_hasText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMimeData *)cls)->hasText ());
}


// bool QMimeData::hasUrls()


static void _init_f_hasUrls_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasUrls_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMimeData *)cls)->hasUrls ());
}


// QString QMimeData::html()


static void _init_f_html_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_html_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMimeData *)cls)->html ());
}


// QVariant QMimeData::imageData()


static void _init_f_imageData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_imageData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QMimeData *)cls)->imageData ());
}


// void QMimeData::removeFormat(const QString &mimetype)


static void _init_f_removeFormat_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimetype");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeFormat_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData *)cls)->removeFormat (arg1);
}


// void QMimeData::setColorData(const QVariant &color)


static void _init_f_setColorData_2119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setColorData_2119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData *)cls)->setColorData (arg1);
}


// void QMimeData::setData(const QString &mimetype, const QByteArray &data)


static void _init_f_setData_4226 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimetype");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setData_4226 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QByteArray &arg2 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData *)cls)->setData (arg1, arg2);
}


// void QMimeData::setHtml(const QString &html)


static void _init_f_setHtml_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("html");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHtml_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData *)cls)->setHtml (arg1);
}


// void QMimeData::setImageData(const QVariant &image)


static void _init_f_setImageData_2119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("image");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setImageData_2119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData *)cls)->setImageData (arg1);
}


// void QMimeData::setText(const QString &text)


static void _init_f_setText_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setText_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData *)cls)->setText (arg1);
}


// void QMimeData::setUrls(const QList<QUrl> &urls)


static void _init_f_setUrls_2316 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("urls");
  decl->add_arg<const QList<QUrl> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUrls_2316 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QUrl> &arg1 = gsi::arg_reader<const QList<QUrl> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData *)cls)->setUrls (arg1);
}


// QString QMimeData::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMimeData *)cls)->text ());
}


// QList<QUrl> QMimeData::urls()


static void _init_f_urls_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QUrl> > ();
}

static void _call_f_urls_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QUrl> > ((QList<QUrl>)((QMimeData *)cls)->urls ());
}


// static QString QMimeData::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QMimeData::tr (arg1, arg2));
}


// static QString QMimeData::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QMimeData::tr (arg1, arg2, arg3));
}


// static QString QMimeData::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QMimeData::trUtf8 (arg1, arg2));
}


// static QString QMimeData::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QMimeData::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QMimeData () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QMimeData::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod (":colorData", "@brief Method QVariant QMimeData::colorData()\n", true, &_init_f_colorData_c0, &_call_f_colorData_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method QByteArray QMimeData::data(const QString &mimetype)\n", true, &_init_f_data_c2025, &_call_f_data_c2025);
  methods += new qt_gsi::GenericMethod ("formats", "@brief Method QStringList QMimeData::formats()\n", true, &_init_f_formats_c0, &_call_f_formats_c0);
  methods += new qt_gsi::GenericMethod ("hasColor", "@brief Method bool QMimeData::hasColor()\n", true, &_init_f_hasColor_c0, &_call_f_hasColor_c0);
  methods += new qt_gsi::GenericMethod ("hasFormat", "@brief Method bool QMimeData::hasFormat(const QString &mimetype)\n", true, &_init_f_hasFormat_c2025, &_call_f_hasFormat_c2025);
  methods += new qt_gsi::GenericMethod ("hasHtml", "@brief Method bool QMimeData::hasHtml()\n", true, &_init_f_hasHtml_c0, &_call_f_hasHtml_c0);
  methods += new qt_gsi::GenericMethod ("hasImage", "@brief Method bool QMimeData::hasImage()\n", true, &_init_f_hasImage_c0, &_call_f_hasImage_c0);
  methods += new qt_gsi::GenericMethod ("hasText", "@brief Method bool QMimeData::hasText()\n", true, &_init_f_hasText_c0, &_call_f_hasText_c0);
  methods += new qt_gsi::GenericMethod ("hasUrls", "@brief Method bool QMimeData::hasUrls()\n", true, &_init_f_hasUrls_c0, &_call_f_hasUrls_c0);
  methods += new qt_gsi::GenericMethod ("html", "@brief Method QString QMimeData::html()\n", true, &_init_f_html_c0, &_call_f_html_c0);
  methods += new qt_gsi::GenericMethod (":imageData", "@brief Method QVariant QMimeData::imageData()\n", true, &_init_f_imageData_c0, &_call_f_imageData_c0);
  methods += new qt_gsi::GenericMethod ("removeFormat", "@brief Method void QMimeData::removeFormat(const QString &mimetype)\n", false, &_init_f_removeFormat_2025, &_call_f_removeFormat_2025);
  methods += new qt_gsi::GenericMethod ("setColorData|colorData=", "@brief Method void QMimeData::setColorData(const QVariant &color)\n", false, &_init_f_setColorData_2119, &_call_f_setColorData_2119);
  methods += new qt_gsi::GenericMethod ("setData", "@brief Method void QMimeData::setData(const QString &mimetype, const QByteArray &data)\n", false, &_init_f_setData_4226, &_call_f_setData_4226);
  methods += new qt_gsi::GenericMethod ("setHtml", "@brief Method void QMimeData::setHtml(const QString &html)\n", false, &_init_f_setHtml_2025, &_call_f_setHtml_2025);
  methods += new qt_gsi::GenericMethod ("setImageData|imageData=", "@brief Method void QMimeData::setImageData(const QVariant &image)\n", false, &_init_f_setImageData_2119, &_call_f_setImageData_2119);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Method void QMimeData::setText(const QString &text)\n", false, &_init_f_setText_2025, &_call_f_setText_2025);
  methods += new qt_gsi::GenericMethod ("setUrls", "@brief Method void QMimeData::setUrls(const QList<QUrl> &urls)\n", false, &_init_f_setUrls_2316, &_call_f_setUrls_2316);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QMimeData::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  methods += new qt_gsi::GenericMethod ("urls", "@brief Method QList<QUrl> QMimeData::urls()\n", true, &_init_f_urls_c0, &_call_f_urls_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QMimeData::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMimeData::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMimeData::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMimeData::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMimeData::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QMimeData> decl_QMimeData (qtdecl_QObject (), "QtCore", "QMimeData_Native",
  methods_QMimeData (),
  "@hide\n@alias QMimeData");

GSI_QTCORE_PUBLIC gsi::Class<QMimeData> &qtdecl_QMimeData () { return decl_QMimeData; }

}


class QMimeData_Adaptor : public QMimeData, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMimeData_Adaptor();

  //  [adaptor ctor] QMimeData::QMimeData()
  QMimeData_Adaptor() : QMimeData()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QMimeData::receivers(const char *signal)
  int fp_QMimeData_receivers_c1731 (const char *signal) const {
    return QMimeData::receivers(signal);
  }

  //  [expose] QObject *QMimeData::sender()
  QObject * fp_QMimeData_sender_c0 () const {
    return QMimeData::sender();
  }

  //  [adaptor impl] bool QMimeData::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QMimeData::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMimeData_Adaptor, bool, QEvent *>(&QMimeData_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QMimeData::event(arg1);
    }
  }

  //  [adaptor impl] bool QMimeData::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QMimeData::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMimeData_Adaptor, bool, QObject *, QEvent *>(&QMimeData_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QMimeData::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QStringList QMimeData::formats()
  QStringList cbs_formats_c0_0() const
  {
    return QMimeData::formats();
  }

  virtual QStringList formats() const
  {
    if (cb_formats_c0_0.can_issue()) {
      return cb_formats_c0_0.issue<QMimeData_Adaptor, QStringList>(&QMimeData_Adaptor::cbs_formats_c0_0);
    } else {
      return QMimeData::formats();
    }
  }

  //  [adaptor impl] bool QMimeData::hasFormat(const QString &mimetype)
  bool cbs_hasFormat_c2025_0(const QString &mimetype) const
  {
    return QMimeData::hasFormat(mimetype);
  }

  virtual bool hasFormat(const QString &mimetype) const
  {
    if (cb_hasFormat_c2025_0.can_issue()) {
      return cb_hasFormat_c2025_0.issue<QMimeData_Adaptor, bool, const QString &>(&QMimeData_Adaptor::cbs_hasFormat_c2025_0, mimetype);
    } else {
      return QMimeData::hasFormat(mimetype);
    }
  }

  //  [adaptor impl] void QMimeData::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QMimeData::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMimeData_Adaptor, QChildEvent *>(&QMimeData_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QMimeData::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QMimeData::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QMimeData::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMimeData_Adaptor, QEvent *>(&QMimeData_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QMimeData::customEvent(arg1);
    }
  }

  //  [emitter impl] void QMimeData::destroyed(QObject *)
  void emitter_QMimeData_destroyed_1302(QObject *arg1)
  {
    emit QMimeData::destroyed(arg1);
  }

  //  [adaptor impl] void QMimeData::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QMimeData::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QMimeData_Adaptor, const char *>(&QMimeData_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QMimeData::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] QVariant QMimeData::retrieveData(const QString &mimetype, QVariant::Type preferredType)
  QVariant cbs_retrieveData_c3693_0(const QString &mimetype, const qt_gsi::Converter<QVariant::Type>::target_type & preferredType) const
  {
    return QMimeData::retrieveData(mimetype, qt_gsi::QtToCppAdaptor<QVariant::Type>(preferredType).cref());
  }

  virtual QVariant retrieveData(const QString &mimetype, QVariant::Type preferredType) const
  {
    if (cb_retrieveData_c3693_0.can_issue()) {
      return cb_retrieveData_c3693_0.issue<QMimeData_Adaptor, QVariant, const QString &, const qt_gsi::Converter<QVariant::Type>::target_type &>(&QMimeData_Adaptor::cbs_retrieveData_c3693_0, mimetype, qt_gsi::CppToQtAdaptor<QVariant::Type>(preferredType));
    } else {
      return QMimeData::retrieveData(mimetype, preferredType);
    }
  }

  //  [adaptor impl] void QMimeData::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QMimeData::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMimeData_Adaptor, QTimerEvent *>(&QMimeData_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QMimeData::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_formats_c0_0;
  gsi::Callback cb_hasFormat_c2025_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_retrieveData_c3693_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMimeData_Adaptor::~QMimeData_Adaptor() { }

//  Constructor QMimeData::QMimeData() (adaptor class)

static void _init_ctor_QMimeData_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMimeData_Adaptor> ();
}

static void _call_ctor_QMimeData_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMimeData_Adaptor *> (new QMimeData_Adaptor ());
}


// void QMimeData::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QMimeData::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QMimeData::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QMimeData_Adaptor *)cls)->emitter_QMimeData_destroyed_1302 (arg1);
}


// void QMimeData::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QMimeData::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMimeData_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMimeData::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMimeData_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// QStringList QMimeData::formats()

static void _init_cbs_formats_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_formats_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMimeData_Adaptor *)cls)->cbs_formats_c0_0 ());
}

static void _set_callback_cbs_formats_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_formats_c0_0 = cb;
}


// bool QMimeData::hasFormat(const QString &mimetype)

static void _init_cbs_hasFormat_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimetype");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_hasFormat_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QMimeData_Adaptor *)cls)->cbs_hasFormat_c2025_0 (arg1));
}

static void _set_callback_cbs_hasFormat_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_hasFormat_c2025_0 = cb;
}


// exposed int QMimeData::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMimeData_Adaptor *)cls)->fp_QMimeData_receivers_c1731 (arg1));
}


// QVariant QMimeData::retrieveData(const QString &mimetype, QVariant::Type preferredType)

static void _init_cbs_retrieveData_c3693_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimetype");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("preferredType");
  decl->add_arg<const qt_gsi::Converter<QVariant::Type>::target_type & > (argspec_1);
  decl->set_return<QVariant > ();
}

static void _call_cbs_retrieveData_c3693_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const qt_gsi::Converter<QVariant::Type>::target_type & arg2 = args.read<const qt_gsi::Converter<QVariant::Type>::target_type & > (heap);
  ret.write<QVariant > ((QVariant)((QMimeData_Adaptor *)cls)->cbs_retrieveData_c3693_0 (arg1, arg2));
}

static void _set_callback_cbs_retrieveData_c3693_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_retrieveData_c3693_0 = cb;
}


// exposed QObject *QMimeData::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMimeData_Adaptor *)cls)->fp_QMimeData_sender_c0 ());
}


// void QMimeData::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMimeData_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMimeData_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMimeData> &qtdecl_QMimeData ();

static gsi::Methods methods_QMimeData_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMimeData::QMimeData()\nThis method creates an object of class QMimeData.", &_init_ctor_QMimeData_Adaptor_0, &_call_ctor_QMimeData_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMimeData::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMimeData::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QMimeData::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMimeData::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMimeData::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMimeData::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("formats", "@brief Virtual method QStringList QMimeData::formats()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_formats_c0_0, &_call_cbs_formats_c0_0);
  methods += new qt_gsi::GenericMethod ("formats", "@hide", true, &_init_cbs_formats_c0_0, &_call_cbs_formats_c0_0, &_set_callback_cbs_formats_c0_0);
  methods += new qt_gsi::GenericMethod ("hasFormat", "@brief Virtual method bool QMimeData::hasFormat(const QString &mimetype)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_hasFormat_c2025_0, &_call_cbs_hasFormat_c2025_0);
  methods += new qt_gsi::GenericMethod ("hasFormat", "@hide", true, &_init_cbs_hasFormat_c2025_0, &_call_cbs_hasFormat_c2025_0, &_set_callback_cbs_hasFormat_c2025_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMimeData::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*retrieveData", "@brief Virtual method QVariant QMimeData::retrieveData(const QString &mimetype, QVariant::Type preferredType)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_retrieveData_c3693_0, &_call_cbs_retrieveData_c3693_0);
  methods += new qt_gsi::GenericMethod ("*retrieveData", "@hide", true, &_init_cbs_retrieveData_c3693_0, &_call_cbs_retrieveData_c3693_0, &_set_callback_cbs_retrieveData_c3693_0);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMimeData::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMimeData::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMimeData_Adaptor> decl_QMimeData_Adaptor (qtdecl_QMimeData (), "QtCore", "QMimeData",
  methods_QMimeData_Adaptor (),
  "@qt\n@brief Binding of QMimeData");

}

