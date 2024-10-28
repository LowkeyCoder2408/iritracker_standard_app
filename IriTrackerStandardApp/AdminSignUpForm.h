#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include "ui_AdminSignUpForm.h"
#include "IriTrackerStandardApp.h"
#include "AdminController.h"

class AdminSignUpForm : public QMainWindow {
    Q_OBJECT

public:
    AdminSignUpForm(QWidget* parent = nullptr);
    ~AdminSignUpForm();

private slots:
    void handleAdminSignUp();
    void handleCancel();

private:
    Ui::AdminSignUpFormClass ui;
    QMessageBox messageBox;
    IriTrackerStandardApp IriTrackerStandardApp;
    AdminController controller;
};