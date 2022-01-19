/********************************************************************************
** Form generated from reading UI file 'GerberImportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERBERIMPORTDIALOG_H
#define UI_GERBERIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GerberImportDialog
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *central_stack;
    QWidget *page;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout;
    QLineEdit *base_dir_le;
    QToolButton *base_dir_pb;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *import_into_rb;
    QRadioButton *import_same_panel_rb;
    QRadioButton *import_new_panel_rb;
    QSpacerItem *spacerItem;
    QCheckBox *free_mapping_cb;
    QSpacerItem *spacerItem1;
    QWidget *page_2;
    QVBoxLayout *vboxLayout2;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QSpacerItem *spacerItem2;
    QTreeWidget *layout_layers_tree;
    QToolButton *move_target_layer_down_pb;
    QToolButton *move_target_layer_up_pb;
    QToolButton *delete_target_layer_pb;
    QToolButton *add_target_layer_pb;
    QWidget *page_3;
    QVBoxLayout *vboxLayout3;
    QFrame *frame_2;
    QGridLayout *gridLayout2;
    QComboBox *mounting_cbx;
    QSpacerItem *spacerItem3;
    QLabel *label_33;
    QLineEdit *num_via_le;
    QLabel *Number_of_via_layers;
    QLineEdit *num_metal_le;
    QSpacerItem *spacerItem4;
    QLabel *label_28;
    QSpacerItem *spacerItem5;
    QLabel *label_32;
    QSpacerItem *spacerItem6;
    QWidget *page_4;
    QVBoxLayout *vboxLayout4;
    QTreeWidget *artwork_files_tree;
    QWidget *page_5;
    QVBoxLayout *vboxLayout5;
    QTreeWidget *drill_files_tree;
    QWidget *page_10;
    QGridLayout *gridLayout3;
    QTreeWidget *free_files_tree;
    QSpacerItem *spacerItem7;
    QToolButton *move_free_file_up_pb;
    QToolButton *add_free_file_pb;
    QToolButton *move_free_file_down_pb;
    QToolButton *delete_free_file_pb;
    QWidget *page_8;
    QGridLayout *gridLayout4;
    QTreeWidget *free_layout_layers_tree;
    QSpacerItem *spacerItem8;
    QLabel *label;
    QToolButton *free_move_target_layer_down_pb;
    QToolButton *free_move_target_layer_up_pb;
    QToolButton *free_delete_target_layer_pb;
    QToolButton *free_add_target_layer_pb;
    QWidget *page_9;
    QGridLayout *gridLayout5;
    QSpacerItem *spacerItem9;
    QToolButton *reset_mapping_pb;
    QTreeWidget *free_layer_mapping_tree;
    QWidget *page_6;
    QVBoxLayout *vboxLayout6;
    QFrame *frame_5;
    QGridLayout *gridLayout6;
    QLineEdit *layout_x1_le;
    QLineEdit *pcb_y3_le;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *label_17;
    QLineEdit *pcb_y2_le;
    QLabel *Point_3;
    QLineEdit *layout_x2_le;
    QLabel *label_18;
    QLineEdit *layout_x3_le;
    QLineEdit *layout_y3_le;
    QLabel *label_23;
    QFrame *line_2;
    QLabel *label_25;
    QLineEdit *pcb_x2_le;
    QLabel *label_26;
    QLabel *label_21;
    QLineEdit *pcb_x3_le;
    QLineEdit *pcb_y1_le;
    QFrame *line_3;
    QLineEdit *pcb_x1_le;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *label_27;
    QLineEdit *layout_y2_le;
    QLineEdit *layout_y1_le;
    QSpacerItem *spacerItem10;
    QSpacerItem *spacerItem11;
    QSpacerItem *spacerItem12;
    QFrame *frame_6;
    QHBoxLayout *hboxLayout1;
    QLabel *label_30;
    QLineEdit *explicit_trans_le;
    QLabel *label_31;
    QLabel *label_29;
    QSpacerItem *spacerItem13;
    QWidget *page_7;
    QVBoxLayout *vboxLayout7;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout7;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *layer_properties_file_le;
    QToolButton *layer_properties_file_browse_pb;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout8;
    QLineEdit *border_le;
    QLabel *label_2;
    QLabel *label_16;
    QLabel *dbu_lbl2;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *dbu_lbl1;
    QLabel *topcell_lbl;
    QLabel *label_7;
    QLineEdit *dbu_le;
    QLineEdit *topcell_le;
    QCheckBox *invert_cb;
    QCheckBox *merge_cb;
    QLineEdit *circle_points_le;
    QLabel *label_6;
    QSpacerItem *spacerItem14;
    QPushButton *next_pb;
    QPushButton *cancel_pb;
    QPushButton *import_pb;
    QPushButton *last_pb;
    QSpacerItem *spacerItem15;
    QFrame *line_4;
    QSpacerItem *spacerItem16;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout2;
    QLabel *section_header_lbl;
    QSpacerItem *spacerItem17;
    QToolButton *file_menu;
    QSpacerItem *spacerItem18;
    QFrame *line;

    void setupUi(QDialog *GerberImportDialog)
    {
        if (GerberImportDialog->objectName().isEmpty())
            GerberImportDialog->setObjectName(QString::fromUtf8("GerberImportDialog"));
        GerberImportDialog->resize(754, 604);
        gridLayout = new QGridLayout(GerberImportDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        central_stack = new QStackedWidget(GerberImportDialog);
        central_stack->setObjectName(QString::fromUtf8("central_stack"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        vboxLayout = new QVBoxLayout(page);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox_4 = new QGroupBox(page);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        hboxLayout = new QHBoxLayout(groupBox_4);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        base_dir_le = new QLineEdit(groupBox_4);
        base_dir_le->setObjectName(QString::fromUtf8("base_dir_le"));

        hboxLayout->addWidget(base_dir_le);

        base_dir_pb = new QToolButton(groupBox_4);
        base_dir_pb->setObjectName(QString::fromUtf8("base_dir_pb"));

        hboxLayout->addWidget(base_dir_pb);


        vboxLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(0);
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        import_into_rb = new QRadioButton(groupBox);
        import_into_rb->setObjectName(QString::fromUtf8("import_into_rb"));

        vboxLayout1->addWidget(import_into_rb);

        import_same_panel_rb = new QRadioButton(groupBox);
        import_same_panel_rb->setObjectName(QString::fromUtf8("import_same_panel_rb"));

        vboxLayout1->addWidget(import_same_panel_rb);

        import_new_panel_rb = new QRadioButton(groupBox);
        import_new_panel_rb->setObjectName(QString::fromUtf8("import_new_panel_rb"));

        vboxLayout1->addWidget(import_new_panel_rb);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        free_mapping_cb = new QCheckBox(page);
        free_mapping_cb->setObjectName(QString::fromUtf8("free_mapping_cb"));

        vboxLayout->addWidget(free_mapping_cb);

        spacerItem1 = new QSpacerItem(20, 211, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        central_stack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        vboxLayout2 = new QVBoxLayout(page_2);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        frame = new QFrame(page_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout1 = new QGridLayout(frame);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout1->addWidget(label_3, 0, 0, 5, 1);

        spacerItem2 = new QSpacerItem(26, 201, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem2, 4, 2, 1, 1);

        layout_layers_tree = new QTreeWidget(frame);
        layout_layers_tree->setObjectName(QString::fromUtf8("layout_layers_tree"));
        layout_layers_tree->setAlternatingRowColors(true);
        layout_layers_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        layout_layers_tree->setRootIsDecorated(false);
        layout_layers_tree->setUniformRowHeights(true);
        layout_layers_tree->setAllColumnsShowFocus(true);

        gridLayout1->addWidget(layout_layers_tree, 0, 1, 5, 1);

        move_target_layer_down_pb = new QToolButton(frame);
        move_target_layer_down_pb->setObjectName(QString::fromUtf8("move_target_layer_down_pb"));
        const QIcon icon = QIcon(QString::fromUtf8(":/down.png"));
        move_target_layer_down_pb->setIcon(icon);

        gridLayout1->addWidget(move_target_layer_down_pb, 3, 2, 1, 1);

        move_target_layer_up_pb = new QToolButton(frame);
        move_target_layer_up_pb->setObjectName(QString::fromUtf8("move_target_layer_up_pb"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/up.png"));
        move_target_layer_up_pb->setIcon(icon1);

        gridLayout1->addWidget(move_target_layer_up_pb, 2, 2, 1, 1);

        delete_target_layer_pb = new QToolButton(frame);
        delete_target_layer_pb->setObjectName(QString::fromUtf8("delete_target_layer_pb"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/clear.png"));
        delete_target_layer_pb->setIcon(icon2);

        gridLayout1->addWidget(delete_target_layer_pb, 1, 2, 1, 1);

        add_target_layer_pb = new QToolButton(frame);
        add_target_layer_pb->setObjectName(QString::fromUtf8("add_target_layer_pb"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/add.png"));
        add_target_layer_pb->setIcon(icon3);

        gridLayout1->addWidget(add_target_layer_pb, 0, 2, 1, 1);


        vboxLayout2->addWidget(frame);

        central_stack->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        vboxLayout3 = new QVBoxLayout(page_3);
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        frame_2 = new QFrame(page_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout2 = new QGridLayout(frame_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        mounting_cbx = new QComboBox(frame_2);
        mounting_cbx->addItem(QString());
        mounting_cbx->addItem(QString());
        mounting_cbx->setObjectName(QString::fromUtf8("mounting_cbx"));

        gridLayout2->addWidget(mounting_cbx, 0, 1, 1, 2);

        spacerItem3 = new QSpacerItem(321, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 0, 3, 1, 1);

        label_33 = new QLabel(frame_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout2->addWidget(label_33, 3, 0, 1, 1);

        num_via_le = new QLineEdit(frame_2);
        num_via_le->setObjectName(QString::fromUtf8("num_via_le"));

        gridLayout2->addWidget(num_via_le, 4, 1, 1, 1);

        Number_of_via_layers = new QLabel(frame_2);
        Number_of_via_layers->setObjectName(QString::fromUtf8("Number_of_via_layers"));

        gridLayout2->addWidget(Number_of_via_layers, 4, 0, 1, 1);

        num_metal_le = new QLineEdit(frame_2);
        num_metal_le->setObjectName(QString::fromUtf8("num_metal_le"));

        gridLayout2->addWidget(num_metal_le, 3, 1, 1, 1);

        spacerItem4 = new QSpacerItem(691, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout2->addItem(spacerItem4, 2, 0, 1, 4);

        label_28 = new QLabel(frame_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout2->addWidget(label_28, 0, 0, 1, 1);

        spacerItem5 = new QSpacerItem(441, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem5, 3, 2, 1, 2);

        label_32 = new QLabel(frame_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setWordWrap(true);

        gridLayout2->addWidget(label_32, 1, 1, 1, 3);


        vboxLayout3->addWidget(frame_2);

        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem6);

        central_stack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        vboxLayout4 = new QVBoxLayout(page_4);
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        artwork_files_tree = new QTreeWidget(page_4);
        artwork_files_tree->setObjectName(QString::fromUtf8("artwork_files_tree"));
        artwork_files_tree->setFocusPolicy(Qt::WheelFocus);
        artwork_files_tree->setEditTriggers(QAbstractItemView::AllEditTriggers);
        artwork_files_tree->setTabKeyNavigation(true);
        artwork_files_tree->setAlternatingRowColors(true);
        artwork_files_tree->setSelectionMode(QAbstractItemView::NoSelection);
        artwork_files_tree->setRootIsDecorated(false);
        artwork_files_tree->setUniformRowHeights(true);
        artwork_files_tree->setAllColumnsShowFocus(true);

        vboxLayout4->addWidget(artwork_files_tree);

        central_stack->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        vboxLayout5 = new QVBoxLayout(page_5);
#ifndef Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        drill_files_tree = new QTreeWidget(page_5);
        drill_files_tree->setObjectName(QString::fromUtf8("drill_files_tree"));
        drill_files_tree->setEditTriggers(QAbstractItemView::AllEditTriggers);
        drill_files_tree->setAlternatingRowColors(true);
        drill_files_tree->setSelectionMode(QAbstractItemView::NoSelection);
        drill_files_tree->setRootIsDecorated(false);
        drill_files_tree->setUniformRowHeights(true);
        drill_files_tree->setAllColumnsShowFocus(true);

        vboxLayout5->addWidget(drill_files_tree);

        central_stack->addWidget(page_5);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        gridLayout3 = new QGridLayout(page_10);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        free_files_tree = new QTreeWidget(page_10);
        free_files_tree->setObjectName(QString::fromUtf8("free_files_tree"));
        free_files_tree->setEditTriggers(QAbstractItemView::AllEditTriggers);
        free_files_tree->setAlternatingRowColors(true);
        free_files_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        free_files_tree->setRootIsDecorated(false);
        free_files_tree->setUniformRowHeights(true);
        free_files_tree->setAllColumnsShowFocus(true);

        gridLayout3->addWidget(free_files_tree, 0, 0, 5, 1);

        spacerItem7 = new QSpacerItem(26, 311, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem7, 4, 1, 1, 1);

        move_free_file_up_pb = new QToolButton(page_10);
        move_free_file_up_pb->setObjectName(QString::fromUtf8("move_free_file_up_pb"));
        move_free_file_up_pb->setIcon(icon1);

        gridLayout3->addWidget(move_free_file_up_pb, 2, 1, 1, 1);

        add_free_file_pb = new QToolButton(page_10);
        add_free_file_pb->setObjectName(QString::fromUtf8("add_free_file_pb"));
        add_free_file_pb->setIcon(icon3);

        gridLayout3->addWidget(add_free_file_pb, 0, 1, 1, 1);

        move_free_file_down_pb = new QToolButton(page_10);
        move_free_file_down_pb->setObjectName(QString::fromUtf8("move_free_file_down_pb"));
        move_free_file_down_pb->setIcon(icon);

        gridLayout3->addWidget(move_free_file_down_pb, 3, 1, 1, 1);

        delete_free_file_pb = new QToolButton(page_10);
        delete_free_file_pb->setObjectName(QString::fromUtf8("delete_free_file_pb"));
        delete_free_file_pb->setIcon(icon2);

        gridLayout3->addWidget(delete_free_file_pb, 1, 1, 1, 1);

        central_stack->addWidget(page_10);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        gridLayout4 = new QGridLayout(page_8);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        free_layout_layers_tree = new QTreeWidget(page_8);
        free_layout_layers_tree->setObjectName(QString::fromUtf8("free_layout_layers_tree"));
        free_layout_layers_tree->setAlternatingRowColors(true);
        free_layout_layers_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        free_layout_layers_tree->setRootIsDecorated(false);
        free_layout_layers_tree->setUniformRowHeights(true);
        free_layout_layers_tree->setAllColumnsShowFocus(true);

        gridLayout4->addWidget(free_layout_layers_tree, 0, 0, 5, 1);

        spacerItem8 = new QSpacerItem(26, 201, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem8, 4, 1, 1, 1);

        label = new QLabel(page_8);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout4->addWidget(label, 5, 0, 1, 2);

        free_move_target_layer_down_pb = new QToolButton(page_8);
        free_move_target_layer_down_pb->setObjectName(QString::fromUtf8("free_move_target_layer_down_pb"));
        free_move_target_layer_down_pb->setIcon(icon);

        gridLayout4->addWidget(free_move_target_layer_down_pb, 3, 1, 1, 1);

        free_move_target_layer_up_pb = new QToolButton(page_8);
        free_move_target_layer_up_pb->setObjectName(QString::fromUtf8("free_move_target_layer_up_pb"));
        free_move_target_layer_up_pb->setIcon(icon1);

        gridLayout4->addWidget(free_move_target_layer_up_pb, 2, 1, 1, 1);

        free_delete_target_layer_pb = new QToolButton(page_8);
        free_delete_target_layer_pb->setObjectName(QString::fromUtf8("free_delete_target_layer_pb"));
        free_delete_target_layer_pb->setIcon(icon2);

        gridLayout4->addWidget(free_delete_target_layer_pb, 1, 1, 1, 1);

        free_add_target_layer_pb = new QToolButton(page_8);
        free_add_target_layer_pb->setObjectName(QString::fromUtf8("free_add_target_layer_pb"));
        free_add_target_layer_pb->setIcon(icon3);

        gridLayout4->addWidget(free_add_target_layer_pb, 0, 1, 1, 1);

        central_stack->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        gridLayout5 = new QGridLayout(page_9);
#ifndef Q_OS_MAC
        gridLayout5->setSpacing(6);
#endif
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        spacerItem9 = new QSpacerItem(20, 381, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem9, 1, 1, 1, 1);

        reset_mapping_pb = new QToolButton(page_9);
        reset_mapping_pb->setObjectName(QString::fromUtf8("reset_mapping_pb"));
        reset_mapping_pb->setIcon(icon2);

        gridLayout5->addWidget(reset_mapping_pb, 0, 1, 1, 1);

        free_layer_mapping_tree = new QTreeWidget(page_9);
        free_layer_mapping_tree->setObjectName(QString::fromUtf8("free_layer_mapping_tree"));
        free_layer_mapping_tree->setEditTriggers(QAbstractItemView::AllEditTriggers);
        free_layer_mapping_tree->setAlternatingRowColors(true);
        free_layer_mapping_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        free_layer_mapping_tree->setRootIsDecorated(false);
        free_layer_mapping_tree->setUniformRowHeights(true);
        free_layer_mapping_tree->setAllColumnsShowFocus(true);

        gridLayout5->addWidget(free_layer_mapping_tree, 0, 0, 2, 1);

        central_stack->addWidget(page_9);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        vboxLayout6 = new QVBoxLayout(page_6);
#ifndef Q_OS_MAC
        vboxLayout6->setSpacing(6);
#endif
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        frame_5 = new QFrame(page_6);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Plain);
        gridLayout6 = new QGridLayout(frame_5);
#ifndef Q_OS_MAC
        gridLayout6->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout6->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        layout_x1_le = new QLineEdit(frame_5);
        layout_x1_le->setObjectName(QString::fromUtf8("layout_x1_le"));

        gridLayout6->addWidget(layout_x1_le, 3, 5, 1, 1);

        pcb_y3_le = new QLineEdit(frame_5);
        pcb_y3_le->setObjectName(QString::fromUtf8("pcb_y3_le"));

        gridLayout6->addWidget(pcb_y3_le, 5, 2, 1, 1);

        label_22 = new QLabel(frame_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout6->addWidget(label_22, 3, 4, 1, 1);

        label_24 = new QLabel(frame_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout6->addWidget(label_24, 2, 6, 1, 1);

        label_17 = new QLabel(frame_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout6->addWidget(label_17, 0, 0, 1, 3);

        pcb_y2_le = new QLineEdit(frame_5);
        pcb_y2_le->setObjectName(QString::fromUtf8("pcb_y2_le"));

        gridLayout6->addWidget(pcb_y2_le, 4, 2, 1, 1);

        Point_3 = new QLabel(frame_5);
        Point_3->setObjectName(QString::fromUtf8("Point_3"));

        gridLayout6->addWidget(Point_3, 5, 4, 1, 1);

        layout_x2_le = new QLineEdit(frame_5);
        layout_x2_le->setObjectName(QString::fromUtf8("layout_x2_le"));

        gridLayout6->addWidget(layout_x2_le, 4, 5, 1, 1);

        label_18 = new QLabel(frame_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout6->addWidget(label_18, 0, 4, 1, 3);

        layout_x3_le = new QLineEdit(frame_5);
        layout_x3_le->setObjectName(QString::fromUtf8("layout_x3_le"));

        gridLayout6->addWidget(layout_x3_le, 5, 5, 1, 1);

        layout_y3_le = new QLineEdit(frame_5);
        layout_y3_le->setObjectName(QString::fromUtf8("layout_y3_le"));

        gridLayout6->addWidget(layout_y3_le, 5, 6, 1, 1);

        label_23 = new QLabel(frame_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout6->addWidget(label_23, 2, 5, 1, 1);

        line_2 = new QFrame(frame_5);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout6->addWidget(line_2, 1, 0, 1, 3);

        label_25 = new QLabel(frame_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout6->addWidget(label_25, 4, 0, 1, 1);

        pcb_x2_le = new QLineEdit(frame_5);
        pcb_x2_le->setObjectName(QString::fromUtf8("pcb_x2_le"));

        gridLayout6->addWidget(pcb_x2_le, 4, 1, 1, 1);

        label_26 = new QLabel(frame_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout6->addWidget(label_26, 5, 0, 1, 1);

        label_21 = new QLabel(frame_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout6->addWidget(label_21, 3, 0, 1, 1);

        pcb_x3_le = new QLineEdit(frame_5);
        pcb_x3_le->setObjectName(QString::fromUtf8("pcb_x3_le"));

        gridLayout6->addWidget(pcb_x3_le, 5, 1, 1, 1);

        pcb_y1_le = new QLineEdit(frame_5);
        pcb_y1_le->setObjectName(QString::fromUtf8("pcb_y1_le"));

        gridLayout6->addWidget(pcb_y1_le, 3, 2, 1, 1);

        line_3 = new QFrame(frame_5);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout6->addWidget(line_3, 1, 4, 1, 3);

        pcb_x1_le = new QLineEdit(frame_5);
        pcb_x1_le->setObjectName(QString::fromUtf8("pcb_x1_le"));

        gridLayout6->addWidget(pcb_x1_le, 3, 1, 1, 1);

        label_20 = new QLabel(frame_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout6->addWidget(label_20, 2, 2, 1, 1);

        label_19 = new QLabel(frame_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout6->addWidget(label_19, 2, 1, 1, 1);

        label_27 = new QLabel(frame_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout6->addWidget(label_27, 4, 4, 1, 1);

        layout_y2_le = new QLineEdit(frame_5);
        layout_y2_le->setObjectName(QString::fromUtf8("layout_y2_le"));

        gridLayout6->addWidget(layout_y2_le, 4, 6, 1, 1);

        layout_y1_le = new QLineEdit(frame_5);
        layout_y1_le->setObjectName(QString::fromUtf8("layout_y1_le"));

        gridLayout6->addWidget(layout_y1_le, 3, 6, 1, 1);

        spacerItem10 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem10, 0, 3, 6, 1);

        spacerItem11 = new QSpacerItem(691, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout6->addItem(spacerItem11, 6, 0, 1, 7);

        spacerItem12 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout6->addItem(spacerItem12, 8, 0, 1, 7);

        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_6);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_30 = new QLabel(frame_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        hboxLayout1->addWidget(label_30);

        explicit_trans_le = new QLineEdit(frame_6);
        explicit_trans_le->setObjectName(QString::fromUtf8("explicit_trans_le"));

        hboxLayout1->addWidget(explicit_trans_le);

        label_31 = new QLabel(frame_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        hboxLayout1->addWidget(label_31);


        gridLayout6->addWidget(frame_6, 9, 0, 1, 7);

        label_29 = new QLabel(frame_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setWordWrap(true);

        gridLayout6->addWidget(label_29, 7, 0, 1, 7);


        vboxLayout6->addWidget(frame_5);

        spacerItem13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacerItem13);

        central_stack->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        vboxLayout7 = new QVBoxLayout(page_7);
#ifndef Q_OS_MAC
        vboxLayout7->setSpacing(6);
#endif
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        groupBox_2 = new QGroupBox(page_7);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout7 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout7->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout7->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        gridLayout7->addWidget(label_5, 1, 0, 1, 3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout7->addWidget(label_4, 0, 2, 1, 1);

        layer_properties_file_le = new QLineEdit(groupBox_2);
        layer_properties_file_le->setObjectName(QString::fromUtf8("layer_properties_file_le"));

        gridLayout7->addWidget(layer_properties_file_le, 0, 0, 1, 1);

        layer_properties_file_browse_pb = new QToolButton(groupBox_2);
        layer_properties_file_browse_pb->setObjectName(QString::fromUtf8("layer_properties_file_browse_pb"));

        gridLayout7->addWidget(layer_properties_file_browse_pb, 0, 1, 1, 1);


        vboxLayout7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(page_7);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout8 = new QGridLayout(groupBox_3);
#ifndef Q_OS_MAC
        gridLayout8->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout8->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        border_le = new QLineEdit(groupBox_3);
        border_le->setObjectName(QString::fromUtf8("border_le"));

        gridLayout8->addWidget(border_le, 3, 2, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout8->addWidget(label_2, 2, 0, 1, 1);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout8->addWidget(label_16, 0, 3, 1, 1);

        dbu_lbl2 = new QLabel(groupBox_3);
        dbu_lbl2->setObjectName(QString::fromUtf8("dbu_lbl2"));

        gridLayout8->addWidget(dbu_lbl2, 4, 3, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout8->addWidget(label_12, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout8->addWidget(label_11, 0, 0, 1, 1);

        dbu_lbl1 = new QLabel(groupBox_3);
        dbu_lbl1->setObjectName(QString::fromUtf8("dbu_lbl1"));

        gridLayout8->addWidget(dbu_lbl1, 4, 0, 1, 1);

        topcell_lbl = new QLabel(groupBox_3);
        topcell_lbl->setObjectName(QString::fromUtf8("topcell_lbl"));

        gridLayout8->addWidget(topcell_lbl, 5, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout8->addWidget(label_7, 3, 1, 1, 1);

        dbu_le = new QLineEdit(groupBox_3);
        dbu_le->setObjectName(QString::fromUtf8("dbu_le"));

        gridLayout8->addWidget(dbu_le, 4, 1, 1, 2);

        topcell_le = new QLineEdit(groupBox_3);
        topcell_le->setObjectName(QString::fromUtf8("topcell_le"));

        gridLayout8->addWidget(topcell_le, 5, 1, 1, 2);

        invert_cb = new QCheckBox(groupBox_3);
        invert_cb->setObjectName(QString::fromUtf8("invert_cb"));

        gridLayout8->addWidget(invert_cb, 2, 1, 1, 3);

        merge_cb = new QCheckBox(groupBox_3);
        merge_cb->setObjectName(QString::fromUtf8("merge_cb"));

        gridLayout8->addWidget(merge_cb, 1, 1, 1, 3);

        circle_points_le = new QLineEdit(groupBox_3);
        circle_points_le->setObjectName(QString::fromUtf8("circle_points_le"));

        gridLayout8->addWidget(circle_points_le, 0, 1, 1, 2);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout8->addWidget(label_6, 3, 3, 1, 1);


        vboxLayout7->addWidget(groupBox_3);

        spacerItem14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem14);

        central_stack->addWidget(page_7);

        gridLayout->addWidget(central_stack, 3, 0, 1, 5);

        next_pb = new QPushButton(GerberImportDialog);
        next_pb->setObjectName(QString::fromUtf8("next_pb"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/forward.png"));
        next_pb->setIcon(icon4);

        gridLayout->addWidget(next_pb, 6, 2, 1, 1);

        cancel_pb = new QPushButton(GerberImportDialog);
        cancel_pb->setObjectName(QString::fromUtf8("cancel_pb"));

        gridLayout->addWidget(cancel_pb, 6, 4, 1, 1);

        import_pb = new QPushButton(GerberImportDialog);
        import_pb->setObjectName(QString::fromUtf8("import_pb"));

        gridLayout->addWidget(import_pb, 6, 3, 1, 1);

        last_pb = new QPushButton(GerberImportDialog);
        last_pb->setObjectName(QString::fromUtf8("last_pb"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/back.png"));
        last_pb->setIcon(icon5);

        gridLayout->addWidget(last_pb, 6, 1, 1, 1);

        spacerItem15 = new QSpacerItem(331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem15, 6, 0, 1, 1);

        line_4 = new QFrame(GerberImportDialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 5, 0, 1, 5);

        spacerItem16 = new QSpacerItem(736, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem16, 4, 0, 1, 5);

        frame_3 = new QFrame(GerberImportDialog);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame_3);
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        section_header_lbl = new QLabel(frame_3);
        section_header_lbl->setObjectName(QString::fromUtf8("section_header_lbl"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        section_header_lbl->setFont(font);

        hboxLayout2->addWidget(section_header_lbl);

        spacerItem17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem17);

        file_menu = new QToolButton(frame_3);
        file_menu->setObjectName(QString::fromUtf8("file_menu"));
        file_menu->setPopupMode(QToolButton::InstantPopup);

        hboxLayout2->addWidget(file_menu);


        gridLayout->addWidget(frame_3, 0, 0, 1, 5);

        spacerItem18 = new QSpacerItem(736, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem18, 1, 0, 1, 5);

        line = new QFrame(GerberImportDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 5);

        QWidget::setTabOrder(import_into_rb, import_same_panel_rb);
        QWidget::setTabOrder(import_same_panel_rb, import_new_panel_rb);
        QWidget::setTabOrder(import_new_panel_rb, layout_layers_tree);
        QWidget::setTabOrder(layout_layers_tree, add_target_layer_pb);
        QWidget::setTabOrder(add_target_layer_pb, delete_target_layer_pb);
        QWidget::setTabOrder(delete_target_layer_pb, move_target_layer_up_pb);
        QWidget::setTabOrder(move_target_layer_up_pb, move_target_layer_down_pb);
        QWidget::setTabOrder(move_target_layer_down_pb, mounting_cbx);
        QWidget::setTabOrder(mounting_cbx, num_metal_le);
        QWidget::setTabOrder(num_metal_le, num_via_le);
        QWidget::setTabOrder(num_via_le, artwork_files_tree);
        QWidget::setTabOrder(artwork_files_tree, drill_files_tree);
        QWidget::setTabOrder(drill_files_tree, pcb_x1_le);
        QWidget::setTabOrder(pcb_x1_le, pcb_y1_le);
        QWidget::setTabOrder(pcb_y1_le, layout_x1_le);
        QWidget::setTabOrder(layout_x1_le, layout_y1_le);
        QWidget::setTabOrder(layout_y1_le, pcb_x2_le);
        QWidget::setTabOrder(pcb_x2_le, pcb_y2_le);
        QWidget::setTabOrder(pcb_y2_le, layout_x2_le);
        QWidget::setTabOrder(layout_x2_le, layout_y2_le);
        QWidget::setTabOrder(layout_y2_le, pcb_x3_le);
        QWidget::setTabOrder(pcb_x3_le, pcb_y3_le);
        QWidget::setTabOrder(pcb_y3_le, layout_x3_le);
        QWidget::setTabOrder(layout_x3_le, layout_y3_le);
        QWidget::setTabOrder(layout_y3_le, explicit_trans_le);
        QWidget::setTabOrder(explicit_trans_le, layer_properties_file_le);
        QWidget::setTabOrder(layer_properties_file_le, layer_properties_file_browse_pb);
        QWidget::setTabOrder(layer_properties_file_browse_pb, circle_points_le);
        QWidget::setTabOrder(circle_points_le, merge_cb);
        QWidget::setTabOrder(merge_cb, dbu_le);
        QWidget::setTabOrder(dbu_le, topcell_le);
        QWidget::setTabOrder(topcell_le, last_pb);
        QWidget::setTabOrder(last_pb, next_pb);
        QWidget::setTabOrder(next_pb, import_pb);
        QWidget::setTabOrder(import_pb, cancel_pb);

        retranslateUi(GerberImportDialog);
        QObject::connect(import_pb, SIGNAL(clicked()), GerberImportDialog, SLOT(accept()));
        QObject::connect(cancel_pb, SIGNAL(clicked()), GerberImportDialog, SLOT(reject()));

        central_stack->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(GerberImportDialog);
    } // setupUi

    void retranslateUi(QDialog *GerberImportDialog)
    {
        GerberImportDialog->setWindowTitle(QApplication::translate("GerberImportDialog", "PCB Import", nullptr));
        groupBox_4->setTitle(QApplication::translate("GerberImportDialog", "Base Directory", nullptr));
        base_dir_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
        groupBox->setTitle(QApplication::translate("GerberImportDialog", "Import Mode", nullptr));
        import_into_rb->setText(QApplication::translate("GerberImportDialog", "Import into current layout (layers are added or overwritten)", nullptr));
        import_same_panel_rb->setText(QApplication::translate("GerberImportDialog", "Import as new layout in same panel", nullptr));
        import_new_panel_rb->setText(QApplication::translate("GerberImportDialog", "Import as new layout in new panel", nullptr));
        free_mapping_cb->setText(QApplication::translate("GerberImportDialog", "Free layer mapping (allows one to specify arbitrary mapping between PCB files and layout layers)", nullptr));
        label_3->setText(QApplication::translate("GerberImportDialog", "Specify the target layers \n"
"for the layout here.\n"
"\n"
"Double-click the layer to\n"
"edit the properties.\n"
"\n"
"The layers should reflect \n"
"the physical layer stack as\n"
"seen from the chip for flip-\n"
"chip mounting. Metal layers\n"
"interleave with via layers. \n"
"\n"
"The first layer will be the \n"
"one closest to the chip\n"
"surface.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = layout_layers_tree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("GerberImportDialog", "Layer Specification", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("GerberImportDialog", "Type", nullptr));
#ifndef QT_NO_TOOLTIP
        move_target_layer_down_pb->setToolTip(QApplication::translate("GerberImportDialog", "Move selected layer down (Ctrl+Down)", nullptr));
#endif // QT_NO_TOOLTIP
        move_target_layer_down_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        move_target_layer_down_pb->setShortcut(QApplication::translate("GerberImportDialog", "Ctrl+Down", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        move_target_layer_up_pb->setToolTip(QApplication::translate("GerberImportDialog", "Move selected layer up (Ctrl+Up)", nullptr));
#endif // QT_NO_TOOLTIP
        move_target_layer_up_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        move_target_layer_up_pb->setShortcut(QApplication::translate("GerberImportDialog", "Ctrl+Up", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        delete_target_layer_pb->setToolTip(QApplication::translate("GerberImportDialog", "Delete selected layers (Delete)", nullptr));
#endif // QT_NO_TOOLTIP
        delete_target_layer_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        delete_target_layer_pb->setShortcut(QApplication::translate("GerberImportDialog", "Del", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        add_target_layer_pb->setToolTip(QApplication::translate("GerberImportDialog", "Add new layer (Return)", nullptr));
#endif // QT_NO_TOOLTIP
        add_target_layer_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        add_target_layer_pb->setShortcut(QApplication::translate("GerberImportDialog", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        mounting_cbx->setItemText(0, QApplication::translate("GerberImportDialog", "Top Mounting", nullptr));
        mounting_cbx->setItemText(1, QApplication::translate("GerberImportDialog", "Bottom Mounting", nullptr));

        label_33->setText(QApplication::translate("GerberImportDialog", "Number of metal layers", nullptr));
        Number_of_via_layers->setText(QApplication::translate("GerberImportDialog", "Number of via types", nullptr));
        label_28->setText(QApplication::translate("GerberImportDialog", "Chip mounting", nullptr));
        label_32->setText(QApplication::translate("GerberImportDialog", "Chip mounting determines the order by which the artwork layers are assigned to layout layers. \n"
"\n"
"For \"top\" mounting, the top PCB layer will be assigned to the first layout layer. \n"
"For \"bottom\" mounting, the top PCB layer will be assigned to the last layout layer.", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = artwork_files_tree->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("GerberImportDialog", "Artwork File", nullptr));
        ___qtreewidgetitem1->setText(0, QApplication::translate("GerberImportDialog", "Index", nullptr));
#ifndef QT_NO_TOOLTIP
        artwork_files_tree->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem2 = drill_files_tree->headerItem();
        ___qtreewidgetitem2->setText(3, QApplication::translate("GerberImportDialog", "Drill File", nullptr));
        ___qtreewidgetitem2->setText(2, QApplication::translate("GerberImportDialog", "Stop Layer", nullptr));
        ___qtreewidgetitem2->setText(1, QApplication::translate("GerberImportDialog", "Start Layer", nullptr));
        ___qtreewidgetitem2->setText(0, QApplication::translate("GerberImportDialog", "Index", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = free_files_tree->headerItem();
        ___qtreewidgetitem3->setText(0, QApplication::translate("GerberImportDialog", "Files", nullptr));
#ifndef QT_NO_TOOLTIP
        move_free_file_up_pb->setToolTip(QApplication::translate("GerberImportDialog", "Move selected layer up (Ctrl+Up)", nullptr));
#endif // QT_NO_TOOLTIP
        move_free_file_up_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        move_free_file_up_pb->setShortcut(QApplication::translate("GerberImportDialog", "Ctrl+Up", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        add_free_file_pb->setToolTip(QApplication::translate("GerberImportDialog", "Add new layer (Return)", nullptr));
#endif // QT_NO_TOOLTIP
        add_free_file_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        add_free_file_pb->setShortcut(QApplication::translate("GerberImportDialog", "Return", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        move_free_file_down_pb->setToolTip(QApplication::translate("GerberImportDialog", "Move selected layer down (Ctrl+Down)", nullptr));
#endif // QT_NO_TOOLTIP
        move_free_file_down_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        move_free_file_down_pb->setShortcut(QApplication::translate("GerberImportDialog", "Ctrl+Down", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        delete_free_file_pb->setToolTip(QApplication::translate("GerberImportDialog", "Delete selected layers (Delete)", nullptr));
#endif // QT_NO_TOOLTIP
        delete_free_file_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        delete_free_file_pb->setShortcut(QApplication::translate("GerberImportDialog", "Del", nullptr));
#endif // QT_NO_SHORTCUT
        QTreeWidgetItem *___qtreewidgetitem4 = free_layout_layers_tree->headerItem();
        ___qtreewidgetitem4->setText(0, QApplication::translate("GerberImportDialog", "Layer Specification", nullptr));
        label->setText(QApplication::translate("GerberImportDialog", "Double-click the entry to edit the layer properties", nullptr));
#ifndef QT_NO_TOOLTIP
        free_move_target_layer_down_pb->setToolTip(QApplication::translate("GerberImportDialog", "Move selected layer down (Ctrl+Down)", nullptr));
#endif // QT_NO_TOOLTIP
        free_move_target_layer_down_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        free_move_target_layer_down_pb->setShortcut(QApplication::translate("GerberImportDialog", "Ctrl+Down", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        free_move_target_layer_up_pb->setToolTip(QApplication::translate("GerberImportDialog", "Move selected layer up (Ctrl+Up)", nullptr));
#endif // QT_NO_TOOLTIP
        free_move_target_layer_up_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        free_move_target_layer_up_pb->setShortcut(QApplication::translate("GerberImportDialog", "Ctrl+Up", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        free_delete_target_layer_pb->setToolTip(QApplication::translate("GerberImportDialog", "Delete selected layers (Delete)", nullptr));
#endif // QT_NO_TOOLTIP
        free_delete_target_layer_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        free_delete_target_layer_pb->setShortcut(QApplication::translate("GerberImportDialog", "Del", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        free_add_target_layer_pb->setToolTip(QApplication::translate("GerberImportDialog", "Add new layer (Return)", nullptr));
#endif // QT_NO_TOOLTIP
        free_add_target_layer_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        free_add_target_layer_pb->setShortcut(QApplication::translate("GerberImportDialog", "Return", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        reset_mapping_pb->setToolTip(QApplication::translate("GerberImportDialog", "Clear settings for selected layers", nullptr));
#endif // QT_NO_TOOLTIP
        reset_mapping_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        reset_mapping_pb->setShortcut(QApplication::translate("GerberImportDialog", "Del", nullptr));
#endif // QT_NO_SHORTCUT
        QTreeWidgetItem *___qtreewidgetitem5 = free_layer_mapping_tree->headerItem();
        ___qtreewidgetitem5->setText(0, QApplication::translate("GerberImportDialog", "Layer Mapping", nullptr));
        label_22->setText(QApplication::translate("GerberImportDialog", "Point 1", nullptr));
        label_24->setText(QApplication::translate("GerberImportDialog", "y (micron)", nullptr));
        label_17->setText(QApplication::translate("GerberImportDialog", "Reference points coordinates on PCB", nullptr));
        Point_3->setText(QApplication::translate("GerberImportDialog", "Point 3", nullptr));
        label_18->setText(QApplication::translate("GerberImportDialog", "Reference point coordinates in layout", nullptr));
        label_23->setText(QApplication::translate("GerberImportDialog", "x (micron)", nullptr));
        label_25->setText(QApplication::translate("GerberImportDialog", "Point 2", nullptr));
        label_26->setText(QApplication::translate("GerberImportDialog", "Point 3", nullptr));
        label_21->setText(QApplication::translate("GerberImportDialog", "Point 1", nullptr));
        label_20->setText(QApplication::translate("GerberImportDialog", "y (micron)", nullptr));
        label_19->setText(QApplication::translate("GerberImportDialog", "x (micron)", nullptr));
        label_27->setText(QApplication::translate("GerberImportDialog", "Point 2", nullptr));
        label_30->setText(QApplication::translate("GerberImportDialog", "Explicit transformation", nullptr));
#ifndef QT_NO_TOOLTIP
        explicit_trans_le->setToolTip(QApplication::translate("GerberImportDialog", "Examples: \"r90\", \"m45\", \"r90 (2000,-5000)\"", nullptr));
#endif // QT_NO_TOOLTIP
        label_31->setText(QApplication::translate("GerberImportDialog", "(Reference points have higher priority)", nullptr));
        label_29->setText(QApplication::translate("GerberImportDialog", "Leave fields empty to specify less reference points. One point is used to derive the displacement, further points are used to derive the orientation. Currently, no magnification is implied and only simple rotations are derived from the mapping points.\n"
"\n"
"Alternatively the transformation (imported to existing layout) can be specified using the explicit transformation below. This allows one to specify an arbitrary transformation. Use the common notation (i.e. \"*2 r90 10,-100\").", nullptr));
        groupBox_2->setTitle(QApplication::translate("GerberImportDialog", "Layer Properties File", nullptr));
        label_5->setText(QApplication::translate("GerberImportDialog", "Hint: this file is applied to the final layout. If PCB data is imported into an existing layout, the layer file should contain the previous layers as well.", nullptr));
        label_4->setText(QApplication::translate("GerberImportDialog", "(leave empty to not load any file)", nullptr));
        layer_properties_file_browse_pb->setText(QApplication::translate("GerberImportDialog", "...", nullptr));
        groupBox_3->setTitle(QApplication::translate("GerberImportDialog", "Import Options", nullptr));
        label_2->setText(QApplication::translate("GerberImportDialog", "Inverse layers", nullptr));
        label_16->setText(QApplication::translate("GerberImportDialog", "Min. 4 points", nullptr));
        dbu_lbl2->setText(QApplication::translate("GerberImportDialog", "Micron", nullptr));
        label_12->setText(QApplication::translate("GerberImportDialog", "Merge polygons", nullptr));
        label_11->setText(QApplication::translate("GerberImportDialog", "Number of points per circle   ", nullptr));
        dbu_lbl1->setText(QApplication::translate("GerberImportDialog", "Database unit (for new layouts)   ", nullptr));
        topcell_lbl->setText(QApplication::translate("GerberImportDialog", "Top cell name (for new layouts)    ", nullptr));
        label_7->setText(QApplication::translate("GerberImportDialog", "... with a layout border of", nullptr));
        invert_cb->setText(QApplication::translate("GerberImportDialog", "(Check to invert layer for negative contrast)", nullptr));
        merge_cb->setText(QApplication::translate("GerberImportDialog", "(Check to remove all overlaps after importing)", nullptr));
        label_6->setText(QApplication::translate("GerberImportDialog", "Micron", nullptr));
        next_pb->setText(QApplication::translate("GerberImportDialog", "Next", nullptr));
        cancel_pb->setText(QApplication::translate("GerberImportDialog", "Cancel", nullptr));
        import_pb->setText(QApplication::translate("GerberImportDialog", "Import", nullptr));
        last_pb->setText(QApplication::translate("GerberImportDialog", "Back", nullptr));
        section_header_lbl->setText(QApplication::translate("GerberImportDialog", "SectionHeader", nullptr));
        file_menu->setText(QApplication::translate("GerberImportDialog", "File ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GerberImportDialog: public Ui_GerberImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERBERIMPORTDIALOG_H
