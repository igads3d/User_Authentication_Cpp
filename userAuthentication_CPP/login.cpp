//
// Created by Nemeth Tamas on 2019-07-30.
//

#include "login.h"

Login::Login(alreadyUser_t user)
{
    alreadyUser = user;
}

void Login::loginUser()
{

    std::cout << "Please enter your 'username' and your 'password' to login!\n\n"<<std::endl;

    std::cout<<"username: ";
    std::cin>> alreadyUser.userName;

    std::cout<<std::endl;

    std::cout<<"password: ";
    std::cin>> alreadyUser.password;

    std::cout<<std::endl;

    std::cout<< "Welcome " << alreadyUser.userName<<"!"<<std::endl;


}

