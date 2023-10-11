/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:15:49 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:28:44 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
    std::cout << "Default construtor for Wrong Animal Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
    this->setType(src.getType());
    std::cout << "Copy construtor for Wrong Animal Called" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "Destrutor for Wrong Animal Called" << std::endl;
}

void WrongAnimal::setType(std::string type) { 
    this->_type = type;
}

std::string WrongAnimal::getType(void) const {
    return (this->_type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal SOUND!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs){
    std::cout << "Wrong Animal copy assignment operator called" << std::endl;
    
    if (this == &rhs)
        return (*this);
    this->setType(rhs.getType());
    return (*this);
}