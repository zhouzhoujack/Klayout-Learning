/********************************************************************************
** Form generated from reading UI file 'OASISWriterOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OASISWRITEROPTIONPAGE_H
#define UI_OASISWRITEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OASISWriterOptionPage
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QFrame *frame;
    QGridLayout *gridLayout;
    QComboBox *std_prop_mode;
    QCheckBox *strict_mode;
    QLabel *label_6;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout;
    QLineEdit *subst_char;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QSlider *compression_slider;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QCheckBox *write_cblocks;
    QLabel *label_4;
    QCheckBox *permissive;
    QLabel *label_10;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *OASISWriterOptionPage)
    {
        if (OASISWriterOptionPage->objectName().isEmpty())
            OASISWriterOptionPage->setObjectName(QString::fromUtf8("OASISWriterOptionPage"));
        OASISWriterOptionPage->resize(590, 248);
        vboxLayout = new QVBoxLayout(OASISWriterOptionPage);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(OASISWriterOptionPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        std_prop_mode = new QComboBox(frame);
        std_prop_mode->addItem(QString());
        std_prop_mode->addItem(QString());
        std_prop_mode->addItem(QString());
        std_prop_mode->setObjectName(QString::fromUtf8("std_prop_mode"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(std_prop_mode->sizePolicy().hasHeightForWidth());
        std_prop_mode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(std_prop_mode, 4, 2, 1, 3);

        strict_mode = new QCheckBox(frame);
        strict_mode->setObjectName(QString::fromUtf8("strict_mode"));

        gridLayout->addWidget(strict_mode, 3, 2, 1, 3);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        subst_char = new QLineEdit(frame_2);
        subst_char->setObjectName(QString::fromUtf8("subst_char"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(subst_char->sizePolicy().hasHeightForWidth());
        subst_char->setSizePolicy(sizePolicy1);
        subst_char->setMaximumSize(QSize(50, 16777215));

        hboxLayout->addWidget(subst_char);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label_8);


        gridLayout->addWidget(frame_2, 5, 2, 1, 3);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        spacerItem = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        compression_slider = new QSlider(frame);
        compression_slider->setObjectName(QString::fromUtf8("compression_slider"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(compression_slider->sizePolicy().hasHeightForWidth());
        compression_slider->setSizePolicy(sizePolicy4);
        compression_slider->setMaximum(10);
        compression_slider->setPageStep(1);
        compression_slider->setOrientation(Qt::Horizontal);
        compression_slider->setTickPosition(QSlider::TicksBelow);

        gridLayout->addWidget(compression_slider, 0, 2, 1, 3);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 0, 0, 2, 1);

        write_cblocks = new QCheckBox(frame);
        write_cblocks->setObjectName(QString::fromUtf8("write_cblocks"));

        gridLayout->addWidget(write_cblocks, 2, 2, 1, 3);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 4, 1, 1);

        permissive = new QCheckBox(frame);
        permissive->setObjectName(QString::fromUtf8("permissive"));

        gridLayout->addWidget(permissive, 6, 2, 1, 3);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 6, 0, 1, 1);


        vboxLayout1->addWidget(frame);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(524, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        QWidget::setTabOrder(compression_slider, write_cblocks);
        QWidget::setTabOrder(write_cblocks, strict_mode);
        QWidget::setTabOrder(strict_mode, subst_char);

        retranslateUi(OASISWriterOptionPage);

        QMetaObject::connectSlotsByName(OASISWriterOptionPage);
    } // setupUi

    void retranslateUi(QWidget *OASISWriterOptionPage)
    {
        OASISWriterOptionPage->setWindowTitle(QApplication::translate("OASISWriterOptionPage", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("OASISWriterOptionPage", "OASIS Writer Options", nullptr));
        std_prop_mode->setItemText(0, QApplication::translate("OASISWriterOptionPage", "No standard properties", nullptr));
        std_prop_mode->setItemText(1, QApplication::translate("OASISWriterOptionPage", "Global standard properties", nullptr));
        std_prop_mode->setItemText(2, QApplication::translate("OASISWriterOptionPage", "Global + per-cell bounding boxes", nullptr));

        strict_mode->setText(QApplication::translate("OASISWriterOptionPage", "Write strict-mode OASIS files", nullptr));
        label_6->setText(QApplication::translate("OASISWriterOptionPage", "Strict mode", nullptr));
        label_8->setText(QApplication::translate("OASISWriterOptionPage", "Used instead of invalid characters if not empty", nullptr));
        label_9->setText(QApplication::translate("OASISWriterOptionPage", "Standard properties", nullptr));
        label_7->setText(QApplication::translate("OASISWriterOptionPage", "Substitution character", nullptr));
        label_3->setText(QApplication::translate("OASISWriterOptionPage", "0 (low)", nullptr));
        label_2->setText(QString());
        label_5->setText(QApplication::translate("OASISWriterOptionPage", "CBLOCK compression", nullptr));
        label->setText(QApplication::translate("OASISWriterOptionPage", "Compaction level\n"
"(repetition detection)", nullptr));
        write_cblocks->setText(QApplication::translate("OASISWriterOptionPage", "Use CBLOCK compression for each cell (RFC1951)", nullptr));
        label_4->setText(QApplication::translate("OASISWriterOptionPage", "(high) 10", nullptr));
        permissive->setText(QApplication::translate("OASISWriterOptionPage", "Don't fail on paths with odd width and other odd shapes", nullptr));
        label_10->setText(QApplication::translate("OASISWriterOptionPage", "Permissive mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OASISWriterOptionPage: public Ui_OASISWriterOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OASISWRITEROPTIONPAGE_H
