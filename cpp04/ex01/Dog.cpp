/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:38:00 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 11:19:47 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
    std::cout << "Default construtor for Dog" << std::endl;
    this->setType("Dog");
    this->_brain = new Brain("AU AU AU!!");
}

Dog::Dog(Dog const &src): Animal() {
    std::cout << "Copy construtor for Dog" << std::endl;
    this->setType(src.getType());
    this->_brain = new Brain(*src._brain);
}

Dog::~Dog(){
    std::cout << "Destrutor for Dog" << std::endl;
    delete this->_brain;
}

void Dog::makeSound(void)const {
    std::cout << "Au Au 🐶" << std::endl;
}

void Dog::setIdea(int index, std::string idea){
    this->_brain->setIdea(index, idea);
}

void Dog::showIdeas(void) {
    this->_brain->showIdea();
}

Dog &Dog::operator=(Dog const &rhs){
    if (this == &rhs)
        return (*this);
    this->setType(rhs.getType());
    this->_brain = new Brain(*rhs._brain);
    return (*this);
}