#include "inputParameterInspection.h"


userInput parameterInspection(std::string input)
{
    std::string featureName = input;

    if (featureName == "register") {
        return REGISTER;
    } else if (featureName == "login") {
        return LOGIN;
    } else {
        return WRONG_INPUT;
    }

}
