#pragma once
#include <QWidget>
#include <QMessageBox>
#include "ui_Navbar.h"
#include "AdminLoginForm.h"

class Navbar : public QWidget {
	Q_OBJECT

public:
	Navbar(QWidget* parent = nullptr);
	~Navbar();

signals:
	void logoutSuccessful();
	void loginSuccessful();
	void back();

public slots:
	void handleClickLogoutButton();
	void handleClickLoginButton();
	void handleClickCopyrightButton();
	void handleClickModeButton();
	void handleClickExitButton();
	void handleHideBackButton();
	void handleShowBackButton();
	void onLoginSuccess();
	void onLogoutSuccess();

private:
	Ui::NavbarClass ui;
	QMessageBox messageBox;
	AdminLoginForm adminLoginForm;
};