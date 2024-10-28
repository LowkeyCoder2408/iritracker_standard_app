#include "DepartmentController.h"

DepartmentController::DepartmentController() {
    dataHandler.connectToDatabase();
}

bool DepartmentController::isDepartmentNameInvalid(const QString& name) {
    QString checkNameQuery = "SELECT COUNT(*) FROM department WHERE name = :departmentName;";
    QSqlQuery query;
    query.prepare(checkNameQuery);
    query.bindValue(":departmentName", name);

    if (!query.exec()) {
        return true; // Query execution error
    }
    if (query.next() && query.value(0).toInt() > 0) {
        return true; // Name exists
    }
    return false; // Name is valid
}

bool DepartmentController::addDepartment(const QString& name, const QString& description) {
    QString insertQuery = "INSERT INTO department (name, description) VALUES (:name, :description);";
    QMap<QString, QVariant> params;
    params[":name"] = name;
    params[":description"] = description;

    return dataHandler.runCreateQuery(insertQuery, params);
}

bool DepartmentController::updateDepartment(const QString& name, const QString& description) {
    QString editQuery = "UPDATE department SET description = :description WHERE name = :name";
    QMap<QString, QVariant> params;
    params[":name"] = name;
    params[":description"] = description;

    return dataHandler.runCreateQuery(editQuery, params);
}

bool DepartmentController::deleteDepartment(const QString& name) {
    QString query = "DELETE FROM department WHERE name = :name";
    QSqlQuery deleteQuery;
    deleteQuery.prepare(query);
    deleteQuery.bindValue(":name", name);

    return deleteQuery.exec();
}

QList<Department> DepartmentController::getAllDepartments() {
    QList<Department> departments;
    QString query = "SELECT name, description FROM department";
    QSqlQuery result = dataHandler.runCommonQuery(query);

    while (result.next()) {
        QString name = result.value("name").toString();
        QString description = result.value("description").toString();
        departments.append(Department(name, description));
    }

    return departments;
}