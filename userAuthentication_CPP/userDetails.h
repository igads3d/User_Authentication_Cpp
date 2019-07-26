#ifndef USERAU_USERDETAILS_H
#define USERAU_USERDETAILS_H
#include <iostream>
#include <map>
#include <fstream>
#include <stdio.h>

 typedef struct
{
    std::string fullName;
    std::string userName;
    std::string password;
    std::string confirmPassword;
    std::string emailAddress;

} user_t;

#endif //USERAU_USERDETAILS_H
