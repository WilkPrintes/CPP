/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:37:52 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 10:34:06 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor" << std::endl;

    for (int i = 0; i < 100; i++)
		this->_ideas[i] = "thinking thoughts";
}

Brain::Brain(std::string idea){
    std::cout << "Brain idea constructor" << std::endl;
    for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

Brain::Brain(Brain const &src){

    std::cout << "Brain copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain::~Brain(){
    std::cout << "Brain destructor" << std::endl;
}

void Brain::showIdea(void) const{
    for (int i = 0; i < 100; i++)
        std::cout << this->_ideas[i] << std::endl;
}

void Brain::setIdea(int index, std::string idea){
    if (index < 0 || index > 100){
        std::cout << "index invalid" << std::endl;
        return ;
    }
    this->_ideas[index] = idea;
}

Brain &Brain::operator=(Brain const &rhs){

    std::cout << "Brain assigned copy" << std::endl;
    if (this == &rhs){
        return (*this);
    }
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
    return (*this);
}