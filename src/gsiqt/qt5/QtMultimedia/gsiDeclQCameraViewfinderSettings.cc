
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
*  @file gsiDeclQCameraViewfinderSettings.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraViewfinderSettings>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraViewfinderSettings

//  Constructor QCameraViewfinderSettings::QCameraViewfinderSettings()


static void _init_ctor_QCameraViewfinderSettings_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCameraViewfinderSettings> ();
}

static void _call_ctor_QCameraViewfinderSettings_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraViewfinderSettings *> (new QCameraViewfinderSettings ());
}


//  Constructor QCameraViewfinderSettings::QCameraViewfinderSettings(const QCameraViewfinderSettings &other)


static void _init_ctor_QCameraViewfinderSettings_3871 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraViewfinderSettings & > (argspec_0);
  decl->set_return_new<QCameraViewfinderSettings> ();
}

static void _call_ctor_QCameraViewfinderSettings_3871 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraViewfinderSettings &arg1 = gsi::arg_reader<const QCameraViewfinderSettings & >() (args, heap);
  ret.write<QCameraViewfinderSettings *> (new QCameraViewfinderSettings (arg1));
}


// bool QCameraViewfinderSettings::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCameraViewfinderSettings *)cls)->isNull ());
}


// double QCameraViewfinderSettings::maximumFrameRate()


static void _init_f_maximumFrameRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_maximumFrameRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraViewfinderSettings *)cls)->maximumFrameRate ());
}


// double QCameraViewfinderSettings::minimumFrameRate()


static void _init_f_minimumFrameRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_minimumFrameRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraViewfinderSettings *)cls)->minimumFrameRate ());
}


// QCameraViewfinderSettings &QCameraViewfinderSettings::operator=(const QCameraViewfinderSettings &other)


static void _init_f_operator_eq__3871 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraViewfinderSettings & > (argspec_0);
  decl->set_return<QCameraViewfinderSettings & > ();
}

static void _call_f_operator_eq__3871 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraViewfinderSettings &arg1 = gsi::arg_reader<const QCameraViewfinderSettings & >() (args, heap);
  ret.write<QCameraViewfinderSettings & > ((QCameraViewfinderSettings &)((QCameraViewfinderSettings *)cls)->operator= (arg1));
}


// QSize QCameraViewfinderSettings::pixelAspectRatio()


static void _init_f_pixelAspectRatio_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_pixelAspectRatio_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QCameraViewfinderSettings *)cls)->pixelAspectRatio ());
}


// QVideoFrame::PixelFormat QCameraViewfinderSettings::pixelFormat()


static void _init_f_pixelFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type > ();
}

static void _call_f_pixelFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type > ((qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type)qt_gsi::CppToQtAdaptor<QVideoFrame::PixelFormat>(((QCameraViewfinderSettings *)cls)->pixelFormat ()));
}


// QSize QCameraViewfinderSettings::resolution()


static void _init_f_resolution_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_resolution_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QCameraViewfinderSettings *)cls)->resolution ());
}


// void QCameraViewfinderSettings::setMaximumFrameRate(double rate)


static void _init_f_setMaximumFrameRate_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rate");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMaximumFrameRate_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettings *)cls)->setMaximumFrameRate (arg1);
}


// void QCameraViewfinderSettings::setMinimumFrameRate(double rate)


static void _init_f_setMinimumFrameRate_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rate");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMinimumFrameRate_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettings *)cls)->setMinimumFrameRate (arg1);
}


// void QCameraViewfinderSettings::setPixelAspectRatio(const QSize &ratio)


static void _init_f_setPixelAspectRatio_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ratio");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPixelAspectRatio_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettings *)cls)->setPixelAspectRatio (arg1);
}


// void QCameraViewfinderSettings::setPixelAspectRatio(int horizontal, int vertical)


static void _init_f_setPixelAspectRatio_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("horizontal");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("vertical");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPixelAspectRatio_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettings *)cls)->setPixelAspectRatio (arg1, arg2);
}


// void QCameraViewfinderSettings::setPixelFormat(QVideoFrame::PixelFormat format)


static void _init_f_setPixelFormat_2758 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPixelFormat_2758 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettings *)cls)->setPixelFormat (qt_gsi::QtToCppAdaptor<QVideoFrame::PixelFormat>(arg1).cref());
}


// void QCameraViewfinderSettings::setResolution(const QSize &)


static void _init_f_setResolution_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setResolution_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettings *)cls)->setResolution (arg1);
}


// void QCameraViewfinderSettings::setResolution(int width, int height)


static void _init_f_setResolution_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("height");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setResolution_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettings *)cls)->setResolution (arg1, arg2);
}


// void QCameraViewfinderSettings::swap(QCameraViewfinderSettings &other)


static void _init_f_swap_3176 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QCameraViewfinderSettings & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_3176 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QCameraViewfinderSettings &arg1 = gsi::arg_reader<QCameraViewfinderSettings & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettings *)cls)->swap (arg1);
}


//  bool ::operator!=(const QCameraViewfinderSettings &lhs, const QCameraViewfinderSettings &rhs)
static bool op_QCameraViewfinderSettings_operator_excl__eq__7634(const QCameraViewfinderSettings *_self, const QCameraViewfinderSettings &rhs) {
  return ::operator!=(*_self, rhs);
}


namespace gsi
{

static gsi::Methods methods_QCameraViewfinderSettings () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraViewfinderSettings::QCameraViewfinderSettings()\nThis method creates an object of class QCameraViewfinderSettings.", &_init_ctor_QCameraViewfinderSettings_0, &_call_ctor_QCameraViewfinderSettings_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraViewfinderSettings::QCameraViewfinderSettings(const QCameraViewfinderSettings &other)\nThis method creates an object of class QCameraViewfinderSettings.", &_init_ctor_QCameraViewfinderSettings_3871, &_call_ctor_QCameraViewfinderSettings_3871);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QCameraViewfinderSettings::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod (":maximumFrameRate", "@brief Method double QCameraViewfinderSettings::maximumFrameRate()\n", true, &_init_f_maximumFrameRate_c0, &_call_f_maximumFrameRate_c0);
  methods += new qt_gsi::GenericMethod (":minimumFrameRate", "@brief Method double QCameraViewfinderSettings::minimumFrameRate()\n", true, &_init_f_minimumFrameRate_c0, &_call_f_minimumFrameRate_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QCameraViewfinderSettings &QCameraViewfinderSettings::operator=(const QCameraViewfinderSettings &other)\n", false, &_init_f_operator_eq__3871, &_call_f_operator_eq__3871);
  methods += new qt_gsi::GenericMethod (":pixelAspectRatio", "@brief Method QSize QCameraViewfinderSettings::pixelAspectRatio()\n", true, &_init_f_pixelAspectRatio_c0, &_call_f_pixelAspectRatio_c0);
  methods += new qt_gsi::GenericMethod (":pixelFormat", "@brief Method QVideoFrame::PixelFormat QCameraViewfinderSettings::pixelFormat()\n", true, &_init_f_pixelFormat_c0, &_call_f_pixelFormat_c0);
  methods += new qt_gsi::GenericMethod (":resolution", "@brief Method QSize QCameraViewfinderSettings::resolution()\n", true, &_init_f_resolution_c0, &_call_f_resolution_c0);
  methods += new qt_gsi::GenericMethod ("setMaximumFrameRate|maximumFrameRate=", "@brief Method void QCameraViewfinderSettings::setMaximumFrameRate(double rate)\n", false, &_init_f_setMaximumFrameRate_1071, &_call_f_setMaximumFrameRate_1071);
  methods += new qt_gsi::GenericMethod ("setMinimumFrameRate|minimumFrameRate=", "@brief Method void QCameraViewfinderSettings::setMinimumFrameRate(double rate)\n", false, &_init_f_setMinimumFrameRate_1071, &_call_f_setMinimumFrameRate_1071);
  methods += new qt_gsi::GenericMethod ("setPixelAspectRatio|pixelAspectRatio=", "@brief Method void QCameraViewfinderSettings::setPixelAspectRatio(const QSize &ratio)\n", false, &_init_f_setPixelAspectRatio_1805, &_call_f_setPixelAspectRatio_1805);
  methods += new qt_gsi::GenericMethod ("setPixelAspectRatio", "@brief Method void QCameraViewfinderSettings::setPixelAspectRatio(int horizontal, int vertical)\n", false, &_init_f_setPixelAspectRatio_1426, &_call_f_setPixelAspectRatio_1426);
  methods += new qt_gsi::GenericMethod ("setPixelFormat|pixelFormat=", "@brief Method void QCameraViewfinderSettings::setPixelFormat(QVideoFrame::PixelFormat format)\n", false, &_init_f_setPixelFormat_2758, &_call_f_setPixelFormat_2758);
  methods += new qt_gsi::GenericMethod ("setResolution|resolution=", "@brief Method void QCameraViewfinderSettings::setResolution(const QSize &)\n", false, &_init_f_setResolution_1805, &_call_f_setResolution_1805);
  methods += new qt_gsi::GenericMethod ("setResolution", "@brief Method void QCameraViewfinderSettings::setResolution(int width, int height)\n", false, &_init_f_setResolution_1426, &_call_f_setResolution_1426);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QCameraViewfinderSettings::swap(QCameraViewfinderSettings &other)\n", false, &_init_f_swap_3176, &_call_f_swap_3176);
  methods += gsi::method_ext("!=", &::op_QCameraViewfinderSettings_operator_excl__eq__7634, gsi::arg ("rhs"), "@brief Operator bool ::operator!=(const QCameraViewfinderSettings &lhs, const QCameraViewfinderSettings &rhs)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QCameraViewfinderSettings> decl_QCameraViewfinderSettings ("QtMultimedia", "QCameraViewfinderSettings",
  methods_QCameraViewfinderSettings (),
  "@qt\n@brief Binding of QCameraViewfinderSettings");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraViewfinderSettings> &qtdecl_QCameraViewfinderSettings () { return decl_QCameraViewfinderSettings; }

}

