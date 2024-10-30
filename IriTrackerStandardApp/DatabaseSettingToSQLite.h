#pragma once
#include "ui_DatabaseSettingToSQLite.h"
#include <QPushButton>
#include <QWidget>
#include <QFileDialog>
#include <QDebug>

class DatabaseSettingToSQLite : public QWidget {
	Q_OBJECT

public:
	DatabaseSettingToSQLite(QWidget* parent = nullptr);
	void browseDatabaseFile();
	~DatabaseSettingToSQLite();

signals:

private:
	Ui::DatabaseSettingToSQLiteClass ui;
};