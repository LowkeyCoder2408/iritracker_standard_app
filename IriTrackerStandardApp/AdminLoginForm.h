#pragma once

#include "ui_AdminLoginForm.h"
#include "AdminController.h"
#include <QDialog>
#include <QString>
#include <QMessageBox>

class AdminLoginForm : public QDialog {
    Q_OBJECT

signals:
    void loginCompleted();

public:
    explicit AdminLoginForm(QWidget* parent = nullptr);
    QString getPasswordInput();
    ~AdminLoginForm();

private slots:
    void handleForgotPassword();
    void handleLogin();
    void handleCancel();

private:
    Ui::AdminLoginFormClass ui;
    QMessageBox messageBox;
    AdminController controller;
};