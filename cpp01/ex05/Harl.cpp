/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:40:10 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/07 22:18:23 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::_debug(void){
    std::cout << "[DEBUG]: messagem de debug" << std::endl; 
}

void Harl::_info(void){
    std::cout << "[INFO]: messagem de info" << std::endl; 
}

void Harl::_warning(void){
    std::cout << "\033[1;31m[WARNING]: warning message\033[0m" << std::endl; 
}

void Harl::_error(void){
    std::cout << "[ERROR]: messagem de error" << std::endl; 
}

Harl::Harl(void){

}

Harl::~Harl(void){
    
}

void Harl::complain(std::string level){
    void (Harl::*function[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    const std::string levels[] = {"debug", "info", "warning", "error", "NULL"};
    int i = 0;

    while (levels[i] != "NULL" && levels[i] != level)
        i++;
    if (levels[i] == "NULL"){
        std::cout << "invalid level" << std::endl;
        return ;
    }
    (this->*function[i])();
}