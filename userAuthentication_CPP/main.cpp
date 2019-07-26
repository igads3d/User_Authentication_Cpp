#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "inputParameterInspection.h"


int main(){

    std::string userAnswer;

    std::cout<< "Please welcome in my User Authetication project, let's get started!\nPlease enter if you want to 'register' or 'login' !"<<std::endl;
    std::cin>>userAnswer;

    switch(parameterInspection(userAnswer))
    {
        case REGISTER :
            std::cout<< "WANT TO REGISTER"<<std::endl;
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