#pragma once

#include "ui_DatabaseSetting.h"
#include "DataHandler.h"
#include "DatabaseSettingToSQLite.h"
#include "DatabaseSettingToMySQL.h"
#include <QDialog>
#include <QHBoxLayout>
#include <QMessageBox>

class DatabaseSetting : public QMainWindow {
    Q_OBJECT

public:
    DatabaseSetting(QWidget* parent = nullptr);
    ~DatabaseSetting();

private slots:
    void onDatabaseTypeChanged(int index);
    void showSQLite();
    void hideSQLite();
    void showMySQL();
    void hideMySQL();
    void handleConnect();
    void handleCancel();

private:
    Ui::DatabaseSettingClass ui;
    DatabaseSettingToSQLite databaseSettingToSQLite;
    DatabaseSettingToMySQL databaseSettingToMySQL;
    DataHandler dataHandler;
    QMessageBox messageBox;
    int selectedDatabaseType;
};