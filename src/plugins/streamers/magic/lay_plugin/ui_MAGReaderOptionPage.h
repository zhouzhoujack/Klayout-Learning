/********************************************************************************
** Form generated from reading UI file 'MAGReaderOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGREADEROPTIONPAGE_H
#define UI_MAGREADEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layLayerMappingWidget.h"
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_MAGReaderOptionPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_7;
    QCheckBox *keep_names_cbx;
    QLabel *label_3;
    QLineEdit *dbu_le;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *lambda_le;
    QCheckBox *merge_cbx;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    lay::InteractiveListWidget *lib_path;
    QToolButton *del_lib_path;
    QToolButton *move_lib_path_down;
    QToolButton *add_lib_path;
    QLabel *label_5;
    QToolButton *move_lib_path_up;
    QToolButton *add_lib_path_with_choose;
    QGroupBox *layer_subset_grp;
    QGridLayout *_2;
    QCheckBox *read_all_cbx;
    QFrame *line;
    lay::LayerMappingWidget *layer_map;

    void setupUi(QWidget *MAGReaderOptionPage)
    {
        if (MAGReaderOptionPage->objectName().isEmpty())
            MAGReaderOptionPage->setObjectName(QString::fromUtf8("MAGReaderOptionPage"));
        MAGReaderOptionPage->resize(584, 530);
        verticalLayout = new QVBoxLayout(MAGReaderOptionPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(MAGReaderOptionPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        keep_names_cbx = new QCheckBox(groupBox);
        keep_names_cbx->setObjectName(QString::fromUtf8("keep_names_cbx"));

        gridLayout->addWidget(keep_names_cbx, 3, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        dbu_le = new QLineEdit(groupBox);
        dbu_le->setObjectName(QString::fromUtf8("dbu_le"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dbu_le->sizePolicy().hasHeightForWidth());
        dbu_le->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(dbu_le, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lambda_le = new QLineEdit(groupBox);
        lambda_le->setObjectName(QString::fromUtf8("lambda_le"));

        gridLayout->addWidget(lambda_le, 0, 1, 1, 1);

        merge_cbx = new QCheckBox(groupBox);
        merge_cbx->setObjectName(QString::fromUtf8("merge_cbx"));

        gridLayout->addWidget(merge_cbx, 2, 1, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MAGReaderOptionPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        lib_path = new lay::InteractiveListWidget(groupBox_2);
        lib_path->setObjectName(QString::fromUtf8("lib_path"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(lib_path->sizePolicy().hasHeightForWidth());
        lib_path->setSizePolicy(sizePolicy2);
        lib_path->setDragEnabled(true);
        lib_path->setDragDropMode(QAbstractItemView::InternalMove);
        lib_path->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout1->addWidget(lib_path, 0, 0, 5, 1);

        del_lib_path = new QToolButton(groupBox_2);
        del_lib_path->setObjectName(QString::fromUtf8("del_lib_path"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        del_lib_path->setIcon(icon);

        gridLayout1->addWidget(del_lib_path, 1, 1, 1, 1);

        move_lib_path_down = new QToolButton(groupBox_2);
        move_lib_path_down->setObjectName(QString::fromUtf8("move_lib_path_down"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_lib_path_down->setIcon(icon1);

        gridLayout1->addWidget(move_lib_path_down, 3, 1, 1, 1);

        add_lib_path = new QToolButton(groupBox_2);
        add_lib_path->setObjectName(QString::fromUtf8("add_lib_path"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_lib_path->setIcon(icon2);

        gridLayout1->addWidget(add_lib_path, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 5, 0, 1, 2);

        move_lib_path_up = new QToolButton(groupBox_2);
        move_lib_path_up->setObjectName(QString::fromUtf8("move_lib_path_up"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_lib_path_up->setIcon(icon3);

        gridLayout1->addWidget(move_lib_path_up, 2, 1, 1, 1);

        add_lib_path_with_choose = new QToolButton(groupBox_2);
        add_lib_path_with_choose->setObjectName(QString::fromUtf8("add_lib_path_with_choose"));
        add_lib_path_with_choose->setAutoRaise(true);

        gridLayout1->addWidget(add_lib_path_with_choose, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        layer_subset_grp = new QGroupBox(MAGReaderOptionPage);
        layer_subset_grp->setObjectName(QString::fromUtf8("layer_subset_grp"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(layer_subset_grp->sizePolicy().hasHeightForWidth());
        layer_subset_grp->setSizePolicy(sizePolicy3);
        layer_subset_grp->setCheckable(false);
        _2 = new QGridLayout(layer_subset_grp);
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(9, 9, 9, 9);
        read_all_cbx = new QCheckBox(layer_subset_grp);
        read_all_cbx->setObjectName(QString::fromUtf8("read_all_cbx"));

        _2->addWidget(read_all_cbx, 0, 0, 1, 2);

        line = new QFrame(layer_subset_grp);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        _2->addWidget(line, 1, 0, 1, 2);

        layer_map = new lay::LayerMappingWidget(layer_subset_grp);
        layer_map->setObjectName(QString::fromUtf8("layer_map"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(layer_map->sizePolicy().hasHeightForWidth());
        layer_map->setSizePolicy(sizePolicy4);
        layer_map->setFrameShape(QFrame::NoFrame);
        layer_map->setFrameShadow(QFrame::Raised);

        _2->addWidget(layer_map, 2, 0, 10, 2);


        verticalLayout->addWidget(layer_subset_grp);

        QWidget::setTabOrder(lambda_le, dbu_le);
        QWidget::setTabOrder(dbu_le, keep_names_cbx);
        QWidget::setTabOrder(keep_names_cbx, lib_path);
        QWidget::setTabOrder(lib_path, add_lib_path);
        QWidget::setTabOrder(add_lib_path, add_lib_path_with_choose);
        QWidget::setTabOrder(add_lib_path_with_choose, del_lib_path);
        QWidget::setTabOrder(del_lib_path, move_lib_path_up);
        QWidget::setTabOrder(move_lib_path_up, move_lib_path_down);
        QWidget::setTabOrder(move_lib_path_down, read_all_cbx);

        retranslateUi(MAGReaderOptionPage);
        QObject::connect(layer_map, SIGNAL(enable_all_layers(bool)), read_all_cbx, SLOT(setChecked(bool)));

        QMetaObject::connectSlotsByName(MAGReaderOptionPage);
    } // setupUi

    void retranslateUi(QWidget *MAGReaderOptionPage)
    {
        MAGReaderOptionPage->setWindowTitle(QApplication::translate("MAGReaderOptionPage", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("MAGReaderOptionPage", "Input Options", nullptr));
        label_6->setText(QApplication::translate("MAGReaderOptionPage", "Lambda value", nullptr));
        label_7->setText(QApplication::translate("MAGReaderOptionPage", "Micron", nullptr));
        keep_names_cbx->setText(QApplication::translate("MAGReaderOptionPage", "Don't attempt to translate into layer/datatype numbers", nullptr));
        label_3->setText(QApplication::translate("MAGReaderOptionPage", "Micron", nullptr));
        label_4->setText(QApplication::translate("MAGReaderOptionPage", "Keep layer names", nullptr));
        label_2->setText(QApplication::translate("MAGReaderOptionPage", "Database unit   ", nullptr));
        merge_cbx->setText(QApplication::translate("MAGReaderOptionPage", "Merge boxes into polygons", nullptr));
        label->setText(QApplication::translate("MAGReaderOptionPage", "Layout healing", nullptr));
        groupBox_2->setTitle(QApplication::translate("MAGReaderOptionPage", "Library paths", nullptr));
#ifndef QT_NO_TOOLTIP
        del_lib_path->setToolTip(QApplication::translate("MAGReaderOptionPage", "Delete selected paths", nullptr));
#endif // QT_NO_TOOLTIP
        del_lib_path->setText(QApplication::translate("MAGReaderOptionPage", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        move_lib_path_down->setToolTip(QApplication::translate("MAGReaderOptionPage", "Move selected paths down", nullptr));
#endif // QT_NO_TOOLTIP
        move_lib_path_down->setText(QApplication::translate("MAGReaderOptionPage", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        add_lib_path->setToolTip(QApplication::translate("MAGReaderOptionPage", "Add new a directory", nullptr));
#endif // QT_NO_TOOLTIP
        add_lib_path->setText(QApplication::translate("MAGReaderOptionPage", "...", nullptr));
        label_5->setText(QApplication::translate("MAGReaderOptionPage", "Relative paths are resolved relative to the file read.\n"
"You can use expressions inside the path components for variable paths", nullptr));
#ifndef QT_NO_TOOLTIP
        move_lib_path_up->setToolTip(QApplication::translate("MAGReaderOptionPage", "Move selected paths up", nullptr));
#endif // QT_NO_TOOLTIP
        move_lib_path_up->setText(QApplication::translate("MAGReaderOptionPage", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        add_lib_path_with_choose->setToolTip(QApplication::translate("MAGReaderOptionPage", "Add new a directory (file browser)", nullptr));
#endif // QT_NO_TOOLTIP
        add_lib_path_with_choose->setText(QApplication::translate("MAGReaderOptionPage", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        layer_subset_grp->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        layer_subset_grp->setTitle(QApplication::translate("MAGReaderOptionPage", "Layer Subset And Layer Mapping", nullptr));
        read_all_cbx->setText(QApplication::translate("MAGReaderOptionPage", "Read all layers (additionally to the ones in the mapping table)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MAGReaderOptionPage: public Ui_MAGReaderOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGREADEROPTIONPAGE_H
