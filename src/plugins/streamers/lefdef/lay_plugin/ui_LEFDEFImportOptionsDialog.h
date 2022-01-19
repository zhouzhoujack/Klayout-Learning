/********************************************************************************
** Form generated from reading UI file 'LEFDEFImportOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFDEFIMPORTOPTIONSDIALOG_H
#define UI_LEFDEFIMPORTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LEFDEFImportOptionsDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *reader_options_pb;
    QDialogButtonBox *buttonBox;
    QSpacerItem *spacerItem;
    QLabel *help_label;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QRadioButton *replace_rb;
    QRadioButton *import_same_panel_rb;
    QRadioButton *import_new_panel_rb;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QLabel *label_6;
    QFrame *lef_files_frame;
    QGridLayout *gridLayout2;
    QToolButton *del_lef_files;
    QToolButton *add_lef_file;
    QToolButton *move_lef_files_up;
    QToolButton *move_lef_files_down;
    QLabel *label_3;
    QSpacerItem *spacerItem1;
    QListWidget *lef_files;
    QLineEdit *file_le;
    QToolButton *browse_pb;

    void setupUi(QDialog *LEFDEFImportOptionsDialog)
    {
        if (LEFDEFImportOptionsDialog->objectName().isEmpty())
            LEFDEFImportOptionsDialog->setObjectName(QString::fromUtf8("LEFDEFImportOptionsDialog"));
        LEFDEFImportOptionsDialog->resize(682, 455);
        gridLayout = new QGridLayout(LEFDEFImportOptionsDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        reader_options_pb = new QPushButton(LEFDEFImportOptionsDialog);
        reader_options_pb->setObjectName(QString::fromUtf8("reader_options_pb"));

        gridLayout->addWidget(reader_options_pb, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LEFDEFImportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 2, 1, 1);

        spacerItem = new QSpacerItem(100, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 2);

        help_label = new QLabel(LEFDEFImportOptionsDialog);
        help_label->setObjectName(QString::fromUtf8("help_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(help_label->sizePolicy().hasHeightForWidth());
        help_label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(help_label, 4, 1, 1, 1);

        groupBox = new QGroupBox(LEFDEFImportOptionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        replace_rb = new QRadioButton(groupBox);
        replace_rb->setObjectName(QString::fromUtf8("replace_rb"));

        vboxLayout->addWidget(replace_rb);

        import_same_panel_rb = new QRadioButton(groupBox);
        import_same_panel_rb->setObjectName(QString::fromUtf8("import_same_panel_rb"));

        vboxLayout->addWidget(import_same_panel_rb);

        import_new_panel_rb = new QRadioButton(groupBox);
        import_new_panel_rb->setObjectName(QString::fromUtf8("import_new_panel_rb"));

        vboxLayout->addWidget(import_new_panel_rb);


        gridLayout->addWidget(groupBox, 1, 0, 1, 3);

        frame = new QFrame(LEFDEFImportOptionsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout1->addWidget(label_6, 0, 0, 1, 2);

        lef_files_frame = new QFrame(frame);
        lef_files_frame->setObjectName(QString::fromUtf8("lef_files_frame"));
        lef_files_frame->setMinimumSize(QSize(16, 200));
        lef_files_frame->setFrameShape(QFrame::NoFrame);
        lef_files_frame->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(lef_files_frame);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        del_lef_files = new QToolButton(lef_files_frame);
        del_lef_files->setObjectName(QString::fromUtf8("del_lef_files"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        del_lef_files->setIcon(icon);

        gridLayout2->addWidget(del_lef_files, 2, 1, 1, 1);

        add_lef_file = new QToolButton(lef_files_frame);
        add_lef_file->setObjectName(QString::fromUtf8("add_lef_file"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_lef_file->setIcon(icon1);

        gridLayout2->addWidget(add_lef_file, 1, 1, 1, 1);

        move_lef_files_up = new QToolButton(lef_files_frame);
        move_lef_files_up->setObjectName(QString::fromUtf8("move_lef_files_up"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_lef_files_up->setIcon(icon2);

        gridLayout2->addWidget(move_lef_files_up, 3, 1, 1, 1);

        move_lef_files_down = new QToolButton(lef_files_frame);
        move_lef_files_down->setObjectName(QString::fromUtf8("move_lef_files_down"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        move_lef_files_down->setIcon(icon3);

        gridLayout2->addWidget(move_lef_files_down, 4, 1, 1, 1);

        label_3 = new QLabel(lef_files_frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout2->addWidget(label_3, 0, 0, 1, 2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem1, 5, 1, 1, 1);

        lef_files = new QListWidget(lef_files_frame);
        lef_files->setObjectName(QString::fromUtf8("lef_files"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(lef_files->sizePolicy().hasHeightForWidth());
        lef_files->setSizePolicy(sizePolicy1);
        lef_files->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout2->addWidget(lef_files, 1, 0, 5, 1);


        gridLayout1->addWidget(lef_files_frame, 2, 0, 2, 2);

        file_le = new QLineEdit(frame);
        file_le->setObjectName(QString::fromUtf8("file_le"));

        gridLayout1->addWidget(file_le, 1, 0, 1, 1);

        browse_pb = new QToolButton(frame);
        browse_pb->setObjectName(QString::fromUtf8("browse_pb"));

        gridLayout1->addWidget(browse_pb, 1, 1, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 3);

        QWidget::setTabOrder(file_le, browse_pb);
        QWidget::setTabOrder(browse_pb, replace_rb);
        QWidget::setTabOrder(replace_rb, import_same_panel_rb);
        QWidget::setTabOrder(import_same_panel_rb, import_new_panel_rb);
        QWidget::setTabOrder(import_new_panel_rb, reader_options_pb);
        QWidget::setTabOrder(reader_options_pb, buttonBox);

        retranslateUi(LEFDEFImportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LEFDEFImportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LEFDEFImportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LEFDEFImportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *LEFDEFImportOptionsDialog)
    {
        LEFDEFImportOptionsDialog->setWindowTitle(QApplication::translate("LEFDEFImportOptionsDialog", "LEF Import Options", nullptr));
        reader_options_pb->setText(QApplication::translate("LEFDEFImportOptionsDialog", "Options", nullptr));
        help_label->setText(QApplication::translate("LEFDEFImportOptionsDialog", "<html><body><a href=\"int:/about/lef_def_import.xml\">See here for details about LEF/DEF import</a></body></html>", nullptr));
        groupBox->setTitle(QApplication::translate("LEFDEFImportOptionsDialog", "Import Mode", nullptr));
        replace_rb->setText(QApplication::translate("LEFDEFImportOptionsDialog", "Replace current layout", nullptr));
        import_same_panel_rb->setText(QApplication::translate("LEFDEFImportOptionsDialog", "Import as new &layout in same panel", nullptr));
        import_new_panel_rb->setText(QApplication::translate("LEFDEFImportOptionsDialog", "I&mport as new layout in new panel", nullptr));
        label_6->setText(QApplication::translate("LEFDEFImportOptionsDialog", "Import File", nullptr));
#ifndef QT_NO_TOOLTIP
        del_lef_files->setToolTip(QApplication::translate("LEFDEFImportOptionsDialog", "Delete selected files", nullptr));
#endif // QT_NO_TOOLTIP
        del_lef_files->setText(QApplication::translate("LEFDEFImportOptionsDialog", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        add_lef_file->setToolTip(QApplication::translate("LEFDEFImportOptionsDialog", "Add LEF file", nullptr));
#endif // QT_NO_TOOLTIP
        add_lef_file->setText(QApplication::translate("LEFDEFImportOptionsDialog", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        move_lef_files_up->setToolTip(QApplication::translate("LEFDEFImportOptionsDialog", "Move selected files up", nullptr));
#endif // QT_NO_TOOLTIP
        move_lef_files_up->setText(QApplication::translate("LEFDEFImportOptionsDialog", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        move_lef_files_down->setToolTip(QApplication::translate("LEFDEFImportOptionsDialog", "Move selected files down", nullptr));
#endif // QT_NO_TOOLTIP
        move_lef_files_down->setText(QApplication::translate("LEFDEFImportOptionsDialog", "...", nullptr));
        label_3->setText(QApplication::translate("LEFDEFImportOptionsDialog", "With LEF files:", nullptr));
        browse_pb->setText(QApplication::translate("LEFDEFImportOptionsDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LEFDEFImportOptionsDialog: public Ui_LEFDEFImportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFDEFIMPORTOPTIONSDIALOG_H
