#include "registrationIntoDatabase.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

void insertIntoDatabase (std::string userName, std::string fullName, std::string emailAddress, std::string password)
{
    sqlite3 *database;
    char *errorMessage = 0;
    int errorCode;
    const char *sql;

    errorCode = sqlite3_open("../database.db", &database);

    if (errorCode) {
        std::cout << "Can't open database!" << std::endl;
        std::cin.get();

        return;
    }

    sql =   "CREATE TABLE USER_DATA("  \
		    "USERNAME TEXT PRIMARY KEY NOT NULL,"	\
		    "FULL_NAME TEXT NOT NULL,"   \
            "MAIL TEXT NOT NULL,"       \
            "PASSWORD TEXT NOT NULL);";

    sqlite3_exec(database, sql, 0, 0, &errorMessage);

    std::string command;
    command = "INSERT INTO USER_DATA (USERNAME, FULL_NAME, MAIL, PASSWORD) "  \
		"VALUES ('" + userName + "', '" + fullName + "','" + emailAddress + "', '" + password + "');";

    sql = command.c_str();
    errorCode = sqlite3_exec(database, sql, 0, 0, &errorMessage);

    if (errorCode) {
        std::cout << "The data can't be saved or already exist!" << std::endl;
        std::cout << errorMessage << std::endl;
        std::cin.get();
    }

    sqlite3_close(database);
}


void usernameIfAlreadyUsed (std::string userName)
{
    sqlite3 *db;
    sqlite3_stmt *stmt;

    char *str;
    if (sqlite3_open("../database.db", &db) == SQLITE_OK) {
        sqlite3_prepare(db, "SELECT * from abe_account;", -1, &stmt, NULL);//preparing the statement
        sqlite3_step(stmt);//executing the statement
        str = (char *) sqlite3_column_text(stmt, 0);///reading the 1st column of the result
    } else {
        std::cout << "Failed to open db\n";
    }

    sqlite3_finalize(stmt);
    sqlite3_close(db);

    std::cout << str << std::endl;
}
