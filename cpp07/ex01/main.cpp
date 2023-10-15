/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:19:31 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/15 11:26:01 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void){
    int intArray[] = {1, 2, 3, 4,5 ,6, 7, 8, 9};
	float floatArray[] = {1.1f, 2.6, 3.7, 4.5, 5.6, 6, 7, 8, 9};
	std::string stringArray[] = {"dog", "cat", "bird"};

	iter(intArray, 9, test);
	
	iter(floatArray, 9, test);

	iter(stringArray, 3, test);
	return(0);
}