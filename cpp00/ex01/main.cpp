/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:45:24 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/01 15:36:29 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

int main(void){
    std::string command;
    Phonebook phonebook;

    std::cout << "$: ";
    while (getline(std::cin, command)){
        if (command == "exit")
            break;
        else if (command == "add")
            phonebook.add();
        else if (command == "search"){
            phonebook.search();
        }
        else
            std::cout << "Invalid command" << std::endl;
        std::cout << "$: ";
    }
}