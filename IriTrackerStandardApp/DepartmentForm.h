#pragma once
#include "ui_DepartmentForm.h"
#include "DepartmentController.h"
#include <QDialog>

class DepartmentForm : public QDialog {
    Q_OBJECT

public:
    DepartmentForm(QWidget* parent = nullptr);
    ~DepartmentForm();

signals:
    void databaseExecutionSuccess();

public slots:
    void setName(const QString& name);
    void setDescription(const QString& description);
    void setEditMode(bool _isEditMode);
    void handleSubmit();
    void handleCancel();

private:
    Ui::DepartmentFormClass ui;
    DepartmentController departmentController;
    QMessageBox messageBox;
    bool isEditMode = false;
};