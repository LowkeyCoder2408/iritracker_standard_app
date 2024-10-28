#pragma execution_character_set("utf-8")
#include "AdminSignUpForm.h"
#include "DataHandler.h"
#include "IriTrackerStandardApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    AdminSignUpForm adminSignUpForm;
    IriTrackerStandardApp iriTrackerStandardApp;
    DataHandler dataHandler;

    if (!dataHandler.connectToDatabase()) {
        qDebug() << "Kết thúc ứng dụng do không thể kết nối đến cơ sở dữ liệu";
        return -1;
    }

    if (!dataHandler.hasAdminAccount()) {
        adminSignUpForm.show();
    }
    else {
        iriTrackerStandardApp.show();
    }

    return a.exec();
}