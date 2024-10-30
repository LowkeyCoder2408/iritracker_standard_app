#include "DatabaseSettingToMySQL.h"

DatabaseSettingToMySQL::DatabaseSettingToMySQL(QWidget* parent) : QWidget(parent) {
    ui.setupUi(this);
    //connect(ui.browseButton, &QPushButton::clicked, this, &DatabaseSettingToMySQL::browseDatabaseFile);
}

QString DatabaseSettingToMySQL::getServerHostName() {
    return ui.serverHostNameInput->text();
}

int DatabaseSettingToMySQL::getServerPortNumber() {
    return ui.serverPortNumberInput->text().toInt();
}

QString DatabaseSettingToMySQL::getDatabaseName() {
    return ui.databaseNameInput->text();
}

QString DatabaseSettingToMySQL::getAdministratorUsername() {
    return ui.administratorUsernameInput->text();
}

QString DatabaseSettingToMySQL::getAdministratorPassword() {
    return ui.administratorPasswordInput->text();
}

DatabaseSettingToMySQL::~DatabaseSettingToMySQL() {}