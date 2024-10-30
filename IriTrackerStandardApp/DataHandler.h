#pragma once
#pragma execution_character_set("utf-8")
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QFile>

class DataHandler : public QObject {
    Q_OBJECT

public:
    explicit DataHandler(QObject* parent = nullptr);
    bool connectToSQLiteDatabase();
    bool connectToMySQLDatabase();
    bool isDatabaseEmpty(const QString& databasePath);
    bool areTablesExist();
    void disconnectToSQLiteDatabase();
    bool checkUserCredentials(QString password);
    bool hasAdminAccount();
    bool runCreateQuery(const QString& sqlQuery);
    bool runCreateQuery(const QString& sqlQuery, const QMap<QString, QVariant>& params);
    QSqlQuery runCommonQuery(const QString& sqlQuery);
    ~DataHandler();

private:
    QSqlDatabase database;
};