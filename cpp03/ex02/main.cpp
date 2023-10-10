/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:01:25 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/09 23:37:45 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
    
	{
		// Orthodox Canonical Class Form tests
		FragTrap bob;
	
		FragTrap novoBob(bob);
		novoBob.highFivesGuys();

		FragTrap jimmy("Jimmy");

		bob = jimmy;
	}
	{
		// Actions tests
		FragTrap admiralAckbar("Admiral Ackbar");

		admiralAckbar.takeDamage(9);

		admiralAckbar.beRepaired(8);

		admiralAckbar.attack("Joãozinho");

		admiralAckbar.highFivesGuys();

		while (admiralAckbar.getEnergyPoints())
		{
			admiralAckbar.attack("Jusicreuda");
		}

		admiralAckbar.beRepaired(91);

		admiralAckbar.attack("Maria");

		admiralAckbar.highFivesGuys();

		admiralAckbar.takeDamage(5);

		admiralAckbar.takeDamage(2000);

		admiralAckbar.beRepaired(91);

		admiralAckbar.attack("Maria");

		admiralAckbar.highFivesGuys();
	}
	return 0;
}