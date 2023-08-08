/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:40:10 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/08 14:14:16 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::_debug(void){
    std::cout << "\033[0;30m[DEBUG]: a debug message\e[0m" << std::endl; 
}

void Harl::_info(void){
    std::cout << "\033[0;36m[INFO]: a info message\e[0m" << std::endl; 
}

void Harl::_warning(void){
    std::cout << "\033[0;33m[WARNING]: warning message\e[0m" << std::endl; 
}

void Harl::_error(void){
    std::cout << "\033[1;31m[ERROR]: messagem de error\e[0m" << std::endl; 
}

Harl::Harl(void){

}

Harl::~Harl(void){
    
}

void Harl::complain(std::string level){
    void (Harl::*function[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    const std::string levels[] = {"debug", "info", "warning", "error", "invalid"};
    int i = 0;

    while (levels[i] != "invalid" && levels[i] != level)
        i++;
    if (levels[i] == "invalid"){
        std::cout << "[INVALID] invalid level" << std::endl;
        return ;
    }
    (this->*function[i])();
}