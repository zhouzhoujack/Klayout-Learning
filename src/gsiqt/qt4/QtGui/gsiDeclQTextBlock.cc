
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
*  @file gsiDeclQTextBlock.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextBlock>
#include <QTextBlockFormat>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QTextLayout>
#include <QTextList>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextBlock

//  Constructor QTextBlock::QTextBlock()


static void _init_ctor_QTextBlock_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextBlock> ();
}

static void _call_ctor_QTextBlock_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock *> (new QTextBlock ());
}


//  Constructor QTextBlock::QTextBlock(const QTextBlock &o)


static void _init_ctor_QTextBlock_2306 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return_new<QTextBlock> ();
}

static void _call_ctor_QTextBlock_2306 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  ret.write<QTextBlock *> (new QTextBlock (arg1));
}


// QTextBlock::iterator QTextBlock::begin()


static void _init_f_begin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlock::iterator > ();
}

static void _call_f_begin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock::iterator > ((QTextBlock::iterator)((QTextBlock *)cls)->begin ());
}


// QTextBlockFormat QTextBlock::blockFormat()


static void _init_f_blockFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlockFormat > ();
}

static void _call_f_blockFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlockFormat > ((QTextBlockFormat)((QTextBlock *)cls)->blockFormat ());
}


// int QTextBlock::blockFormatIndex()


static void _init_f_blockFormatIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_blockFormatIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->blockFormatIndex ());
}


// int QTextBlock::blockNumber()


static void _init_f_blockNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_blockNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->blockNumber ());
}


// QTextCharFormat QTextBlock::charFormat()


static void _init_f_charFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCharFormat > ();
}

static void _call_f_charFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCharFormat > ((QTextCharFormat)((QTextBlock *)cls)->charFormat ());
}


// int QTextBlock::charFormatIndex()


static void _init_f_charFormatIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_charFormatIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->charFormatIndex ());
}


// void QTextBlock::clearLayout()


static void _init_f_clearLayout_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clearLayout_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlock *)cls)->clearLayout ();
}


// bool QTextBlock::contains(int position)


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
  ret.write<bool > ((bool)((QTextBlock *)cls)->contains (arg1));
}


// const QTextDocument *QTextBlock::document()


static void _init_f_document_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QTextDocument * > ();
}

static void _call_f_document_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QTextDocument * > ((const QTextDocument *)((QTextBlock *)cls)->document ());
}


// QTextBlock::iterator QTextBlock::end()


static void _init_f_end_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlock::iterator > ();
}

static void _call_f_end_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock::iterator > ((QTextBlock::iterator)((QTextBlock *)cls)->end ());
}


// int QTextBlock::firstLineNumber()


static void _init_f_firstLineNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_firstLineNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->firstLineNumber ());
}


// int QTextBlock::fragmentIndex()


static void _init_f_fragmentIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_fragmentIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->fragmentIndex ());
}


// bool QTextBlock::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextBlock *)cls)->isValid ());
}


// bool QTextBlock::isVisible()


static void _init_f_isVisible_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isVisible_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextBlock *)cls)->isVisible ());
}


// QTextLayout *QTextBlock::layout()


static void _init_f_layout_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextLayout * > ();
}

static void _call_f_layout_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextLayout * > ((QTextLayout *)((QTextBlock *)cls)->layout ());
}


// int QTextBlock::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->length ());
}


// int QTextBlock::lineCount()


static void _init_f_lineCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lineCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->lineCount ());
}


// QTextBlock QTextBlock::next()


static void _init_f_next_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlock > ();
}

static void _call_f_next_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock > ((QTextBlock)((QTextBlock *)cls)->next ());
}


// bool QTextBlock::operator!=(const QTextBlock &o)


static void _init_f_operator_excl__eq__c2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  ret.write<bool > ((bool)((QTextBlock *)cls)->operator!= (arg1));
}


// bool QTextBlock::operator<(const QTextBlock &o)


static void _init_f_operator_lt__c2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  ret.write<bool > ((bool)((QTextBlock *)cls)->operator< (arg1));
}


// QTextBlock &QTextBlock::operator=(const QTextBlock &o)


static void _init_f_operator_eq__2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<QTextBlock & > ();
}

static void _call_f_operator_eq__2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  ret.write<QTextBlock & > ((QTextBlock &)((QTextBlock *)cls)->operator= (arg1));
}


// bool QTextBlock::operator==(const QTextBlock &o)


static void _init_f_operator_eq__eq__c2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  ret.write<bool > ((bool)((QTextBlock *)cls)->operator== (arg1));
}


// int QTextBlock::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->position ());
}


// QTextBlock QTextBlock::previous()


static void _init_f_previous_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlock > ();
}

static void _call_f_previous_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock > ((QTextBlock)((QTextBlock *)cls)->previous ());
}


// int QTextBlock::revision()


static void _init_f_revision_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_revision_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->revision ());
}


// void QTextBlock::setLineCount(int count)


static void _init_f_setLineCount_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("count");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLineCount_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlock *)cls)->setLineCount (arg1);
}


// void QTextBlock::setRevision(int rev)


static void _init_f_setRevision_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rev");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRevision_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlock *)cls)->setRevision (arg1);
}


// void QTextBlock::setUserData(QTextBlockUserData *data)


static void _init_f_setUserData_2408 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<QTextBlockUserData * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUserData_2408 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextBlockUserData *arg1 = gsi::arg_reader<QTextBlockUserData * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlock *)cls)->setUserData (arg1);
}


// void QTextBlock::setUserState(int state)


static void _init_f_setUserState_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUserState_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlock *)cls)->setUserState (arg1);
}


// void QTextBlock::setVisible(bool visible)


static void _init_f_setVisible_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("visible");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVisible_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlock *)cls)->setVisible (arg1);
}


// QString QTextBlock::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextBlock *)cls)->text ());
}


// QTextList *QTextBlock::textList()


static void _init_f_textList_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextList * > ();
}

static void _call_f_textList_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextList * > ((QTextList *)((QTextBlock *)cls)->textList ());
}


// QTextBlockUserData *QTextBlock::userData()


static void _init_f_userData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlockUserData * > ();
}

static void _call_f_userData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlockUserData * > ((QTextBlockUserData *)((QTextBlock *)cls)->userData ());
}


// int QTextBlock::userState()


static void _init_f_userState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_userState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextBlock *)cls)->userState ());
}



namespace gsi
{

static gsi::Methods methods_QTextBlock () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextBlock::QTextBlock()\nThis method creates an object of class QTextBlock.", &_init_ctor_QTextBlock_0, &_call_ctor_QTextBlock_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextBlock::QTextBlock(const QTextBlock &o)\nThis method creates an object of class QTextBlock.", &_init_ctor_QTextBlock_2306, &_call_ctor_QTextBlock_2306);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method QTextBlock::iterator QTextBlock::begin()\n", true, &_init_f_begin_c0, &_call_f_begin_c0);
  methods += new qt_gsi::GenericMethod ("blockFormat", "@brief Method QTextBlockFormat QTextBlock::blockFormat()\n", true, &_init_f_blockFormat_c0, &_call_f_blockFormat_c0);
  methods += new qt_gsi::GenericMethod ("blockFormatIndex", "@brief Method int QTextBlock::blockFormatIndex()\n", true, &_init_f_blockFormatIndex_c0, &_call_f_blockFormatIndex_c0);
  methods += new qt_gsi::GenericMethod ("blockNumber", "@brief Method int QTextBlock::blockNumber()\n", true, &_init_f_blockNumber_c0, &_call_f_blockNumber_c0);
  methods += new qt_gsi::GenericMethod ("charFormat", "@brief Method QTextCharFormat QTextBlock::charFormat()\n", true, &_init_f_charFormat_c0, &_call_f_charFormat_c0);
  methods += new qt_gsi::GenericMethod ("charFormatIndex", "@brief Method int QTextBlock::charFormatIndex()\n", true, &_init_f_charFormatIndex_c0, &_call_f_charFormatIndex_c0);
  methods += new qt_gsi::GenericMethod ("clearLayout", "@brief Method void QTextBlock::clearLayout()\n", false, &_init_f_clearLayout_0, &_call_f_clearLayout_0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QTextBlock::contains(int position)\n", true, &_init_f_contains_c767, &_call_f_contains_c767);
  methods += new qt_gsi::GenericMethod ("document", "@brief Method const QTextDocument *QTextBlock::document()\n", true, &_init_f_document_c0, &_call_f_document_c0);
  methods += new qt_gsi::GenericMethod ("end", "@brief Method QTextBlock::iterator QTextBlock::end()\n", true, &_init_f_end_c0, &_call_f_end_c0);
  methods += new qt_gsi::GenericMethod ("firstLineNumber", "@brief Method int QTextBlock::firstLineNumber()\n", true, &_init_f_firstLineNumber_c0, &_call_f_firstLineNumber_c0);
  methods += new qt_gsi::GenericMethod ("fragmentIndex", "@brief Method int QTextBlock::fragmentIndex()\n", true, &_init_f_fragmentIndex_c0, &_call_f_fragmentIndex_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextBlock::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("isVisible?|:visible", "@brief Method bool QTextBlock::isVisible()\n", true, &_init_f_isVisible_c0, &_call_f_isVisible_c0);
  methods += new qt_gsi::GenericMethod ("layout", "@brief Method QTextLayout *QTextBlock::layout()\n", true, &_init_f_layout_c0, &_call_f_layout_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method int QTextBlock::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod (":lineCount", "@brief Method int QTextBlock::lineCount()\n", true, &_init_f_lineCount_c0, &_call_f_lineCount_c0);
  methods += new qt_gsi::GenericMethod ("next", "@brief Method QTextBlock QTextBlock::next()\n", true, &_init_f_next_c0, &_call_f_next_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QTextBlock::operator!=(const QTextBlock &o)\n", true, &_init_f_operator_excl__eq__c2306, &_call_f_operator_excl__eq__c2306);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QTextBlock::operator<(const QTextBlock &o)\n", true, &_init_f_operator_lt__c2306, &_call_f_operator_lt__c2306);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTextBlock &QTextBlock::operator=(const QTextBlock &o)\n", false, &_init_f_operator_eq__2306, &_call_f_operator_eq__2306);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QTextBlock::operator==(const QTextBlock &o)\n", true, &_init_f_operator_eq__eq__c2306, &_call_f_operator_eq__eq__c2306);
  methods += new qt_gsi::GenericMethod ("position", "@brief Method int QTextBlock::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod ("previous", "@brief Method QTextBlock QTextBlock::previous()\n", true, &_init_f_previous_c0, &_call_f_previous_c0);
  methods += new qt_gsi::GenericMethod (":revision", "@brief Method int QTextBlock::revision()\n", true, &_init_f_revision_c0, &_call_f_revision_c0);
  methods += new qt_gsi::GenericMethod ("setLineCount|lineCount=", "@brief Method void QTextBlock::setLineCount(int count)\n", false, &_init_f_setLineCount_767, &_call_f_setLineCount_767);
  methods += new qt_gsi::GenericMethod ("setRevision|revision=", "@brief Method void QTextBlock::setRevision(int rev)\n", false, &_init_f_setRevision_767, &_call_f_setRevision_767);
  methods += new qt_gsi::GenericMethod ("setUserData|userData=", "@brief Method void QTextBlock::setUserData(QTextBlockUserData *data)\n", false, &_init_f_setUserData_2408, &_call_f_setUserData_2408);
  methods += new qt_gsi::GenericMethod ("setUserState|userState=", "@brief Method void QTextBlock::setUserState(int state)\n", false, &_init_f_setUserState_767, &_call_f_setUserState_767);
  methods += new qt_gsi::GenericMethod ("setVisible|visible=", "@brief Method void QTextBlock::setVisible(bool visible)\n", false, &_init_f_setVisible_864, &_call_f_setVisible_864);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QTextBlock::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  methods += new qt_gsi::GenericMethod ("textList", "@brief Method QTextList *QTextBlock::textList()\n", true, &_init_f_textList_c0, &_call_f_textList_c0);
  methods += new qt_gsi::GenericMethod (":userData", "@brief Method QTextBlockUserData *QTextBlock::userData()\n", true, &_init_f_userData_c0, &_call_f_userData_c0);
  methods += new qt_gsi::GenericMethod (":userState", "@brief Method int QTextBlock::userState()\n", true, &_init_f_userState_c0, &_call_f_userState_c0);
  return methods;
}

gsi::Class<QTextBlock> decl_QTextBlock ("QtGui", "QTextBlock",
  methods_QTextBlock (),
  "@qt\n@brief Binding of QTextBlock");


GSI_QTGUI_PUBLIC gsi::Class<QTextBlock> &qtdecl_QTextBlock () { return decl_QTextBlock; }

}
