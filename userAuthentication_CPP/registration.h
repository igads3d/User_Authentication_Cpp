#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

#ifndef USERAU_REGISTRATION_H
#define USERAU_REGISTRATION_H


class registration {
public:
    bool checkDatabaseIfAlreadyUsed(std::string userName, std::string emailAddress);
    void registerNewUser(std::string fullName, std::string userName, std::string password, std::string confirmPassword, std::string emailAddress;

protected:
    typedef struct
    {
        std::string fullName;
        std::string userName;
        std::string password;
        std::string confirmPassword;
        std::string emailAddress;

    } user_t;
};


#endif //USERAU_REGISTRATION_H
