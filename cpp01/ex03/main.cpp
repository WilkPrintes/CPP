/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 20:19:53 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/04 22:35:05 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "HumanA.hpp"
#include "HumanB.hpp"

int main(void){
    // Weapon pistol = Weapon("pistol");
    // HumanA bob("bob", pistol);

    // bob.attack();
    // pistol.setType("pistol2");
    // bob.attack();
    Weapon ak = Weapon("ak47");
    HumanB bilbo("bilbo");
    bilbo.attack();
    bilbo.setWeapon(ak);
    bilbo.attack();
    ak.setType("ak74");
    bilbo.attack();
}