/********************************************************************************
** Form generated from reading UI file 'DatabaseSettingToSQLite.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASESETTINGTOSQLITE_H
#define UI_DATABASESETTINGTOSQLITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DatabaseSettingToSQLiteClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *databasePathInput;
    QPushButton *browseButton;

    void setupUi(QWidget *DatabaseSettingToSQLiteClass)
    {
        if (DatabaseSettingToSQLiteClass->objectName().isEmpty())
            DatabaseSettingToSQLiteClass->setObjectName(QString::fromUtf8("DatabaseSettingToSQLiteClass"));
        DatabaseSettingToSQLiteClass->resize(557, 101);
        label = new QLabel(DatabaseSettingToSQLiteClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 491, 31));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label_2 = new QLabel(DatabaseSettingToSQLiteClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 221, 16));
        label_2->setFont(font);
        databasePathInput = new QLineEdit(DatabaseSettingToSQLiteClass);
        databasePathInput->setObjectName(QString::fromUtf8("databasePathInput"));
        databasePathInput->setGeometry(QRect(130, 50, 311, 31));
        databasePathInput->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #fff;"));
        browseButton = new QPushButton(DatabaseSettingToSQLiteClass);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));
        browseButton->setGeometry(QRect(450, 50, 94, 34));
        browseButton->setFont(font);
        browseButton->setStyleSheet(QString::fromUtf8("\n"
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

        retranslateUi(DatabaseSettingToSQLiteClass);

        QMetaObject::connectSlotsByName(DatabaseSettingToSQLiteClass);
    } // setupUi

    void retranslateUi(QWidget *DatabaseSettingToSQLiteClass)
    {
        DatabaseSettingToSQLiteClass->setWindowTitle(QCoreApplication::translate("DatabaseSettingToSQLiteClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("DatabaseSettingToSQLiteClass", "Thay \304\221\341\273\225i ho\341\272\267c t\341\272\241o c\306\241 s\341\273\237 d\341\273\257 li\341\273\207u m\341\273\233i.", nullptr));
        label_2->setText(QCoreApplication::translate("DatabaseSettingToSQLiteClass", "T\341\273\207p c\306\241 s\341\273\237 d\341\273\257 li\341\273\207u", nullptr));
        browseButton->setText(QCoreApplication::translate("DatabaseSettingToSQLiteClass", "Duy\341\273\207t ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DatabaseSettingToSQLiteClass: public Ui_DatabaseSettingToSQLiteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASESETTINGTOSQLITE_H
