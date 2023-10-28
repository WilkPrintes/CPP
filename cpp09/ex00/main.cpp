#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <map>
#include <cstdlib>
#include <ctime>

void ft_split(std::string str, const char delimiter, std::map<std::string, double> &result)
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

void keys(std::map<std::string, double> result)
{
    for (std::map<std::string, double>::iterator it = result.begin(); it != result.end(); it++)
    {
        std::cout << "key: |" + it->first << std::endl;
    }
}

std::string ft_itoa(int value)
{
    std::string result;
    int temp = value;
    int decimal = 0;
    int dec = 1;

    while (temp > 0)
    {
        temp = temp / 10;
        dec = dec * 10;
        decimal++;
    }
    dec = dec / 10;
    while (dec > 0)
    {
        result.push_back((value / dec) + '0');
        value = value % dec;

        dec = dec / 10;
    }
    return (result);
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
    if (!str[i]){
        std::cout << "invalid format: " << str << std::endl;
        return ;
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

int main(int argc, char *argv[])
{

    std::ifstream dataFile;
    std::ifstream inputFile;
    std::string line;
    std::map<std::string, double> data;
    // std::map<std::string, double> input;

    if (argc != 2){
        std::cout << "invalid numbers of parameters" << std::endl;
        return (-1);
    }

    dataFile.open("data.csv");
    while (dataFile.good())
    {
        getline(dataFile, line);
        ft_split(line, ',', data);
    }
    inputFile.open(argv[1]);
    if (inputFile.fail()){
        std::cout << "problem in open input file" << std::endl;
        return (-1);
    }
    if (inputFile.peek() == std::ifstream::traits_type::eof()){
        std::cout << "input file in empty" << std::endl;
        return (-1);
    }
    while (inputFile.good())
    {
        getline(inputFile, line);
        showBtc(data, line);
    }
    dataFile.close();
    // std::cout << ft_itoa(1234) << std::endl;
}