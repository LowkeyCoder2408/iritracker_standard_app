/********************************************************************************
** Form generated from reading UI file 'DepartmentForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTFORM_H
#define UI_DEPARTMENTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepartmentFormClass
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label2;
    QLineEdit *nameInput;
    QLabel *label1;
    QLineEdit *descriptionInput;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *submitButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *DepartmentFormClass)
    {
        if (DepartmentFormClass->objectName().isEmpty())
            DepartmentFormClass->setObjectName(QString::fromUtf8("DepartmentFormClass"));
        DepartmentFormClass->resize(522, 418);
        formLayoutWidget = new QWidget(DepartmentFormClass);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 501, 395));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        label2 = new QLabel(formLayoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        QFont font;
        font.setPointSize(9);
        label2->setFont(font);
        label2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label2);

        nameInput = new QLineEdit(formLayoutWidget);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));
        QFont font1;
        font1.setPointSize(9);
        font1.setStrikeOut(false);
        nameInput->setFont(font1);
        nameInput->setStyleSheet(QString::fromUtf8("\n"
"								height: 30px;\n"
"								background-color: #fff;\n"
"								border: 1px solid #999;\n"
"							"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nameInput);

        label1 = new QLabel(formLayoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setFont(font);
        label1->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label1);

        descriptionInput = new QLineEdit(formLayoutWidget);
        descriptionInput->setObjectName(QString::fromUtf8("descriptionInput"));
        descriptionInput->setFont(font1);
        descriptionInput->setStyleSheet(QString::fromUtf8("\n"
"								height: 300px;\n"
"								background-color: #fff;\n"
"								border: 1px solid #999;\n"
"							"));

        formLayout->setWidget(2, QFormLayout::FieldRole, descriptionInput);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        submitButton = new QPushButton(formLayoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        QFont font2;
        submitButton->setFont(font2);
        submitButton->setStyleSheet(QString::fromUtf8("\n"
"										QPushButton {\n"
"										height: 30px;\n"
"										width: 90px;\n"
"										color: #ffffff;\n"
"										background-color: #2681c9;\n"
"										border-radius: 5px;\n"
"										border: 2px solid #99c6e9;\n"
"										cursor: pointer;\n"
"										}\n"
"\n"
"										QPushButton::hover {\n"
"										background-color: #4a9fd1;\n"
"										}\n"
"									"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/checkmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        submitButton->setIcon(icon);

        horizontalLayout_2->addWidget(submitButton);

        cancelButton = new QPushButton(formLayoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QString::fromUtf8("\n"
"										QPushButton {\n"
"										height: 30px;\n"
"										width: 90px;\n"
"										color: #ffffff;\n"
"										background-color: #2681c9;\n"
"										border-radius: 5px;\n"
"										border: 2px solid #99c6e9;\n"
"										cursor: pointer;\n"
"										}\n"
"\n"
"										QPushButton::hover {\n"
"										background-color: #4a9fd1;\n"
"										}\n"
"									"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);
        cancelButton->setIconSize(QSize(13, 13));

        horizontalLayout_2->addWidget(cancelButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);


        retranslateUi(DepartmentFormClass);

        QMetaObject::connectSlotsByName(DepartmentFormClass);
    } // setupUi

    void retranslateUi(QDialog *DepartmentFormClass)
    {
        DepartmentFormClass->setWindowTitle(QCoreApplication::translate("DepartmentFormClass", "DepartmentForm", nullptr));
        label2->setText(QCoreApplication::translate("DepartmentFormClass", "T\303\252n (*)", nullptr));
        label1->setText(QCoreApplication::translate("DepartmentFormClass", "M\303\264 t\341\272\243", nullptr));
        submitButton->setText(QCoreApplication::translate("DepartmentFormClass", " \304\220\341\273\223ng \303\275", nullptr));
        cancelButton->setText(QCoreApplication::translate("DepartmentFormClass", " H\341\273\247y b\341\273\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepartmentFormClass: public Ui_DepartmentFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTFORM_H
