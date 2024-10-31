#include "DataHandler.h"
#include <QFile>
#include <QSettings>

DataHandler::DataHandler(QObject* parent) : QObject(parent) {}

bool DataHandler::connectToSQLiteDatabase() {
    QSettings settings("Iritech", "IriTracker_Standard");
    QString databasePath = settings.value("databasePath", "").toString();

    // Kiểm tra nếu file cơ sở dữ liệu không tồn tại, thoát và trả về false
    QFile databaseFile(databasePath);
    if (!databaseFile.exists()) {
        qDebug() << "Tệp cơ sở dữ liệu không tồn tại:" << databasePath;
        return false;
    }

    // Tiến hành kết nối cơ sở dữ liệu
    QSqlDatabase sqlDatabase = QSqlDatabase::addDatabase("QSQLITE");
    sqlDatabase.setDatabaseName(databasePath);

    if (!sqlDatabase.open()) {
        qDebug() << "Lỗi khi kết nối đến cơ sở dữ liệu:" << sqlDatabase.lastError().text();
        return false;
    }

    // Kiểm tra sự tồn tại của các bảng và tạo mới nếu cần
    if (!areTablesExist()) {
        qDebug() << "Thiếu bảng cần thiết. Đang tạo các bảng...";

        runCreateQuery("CREATE TABLE IF NOT EXISTS department ("
            "name TEXT, "
            "description TEXT"
            ");");

        runCreateQuery("CREATE TABLE IF NOT EXISTS employee ("
            "id TEXT PRIMARY KEY, "
            "first_name TEXT, "
            "last_name TEXT, "
            "date_of_birth TEXT, "
            "email TEXT UNIQUE, "
            "phone_number TEXT, "
            "address TEXT, "
            "department TEXT, "
            "role TEXT, "
            "start_date_of_work TEXT, "
            "password TEXT, "
            "avatar TEXT, "
            "is_enabled BOOLEAN NOT NULL DEFAULT 1, "
            "FOREIGN KEY(department) REFERENCES department(name)"
            ");");
    }

    qDebug() << "Kết nối đến cơ sở dữ liệu thành công";
    return true;
}

bool DataHandler::connectToMySQLDatabase() {
    QSettings settings("Iritech", "IriTracker_Standard");

    QString host = settings.value("host").toString();
    QString databaseName = settings.value("databaseName").toString();
    QString user = settings.value("username").toString();
    QString password = settings.value("password").toString();
    int port = settings.value("port").toInt();

    QSqlDatabase sqlDatabase = QSqlDatabase::addDatabase("QMYSQL");
    sqlDatabase.setHostName(host);
    sqlDatabase.setDatabaseName(databaseName);
    sqlDatabase.setUserName(user);
    sqlDatabase.setPassword(password);
    sqlDatabase.setPort(port);

    if (!sqlDatabase.open()) {
        qDebug() << "Lỗi khi kết nối đến cơ sở dữ liệu MySQL:" << sqlDatabase.lastError().text();
        return false;
    }

    qDebug() << "Kết nối đến cơ sở dữ liệu MySQL thành công";

    runCreateQuery("CREATE TABLE IF NOT EXISTS department ("
        "name VARCHAR(255) PRIMARY KEY, "
        "description TEXT"
        ");");

    if (!areTablesExist()) {
        qDebug() << "Thiếu bảng cần thiết. Đang tạo bảng employee...";

        runCreateQuery("CREATE TABLE IF NOT EXISTS employee ("
            "id VARCHAR(255) PRIMARY KEY, "
            "first_name VARCHAR(255), "
            "last_name VARCHAR(255), "
            "date_of_birth DATE, "
            "email VARCHAR(255) UNIQUE, "
            "phone_number VARCHAR(50), "
            "address TEXT, "
            "department VARCHAR(255), "
            "role VARCHAR(50), "
            "start_date_of_work DATE, "
            "password VARCHAR(255), "
            "avatar TEXT, "
            "is_enabled BOOLEAN NOT NULL DEFAULT 1, "
            "FOREIGN KEY(department) REFERENCES department(name) ON DELETE CASCADE"
            ");");
    }
    return true;
}

bool DataHandler::isDatabaseEmpty(const QString& databasePath) {
    QFile databaseFile(databasePath);
    if (!databaseFile.open(QIODevice::ReadOnly)) {
        qDebug() << "Không thể mở cơ sở dữ liệu để kiểm tra tính trống:" << databaseFile.errorString();
        return true;
    }

    return (databaseFile.size() == 0);
}

bool DataHandler::areTablesExist() {
    QSqlDatabase sqlDatabase = QSqlDatabase::database();
    QStringList tables = sqlDatabase.tables();
    return tables.contains("department") && tables.contains("employee");
}

bool DataHandler::connectToDatabase() {
    QSettings settings("Iritech", "IriTracker_Standard");
    QString databaseType = settings.value("databaseType", "").toString();
    return (databaseType == "SQLite") ? connectToSQLiteDatabase() : (databaseType == "MySQL") && connectToMySQLDatabase();
}

void DataHandler::disconnectToDatabase() {
    if (database.isOpen()) {
        database.close();
        qDebug() << "Đã đóng cơ sở dữ liệu";
    }
    else {
        qDebug() << "Cơ sở dữ liệu đã đóng trước đó";
    }
}

bool DataHandler::checkUserCredentials(QString password) {
    QString queryString = "SELECT COUNT(*) FROM employee WHERE password = :password";
    QSqlQuery query(database);
    query.prepare(queryString);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}

bool DataHandler::hasAdminAccount() {
    QString sqlQuery = "SELECT COUNT(*) FROM employee WHERE role = 'ADMIN';";
    QSqlQuery query = runCommonQuery(sqlQuery);

    if (query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}

bool DataHandler::runCreateQuery(const QString& sqlQuery, const QMap<QString, QVariant>& params) {
    QSqlQuery query(database);
    query.prepare(sqlQuery);

    for (auto it = params.constBegin(); it != params.constEnd(); ++it) {
        query.bindValue(it.key(), it.value());
    }

    if (!query.exec()) {
        qDebug() << "Lỗi khi thực hiện truy vấn:" << query.lastError().text();
        return false;
    }
    qDebug() << "Thực hiện truy vấn thành công";
    return true;
}

bool DataHandler::runCreateQuery(const QString& sqlQuery) {
    QSqlQuery query(database);

    if (!query.exec(sqlQuery)) {
        qDebug() << "Lỗi khi thực hiện truy vấn:" << query.lastError().text();
        return false;
    }
    qDebug() << "Thực hiện truy vấn thành công";
    return true;
}

QSqlQuery DataHandler::runCommonQuery(const QString& sqlQuery) {
    QSqlQuery query(database);
    if (!query.exec(sqlQuery)) {
        qDebug() << "Lỗi khi thực hiện truy vấn:" << query.lastError().text();
        return QSqlQuery();
    }
    return query;
}

DataHandler::~DataHandler() {
    disconnectToDatabase();
}