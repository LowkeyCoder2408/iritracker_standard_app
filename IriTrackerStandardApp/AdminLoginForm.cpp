#include "AdminLoginForm.h"

AdminLoginForm::AdminLoginForm(QWidget* parent)
    : QDialog(parent) {

    ui.setupUi(this);
    ui.passwordInput->setEchoMode(QLineEdit::Password);
    this->setWindowIcon(QIcon("C:/Users/hoang/Downloads/IriTracker_logo.png"));
    this->setWindowTitle("Đăng Nhập");

    connect(ui.forgotPasswordButton, SIGNAL(clicked()), this, SLOT(handleForgotPassword()));
    connect(ui.loginButton, SIGNAL(clicked()), this, SLOT(handleLogin()));
    connect(ui.cancelButton, SIGNAL(clicked()), this, SLOT(handleCancel()));
}

AdminLoginForm::~AdminLoginForm() {
    // Không cần giải phóng controller vì nó không phải con trỏ
}

QString AdminLoginForm::getPasswordInput() {
    return ui.passwordInput->text();
}

void AdminLoginForm::handleForgotPassword() {
    // Thêm logic nếu cần
}

void AdminLoginForm::handleLogin() {
    QString password = getPasswordInput();
    if (password.trimmed().isEmpty()) {
        messageBox.setText("Mật khẩu không được để trống");
        messageBox.exec();
        return;
    }

    // Sử dụng controller để xác thực
    if (controller.verifyAdminCredentials(password)) {
        emit loginCompleted();
        accept();
    }
    else {
        messageBox.setText("Mật khẩu không chính xác");
        messageBox.exec();
    }
}

void AdminLoginForm::handleCancel() {
    close();
}