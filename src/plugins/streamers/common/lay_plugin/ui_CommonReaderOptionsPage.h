/********************************************************************************
** Form generated from reading UI file 'CommonReaderOptionsPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMONREADEROPTIONSPAGE_H
#define UI_COMMONREADEROPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layLayerMappingWidget.h"

QT_BEGIN_NAMESPACE

class Ui_CommonReaderOptionPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *_2;
    QCheckBox *enable_text_cbx;
    QCheckBox *enable_properties_cbx;
    QGroupBox *layer_subset_grp;
    QGridLayout *gridLayout;
    lay::LayerMappingWidget *layer_map;
    QCheckBox *read_all_cbx;
    QFrame *line;

    void setupUi(QWidget *CommonReaderOptionPage)
    {
        if (CommonReaderOptionPage->objectName().isEmpty())
            CommonReaderOptionPage->setObjectName(QString::fromUtf8("CommonReaderOptionPage"));
        CommonReaderOptionPage->resize(629, 519);
        verticalLayout = new QVBoxLayout(CommonReaderOptionPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(CommonReaderOptionPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        _2 = new QVBoxLayout(groupBox);
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(9, 9, 9, 9);
        enable_text_cbx = new QCheckBox(groupBox);
        enable_text_cbx->setObjectName(QString::fromUtf8("enable_text_cbx"));

        _2->addWidget(enable_text_cbx);

        enable_properties_cbx = new QCheckBox(groupBox);
        enable_properties_cbx->setObjectName(QString::fromUtf8("enable_properties_cbx"));

        _2->addWidget(enable_properties_cbx);


        verticalLayout->addWidget(groupBox);

        layer_subset_grp = new QGroupBox(CommonReaderOptionPage);
        layer_subset_grp->setObjectName(QString::fromUtf8("layer_subset_grp"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(layer_subset_grp->sizePolicy().hasHeightForWidth());
        layer_subset_grp->setSizePolicy(sizePolicy1);
        layer_subset_grp->setCheckable(false);
        gridLayout = new QGridLayout(layer_subset_grp);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        layer_map = new lay::LayerMappingWidget(layer_subset_grp);
        layer_map->setObjectName(QString::fromUtf8("layer_map"));
        sizePolicy.setHeightForWidth(layer_map->sizePolicy().hasHeightForWidth());
        layer_map->setSizePolicy(sizePolicy);
        layer_map->setFrameShape(QFrame::NoFrame);
        layer_map->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(layer_map, 2, 0, 10, 2);

        read_all_cbx = new QCheckBox(layer_subset_grp);
        read_all_cbx->setObjectName(QString::fromUtf8("read_all_cbx"));

        gridLayout->addWidget(read_all_cbx, 0, 0, 1, 2);

        line = new QFrame(layer_subset_grp);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);


        verticalLayout->addWidget(layer_subset_grp);


        retranslateUi(CommonReaderOptionPage);
        QObject::connect(layer_map, SIGNAL(enable_all_layers(bool)), read_all_cbx, SLOT(setChecked(bool)));

        QMetaObject::connectSlotsByName(CommonReaderOptionPage);
    } // setupUi

    void retranslateUi(QWidget *CommonReaderOptionPage)
    {
        CommonReaderOptionPage->setWindowTitle(QApplication::translate("CommonReaderOptionPage", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("CommonReaderOptionPage", "Feature Subset", nullptr));
        enable_text_cbx->setText(QApplication::translate("CommonReaderOptionPage", "Enable text objects", nullptr));
        enable_properties_cbx->setText(QApplication::translate("CommonReaderOptionPage", "Enable properties", nullptr));
#ifndef QT_NO_TOOLTIP
        layer_subset_grp->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        layer_subset_grp->setTitle(QApplication::translate("CommonReaderOptionPage", "Layer Subset And Layer Mapping", nullptr));
        read_all_cbx->setText(QApplication::translate("CommonReaderOptionPage", "Read all layers (additionally to the ones in the mapping table)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommonReaderOptionPage: public Ui_CommonReaderOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMONREADEROPTIONSPAGE_H
