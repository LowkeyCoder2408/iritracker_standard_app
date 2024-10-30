/********************************************************************************
** Form generated from reading UI file 'DatabaseSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASESETTING_H
#define UI_DATABASESETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DatabaseSettingClass
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QComboBox *databaseTypeComboBox;
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *connectionDetail;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QPushButton *testConnectionButton;

    void setupUi(QMainWindow *DatabaseSettingClass)
    {
        if (DatabaseSettingClass->objectName().isEmpty())
            DatabaseSettingClass->setObjectName(QString::fromUtf8("DatabaseSettingClass"));
        DatabaseSettingClass->resize(590, 403);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/IriTracker_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        DatabaseSettingClass->setWindowIcon(icon);
        DatabaseSettingClass->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 #ffffff, stop:1 #a4bedf);"));
        centralwidget = new QWidget(DatabaseSettingClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"						QLabel {\n"
"						font: 9pt;\n"
"						text-align: left;\n"
"						background-color: transparent;\n"
"						}\n"
"					"));
        databaseTypeComboBox = new QComboBox(centralwidget);
        databaseTypeComboBox->setObjectName(QString::fromUtf8("databaseTypeComboBox"));
        databaseTypeComboBox->setGeometry(QRect(150, 50, 421, 31));
        QFont font1;
        font1.setPointSize(9);
        databaseTypeComboBox->setFont(font1);
        databaseTypeComboBox->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #fff;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 551, 51));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"						QLabel {\n"
"						font: 9pt;\n"
"						text-align: left;\n"
"						background-color: transparent;\n"
"						}\n"
"					"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 571, 51));
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid white;\n"
"    border-radius: 5px;\n"
"    margin-top: 15px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding-top: 7px;\n"
"	padding-left: 7px; \n"
"    background-color: transparent;\n"
"}"));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        connectionDetail = new QWidget(groupBox);
        connectionDetail->setObjectName(QString::fromUtf8("connectionDetail"));
        connectionDetail->setGeometry(QRect(-1, 19, 571, 21));
        connectionDetail->setStyleSheet(QString::fromUtf8("\n"
"    background-color: transparent;"));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(376, 350, 94, 34));
        submitButton->setFont(font1);
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/hoang/Images/checkmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        submitButton->setIcon(icon1);
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(477, 350, 94, 34));
        cancelButton->setFont(font1);
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("C:/Users/hoang/Images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon2);
        cancelButton->setIconSize(QSize(13, 13));
        testConnectionButton = new QPushButton(centralwidget);
        testConnectionButton->setObjectName(QString::fromUtf8("testConnectionButton"));
        testConnectionButton->setGeometry(QRect(190, 350, 181, 34));
        testConnectionButton->setFont(font1);
        testConnectionButton->setStyleSheet(QString::fromUtf8("\n"
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("C:/Users/hoang/Images/database_connection.png"), QSize(), QIcon::Normal, QIcon::Off);
        testConnectionButton->setIcon(icon3);
        testConnectionButton->setIconSize(QSize(15, 15));
        DatabaseSettingClass->setCentralWidget(centralwidget);

        retranslateUi(DatabaseSettingClass);

        QMetaObject::connectSlotsByName(DatabaseSettingClass);
    } // setupUi

    void retranslateUi(QMainWindow *DatabaseSettingClass)
    {
        DatabaseSettingClass->setWindowTitle(QCoreApplication::translate("DatabaseSettingClass", "Thi\341\272\277t L\341\272\255p C\306\241 S\341\273\237 D\341\273\257 Li\341\273\207u", nullptr));
        label_2->setText(QCoreApplication::translate("DatabaseSettingClass", "Lo\341\272\241i c\306\241 s\341\273\237 d\341\273\257 li\341\273\207u", nullptr));
        databaseTypeComboBox->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("DatabaseSettingClass", "Ch\341\273\215n 1 lo\341\272\241i c\306\241 s\341\273\237 d\341\273\257 li\341\273\207u. N\341\272\277u c\303\263 qu\303\241 nhi\341\273\201u nh\303\242n vi\303\252n, th\303\254 MySQL l\303\240 s\341\273\261 l\341\273\261a ch\341\273\215n t\341\273\221t nh\341\272\245t.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DatabaseSettingClass", "Chi ti\341\272\277t k\341\272\277t n\341\273\221i", nullptr));
        submitButton->setText(QCoreApplication::translate("DatabaseSettingClass", " \304\220\341\273\223ng \303\275", nullptr));
        cancelButton->setText(QCoreApplication::translate("DatabaseSettingClass", " H\341\273\247y b\341\273\217", nullptr));
        testConnectionButton->setText(QCoreApplication::translate("DatabaseSettingClass", " K\341\272\277t n\341\273\221i th\341\273\255 nghi\341\273\207m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DatabaseSettingClass: public Ui_DatabaseSettingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASESETTING_H
