
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
*  @file gsiDeclQDnsHostAddressRecord.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDnsHostAddressRecord>
#include <QHostAddress>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDnsHostAddressRecord

//  Constructor QDnsHostAddressRecord::QDnsHostAddressRecord()


static void _init_ctor_QDnsHostAddressRecord_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDnsHostAddressRecord> ();
}

static void _call_ctor_QDnsHostAddressRecord_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDnsHostAddressRecord *> (new QDnsHostAddressRecord ());
}


//  Constructor QDnsHostAddressRecord::QDnsHostAddressRecord(const QDnsHostAddressRecord &other)


static void _init_ctor_QDnsHostAddressRecord_3418 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsHostAddressRecord & > (argspec_0);
  decl->set_return_new<QDnsHostAddressRecord> ();
}

static void _call_ctor_QDnsHostAddressRecord_3418 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsHostAddressRecord &arg1 = args.read<const QDnsHostAddressRecord & > (heap);
  ret.write<QDnsHostAddressRecord *> (new QDnsHostAddressRecord (arg1));
}


// QString QDnsHostAddressRecord::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDnsHostAddressRecord *)cls)->name ());
}


// QDnsHostAddressRecord &QDnsHostAddressRecord::operator=(const QDnsHostAddressRecord &other)


static void _init_f_operator_eq__3418 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsHostAddressRecord & > (argspec_0);
  decl->set_return<QDnsHostAddressRecord & > ();
}

static void _call_f_operator_eq__3418 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsHostAddressRecord &arg1 = args.read<const QDnsHostAddressRecord & > (heap);
  ret.write<QDnsHostAddressRecord & > ((QDnsHostAddressRecord &)((QDnsHostAddressRecord *)cls)->operator= (arg1));
}


// void QDnsHostAddressRecord::swap(QDnsHostAddressRecord &other)


static void _init_f_swap_2723 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QDnsHostAddressRecord & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2723 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDnsHostAddressRecord &arg1 = args.read<QDnsHostAddressRecord & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDnsHostAddressRecord *)cls)->swap (arg1);
}


// quint32 QDnsHostAddressRecord::timeToLive()


static void _init_f_timeToLive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_timeToLive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QDnsHostAddressRecord *)cls)->timeToLive ());
}


// QHostAddress QDnsHostAddressRecord::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QHostAddress > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHostAddress > ((QHostAddress)((QDnsHostAddressRecord *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QDnsHostAddressRecord () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsHostAddressRecord::QDnsHostAddressRecord()\nThis method creates an object of class QDnsHostAddressRecord.", &_init_ctor_QDnsHostAddressRecord_0, &_call_ctor_QDnsHostAddressRecord_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsHostAddressRecord::QDnsHostAddressRecord(const QDnsHostAddressRecord &other)\nThis method creates an object of class QDnsHostAddressRecord.", &_init_ctor_QDnsHostAddressRecord_3418, &_call_ctor_QDnsHostAddressRecord_3418);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QDnsHostAddressRecord::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDnsHostAddressRecord &QDnsHostAddressRecord::operator=(const QDnsHostAddressRecord &other)\n", false, &_init_f_operator_eq__3418, &_call_f_operator_eq__3418);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QDnsHostAddressRecord::swap(QDnsHostAddressRecord &other)\n", false, &_init_f_swap_2723, &_call_f_swap_2723);
  methods += new qt_gsi::GenericMethod ("timeToLive", "@brief Method quint32 QDnsHostAddressRecord::timeToLive()\n", true, &_init_f_timeToLive_c0, &_call_f_timeToLive_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QHostAddress QDnsHostAddressRecord::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QDnsHostAddressRecord> decl_QDnsHostAddressRecord ("QtMultimedia", "QDnsHostAddressRecord",
  methods_QDnsHostAddressRecord (),
  "@qt\n@brief Binding of QDnsHostAddressRecord");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QDnsHostAddressRecord> &qtdecl_QDnsHostAddressRecord () { return decl_QDnsHostAddressRecord; }

}

