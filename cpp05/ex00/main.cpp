/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:50:11 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/12 14:03:22 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
    {
        std::cout << std::endl;
        std::cout << "== Orthodox Canonical Form Test == " << std::endl; 
        std::cout << std::endl;
        

        Bureaucrat a(149, "Politic") ;
        Bureaucrat b( a );
        Bureaucrat c;
        
        c = b;

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
    }
    
    {
        std::cout << std::endl;
        std::cout << "== Increment and Decrement Test == " << std::endl; 
        std::cout << std::endl;

        Bureaucrat a(50, "Politic Test");

        std::cout << a << std::endl;
        
        try
        {
            a.decrementGrade();
            a.decrementGrade();
            a.decrementGrade();
            a.decrementGrade();

            std::cout << a << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        
        std::cout << a << std::endl;

        try
        {
            a.incrementGrade();
            a.incrementGrade();
            a.incrementGrade();
            a.incrementGrade();
            a.incrementGrade();

            std::cout << a << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }

    }

    {

        Bureaucrat a(1, "Politic new A");
        Bureaucrat b(150, "Politic new B");

        std::cout << std::endl;
        std::cout << "== Exeptions Test == " << std::endl; 
        std::cout << std::endl;

        std::cout << a << std::endl;
        std::cout << b << std::endl;

        try
        {
            a.incrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        std::cout << a << std::endl;

        try
        {
            b.decrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        std::cout << b << std::endl;
    }

}