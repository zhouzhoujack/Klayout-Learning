/********************************************************************************
** Form generated from reading UI file 'CIFWriterOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIFWRITEROPTIONPAGE_H
#define UI_CIFWRITEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CIFWriterOptionPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *blank_separator_cbx;
    QLabel *label_2;
    QLabel *label;
    QCheckBox *dummy_calls_cbx;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *CIFWriterOptionPage)
    {
        if (CIFWriterOptionPage->objectName().isEmpty())
            CIFWriterOptionPage->setObjectName(QString::fromUtf8("CIFWriterOptionPage"));
        CIFWriterOptionPage->resize(619, 209);
        vboxLayout = new QVBoxLayout(CIFWriterOptionPage);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(CIFWriterOptionPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        blank_separator_cbx = new QCheckBox(groupBox);
        blank_separator_cbx->setObjectName(QString::fromUtf8("blank_separator_cbx"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(blank_separator_cbx->sizePolicy().hasHeightForWidth());
        blank_separator_cbx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(blank_separator_cbx, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        dummy_calls_cbx = new QCheckBox(groupBox);
        dummy_calls_cbx->setObjectName(QString::fromUtf8("dummy_calls_cbx"));

        gridLayout->addWidget(dummy_calls_cbx, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(601, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(CIFWriterOptionPage);

        QMetaObject::connectSlotsByName(CIFWriterOptionPage);
    } // setupUi

    void retranslateUi(QWidget *CIFWriterOptionPage)
    {
        CIFWriterOptionPage->setWindowTitle(QApplication::translate("CIFWriterOptionPage", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("CIFWriterOptionPage", "CIF Writer Options", nullptr));
        blank_separator_cbx->setText(QApplication::translate("CIFWriterOptionPage", "If checked, a blank character is used as x/y coordinate\n"
"separator. Otherwise a comma is used.", nullptr));
        label_2->setText(QApplication::translate("CIFWriterOptionPage", "Blank as x/y separator", nullptr));
        label->setText(QApplication::translate("CIFWriterOptionPage", "Dummy cell calls", nullptr));
        dummy_calls_cbx->setText(QApplication::translate("CIFWriterOptionPage", "If checked, dummy cell calls are added on global level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CIFWriterOptionPage: public Ui_CIFWriterOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIFWRITEROPTIONPAGE_H
