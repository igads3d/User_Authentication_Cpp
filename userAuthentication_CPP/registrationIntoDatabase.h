#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <iostream>
#include <vector>
#include <string>



#ifndef USERAU_REGISTRATIONINTODATABASE_H
#define USERAU_REGISTRATIONINTODATABASE_H

void registrationToDatabase(std::string userName, std::string fullName, std::string emailAddress, std::string password);
void insertIntoDatabase (std::string userName, std::string fullName, std::string emailAddress, std::string password);

#endif //USERAU_REGISTRATIONINTODATABASE_H
