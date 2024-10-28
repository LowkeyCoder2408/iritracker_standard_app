#pragma once
#include "ui_IriTrackerStandardApp.h"
#include "Navbar.h"
#include "Menu.h"
#include "AnonymousHome.h"
#include "AdminLoginForm.h"
#include "DepartmentManagement.h"
#include "EmployeeManagement.h"
#include <QtWidgets/QMainWindow>
#include <QSettings>
#include <QDebug>
#include <QTimer>
#include <QDateTime>

class IriTrackerStandardApp : public QMainWindow {
    Q_OBJECT

public:
    IriTrackerStandardApp(QWidget* parent = nullptr);
    ~IriTrackerStandardApp();

private slots:
    void showAnonymousHome();
    void showMenu();
    void hideMenu();
    void showDepartmentManagement();
    void hideDepartmentManagement();
    void showEmployeeManagement();
    void hideEmployeeManagement();

private:
    Ui::IriTrackerStandardAppClass ui;
    QSettings settings;
    Navbar navbar; // Sử dụng đối tượng trực tiếp thay vì con trỏ
    Menu menu;     // Sử dụng đối tượng trực tiếp thay vì con trỏ
    AdminLoginForm adminLoginForm; // Đối tượng trực tiếp
    AnonymousHome anonymousHome;    // Đối tượng trực tiếp
    DepartmentManagement departmentManagement; // Đối tượng trực tiếp
    EmployeeManagement employeeManagement;     // Đối tượng trực tiếp
};