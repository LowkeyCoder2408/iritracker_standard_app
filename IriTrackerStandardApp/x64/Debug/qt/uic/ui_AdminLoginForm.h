/********************************************************************************
** Form generated from reading UI file 'AdminLoginForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGINFORM_H
#define UI_ADMINLOGINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminLoginFormClass
{
public:
    QLabel *label;
    QLineEdit *passwordInput;
    QPushButton *cancelButton;
    QPushButton *loginButton;
    QPushButton *forgotPasswordButton;

    void setupUi(QDialog *AdminLoginFormClass)
    {
        if (AdminLoginFormClass->objectName().isEmpty())
            AdminLoginFormClass->setObjectName(QString::fromUtf8("AdminLoginFormClass"));
        AdminLoginFormClass->resize(429, 91);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/IriTracker_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        AdminLoginFormClass->setWindowIcon(icon);
        AdminLoginFormClass->setStyleSheet(QString::fromUtf8("\n"
"				QDialog {\n"
"				background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 #ffffff, stop:1 #a4bedf);\n"
"				}\n"
"			"));
        label = new QLabel(AdminLoginFormClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(21, 10, 71, 31));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        passwordInput = new QLineEdit(AdminLoginFormClass);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(91, 10, 321, 31));
        passwordInput->setStyleSheet(QString::fromUtf8("\n"
"					QLineEdit {\n"
"					height: 30px;\n"
"					border-radius: 0;\n"
"					border: 1px solid #999;\n"
"					}\n"
"				"));
        cancelButton = new QPushButton(AdminLoginFormClass);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(320, 50, 91, 31));
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QString::fromUtf8("\n"
"					QPushButton {\n"
"					height: 35px;\n"
"					padding-left: 10px;\n"
"					padding-right: 10px;\n"
"					color: #ffffff;\n"
"					background-color: #2681c9;\n"
"					border-radius: 5px;\n"
"					border: 2px solid #99c6e9;\n"
"					cursor: pointer;\n"
"					}\n"
"\n"
"					QPushButton::hover {\n"
"					background-color: #4a9fd1;\n"
"					}\n"
"				"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);
        cancelButton->setIconSize(QSize(13, 13));
        loginButton = new QPushButton(AdminLoginFormClass);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(210, 50, 101, 31));
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("\n"
"					QPushButton {\n"
"					height: 35px;\n"
"					padding-left: 10px;\n"
"					padding-right: 10px;\n"
"					color: #ffffff;\n"
"					background-color: #2681c9;\n"
"					border-radius: 5px;\n"
"					border: 2px solid #99c6e9;\n"
"					cursor: pointer;\n"
"					}\n"
"\n"
"					QPushButton::hover {\n"
"					background-color: #4a9fd1;\n"
"					}\n"
"				"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Images/checkmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginButton->setIcon(icon2);
        forgotPasswordButton = new QPushButton(AdminLoginFormClass);
        forgotPasswordButton->setObjectName(QString::fromUtf8("forgotPasswordButton"));
        forgotPasswordButton->setGeometry(QRect(51, 50, 151, 31));
        forgotPasswordButton->setFont(font);
        forgotPasswordButton->setStyleSheet(QString::fromUtf8("\n"
"					QPushButton {\n"
"					height: 35px;\n"
"					padding-left: 10px;\n"
"					padding-right: 10px;\n"
"					color: #ffffff;\n"
"					background-color: #2681c9;\n"
"					border-radius: 5px;\n"
"					border: 2px solid #99c6e9;\n"
"					cursor: pointer;\n"
"					}\n"
"\n"
"					QPushButton::hover {\n"
"					background-color: #4a9fd1;\n"
"					}\n"
"				"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Images/forgot_password.png"), QSize(), QIcon::Normal, QIcon::Off);
        forgotPasswordButton->setIcon(icon3);

        retranslateUi(AdminLoginFormClass);

        QMetaObject::connectSlotsByName(AdminLoginFormClass);
    } // setupUi

    void retranslateUi(QDialog *AdminLoginFormClass)
    {
        AdminLoginFormClass->setWindowTitle(QCoreApplication::translate("AdminLoginFormClass", "\304\220\304\203ng Nh\341\272\255p", nullptr));
        label->setText(QCoreApplication::translate("AdminLoginFormClass", "M\341\272\255t kh\341\272\251u", nullptr));
        cancelButton->setText(QCoreApplication::translate("AdminLoginFormClass", " H\341\273\247y b\341\273\217", nullptr));
        loginButton->setText(QCoreApplication::translate("AdminLoginFormClass", " \304\220\341\273\223ng \303\275", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("AdminLoginFormClass", "Qu\303\252n m\341\272\255t kh\341\272\251u", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLoginFormClass: public Ui_AdminLoginFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGINFORM_H
