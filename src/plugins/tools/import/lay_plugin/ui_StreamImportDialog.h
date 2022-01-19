/********************************************************************************
** Form generated from reading UI file 'StreamImportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMIMPORTDIALOG_H
#define UI_STREAMIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StreamImportDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *last_pb;
    QSpacerItem *spacerItem;
    QPushButton *import_pb;
    QPushButton *next_pb;
    QPushButton *cancel_pb;
    QFrame *line_4;
    QSpacerItem *spacerItem1;
    QFrame *line;
    QSpacerItem *spacerItem2;
    QFrame *frame_3;
    QHBoxLayout *hboxLayout;
    QLabel *section_header_lbl;
    QSpacerItem *spacerItem3;
    QPushButton *reset_pb;
    QStackedWidget *central_stack;
    QWidget *page;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout1;
    QToolButton *file_pb;
    QLineEdit *topcell_le;
    QFrame *frame_2;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QPushButton *edit_options_pb;
    QPushButton *reset_options_pb;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QLabel *label_7;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QPlainTextEdit *files_te;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *import_simple_rb;
    QRadioButton *import_extra_rb;
    QRadioButton *import_instantiate_rb;
    QRadioButton *import_merge_rb;
    QSpacerItem *spacerItem6;
    QLabel *label_8;
    QSpacerItem *spacerItem7;
    QWidget *page_2;
    QVBoxLayout *vboxLayout2;
    QFrame *frame;
    QGridLayout *gridLayout2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout3;
    QLabel *label;
    QLineEdit *offset_le;
    QRadioButton *offset_rb;
    QRadioButton *no_mapping_rb;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;
    QWidget *page_6;
    QVBoxLayout *vboxLayout3;
    QFrame *frame_5;
    QGridLayout *gridLayout4;
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
    QHBoxLayout *hboxLayout2;
    QLabel *label_30;
    QLineEdit *explicit_trans_le;
    QLabel *label_31;
    QLabel *label_29;
    QSpacerItem *spacerItem13;

    void setupUi(QDialog *StreamImportDialog)
    {
        if (StreamImportDialog->objectName().isEmpty())
            StreamImportDialog->setObjectName(QStringLiteral("StreamImportDialog"));
        StreamImportDialog->resize(754, 604);
        gridLayout = new QGridLayout(StreamImportDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        last_pb = new QPushButton(StreamImportDialog);
        last_pb->setObjectName(QStringLiteral("last_pb"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        last_pb->setIcon(icon);

        gridLayout->addWidget(last_pb, 6, 1, 1, 1);

        spacerItem = new QSpacerItem(331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 6, 0, 1, 1);

        import_pb = new QPushButton(StreamImportDialog);
        import_pb->setObjectName(QStringLiteral("import_pb"));

        gridLayout->addWidget(import_pb, 6, 3, 1, 1);

        next_pb = new QPushButton(StreamImportDialog);
        next_pb->setObjectName(QStringLiteral("next_pb"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        next_pb->setIcon(icon1);

        gridLayout->addWidget(next_pb, 6, 2, 1, 1);

        cancel_pb = new QPushButton(StreamImportDialog);
        cancel_pb->setObjectName(QStringLiteral("cancel_pb"));

        gridLayout->addWidget(cancel_pb, 6, 4, 1, 1);

        line_4 = new QFrame(StreamImportDialog);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 5, 0, 1, 5);

        spacerItem1 = new QSpacerItem(736, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 4, 0, 1, 5);

        line = new QFrame(StreamImportDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 5);

        spacerItem2 = new QSpacerItem(736, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem2, 1, 0, 1, 5);

        frame_3 = new QFrame(StreamImportDialog);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame_3);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        section_header_lbl = new QLabel(frame_3);
        section_header_lbl->setObjectName(QStringLiteral("section_header_lbl"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        section_header_lbl->setFont(font);

        hboxLayout->addWidget(section_header_lbl);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);

        reset_pb = new QPushButton(frame_3);
        reset_pb->setObjectName(QStringLiteral("reset_pb"));

        hboxLayout->addWidget(reset_pb);


        gridLayout->addWidget(frame_3, 0, 0, 1, 5);

        central_stack = new QStackedWidget(StreamImportDialog);
        central_stack->setObjectName(QStringLiteral("central_stack"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        vboxLayout = new QVBoxLayout(page);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox_4 = new QGroupBox(page);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout1 = new QGridLayout(groupBox_4);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        file_pb = new QToolButton(groupBox_4);
        file_pb->setObjectName(QStringLiteral("file_pb"));

        gridLayout1->addWidget(file_pb, 0, 3, 1, 1);

        topcell_le = new QLineEdit(groupBox_4);
        topcell_le->setObjectName(QStringLiteral("topcell_le"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topcell_le->sizePolicy().hasHeightForWidth());
        topcell_le->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(topcell_le, 2, 1, 1, 1);

        frame_2 = new QFrame(groupBox_4);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        hboxLayout1 = new QHBoxLayout(frame_2);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout1->addWidget(label_3);

        edit_options_pb = new QPushButton(frame_2);
        edit_options_pb->setObjectName(QStringLiteral("edit_options_pb"));

        hboxLayout1->addWidget(edit_options_pb);

        reset_options_pb = new QPushButton(frame_2);
        reset_options_pb->setObjectName(QStringLiteral("reset_options_pb"));

        hboxLayout1->addWidget(reset_options_pb);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);


        gridLayout1->addWidget(frame_2, 4, 0, 1, 4);

        spacerItem5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(spacerItem5, 3, 0, 1, 4);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout1->addWidget(label_7, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(label_2, 2, 2, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(verticalSpacer, 1, 3, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout1->addWidget(label_6, 0, 0, 2, 1);

        files_te = new QPlainTextEdit(groupBox_4);
        files_te->setObjectName(QStringLiteral("files_te"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(files_te->sizePolicy().hasHeightForWidth());
        files_te->setSizePolicy(sizePolicy2);
        files_te->setReadOnly(true);

        gridLayout1->addWidget(files_te, 0, 1, 2, 2);


        vboxLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        import_simple_rb = new QRadioButton(groupBox);
        import_simple_rb->setObjectName(QStringLiteral("import_simple_rb"));

        vboxLayout1->addWidget(import_simple_rb);

        import_extra_rb = new QRadioButton(groupBox);
        import_extra_rb->setObjectName(QStringLiteral("import_extra_rb"));

        vboxLayout1->addWidget(import_extra_rb);

        import_instantiate_rb = new QRadioButton(groupBox);
        import_instantiate_rb->setObjectName(QStringLiteral("import_instantiate_rb"));

        vboxLayout1->addWidget(import_instantiate_rb);

        import_merge_rb = new QRadioButton(groupBox);
        import_merge_rb->setObjectName(QStringLiteral("import_merge_rb"));

        vboxLayout1->addWidget(import_merge_rb);

        spacerItem6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout1->addItem(spacerItem6);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        vboxLayout1->addWidget(label_8);


        vboxLayout->addWidget(groupBox);

        spacerItem7 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem7);

        central_stack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        vboxLayout2 = new QVBoxLayout(page_2);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(page_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout2 = new QGridLayout(frame);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout3 = new QGridLayout(groupBox_2);
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout3->addWidget(label, 2, 1, 1, 2);

        offset_le = new QLineEdit(groupBox_2);
        offset_le->setObjectName(QStringLiteral("offset_le"));

        gridLayout3->addWidget(offset_le, 1, 1, 1, 1);

        offset_rb = new QRadioButton(groupBox_2);
        offset_rb->setObjectName(QStringLiteral("offset_rb"));

        gridLayout3->addWidget(offset_rb, 1, 0, 1, 1);

        no_mapping_rb = new QRadioButton(groupBox_2);
        no_mapping_rb->setObjectName(QStringLiteral("no_mapping_rb"));

        gridLayout3->addWidget(no_mapping_rb, 0, 0, 1, 1);

        spacerItem8 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem8, 1, 2, 1, 1);


        gridLayout2->addWidget(groupBox_2, 0, 0, 5, 1);

        spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem9, 5, 0, 1, 1);


        vboxLayout2->addWidget(frame);

        central_stack->addWidget(page_2);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        vboxLayout3 = new QVBoxLayout(page_6);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(page_6);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Plain);
        gridLayout4 = new QGridLayout(frame_5);
        gridLayout4->setSpacing(6);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        layout_x1_le = new QLineEdit(frame_5);
        layout_x1_le->setObjectName(QStringLiteral("layout_x1_le"));

        gridLayout4->addWidget(layout_x1_le, 3, 5, 1, 1);

        pcb_y3_le = new QLineEdit(frame_5);
        pcb_y3_le->setObjectName(QStringLiteral("pcb_y3_le"));

        gridLayout4->addWidget(pcb_y3_le, 5, 2, 1, 1);

        label_22 = new QLabel(frame_5);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout4->addWidget(label_22, 3, 4, 1, 1);

        label_24 = new QLabel(frame_5);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout4->addWidget(label_24, 2, 6, 1, 1);

        label_17 = new QLabel(frame_5);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout4->addWidget(label_17, 0, 0, 1, 3);

        pcb_y2_le = new QLineEdit(frame_5);
        pcb_y2_le->setObjectName(QStringLiteral("pcb_y2_le"));

        gridLayout4->addWidget(pcb_y2_le, 4, 2, 1, 1);

        Point_3 = new QLabel(frame_5);
        Point_3->setObjectName(QStringLiteral("Point_3"));

        gridLayout4->addWidget(Point_3, 5, 4, 1, 1);

        layout_x2_le = new QLineEdit(frame_5);
        layout_x2_le->setObjectName(QStringLiteral("layout_x2_le"));

        gridLayout4->addWidget(layout_x2_le, 4, 5, 1, 1);

        label_18 = new QLabel(frame_5);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout4->addWidget(label_18, 0, 4, 1, 3);

        layout_x3_le = new QLineEdit(frame_5);
        layout_x3_le->setObjectName(QStringLiteral("layout_x3_le"));

        gridLayout4->addWidget(layout_x3_le, 5, 5, 1, 1);

        layout_y3_le = new QLineEdit(frame_5);
        layout_y3_le->setObjectName(QStringLiteral("layout_y3_le"));

        gridLayout4->addWidget(layout_y3_le, 5, 6, 1, 1);

        label_23 = new QLabel(frame_5);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout4->addWidget(label_23, 2, 5, 1, 1);

        line_2 = new QFrame(frame_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout4->addWidget(line_2, 1, 0, 1, 3);

        label_25 = new QLabel(frame_5);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout4->addWidget(label_25, 4, 0, 1, 1);

        pcb_x2_le = new QLineEdit(frame_5);
        pcb_x2_le->setObjectName(QStringLiteral("pcb_x2_le"));

        gridLayout4->addWidget(pcb_x2_le, 4, 1, 1, 1);

        label_26 = new QLabel(frame_5);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout4->addWidget(label_26, 5, 0, 1, 1);

        label_21 = new QLabel(frame_5);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout4->addWidget(label_21, 3, 0, 1, 1);

        pcb_x3_le = new QLineEdit(frame_5);
        pcb_x3_le->setObjectName(QStringLiteral("pcb_x3_le"));

        gridLayout4->addWidget(pcb_x3_le, 5, 1, 1, 1);

        pcb_y1_le = new QLineEdit(frame_5);
        pcb_y1_le->setObjectName(QStringLiteral("pcb_y1_le"));

        gridLayout4->addWidget(pcb_y1_le, 3, 2, 1, 1);

        line_3 = new QFrame(frame_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout4->addWidget(line_3, 1, 4, 1, 3);

        pcb_x1_le = new QLineEdit(frame_5);
        pcb_x1_le->setObjectName(QStringLiteral("pcb_x1_le"));

        gridLayout4->addWidget(pcb_x1_le, 3, 1, 1, 1);

        label_20 = new QLabel(frame_5);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout4->addWidget(label_20, 2, 2, 1, 1);

        label_19 = new QLabel(frame_5);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout4->addWidget(label_19, 2, 1, 1, 1);

        label_27 = new QLabel(frame_5);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout4->addWidget(label_27, 4, 4, 1, 1);

        layout_y2_le = new QLineEdit(frame_5);
        layout_y2_le->setObjectName(QStringLiteral("layout_y2_le"));

        gridLayout4->addWidget(layout_y2_le, 4, 6, 1, 1);

        layout_y1_le = new QLineEdit(frame_5);
        layout_y1_le->setObjectName(QStringLiteral("layout_y1_le"));

        gridLayout4->addWidget(layout_y1_le, 3, 6, 1, 1);

        spacerItem10 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem10, 0, 3, 6, 1);

        spacerItem11 = new QSpacerItem(691, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout4->addItem(spacerItem11, 6, 0, 1, 7);

        spacerItem12 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout4->addItem(spacerItem12, 8, 0, 1, 7);

        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frame_6);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(frame_6);
        label_30->setObjectName(QStringLiteral("label_30"));

        hboxLayout2->addWidget(label_30);

        explicit_trans_le = new QLineEdit(frame_6);
        explicit_trans_le->setObjectName(QStringLiteral("explicit_trans_le"));

        hboxLayout2->addWidget(explicit_trans_le);

        label_31 = new QLabel(frame_6);
        label_31->setObjectName(QStringLiteral("label_31"));

        hboxLayout2->addWidget(label_31);


        gridLayout4->addWidget(frame_6, 9, 0, 1, 7);

        label_29 = new QLabel(frame_5);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setWordWrap(true);

        gridLayout4->addWidget(label_29, 7, 0, 1, 7);


        vboxLayout3->addWidget(frame_5);

        spacerItem13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem13);

        central_stack->addWidget(page_6);

        gridLayout->addWidget(central_stack, 3, 0, 1, 5);

        QWidget::setTabOrder(file_pb, topcell_le);
        QWidget::setTabOrder(topcell_le, edit_options_pb);
        QWidget::setTabOrder(edit_options_pb, reset_options_pb);
        QWidget::setTabOrder(reset_options_pb, import_simple_rb);
        QWidget::setTabOrder(import_simple_rb, import_extra_rb);
        QWidget::setTabOrder(import_extra_rb, import_instantiate_rb);
        QWidget::setTabOrder(import_instantiate_rb, import_merge_rb);
        QWidget::setTabOrder(import_merge_rb, no_mapping_rb);
        QWidget::setTabOrder(no_mapping_rb, offset_rb);
        QWidget::setTabOrder(offset_rb, offset_le);
        QWidget::setTabOrder(offset_le, pcb_x1_le);
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
        QWidget::setTabOrder(explicit_trans_le, last_pb);
        QWidget::setTabOrder(last_pb, next_pb);
        QWidget::setTabOrder(next_pb, import_pb);
        QWidget::setTabOrder(import_pb, cancel_pb);

        retranslateUi(StreamImportDialog);
        QObject::connect(import_pb, SIGNAL(clicked()), StreamImportDialog, SLOT(accept()));
        QObject::connect(cancel_pb, SIGNAL(clicked()), StreamImportDialog, SLOT(reject()));

        central_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StreamImportDialog);
    } // setupUi

    void retranslateUi(QDialog *StreamImportDialog)
    {
        StreamImportDialog->setWindowTitle(QApplication::translate("StreamImportDialog", "Dialog", Q_NULLPTR));
        last_pb->setText(QApplication::translate("StreamImportDialog", "Back", Q_NULLPTR));
        import_pb->setText(QApplication::translate("StreamImportDialog", "Import", Q_NULLPTR));
        next_pb->setText(QApplication::translate("StreamImportDialog", "Next", Q_NULLPTR));
        cancel_pb->setText(QApplication::translate("StreamImportDialog", "Cancel", Q_NULLPTR));
        section_header_lbl->setText(QApplication::translate("StreamImportDialog", "SectionHeader", Q_NULLPTR));
        reset_pb->setText(QApplication::translate("StreamImportDialog", "Reset", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("StreamImportDialog", "Input", Q_NULLPTR));
        file_pb->setText(QApplication::translate("StreamImportDialog", "...", Q_NULLPTR));
        label_3->setText(QApplication::translate("StreamImportDialog", "Stream reader options   ", Q_NULLPTR));
        edit_options_pb->setText(QApplication::translate("StreamImportDialog", "Edit ...", Q_NULLPTR));
        reset_options_pb->setText(QApplication::translate("StreamImportDialog", "Reset", Q_NULLPTR));
        label_7->setText(QApplication::translate("StreamImportDialog", "Top cell ", Q_NULLPTR));
        label_2->setText(QApplication::translate("StreamImportDialog", "(leave empty for selecting the top cell automatically)", Q_NULLPTR));
        label_6->setText(QApplication::translate("StreamImportDialog", "Files\n"
"\n"
"\n"
"\n"
"\n"
"", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("StreamImportDialog", "Import Mode", Q_NULLPTR));
        import_simple_rb->setText(QApplication::translate("StreamImportDialog", "Merge - Merge new cell into current cell and create a new cell hierarchy below", Q_NULLPTR));
        import_extra_rb->setText(QApplication::translate("StreamImportDialog", "Extra cells - Import as extra cells", Q_NULLPTR));
        import_instantiate_rb->setText(QApplication::translate("StreamImportDialog", "Instantiate - Instantiate a new cell tree below the current cell", Q_NULLPTR));
        import_merge_rb->setText(QApplication::translate("StreamImportDialog", "Merge hierarchy - Merge into current cell's hierarchy (attempt to identify corresponding cells)", Q_NULLPTR));
        label_8->setText(QApplication::translate("StreamImportDialog", "Note: All modes except \"Extra cells\" require a unique top cell for the input file. Either one must be specified or the input file must have a single top cell.", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("StreamImportDialog", "Layer mapping", Q_NULLPTR));
        label->setText(QApplication::translate("StreamImportDialog", "Use \"layer/datatype\" notation to specify an offset to be added to layer and/or datatype.", Q_NULLPTR));
        offset_rb->setText(QApplication::translate("StreamImportDialog", "On original layers plus offset", Q_NULLPTR));
        no_mapping_rb->setText(QApplication::translate("StreamImportDialog", "No mapping - use original layers", Q_NULLPTR));
        label_22->setText(QApplication::translate("StreamImportDialog", "Point 1", Q_NULLPTR));
        label_24->setText(QApplication::translate("StreamImportDialog", "y (micron)", Q_NULLPTR));
        label_17->setText(QApplication::translate("StreamImportDialog", "Reference points coordinates on layout to import", Q_NULLPTR));
        Point_3->setText(QApplication::translate("StreamImportDialog", "Point 3", Q_NULLPTR));
        label_18->setText(QApplication::translate("StreamImportDialog", "Reference point coordinates in existing layout", Q_NULLPTR));
        label_23->setText(QApplication::translate("StreamImportDialog", "x (micron)", Q_NULLPTR));
        label_25->setText(QApplication::translate("StreamImportDialog", "Point 2", Q_NULLPTR));
        label_26->setText(QApplication::translate("StreamImportDialog", "Point 3", Q_NULLPTR));
        label_21->setText(QApplication::translate("StreamImportDialog", "Point 1", Q_NULLPTR));
        label_20->setText(QApplication::translate("StreamImportDialog", "y (micron)", Q_NULLPTR));
        label_19->setText(QApplication::translate("StreamImportDialog", "x (micron)", Q_NULLPTR));
        label_27->setText(QApplication::translate("StreamImportDialog", "Point 2", Q_NULLPTR));
        label_30->setText(QApplication::translate("StreamImportDialog", "Explicit transformation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        explicit_trans_le->setToolTip(QApplication::translate("StreamImportDialog", "Examples: \"r90\", \"m45\", \"r90 (2000,-5000)\"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_31->setText(QApplication::translate("StreamImportDialog", "(Reference points have higher priority)", Q_NULLPTR));
        label_29->setText(QApplication::translate("StreamImportDialog", "Leave fields empty to specify less reference points. One point is used to derive the displacement, further points are used to derive the orientation. Currently, no magnification is implied and only simple rotations are derived from the mapping points.\n"
"\n"
"Alternatively the transformation (imported to existing layout) can be specified using the explicit transformation below. This allows one to specify an arbitrary transformation. Use the common notation (i.e. \"*2 r90 10,-100\").", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StreamImportDialog: public Ui_StreamImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMIMPORTDIALOG_H
