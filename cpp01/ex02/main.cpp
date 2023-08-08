/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:35:23 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/08 14:29:37 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
   std::string stringVAR = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << &stringVAR << " -> The memory address of the string variable." << std::endl;
	std::cout << &stringPTR << " -> The memory address held by stringPTR." << std::endl;
	std::cout << &stringREF << " -> The memory address held by stringREF." << std::endl;

	std::cout << stringVAR << " -> The value of the string variable." << std::endl;
	std::cout << *stringPTR << " -> The value pointed to by stringPTR." << std::endl;
	std::cout << stringREF << " -> The value pointed to by stringREF." << std::endl;

}