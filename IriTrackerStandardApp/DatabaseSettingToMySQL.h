#pragma once
#include "ui_DatabaseSettingToMySQL.h"
#include <QPushButton>
#include <QWidget>
#include <QFileDialog>
#include <QDebug>

class DatabaseSettingToMySQL : public QWidget {
	Q_OBJECT

public:
	DatabaseSettingToMySQL(QWidget* parent = nullptr);
	QString getServerHostName();
	int getServerPortNumber();
	QString getDatabaseName();
	QString getAdministratorUsername();
	QString getAdministratorPassword();
	~DatabaseSettingToMySQL();

signals:

private:
	Ui::DatabaseSettingToMySQLClass ui;
};