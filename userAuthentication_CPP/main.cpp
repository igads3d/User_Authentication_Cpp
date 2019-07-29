#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "inputParameterInspection.h"
#include "registration.h"

int main()
{
    // Test Users-----------------------------------
    user_t gipszJakab;
    gipszJakab.fullName = "Gipsz Jakab";
    gipszJakab.userName = "gjakab";
    gipszJakab.emailAddress = "gjakab@gipsz.hu";
    gipszJakab.password = "password123";
    gipszJakab.confirmPassword = "password123";

    user_t testUser;

    Registration user(testUser);
    //----------------------------------------------

    std::string userAnswer;

    std::cout<< "Please welcome in my User Authetication project, let's get started!\nPlease enter if you want to"
                " 'register' or 'login' !"<<std::endl;
    std::cin>>userAnswer;

    switch(parameterInspection(userAnswer))
    {
        case REGISTER :
            user.registerNewUser();
            break;
        case LOGIN :
            std::cout<< "WANT TO LOGIN"<<std::endl;
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
