#pragma once
#include <QString>
#include <QMap>
#include <QVariant>
#include <QSqlQuery>
#include "DataHandler.h"
#include "Department.h"

class DepartmentController {
public:
    DepartmentController();
    bool isDepartmentNameInvalid(const QString& name);
    bool addDepartment(const QString& name, const QString& description);
    bool updateDepartment(const QString& name, const QString& description);
    bool deleteDepartment(const QString& name);
    QList<Department> getAllDepartments();

private:
    DataHandler dataHandler;
};