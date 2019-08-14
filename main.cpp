#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "inputParameterInspection.h"
#include "registration.h"
#include "login.h"
#include "sqlite3.h"

int main()
{
    newUser_t testUserRegister;
    alreadyUser_t testUserLogin;

    Registration userRegister(testUserRegister);
    Login userLogin(testUserLogin);
    //----------------------------------------------

    std::string userAnswer;

    std::cout<< "\nPlease welcome in my User Authetication project, let's get started!\n\nPlease enter if you want to"
                " 'register' or 'login' !"<<std::endl;
    std::cin>>userAnswer;

    switch(parameterInspection(userAnswer))
    {
        case REGISTER :
            userRegister.registerNewUser();
            break;
        case LOGIN :
            userLogin.loginUser();
            break;
        case WRONG_INPUT :
             std::cout<< "WRONG FEATURE"<<std::endl;
            break;
        default :
             std::cout<< "HI"<<std::endl;
            break;
    }

    return 0;
}
