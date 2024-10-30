/********************************************************************************
** Form generated from reading UI file 'DatabaseSettingToMySQL.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASESETTINGTOMYSQL_H
#define UI_DATABASESETTINGTOMYSQL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DatabaseSettingToMySQLClass
{
public:
    QLabel *label;
    QLineEdit *serverHostNameInput;
    QLabel *label_2;
    QLineEdit *serverPortNumberInput;
    QLabel *label_3;
    QLineEdit *databaseNameInput;
    QLabel *label_4;
    QLineEdit *administratorUsernameInput;
    QLabel *label_5;
    QLineEdit *administratorPasswordInput;

    void setupUi(QWidget *DatabaseSettingToMySQLClass)
    {
        if (DatabaseSettingToMySQLClass->objectName().isEmpty())
            DatabaseSettingToMySQLClass->setObjectName(QString::fromUtf8("DatabaseSettingToMySQLClass"));
        DatabaseSettingToMySQLClass->resize(558, 214);
        label = new QLabel(DatabaseSettingToMySQLClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 15, 221, 21));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        serverHostNameInput = new QLineEdit(DatabaseSettingToMySQLClass);
        serverHostNameInput->setObjectName(QString::fromUtf8("serverHostNameInput"));
        serverHostNameInput->setGeometry(QRect(180, 10, 361, 31));
        serverHostNameInput->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #fff;"));
        label_2 = new QLabel(DatabaseSettingToMySQLClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 55, 221, 21));
        label_2->setFont(font);
        serverPortNumberInput = new QLineEdit(DatabaseSettingToMySQLClass);
        serverPortNumberInput->setObjectName(QString::fromUtf8("serverPortNumberInput"));
        serverPortNumberInput->setGeometry(QRect(180, 50, 361, 31));
        serverPortNumberInput->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #fff;"));
        label_3 = new QLabel(DatabaseSettingToMySQLClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 95, 221, 21));
        label_3->setFont(font);
        databaseNameInput = new QLineEdit(DatabaseSettingToMySQLClass);
        databaseNameInput->setObjectName(QString::fromUtf8("databaseNameInput"));
        databaseNameInput->setGeometry(QRect(180, 90, 361, 31));
        databaseNameInput->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #fff;"));
        label_4 = new QLabel(DatabaseSettingToMySQLClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 135, 221, 21));
        label_4->setFont(font);
        administratorUsernameInput = new QLineEdit(DatabaseSettingToMySQLClass);
        administratorUsernameInput->setObjectName(QString::fromUtf8("administratorUsernameInput"));
        administratorUsernameInput->setGeometry(QRect(180, 130, 361, 31));
        administratorUsernameInput->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #fff;"));
        label_5 = new QLabel(DatabaseSettingToMySQLClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 176, 221, 20));
        label_5->setFont(font);
        administratorPasswordInput = new QLineEdit(DatabaseSettingToMySQLClass);
        administratorPasswordInput->setObjectName(QString::fromUtf8("administratorPasswordInput"));
        administratorPasswordInput->setGeometry(QRect(180, 170, 361, 31));
        administratorPasswordInput->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #fff;"));

        retranslateUi(DatabaseSettingToMySQLClass);

        QMetaObject::connectSlotsByName(DatabaseSettingToMySQLClass);
    } // setupUi

    void retranslateUi(QWidget *DatabaseSettingToMySQLClass)
    {
        DatabaseSettingToMySQLClass->setWindowTitle(QCoreApplication::translate("DatabaseSettingToMySQLClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("DatabaseSettingToMySQLClass", "T\303\252n m\303\241y ch\341\273\247 l\306\260u tr\341\273\257", nullptr));
        label_2->setText(QCoreApplication::translate("DatabaseSettingToMySQLClass", "S\341\273\221 c\341\273\225ng m\303\241y ch\341\273\247", nullptr));
        label_3->setText(QCoreApplication::translate("DatabaseSettingToMySQLClass", "T\303\252n c\306\241 s\341\273\237 d\341\273\257 li\341\273\207u", nullptr));
        label_4->setText(QCoreApplication::translate("DatabaseSettingToMySQLClass", "T\303\252n \304\221\304\203ng nh\341\272\255p qu\341\272\243n tr\341\273\213", nullptr));
        label_5->setText(QCoreApplication::translate("DatabaseSettingToMySQLClass", "M\341\272\255t kh\341\272\251u ng\306\260\341\273\235i qu\341\272\243n tr\341\273\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DatabaseSettingToMySQLClass: public Ui_DatabaseSettingToMySQLClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASESETTINGTOMYSQL_H
