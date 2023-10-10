/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:46:10 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:18:20 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
    std::cout << "Default construtor for Cat" << std::endl;
    this->setType("Cat");
}

Cat::Cat(Cat const &src): Animal() {
    std::cout << "Copy construtor for Cat" << std::endl;
    this->setType(src.getType());
}

Cat::~Cat(){
    std::cout << "Destrutor for Cat" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Miaw 😺" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs){
    if (this == &rhs)
        return (*this);
    this->setType(rhs.getType());
    return (*this);
}