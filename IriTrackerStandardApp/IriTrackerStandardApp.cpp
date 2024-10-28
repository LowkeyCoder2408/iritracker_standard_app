#pragma execution_character_set("utf-8")
#include "IriTrackerStandardApp.h"
#include <QHBoxLayout>

IriTrackerStandardApp::IriTrackerStandardApp(QWidget* parent)
    : QMainWindow(parent),
    navbar(),                  // Đối tượng trực tiếp
    anonymousHome(),           // Đối tượng trực tiếp
    menu(),                    // Đối tượng trực tiếp
    departmentManagement(),     // Đối tượng trực tiếp
    employeeManagement() {      // Đối tượng trực tiếp

    ui.setupUi(this);

    QHBoxLayout* headerLayout = new QHBoxLayout();
    headerLayout->setContentsMargins(0, 0, 0, 0);
    headerLayout->setSpacing(0);
    QHBoxLayout* contentLayout = new QHBoxLayout();
    ui.header->setLayout(headerLayout);
    ui.content->setLayout(contentLayout);
    ui.header->layout()->addWidget(&navbar);

    QSettings settings("Iritech", "IriTracker_Standard");
    bool isLoggedIn = settings.value("isLoggedIn", false).toBool();

    hideDepartmentManagement();
    hideEmployeeManagement();
    if (isLoggedIn) {
        showMenu();
        qDebug() << "Đã đăng nhập";
    }
    else {
        hideMenu();
        showAnonymousHome();
        qDebug() << "Chưa đăng nhập";
    }

    // Kết nối các tín hiệu và slot
    connect(&navbar, &Navbar::loginSuccessful, this, &IriTrackerStandardApp::showMenu);
    connect(&navbar, &Navbar::logoutSuccessful, this, &IriTrackerStandardApp::showAnonymousHome);
    connect(&navbar, &Navbar::back, this, &IriTrackerStandardApp::showMenu);
    connect(&menu, &Menu::departmentButtonClicked, this, &IriTrackerStandardApp::showDepartmentManagement);
    connect(&menu, &Menu::departmentButtonClicked, &navbar, &Navbar::handleShowBackButton);
    connect(&menu, &Menu::employeeButtonClicked, this, &IriTrackerStandardApp::showEmployeeManagement);
    connect(&menu, &Menu::employeeButtonClicked, &navbar, &Navbar::handleShowBackButton);

    this->setWindowIcon(QIcon("C:/Users/hoang/Downloads/IriTracker_logo.png"));
    this->setWindowTitle("IriTracker - Hệ Thống Quản Lý Chấm Công");
    this->setGeometry(620, 340, 685, 430);
}

void IriTrackerStandardApp::showAnonymousHome() {
    hideDepartmentManagement();
    hideEmployeeManagement();
    hideMenu();
    ui.content->layout()->addWidget(&anonymousHome);  // Sử dụng tham chiếu đến đối tượng
    anonymousHome.show(); // Không cần dùng *
}

void IriTrackerStandardApp::showMenu() {
    hideDepartmentManagement();
    hideEmployeeManagement();
    anonymousHome.hide();
    ui.content->layout()->addWidget(&menu);  // Sử dụng tham chiếu đến đối tượng
    menu.show(); // Không cần dùng *
}

void IriTrackerStandardApp::hideMenu() {
    ui.content->layout()->removeWidget(&menu);  // Sử dụng tham chiếu đến đối tượng
    menu.hide(); // Không cần dùng *
}

void IriTrackerStandardApp::showDepartmentManagement() {
    hideMenu();
    anonymousHome.hide();
    ui.content->layout()->addWidget(&departmentManagement);  // Sử dụng tham chiếu đến đối tượng
    departmentManagement.show(); // Không cần dùng *
    departmentManagement.resetInterface();
}

void IriTrackerStandardApp::hideDepartmentManagement() {
    ui.content->layout()->removeWidget(&departmentManagement);  // Sử dụng tham chiếu đến đối tượng
    departmentManagement.hide(); // Không cần dùng *
}

void IriTrackerStandardApp::showEmployeeManagement() {
    hideMenu();
    anonymousHome.hide();
    ui.content->layout()->addWidget(&employeeManagement);  // Sử dụng tham chiếu đến đối tượng
    employeeManagement.show(); // Không cần dùng *
}

void IriTrackerStandardApp::hideEmployeeManagement() {
    ui.content->layout()->removeWidget(&employeeManagement);  // Sử dụng tham chiếu đến đối tượng
    employeeManagement.hide(); // Không cần dùng *
}

IriTrackerStandardApp::~IriTrackerStandardApp() {}