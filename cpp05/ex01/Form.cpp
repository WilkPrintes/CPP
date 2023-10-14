/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:32:04 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/12 14:07:54 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):_name("Form"), _signed(false), _gradeSign(120), _gradeExecute(90)
{
	std::cout << "Default constructor for Form called" << std::endl;
}

Form::Form(const std::string name, const int gradeSign,const int _gradeExecute):_name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(_gradeExecute)
{
	std::cout << "Constructor for " << name << " form with parameter called" << std::endl;
	
	if(this->_gradeSign < 1 || this->_gradeExecute < 1)
		throw GradeTooHighException();
	if(this->_gradeSign > 150 || this->_gradeExecute > 150)
		throw GradeTooLowException();
}
	
Form::Form(Form const &copy):_name(copy._name),  _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{
	std::cout << "Form: Copy constructor called" << std::endl;
	*this = copy;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}


Form &Form::operator=(Form const &rhs)
{
	std::cout << "Form Copy assignment operator" << std::endl;

	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

bool Form::getSigned(void) const
{
	return (this->_signed);
}

void Form::setSigned(bool s) 
{
	this->_signed = s;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}


const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too hight\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}

std::ostream &operator<<(std::ostream &o, Form const &form)
{
	if(form.getSigned())
		o << form.getName() << " is signed, grade sign " << form.getGradeSign() << ", grade execute " << form.getGradeExecute() <<"." << std::endl;
	else
		o << form.getName() << " is not signed, grade sign " << form.getGradeSign() << ", grade execute " << form.getGradeExecute() <<"." << std::endl;
	return (o);
} 