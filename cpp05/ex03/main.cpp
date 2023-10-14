/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:17:19 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/14 17:42:41 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void)
{
	{
		Intern intern;
		
		AForm *RRForm;
		AForm *SCForm;
		AForm *PPForm;
		
		std::cout << std::endl;
		std::cout << "== Wrong form test  == " << std::endl;
		std::cout << std::endl;

		try
		{
			RRForm = intern.makeForm("robotomy","Bi bop");
			std::cout << RRForm->getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			SCForm = intern.makeForm("creation", "trees");
			std::cout << SCForm->getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			PPForm = intern.makeForm("", "turkey bird");
			std::cout << PPForm->getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		std::cout << "== End wrong form test  == " << std::endl;
		std::cout << std::endl;
	}
	{
		Bureaucrat boss("boss", 1);

		Intern intern;
		
		AForm *RRForm;
		AForm *SCForm;
		AForm *PPForm;
		
		std::cout << std::endl;
		std::cout << "== Attempt to sign and execution  == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== Boss == " << std::endl; 
		std::cout << std::endl;
		try
		{
			RRForm = intern.makeForm("robotomy request","Bi bop");
			
			std::cout << std::endl;
			std::cout << "== Robotomy Request Form  == " << std::endl; 
			std::cout << std::endl;
			
			boss.signForm(*RRForm);

			std::cout << std::endl;

			boss.executeForm(*RRForm);
			std::cout << std::endl;
			delete RRForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			SCForm = intern.makeForm("shrubbery creation", "trees");
			std::cout << std::endl;
			std::cout << "== Shrubbery Creation Form  == " << std::endl; 
			std::cout << std::endl;

			boss.signForm(*SCForm);

			std::cout << std::endl;

			boss.executeForm(*SCForm);
			std::cout << std::endl;
			delete SCForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			PPForm = intern.makeForm("presidential pardon", "turkey bird");
			std::cout << std::endl;
			std::cout << "== Presidential Pardon Form  == " << std::endl; 
			std::cout << std::endl;

			boss.signForm(*PPForm);

			std::cout << std::endl;

			boss.executeForm(*PPForm);
			std::cout << std::endl;
			delete PPForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	{
		Bureaucrat employee("employee", 72);

		Intern intern;
		
		AForm *RRForm;
		AForm *SCForm;
		AForm *PPForm;
		
		std::cout << std::endl;
		std::cout << "== Attempt to sign and execution  == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== Boss == " << std::endl; 
		std::cout << std::endl;
		try
		{
			RRForm = intern.makeForm("robotomy request","Bi bop");
			
			std::cout << std::endl;
			std::cout << "== Robotomy Request Form  == " << std::endl; 
			std::cout << std::endl;
			
			employee.signForm(*RRForm);

			std::cout << std::endl;

			employee.executeForm(*RRForm);
			std::cout << std::endl;
			delete RRForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			SCForm = intern.makeForm("shrubbery creation", "trees");
			std::cout << std::endl;
			std::cout << "== Shrubbery Creation Form  == " << std::endl; 
			std::cout << std::endl;

			employee.signForm(*SCForm);

			std::cout << std::endl;

			employee.executeForm(*SCForm);
			std::cout << std::endl;
			delete SCForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			PPForm = intern.makeForm("presidential pardon", "turkey bird");
			std::cout << std::endl;
			std::cout << "== Presidential Pardon Form  == " << std::endl; 
			std::cout << std::endl;

			employee.signForm(*PPForm);

			std::cout << std::endl;

			employee.executeForm(*PPForm);
			std::cout << std::endl;
			delete PPForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	{
		Bureaucrat trainee("trainee", 140);

		Intern intern;
		
		AForm *RRForm;
		AForm *SCForm;
		AForm *PPForm;
		
		std::cout << std::endl;
		std::cout << "== Attempt to sign and execution  == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== Boss == " << std::endl; 
		std::cout << std::endl;
		try
		{
			RRForm = intern.makeForm("robotomy request","Bi bop");
			
			std::cout << std::endl;
			std::cout << "== Robotomy Request Form  == " << std::endl; 
			std::cout << std::endl;
			
			trainee.signForm(*RRForm);

			std::cout << std::endl;

			trainee.executeForm(*RRForm);
			std::cout << std::endl;
			delete RRForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			SCForm = intern.makeForm("shrubbery creation", "trees");
			std::cout << std::endl;
			std::cout << "== Shrubbery Creation Form  == " << std::endl; 
			std::cout << std::endl;

			trainee.signForm(*SCForm);

			std::cout << std::endl;

			trainee.executeForm(*SCForm);
			std::cout << std::endl;
			delete SCForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			PPForm = intern.makeForm("presidential pardon", "turkey bird");
			std::cout << std::endl;
			std::cout << "== Presidential Pardon Form  == " << std::endl; 
			std::cout << std::endl;

			trainee.signForm(*PPForm);

			std::cout << std::endl;

			trainee.executeForm(*PPForm);
			std::cout << std::endl;
			delete PPForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
}