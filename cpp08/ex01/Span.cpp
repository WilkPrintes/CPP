/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:44:53 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/18 15:23:15 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _max(0)
{
    std::cout << "Span: Default constructor called" << std::endl;
}

Span::Span(int max) : _max(max)
{
    std::cout << "Span: constructor with parameters called" << std::endl;
}

Span::Span(Span const &src) : _max(src._max)
{
    std::cout << "Span: copy constructor called" << std::endl;

    for (std::vector<int>::iterator it; it != src._elements.end(); it++)
    {
        this->_elements.push_back(*it);
    }
}

Span::~Span(void)
{
    std::cout << "Span: destructor called" << std::endl;
}

void Span::addNumber(int element)
{

    if (_elements.size() > _max)
        throw OutOfRange();
    _elements.push_back(element);
}

void Span::addMoreNumber(size_t size, ...){

    va_list args;
    int element;

    va_start(args, size);
    if (_elements.size() + size > this->_max)
        throw OutOfRange();

    for(size_t i = 0; i < size; i++){
        element = va_arg(args, int);
        addNumber(element);
    }
}

int Span::longestSpan(void)
{
    std::vector<int>::iterator max;
    std::vector<int>::iterator min;

    if (this->_elements.size() < 2)
        throw ElementsInsufficient();

    max = std::max_element(_elements.begin(), _elements.end());
    min = std::min_element(_elements.begin(), _elements.end());

    return (*max - *min);
}

int Span::shortestSpan(void)
{
    int min;

    if (this->_elements.size() < 2)
        throw ElementsInsufficient();

    std::sort(_elements.begin(), _elements.end());

    min = _elements.at(1) - _elements.at(0);
    for (size_t i = 1; i + 1 < _elements.size(); i++)
    {
        if (min > _elements.at(i + 1) - _elements.at(i))
            min = _elements.at(i + 1) - _elements.at(i);
    }
    return (min);
}

const char *Span::OutOfRange::what() const throw()
{
    return ("Out of Range\n");
}

const char *Span::ElementsInsufficient::what() const throw()
{
    return ("Elements Insufficient for this action\n");
}