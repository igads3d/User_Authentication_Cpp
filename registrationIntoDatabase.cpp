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
    command = "INSERT INTO USER_DATA (USERNAME, FULL_NAME, MAIL, PASSWORD) " \
    "VALUES ('" + userName + "', '" + fullName + "','" + emailAddress + "', '" + password + "');";


    sql = command.c_str();
    errorCode = sqlite3_exec(database, sql, 0, 0, &errorMessage);

    if (errorCode) {
        std::cout << "The data can't be saved, E-mail Address or Username is ALREADY EXIST!" << std::endl;
        std::cout << errorMessage << std::endl;
        std::cin.get();
    }

    sqlite3_close(database);
}
