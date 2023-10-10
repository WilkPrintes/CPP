/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:01:25 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/09 19:27:54 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
    
	{
		// Orthodox Canonical Class Form tests
		ScavTrap bob;
		bob.guardGate();

		ScavTrap novoBob(bob);

		ScavTrap jimmy("Jimmy");

		bob = jimmy;
	}
	{
		// Actions tests
		ScavTrap admiralAckbar("Admiral Ackbar");

		admiralAckbar.takeDamage(9);

		admiralAckbar.beRepaired(8);

		admiralAckbar.attack("Joãozinho");

		admiralAckbar.guardGate();

		admiralAckbar.guardGate();

		while (admiralAckbar.getEnergyPoints())
		{
			admiralAckbar.attack("Jusicreuda");

		}

		admiralAckbar.beRepaired(91);

		admiralAckbar.attack("Maria");

		admiralAckbar.takeDamage(5);

		admiralAckbar.takeDamage(2000);

		admiralAckbar.beRepaired(91);

		admiralAckbar.attack("Maria");

		admiralAckbar.guardGate();
	}
	return 0;
}