#include "AdminSignUpForm.h"
#include <QSettings>
#include <QLineEdit>

AdminSignUpForm::AdminSignUpForm(QWidget* parent) : QMainWindow(parent) {
    ui.setupUi(this);
    ui.label->setWordWrap(true);
    ui.passwordInput->setEchoMode(QLineEdit::Password);
    ui.confirmedPasswordInput->setEchoMode(QLineEdit::Password);
    this->setWindowIcon(QIcon("C:/Users/hoang/Downloads/IriTracker_logo.png"));
    this->setWindowTitle("Thiết Lập Mật Khẩu Quản Trị Viên");

    connect(ui.signUpButton, &QPushButton::clicked, this, &AdminSignUpForm::handleAdminSignUp);
    connect(ui.cancelButton, &QPushButton::clicked, this, &AdminSignUpForm::handleCancel);
}

void AdminSignUpForm::handleAdminSignUp() {
    QString email = ui.emailInput->text();
    QString password = ui.passwordInput->text();
    QString confirmedPassword = ui.confirmedPasswordInput->text();

    if (email.trimmed().isEmpty() || password.trimmed().isEmpty() || confirmedPassword.trimmed().isEmpty()) {
        messageBox.setText("Trường này không được để trống");
        messageBox.exec();
        return;
    }
    if (password != confirmedPassword) {
        messageBox.setText("Mật khẩu không trùng khớp");
        messageBox.exec();
        return;
    }

    QString errorMessage;
    if (!controller.registerAdmin(email, password, errorMessage)) {
        messageBox.setText(errorMessage);
        messageBox.exec();
        return;
    }

    this->hide();
    IriTrackerStandardApp.show();
}

void AdminSignUpForm::handleCancel() {
    this->close();
}

AdminSignUpForm::~AdminSignUpForm() {}