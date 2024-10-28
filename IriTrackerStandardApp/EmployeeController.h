#pragma once
#include <vector>
#include "Employee.h"

class EmployeeController {
public:
    EmployeeController();
    bool addEmployee(const Employee& employee);
    bool updateEmployee(const Employee& employee);
    bool deleteEmployee(const QString& id);
    std::vector<Employee> getAllEmployees() const;

private:
    std::vector<Employee> employees; // Dữ liệu nhân viên
    void loadEmployees(); // Tải dữ liệu nhân viên từ nguồn (database, file, v.v.)
    void saveEmployees(); // Lưu dữ liệu nhân viên vào nguồn
};