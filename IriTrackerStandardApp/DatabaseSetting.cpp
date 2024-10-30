#pragma execution_character_set("utf-8") 
#include "DatabaseSetting.h"
#include "ui_DatabaseSetting.h"
#include "AdminSignUpForm.h"
#include "IriTrackerStandardApp.h"
#include <QSettings>

DatabaseSetting::DatabaseSetting(QWidget* parent) : QMainWindow(parent),
selectedDatabaseType(0),
databaseSettingToSQLite(),
databaseSettingToSQLite2() {
    ui.setupUi(this);
    ui.label->setWordWrap(true);
    ui.databaseTypeComboBox->addItem("SQLite", 0);
    ui.databaseTypeComboBox->addItem("MySQL", 1);
    QHBoxLayout* connectionDetailLayout = new QHBoxLayout();
    ui.connectionDetail->setLayout(connectionDetailLayout);
    showSQLite();
    connect(ui.databaseTypeComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
        this, &DatabaseSetting::onDatabaseTypeChanged);
    connect(ui.submitButton, SIGNAL(clicked()), this, SLOT(handleConnect()));
    connect(ui.cancelButton, SIGNAL(clicked()), this, SLOT(handleCancel()));
}

void DatabaseSetting::onDatabaseTypeChanged(int index) {
    selectedDatabaseType = index;

    if (selectedDatabaseType == 0) {
        showSQLite();
    }
    else if (selectedDatabaseType == 1) {
        showMySQL();
    }
}

void DatabaseSetting::showSQLite() {
    hideMySQL();
    ui.groupBox->setFixedHeight(140);
    ui.connectionDetail->setFixedHeight(140);
    ui.connectionDetail->layout()->addWidget(&databaseSettingToSQLite);
    databaseSettingToSQLite.show();
}

void DatabaseSetting::hideSQLite() {
    ui.connectionDetail->layout()->removeWidget(&databaseSettingToSQLite);
    databaseSettingToSQLite.hide();
}

void DatabaseSetting::showMySQL() {
    hideSQLite();
    ui.connectionDetail->layout()->addWidget(&databaseSettingToSQLite2);
    databaseSettingToSQLite2.show();
}

void DatabaseSetting::hideMySQL() {
    ui.connectionDetail->layout()->removeWidget(&databaseSettingToSQLite2);
    databaseSettingToSQLite2.hide();
}


void DatabaseSetting::handleConnect() {
    QSettings settings("Iritech", "IriTracker_Standard");
    if (selectedDatabaseType == 0) {
        settings.setValue("databaseType", "SQLite");
        settings.setValue("databasePath", databaseSettingToSQLite.getDatabasePath());
        settings.setValue("isLoggedIn", false);

        if (dataHandler.connectToSQLiteDatabase()) {
            if (!dataHandler.hasAdminAccount()) {
                AdminSignUpForm* adminSignUpForm = new AdminSignUpForm();
                adminSignUpForm->show();
            }
            else {
                IriTrackerStandardApp* iriTrackerStandardApp = new IriTrackerStandardApp();
                iriTrackerStandardApp->show();
            }
            this->close();
        }
        else {
            qDebug() << "Không thể kết nối đến cơ sở dữ liệu SQLite.";
        }
    }
    else if (selectedDatabaseType == 1) {
        settings.setValue("databaseType", "MySQL");

        QString host = ui.hostLineEdit->text();
        QString databaseName = ui.databaseNameLineEdit->text();
        QString user = ui.usernameLineEdit->text();
        QString password = ui.passwordLineEdit->text();
        QString port = ui.portLineEdit->text(); // Giả sử bạn đã thêm một trường nhập liệu cho cổng

        // Ghi các thông tin kết nối MySQL vào QSettings
        settings.setValue("host", host);
        settings.setValue("databaseName", databaseName);
        settings.setValue("username", user);
        settings.setValue("password", password);
        settings.setValue("port", port);
        settings.setValue("databasePath", "");

        if (dataHandler.connectToMySQLDatabase()) {
            if (!dataHandler.hasAdminAccount()) {
                AdminSignUpForm* adminSignUpForm = new AdminSignUpForm();
                adminSignUpForm->show();
            }
            else {
                IriTrackerStandardApp* iriTrackerStandardApp = new IriTrackerStandardApp();
                iriTrackerStandardApp->show();
            }
            this->close();
        }
        else {
            qDebug() << "Không thể kết nối đến cơ sở dữ liệu MySQL.";
        }
    }
    else {
        qDebug() << "Loại cơ sở dữ liệu không hợp lệ:" << selectedDatabaseType;
    }
}


void DatabaseSetting::handleCancel() {
    this->close();
}

DatabaseSetting::~DatabaseSetting() {}