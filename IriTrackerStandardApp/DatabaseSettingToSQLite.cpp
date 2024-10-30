#include "DatabaseSettingToSQLite.h"

DatabaseSettingToSQLite::DatabaseSettingToSQLite(QWidget* parent) : QWidget(parent) {
	ui.setupUi(this);
	connect(ui.browseButton, &QPushButton::clicked, this, &DatabaseSettingToSQLite::browseDatabaseFile);
}

void DatabaseSettingToSQLite::browseDatabaseFile() {
    QString filePath = QFileDialog::getOpenFileName(this, "Select Database File", "", "SQLite Database (*.sqlite *.db)");
    if (!filePath.isEmpty()) {
        ui.databasePathInput->setText(filePath);
        qDebug() << filePath;
    }
}

QString DatabaseSettingToSQLite::getDatabasePath() {
    return ui.databasePathInput->text();
}

DatabaseSettingToSQLite::~DatabaseSettingToSQLite() {}