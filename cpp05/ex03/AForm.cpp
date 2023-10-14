/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:16:06 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/14 15:25:07 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void):_name("AForm"), _signed(false), _gradeSign(120), _gradeExecute(90)
{
	std::cout << "Default constructor for AForm called" << std::endl;
}

AForm::AForm(const std::string name, const int gradeSign,const int gradeExecute):_name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	std::cout << "Constructor for AForm called" << std::endl;
	
	if(this->_gradeSign < 1 || this->_gradeExecute < 1)
		throw GradeTooHighException();
	if(this->_gradeSign > 150 || this->_gradeExecute > 150)
		throw GradeTooLowException();
}
	
AForm::AForm(AForm const &src):_name(src._name),  _signed(src._signed), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
	std::cout << "Copy constructor for AForm called" << std::endl;
	*this = src;
}

AForm::~AForm(void)
{
	std::cout << "Destructor for AAform called" << std::endl;
}

AForm &AForm::operator=(AForm const &rhs)
{
	std::cout << "Copy assignment operator for AAform" << std::endl;

	if (this == &rhs)
		return (*this);
	this->_signed = rhs._signed;
	return (*this);
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

int AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

bool AForm::getSigned(void) const
{
	return (this->_signed);
}

void AForm::setSigned(bool s) 
{
	this->_signed = s;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void  AForm::checkExecute(Bureaucrat const &bureaucrat) const
{
	if(bureaucrat.getGrade() > this->_gradeExecute)
		throw AForm::GradeTooLowException();
	if(!this->_signed)
		throw AForm::NotSignedException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too hight");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}


const char *AForm::NotSignedException::what() const throw()
{
	return ("Is not signed.");
}
