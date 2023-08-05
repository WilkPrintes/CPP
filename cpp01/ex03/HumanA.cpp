/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:47:02 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/04 21:57:00 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void){
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl; 
}

HumanA::HumanA(std::string name, Weapon weapon) : _weapon(weapon), _name(name){

}

HumanA::~HumanA(void){
    
}