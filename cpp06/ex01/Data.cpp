/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:14:21 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/15 18:33:34 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : name("nameless"), age(0)
{
    std::cout << "Data default constructor called" << std::endl;
}

Data::Data(std::string name, int age) : name(name), age(age)
{
    std::cout << "Data parametric constructor called" << std::endl;
}

Data::Data(Data const &src)
{
    *this = src;
    std::cout << "Data copy constructor called" << std::endl;
}

Data::~Data(void)
{
    std::cout << "Data destructor called" << std::endl;
}

Data &Data::operator=(Data const &rhs)
{
    if (this == &rhs)
        return (*this);

    this->name = rhs.name;
    this->age = rhs.age;

    return *this;
}

std::ostream &operator<<(std::ostream &o, Data const &rhs)
{
    o << rhs.name << ", " << rhs.age;
    return (o);
}
