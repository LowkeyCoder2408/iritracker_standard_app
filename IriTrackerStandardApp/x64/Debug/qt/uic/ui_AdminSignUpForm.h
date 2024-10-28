/********************************************************************************
** Form generated from reading UI file 'AdminSignUpForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSIGNUPFORM_H
#define UI_ADMINSIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminSignUpFormClass
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QLineEdit *passwordInput;
    QLabel *label_2;
    QLineEdit *confirmedPasswordInput;
    QLabel *label_3;
    QLineEdit *emailInput;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *signUpButton;
    QPushButton *cancelButton;
    QLabel *label;

    void setupUi(QMainWindow *AdminSignUpFormClass)
    {
        if (AdminSignUpFormClass->objectName().isEmpty())
            AdminSignUpFormClass->setObjectName(QString::fromUtf8("AdminSignUpFormClass"));
        AdminSignUpFormClass->resize(589, 259);
        AdminSignUpFormClass->setStyleSheet(QString::fromUtf8("\n"
"				QMainWindow {\n"
"				background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 #ffffff, stop:1 #a4bedf);\n"
"				}\n"
"			"));
        centralWidget = new QWidget(AdminSignUpFormClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("\n"
"					QMainWindow {\n"
"					background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0,\n"
"					stop:0 #ffffff, stop:0.5 #d3d3d3, stop:1 #d3d3d3);}\n"
"				"));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 70, 551, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        label_1 = new QLabel(formLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font;
        font.setPointSize(9);
        label_1->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_1);

        passwordInput = new QLineEdit(formLayoutWidget);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setStyleSheet(QString::fromUtf8("\n"
"									QLineEdit {\n"
"									height: 30px;\n"
"									border-radius: 0;\n"
"									border: 1px solid #999;\n"
"									}\n"
"								"));

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordInput);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        confirmedPasswordInput = new QLineEdit(formLayoutWidget);
        confirmedPasswordInput->setObjectName(QString::fromUtf8("confirmedPasswordInput"));
        confirmedPasswordInput->setStyleSheet(QString::fromUtf8("\n"
"									QLineEdit {\n"
"									height: 30px;\n"
"									border-radius: 0;\n"
"									border: 1px solid #999;\n"
"									}\n"
"								"));

        formLayout->setWidget(2, QFormLayout::FieldRole, confirmedPasswordInput);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        emailInput = new QLineEdit(formLayoutWidget);
        emailInput->setObjectName(QString::fromUtf8("emailInput"));
        emailInput->setStyleSheet(QString::fromUtf8("\n"
"									QLineEdit {\n"
"									height: 30px;\n"
"									border-radius: 0;\n"
"									border: 1px solid #999;\n"
"									}\n"
"								"));

        formLayout->setWidget(3, QFormLayout::FieldRole, emailInput);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        signUpButton = new QPushButton(formLayoutWidget);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setFont(font);
        signUpButton->setStyleSheet(QString::fromUtf8("\n"
"											QPushButton {\n"
"											height: 30px;\n"
"											width: 90px;\n"
"											color: #ffffff;\n"
"											background-color: #2681c9;\n"
"											border-radius: 5px;\n"
"											border: 2px solid #99c6e9;\n"
"											cursor: pointer;\n"
"											}\n"
"\n"
"											QPushButton::hover {\n"
"											background-color: #4a9fd1;\n"
"											}\n"
"										"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/checkmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpButton->setIcon(icon);

        horizontalLayout->addWidget(signUpButton);

        cancelButton = new QPushButton(formLayoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QString::fromUtf8("\n"
"											QPushButton {\n"
"											height: 30px;\n"
"											width: 90px;\n"
"											color: #ffffff;\n"
"											background-color: #2681c9;\n"
"											border-radius: 5px;\n"
"											border: 2px solid #99c6e9;\n"
"											cursor: pointer;\n"
"											}\n"
"\n"
"											QPushButton::hover {\n"
"											background-color: #4a9fd1;\n"
"											}\n"
"										"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);
        cancelButton->setIconSize(QSize(12, 12));

        horizontalLayout->addWidget(cancelButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 551, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("\n"
"						QLabel {\n"
"						font: 9pt;\n"
"						text-align: left;\n"
"						}\n"
"					"));
        AdminSignUpFormClass->setCentralWidget(centralWidget);

        retranslateUi(AdminSignUpFormClass);

        QMetaObject::connectSlotsByName(AdminSignUpFormClass);
    } // setupUi

    void retranslateUi(QMainWindow *AdminSignUpFormClass)
    {
        AdminSignUpFormClass->setWindowTitle(QCoreApplication::translate("AdminSignUpFormClass", "AdminSignUpForm", nullptr));
        label_1->setText(QCoreApplication::translate("AdminSignUpFormClass", "M\341\272\255t kh\341\272\251u qu\341\272\243n tr\341\273\213 vi\303\252n", nullptr));
        label_2->setText(QCoreApplication::translate("AdminSignUpFormClass", "X\303\241c nh\341\272\255n m\341\272\255t kh\341\272\251u", nullptr));
        label_3->setText(QCoreApplication::translate("AdminSignUpFormClass", "Email", nullptr));
        signUpButton->setText(QCoreApplication::translate("AdminSignUpFormClass", " OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("AdminSignUpFormClass", " H\341\273\247y", nullptr));
        label->setText(QCoreApplication::translate("AdminSignUpFormClass", "\304\220\303\242y l\303\240 l\341\272\247n \304\221\341\272\247u ti\303\252n b\341\272\241n ch\341\272\241y IriTracker tr\303\252n m\303\241y t\303\255nh n\303\240y. Tr\306\260\341\273\233c khi ti\341\272\277p t\341\273\245c, b\341\272\241n ph\341\272\243i nh\341\272\255p m\341\272\255t kh\341\272\251u qu\341\272\243n tr\341\273\213 vi\303\252n v\303\240 email \304\221\341\273\203 nh\341\272\257c m\341\272\255t kh\341\272\251u. M\341\272\255t kh\341\272\251u ph\341\272\243i d\303\240i \303\255t nh\341\272\245t 4 k\303\275 t\341\273\261.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminSignUpFormClass: public Ui_AdminSignUpFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSIGNUPFORM_H
