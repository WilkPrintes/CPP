/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:16:37 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/14 14:51:51 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):AForm("Robot", 72, 45), _target("Robot")
{
	std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target, 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm: Constructor with parameter called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):AForm()
{
	std::cout << "RobotomyRequestForm: Copy constructor called" << std::endl;
	*this =  src;	
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	std::cout << "RobotomyRequestForm: Copy assignment operator" << std::endl;
	if (this == &rhs)
		return (*this);
		
	this->_target = rhs._target;
	return (*this);

}

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkExecute(executor);
	std::srand(std::time(0));
	std::cout << "Drilling noises... ";
	if(rand() % 2)
	{
		std::cout <<  this->_target <<" has been robotomized successfully " << std::endl;
		return (1);
	}	
	else 
	{
		std::cout <<  this->_target <<" fail to be robotized" << std::endl;
		return (2);
	}
}