#pragma once

#include <QWidget>
#include "ui_EmployeeManagement.h"
#include "EmployeeController.h"

class EmployeeManagement : public QWidget
{
    Q_OBJECT

public:
    EmployeeManagement(QWidget* parent = nullptr);
    ~EmployeeManagement();

private slots:
    void handleAddEmployee();
    void handleEditEmployee();
    void handleDeleteEmployee();
    void handleRowSelection(const QModelIndex& index);

private:
    Ui::EmployeeManagementClass ui;
    EmployeeController employeeController;
    QString selectedEmployeeId;
};