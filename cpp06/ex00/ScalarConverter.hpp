/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:27:44 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/15 20:35:30 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

# include <iostream>

class ScalarConverter
{
private:
    static char _char;
    static long int _int;
    static float _float;
    static double _double;
    static std::string _pseudoLiterals[6];
    static int _type;
    static double _rangerChecker;

    ScalarConverter(void);
    ScalarConverter(ScalarConverter const &src);
    ~ScalarConverter(void);
    
    static void getType(std::string str);
    static bool isPseudo(std::string str);

    static bool isNumber(const std::string s);
    static bool isFloat(const std::string s);
    static bool isDouble(const std::string s);

    static void setInt(std::string s);
    static void setChar(std::string s);
    static void setFloat(std::string s);
    static void setDouble(std::string s);

    static void printValues(void);
    static void printInt(void);
    static void printChar(void);
    static void printFloat(void);
    static void printDouble(void);
    
    ScalarConverter &operator=(ScalarConverter const &rhs);
public:

    static void convert(std::string const str);

};

#endif
