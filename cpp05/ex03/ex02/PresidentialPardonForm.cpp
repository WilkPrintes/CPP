/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:16:29 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/14 14:53:16 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):AForm("Presidential", 25, 5), _target("Presidential")
{
	std::cout << "PresidentialPardonForm: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm(target, 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm: Constructor with parameter called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src):AForm()
{
	std::cout << "PresidentialPardonForm: Copy constructor called" << std::endl;
	*this =  src;	
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm: Destructor called" << std::endl;
}


PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	std::cout << "PresidentialPardonForm: Copy assignment operator" << std::endl;
	
	if (this == &rhs)
		return (*this);

	this->_target = rhs._target;
	return (*this);
	
}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkExecute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return (1);
}