#include "registrationIntoDatabase.h"


void registrationToDatabase(std::string userName, std::string fullName, std::string emailAddress, std::string password)
{
    sqlite3 *database;
    char *errorMessage = 0;
    int errorCode;
    char *sql;

    errorCode = sqlite3_open("test.db", &database);

    if (errorCode) {
        std::cout << "Can't open database! Error code: " << sqlite3_errcode(database)<<std::endl;
        std::cin.get();
        return;
    } else {
        std::cout << "Opened database successfully\n" << std::endl;

    }

    sql = "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (1, 'Paul', 32, 'California', 20000.00 ); " \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (2, 'Allen', 25, 'Texas', 15000.00 ); "     \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" \
         "VALUES (3, 'Teddy', 23, 'Norway', 20000.00 );" \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" \
         "VALUES (4, 'Mark', 25, 'Rich-Mond ', 65000.00 );";

    sqlite3_close(database);
}



