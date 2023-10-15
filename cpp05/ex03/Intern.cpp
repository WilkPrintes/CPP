/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:57:07 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/10/14 21:03:47 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern: Destructor called" << std::endl;
}
	
AForm *Intern::_shrubbery(const std::string target) const{
	std::cout << "Intern creates Shrubbery Creation Form" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::_robotomy(const std::string target) const{
	std::cout << "Intern creates Robotomy Request Form" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm *Intern::_presidential(const std::string target) const{
	std::cout << "Intern creates Presidential Pardon Form" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string name, const std::string target) const
{
	std::string nameForm[3] = {"shrubbery creation", "robotomy request", "presidential pardon" };
	AForm *(Intern::*f[3])(const std::string) const ={
		&Intern::_shrubbery,
		&Intern::_robotomy,
		&Intern::_presidential
	};

	for (int i = 0; i < 3; i++)
	{
		if (nameForm[i].compare(name) == 0)
			return ((this->*f[i])(target));
	}
	throw InvalidFormException();
	return (NULL);
}

const char *Intern::InvalidFormException::what() const throw()
{
	return ("Invalid form!");
}