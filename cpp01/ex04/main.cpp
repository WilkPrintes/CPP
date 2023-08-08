/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:44:36 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/05 11:15:34 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace(std::ifstream &file, std::string s1, std::string s2, std::string fileName)
{
    std::string line;
    size_t found = 0;
    size_t pos = 0;
    std::ofstream outfile((fileName + ".replace").c_str());

    while (getline(file, line))
    {
        while (found < std::string::npos)
        {
            found = line.find(s1, pos);
            if (found > line.length())
            {
                outfile << line;
                found = 0;
                pos = 0;
                break;
            }
            outfile << line.substr(0, found) << s2;
            line = line.substr(found + s1.length(), line.length());
        }
        outfile << std::endl;
    }
}

void openFile(std::string fileName, std::string s1, std::string s2)
{
    std::ifstream file(fileName.c_str());
    
    if (!file.is_open())
    {
        std::cout << fileName << " not found" << std::endl;
        file.close();
        return;
    }
    replace(file, s1, s2, fileName);
    file.close();
}

int main(int argc, char *argv[])
{
    std::string fileName;

    if (argc != 4)
    {
        std::cout << "Please insert the arguments fileName, s1 and s2" << std::endl;
        return (0);
    }
    fileName = argv[1];
    openFile(fileName, argv[2], argv[3]);
}
