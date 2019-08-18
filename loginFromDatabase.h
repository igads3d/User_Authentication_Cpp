//
// Created by Nemeth Tamas on 2019-08-15.
//
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <iostream>
#include <vector>
#include <string>

#ifndef USERAU_LOGINFROMDATABASE_H
#define USERAU_LOGINFROMDATABASE_H

bool loginFromDatabase(std::string userName, std::string password);

#endif //USERAU_LOGINFROMDATABASE_H
