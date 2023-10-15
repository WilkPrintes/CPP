/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:17:19 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/15 00:03:57 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

#include <cstdlib>
#include <climits>
#include <string>
#include <iomanip>

char ScalarConverter::_char = 0;
int ScalarConverter::_int = 0;
float ScalarConverter::_float = 0;
double ScalarConverter::_double = 0;
std::string ScalarConverter::pseudoLiterals[6] = {
    "-inff",
    "+inff",
    "nanf",
    "+inf",
    "-inf",
    "nan"};

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void)
{
}

bool ScalarConverter::isPseudo(std::string str)
{
    for (int i = 0; i < 6; i++)
    {
        if (pseudoLiterals[i].compare(str) == 0)
            return (true);
    }
    return (false);
}

bool ScalarConverter::isNumber(const std::string s)
{
    std::string::const_iterator it = s.begin();

    while (it != s.end() && std::isdigit(*it))
        ++it;
    return !s.empty() && it == s.end();
}
bool ScalarConverter::isFloat(const std::string s)
{
    int point = 0;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (!std::isdigit(s[i]))
        {
            if (s[i] == '.')
                point++;
            else
                return (false);
        }
    }
    if (point == 0 || point > 1)
        return (false);
    return (true);
}

bool ScalarConverter::isDouble(const std::string s)
{
    int point = 0;

    std::string::const_iterator it = s.begin();

    if (s[s.length() - 1] != 'f')
        return (false);

    while (it != s.end() - 1)
    {
        if (!std::isdigit(*it))
        {
            if (*it == '.')
                point++;
            else
                return (false);
        }
        ++it;
    }
    if (point == 0 || point > 1)
        return (false);
    return (true);
}

void ScalarConverter::setInt(std::string s)
{
    _int = atoi(s.c_str());
    _char = static_cast<char>(_int);
    _float = static_cast<float>(_int);
    _double = static_cast<double>(_int);
}

void ScalarConverter::setChar(std::string s)
{
    _int = static_cast<int>(s[0]);
    _char = static_cast<char>(_int);
    _float = static_cast<float>(_int);
    _double = static_cast<double>(_int);
}

void ScalarConverter::setDouble(std::string s)
{
    _double = strtod(s.c_str(), NULL);
    _char = static_cast<char>(_double);
    _int = static_cast<float>(_double);
    _float = static_cast<double>(_double);
}

void ScalarConverter::setFloat(std::string s)
{
    _float = strtof(s.c_str(), NULL);
    _char = static_cast<char>(_float);
    _int = static_cast<float>(_float);
    _double = static_cast<double>(_float);
}

void ScalarConverter::getType(std::string str)
{
    if (str.length() == 1 && !isdigit(str[0]))
        setChar(str);
    else if (ScalarConverter::isNumber(str))
        setInt(str);
    else if (ScalarConverter::isFloat(str))
        setFloat(str);
    else if (ScalarConverter::isDouble(str))
        setDouble(str);
    else if (ScalarConverter::isPseudo(str)){
        printPseudo();
        return ;
    }
    else
    {
        std::cout << "invalid arg type" << std::endl;
        return;
    }

    printValues();
}

void ScalarConverter::printInt(void)
{
    if (_int < INT_MIN || _int > INT_MAX)
        std::cout << "int: imposible" << std::endl;
    else
        std::cout << "int: " << _int << std::endl;
}

void ScalarConverter::printPseudo(void){
    std::cout << "char: imposible" << std::endl;
    std::cout << "int: imposible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void ScalarConverter::printChar(void)
{
    if (_char < 0 || _char >= CHAR_MAX)
        std::cout << "char: Imposible" << std::endl;
    else if (!isprint(_char))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << _char << std::endl;
}

void ScalarConverter::printFloat(void){
    std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << _float << "f" << std::endl;
}

void ScalarConverter::printDouble(void) {
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "double: " << _double << std::endl;
}

void ScalarConverter::printValues(void)
{
    printChar();
    printInt();
    printFloat();
    printDouble();

}

void ScalarConverter::convert(std::string const str)
{
    getType(str);
}