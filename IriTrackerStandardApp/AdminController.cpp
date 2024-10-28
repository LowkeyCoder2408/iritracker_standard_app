#include "AdminController.h"

AdminController::AdminController(QObject* parent)
    : QObject(parent) {}

bool AdminController::registerAdmin(const QString& email, const QString& password, QString& errorMessage) {
    dataHandler.connectToDatabase();

    QString insertQuery = "INSERT INTO employee (id, first_name, last_name, password, department, date_of_birth, start_date_of_work, is_enabled, avatar, role, email, phone_number, address) "
        "VALUES (:id, :first_name, :last_name, :password, :department, :date_of_birth, :start_date_of_work, :is_enabled, :avatar, :role, :email, :phone_number, :address);";

    QMap<QString, QVariant> params;
    params[":id"] = "1";
    params[":password"] = password;
    params[":is_enabled"] = true;
    params[":role"] = "ADMIN";
    params[":email"] = email;

    if (!dataHandler.runCreateQuery(insertQuery, params)) {
        errorMessage = "Đăng ký quản trị viên không thành công";
        dataHandler.disconnectToDatabase();
        return false;
    }

    QSettings settings("Iritech", "IriTracker_Standard");
    settings.setValue("isLoggedIn", true);
    dataHandler.disconnectToDatabase();
    return true;
}

bool AdminController::verifyAdminCredentials(const QString& password) {
    return dataHandler.checkUserCredentials(password);
}