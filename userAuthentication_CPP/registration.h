#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "userDetails.h"
#include "registrationIntoDatabase.h"


#ifndef USERAU_REGISTRATION_H
#define USERAU_REGISTRATION_H


class Registration {
public:
    Registration(newUser_t newUser);
    bool checkDatabaseIfAlreadyUsed(std::string userName, std::string emailAddress);
    void passwordConfirmation(std::string password, std::string passwordConfirmation);
    void userNameValidation(std::string userName);
    void EmailValidation(std::string email);
    void passwordValidation(std::string password);
    void registerNewUser();

private:
    newUser_t newRegistration;
};

#endif //USERAU_REGISTRATION_H
