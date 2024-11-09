#include <sqlite3.h>
#include <iostream>
#include <fstream>
#include "constants.cpp"
#include "databaseCreator.cpp"
#include <sstream>
#include <fmt/core.h>

std::string result = "";


template <typename... Strings>
std::string* buildInsertQuery(Strings... strings) {
    std::cout << "entered result" << std::endl;
    ((result += " " + strings), ...);
    return &result;  
}


int main () {

    // initializeGlobals();

    auto a = fmt::format("{:s}", "I am not a number");
    std::cout << a << std::endl;

    std::string s1 = "Hello";
    std::string s2 = "world";
    std::string s3 = "from";
    std::string s4 = "C++";

    std::string *q1 = buildInsertQuery(s1, s2, s3);
    std::cout << "&q1: " << q1 << std::endl;
    std::string *q2 = buildInsertQuery(s1, s2, s3);
    std::cout << "result is: " << (q1 == q2) << " " << std::endl;

    std::cout << q1 << " == " << q2;




}


