#include "DepartmentForm.h"

DepartmentForm::DepartmentForm(QWidget* parent) : QDialog(parent) {
    ui.setupUi(this);
    connect(ui.submitButton, SIGNAL(clicked()), this, SLOT(handleSubmit()));
    connect(ui.cancelButton, SIGNAL(clicked()), this, SLOT(handleCancel()));
    this->setWindowIcon(QIcon("C:/Users/hoang/Downloads/IriTracker_logo.png"));
}

void DepartmentForm::setName(const QString& name) {
    ui.nameInput->setText(name);
}

void DepartmentForm::setDescription(const QString& description) {
    ui.descriptionInput->setText(description);
}

void DepartmentForm::setEditMode(bool _isEditMode) {
    ui.nameInput->setDisabled(_isEditMode);
    isEditMode = _isEditMode;
}

void DepartmentForm::handleSubmit() {
    QString name = ui.nameInput->text();
    QString description = ui.descriptionInput->text();

    if (name.trimmed().isEmpty()) {
        messageBox.setText("Tên phòng ban không được để trống");
        messageBox.exec();
        return;
    }

    if (!isEditMode) {
        if (departmentController.isDepartmentNameInvalid(name)) {
            messageBox.setText("Tên phòng ban đã tồn tại");
            messageBox.exec();
            return;
        }
        if (!departmentController.addDepartment(name, description)) {
            messageBox.setText("Tạo phòng ban thất bại");
            messageBox.exec();
            return;
        }
    }
    else {
        if (!departmentController.updateDepartment(name, description)) {
            messageBox.setText("Sửa phòng ban thất bại");
            messageBox.exec();
            return;
        }
    }

    emit databaseExecutionSuccess();
    this->accept();
}

void DepartmentForm::handleCancel() {
    this->close();
}

DepartmentForm::~DepartmentForm() {}