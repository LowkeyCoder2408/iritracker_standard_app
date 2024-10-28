/********************************************************************************
** Form generated from reading UI file 'DepartmentManagement.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTMANAGEMENT_H
#define UI_DEPARTMENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepartmentManagementClass
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *dataTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *DepartmentManagementClass)
    {
        if (DepartmentManagementClass->objectName().isEmpty())
            DepartmentManagementClass->setObjectName(QString::fromUtf8("DepartmentManagementClass"));
        DepartmentManagementClass->resize(681, 381);
        DepartmentManagementClass->setStyleSheet(QString::fromUtf8("height: fit-content;"));
        label = new QLabel(DepartmentManagementClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 641, 41));
        label->setStyleSheet(QString::fromUtf8("\n"
"					background-color: transparent;\n"
"					color: #f53e2d;\n"
"					font-size: 28px;\n"
"					qproperty-alignment: AlignCenter;\n"
"				"));
        verticalLayoutWidget = new QWidget(DepartmentManagementClass);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 60, 641, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dataTable = new QTableView(verticalLayoutWidget);
        dataTable->setObjectName(QString::fromUtf8("dataTable"));
        dataTable->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(dataTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QPushButton(verticalLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setStyleSheet(QString::fromUtf8("\n"
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
        icon.addFile(QString::fromUtf8("../../Images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);
        addButton->setIconSize(QSize(13, 13));

        horizontalLayout->addWidget(addButton);

        editButton = new QPushButton(verticalLayoutWidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setStyleSheet(QString::fromUtf8("\n"
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
        icon1.addFile(QString::fromUtf8("../../Images/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editButton->setIcon(icon1);
        editButton->setIconSize(QSize(13, 13));

        horizontalLayout->addWidget(editButton);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setStyleSheet(QString::fromUtf8("\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(13, 13));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DepartmentManagementClass);

        QMetaObject::connectSlotsByName(DepartmentManagementClass);
    } // setupUi

    void retranslateUi(QWidget *DepartmentManagementClass)
    {
        DepartmentManagementClass->setWindowTitle(QCoreApplication::translate("DepartmentManagementClass", "DepartmentManagement", nullptr));
        label->setText(QCoreApplication::translate("DepartmentManagementClass", "C\303\241c Ph\303\262ng Ban", nullptr));
        addButton->setText(QCoreApplication::translate("DepartmentManagementClass", " Th\303\252m", nullptr));
        editButton->setText(QCoreApplication::translate("DepartmentManagementClass", " S\341\273\255a", nullptr));
        deleteButton->setText(QCoreApplication::translate("DepartmentManagementClass", " Xo\303\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepartmentManagementClass: public Ui_DepartmentManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTMANAGEMENT_H
