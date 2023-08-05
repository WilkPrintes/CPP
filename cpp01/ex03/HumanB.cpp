/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:31:24 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/04 22:35:18 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL){
    _name = name;
}

HumanB::~HumanB(void){

}

void HumanB::setWeapon(Weapon weapon){
    _weapon = &weapon;
}

void HumanB::attack(void){
    if (!_weapon){
        std::cout << _name << " is not armed" << std::endl;
        return ;
    }
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl; 
}