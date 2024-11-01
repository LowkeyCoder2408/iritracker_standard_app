#pragma execution_character_set("utf-8")
#include "AdminSignUpForm.h"
#include "DataHandler.h"
#include "IriTrackerStandardApp.h"
#include "DatabaseSetting.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[]) {
    //Nếu muốn đổi nền tảng CSDL thì bỏ comment 2 dòng này
    //QSettings settings("Iritech", "IriTracker_Standard");
    //settings.setValue("databaseType", "");

    QApplication a(argc, argv);
    AdminSignUpForm adminSignUpForm;
    IriTrackerStandardApp iriTrackerStandardApp;
    DataHandler dataHandler;
    DatabaseSetting databaseSetting;

    if (!dataHandler.connectToDatabase()) {
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