#pragma once

#include <QObject>
#include <QSettings>
#include "DataHandler.h"

class AdminController : public QObject {
    Q_OBJECT

public:
    explicit AdminController(QObject* parent = nullptr);
    bool registerAdmin(const QString& email, const QString& password, QString& errorMessage);
    bool verifyAdminCredentials(const QString& password);

private:
    DataHandler dataHandler;
};