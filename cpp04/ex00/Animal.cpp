/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:15:49 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:16:26 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void){
    std::cout << "Default construtor for Animal Called" << std::endl;
}

Animal::Animal(Animal const &src){
    this->setType(src.getType());
    std::cout << "Copy construtor for Animal Called" << std::endl;
}

Animal::~Animal(void){
    std::cout << "Destrutor for Animal Called" << std::endl;
}

void Animal::setType(std::string type) { 
    this->_type = type;
}

std::string Animal::getType(void) const {
    return (this->_type);
}

void Animal::makeSound(void) const {
	std::cout << "ANIMAL SOUND!" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs){
    std::cout << "Animal copy assignment operator called" << std::endl;
    
    if (this == &rhs)
        return (*this);
    this->setType(rhs.getType());
    return (*this);
}