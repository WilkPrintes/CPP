/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:46:10 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 11:18:32 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal() {
    std::cout << "Default construtor for Cat" << std::endl;
    this->setType("Cat");
    this->_brain = new Brain("Miau Miau?");
}

Cat::Cat(Cat const &src): AAnimal() {
    std::cout << "Copy construtor for Cat" << std::endl;
    this->setType(src.getType());
    this->_brain = new Brain(*src._brain);
}

Cat::~Cat(){
    std::cout << "Destrutor for Cat" << std::endl;
    delete this->_brain;
}

void Cat::makeSound(void) const {
    std::cout << "Miaw 😺" << std::endl;
}

void Cat::setIdea(int index, std::string idea){
    this->_brain->setIdea(index, idea);
}

void Cat::showIdeas(void) {
    this->_brain->showIdea();
}

Cat &Cat::operator=(Cat const &rhs){
    if (this == &rhs)
        return (*this);
    this->setType(rhs.getType());
    this->_brain = new Brain(*rhs._brain);
    return (*this);
}