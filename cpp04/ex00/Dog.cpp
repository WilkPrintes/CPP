/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:38:00 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:18:33 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
    std::cout << "Default construtor for Dog" << std::endl;
    this->setType("Dog");
}

Dog::Dog(Dog const &src): Animal() {
    std::cout << "Copy construtor for Dog" << std::endl;
    this->setType(src.getType());
}

Dog::~Dog(){
    std::cout << "Destrutor for Dog" << std::endl;
}

void Dog::makeSound(void)const {
    std::cout << "Au Au 🐶" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs){
    if (this == &rhs)
        return (*this);
    this->setType(rhs.getType());
    return (*this);
}