/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:30:32 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/01 09:30:32 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_rawBits = src.getRawBits();
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_rawBits);
}

void Fixed::setRawBits(int const rawBits){
    this->_rawBits = rawBits;
}

Fixed &Fixed::operator=(Fixed const &rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_rawBits = rhs.getRawBits();
    return *this;
}