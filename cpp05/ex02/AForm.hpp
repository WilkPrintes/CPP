/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:16:11 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/14 12:18:30 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int 			_gradeExecute;	
	
	public:
		AForm(void);
		AForm(const std::string name, const int gradeSign, const int gradeExecute);
		AForm(AForm const &src);
		virtual ~AForm(void);

		std::string getName(void) const;
		int getGradeSign(void) const;
		int getGradeExecute(void) const;
		bool getSigned(void) const;
		void setSigned(bool s);
		
		void beSigned(Bureaucrat &bureaucrat);
		void checkExecute(Bureaucrat const &bureaucrat) const;
		virtual int execute(Bureaucrat const &executor) const = 0; 

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
	
		class NotSignedException: public std::exception
		{
			public:
				const char *what() const throw(); 	
		};

		AForm &operator=(AForm const &rhs);
};

#endif