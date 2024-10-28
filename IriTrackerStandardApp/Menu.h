#pragma once
#include "ui_Menu.h"
#include <QWidget>

class Menu : public QWidget {
	Q_OBJECT

public:
	Menu(QWidget* parent = nullptr);
	~Menu();

signals:
	void departmentButtonClicked();
	void employeeButtonClicked();

private:
	Ui::MenuClass ui;
};