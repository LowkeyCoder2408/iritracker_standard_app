/********************************************************************************
** Form generated from reading UI file 'Menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuClass
{
public:
    QLabel *label;
    QToolButton *departmentButton;
    QToolButton *employeeButton;
    QToolButton *eventButton;
    QToolButton *exceptionButton;
    QToolButton *reportButton;
    QToolButton *toolButton;
    QToolButton *notificationButton;

    void setupUi(QWidget *MenuClass)
    {
        if (MenuClass->objectName().isEmpty())
            MenuClass->setObjectName(QString::fromUtf8("MenuClass"));
        MenuClass->resize(685, 400);
        MenuClass->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(MenuClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 681, 41));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"					background-color: transparent;\n"
"					color: #f53e2d;\n"
"					font-size: 28px;\n"
"					qproperty-alignment: AlignCenter;\n"
"				"));
        departmentButton = new QToolButton(MenuClass);
        departmentButton->setObjectName(QString::fromUtf8("departmentButton"));
        departmentButton->setGeometry(QRect(10, 70, 151, 121));
        QFont font1;
        font1.setPointSize(12);
        departmentButton->setFont(font1);
        departmentButton->setStyleSheet(QString::fromUtf8("\n"
"					QToolButton {\n"
"					background-color: transparent;\n"
"					border: none;\n"
"					color: rgb(32, 137, 162);\n"
"					}\n"
"\n"
"					QToolButton::hover {\n"
"					background-color: rgb(230, 237, 243);\n"
"					border: 1px solid rgb(180, 187, 194);\n"
"					border-radius: 8px;\n"
"					}\n"
"				"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/department.png"), QSize(), QIcon::Normal, QIcon::Off);
        departmentButton->setIcon(icon);
        departmentButton->setIconSize(QSize(350, 350));
        employeeButton = new QToolButton(MenuClass);
        employeeButton->setObjectName(QString::fromUtf8("employeeButton"));
        employeeButton->setGeometry(QRect(180, 70, 151, 121));
        employeeButton->setFont(font1);
        employeeButton->setStyleSheet(QString::fromUtf8("\n"
"					QToolButton {\n"
"					background-color: transparent;\n"
"					border: none;\n"
"					color: rgb(32, 137, 162);\n"
"					}\n"
"\n"
"					QToolButton::hover {\n"
"					background-color: rgb(230, 237, 243);\n"
"					border: 1px solid rgb(180, 187, 194);\n"
"					border-radius: 8px;\n"
"					}\n"
"				"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Images/employ.png"), QSize(), QIcon::Normal, QIcon::Off);
        employeeButton->setIcon(icon1);
        employeeButton->setIconSize(QSize(85, 85));
        eventButton = new QToolButton(MenuClass);
        eventButton->setObjectName(QString::fromUtf8("eventButton"));
        eventButton->setGeometry(QRect(350, 70, 151, 121));
        eventButton->setFont(font1);
        eventButton->setStyleSheet(QString::fromUtf8("\n"
"					QToolButton {\n"
"					background-color: transparent;\n"
"					border: none;\n"
"					color: rgb(32, 137, 162);\n"
"					}\n"
"\n"
"					QToolButton::hover {\n"
"					background-color: rgb(230, 237, 243);\n"
"					border: 1px solid rgb(180, 187, 194);\n"
"					border-radius: 8px;\n"
"					}\n"
"				"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Images/event.png"), QSize(), QIcon::Normal, QIcon::Off);
        eventButton->setIcon(icon2);
        eventButton->setIconSize(QSize(75, 75));
        exceptionButton = new QToolButton(MenuClass);
        exceptionButton->setObjectName(QString::fromUtf8("exceptionButton"));
        exceptionButton->setGeometry(QRect(520, 70, 151, 121));
        exceptionButton->setFont(font1);
        exceptionButton->setStyleSheet(QString::fromUtf8("\n"
"					QToolButton {\n"
"					background-color: transparent;\n"
"					border: none;\n"
"					color: rgb(32, 137, 162);\n"
"					}\n"
"\n"
"					QToolButton::hover {\n"
"					background-color: rgb(230, 237, 243);\n"
"					border: 1px solid rgb(180, 187, 194);\n"
"					border-radius: 8px;\n"
"					}\n"
"				"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Images/exception.png"), QSize(), QIcon::Normal, QIcon::Off);
        exceptionButton->setIcon(icon3);
        exceptionButton->setIconSize(QSize(80, 80));
        reportButton = new QToolButton(MenuClass);
        reportButton->setObjectName(QString::fromUtf8("reportButton"));
        reportButton->setGeometry(QRect(100, 210, 151, 121));
        reportButton->setFont(font1);
        reportButton->setStyleSheet(QString::fromUtf8("\n"
"					QToolButton {\n"
"					background-color: transparent;\n"
"					border: none;\n"
"					color: rgb(32, 137, 162);\n"
"					}\n"
"\n"
"					QToolButton::hover {\n"
"					background-color: rgb(230, 237, 243);\n"
"					border: 1px solid rgb(180, 187, 194);\n"
"					border-radius: 8px;\n"
"					}\n"
"				"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Images/report.png"), QSize(), QIcon::Normal, QIcon::Off);
        reportButton->setIcon(icon4);
        reportButton->setIconSize(QSize(55, 55));
        toolButton = new QToolButton(MenuClass);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(440, 210, 151, 121));
        toolButton->setFont(font1);
        toolButton->setStyleSheet(QString::fromUtf8("\n"
"					QToolButton {\n"
"					background-color: transparent;\n"
"					border: none;\n"
"					color: rgb(32, 137, 162);\n"
"					}\n"
"\n"
"					QToolButton::hover {\n"
"					background-color: rgb(230, 237, 243);\n"
"					border: 1px solid rgb(180, 187, 194);\n"
"					border-radius: 8px;\n"
"					}\n"
"				"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Images/tool.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon5);
        toolButton->setIconSize(QSize(55, 55));
        notificationButton = new QToolButton(MenuClass);
        notificationButton->setObjectName(QString::fromUtf8("notificationButton"));
        notificationButton->setGeometry(QRect(270, 210, 151, 121));
        notificationButton->setFont(font1);
        notificationButton->setStyleSheet(QString::fromUtf8("\n"
"					QToolButton {\n"
"					background-color: transparent;\n"
"					border: none;\n"
"					color: rgb(32, 137, 162);\n"
"					}\n"
"\n"
"					QToolButton::hover {\n"
"					background-color: rgb(230, 237, 243);\n"
"					border: 1px solid rgb(180, 187, 194);\n"
"					border-radius: 8px;\n"
"					}\n"
"				"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Images/notification.png"), QSize(), QIcon::Normal, QIcon::Off);
        notificationButton->setIcon(icon6);
        notificationButton->setIconSize(QSize(55, 55));

        retranslateUi(MenuClass);

        QMetaObject::connectSlotsByName(MenuClass);
    } // setupUi

    void retranslateUi(QWidget *MenuClass)
    {
        MenuClass->setWindowTitle(QCoreApplication::translate("MenuClass", "Menu", nullptr));
        label->setText(QCoreApplication::translate("MenuClass", "Ph\303\262ng Qu\341\272\243n Tr\341\273\213", nullptr));
        departmentButton->setText(QCoreApplication::translate("MenuClass", "Ph\303\262ng Ban", nullptr));
        employeeButton->setText(QCoreApplication::translate("MenuClass", "Nh\303\242n Vi\303\252n", nullptr));
        eventButton->setText(QCoreApplication::translate("MenuClass", "\n"
"					S\341\273\261 Ki\341\273\207n\n"
"					Ki\341\273\203m Di\341\273\207n\n"
"				", nullptr));
        exceptionButton->setText(QCoreApplication::translate("MenuClass", "Ngo\341\272\241i L\341\273\207", nullptr));
        reportButton->setText(QCoreApplication::translate("MenuClass", "B\303\241o C\303\241o", nullptr));
        toolButton->setText(QCoreApplication::translate("MenuClass", "C\303\264ng C\341\273\245", nullptr));
        notificationButton->setText(QCoreApplication::translate("MenuClass", "B\341\272\243ng Th\303\264ng B\303\241o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuClass: public Ui_MenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
