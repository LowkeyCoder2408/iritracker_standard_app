#pragma execution_character_set("utf-8") 
#include "DatabaseSetting.h"
#include "ui_DatabaseSetting.h"
#include "AdminSignUpForm.h"
#include "IriTrackerStandardApp.h"
#include <QSettings>

DatabaseSetting::DatabaseSetting(QWidget* parent) : QMainWindow(parent),
selectedDatabaseType(0),
databaseSettingToSQLite(),
databaseSettingToMySQL() {
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
    ui.groupBox->setFixedHeight(245);
    ui.connectionDetail->setFixedHeight(245);
    ui.connectionDetail->layout()->addWidget(&databaseSettingToMySQL);
    databaseSettingToMySQL.show();
}

void DatabaseSetting::hideMySQL() {
    ui.connectionDetail->layout()->removeWidget(&databaseSettingToMySQL);
    databaseSettingToMySQL.hide();
}

void DatabaseSetting::handleConnect() {
    QSettings settings("Iritech", "IriTracker_Standard");

    if (selectedDatabaseType == 0) {
        QString sqliteDatabasePath = databaseSettingToSQLite.getDatabasePath();

        // Kiểm tra nếu đường dẫn SQLite bị trống
        if (sqliteDatabasePath.isEmpty()) {
            QMessageBox msgBox;
            msgBox.setStyleSheet("QPushButton { background-color: #FFD580; }");
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Lỗi kết nối");
            msgBox.setInformativeText("Đường dẫn cơ sở dữ liệu SQLite không được để trống.");
            msgBox.exec();
            return;
        }

        settings.setValue("databaseType", "SQLite");
        settings.setValue("databasePath", sqliteDatabasePath);
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
            QMessageBox msgBox;
            msgBox.setStyleSheet("QPushButton { background-color: #FFCCCC; }");
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("Lỗi kết nối");
            msgBox.setInformativeText("Không thể kết nối đến cơ sở dữ liệu SQLite.");
            msgBox.exec();
        }
    }
    else if (selectedDatabaseType == 1) {
        settings.setValue("databaseType", "MySQL");

        QString host = databaseSettingToMySQL.getServerHostName();
        QString databaseName = databaseSettingToMySQL.getDatabaseName();
        QString user = databaseSettingToMySQL.getAdministratorUsername();
        QString password = databaseSettingToMySQL.getAdministratorPassword();
        int port = databaseSettingToMySQL.getServerPortNumber();

        // Kiểm tra tính hợp lệ của các trường
        if (host.isEmpty()) {
            QMessageBox msgBox;
            msgBox.setStyleSheet("QPushButton { background-color: #FFD580; }");
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Lỗi kết nối");
            msgBox.setInformativeText("Tên máy chủ không được để trống.");
            msgBox.exec();
            return;
        }
        if (port <= 0) {
            QMessageBox msgBox;
            msgBox.setStyleSheet("QPushButton { background-color: #FFD580; }");
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Lỗi kết nối");
            msgBox.setInformativeText("Số cổng không hợp lệ.");
            msgBox.exec();
            return;
        }
        if (databaseName.isEmpty()) {
            QMessageBox msgBox;
            msgBox.setStyleSheet("QPushButton { background-color: #FFD580; }");
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Lỗi kết nối");
            msgBox.setInformativeText("Tên cơ sở dữ liệu không được để trống.");
            msgBox.exec();
            return;
        }
        if (user.isEmpty()) {
            QMessageBox msgBox;
            msgBox.setStyleSheet("QPushButton { background-color: #FFD580; }");
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Lỗi kết nối");
            msgBox.setInformativeText("Tên người dùng không được để trống.");
            msgBox.exec();
            return;
        }
        if (password.isEmpty()) {
            QMessageBox msgBox;
            msgBox.setStyleSheet("QPushButton { background-color: #FFD580; }");
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Lỗi kết nối");
            msgBox.setInformativeText("Mật khẩu không được để trống.");
            msgBox.exec();
            return;
        }

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
            QMessageBox msgBox;
            msgBox.setStyleSheet("QPushButton { background-color: #FFCCCC; }");
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("Lỗi kết nối");
            msgBox.setInformativeText("Không thể kết nối đến cơ sở dữ liệu MySQL.");
            msgBox.exec();
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