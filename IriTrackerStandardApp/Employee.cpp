#include "Employee.h"

Employee::Employee(const QString& id, const QString& firstName, const QString& lastName,
    const QString& dateOfBirth, const QString& email, const QString& phoneNumber,
    const QString& address, const QString& department, const QString& role,
    const QString& startDateOfWork, const QString& password, const QString& avatar, bool isEnabled)
    : id(id), firstName(firstName), lastName(lastName), dateOfBirth(dateOfBirth),
    email(email), phoneNumber(phoneNumber), address(address), department(department),
    role(role), startDateOfWork(startDateOfWork), password(password), avatar(avatar), isEnabled(isEnabled) {}

QString Employee::getId() const { return id; }
void Employee::setId(const QString& id) { this->id = id; }

QString Employee::getFirstName() const { return firstName; }
void Employee::setFirstName(const QString& firstName) { this->firstName = firstName; }

QString Employee::getLastName() const { return lastName; }
void Employee::setLastName(const QString& lastName) { this->lastName = lastName; }

QString Employee::getDateOfBirth() const { return dateOfBirth; }
void Employee::setDateOfBirth(const QString& dateOfBirth) { this->dateOfBirth = dateOfBirth; }

QString Employee::getEmail() const { return email; }
void Employee::setEmail(const QString& email) { this->email = email; }

QString Employee::getPhoneNumber() const { return phoneNumber; }
void Employee::setPhoneNumber(const QString& phoneNumber) { this->phoneNumber = phoneNumber; }

QString Employee::getAddress() const { return address; }
void Employee::setAddress(const QString& address) { this->address = address; }

QString Employee::getDepartment() const { return department; }
void Employee::setDepartment(const QString& department) { this->department = department; }

QString Employee::getRole() const { return role; }
void Employee::setRole(const QString& role) { this->role = role; }

QString Employee::getStartDateOfWork() const { return startDateOfWork; }
void Employee::setStartDateOfWork(const QString& startDateOfWork) { this->startDateOfWork = startDateOfWork; }

QString Employee::getPassword() const { return password; }
void Employee::setPassword(const QString& password) { this->password = password; }

QString Employee::getAvatar() const { return avatar; }
void Employee::setAvatar(const QString& avatar) { this->avatar = avatar; }

bool Employee::getIsEnabled() const { return isEnabled; }
void Employee::setEnabled(bool isEnabled) { this->isEnabled = isEnabled; }