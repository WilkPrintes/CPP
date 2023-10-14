/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:57:07 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/10/14 16:55:26 by wprintes         ###   ########.fr       */
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

AForm *Intern::makeForm(const std::string name, const std::string target) const
{
	std::string nameForm[3] = {"shrubbery creation", "robotomy request", "presidential pardon" };

	for (int i = 0; i < 3; i++){
		if (nameForm[i].compare(name) == 0){
			switch (i)
			{
			case 0:
				return (new ShrubberyCreationForm(target));
				break;
			case 1:
				return (new RobotomyRequestForm(target));
				break;
			case 2:
				return (new PresidentialPardonForm(target));
				break;
			default:
				break;
			}
		}
	}
	throw InvalidFormException();
	return (NULL);
}

const char *Intern::InvalidFormException::what() const throw()
{
	return ("Invalid form!");
}