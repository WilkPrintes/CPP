/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:15:49 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:16:26 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void){
    std::cout << "Default construtor for AAnimal Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src){
    this->setType(src.getType());
    std::cout << "Copy construtor for AAnimal Called" << std::endl;
}

AAnimal::~AAnimal(void){
    std::cout << "Destrutor for AAnimal Called" << std::endl;
}

void AAnimal::setType(std::string type) { 
    this->_type = type;
}

std::string AAnimal::getType(void) const {
    return (this->_type);
}

void AAnimal::makeSound(void) const {
	std::cout << "AAnimal SOUND!" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs){
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    
    if (this == &rhs)
        return (*this);
    this->setType(rhs.getType());
    return (*this);
}