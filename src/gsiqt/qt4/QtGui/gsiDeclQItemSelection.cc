
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
*  @file gsiDeclQItemSelection.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QItemSelection>
#include <QItemSelectionRange>
#include <QModelIndex>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QItemSelection

//  Constructor QItemSelection::QItemSelection()


static void _init_ctor_QItemSelection_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QItemSelection> ();
}

static void _call_ctor_QItemSelection_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QItemSelection *> (new QItemSelection ());
}


//  Constructor QItemSelection::QItemSelection(const QModelIndex &topLeft, const QModelIndex &bottomRight)


static void _init_ctor_QItemSelection_4682 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("topLeft");
  decl->add_arg<const QModelIndex & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("bottomRight");
  decl->add_arg<const QModelIndex & > (argspec_1);
  decl->set_return_new<QItemSelection> ();
}

static void _call_ctor_QItemSelection_4682 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  const QModelIndex &arg2 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  ret.write<QItemSelection *> (new QItemSelection (arg1, arg2));
}


// bool QItemSelection::contains(const QModelIndex &index)


static void _init_f_contains_c2395 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<const QModelIndex & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c2395 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  ret.write<bool > ((bool)((QItemSelection *)cls)->contains (arg1));
}


// QList<QModelIndex> QItemSelection::indexes()


static void _init_f_indexes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QModelIndex> > ();
}

static void _call_f_indexes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QModelIndex> > ((QList<QModelIndex>)((QItemSelection *)cls)->indexes ());
}


// void QItemSelection::merge(const QItemSelection &other, QFlags<QItemSelectionModel::SelectionFlag> command)


static void _init_f_merge_7090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QItemSelection & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("command");
  decl->add_arg<QFlags<QItemSelectionModel::SelectionFlag> > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_merge_7090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QItemSelection &arg1 = gsi::arg_reader<const QItemSelection & >() (args, heap);
  QFlags<QItemSelectionModel::SelectionFlag> arg2 = gsi::arg_reader<QFlags<QItemSelectionModel::SelectionFlag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QItemSelection *)cls)->merge (arg1, arg2);
}


// void QItemSelection::select(const QModelIndex &topLeft, const QModelIndex &bottomRight)


static void _init_f_select_4682 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("topLeft");
  decl->add_arg<const QModelIndex & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("bottomRight");
  decl->add_arg<const QModelIndex & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_select_4682 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  const QModelIndex &arg2 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QItemSelection *)cls)->select (arg1, arg2);
}


// static void QItemSelection::split(const QItemSelectionRange &range, const QItemSelectionRange &other, QItemSelection *result)


static void _init_f_split_8260 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("range");
  decl->add_arg<const QItemSelectionRange & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("other");
  decl->add_arg<const QItemSelectionRange & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("result");
  decl->add_arg<QItemSelection * > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_split_8260 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QItemSelectionRange &arg1 = gsi::arg_reader<const QItemSelectionRange & >() (args, heap);
  const QItemSelectionRange &arg2 = gsi::arg_reader<const QItemSelectionRange & >() (args, heap);
  QItemSelection *arg3 = gsi::arg_reader<QItemSelection * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QItemSelection::split (arg1, arg2, arg3);
}



namespace gsi
{

static gsi::Methods methods_QItemSelection () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QItemSelection::QItemSelection()\nThis method creates an object of class QItemSelection.", &_init_ctor_QItemSelection_0, &_call_ctor_QItemSelection_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QItemSelection::QItemSelection(const QModelIndex &topLeft, const QModelIndex &bottomRight)\nThis method creates an object of class QItemSelection.", &_init_ctor_QItemSelection_4682, &_call_ctor_QItemSelection_4682);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QItemSelection::contains(const QModelIndex &index)\n", true, &_init_f_contains_c2395, &_call_f_contains_c2395);
  methods += new qt_gsi::GenericMethod ("indexes", "@brief Method QList<QModelIndex> QItemSelection::indexes()\n", true, &_init_f_indexes_c0, &_call_f_indexes_c0);
  methods += new qt_gsi::GenericMethod ("merge", "@brief Method void QItemSelection::merge(const QItemSelection &other, QFlags<QItemSelectionModel::SelectionFlag> command)\n", false, &_init_f_merge_7090, &_call_f_merge_7090);
  methods += new qt_gsi::GenericMethod ("select", "@brief Method void QItemSelection::select(const QModelIndex &topLeft, const QModelIndex &bottomRight)\n", false, &_init_f_select_4682, &_call_f_select_4682);
  methods += new qt_gsi::GenericStaticMethod ("split", "@brief Static method void QItemSelection::split(const QItemSelectionRange &range, const QItemSelectionRange &other, QItemSelection *result)\nThis method is static and can be called without an instance.", &_init_f_split_8260, &_call_f_split_8260);
  return methods;
}

gsi::Class<QItemSelection> decl_QItemSelection ("QtGui", "QItemSelection",
  methods_QItemSelection (),
  "@qt\n@brief Binding of QItemSelection");


GSI_QTGUI_PUBLIC gsi::Class<QItemSelection> &qtdecl_QItemSelection () { return decl_QItemSelection; }

}

