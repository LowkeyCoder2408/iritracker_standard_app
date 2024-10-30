#include "DataHandler.h"
#include <QFile>

DataHandler::DataHandler(QObject* parent) : QObject(parent) {}

bool DataHandler::connectToDatabase() {
    QString databaseDirectory = "IriTrackerStandardAppDatabase.db";
    QFile databaseFile(databaseDirectory);
    bool isDatabaseExist = databaseFile.exists();
    QSqlDatabase sqlDatabase = QSqlDatabase::addDatabase("QSQLITE");
    sqlDatabase.setDatabaseName(databaseDirectory);

    if (!sqlDatabase.open()) {
        qDebug() << "Lỗi khi kết nối đến cơ sở dữ liệu:" << sqlDatabase.lastError().text();
        return false;
    }
    if (!isDatabaseExist) {
        runCreateQuery("CREATE TABLE department ("
            "name TEXT, "
            "description TEXT"
            ");");
        runCreateQuery("CREATE TABLE employee ("
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

bool DataHandler::connectToSQLiteDatabase(const QString& databasePath) {
    QFile databaseFile(databasePath);
    bool isDatabaseExist = databaseFile.exists();

    // Thêm cơ sở dữ liệu
    QSqlDatabase sqlDatabase = QSqlDatabase::addDatabase("QSQLITE");
    sqlDatabase.setDatabaseName(databasePath);

    if (!sqlDatabase.open()) {
        qDebug() << "Lỗi khi kết nối đến cơ sở dữ liệu:" << sqlDatabase.lastError().text();
        return false;
    }

    // Kiểm tra xem cơ sở dữ liệu có tồn tại và không trống
    if (!isDatabaseExist || isDatabaseEmpty(databasePath)) {
        qDebug() << "Cơ sở dữ liệu không tồn tại hoặc trống. Tạo bảng mới...";
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
    else {
        // Kiểm tra xem bảng có tồn tại không
        if (!areTablesExist()) {
            qDebug() << "Các bảng không tồn tại. Tạo bảng mới...";
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
    }

    qDebug() << "Kết nối đến cơ sở dữ liệu thành công";
    return true;
}

// Kiểm tra xem tệp cơ sở dữ liệu có trống không
bool DataHandler::isDatabaseEmpty(const QString& databasePath) {
    QFile databaseFile(databasePath);
    if (!databaseFile.open(QIODevice::ReadOnly)) {
        qDebug() << "Không thể mở cơ sở dữ liệu để kiểm tra tính trống:" << databaseFile.errorString();
        return true; // Xem như trống nếu không thể mở
    }

    // Đọc dữ liệu từ tệp và kiểm tra kích thước
    return (databaseFile.size() == 0);
}

// Kiểm tra xem các bảng cần thiết có tồn tại không
bool DataHandler::areTablesExist() {
    QSqlQuery query;
    query.exec("SELECT name FROM sqlite_master WHERE type='table' AND name IN ('department', 'employee');");

    int count = 0;
    while (query.next()) {
        count++;
    }

    return (count == 2); // Nếu có cả hai bảng
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