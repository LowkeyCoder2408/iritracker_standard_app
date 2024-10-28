#pragma once
#include "ui_DepartmentManagement.h"
#include "DepartmentController.h"
#include "DepartmentForm.h"
#include <QWidget>

class DepartmentManagement : public QWidget {
    Q_OBJECT

public:
    DepartmentManagement(QWidget* parent = nullptr);
    ~DepartmentManagement();

signals:
    void modeEdit();

public slots:
    void loadDataTable();
    void resetInterface();
    void handleClickAddButton();
    void handleClickEditButton();
    void handleClickDeleteButton();
    void handleClickARow(const QModelIndex& index);

private:
    Ui::DepartmentManagementClass ui;
    DepartmentController departmentController;
    DepartmentForm* departmentForm;
    QMessageBox messageBox;
    QString selectedDepartment = "";
};