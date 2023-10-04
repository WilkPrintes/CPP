/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:39:41 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/04 13:33:51 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i){
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(i  * (1 << this->_fractBits));
}

Fixed::Fixed(const float f){
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(round(f * (1 << this->_fractBits)));
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_rawBits = src.getRawBits();
}

Fixed::~Fixed(void){
    std::cout << "Destructor Called" << std::endl;
}

int Fixed::getRawBits(void) const { return (this->_rawBits); }
void Fixed::setRawBits(int rawBits){ this->_rawBits = rawBits; }

float Fixed::toFloat(void) const { return ( ( this->getRawBits() / float(1 << this->_fractBits))); }
int Fixed::toInt(void) const { return (this->getRawBits() / (1 << this->_fractBits)); }

Fixed &Fixed::operator=(Fixed const &rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = rhs.getRawBits();
    return (*this); 
}

std::ostream &operator << (std::ostream &o, const Fixed &fixed){
    o << fixed.toFloat();
    return (o);
}
