/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:10:06 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/24 10:19:30 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
    MutantStack(void) : std::stack<T>()
    {
        std::cout << "Default constuctor called" << std::endl;
    }
    MutantStack(MutantStack const &src) : std::stack<T>(src)
    {
        std::cout << "Copy constuctor called" << std::endl;
    }
    ~MutantStack(void)
    {
        std::cout << "Destuctor called" << std::endl;
    }

    MutantStack &operator=(MutantStack const &rhs)
    {
        std::cout << "Copy assignment operator" << std::endl;

        if (this != &rhs)
        {
            std::stack<T>::operator=(rhs);
        }

        return (*this);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin(void){
        return (this->c.begin());
    }

    iterator end(void){
        return (this->c.end());
    }

};

#endif