#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

/*

*/
int precedence (char c);

/*

*/
bool isOperator (char c);

/*

*/
bool validate (std::string s);

/*

*/
std::string postfix (std::string s);

/*

*/
std::string standardize (std::string s);

/*

std::string calculate (std::string s);

#endif  // CALCULATOR_H
