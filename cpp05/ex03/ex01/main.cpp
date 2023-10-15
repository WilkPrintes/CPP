/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:50:11 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/13 09:24:13 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
    {
        std::cout << std::endl;
        std::cout << "== Orthodox Canonical Form Test == " << std::endl; 
        std::cout << std::endl;
        

        Form a("Form", 100, 20);
        Form b( a );
        Form c;
        Bureaucrat d(1, "Bureaucrat");

        d.signForm(b);

        c = b;

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
    }
    {
        std::cout << std::endl;
        std::cout << "== Form signature attempt Test == " << std::endl; 
        std::cout << std::endl;

        Form a ("Form1", 80, 20);
        Bureaucrat b(1, "boss");
        Bureaucrat c (100, "employee");

        std::cout << a << std::endl;

        try
        {
            c.signForm(a);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
        try
        {
            b.signForm(a);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

    }

}