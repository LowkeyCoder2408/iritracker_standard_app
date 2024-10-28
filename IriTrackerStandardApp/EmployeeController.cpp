#include "EmployeeController.h"

EmployeeController::EmployeeController() {
    loadEmployees();
}

bool EmployeeController::addEmployee(const Employee& employee) {
    employees.push_back(employee);
    saveEmployees();
    return true; // Hoặc kiểm tra điều kiện thêm
}

bool EmployeeController::updateEmployee(const Employee& employee) {
    for (auto& emp : employees) {
        if (emp.getId() == employee.getId()) {
            emp = employee;
            saveEmployees();
            return true;
        }
    }
    return false; // Không tìm thấy nhân viên để cập nhật
}

bool EmployeeController::deleteEmployee(const QString& id) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->getId() == id) {
            employees.erase(it);
            saveEmployees();
            return true;
        }
    }
    return false; // Không tìm thấy nhân viên để xóa
}

std::vector<Employee> EmployeeController::getAllEmployees() const {
    return employees;
}

void EmployeeController::loadEmployees() {
    // Cài đặt logic để tải dữ liệu từ nguồn (database, file, v.v.)
}

void EmployeeController::saveEmployees() {
    // Cài đặt logic để lưu dữ liệu vào nguồn
}