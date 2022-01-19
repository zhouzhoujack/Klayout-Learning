/********************************************************************************
** Form generated from reading UI file 'GDS2WriterOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GDS2WRITEROPTIONPAGE_H
#define UI_GDS2WRITEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GDS2WriterOptionPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *write_timestamps;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *cell_name_length_le;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QCheckBox *write_cell_properties;
    QLabel *label_7;
    QCheckBox *write_file_properties;
    QLabel *label_8;
    QLineEdit *max_vertex_le;
    QLabel *label_3;
    QCheckBox *multi_xy_cbx;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *libname_le;
    QCheckBox *no_zero_length_paths;
    QCheckBox *resolve_skew_arrays_cbx;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *GDS2WriterOptionPage)
    {
        if (GDS2WriterOptionPage->objectName().isEmpty())
            GDS2WriterOptionPage->setObjectName(QString::fromUtf8("GDS2WriterOptionPage"));
        GDS2WriterOptionPage->resize(656, 315);
        vboxLayout = new QVBoxLayout(GDS2WriterOptionPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(GDS2WriterOptionPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        write_timestamps = new QCheckBox(groupBox);
        write_timestamps->setObjectName(QString::fromUtf8("write_timestamps"));

        gridLayout->addWidget(write_timestamps, 7, 0, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        cell_name_length_le = new QLineEdit(groupBox);
        cell_name_length_le->setObjectName(QString::fromUtf8("cell_name_length_le"));

        gridLayout->addWidget(cell_name_length_le, 1, 1, 1, 1);

        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        write_cell_properties = new QCheckBox(frame);
        write_cell_properties->setObjectName(QString::fromUtf8("write_cell_properties"));

        horizontalLayout->addWidget(write_cell_properties);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        write_file_properties = new QCheckBox(frame);
        write_file_properties->setObjectName(QString::fromUtf8("write_file_properties"));

        horizontalLayout->addWidget(write_file_properties);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_8);


        gridLayout->addWidget(frame, 4, 0, 1, 3);

        max_vertex_le = new QLineEdit(groupBox);
        max_vertex_le->setObjectName(QString::fromUtf8("max_vertex_le"));

        gridLayout->addWidget(max_vertex_le, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        multi_xy_cbx = new QCheckBox(groupBox);
        multi_xy_cbx->setObjectName(QString::fromUtf8("multi_xy_cbx"));

        gridLayout->addWidget(multi_xy_cbx, 3, 1, 1, 3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        libname_le = new QLineEdit(groupBox);
        libname_le->setObjectName(QString::fromUtf8("libname_le"));

        gridLayout->addWidget(libname_le, 0, 1, 1, 2);

        no_zero_length_paths = new QCheckBox(groupBox);
        no_zero_length_paths->setObjectName(QString::fromUtf8("no_zero_length_paths"));

        gridLayout->addWidget(no_zero_length_paths, 6, 0, 1, 3);

        resolve_skew_arrays_cbx = new QCheckBox(groupBox);
        resolve_skew_arrays_cbx->setObjectName(QString::fromUtf8("resolve_skew_arrays_cbx"));

        gridLayout->addWidget(resolve_skew_arrays_cbx, 5, 0, 1, 3);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(524, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        QWidget::setTabOrder(libname_le, cell_name_length_le);
        QWidget::setTabOrder(cell_name_length_le, max_vertex_le);
        QWidget::setTabOrder(max_vertex_le, multi_xy_cbx);
        QWidget::setTabOrder(multi_xy_cbx, no_zero_length_paths);
        QWidget::setTabOrder(no_zero_length_paths, write_timestamps);

        retranslateUi(GDS2WriterOptionPage);

        QMetaObject::connectSlotsByName(GDS2WriterOptionPage);
    } // setupUi

    void retranslateUi(QWidget *GDS2WriterOptionPage)
    {
        GDS2WriterOptionPage->setWindowTitle(QApplication::translate("GDS2WriterOptionPage", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("GDS2WriterOptionPage", "GDS2 Writer Options", nullptr));
        write_timestamps->setText(QApplication::translate("GDS2WriterOptionPage", "Write current time to time stamps (BGNLIB, BGNSTR)", nullptr));
        label->setText(QApplication::translate("GDS2WriterOptionPage", "Max. cell name length", nullptr));
        label_4->setText(QApplication::translate("GDS2WriterOptionPage", "(<4000 recommended, absolute limit 8191)", nullptr));
        label_6->setText(QApplication::translate("GDS2WriterOptionPage", "Write", nullptr));
        write_cell_properties->setText(QApplication::translate("GDS2WriterOptionPage", "cell", nullptr));
        label_7->setText(QApplication::translate("GDS2WriterOptionPage", "/", nullptr));
        write_file_properties->setText(QApplication::translate("GDS2WriterOptionPage", "layout", nullptr));
        label_8->setText(QApplication::translate("GDS2WriterOptionPage", "properties (at the cost of compatibility)", nullptr));
        label_3->setText(QApplication::translate("GDS2WriterOptionPage", "(keep empty for unspecified limit)", nullptr));
        multi_xy_cbx->setText(QApplication::translate("GDS2WriterOptionPage", "Multi-XY record mode for boundaries\n"
"(enables infinitely large polygons/paths at the cost of compatibility)", nullptr));
        label_5->setText(QApplication::translate("GDS2WriterOptionPage", "Library name", nullptr));
        label_2->setText(QApplication::translate("GDS2WriterOptionPage", "Max. vertices", nullptr));
        no_zero_length_paths->setText(QApplication::translate("GDS2WriterOptionPage", "Eliminate zero-length paths (convert to BOUNDARY)", nullptr));
        resolve_skew_arrays_cbx->setText(QApplication::translate("GDS2WriterOptionPage", "Resolve skew (non-orthogonal) arrays into single instances", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GDS2WriterOptionPage: public Ui_GDS2WriterOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GDS2WRITEROPTIONPAGE_H
