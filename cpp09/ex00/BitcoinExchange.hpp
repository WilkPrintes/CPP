/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:39:21 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/28 21:45:58 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <map>
#include <cstdlib>
#include <ctime>

class BitcoinExchange
{
private:
    std::map<std::string, double> _dataBase;
    std::ifstream _dataFile;
    std::ifstream _inputFile;

    void openDb(void)
    {
        std::string line;

        this->_dataFile.open("data.csv");
        if (_dataFile.fail())
            throw std::runtime_error("Failed to open data file.");
        if (_dataFile.peek() == std::ifstream::traits_type::eof())
            throw std::runtime_error("Data file is empty");
        while (_dataFile.good())
        {
            getline(_dataFile, line);
            split(line, ',', this->_dataBase);
        }
    }
    void OpenInput(std::string path)
    {
        std::string line;

        _inputFile.open(path.c_str());
        if (_inputFile.fail())
            throw std::runtime_error("problem in open input file");
        if (_inputFile.peek() == std::ifstream::traits_type::eof())
            throw std::runtime_error("input file in empty");
        while (_inputFile.good())
        {
            getline(_inputFile, line);
            showBtc(_dataBase, line);
        }
    }
    void split(std::string str, const char delimiter, std::map<std::string, double> &result)
    {
        std::string key;
        std::string value;
        size_t i = str.find(delimiter);
        char r = 'a';

        if (str[i] != *str.end())
        {
            key = str.substr(0, i);
            value = str.substr(i + 1, str.length() - i);
            if (result[key])
                result[key + r++] = std::strtod(value.c_str(), NULL);
            else
                result[key] = std::strtod(value.c_str(), NULL);
        }
    }
    bool validDate(std::map<std::string, std::string> data)
    {
        int year = atoi(data["year"].c_str());
        int month = atoi(data["month"].c_str());
        int day = atoi(data["day"].c_str());
        std::string error = data["year"] + "-" + data["month"] + "-" + data["day"];
        time_t now = time(0);
        tm *ltm = localtime(&now);

        if (day > 31 || day < 1)
        {
            std::cout << "invalid day: " << error << std::endl;
            return (false);
        }
        else if (month > 12 || month < 1)
        {
            std::cout << "invalid month: " << error << std::endl;
            return (false);
        }
        else if (year < 2008 && month < 10 && day < 31)
        {
            std::cout << "bitcoin doesn't exist yet (you're a time traveler? :O)" << std::endl;
            return (false);
        }
        else if (year >= 1900 + ltm->tm_year && month >= ltm->tm_mon && day > ltm->tm_mday)
        {
            std::cout << "invalid date: date in future (do you have a tardis?)" << std::endl;
            return (false);
        }
        else if ((year % 400 != 0) || (year % 4 != 0 && year % 100 == 0))
        {
            if (month == 2 && day == 29)
            {
                std::cout << "invalid date: not a Leap Year : " << error << std::endl;
                return (false);
            }
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
        {
            std::cout << "invalid date: month with 30 days : " << error << std::endl;
            return (false);
        }
        return (true);
    }

    void findDate(std::string date, std::map<std::string, double> data, double value)
    {
        std::map<std::string, std::string> result;
        std::map<std::string, double>::iterator it;
        const std::string keys[] = {"year", "month", "day"};
        std::string temp = "";
        int index = 0;

        if (date.find('-') > date.size())
            return;
        for (size_t i = 0; date[i]; i++)
        {
            if (date[i] == '-')
            {
                result[keys[index++]] = temp;
                i++;
                temp = "";
            }
            temp = temp + date[i];
        }
        result[keys[index]] = temp;
        std::string less;
        if (validDate(result))
        {
            for (it = data.begin(); it != data.end(); it++)
            {
                if (it->first > date || it->first == date)
                {
                    break;
                }
                less = it->first;
            }
            std::cout << date << " -> " << value << " = " << (value * data[less]) << std::endl;
        }
    }
    void showBtc(std::map<std::string, double> data, std::string str)
    {
        size_t i = str.find('|');
        std::string key;
        std::string value;
        double temp;

        if (str == "date | value")
            return;
        if (!str[i])
        {
            std::cout << "invalid format: " << str << std::endl;
            return;
        }
        key = str.substr(0, i - 1);
        value = str.substr(i + 1, str.length() - i);
        temp = std::strtod(value.c_str(), NULL);
        if (data[key])
        {
            if (temp < 0 || temp > 1000)
                std::cout << "bitcoin out of range" << std::endl;
            else
                std::cout << key << " => " << temp << " = " << (temp * data[key]) << std::endl;
        }
        else
            findDate(key, data, temp);
    }
    BitcoinExchange &operator=(BitcoinExchange const &rhs)
    {
        std::cout << "BitcoinExchange: Copy assignment operator" << std::endl;
        if (this != &rhs)
        {
            this->_dataBase = rhs._dataBase;
        }
        return (*this);
    }

public:
    BitcoinExchange(void)
    {
        std::cout << "BitcoinExchange: Default constructor called" << std::endl;
        openDb();
    }

    BitcoinExchange(std::string inputFile)
    {
        std::cout << "BitcoinExchange: Constructor with parameter type called" << std::endl;
        openDb();
        OpenInput(inputFile);
    }
    BitcoinExchange(BitcoinExchange const &src)
    {
        std::cout << "BitcoinExchange: Copy constructor called" << std::endl;
        *this = src;
    }
    ~BitcoinExchange(void)
    {
        std::cout << "BitcoinExchange: Destructor called" << std::endl;
        _dataFile.close();
        _inputFile.close();
    }
};

#endif