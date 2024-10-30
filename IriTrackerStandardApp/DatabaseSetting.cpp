#pragma execution_character_set("utf-8") 
#include "DatabaseSetting.h"
#include "ui_DatabaseSetting.h"

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
    if (selectedDatabaseType == 0) {
        //emit connectToSQLite();
    }
    else if (selectedDatabaseType == 1) {
        //emit connectToMySQL();
    }
    else {
        qDebug() << "Loại cơ sở dữ liệu không hợp lệ:" << selectedDatabaseType;
    }
}

void DatabaseSetting::handleCancel() {
    this->close();
}

DatabaseSetting::~DatabaseSetting() {}