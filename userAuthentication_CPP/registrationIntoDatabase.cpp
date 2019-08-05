#include "registrationIntoDatabase.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

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



