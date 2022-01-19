
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
*  @file gsiDeclQTextFragment.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextFragment>
#include <QGlyphRun>
#include <QTextCharFormat>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextFragment

//  Constructor QTextFragment::QTextFragment()


static void _init_ctor_QTextFragment_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextFragment> ();
}

static void _call_ctor_QTextFragment_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFragment *> (new QTextFragment ());
}


//  Constructor QTextFragment::QTextFragment(const QTextFragment &o)


static void _init_ctor_QTextFragment_2635 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFragment & > (argspec_0);
  decl->set_return_new<QTextFragment> ();
}

static void _call_ctor_QTextFragment_2635 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFragment &arg1 = gsi::arg_reader<const QTextFragment & >() (args, heap);
  ret.write<QTextFragment *> (new QTextFragment (arg1));
}


// QTextCharFormat QTextFragment::charFormat()


static void _init_f_charFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCharFormat > ();
}

static void _call_f_charFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCharFormat > ((QTextCharFormat)((QTextFragment *)cls)->charFormat ());
}


// int QTextFragment::charFormatIndex()


static void _init_f_charFormatIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_charFormatIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFragment *)cls)->charFormatIndex ());
}


// bool QTextFragment::contains(int position)


static void _init_f_contains_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("position");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QTextFragment *)cls)->contains (arg1));
}


// QList<QGlyphRun> QTextFragment::glyphRuns(int from, int length)


static void _init_f_glyphRuns_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("from", true, "-1");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("length", true, "-1");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QList<QGlyphRun> > ();
}

static void _call_f_glyphRuns_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QList<QGlyphRun> > ((QList<QGlyphRun>)((QTextFragment *)cls)->glyphRuns (arg1, arg2));
}


// bool QTextFragment::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFragment *)cls)->isValid ());
}


// int QTextFragment::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFragment *)cls)->length ());
}


// bool QTextFragment::operator!=(const QTextFragment &o)


static void _init_f_operator_excl__eq__c2635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFragment & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFragment &arg1 = gsi::arg_reader<const QTextFragment & >() (args, heap);
  ret.write<bool > ((bool)((QTextFragment *)cls)->operator!= (arg1));
}


// bool QTextFragment::operator<(const QTextFragment &o)


static void _init_f_operator_lt__c2635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFragment & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c2635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFragment &arg1 = gsi::arg_reader<const QTextFragment & >() (args, heap);
  ret.write<bool > ((bool)((QTextFragment *)cls)->operator< (arg1));
}


// QTextFragment &QTextFragment::operator=(const QTextFragment &o)


static void _init_f_operator_eq__2635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFragment & > (argspec_0);
  decl->set_return<QTextFragment & > ();
}

static void _call_f_operator_eq__2635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFragment &arg1 = gsi::arg_reader<const QTextFragment & >() (args, heap);
  ret.write<QTextFragment & > ((QTextFragment &)((QTextFragment *)cls)->operator= (arg1));
}


// bool QTextFragment::operator==(const QTextFragment &o)


static void _init_f_operator_eq__eq__c2635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFragment & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFragment &arg1 = gsi::arg_reader<const QTextFragment & >() (args, heap);
  ret.write<bool > ((bool)((QTextFragment *)cls)->operator== (arg1));
}


// int QTextFragment::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFragment *)cls)->position ());
}


// QString QTextFragment::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextFragment *)cls)->text ());
}



namespace gsi
{

static gsi::Methods methods_QTextFragment () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFragment::QTextFragment()\nThis method creates an object of class QTextFragment.", &_init_ctor_QTextFragment_0, &_call_ctor_QTextFragment_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFragment::QTextFragment(const QTextFragment &o)\nThis method creates an object of class QTextFragment.", &_init_ctor_QTextFragment_2635, &_call_ctor_QTextFragment_2635);
  methods += new qt_gsi::GenericMethod ("charFormat", "@brief Method QTextCharFormat QTextFragment::charFormat()\n", true, &_init_f_charFormat_c0, &_call_f_charFormat_c0);
  methods += new qt_gsi::GenericMethod ("charFormatIndex", "@brief Method int QTextFragment::charFormatIndex()\n", true, &_init_f_charFormatIndex_c0, &_call_f_charFormatIndex_c0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QTextFragment::contains(int position)\n", true, &_init_f_contains_c767, &_call_f_contains_c767);
  methods += new qt_gsi::GenericMethod ("glyphRuns", "@brief Method QList<QGlyphRun> QTextFragment::glyphRuns(int from, int length)\n", true, &_init_f_glyphRuns_c1426, &_call_f_glyphRuns_c1426);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextFragment::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method int QTextFragment::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QTextFragment::operator!=(const QTextFragment &o)\n", true, &_init_f_operator_excl__eq__c2635, &_call_f_operator_excl__eq__c2635);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QTextFragment::operator<(const QTextFragment &o)\n", true, &_init_f_operator_lt__c2635, &_call_f_operator_lt__c2635);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTextFragment &QTextFragment::operator=(const QTextFragment &o)\n", false, &_init_f_operator_eq__2635, &_call_f_operator_eq__2635);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QTextFragment::operator==(const QTextFragment &o)\n", true, &_init_f_operator_eq__eq__c2635, &_call_f_operator_eq__eq__c2635);
  methods += new qt_gsi::GenericMethod ("position", "@brief Method int QTextFragment::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QTextFragment::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  return methods;
}

gsi::Class<QTextFragment> decl_QTextFragment ("QtGui", "QTextFragment",
  methods_QTextFragment (),
  "@qt\n@brief Binding of QTextFragment");


GSI_QTGUI_PUBLIC gsi::Class<QTextFragment> &qtdecl_QTextFragment () { return decl_QTextFragment; }

}

