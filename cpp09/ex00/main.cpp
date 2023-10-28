#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <map>
#include <cstdlib>

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
    for (std::map<std::string, double>::iterator it = result.end(); it != result.begin(); it--)
    {
        std::cout << "key: |" + it->first << std::endl; 
    }
}

void findDate(std::string date){
    std::map<std::string, std::string> result;
    const std::string keys[] = {"year", "mouth", "day"};
    std::string temp = "";
    int index = 0;

    if (date.find('-') > date.size())
        return ;
    for (size_t i = 0; date[i]; i++){
        if (date[i] == '-'){
            result[keys[index++]] = temp;
            i++;
            temp = "";
        }
        temp = temp + date[i];
    }
    result[keys[index++]] = temp;
    std::cout << result["year"] << "/" << result["mouth"] << "/" << result["day"]<< std::endl;
}

void splitDate(std::string date, std::map<std::string, double> &dates){
    std::cout << date << std::endl;
    dates.at(0);
}

void showBtc(std::map<std::string, double> data, std::string str)
{
    size_t i = str.find('|');
    std::string key;
    std::string value;
    double temp;

    if (str[i])
    {
        key = str.substr(0, i - 1);
        value = str.substr(i + 1, str.length() - i);
        if (data[key]){
            temp = std::strtod(value.c_str(), NULL);
            std::cout << "|" + key + "|" << ": " << (temp * data[key]) << std::endl;
        }else
            findDate(key);
    }
}

int main(void)
{

    std::ifstream dataFile;
    std::ifstream inputFile;
    std::string line;
    std::map<std::string, double> data;
    // std::map<std::string, double> input;

    dataFile.open("data.csv");
    while (dataFile.good())
    {
        getline(dataFile, line);
        ft_split(line, ',', data);
    }
    inputFile.open("input.txt");
    
    while (inputFile.good())
    {
        getline(inputFile, line);
        showBtc(data, line);
    }
    dataFile.close();
}