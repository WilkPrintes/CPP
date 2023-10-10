/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:39:41 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 00:33:26 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0){}
Fixed::Fixed(const int i){ this->setRawBits(i  * (1 << this->_fractBits));}
Fixed::Fixed(const float f){ this->setRawBits(round(f * (1 << this->_fractBits))); }
Fixed::Fixed(Fixed const &src) { this->_rawBits = src.getRawBits(); }
Fixed::~Fixed(void){ }

int Fixed::getRawBits(void) const { return (this->_rawBits); }
void Fixed::setRawBits(int const rawBits){ this->_rawBits = rawBits; }

float Fixed::toFloat(void) const { return ( ( this->getRawBits() / float(1 << this->_fractBits))); }
int Fixed::toInt(void) const { return (this->getRawBits() / (1 << this->_fractBits)); }

Fixed &Fixed::operator=(Fixed const &rhs){
    this->_rawBits = rhs.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed result(this->toFloat() + rhs.toFloat());
	return result;
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed result(this->toFloat() - rhs.toFloat());
	return result;
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed result(this->toFloat() * rhs.toFloat());
	return result;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed result(this->toFloat() / rhs.toFloat());
	return result;
}

bool Fixed::operator>(const Fixed &rhs) const { return ( this->toFloat() > rhs.toFloat() ? true : false); }
bool Fixed::operator<(const Fixed &rhs) const { return ( this->toFloat() < rhs.toFloat() ? true : false); }
bool Fixed::operator>=(const Fixed &rhs) const { return ( this->toFloat() >= rhs.toFloat() ? true : false); }
bool Fixed::operator<=(const Fixed &rhs) const { return ( this->toFloat() <= rhs.toFloat() ? true : false); }
bool Fixed::operator==(const Fixed &rhs) const { return ( this->toFloat() == rhs.toFloat() ? true : false); }
bool Fixed::operator!=(const Fixed &rhs) const { return ( this->toFloat() != rhs.toFloat() ? true : false); }

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
    this->_rawBits++;
    return (temp);
}

Fixed &Fixed::operator++(){
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
    this->_rawBits--;
    return (temp);
}

Fixed &Fixed::operator--(){
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b ? a : b); }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return (a < b ? a : b); }

Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b ? a : b); }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b ? a : b); }

std::ostream &operator << (std::ostream &o, const Fixed &fixed){
    o << fixed.toFloat();
    return (o);
}
