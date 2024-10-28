/********************************************************************************
** Form generated from reading UI file 'AnonymousHome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONYMOUSHOME_H
#define UI_ANONYMOUSHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnonymousHomeClass
{
public:
    QLabel *timeLabel;
    QLabel *dateLabel;

    void setupUi(QWidget *AnonymousHomeClass)
    {
        if (AnonymousHomeClass->objectName().isEmpty())
            AnonymousHomeClass->setObjectName(QString::fromUtf8("AnonymousHomeClass"));
        AnonymousHomeClass->resize(684, 399);
        timeLabel = new QLabel(AnonymousHomeClass);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(180, 0, 511, 81));
        timeLabel->setStyleSheet(QString::fromUtf8("\n"
"					QLabel {\n"
"					background-color: transparent;\n"
"					font-size: 78px;\n"
"					color: rgb(54, 136, 243);\n"
"					qproperty-alignment: AlignCenter;\n"
"					}\n"
"				"));
        dateLabel = new QLabel(AnonymousHomeClass);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(180, 80, 511, 51));
        dateLabel->setStyleSheet(QString::fromUtf8("\n"
"					QLabel {\n"
"					background-color: transparent;\n"
"					font-size: 28px;\n"
"					color: rgb(54, 136, 243);\n"
"					qproperty-alignment: AlignCenter;\n"
"					}\n"
"				"));

        retranslateUi(AnonymousHomeClass);

        QMetaObject::connectSlotsByName(AnonymousHomeClass);
    } // setupUi

    void retranslateUi(QWidget *AnonymousHomeClass)
    {
        AnonymousHomeClass->setWindowTitle(QCoreApplication::translate("AnonymousHomeClass", "AnonymousHome", nullptr));
        timeLabel->setText(QString());
        dateLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AnonymousHomeClass: public Ui_AnonymousHomeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONYMOUSHOME_H
