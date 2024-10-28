#include "Navbar.h"
#include <QSettings>

Navbar::Navbar(QWidget* parent) : QWidget(parent) {
	ui.setupUi(this);
	ui.horizontalLayout->addStretch();

	ui.horizontalLayout_2->insertStretch(0);
	ui.horizontalLayout_2->addStretch();

	ui.loginButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	ui.backButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	ui.copyrightButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	ui.exitButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	ui.logoutButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	ui.modeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	connect(ui.logoutButton, SIGNAL(clicked()), this, SLOT(handleClickLogoutButton()));
	connect(ui.loginButton, SIGNAL(clicked()), this, SLOT(handleClickLoginButton()));
	connect(ui.copyrightButton, SIGNAL(clicked()), this, SLOT(handleClickCopyrightButton()));
	connect(ui.modeButton, SIGNAL(clicked()), this, SLOT(handleClickModeButton()));
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(handleClickExitButton()));
	connect(ui.backButton, SIGNAL(clicked()), this, SLOT(handleHideBackButton()));

	QSettings settings("Iritech", "IriTracker_Standard");
	bool isLoggedIn = settings.value("isLoggedIn", false).toBool();

	handleHideBackButton();
	if (isLoggedIn) {
		onLoginSuccess();
	}
	else {
		ui.loginButton->show();
		ui.logoutButton->hide();
	}
}

void Navbar::handleClickLogoutButton() {
	QSettings settings("Iritech", "IriTracker_Standard");
	settings.setValue("isLoggedIn", false);
	onLogoutSuccess();
	messageBox.setText("Đã đăng xuất khỏi ứng dụng");
	messageBox.exec();
}

void Navbar::handleClickLoginButton() {
	AdminLoginForm adminLoginForm(this);
	if (adminLoginForm.exec() == QDialog::Accepted) {
		DataHandler dataHandler;
		QString password = adminLoginForm.getPasswordInput();

		if (dataHandler.checkUserCredentials(password)) {
			QSettings settings("Iritech", "IriTracker_Standard");
			settings.setValue("isLoggedIn", true);
			onLoginSuccess();
			emit loginSuccessful();
		}
		else {
			messageBox.setText("Mật khẩu không chính xác");
			messageBox.exec();
		}
	}
}

void Navbar::handleClickCopyrightButton() {
	messageBox.setText("Bạn đã chọn nút bản quyền");
	messageBox.exec();
}

void Navbar::handleClickModeButton() {
	messageBox.setText("Bạn đã chọn nút chế độ");
	messageBox.exec();
}

void Navbar::handleClickExitButton() {
	exit(0);
}

void Navbar::onLoginSuccess() {
	ui.loginButton->hide();
	ui.logoutButton->show();
}

void Navbar::onLogoutSuccess() {
	emit logoutSuccessful();
	ui.loginButton->show();
	ui.logoutButton->hide();
}

void Navbar::handleHideBackButton() {
	ui.backButton->hide();
	emit back();
}

void Navbar::handleShowBackButton() {
	ui.backButton->show();
}

Navbar::~Navbar() {}