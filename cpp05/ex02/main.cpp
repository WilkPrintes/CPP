/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:17:19 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/14 15:21:13 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	{
		Bureaucrat boss("boss", 1);
		Bureaucrat employee("employee", 72);
		Bureaucrat trainee("trainee", 140);

		ShrubberyCreationForm SCForm("trees");
		RobotomyRequestForm RRForm("Bi bop");
		PresidentialPardonForm PPForm("turkey bird");

		std::cout << std::endl;
		std::cout << "== Form signature attempt Test == " << std::endl; 
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "== Boss == " << std::endl; 
		std::cout << std::endl;

		boss.signForm(SCForm);
		boss.signForm(RRForm);
		boss.signForm(PPForm);

		std::cout << std::endl;
		std::cout << "== Employee == " << std::endl; 
		std::cout << std::endl;

		employee.signForm(SCForm);
		employee.signForm(RRForm);
		employee.signForm(PPForm);

		std::cout << std::endl;
		std::cout << "== Trainee == " << std::endl; 
		std::cout << std::endl;

		trainee.signForm(SCForm);
		trainee.signForm(RRForm);
		trainee.signForm(PPForm);

		std::cout << std::endl;
		std::cout << "== End signature attempt Test  == " << std::endl; 
		std::cout << std::endl;
	}
	{
		Bureaucrat boss("boss", 1);
		Bureaucrat employee("employee", 72);
		Bureaucrat trainee("trainee", 140);

		ShrubberyCreationForm SCForm("trees");
		RobotomyRequestForm RRForm("Bi bop");
		PresidentialPardonForm PPForm("turkey bird");

		std::cout << std::endl;
		std::cout << "== Attempt to excute without signature  == " << std::endl; 
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "== Boss == " << std::endl; 
		std::cout << std::endl;

		boss.executeForm(SCForm);
		boss.executeForm(RRForm);
		boss.executeForm(PPForm);

		std::cout << std::endl;
		std::cout << "== Employee == " << std::endl; 
		std::cout << std::endl;

		employee.executeForm(SCForm);
		employee.executeForm(RRForm);
		employee.executeForm(PPForm);

		std::cout << std::endl;
		std::cout << "== Trainee == " << std::endl; 
		std::cout << std::endl;

		trainee.executeForm(SCForm);
		trainee.executeForm(RRForm);
		trainee.executeForm(PPForm);

		std::cout << std::endl;
		std::cout << "== End attempt to excute without signature   == " << std::endl; 
		std::cout << std::endl;
	}

	{
		Bureaucrat boss("boss", 1);

		ShrubberyCreationForm SCForm("trees");
		RobotomyRequestForm RRForm("Bi bop");
		PresidentialPardonForm PPForm("turkey bird");

		std::cout << std::endl;
		std::cout << "== Attempt to sign and execution  == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== Boss == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== ShrubberyCreationForm == " << std::endl; 
		std::cout << std::endl;

		boss.signForm(SCForm);
		boss.executeForm(SCForm);
		
		std::cout << std::endl;
		std::cout << "== RobotomyRequestForm == " << std::endl; 
		std::cout << std::endl;

		boss.signForm(RRForm);
		boss.executeForm(RRForm);

		std::cout << std::endl;
		std::cout << "== PresidentialPardonForm == " << std::endl; 
		std::cout << std::endl;

		boss.signForm(PPForm);
		boss.executeForm(PPForm);
		
		std::cout << std::endl;
	}
	{
		Bureaucrat employee("employee", 72);

		ShrubberyCreationForm SCForm("trees");
		RobotomyRequestForm RRForm("Bi bop");
		PresidentialPardonForm PPForm("turkey bird");

		std::cout << std::endl;
		std::cout << "== Attempt to sign and execution  == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== employee == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== ShrubberyCreationForm == " << std::endl; 
		std::cout << std::endl;

		employee.signForm(SCForm);
		employee.executeForm(SCForm);
		
		std::cout << std::endl;
		std::cout << "== RobotomyRequestForm == " << std::endl; 
		std::cout << std::endl;

		employee.signForm(RRForm);
		employee.executeForm(RRForm);

		std::cout << std::endl;
		std::cout << "== PresidentialPardonForm == " << std::endl; 
		std::cout << std::endl;

		employee.signForm(PPForm);
		employee.executeForm(PPForm);		

		std::cout << std::endl;
	}
	{
		Bureaucrat trainee("trainee", 140);

		ShrubberyCreationForm SCForm("trees");
		RobotomyRequestForm RRForm("Bi bop");
		PresidentialPardonForm PPForm("turkey bird");

		std::cout << std::endl;
		std::cout << "== Attempt to sign and execution  == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== trainee == " << std::endl; 
		std::cout << std::endl;
		std::cout << "== ShrubberyCreationForm == " << std::endl; 
		std::cout << std::endl;

		trainee.signForm(SCForm);
		trainee.executeForm(SCForm);
		
		std::cout << std::endl;
		std::cout << "== RobotomyRequestForm == " << std::endl; 
		std::cout << std::endl;

		trainee.signForm(RRForm);
		trainee.executeForm(RRForm);

		std::cout << std::endl;
		std::cout << "== PresidentialPardonForm == " << std::endl; 
		std::cout << std::endl;

		trainee.signForm(PPForm);
		trainee.executeForm(PPForm);

		std::cout << std::endl;
		std::cout << "== End attempt to sign and execution  == " << std::endl; 
		std::cout << std::endl;
	}
	return (0);
}