/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:01:25 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/05 11:46:48 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    {
		// Orthodox Canonical Class Form tests
		ClapTrap bob;
		ClapTrap novoBob(bob);
        ClapTrap jimmy("Jimmy");

		bob = jimmy;
	}
	{
		// Actions tests
		ClapTrap admiralAckbar("Admiral Ackbar");
		admiralAckbar.takeDamage(9);
		admiralAckbar.beRepaired(8);
		admiralAckbar.attack("Joãozinho");
		while (admiralAckbar.getEnergyPoints())
		{
			admiralAckbar.attack("Jusicreuda");
		}
		admiralAckbar.beRepaired(91);
		admiralAckbar.attack("Maria");
		admiralAckbar.takeDamage(5);
		admiralAckbar.takeDamage(20);
		admiralAckbar.beRepaired(91);
		admiralAckbar.attack("Maria");
	}
	return 0;
}