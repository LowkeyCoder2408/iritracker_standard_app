#include "Department.h"

Department::Department(const QString& name, const QString& description)
    : name(name), description(description) {}

QString Department::getName() const { return name; }
void Department::setName(const QString& name) { this->name = name; }

QString Department::getDescription() const { return description; }
void Department::setDescription(const QString& description) { this->description = description; }