//
// Created by Nemeth Tamas on 2019-08-15.
//

#include "loginFromDatabase.h"

static int callback(void* data, int argc, char** argv, char** azColName)
{
    int i;
    fprintf(stderr, "%s: ", (const char*)data);

    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }

    printf("\n");
    return 0;
}

bool loginFromDatabase(std::string userName, std::string password) {
    sqlite3 *database;
    int exit = 0;
    exit = sqlite3_open("../database.db", &database);
    std::string data = "CALLBACK FUNCTION";

    std::string sql = "SELECT * FROM USER_DATA WHERE USERNAME = '" + userName + "' AND PASSWORD = '" + password + "'";

    if (exit) {
        std::cerr << "Error open DB " << sqlite3_errmsg(database) << std::endl;
    }

    int rc = sqlite3_exec(database, sql.c_str(), callback, (void *) data.c_str(), NULL);


    if (rc != SQLITE_OK){
        std::cout << "Incorrect username or password!" << std::endl;
        sqlite3_close(database);
        return false;

    } else {
        std::cout << "If you find your user details above, you have logged in successfully! \nHowever if not," \
        " probably you have entered wrong details, try again!\nIf you want to register, please re-RUN the project!" << std::endl;
        sqlite3_close(database);
        return true;

    }
}