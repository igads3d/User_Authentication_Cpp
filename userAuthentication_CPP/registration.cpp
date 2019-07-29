//
// Created by Nemeth Tamas on 2019-07-26.
//

#include "registration.h"

Registration::Registration(user_t newUser)
{
    newRegistration = newUser;
}

bool Registration::checkDatabaseIfAlreadyUsed(std::string userName, std::string emailAddress)
{
    return false;
}
void Registration::passwordConfirmation(std::string password, std::string passwordConfirmation)
{
    newRegistration.password = password;
    newRegistration.confirmPassword = passwordConfirmation;

    if (newRegistration.password != newRegistration.confirmPassword) {
        std::cout << "Password: do not match! Start again please!\n \n" << std::endl;
        registerNewUser();
    } else {

    }
}
void Registration::checkEmailValidation(std::string email)
{
    int tempCounter = 0;
    char atSign = '@';
    for (int i = 0; i < email.size(); ++i) {
        if(email[i] ==  atSign) {
            tempCounter++;
        }
    }
    if(tempCounter != 1) {
        std::cout << "E-mail address is NOT VALID, please try again!\n\n" <<std::endl;
        registerNewUser();
    }
}
void Registration::registerNewUser()
{
    std::cout<<"Hi there, welcome on board, please 'Click' to start registration!"<<std::endl;

    std::cout<<"Full name:" <<std::endl;
    std::cin>> newRegistration.fullName;

    std::cout<<"Username:"<<std::endl;
    std::cin>> newRegistration.userName;

    std::cout<<"E-mail adderess:"<<std::endl;
    std::cin>> newRegistration.emailAddress;

        checkEmailValidation(newRegistration.emailAddress);

    std::cout<<"Password:"<<std::endl;
    std::cin>> newRegistration.password;
    std::cout<<"Confirm password:"<<std::endl;
    std::cin>> newRegistration.confirmPassword;

        passwordConfirmation(newRegistration.password, newRegistration.confirmPassword);


    std::cout << newRegistration.fullName <<std::endl;
    std::cout <<newRegistration.userName <<std::endl;
    std::cout <<newRegistration.emailAddress <<std::endl;
    std::cout <<newRegistration.password<<std::endl;
    std::cout <<newRegistration.confirmPassword <<std::endl;
}


