/********************************************************************************
** Form generated from reading UI file 'BooleanOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOLEANOPTIONSDIALOG_H
#define UI_BOOLEANOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_BooleanOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QFrame *line;
    QComboBox *mode_cbx;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_7;
    QFrame *line_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    lay::CellViewSelectionComboBox *cva_cbx;
    lay::CellViewSelectionComboBox *cvb_cbx;
    lay::CellViewSelectionComboBox *cvr_cbx;
    lay::LayerSelectionComboBox *layera_cbx;
    lay::LayerSelectionComboBox *layerb_cbx;
    lay::LayerSelectionComboBox *layerr_cbx;
    QLabel *label_10;
    QCheckBox *min_coherence_cb;
    QComboBox *hier_mode_cbx;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BooleanOptionsDialog)
    {
        if (BooleanOptionsDialog->objectName().isEmpty())
            BooleanOptionsDialog->setObjectName(QStringLiteral("BooleanOptionsDialog"));
        BooleanOptionsDialog->resize(535, 349);
        vboxLayout = new QVBoxLayout(BooleanOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox = new QGroupBox(BooleanOptionsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 3, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 4);

        mode_cbx = new QComboBox(groupBox);
        mode_cbx->setObjectName(QStringLiteral("mode_cbx"));

        gridLayout->addWidget(mode_cbx, 4, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 7, 0, 1, 4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 5, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 5, 1, 1, 1);

        cva_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cva_cbx->setObjectName(QStringLiteral("cva_cbx"));

        gridLayout->addWidget(cva_cbx, 1, 1, 1, 1);

        cvb_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cvb_cbx->setObjectName(QStringLiteral("cvb_cbx"));

        gridLayout->addWidget(cvb_cbx, 2, 1, 1, 1);

        cvr_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cvr_cbx->setObjectName(QStringLiteral("cvr_cbx"));

        gridLayout->addWidget(cvr_cbx, 6, 1, 1, 1);

        layera_cbx = new lay::LayerSelectionComboBox(groupBox);
        layera_cbx->setObjectName(QStringLiteral("layera_cbx"));

        gridLayout->addWidget(layera_cbx, 1, 2, 1, 1);

        layerb_cbx = new lay::LayerSelectionComboBox(groupBox);
        layerb_cbx->setObjectName(QStringLiteral("layerb_cbx"));

        gridLayout->addWidget(layerb_cbx, 2, 2, 1, 1);

        layerr_cbx = new lay::LayerSelectionComboBox(groupBox);
        layerr_cbx->setObjectName(QStringLiteral("layerr_cbx"));

        gridLayout->addWidget(layerr_cbx, 6, 2, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 6, 3, 1, 1);

        min_coherence_cb = new QCheckBox(groupBox);
        min_coherence_cb->setObjectName(QStringLiteral("min_coherence_cb"));

        gridLayout->addWidget(min_coherence_cb, 9, 1, 1, 3);

        hier_mode_cbx = new QComboBox(groupBox);
        hier_mode_cbx->setObjectName(QStringLiteral("hier_mode_cbx"));

        gridLayout->addWidget(hier_mode_cbx, 8, 1, 1, 3);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(506, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(BooleanOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(BooleanOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BooleanOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BooleanOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BooleanOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *BooleanOptionsDialog)
    {
        BooleanOptionsDialog->setWindowTitle(QApplication::translate("BooleanOptionsDialog", "Boolean Operation", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("BooleanOptionsDialog", "Boolean Operation Setup", Q_NULLPTR));
        mode_cbx->clear();
        mode_cbx->insertItems(0, QStringList()
         << QApplication::translate("BooleanOptionsDialog", "Union (OR)", Q_NULLPTR)
         << QApplication::translate("BooleanOptionsDialog", "Intersection (AND)", Q_NULLPTR)
         << QApplication::translate("BooleanOptionsDialog", "Difference (A NOT B)", Q_NULLPTR)
         << QApplication::translate("BooleanOptionsDialog", "Difference (B NOT A)", Q_NULLPTR)
         << QApplication::translate("BooleanOptionsDialog", "Symmetric Difference (XOR)", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("BooleanOptionsDialog", "Source B", Q_NULLPTR));
        label->setText(QApplication::translate("BooleanOptionsDialog", "Source A", Q_NULLPTR));
        label_4->setText(QApplication::translate("BooleanOptionsDialog", "Mode", Q_NULLPTR));
        label_3->setText(QApplication::translate("BooleanOptionsDialog", "Result", Q_NULLPTR));
        label_7->setText(QApplication::translate("BooleanOptionsDialog", "Hierarchy", Q_NULLPTR));
        label_5->setText(QApplication::translate("BooleanOptionsDialog", "Layout and cell", Q_NULLPTR));
        label_6->setText(QApplication::translate("BooleanOptionsDialog", "Layer", Q_NULLPTR));
        label_8->setText(QApplication::translate("BooleanOptionsDialog", "Layer", Q_NULLPTR));
        label_9->setText(QApplication::translate("BooleanOptionsDialog", "Layout and cell", Q_NULLPTR));
        label_10->setText(QApplication::translate("BooleanOptionsDialog", "(Layer is overwritten)", Q_NULLPTR));
        min_coherence_cb->setText(QApplication::translate("BooleanOptionsDialog", "Minimum coherence (for touching corners)", Q_NULLPTR));
        hier_mode_cbx->clear();
        hier_mode_cbx->insertItems(0, QStringList()
         << QApplication::translate("BooleanOptionsDialog", "Flat", Q_NULLPTR)
         << QApplication::translate("BooleanOptionsDialog", "Top cell only", Q_NULLPTR)
         << QApplication::translate("BooleanOptionsDialog", "Individually for current and subcells (semi hierarchical)", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class BooleanOptionsDialog: public Ui_BooleanOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOLEANOPTIONSDIALOG_H
