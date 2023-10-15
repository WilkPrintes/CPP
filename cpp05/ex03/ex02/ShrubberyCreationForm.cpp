/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:16:45 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/14 21:05:11 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):AForm("Shrubbery", 145, 137), _target("file")
{
	std::cout << "ShrubberyCreationForm: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(target, 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm: Constructor with parameter called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm()
{
	std::cout << "ShrubberyCreationForm: Copy constructor called" << std::endl;
	*this =  copy;	
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	std::cout << "ShrubberyCreationForm: Copy assignment operator" << std::endl;
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
}

int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string file;
    std::ofstream outputFile;

	this->checkExecute(executor);
	
    file = this->_target + "_shrubbery";
    outputFile.open(file.c_str());

    if (!outputFile.is_open()) {
        std::cerr << "Unable to open file for writing." << std::endl;
        return 1;
    }

    outputFile << "               ,@@@@@@@," << std::endl;
    outputFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    outputFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    outputFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    outputFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    outputFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    outputFile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    outputFile << "       |o|        | |         | |" << std::endl;
    outputFile << "       |.|        | |         | |" << std::endl;
    outputFile << " \\/ .\\_\\/\\_\\/__  ,\\_\\/\\__\\\\/.  \\_\\/\\__/" << std::endl;

    std::cout << executor.getName() << " executed and created " << this->_target + "_shrubbery file" << std::endl;

    outputFile.close();
	return (0);
}