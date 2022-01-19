/********************************************************************************
** Form generated from reading UI file 'SizingOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIZINGOPTIONSDIALOG_H
#define UI_SIZINGOPTIONSDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "layWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_SizingOptionsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *hier_mode_cbx;
    QLabel *label_10;
    QLabel *label_8;
    lay::CellViewSelectionComboBox *cvr_cbx;
    QLineEdit *value_le;
    QFrame *line_2;
    QLabel *label_7;
    lay::CellViewSelectionComboBox *cv_cbx;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QFrame *line;
    QCheckBox *min_coherence_cb;
    QSpacerItem *spacerItem;
    lay::LayerSelectionComboBox *layer_cbx;
    lay::LayerSelectionComboBox *layerr_cbx;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_11;
    QComboBox *cutoff_cbx;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SizingOptionsDialog)
    {
        if (SizingOptionsDialog->objectName().isEmpty())
            SizingOptionsDialog->setObjectName(QStringLiteral("SizingOptionsDialog"));
        SizingOptionsDialog->resize(567, 331);
        vboxLayout = new QVBoxLayout(SizingOptionsDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox = new QGroupBox(SizingOptionsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hier_mode_cbx = new QComboBox(groupBox);
        hier_mode_cbx->setObjectName(QStringLiteral("hier_mode_cbx"));

        gridLayout->addWidget(hier_mode_cbx, 8, 1, 1, 3);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 6, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 5, 2, 1, 1);

        cvr_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cvr_cbx->setObjectName(QStringLiteral("cvr_cbx"));

        gridLayout->addWidget(cvr_cbx, 6, 1, 1, 1);

        value_le = new QLineEdit(groupBox);
        value_le->setObjectName(QStringLiteral("value_le"));

        gridLayout->addWidget(value_le, 3, 1, 1, 1);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 7, 0, 1, 4);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        cv_cbx = new lay::CellViewSelectionComboBox(groupBox);
        cv_cbx->setObjectName(QStringLiteral("cv_cbx"));

        gridLayout->addWidget(cv_cbx, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 4);

        min_coherence_cb = new QCheckBox(groupBox);
        min_coherence_cb->setObjectName(QStringLiteral("min_coherence_cb"));

        gridLayout->addWidget(min_coherence_cb, 9, 1, 1, 3);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 3, 1, 1);

        layer_cbx = new lay::LayerSelectionComboBox(groupBox);
        layer_cbx->setObjectName(QStringLiteral("layer_cbx"));

        gridLayout->addWidget(layer_cbx, 1, 2, 1, 1);

        layerr_cbx = new lay::LayerSelectionComboBox(groupBox);
        layerr_cbx->setObjectName(QStringLiteral("layerr_cbx"));

        gridLayout->addWidget(layerr_cbx, 6, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 2, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        cutoff_cbx = new QComboBox(groupBox);
        cutoff_cbx->setObjectName(QStringLiteral("cutoff_cbx"));

        gridLayout->addWidget(cutoff_cbx, 4, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(506, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(SizingOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(SizingOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SizingOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SizingOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SizingOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *SizingOptionsDialog)
    {
        SizingOptionsDialog->setWindowTitle(QApplication::translate("SizingOptionsDialog", "Sizing Operation", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SizingOptionsDialog", "Sizing Operation Setup", Q_NULLPTR));
        hier_mode_cbx->clear();
        hier_mode_cbx->insertItems(0, QStringList()
         << QApplication::translate("SizingOptionsDialog", "Flat", Q_NULLPTR)
         << QApplication::translate("SizingOptionsDialog", "Top cell only", Q_NULLPTR)
         << QApplication::translate("SizingOptionsDialog", "Individually for current and subcells (semi hierarchical)", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("SizingOptionsDialog", "(Layer is overwritten)", Q_NULLPTR));
        label_8->setText(QApplication::translate("SizingOptionsDialog", "Layer", Q_NULLPTR));
        label_7->setText(QApplication::translate("SizingOptionsDialog", "Hierarchy", Q_NULLPTR));
        label_3->setText(QApplication::translate("SizingOptionsDialog", "Result", Q_NULLPTR));
        label->setText(QApplication::translate("SizingOptionsDialog", "Source", Q_NULLPTR));
        label_6->setText(QApplication::translate("SizingOptionsDialog", "Layer", Q_NULLPTR));
        min_coherence_cb->setText(QApplication::translate("SizingOptionsDialog", "Minimum coherence (for touching corners)", Q_NULLPTR));
        label_2->setText(QApplication::translate("SizingOptionsDialog", "Single value or pair (one per direction: sx,sy)", Q_NULLPTR));
        label_5->setText(QApplication::translate("SizingOptionsDialog", "Layout and cell", Q_NULLPTR));
        label_9->setText(QApplication::translate("SizingOptionsDialog", "Layout and cell", Q_NULLPTR));
        label_4->setText(QApplication::translate("SizingOptionsDialog", "Sizing value", Q_NULLPTR));
        label_11->setText(QApplication::translate("SizingOptionsDialog", "Cutoff mode", Q_NULLPTR));
        cutoff_cbx->clear();
        cutoff_cbx->insertItems(0, QStringList()
         << QApplication::translate("SizingOptionsDialog", "Strict (diagonal)", Q_NULLPTR)
         << QApplication::translate("SizingOptionsDialog", "Strong (octagon)", Q_NULLPTR)
         << QApplication::translate("SizingOptionsDialog", "Moderate (sharp bends only)", Q_NULLPTR)
         << QApplication::translate("SizingOptionsDialog", "Weak (sharps bends >135 deg.)", Q_NULLPTR)
         << QApplication::translate("SizingOptionsDialog", "Long limit (x10)", Q_NULLPTR)
         << QApplication::translate("SizingOptionsDialog", "Extreme limit (x100)", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class SizingOptionsDialog: public Ui_SizingOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIZINGOPTIONSDIALOG_H
