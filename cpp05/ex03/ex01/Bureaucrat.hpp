/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:24:56 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/12 14:05:45 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
    
public:
    Bureaucrat(void);
    Bureaucrat(int grade, std::string name);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat();

    int getGrade(void) const;
    std::string getName(void) const;

    void setRange(int range);
    void setName(std::string name);

    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(Form &form);

    class GradeTooHighException: public std::exception {
        public:
            const char *what() const throw();
    };

    class GradeTooLowException: public std::exception {
        public:
            const char *what() const throw();
    };

    Bureaucrat &operator=(Bureaucrat const &hrs);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat);

#endif