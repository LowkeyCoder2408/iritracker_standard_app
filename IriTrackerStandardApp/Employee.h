#pragma once
#include <QString>

class Employee {
public:
    Employee(const QString& id, const QString& firstName, const QString& lastName,
        const QString& dateOfBirth, const QString& email, const QString& phoneNumber,
        const QString& address, const QString& department, const QString& role,
        const QString& startDateOfWork, const QString& password, const QString& avatar, bool isEnabled);

    QString getId() const;
    void setId(const QString& id);

    QString getFirstName() const;
    void setFirstName(const QString& firstName);

    QString getLastName() const;
    void setLastName(const QString& lastName);

    QString getDateOfBirth() const;
    void setDateOfBirth(const QString& dateOfBirth);

    QString getEmail() const;
    void setEmail(const QString& email);

    QString getPhoneNumber() const;
    void setPhoneNumber(const QString& phoneNumber);

    QString getAddress() const;
    void setAddress(const QString& address);

    QString getDepartment() const;
    void setDepartment(const QString& department);

    QString getRole() const;
    void setRole(const QString& role);

    QString getStartDateOfWork() const;
    void setStartDateOfWork(const QString& startDateOfWork);

    QString getPassword() const;
    void setPassword(const QString& password);

    QString getAvatar() const;
    void setAvatar(const QString& avatar);

    bool getIsEnabled() const;
    void setEnabled(bool isEnabled);

private:
    QString id;
    QString firstName;
    QString lastName;
    QString dateOfBirth;
    QString email;
    QString phoneNumber;
    QString address;
    QString department;
    QString role;
    QString startDateOfWork;
    QString password;
    QString avatar;
    bool isEnabled;
};