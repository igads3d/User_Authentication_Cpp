#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "userDetails.h"

#ifndef USERAU_LOGIN_H
#define USERAU_LOGIN_H


#include <string>

class Login {
public:
    Login(alreadyUser_t user);
    void loginUser();

private:
    alreadyUser_t alreadyUser;
};


#endif //USERAU_LOGIN_H
