//
// Created by Nemeth Tamas on 2019-07-26.
//

#include "registration.h"

bool Registration::checkDatabaseIfAlreadyUsed(std::string userName, std::string emailAddress)
{
    return false;
}

void Registration::registerNewUser(std::string fullName, std::string userName, std::string password,
std::string confirmPassword, std::string emailAddress)
{
    user_t newRegistration;
    std::cout<<"Hi there, welcome on board, please 'Click' to start registration!"<<std::endl;
    std::cin.get();

    std::cout<<"Full name:";
    std::cin>> newRegistration.fullName;
    std::cout<<"Username:";
    std::cin>> newRegistration.userName;
    std::cout<<"E-mail adderess:";
    std::cin>> newRegistration.emailAddress;
    std::cout<<"Password:";
    std::cin>> newRegistration.password;
    std::cout<<"Confirm password:";
    std::cin>> newRegistration.confirmPassword;


}
