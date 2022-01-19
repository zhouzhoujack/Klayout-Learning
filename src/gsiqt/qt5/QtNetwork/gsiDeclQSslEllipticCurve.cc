
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
*  @file gsiDeclQSslEllipticCurve.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSslEllipticCurve>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include "gsiDeclQtNetworkTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSslEllipticCurve

//  Constructor QSslEllipticCurve::QSslEllipticCurve()


static void _init_ctor_QSslEllipticCurve_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSslEllipticCurve> ();
}

static void _call_ctor_QSslEllipticCurve_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslEllipticCurve *> (new QSslEllipticCurve ());
}


// bool QSslEllipticCurve::isTlsNamedCurve()


static void _init_f_isTlsNamedCurve_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isTlsNamedCurve_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSslEllipticCurve *)cls)->isTlsNamedCurve ());
}


// bool QSslEllipticCurve::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSslEllipticCurve *)cls)->isValid ());
}


// QString QSslEllipticCurve::longName()


static void _init_f_longName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_longName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSslEllipticCurve *)cls)->longName ());
}


// QString QSslEllipticCurve::shortName()


static void _init_f_shortName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_shortName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSslEllipticCurve *)cls)->shortName ());
}


// static QSslEllipticCurve QSslEllipticCurve::fromLongName(const QString &name)


static void _init_f_fromLongName_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QSslEllipticCurve > ();
}

static void _call_f_fromLongName_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QSslEllipticCurve > ((QSslEllipticCurve)QSslEllipticCurve::fromLongName (arg1));
}


// static QSslEllipticCurve QSslEllipticCurve::fromShortName(const QString &name)


static void _init_f_fromShortName_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QSslEllipticCurve > ();
}

static void _call_f_fromShortName_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QSslEllipticCurve > ((QSslEllipticCurve)QSslEllipticCurve::fromShortName (arg1));
}


//  bool ::operator==(QSslEllipticCurve lhs, QSslEllipticCurve rhs)
static bool op_QSslEllipticCurve_operator_eq__eq__4216(QSslEllipticCurve *_self, QSslEllipticCurve rhs) {
  return ::operator==(*_self, rhs);
}

//  bool ::operator!=(QSslEllipticCurve lhs, QSslEllipticCurve rhs)
static bool op_QSslEllipticCurve_operator_excl__eq__4216(QSslEllipticCurve *_self, QSslEllipticCurve rhs) {
  return ::operator!=(*_self, rhs);
}


namespace gsi
{

static gsi::Methods methods_QSslEllipticCurve () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslEllipticCurve::QSslEllipticCurve()\nThis method creates an object of class QSslEllipticCurve.", &_init_ctor_QSslEllipticCurve_0, &_call_ctor_QSslEllipticCurve_0);
  methods += new qt_gsi::GenericMethod ("isTlsNamedCurve?", "@brief Method bool QSslEllipticCurve::isTlsNamedCurve()\n", true, &_init_f_isTlsNamedCurve_c0, &_call_f_isTlsNamedCurve_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QSslEllipticCurve::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("longName", "@brief Method QString QSslEllipticCurve::longName()\n", true, &_init_f_longName_c0, &_call_f_longName_c0);
  methods += new qt_gsi::GenericMethod ("shortName", "@brief Method QString QSslEllipticCurve::shortName()\n", true, &_init_f_shortName_c0, &_call_f_shortName_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromLongName", "@brief Static method QSslEllipticCurve QSslEllipticCurve::fromLongName(const QString &name)\nThis method is static and can be called without an instance.", &_init_f_fromLongName_2025, &_call_f_fromLongName_2025);
  methods += new qt_gsi::GenericStaticMethod ("fromShortName", "@brief Static method QSslEllipticCurve QSslEllipticCurve::fromShortName(const QString &name)\nThis method is static and can be called without an instance.", &_init_f_fromShortName_2025, &_call_f_fromShortName_2025);
  methods += gsi::method_ext("==", &::op_QSslEllipticCurve_operator_eq__eq__4216, gsi::arg ("rhs"), "@brief Operator bool ::operator==(QSslEllipticCurve lhs, QSslEllipticCurve rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QSslEllipticCurve_operator_excl__eq__4216, gsi::arg ("rhs"), "@brief Operator bool ::operator!=(QSslEllipticCurve lhs, QSslEllipticCurve rhs)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QSslEllipticCurve> decl_QSslEllipticCurve ("QtNetwork", "QSslEllipticCurve",
  methods_QSslEllipticCurve (),
  "@qt\n@brief Binding of QSslEllipticCurve");


GSI_QTNETWORK_PUBLIC gsi::Class<QSslEllipticCurve> &qtdecl_QSslEllipticCurve () { return decl_QSslEllipticCurve; }

}

