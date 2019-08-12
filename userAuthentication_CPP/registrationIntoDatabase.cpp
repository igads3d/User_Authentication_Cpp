#include "registrationIntoDatabase.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}
/*
void registrationToDatabase(std::string userName, std::string fullName, std::string emailAddress, std::string password)
{
    sqlite3 *database;
    char *errorMessage = 0;
    int errorCode;
    std::string sql;

    errorCode = sqlite3_open("data.sql", &database);

    if (errorCode) {
        std::cout << "Can't open database! Error code: " << sqlite3_errcode(database)<<std::endl;
        std::cin.get();
        return;
    } else {
        std::cout << "Opened database successfully\n" << std::endl;

    }


    sql = "INSERT INTO USERDATA (USERNAME, FULLNAME, EMAIL, PASSWORD)"  \
         "VALUES ('" + userName + "', " + fullName + ");";



    errorCode = sqlite3_exec(database, sql.c_str(), callback, 0, &errorMessage);


    if( errorCode != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", errorMessage);
        sqlite3_free(errorMessage);
    } else {
        fprintf(stdout, "Records created successfully\n");
    }
    sqlite3_close(database);
}
*/

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


