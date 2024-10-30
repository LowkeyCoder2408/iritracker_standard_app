#pragma execution_character_set("utf-8")
#include "AdminSignUpForm.h"
#include "DataHandler.h"
#include "IriTrackerStandardApp.h"
#include "DatabaseSetting.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[]) {

    QSettings settings("Iritech", "IriTracker_Standard");

    // Lấy tất cả các khóa đã lưu
    QStringList keys = settings.allKeys();

    qDebug() << "Danh sách các setting đã lưu:";
    for (const QString& key : keys) {
        QVariant value = settings.value(key);
        qDebug() << key << "=" << value.toString();
    }

    QApplication a(argc, argv);
    AdminSignUpForm adminSignUpForm;
    IriTrackerStandardApp iriTrackerStandardApp;
    DataHandler dataHandler;
    DatabaseSetting databaseSetting;

    if (!dataHandler.connectToSQLiteDatabase()) {
        databaseSetting.show();
    }
    else {
        if (!dataHandler.hasAdminAccount()) {
            adminSignUpForm.show();
        }
        else {
            iriTrackerStandardApp.show();
        }
    }

    return a.exec();
}