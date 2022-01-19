
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
*  @file gsiDeclQXmlResultItems.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlResultItems>
#include <QXmlItem>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include "gsiDeclQtXmlPatternsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlResultItems

// QXmlItem QXmlResultItems::current()


static void _init_f_current_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QXmlItem > ();
}

static void _call_f_current_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlItem > ((QXmlItem)((QXmlResultItems *)cls)->current ());
}


// bool QXmlResultItems::hasError()


static void _init_f_hasError_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasError_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlResultItems *)cls)->hasError ());
}


// QXmlItem QXmlResultItems::next()


static void _init_f_next_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QXmlItem > ();
}

static void _call_f_next_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlItem > ((QXmlItem)((QXmlResultItems *)cls)->next ());
}


namespace gsi
{

static gsi::Methods methods_QXmlResultItems () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("current", "@brief Method QXmlItem QXmlResultItems::current()\n", true, &_init_f_current_c0, &_call_f_current_c0);
  methods += new qt_gsi::GenericMethod ("hasError", "@brief Method bool QXmlResultItems::hasError()\n", true, &_init_f_hasError_c0, &_call_f_hasError_c0);
  methods += new qt_gsi::GenericMethod ("next", "@brief Method QXmlItem QXmlResultItems::next()\n", false, &_init_f_next_0, &_call_f_next_0);
  return methods;
}

gsi::Class<QXmlResultItems> decl_QXmlResultItems ("QtXmlPatterns", "QXmlResultItems_Native",
  methods_QXmlResultItems (),
  "@hide\n@alias QXmlResultItems");

GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QXmlResultItems> &qtdecl_QXmlResultItems () { return decl_QXmlResultItems; }

}


class QXmlResultItems_Adaptor : public QXmlResultItems, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlResultItems_Adaptor();

  //  [adaptor ctor] QXmlResultItems::QXmlResultItems()
  QXmlResultItems_Adaptor() : QXmlResultItems()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QXmlResultItems_Adaptor::~QXmlResultItems_Adaptor() { }

//  Constructor QXmlResultItems::QXmlResultItems() (adaptor class)

static void _init_ctor_QXmlResultItems_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlResultItems_Adaptor> ();
}

static void _call_ctor_QXmlResultItems_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlResultItems_Adaptor *> (new QXmlResultItems_Adaptor ());
}


namespace gsi
{

gsi::Class<QXmlResultItems> &qtdecl_QXmlResultItems ();

static gsi::Methods methods_QXmlResultItems_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlResultItems::QXmlResultItems()\nThis method creates an object of class QXmlResultItems.", &_init_ctor_QXmlResultItems_Adaptor_0, &_call_ctor_QXmlResultItems_Adaptor_0);
  return methods;
}

gsi::Class<QXmlResultItems_Adaptor> decl_QXmlResultItems_Adaptor (qtdecl_QXmlResultItems (), "QtXmlPatterns", "QXmlResultItems",
  methods_QXmlResultItems_Adaptor (),
  "@qt\n@brief Binding of QXmlResultItems");

}

