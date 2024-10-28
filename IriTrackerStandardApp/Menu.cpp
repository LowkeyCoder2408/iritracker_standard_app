#include "Menu.h"

Menu::Menu(QWidget* parent) : QWidget(parent) {
	ui.setupUi(this);
	ui.departmentButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	ui.employeeButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	ui.eventButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	ui.eventButton->setDisabled(true);
	ui.exceptionButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	ui.exceptionButton->setDisabled(true);
	ui.reportButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	ui.reportButton->setDisabled(true);
	ui.notificationButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	ui.notificationButton->setDisabled(true);
	ui.toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	connect(ui.departmentButton, &QToolButton::clicked, this, [this]() {emit departmentButtonClicked(); });
	connect(ui.employeeButton, &QToolButton::clicked, this, [this]() {emit employeeButtonClicked(); });
}

Menu::~Menu() {}