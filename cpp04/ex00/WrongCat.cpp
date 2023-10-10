/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:46:10 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:31:21 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
    std::cout << "Default construtor for Wrong Cat" << std::endl;
    this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal() {
    std::cout << "Copy construtor for Wrong Cat" << std::endl;
    this->setType(src.getType());
}

WrongCat::~WrongCat(){
    std::cout << "Destrutor for Wrong Cat" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "not Miaw 🦊" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs){
    if (this == &rhs)
        return (*this);
    this->setType(rhs.getType());
    return (*this);
}