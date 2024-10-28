/********************************************************************************
** Form generated from reading UI file 'IriTrackerStandardApp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IRITRACKERSTANDARDAPP_H
#define UI_IRITRACKERSTANDARDAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IriTrackerStandardAppClass
{
public:
    QWidget *centralWidget;
    QWidget *content;
    QWidget *header;

    void setupUi(QMainWindow *IriTrackerStandardAppClass)
    {
        if (IriTrackerStandardAppClass->objectName().isEmpty())
            IriTrackerStandardAppClass->setObjectName(QString::fromUtf8("IriTrackerStandardAppClass"));
        IriTrackerStandardAppClass->resize(687, 438);
        centralWidget = new QWidget(IriTrackerStandardAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        content = new QWidget(centralWidget);
        content->setObjectName(QString::fromUtf8("content"));
        content->setGeometry(QRect(-10, 30, 701, 401));
        content->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 #ffffff, stop:1 #a4bedf);"));
        header = new QWidget(centralWidget);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(0, 0, 10000, 30));
        QFont font;
        font.setKerning(false);
        header->setFont(font);
        header->setToolTipDuration(0);
        header->setStyleSheet(QString::fromUtf8("background-color: #eaeaea;"));
        IriTrackerStandardAppClass->setCentralWidget(centralWidget);

        retranslateUi(IriTrackerStandardAppClass);

        QMetaObject::connectSlotsByName(IriTrackerStandardAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *IriTrackerStandardAppClass)
    {
        IriTrackerStandardAppClass->setWindowTitle(QCoreApplication::translate("IriTrackerStandardAppClass", "IriTrackerStandardApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IriTrackerStandardAppClass: public Ui_IriTrackerStandardAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRITRACKERSTANDARDAPP_H
