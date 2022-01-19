
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
*  @file gsiDeclQAccessibleStateChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleStateChangeEvent>
#include <QAccessibleInterface>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleStateChangeEvent

// QAccessible::State QAccessibleStateChangeEvent::changedStates()


static void _init_f_changedStates_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessible::State > ();
}

static void _call_f_changedStates_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessible::State > ((QAccessible::State)((QAccessibleStateChangeEvent *)cls)->changedStates ());
}


namespace gsi
{

static gsi::Methods methods_QAccessibleStateChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("changedStates", "@brief Method QAccessible::State QAccessibleStateChangeEvent::changedStates()\n", true, &_init_f_changedStates_c0, &_call_f_changedStates_c0);
  return methods;
}

gsi::Class<QAccessibleEvent> &qtdecl_QAccessibleEvent ();

gsi::Class<QAccessibleStateChangeEvent> decl_QAccessibleStateChangeEvent (qtdecl_QAccessibleEvent (), "QtGui", "QAccessibleStateChangeEvent_Native",
  methods_QAccessibleStateChangeEvent (),
  "@hide\n@alias QAccessibleStateChangeEvent");

GSI_QTGUI_PUBLIC gsi::Class<QAccessibleStateChangeEvent> &qtdecl_QAccessibleStateChangeEvent () { return decl_QAccessibleStateChangeEvent; }

}


class QAccessibleStateChangeEvent_Adaptor : public QAccessibleStateChangeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleStateChangeEvent_Adaptor();

  //  [adaptor ctor] QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QObject *obj, QAccessible::State state)
  QAccessibleStateChangeEvent_Adaptor(QObject *obj, QAccessible::State state) : QAccessibleStateChangeEvent(obj, state)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QAccessibleInterface *iface, QAccessible::State state)
  QAccessibleStateChangeEvent_Adaptor(QAccessibleInterface *iface, QAccessible::State state) : QAccessibleStateChangeEvent(iface, state)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QAccessibleInterface *QAccessibleStateChangeEvent::accessibleInterface()
  QAccessibleInterface * cbs_accessibleInterface_c0_0() const
  {
    return QAccessibleStateChangeEvent::accessibleInterface();
  }

  virtual QAccessibleInterface * accessibleInterface() const
  {
    if (cb_accessibleInterface_c0_0.can_issue()) {
      return cb_accessibleInterface_c0_0.issue<QAccessibleStateChangeEvent_Adaptor, QAccessibleInterface *>(&QAccessibleStateChangeEvent_Adaptor::cbs_accessibleInterface_c0_0);
    } else {
      return QAccessibleStateChangeEvent::accessibleInterface();
    }
  }

  gsi::Callback cb_accessibleInterface_c0_0;
};

QAccessibleStateChangeEvent_Adaptor::~QAccessibleStateChangeEvent_Adaptor() { }

//  Constructor QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QObject *obj, QAccessible::State state) (adaptor class)

static void _init_ctor_QAccessibleStateChangeEvent_Adaptor_3346 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("state");
  decl->add_arg<QAccessible::State > (argspec_1);
  decl->set_return_new<QAccessibleStateChangeEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleStateChangeEvent_Adaptor_3346 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  QAccessible::State arg2 = gsi::arg_reader<QAccessible::State >() (args, heap);
  ret.write<QAccessibleStateChangeEvent_Adaptor *> (new QAccessibleStateChangeEvent_Adaptor (arg1, arg2));
}


//  Constructor QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QAccessibleInterface *iface, QAccessible::State state) (adaptor class)

static void _init_ctor_QAccessibleStateChangeEvent_Adaptor_4666 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("iface");
  decl->add_arg<QAccessibleInterface * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("state");
  decl->add_arg<QAccessible::State > (argspec_1);
  decl->set_return_new<QAccessibleStateChangeEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleStateChangeEvent_Adaptor_4666 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAccessibleInterface *arg1 = gsi::arg_reader<QAccessibleInterface * >() (args, heap);
  QAccessible::State arg2 = gsi::arg_reader<QAccessible::State >() (args, heap);
  ret.write<QAccessibleStateChangeEvent_Adaptor *> (new QAccessibleStateChangeEvent_Adaptor (arg1, arg2));
}


// QAccessibleInterface *QAccessibleStateChangeEvent::accessibleInterface()

static void _init_cbs_accessibleInterface_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_cbs_accessibleInterface_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleStateChangeEvent_Adaptor *)cls)->cbs_accessibleInterface_c0_0 ());
}

static void _set_callback_cbs_accessibleInterface_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleStateChangeEvent_Adaptor *)cls)->cb_accessibleInterface_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleStateChangeEvent> &qtdecl_QAccessibleStateChangeEvent ();

static gsi::Methods methods_QAccessibleStateChangeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QObject *obj, QAccessible::State state)\nThis method creates an object of class QAccessibleStateChangeEvent.", &_init_ctor_QAccessibleStateChangeEvent_Adaptor_3346, &_call_ctor_QAccessibleStateChangeEvent_Adaptor_3346);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleStateChangeEvent::QAccessibleStateChangeEvent(QAccessibleInterface *iface, QAccessible::State state)\nThis method creates an object of class QAccessibleStateChangeEvent.", &_init_ctor_QAccessibleStateChangeEvent_Adaptor_4666, &_call_ctor_QAccessibleStateChangeEvent_Adaptor_4666);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@brief Virtual method QAccessibleInterface *QAccessibleStateChangeEvent::accessibleInterface()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@hide", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0, &_set_callback_cbs_accessibleInterface_c0_0);
  return methods;
}

gsi::Class<QAccessibleStateChangeEvent_Adaptor> decl_QAccessibleStateChangeEvent_Adaptor (qtdecl_QAccessibleStateChangeEvent (), "QtGui", "QAccessibleStateChangeEvent",
  methods_QAccessibleStateChangeEvent_Adaptor (),
  "@qt\n@brief Binding of QAccessibleStateChangeEvent");

}

