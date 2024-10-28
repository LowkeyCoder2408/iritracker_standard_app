#include "DepartmentManagement.h"
#include <QAbstractItemView>
#include <QStandardItem>
#include <QSettings>

DepartmentManagement::DepartmentManagement(QWidget* parent) : QWidget(parent) {
    ui.setupUi(this);
    departmentForm = new DepartmentForm(this);
    ui.dataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    loadDataTable();
    ui.editButton->setDisabled(true);
    ui.deleteButton->setDisabled(true);

    connect(departmentForm, &DepartmentForm::databaseExecutionSuccess, this, &DepartmentManagement::loadDataTable);
    connect(ui.addButton, SIGNAL(clicked()), this, SLOT(handleClickAddButton()));
    connect(ui.editButton, SIGNAL(clicked()), this, SLOT(handleClickEditButton()));
    connect(ui.deleteButton, SIGNAL(clicked()), this, SLOT(handleClickDeleteButton()));
    connect(ui.dataTable, &QTableView::clicked, this, &DepartmentManagement::handleClickARow);
}

void DepartmentManagement::loadDataTable() {
    QList<Department> departments = departmentController.getAllDepartments();
    QStandardItemModel* model = new QStandardItemModel(departments.size(), 2, this);
    model->setHorizontalHeaderLabels({ "Tên", "Mô tả" });

    for (int row = 0; row < departments.size(); ++row) {
        model->setItem(row, 0, new QStandardItem(departments[row].getName()));
        model->setItem(row, 1, new QStandardItem(departments[row].getDescription()));
        if (row % 2 == 1) {
            model->item(row, 0)->setBackground(QBrush(QColor(235, 235, 231)));
            model->item(row, 1)->setBackground(QBrush(QColor(235, 235, 231)));
        }
    }

    ui.dataTable->setModel(model);
    ui.dataTable->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color: #2681c9; color: white; }");
    ui.dataTable->verticalHeader()->setVisible(false);
    ui.dataTable->setAlternatingRowColors(true);
    ui.dataTable->setColumnWidth(0, 170);
    ui.dataTable->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui.dataTable->horizontalHeader()->setStretchLastSection(false);
    ui.dataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.dataTable->setSelectionMode(QAbstractItemView::SingleSelection);

    ui.editButton->setDisabled(true);
    ui.deleteButton->setDisabled(true);
    selectedDepartment.clear();
}

void DepartmentManagement::resetInterface() {
    ui.editButton->setDisabled(true);
    ui.deleteButton->setDisabled(true);
    selectedDepartment.clear();
    loadDataTable();
}

void DepartmentManagement::handleClickAddButton() {
    departmentForm->setEditMode(false);
    departmentForm->setName("");
    departmentForm->setDescription("");
    departmentForm->exec();
}

void DepartmentManagement::handleClickEditButton() {
    if (selectedDepartment.isEmpty()) {
        return;
    }
    QString description;
    for (const auto& department : departmentController.getAllDepartments()) {
        if (department.getName() == selectedDepartment) {
            description = department.getDescription();
            break;
        }
    }
    departmentForm->setEditMode(true);
    departmentForm->setName(selectedDepartment);
    departmentForm->setDescription(description);
    departmentForm->exec();
}

void DepartmentManagement::handleClickDeleteButton() {
    if (selectedDepartment.isEmpty()) {
        return;
    }
    if (!departmentController.deleteDepartment(selectedDepartment)) {
        messageBox.setText("Xóa phòng ban thất bại");
        messageBox.exec();
    }
    resetInterface();
}

void DepartmentManagement::handleClickARow(const QModelIndex& index) {
    if (!index.isValid()) {
        return;
    }
    QString selectedDepartmentName = index.sibling(index.row(), 0).data().toString();
    if (!selectedDepartmentName.isEmpty()) {
        ui.editButton->setDisabled(false);
        ui.deleteButton->setDisabled(false);
        selectedDepartment = selectedDepartmentName;
    }
    else {
        ui.editButton->setDisabled(true);
        ui.deleteButton->setDisabled(true);
    }
}


DepartmentManagement::~DepartmentManagement() {
    delete departmentForm;
}