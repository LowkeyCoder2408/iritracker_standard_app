#pragma once

#include "ui_DatabaseSetting.h"
#include "DataHandler.h"
#include "DatabaseSettingToSQLite.h"
#include "Menu.h"
#include <QDialog>
#include <QHBoxLayout>

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
    Menu databaseSettingToSQLite2;
    DataHandler dataHandler;
    int selectedDatabaseType;
};