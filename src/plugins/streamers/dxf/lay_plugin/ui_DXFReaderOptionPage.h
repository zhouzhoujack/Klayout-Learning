/********************************************************************************
** Form generated from reading UI file 'DXFReaderOptionPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DXFREADEROPTIONPAGE_H
#define UI_DXFREADEROPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "layLayerMappingWidget.h"

QT_BEGIN_NAMESPACE

class Ui_DXFReaderOptionPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *unit_le;
    QLabel *label;
    QLineEdit *circle_accuracy_le;
    QComboBox *polyline2poly_cbx;
    QLineEdit *text_scaling_le;
    QLabel *label_12;
    QLabel *label_3;
    QCheckBox *render_texts_as_polygons_cbx;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *dbu_le;
    QLabel *label_15;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_4;
    QLineEdit *contour_accuracy_le;
    QLabel *label_5;
    QLabel *label_8;
    QCheckBox *keep_names_cbx;
    QFrame *line;
    QCheckBox *keep_other_cells_cbx;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_2;
    QLineEdit *circle_points_le;
    QLabel *label_16;
    QGroupBox *layer_subset_grp;
    QGridLayout *_2;
    QCheckBox *read_all_cbx;
    QFrame *line_2;
    lay::LayerMappingWidget *layer_map;

    void setupUi(QWidget *DXFReaderOptionPage)
    {
        if (DXFReaderOptionPage->objectName().isEmpty())
            DXFReaderOptionPage->setObjectName(QString::fromUtf8("DXFReaderOptionPage"));
        DXFReaderOptionPage->resize(644, 629);
        verticalLayout = new QVBoxLayout(DXFReaderOptionPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DXFReaderOptionPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        unit_le = new QLineEdit(groupBox);
        unit_le->setObjectName(QString::fromUtf8("unit_le"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(unit_le->sizePolicy().hasHeightForWidth());
        unit_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(unit_le, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 9, 0, 1, 1);

        circle_accuracy_le = new QLineEdit(groupBox);
        circle_accuracy_le->setObjectName(QString::fromUtf8("circle_accuracy_le"));
        sizePolicy.setHeightForWidth(circle_accuracy_le->sizePolicy().hasHeightForWidth());
        circle_accuracy_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(circle_accuracy_le, 3, 1, 1, 1);

        polyline2poly_cbx = new QComboBox(groupBox);
        polyline2poly_cbx->addItem(QString());
        polyline2poly_cbx->addItem(QString());
        polyline2poly_cbx->addItem(QString());
        polyline2poly_cbx->addItem(QString());
        polyline2poly_cbx->addItem(QString());
        polyline2poly_cbx->setObjectName(QString::fromUtf8("polyline2poly_cbx"));
        sizePolicy.setHeightForWidth(polyline2poly_cbx->sizePolicy().hasHeightForWidth());
        polyline2poly_cbx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(polyline2poly_cbx, 9, 1, 1, 2);

        text_scaling_le = new QLineEdit(groupBox);
        text_scaling_le->setObjectName(QString::fromUtf8("text_scaling_le"));
        sizePolicy.setHeightForWidth(text_scaling_le->sizePolicy().hasHeightForWidth());
        text_scaling_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(text_scaling_le, 5, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_12, 2, 2, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_3, 0, 2, 1, 2);

        render_texts_as_polygons_cbx = new QCheckBox(groupBox);
        render_texts_as_polygons_cbx->setObjectName(QString::fromUtf8("render_texts_as_polygons_cbx"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(render_texts_as_polygons_cbx->sizePolicy().hasHeightForWidth());
        render_texts_as_polygons_cbx->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(render_texts_as_polygons_cbx, 4, 1, 1, 3);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        dbu_le = new QLineEdit(groupBox);
        dbu_le->setObjectName(QString::fromUtf8("dbu_le"));
        sizePolicy.setHeightForWidth(dbu_le->sizePolicy().hasHeightForWidth());
        dbu_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dbu_le, 0, 1, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_15, 10, 2, 1, 2);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_7, 3, 2, 1, 2);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_11, 5, 2, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_4, 1, 2, 1, 2);

        contour_accuracy_le = new QLineEdit(groupBox);
        contour_accuracy_le->setObjectName(QString::fromUtf8("contour_accuracy_le"));
        sizePolicy.setHeightForWidth(contour_accuracy_le->sizePolicy().hasHeightForWidth());
        contour_accuracy_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(contour_accuracy_le, 10, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        keep_names_cbx = new QCheckBox(groupBox);
        keep_names_cbx->setObjectName(QString::fromUtf8("keep_names_cbx"));

        gridLayout->addWidget(keep_names_cbx, 7, 1, 1, 3);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 0, 1, 4);

        keep_other_cells_cbx = new QCheckBox(groupBox);
        keep_other_cells_cbx->setObjectName(QString::fromUtf8("keep_other_cells_cbx"));

        gridLayout->addWidget(keep_other_cells_cbx, 6, 1, 1, 3);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 7, 0, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 10, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        circle_points_le = new QLineEdit(groupBox);
        circle_points_le->setObjectName(QString::fromUtf8("circle_points_le"));
        sizePolicy.setHeightForWidth(circle_points_le->sizePolicy().hasHeightForWidth());
        circle_points_le->setSizePolicy(sizePolicy);

        gridLayout->addWidget(circle_points_le, 2, 1, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_16, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        layer_subset_grp = new QGroupBox(DXFReaderOptionPage);
        layer_subset_grp->setObjectName(QString::fromUtf8("layer_subset_grp"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(layer_subset_grp->sizePolicy().hasHeightForWidth());
        layer_subset_grp->setSizePolicy(sizePolicy4);
        layer_subset_grp->setCheckable(false);
        _2 = new QGridLayout(layer_subset_grp);
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(9, 9, 9, 9);
        read_all_cbx = new QCheckBox(layer_subset_grp);
        read_all_cbx->setObjectName(QString::fromUtf8("read_all_cbx"));

        _2->addWidget(read_all_cbx, 0, 0, 1, 2);

        line_2 = new QFrame(layer_subset_grp);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        _2->addWidget(line_2, 1, 0, 1, 2);

        layer_map = new lay::LayerMappingWidget(layer_subset_grp);
        layer_map->setObjectName(QString::fromUtf8("layer_map"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(layer_map->sizePolicy().hasHeightForWidth());
        layer_map->setSizePolicy(sizePolicy5);
        layer_map->setFrameShape(QFrame::NoFrame);
        layer_map->setFrameShadow(QFrame::Raised);

        _2->addWidget(layer_map, 2, 0, 10, 2);


        verticalLayout->addWidget(layer_subset_grp);

        QWidget::setTabOrder(dbu_le, unit_le);
        QWidget::setTabOrder(unit_le, circle_points_le);
        QWidget::setTabOrder(circle_points_le, render_texts_as_polygons_cbx);
        QWidget::setTabOrder(render_texts_as_polygons_cbx, text_scaling_le);
        QWidget::setTabOrder(text_scaling_le, keep_other_cells_cbx);

        retranslateUi(DXFReaderOptionPage);
        QObject::connect(layer_map, SIGNAL(enable_all_layers(bool)), read_all_cbx, SLOT(setChecked(bool)));

        QMetaObject::connectSlotsByName(DXFReaderOptionPage);
    } // setupUi

    void retranslateUi(QWidget *DXFReaderOptionPage)
    {
        DXFReaderOptionPage->setWindowTitle(QApplication::translate("DXFReaderOptionPage", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("DXFReaderOptionPage", "Input Options", nullptr));
        label->setText(QApplication::translate("DXFReaderOptionPage", "LINE / POLYLINE", nullptr));
#ifndef QT_NO_TOOLTIP
        circle_accuracy_le->setToolTip(QApplication::translate("DXFReaderOptionPage", "<html><head/><body><p>Specify this value to choose the number of points based on the accuracy requirement. If given, less points will be chosen if this choice is sufficient to fulfil the accuracy requirements.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        polyline2poly_cbx->setItemText(0, QApplication::translate("DXFReaderOptionPage", "Automatic", nullptr));
        polyline2poly_cbx->setItemText(1, QApplication::translate("DXFReaderOptionPage", "Keep lines", nullptr));
        polyline2poly_cbx->setItemText(2, QApplication::translate("DXFReaderOptionPage", "Create polygons from closed polylines with width = 0", nullptr));
        polyline2poly_cbx->setItemText(3, QApplication::translate("DXFReaderOptionPage", "Merge lines with width 0 into polygons", nullptr));
        polyline2poly_cbx->setItemText(4, QApplication::translate("DXFReaderOptionPage", "Merge lines and auto-close open contours", nullptr));

        label_12->setText(QApplication::translate("DXFReaderOptionPage", "# of points", nullptr));
        label_3->setText(QApplication::translate("DXFReaderOptionPage", "\302\265m", nullptr));
        render_texts_as_polygons_cbx->setText(QApplication::translate("DXFReaderOptionPage", "Render texts as polygons and do not create text objects", nullptr));
        label_6->setText(QApplication::translate("DXFReaderOptionPage", "Arc interpolation", nullptr));
        label_9->setText(QApplication::translate("DXFReaderOptionPage", "Keep all cells", nullptr));
        label_15->setText(QApplication::translate("DXFReaderOptionPage", "Line merge accuracy in DXF units", nullptr));
        label_7->setText(QApplication::translate("DXFReaderOptionPage", "Interpolation accuracy in DXF units", nullptr));
        label_11->setText(QApplication::translate("DXFReaderOptionPage", "Scaling factor in percent", nullptr));
        label_4->setText(QApplication::translate("DXFReaderOptionPage", "\302\265m", nullptr));
        label_5->setText(QApplication::translate("DXFReaderOptionPage", "DXF file unit", nullptr));
        label_8->setText(QApplication::translate("DXFReaderOptionPage", "Text to polygon", nullptr));
        keep_names_cbx->setText(QApplication::translate("DXFReaderOptionPage", "Don't attempt to translate into layer/datatype numbers", nullptr));
        keep_other_cells_cbx->setText(QApplication::translate("DXFReaderOptionPage", "Check this box to keep all cells, not only the top cell and it's children", nullptr));
        label_13->setText(QApplication::translate("DXFReaderOptionPage", "Keep layer names", nullptr));
        label_14->setText(QApplication::translate("DXFReaderOptionPage", "Merge accuracy", nullptr));
        label_10->setText(QApplication::translate("DXFReaderOptionPage", "Text scaling", nullptr));
        label_2->setText(QApplication::translate("DXFReaderOptionPage", "Database unit   ", nullptr));
#ifndef QT_NO_TOOLTIP
        circle_points_le->setToolTip(QApplication::translate("DXFReaderOptionPage", "<html><head/><body><p>Number of points per full circle used for arc interpolation (the accuracy may reduce the number if less are required)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_16->setText(QString());
#ifndef QT_NO_TOOLTIP
        layer_subset_grp->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        layer_subset_grp->setTitle(QApplication::translate("DXFReaderOptionPage", "Layer Subset And Layer Mapping", nullptr));
        read_all_cbx->setText(QApplication::translate("DXFReaderOptionPage", "Read all layers (additionally to the ones in the mapping table)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DXFReaderOptionPage: public Ui_DXFReaderOptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DXFREADEROPTIONPAGE_H
