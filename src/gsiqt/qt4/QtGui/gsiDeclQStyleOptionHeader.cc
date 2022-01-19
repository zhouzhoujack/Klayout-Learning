
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
*  @file gsiDeclQStyleOptionHeader.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionHeader>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionHeader

//  Constructor QStyleOptionHeader::QStyleOptionHeader()


static void _init_ctor_QStyleOptionHeader_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionHeader> ();
}

static void _call_ctor_QStyleOptionHeader_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionHeader *> (new QStyleOptionHeader ());
}


//  Constructor QStyleOptionHeader::QStyleOptionHeader(const QStyleOptionHeader &other)


static void _init_ctor_QStyleOptionHeader_3141 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionHeader & > (argspec_0);
  decl->set_return_new<QStyleOptionHeader> ();
}

static void _call_ctor_QStyleOptionHeader_3141 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionHeader &arg1 = gsi::arg_reader<const QStyleOptionHeader & >() (args, heap);
  ret.write<QStyleOptionHeader *> (new QStyleOptionHeader (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionHeader () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionHeader::QStyleOptionHeader()\nThis method creates an object of class QStyleOptionHeader.", &_init_ctor_QStyleOptionHeader_0, &_call_ctor_QStyleOptionHeader_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionHeader::QStyleOptionHeader(const QStyleOptionHeader &other)\nThis method creates an object of class QStyleOptionHeader.", &_init_ctor_QStyleOptionHeader_3141, &_call_ctor_QStyleOptionHeader_3141);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionHeader> decl_QStyleOptionHeader (qtdecl_QStyleOption (), "QtGui", "QStyleOptionHeader",
  methods_QStyleOptionHeader (),
  "@qt\n@brief Binding of QStyleOptionHeader");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionHeader> &qtdecl_QStyleOptionHeader () { return decl_QStyleOptionHeader; }

}

