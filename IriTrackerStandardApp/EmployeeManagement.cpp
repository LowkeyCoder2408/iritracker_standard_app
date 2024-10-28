#include "EmployeeManagement.h"

EmployeeManagement::EmployeeManagement(QWidget* parent) : QWidget(parent) {
    ui.setupUi(this);

    // Kết nối các tín hiệu và slot
    //connect(ui.addButton, &QPushButton::clicked, this, &EmployeeManagement::handleAddEmployee);
    //connect(ui.editButton, &QPushButton::clicked, this, &EmployeeManagement::handleEditEmployee);
    //connect(ui.deleteButton, &QPushButton::clicked, this, &EmployeeManagement::handleDeleteEmployee);
    //connect(ui.tableView, &QTableView::clicked, this, &EmployeeManagement::handleRowSelection);
}

EmployeeManagement::~EmployeeManagement() {}

void EmployeeManagement::handleAddEmployee() {
    // Logic để thêm nhân viên
}

void EmployeeManagement::handleEditEmployee() {
    if (selectedEmployeeId.isEmpty()) {
        return;
    }
    // Logic để chỉnh sửa nhân viên
}

void EmployeeManagement::handleDeleteEmployee() {
    if (selectedEmployeeId.isEmpty()) {
        return;
    }
    if (employeeController.deleteEmployee(selectedEmployeeId)) {
        // Thông báo xóa thành công
    }
    else {
        // Thông báo xóa thất bại
    }
    // Cập nhật giao diện
}

void EmployeeManagement::handleRowSelection(const QModelIndex& index) {
    //selectedEmployeeId = index.data().toString(); // Giả định rằng ID là dữ liệu trong hàng
    //ui.editButton->setDisabled(false);
    //ui.deleteButton->setDisabled(false);
}