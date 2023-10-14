/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:30:47 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/12 14:05:15 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int 			_gradeExecute;
	
	public:
		Form(void);
		Form(const std::string name, const int gradeSign, const int _gradeExecute);
		Form(Form const &copy);
		~Form(void);

		std::string getName(void) const;

		int getGradeSign(void) const;

		int getGradeExecute(void) const;

		bool getSigned(void) const;
		void setSigned(bool s);
		
		Form &operator=(Form const &rhs);

		void beSigned(Bureaucrat &bureaucrat); 

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw(); 	
		}; 

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw(); 	
		}; 
};

std::ostream &operator<<(std::ostream &o, Form const &form);

#endif