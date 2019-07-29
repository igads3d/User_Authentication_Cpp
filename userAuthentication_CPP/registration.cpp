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
void Registration::EmailValidation(std::string email)
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
void Registration::userNameValidation(std::string userName)
{
    std::string numbers = "0123456789";
    int numberCounter = 0;

    for (int i = 0; i < userName.size(); ++i) {
        for (int j = 0; j < numbers.size(); ++j) {
            if(userName[i] == numbers[j]){
                numberCounter++;
            }
        }
    }
    if(numberCounter == 0) {
        std::cout << "Username not valid! Make sure you have used at least 1 number character! Please try again!\n\n"
                  <<std::endl;
        registerNewUser();
    }

}
void Registration::passwordValidation(std::string password)
{
    std::string numbers = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int numberCounter = 0;

    for (int i = 0; i < password.size(); ++i) {
        for (int j = 0; j < numbers.size(); ++j) {
            if(password[i] == numbers[j]){
                numberCounter++;
            }
        }
    }
    if(numberCounter == 0) {
        std::cout << "Password is not valid! Make sure you have used at least 1 UPPERCASE character"
                     " AND 1 number character as well! Please try again!\n\n"<<std::endl;
        registerNewUser();
    }
}

void Registration::registerNewUser()
{
    std::cout<<"Hi there, welcome on board, let's start you're registration. Please follow the instructions,"
               " when you enter your details!"<<std::endl;

    std::cout<<"Full name:" <<std::endl;
    std::cin>> newRegistration.fullName >> newRegistration.fullName;
    std::cin.get();

    std::cout<<"Username:                       - At least 1 number! -"<<std::endl;
    std::cin>> newRegistration.userName;
    std::cin.get();

        userNameValidation(newRegistration.userName);

    std::cout<<"E-mail address:                - E-mail form: _____@___.__"<<std::endl;
    std::cin>> newRegistration.emailAddress;
    std::cin.get();

        EmailValidation(newRegistration.emailAddress);

    std::cout<<"Password:                       - At least 1 uppercase letter, and 1 number! -"<<std::endl;
    std::cin>> newRegistration.password;
    std::cin.get();

        passwordValidation(newRegistration.password);

    std::cout<<"Confirm password:"<<std::endl;
    std::cin>> newRegistration.confirmPassword;
    std::cin.get();

        passwordConfirmation(newRegistration.password, newRegistration.confirmPassword);


    std::cout << newRegistration.fullName <<std::endl;
    std::cout <<newRegistration.userName <<std::endl;
    std::cout <<newRegistration.emailAddress <<std::endl;
    std::cout <<newRegistration.password<<std::endl;
}



