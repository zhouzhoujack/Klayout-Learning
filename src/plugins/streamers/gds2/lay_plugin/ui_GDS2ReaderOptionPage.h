/********************************************************************************
** Form generated from reading UI file 'GDS2ReaderOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GDS2READEROPTIONPAGE_H
#define UI_GDS2READEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GDS2ReaderOptionPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *box_mode_cb;
    QCheckBox *big_records_cbx;
    QCheckBox *big_poly_cbx;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GDS2ReaderOptionPage)
    {
        if (GDS2ReaderOptionPage->objectName().isEmpty())
            GDS2ReaderOptionPage->setObjectName(QString::fromUtf8("GDS2ReaderOptionPage"));
        GDS2ReaderOptionPage->resize(629, 547);
        verticalLayout = new QVBoxLayout(GDS2ReaderOptionPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(GDS2ReaderOptionPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        box_mode_cb = new QComboBox(groupBox);
        box_mode_cb->addItem(QString());
        box_mode_cb->addItem(QString());
        box_mode_cb->addItem(QString());
        box_mode_cb->addItem(QString());
        box_mode_cb->setObjectName(QString::fromUtf8("box_mode_cb"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(box_mode_cb->sizePolicy().hasHeightForWidth());
        box_mode_cb->setSizePolicy(sizePolicy);

        gridLayout->addWidget(box_mode_cb, 0, 1, 1, 1);

        big_records_cbx = new QCheckBox(groupBox);
        big_records_cbx->setObjectName(QString::fromUtf8("big_records_cbx"));

        gridLayout->addWidget(big_records_cbx, 1, 1, 1, 1);

        big_poly_cbx = new QCheckBox(groupBox);
        big_poly_cbx->setObjectName(QString::fromUtf8("big_poly_cbx"));

        gridLayout->addWidget(big_poly_cbx, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(GDS2ReaderOptionPage);

        QMetaObject::connectSlotsByName(GDS2ReaderOptionPage);
    } // setupUi

    void retranslateUi(QWidget *GDS2ReaderOptionPage)
    {
        GDS2ReaderOptionPage->setWindowTitle(QApplication::translate("GDS2ReaderOptionPage", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("GDS2ReaderOptionPage", "Compatibility", nullptr));
        label->setText(QApplication::translate("GDS2ReaderOptionPage", "BOX records", nullptr));
        box_mode_cb->setItemText(0, QApplication::translate("GDS2ReaderOptionPage", "Ignore", nullptr));
        box_mode_cb->setItemText(1, QApplication::translate("GDS2ReaderOptionPage", "Treat as rectangles", nullptr));
        box_mode_cb->setItemText(2, QApplication::translate("GDS2ReaderOptionPage", "Treat as boundaries", nullptr));
        box_mode_cb->setItemText(3, QApplication::translate("GDS2ReaderOptionPage", "Treat as errors", nullptr));

        big_records_cbx->setText(QApplication::translate("GDS2ReaderOptionPage", "Do not allow big records (>32767 bytes)", nullptr));
        big_poly_cbx->setText(QApplication::translate("GDS2ReaderOptionPage", "Do not allow multiple XY records for BOUNDARY elements", nullptr));
        label_2->setText(QApplication::translate("GDS2ReaderOptionPage", "Big records", nullptr));
        label_3->setText(QApplication::translate("GDS2ReaderOptionPage", "Big polygons", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GDS2ReaderOptionPage: public Ui_GDS2ReaderOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GDS2READEROPTIONPAGE_H
