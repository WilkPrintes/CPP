/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:39:21 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/28 21:25:11 by wprintes         ###   ########.fr       */
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
public:
    BitcoinExchange(void);
    BitcoinExchange(std::string inputFile);
    BitcoinExchange(BitcoinExchange const &src);
    ~BitcoinExchange(void);

    bool validDate(std::map<std::string, std::string> data);
    void findDate(std::string date, std::map<std::string, double> data, double value);
    void showBtc(std::map<std::string, double> data, std::string str);
    void openDb(void);
    void split(std::string str, const char delimiter, std::map<std::string, double> &result);
    void OpenInput(std::string path);
    BitcoinExchange &operator=(BitcoinExchange const &hrs);
};

#endif