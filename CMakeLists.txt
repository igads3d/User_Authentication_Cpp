cmake_minimum_required(VERSION 3.14)
project(userAu)

set(CMAKE_CXX_STANDARD 14)

add_executable(userAu main.cpp inputParameterInspection.cpp inputParameterInspection.h userDetails.h registration.cpp registration.h login.cpp login.h registrationIntoDatabase.cpp registrationIntoDatabase.h loginFromDatabase.cpp loginFromDatabase.h)
target_link_libraries(userAu LINK_PUBLIC sqlite3)