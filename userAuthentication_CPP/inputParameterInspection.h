
#ifndef USERAU_INPUTPARAMETERINSPECTION_H
#define USERAU_INPUTPARAMETERINSPECTION_H
#include <string>
#include <vector>
#include <iostream>

enum userInput
{
    REGISTER,
    LOGIN,
    WRONG_INPUT
};

userInput parameterInspection(std::string input);

#endif