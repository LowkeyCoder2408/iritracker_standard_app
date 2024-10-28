/********************************************************************************
** Form generated from reading UI file 'Navbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVBAR_H
#define UI_NAVBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavbarClass
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *backButton;
    QToolButton *logoutButton;
    QToolButton *loginButton;
    QToolButton *copyrightButton;
    QToolButton *modeButton;
    QToolButton *exitButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_2;
    QToolButton *toolButton;

    void setupUi(QWidget *NavbarClass)
    {
        if (NavbarClass->objectName().isEmpty())
            NavbarClass->setObjectName(QString::fromUtf8("NavbarClass"));
        NavbarClass->resize(678, 447);
        horizontalLayoutWidget = new QWidget(NavbarClass);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 601, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QToolButton(horizontalLayoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setStyleSheet(QString::fromUtf8("\n"
"								QToolButton {\n"
"								border: none;\n"
"								padding: 3px;\n"
"								}\n"
"\n"
"								QToolButton:hover {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #d3d3d3, stop:0.5 #d3d3d3, stop:1 #ffffff);\n"
"								border-top: 1px solid white;\n"
"								border-right: 1px solid #999;\n"
"								border-bottom: 1px solid #999;\n"
"								border-left: none;\n"
"								}\n"
"\n"
"								QToolButton:pressed {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #ffffff, stop:0.5 #ffffff, stop:1 #d3d3d3);\n"
"								border-bottom: 1px solid white;\n"
"								border-left: 1px solid #999;\n"
"								border-top: 1px solid #999;\n"
"								border-right: none;\n"
"								}\n"
"							"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setAutoRaise(false);

        horizontalLayout->addWidget(backButton);

        logoutButton = new QToolButton(horizontalLayoutWidget);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setStyleSheet(QString::fromUtf8("\n"
"								QToolButton {\n"
"								border: none;\n"
"								padding: 3px;\n"
"								}\n"
"\n"
"								QToolButton:hover {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #d3d3d3, stop:0.5 #d3d3d3, stop:1 #ffffff);\n"
"								border-top: 1px solid white;\n"
"								border-right: 1px solid #999;\n"
"								border-bottom: 1px solid #999;\n"
"								border-left: none;\n"
"								}\n"
"\n"
"								QToolButton:pressed {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #ffffff, stop:0.5 #ffffff, stop:1 #d3d3d3);\n"
"								border-bottom: 1px solid white;\n"
"								border-left: 1px solid #999;\n"
"								border-top: 1px solid #999;\n"
"								border-right: none;\n"
"								}\n"
"							"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Images/user-logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon1);
        logoutButton->setAutoRaise(false);

        horizontalLayout->addWidget(logoutButton);

        loginButton = new QToolButton(horizontalLayoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setStyleSheet(QString::fromUtf8("\n"
"								QToolButton {\n"
"								border: none;\n"
"								padding: 3px;\n"
"								}\n"
"\n"
"								QToolButton:hover {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #d3d3d3, stop:0.5 #d3d3d3, stop:1 #ffffff);\n"
"								border-top: 1px solid white;\n"
"								border-right: 1px solid #999;\n"
"								border-bottom: 1px solid #999;\n"
"								border-left: none;\n"
"								}\n"
"\n"
"								QToolButton:pressed {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #ffffff, stop:0.5 #ffffff, stop:1 #d3d3d3);\n"
"								border-bottom: 1px solid white;\n"
"								border-left: 1px solid #999;\n"
"								border-top: 1px solid #999;\n"
"								border-right: none;\n"
"								}\n"
"							"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Images/login_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginButton->setIcon(icon2);
        loginButton->setAutoRaise(false);

        horizontalLayout->addWidget(loginButton);

        copyrightButton = new QToolButton(horizontalLayoutWidget);
        copyrightButton->setObjectName(QString::fromUtf8("copyrightButton"));
        copyrightButton->setStyleSheet(QString::fromUtf8("\n"
"								QToolButton {\n"
"								border: none;\n"
"								padding: 3px;\n"
"								}\n"
"\n"
"								QToolButton:hover {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #d3d3d3, stop:0.5 #d3d3d3, stop:1 #ffffff);\n"
"								border-top: 1px solid white;\n"
"								border-right: 1px solid #999;\n"
"								border-bottom: 1px solid #999;\n"
"								border-left: none;\n"
"								}\n"
"\n"
"								QToolButton:pressed {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #ffffff, stop:0.5 #ffffff, stop:1 #d3d3d3);\n"
"								border-bottom: 1px solid white;\n"
"								border-left: 1px solid #999;\n"
"								border-top: 1px solid #999;\n"
"								border-right: none;\n"
"								}\n"
"							"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Images/license.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyrightButton->setIcon(icon3);

        horizontalLayout->addWidget(copyrightButton);

        modeButton = new QToolButton(horizontalLayoutWidget);
        modeButton->setObjectName(QString::fromUtf8("modeButton"));
        modeButton->setStyleSheet(QString::fromUtf8("\n"
"								QToolButton {\n"
"								border: none;\n"
"								padding: 3px;\n"
"								}\n"
"\n"
"								QToolButton:hover {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #d3d3d3, stop:0.5 #d3d3d3, stop:1 #ffffff);\n"
"								border-top: 1px solid white;\n"
"								border-right: 1px solid #999;\n"
"								border-bottom: 1px solid #999;\n"
"								border-left: none;\n"
"								}\n"
"\n"
"								QToolButton:pressed {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #ffffff, stop:0.5 #ffffff, stop:1 #d3d3d3);\n"
"								border-bottom: 1px solid white;\n"
"								border-left: 1px solid #999;\n"
"								border-top: 1px solid #999;\n"
"								border-right: none;\n"
"								}\n"
"							"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Images/mode.png"), QSize(), QIcon::Normal, QIcon::Off);
        modeButton->setIcon(icon4);

        horizontalLayout->addWidget(modeButton);

        exitButton = new QToolButton(horizontalLayoutWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setStyleSheet(QString::fromUtf8("\n"
"								QToolButton {\n"
"								border: none;\n"
"								padding: 3px;\n"
"								}\n"
"\n"
"								QToolButton:hover {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #d3d3d3, stop:0.5 #d3d3d3, stop:1 #ffffff);\n"
"								border-top: 1px solid white;\n"
"								border-right: 1px solid #999;\n"
"								border-bottom: 1px solid #999;\n"
"								border-left: none;\n"
"								}\n"
"\n"
"								QToolButton:pressed {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #ffffff, stop:0.5 #ffffff, stop:1 #d3d3d3);\n"
"								border-bottom: 1px solid white;\n"
"								border-left: 1px solid #999;\n"
"								border-top: 1px solid #999;\n"
"								border-right: none;\n"
"								}\n"
"							"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Images/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon5);

        horizontalLayout->addWidget(exitButton);

        horizontalLayoutWidget_2 = new QWidget(NavbarClass);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(610, 0, 60, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_2 = new QToolButton(horizontalLayoutWidget_2);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setStyleSheet(QString::fromUtf8("\n"
"								QToolButton {\n"
"								border: none;\n"
"								padding: 3px;\n"
"								}\n"
"\n"
"								QToolButton:hover {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #d3d3d3, stop:0.5 #d3d3d3, stop:1 #ffffff);\n"
"								border-top: 1px solid white;\n"
"								border-right: 1px solid #999;\n"
"								border-bottom: 1px solid #999;\n"
"								border-left: none;\n"
"								}\n"
"\n"
"								QToolButton:pressed {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #ffffff, stop:0.5 #ffffff, stop:1 #d3d3d3);\n"
"								border-bottom: 1px solid white;\n"
"								border-left: 1px solid #999;\n"
"								border-top: 1px solid #999;\n"
"								border-right: none;\n"
"								}\n"
"							"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Images/introduction.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon6);

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton = new QToolButton(horizontalLayoutWidget_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setStyleSheet(QString::fromUtf8("\n"
"								QToolButton {\n"
"								border: none;\n"
"								padding: 3px;\n"
"								}\n"
"\n"
"								QToolButton:hover {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #d3d3d3, stop:0.5 #d3d3d3, stop:1 #ffffff);\n"
"								border-top: 1px solid white;\n"
"								border-right: 1px solid #999;\n"
"								border-bottom: 1px solid #999;\n"
"								border-left: none;\n"
"								}\n"
"\n"
"								QToolButton:pressed {\n"
"								background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"								stop:0 #ffffff, stop:0.5 #ffffff, stop:1 #d3d3d3);\n"
"								border-bottom: 1px solid white;\n"
"								border-left: 1px solid #999;\n"
"								border-top: 1px solid #999;\n"
"								border-right: none;\n"
"								}\n"
"							"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../Images/question.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon7);

        horizontalLayout_2->addWidget(toolButton);

        QWidget::setTabOrder(logoutButton, copyrightButton);
        QWidget::setTabOrder(copyrightButton, modeButton);
        QWidget::setTabOrder(modeButton, exitButton);

        retranslateUi(NavbarClass);

        QMetaObject::connectSlotsByName(NavbarClass);
    } // setupUi

    void retranslateUi(QWidget *NavbarClass)
    {
        NavbarClass->setWindowTitle(QCoreApplication::translate("NavbarClass", "Navbar", nullptr));
        backButton->setText(QCoreApplication::translate("NavbarClass", " Tr\341\273\237 L\341\272\241i", nullptr));
        logoutButton->setText(QCoreApplication::translate("NavbarClass", " \304\220\304\203ng Xu\341\272\245t", nullptr));
        loginButton->setText(QCoreApplication::translate("NavbarClass", " \304\220\304\203ng Nh\341\272\255p", nullptr));
        copyrightButton->setText(QCoreApplication::translate("NavbarClass", " B\341\272\243n Quy\341\273\201n S\341\273\255 D\341\273\245ng", nullptr));
        modeButton->setText(QCoreApplication::translate("NavbarClass", " Ch\341\272\277 \304\220\341\273\231", nullptr));
        exitButton->setText(QCoreApplication::translate("NavbarClass", " Tho\303\241t", nullptr));
        toolButton_2->setText(QCoreApplication::translate("NavbarClass", "...", nullptr));
        toolButton->setText(QCoreApplication::translate("NavbarClass", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NavbarClass: public Ui_NavbarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVBAR_H
