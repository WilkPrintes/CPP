/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:55:42 by wprintes          #+#    #+#             */
/*   Updated: 2023/11/12 18:14:29 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if(!checkArgc(argc))
		return (1);
	
	RPN a;

	try{
		std::cout<< a.calculation(argv[1]) << std::endl;;
	}
	catch(std::exception &e){
		std::cout << e.what()  << std::endl;
	}
	
	return (0);
}