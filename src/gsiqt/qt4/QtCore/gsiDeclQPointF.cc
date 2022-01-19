
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
*  @file gsiDeclQPointF.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPointF>
#include <QMatrix>
#include <QMatrix4x4>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPointF

//  Constructor QPointF::QPointF()


static void _init_ctor_QPointF_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPointF> ();
}

static void _call_ctor_QPointF_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF *> (new QPointF ());
}


//  Constructor QPointF::QPointF(const QPoint &p)


static void _init_ctor_QPointF_1916 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return_new<QPointF> ();
}

static void _call_ctor_QPointF_1916 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QPointF *> (new QPointF (arg1));
}


//  Constructor QPointF::QPointF(double xpos, double ypos)


static void _init_ctor_QPointF_2034 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("xpos");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ypos");
  decl->add_arg<double > (argspec_1);
  decl->set_return_new<QPointF> ();
}

static void _call_ctor_QPointF_2034 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QPointF *> (new QPointF (arg1, arg2));
}


// bool QPointF::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointF *)cls)->isNull ());
}


// double QPointF::manhattanLength()


static void _init_f_manhattanLength_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_manhattanLength_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPointF *)cls)->manhattanLength ());
}


// QPointF &QPointF::operator*=(double c)


static void _init_f_operator_star__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QPointF & > ();
}

static void _call_f_operator_star__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QPointF & > ((QPointF &)((QPointF *)cls)->operator*= (arg1));
}


// QPointF &QPointF::operator+=(const QPointF &p)


static void _init_f_operator_plus__eq__1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<QPointF & > ();
}

static void _call_f_operator_plus__eq__1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QPointF & > ((QPointF &)((QPointF *)cls)->operator+= (arg1));
}


// QPointF &QPointF::operator-=(const QPointF &p)


static void _init_f_operator_minus__eq__1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<QPointF & > ();
}

static void _call_f_operator_minus__eq__1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QPointF & > ((QPointF &)((QPointF *)cls)->operator-= (arg1));
}


// QPointF &QPointF::operator/=(double c)


static void _init_f_operator_slash__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QPointF & > ();
}

static void _call_f_operator_slash__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QPointF & > ((QPointF &)((QPointF *)cls)->operator/= (arg1));
}


// double &QPointF::rx()


static void _init_f_rx_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double & > ();
}

static void _call_f_rx_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double & > ((double &)((QPointF *)cls)->rx ());
}


// double &QPointF::ry()


static void _init_f_ry_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double & > ();
}

static void _call_f_ry_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double & > ((double &)((QPointF *)cls)->ry ());
}


// void QPointF::setX(double x)


static void _init_f_setX_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setX_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointF *)cls)->setX (arg1);
}


// void QPointF::setY(double y)


static void _init_f_setY_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setY_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointF *)cls)->setY (arg1);
}


// QPoint QPointF::toPoint()


static void _init_f_toPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_toPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QPointF *)cls)->toPoint ());
}


// double QPointF::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPointF *)cls)->x ());
}


// double QPointF::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPointF *)cls)->y ());
}


//  bool ::operator==(const QPointF &p1, const QPointF &p2)
static bool op_QPointF_operator_eq__eq__3864(const QPointF *_self, const QPointF &p2) {
  return ::operator==(*_self, p2);
}

//  bool ::operator!=(const QPointF &p1, const QPointF &p2)
static bool op_QPointF_operator_excl__eq__3864(const QPointF *_self, const QPointF &p2) {
  return ::operator!=(*_self, p2);
}

//  const QPointF ::operator+(const QPointF &p1, const QPointF &p2)
static const QPointF op_QPointF_operator_plus__3864(const QPointF *_self, const QPointF &p2) {
  return ::operator+(*_self, p2);
}

//  const QPointF ::operator-(const QPointF &p1, const QPointF &p2)
static const QPointF op_QPointF_operator_minus__3864(const QPointF *_self, const QPointF &p2) {
  return ::operator-(*_self, p2);
}

//  const QPointF ::operator*(const QPointF &p, qreal c)
static const QPointF op_QPointF_operator_star__2847(const QPointF *_self, qreal c) {
  return ::operator*(*_self, c);
}

//  const QPointF ::operator-(const QPointF &p)
static const QPointF op_QPointF_operator_minus__1986(const QPointF *_self) {
  return ::operator-(*_self);
}

//  const QPointF ::operator/(const QPointF &p, qreal c)
static const QPointF op_QPointF_operator_slash__2847(const QPointF *_self, qreal c) {
  return ::operator/(*_self, c);
}


namespace gsi
{

static gsi::Methods methods_QPointF () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPointF::QPointF()\nThis method creates an object of class QPointF.", &_init_ctor_QPointF_0, &_call_ctor_QPointF_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPointF::QPointF(const QPoint &p)\nThis method creates an object of class QPointF.", &_init_ctor_QPointF_1916, &_call_ctor_QPointF_1916);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPointF::QPointF(double xpos, double ypos)\nThis method creates an object of class QPointF.", &_init_ctor_QPointF_2034, &_call_ctor_QPointF_2034);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QPointF::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("manhattanLength", "@brief Method double QPointF::manhattanLength()\n", true, &_init_f_manhattanLength_c0, &_call_f_manhattanLength_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QPointF &QPointF::operator*=(double c)\n", false, &_init_f_operator_star__eq__1071, &_call_f_operator_star__eq__1071);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QPointF &QPointF::operator+=(const QPointF &p)\n", false, &_init_f_operator_plus__eq__1986, &_call_f_operator_plus__eq__1986);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QPointF &QPointF::operator-=(const QPointF &p)\n", false, &_init_f_operator_minus__eq__1986, &_call_f_operator_minus__eq__1986);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QPointF &QPointF::operator/=(double c)\n", false, &_init_f_operator_slash__eq__1071, &_call_f_operator_slash__eq__1071);
  methods += new qt_gsi::GenericMethod ("rx", "@brief Method double &QPointF::rx()\n", false, &_init_f_rx_0, &_call_f_rx_0);
  methods += new qt_gsi::GenericMethod ("ry", "@brief Method double &QPointF::ry()\n", false, &_init_f_ry_0, &_call_f_ry_0);
  methods += new qt_gsi::GenericMethod ("setX|x=", "@brief Method void QPointF::setX(double x)\n", false, &_init_f_setX_1071, &_call_f_setX_1071);
  methods += new qt_gsi::GenericMethod ("setY|y=", "@brief Method void QPointF::setY(double y)\n", false, &_init_f_setY_1071, &_call_f_setY_1071);
  methods += new qt_gsi::GenericMethod ("toPoint", "@brief Method QPoint QPointF::toPoint()\n", true, &_init_f_toPoint_c0, &_call_f_toPoint_c0);
  methods += new qt_gsi::GenericMethod (":x", "@brief Method double QPointF::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod (":y", "@brief Method double QPointF::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += gsi::method_ext("==", &::op_QPointF_operator_eq__eq__3864, gsi::arg ("p2"), "@brief Operator bool ::operator==(const QPointF &p1, const QPointF &p2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QPointF_operator_excl__eq__3864, gsi::arg ("p2"), "@brief Operator bool ::operator!=(const QPointF &p1, const QPointF &p2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QPointF_operator_plus__3864, gsi::arg ("p2"), "@brief Operator const QPointF ::operator+(const QPointF &p1, const QPointF &p2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QPointF_operator_minus__3864, gsi::arg ("p2"), "@brief Operator const QPointF ::operator-(const QPointF &p1, const QPointF &p2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QPointF_operator_star__2847, gsi::arg ("c"), "@brief Operator const QPointF ::operator*(const QPointF &p, qreal c)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QPointF_operator_minus__1986, "@brief Operator const QPointF ::operator-(const QPointF &p)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QPointF_operator_slash__2847, gsi::arg ("c"), "@brief Operator const QPointF ::operator/(const QPointF &p, qreal c)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QPointF> decl_QPointF ("QtCore", "QPointF",
  methods_QPointF (),
  "@qt\n@brief Binding of QPointF");


GSI_QTCORE_PUBLIC gsi::Class<QPointF> &qtdecl_QPointF () { return decl_QPointF; }

}
