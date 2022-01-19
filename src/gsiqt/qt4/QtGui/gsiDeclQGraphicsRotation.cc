
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
*  @file gsiDeclQGraphicsRotation.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsRotation>
#include <QChildEvent>
#include <QEvent>
#include <QMatrix4x4>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QVector3D>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsRotation

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QGraphicsRotation::staticMetaObject);
}


// double QGraphicsRotation::angle()


static void _init_f_angle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_angle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QGraphicsRotation *)cls)->angle ());
}


// void QGraphicsRotation::applyTo(QMatrix4x4 *matrix)


static void _init_f_applyTo_c1556 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<QMatrix4x4 * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_applyTo_c1556 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMatrix4x4 *arg1 = gsi::arg_reader<QMatrix4x4 * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsRotation *)cls)->applyTo (arg1);
}


// QVector3D QGraphicsRotation::axis()


static void _init_f_axis_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector3D > ();
}

static void _call_f_axis_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D > ((QVector3D)((QGraphicsRotation *)cls)->axis ());
}


// QVector3D QGraphicsRotation::origin()


static void _init_f_origin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector3D > ();
}

static void _call_f_origin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D > ((QVector3D)((QGraphicsRotation *)cls)->origin ());
}


// void QGraphicsRotation::setAngle(double)


static void _init_f_setAngle_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAngle_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsRotation *)cls)->setAngle (arg1);
}


// void QGraphicsRotation::setAxis(const QVector3D &axis)


static void _init_f_setAxis_2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("axis");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAxis_2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = gsi::arg_reader<const QVector3D & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsRotation *)cls)->setAxis (arg1);
}


// void QGraphicsRotation::setAxis(Qt::Axis axis)


static void _init_f_setAxis_1154 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("axis");
  decl->add_arg<const qt_gsi::Converter<Qt::Axis>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAxis_1154 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::Axis>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::Axis>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsRotation *)cls)->setAxis (qt_gsi::QtToCppAdaptor<Qt::Axis>(arg1).cref());
}


// void QGraphicsRotation::setOrigin(const QVector3D &point)


static void _init_f_setOrigin_2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOrigin_2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = gsi::arg_reader<const QVector3D & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsRotation *)cls)->setOrigin (arg1);
}


// static QString QGraphicsRotation::tr(const char *s, const char *c)


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
  ret.write<QString > ((QString)QGraphicsRotation::tr (arg1, arg2));
}


// static QString QGraphicsRotation::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QGraphicsRotation::tr (arg1, arg2, arg3));
}


// static QString QGraphicsRotation::trUtf8(const char *s, const char *c)


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
  ret.write<QString > ((QString)QGraphicsRotation::trUtf8 (arg1, arg2));
}


// static QString QGraphicsRotation::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QGraphicsRotation::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QGraphicsRotation () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":angle", "@brief Method double QGraphicsRotation::angle()\n", true, &_init_f_angle_c0, &_call_f_angle_c0);
  methods += new qt_gsi::GenericMethod ("applyTo", "@brief Method void QGraphicsRotation::applyTo(QMatrix4x4 *matrix)\nThis is a reimplementation of QGraphicsTransform::applyTo", true, &_init_f_applyTo_c1556, &_call_f_applyTo_c1556);
  methods += new qt_gsi::GenericMethod (":axis", "@brief Method QVector3D QGraphicsRotation::axis()\n", true, &_init_f_axis_c0, &_call_f_axis_c0);
  methods += new qt_gsi::GenericMethod (":origin", "@brief Method QVector3D QGraphicsRotation::origin()\n", true, &_init_f_origin_c0, &_call_f_origin_c0);
  methods += new qt_gsi::GenericMethod ("setAngle|angle=", "@brief Method void QGraphicsRotation::setAngle(double)\n", false, &_init_f_setAngle_1071, &_call_f_setAngle_1071);
  methods += new qt_gsi::GenericMethod ("setAxis|axis=", "@brief Method void QGraphicsRotation::setAxis(const QVector3D &axis)\n", false, &_init_f_setAxis_2140, &_call_f_setAxis_2140);
  methods += new qt_gsi::GenericMethod ("setAxis|axis=", "@brief Method void QGraphicsRotation::setAxis(Qt::Axis axis)\n", false, &_init_f_setAxis_1154, &_call_f_setAxis_1154);
  methods += new qt_gsi::GenericMethod ("setOrigin|origin=", "@brief Method void QGraphicsRotation::setOrigin(const QVector3D &point)\n", false, &_init_f_setOrigin_2140, &_call_f_setOrigin_2140);
  methods += gsi::qt_signal ("angleChanged()", "angleChanged", "@brief Signal declaration for QGraphicsRotation::angleChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("axisChanged()", "axisChanged", "@brief Signal declaration for QGraphicsRotation::axisChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QGraphicsRotation::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("originChanged()", "originChanged", "@brief Signal declaration for QGraphicsRotation::originChanged()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QGraphicsRotation::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QGraphicsRotation::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QGraphicsRotation::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QGraphicsRotation::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QGraphicsTransform> &qtdecl_QGraphicsTransform ();

qt_gsi::QtNativeClass<QGraphicsRotation> decl_QGraphicsRotation (qtdecl_QGraphicsTransform (), "QtGui", "QGraphicsRotation_Native",
  methods_QGraphicsRotation (),
  "@hide\n@alias QGraphicsRotation");

GSI_QTGUI_PUBLIC gsi::Class<QGraphicsRotation> &qtdecl_QGraphicsRotation () { return decl_QGraphicsRotation; }

}


class QGraphicsRotation_Adaptor : public QGraphicsRotation, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsRotation_Adaptor();

  //  [adaptor ctor] QGraphicsRotation::QGraphicsRotation(QObject *parent)
  QGraphicsRotation_Adaptor() : QGraphicsRotation()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGraphicsRotation::QGraphicsRotation(QObject *parent)
  QGraphicsRotation_Adaptor(QObject *parent) : QGraphicsRotation(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QGraphicsRotation::receivers(const char *signal)
  int fp_QGraphicsRotation_receivers_c1731 (const char *signal) const {
    return QGraphicsRotation::receivers(signal);
  }

  //  [expose] QObject *QGraphicsRotation::sender()
  QObject * fp_QGraphicsRotation_sender_c0 () const {
    return QGraphicsRotation::sender();
  }

  //  [expose] void QGraphicsRotation::update()
  void fp_QGraphicsRotation_update_0 () {
    QGraphicsRotation::update();
  }

  //  [adaptor impl] void QGraphicsRotation::applyTo(QMatrix4x4 *matrix)
  void cbs_applyTo_c1556_0(QMatrix4x4 *matrix) const
  {
    QGraphicsRotation::applyTo(matrix);
  }

  virtual void applyTo(QMatrix4x4 *matrix) const
  {
    if (cb_applyTo_c1556_0.can_issue()) {
      cb_applyTo_c1556_0.issue<QGraphicsRotation_Adaptor, QMatrix4x4 *>(&QGraphicsRotation_Adaptor::cbs_applyTo_c1556_0, matrix);
    } else {
      QGraphicsRotation::applyTo(matrix);
    }
  }

  //  [adaptor impl] bool QGraphicsRotation::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QGraphicsRotation::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QGraphicsRotation_Adaptor, bool, QEvent *>(&QGraphicsRotation_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QGraphicsRotation::event(arg1);
    }
  }

  //  [adaptor impl] bool QGraphicsRotation::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QGraphicsRotation::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QGraphicsRotation_Adaptor, bool, QObject *, QEvent *>(&QGraphicsRotation_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QGraphicsRotation::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QGraphicsRotation::angleChanged()
  void emitter_QGraphicsRotation_angleChanged_0()
  {
    emit QGraphicsRotation::angleChanged();
  }

  //  [emitter impl] void QGraphicsRotation::axisChanged()
  void emitter_QGraphicsRotation_axisChanged_0()
  {
    emit QGraphicsRotation::axisChanged();
  }

  //  [adaptor impl] void QGraphicsRotation::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QGraphicsRotation::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QGraphicsRotation_Adaptor, QChildEvent *>(&QGraphicsRotation_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QGraphicsRotation::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QGraphicsRotation::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QGraphicsRotation::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QGraphicsRotation_Adaptor, QEvent *>(&QGraphicsRotation_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QGraphicsRotation::customEvent(arg1);
    }
  }

  //  [emitter impl] void QGraphicsRotation::destroyed(QObject *)
  void emitter_QGraphicsRotation_destroyed_1302(QObject *arg1)
  {
    emit QGraphicsRotation::destroyed(arg1);
  }

  //  [adaptor impl] void QGraphicsRotation::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QGraphicsRotation::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QGraphicsRotation_Adaptor, const char *>(&QGraphicsRotation_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QGraphicsRotation::disconnectNotify(signal);
    }
  }

  //  [emitter impl] void QGraphicsRotation::originChanged()
  void emitter_QGraphicsRotation_originChanged_0()
  {
    emit QGraphicsRotation::originChanged();
  }

  //  [adaptor impl] void QGraphicsRotation::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QGraphicsRotation::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QGraphicsRotation_Adaptor, QTimerEvent *>(&QGraphicsRotation_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QGraphicsRotation::timerEvent(arg1);
    }
  }

  gsi::Callback cb_applyTo_c1556_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QGraphicsRotation_Adaptor::~QGraphicsRotation_Adaptor() { }

//  Constructor QGraphicsRotation::QGraphicsRotation(QObject *parent) (adaptor class)

static void _init_ctor_QGraphicsRotation_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QGraphicsRotation_Adaptor> ();
}

static void _call_ctor_QGraphicsRotation_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QGraphicsRotation_Adaptor *> (new QGraphicsRotation_Adaptor (arg1));
}


// emitter void QGraphicsRotation::angleChanged()

static void _init_emitter_angleChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_angleChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QGraphicsRotation_Adaptor *)cls)->emitter_QGraphicsRotation_angleChanged_0 ();
}


// void QGraphicsRotation::applyTo(QMatrix4x4 *matrix)

static void _init_cbs_applyTo_c1556_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<QMatrix4x4 * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_applyTo_c1556_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMatrix4x4 *arg1 = args.read<QMatrix4x4 * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsRotation_Adaptor *)cls)->cbs_applyTo_c1556_0 (arg1);
}

static void _set_callback_cbs_applyTo_c1556_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsRotation_Adaptor *)cls)->cb_applyTo_c1556_0 = cb;
}


// emitter void QGraphicsRotation::axisChanged()

static void _init_emitter_axisChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_axisChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QGraphicsRotation_Adaptor *)cls)->emitter_QGraphicsRotation_axisChanged_0 ();
}


// void QGraphicsRotation::childEvent(QChildEvent *)

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
  ((QGraphicsRotation_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsRotation_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QGraphicsRotation::customEvent(QEvent *)

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
  ((QGraphicsRotation_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsRotation_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QGraphicsRotation::destroyed(QObject *)

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
  ((QGraphicsRotation_Adaptor *)cls)->emitter_QGraphicsRotation_destroyed_1302 (arg1);
}


// void QGraphicsRotation::disconnectNotify(const char *signal)

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
  ((QGraphicsRotation_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsRotation_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QGraphicsRotation::event(QEvent *)

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
  ret.write<bool > ((bool)((QGraphicsRotation_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsRotation_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QGraphicsRotation::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QGraphicsRotation_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsRotation_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QGraphicsRotation::originChanged()

static void _init_emitter_originChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_originChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QGraphicsRotation_Adaptor *)cls)->emitter_QGraphicsRotation_originChanged_0 ();
}


// exposed int QGraphicsRotation::receivers(const char *signal)

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
  ret.write<int > ((int)((QGraphicsRotation_Adaptor *)cls)->fp_QGraphicsRotation_receivers_c1731 (arg1));
}


// exposed QObject *QGraphicsRotation::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QGraphicsRotation_Adaptor *)cls)->fp_QGraphicsRotation_sender_c0 ());
}


// void QGraphicsRotation::timerEvent(QTimerEvent *)

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
  ((QGraphicsRotation_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsRotation_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// exposed void QGraphicsRotation::update()

static void _init_fp_update_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_fp_update_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsRotation_Adaptor *)cls)->fp_QGraphicsRotation_update_0 ();
}


namespace gsi
{

gsi::Class<QGraphicsRotation> &qtdecl_QGraphicsRotation ();

static gsi::Methods methods_QGraphicsRotation_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsRotation::QGraphicsRotation(QObject *parent)\nThis method creates an object of class QGraphicsRotation.", &_init_ctor_QGraphicsRotation_Adaptor_1302, &_call_ctor_QGraphicsRotation_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("emit_angleChanged", "@brief Emitter for signal void QGraphicsRotation::angleChanged()\nCall this method to emit this signal.", false, &_init_emitter_angleChanged_0, &_call_emitter_angleChanged_0);
  methods += new qt_gsi::GenericMethod ("applyTo", "@brief Virtual method void QGraphicsRotation::applyTo(QMatrix4x4 *matrix)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_applyTo_c1556_0, &_call_cbs_applyTo_c1556_0);
  methods += new qt_gsi::GenericMethod ("applyTo", "@hide", true, &_init_cbs_applyTo_c1556_0, &_call_cbs_applyTo_c1556_0, &_set_callback_cbs_applyTo_c1556_0);
  methods += new qt_gsi::GenericMethod ("emit_axisChanged", "@brief Emitter for signal void QGraphicsRotation::axisChanged()\nCall this method to emit this signal.", false, &_init_emitter_axisChanged_0, &_call_emitter_axisChanged_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QGraphicsRotation::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QGraphicsRotation::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QGraphicsRotation::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QGraphicsRotation::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QGraphicsRotation::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QGraphicsRotation::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_originChanged", "@brief Emitter for signal void QGraphicsRotation::originChanged()\nCall this method to emit this signal.", false, &_init_emitter_originChanged_0, &_call_emitter_originChanged_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QGraphicsRotation::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QGraphicsRotation::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QGraphicsRotation::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*update", "@brief Method void QGraphicsRotation::update()\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_update_0, &_call_fp_update_0);
  return methods;
}

gsi::Class<QGraphicsRotation_Adaptor> decl_QGraphicsRotation_Adaptor (qtdecl_QGraphicsRotation (), "QtGui", "QGraphicsRotation",
  methods_QGraphicsRotation_Adaptor (),
  "@qt\n@brief Binding of QGraphicsRotation");

}

