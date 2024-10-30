/********************************************************************************
** Form generated from reading UI file 'DatabaseSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASESETTINGDIALOG_H
#define UI_DATABASESETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *databaseTypeComboBox;
    QPushButton *cancelButton;
    QPushButton *submitButton;
    QPushButton *testConnectionButton;
    QGroupBox *groupBox;
    QWidget *widget;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(590, 183);
        QFont font;
        font.setPointSize(9);
        Dialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/IriTracker_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 #ffffff, stop:1 #a4bedf);\n"
"}"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 551, 51));
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
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 121, 31));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"						QLabel {\n"
"						font: 9pt;\n"
"						text-align: left;\n"
"						}\n"
"					"));
        databaseTypeComboBox = new QComboBox(Dialog);
        databaseTypeComboBox->setObjectName(QString::fromUtf8("databaseTypeComboBox"));
        databaseTypeComboBox->setGeometry(QRect(150, 50, 421, 31));
        databaseTypeComboBox->setFont(font);
        cancelButton = new QPushButton(Dialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(477, 140, 94, 34));
        cancelButton->setFont(font);
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
        submitButton = new QPushButton(Dialog);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(376, 140, 94, 34));
        submitButton->setFont(font);
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Images/checkmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        submitButton->setIcon(icon2);
        testConnectionButton = new QPushButton(Dialog);
        testConnectionButton->setObjectName(QString::fromUtf8("testConnectionButton"));
        testConnectionButton->setGeometry(QRect(190, 140, 181, 34));
        testConnectionButton->setFont(font);
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
        icon3.addFile(QString::fromUtf8("../../Images/database_connection.png"), QSize(), QIcon::Normal, QIcon::Off);
        testConnectionButton->setIcon(icon3);
        testConnectionButton->setIconSize(QSize(15, 15));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 89, 571, 41));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid white;\n"
"    border-radius: 5px;\n"
"    margin-top: 15px;\n"
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
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-1, 19, 571, 16));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Thi\341\272\277t L\341\272\255p C\306\241 S\341\273\237 D\341\273\257 Li\341\273\207u", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Ch\341\273\215n 1 lo\341\272\241i c\306\241 s\341\273\237 d\341\273\257 li\341\273\207u. N\341\272\277u c\303\263 qu\303\241 nhi\341\273\201u nh\303\242n vi\303\252n, th\303\254 MySQL l\303\240 s\341\273\261 l\341\273\261a ch\341\273\215n t\341\273\221t nh\341\272\245t.", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Lo\341\272\241i c\306\241 s\341\273\237 d\341\273\257 li\341\273\207u", nullptr));
        databaseTypeComboBox->setPlaceholderText(QString());
        cancelButton->setText(QCoreApplication::translate("Dialog", " H\341\273\247y b\341\273\217", nullptr));
        submitButton->setText(QCoreApplication::translate("Dialog", " \304\220\341\273\223ng \303\275", nullptr));
        testConnectionButton->setText(QCoreApplication::translate("Dialog", " K\341\272\277t n\341\273\221i th\341\273\255 nghi\341\273\207m", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Chi ti\341\272\277t k\341\272\277t n\341\273\221i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASESETTINGDIALOG_H
