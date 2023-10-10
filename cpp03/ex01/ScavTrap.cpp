/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:53:48 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/09 22:50:22 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << "Constructor for " << name << " ScavTrap called" << std::endl;
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
}

ScavTrap::ScavTrap(void): ClapTrap("") {
    std::cout << "Default constructor for ScavTrap called" << std::endl;
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src.getName()) {
    std::cout << "Copy constructor for " << src.getName() << std::endl;
    this->setAttackDamage(src.getAttackDamage());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setHitPoints(src.getHitPoints());
    this->setName(src.getName());
}

ScavTrap::~ScavTrap(void){
    std::cout << "Destructor for " << this->getName() << " ScavTrap called" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->getHitPoints() <= 0){
        std::cout << "ScavTrap " << this->getName() << " is dead X_X" << std::endl;
        return ;
    }
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else
        std::cout << "ScavTrap " << this->getName() << " dont have energy points for this action :/" << std::endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this == &rhs)
		return *this;
        
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());

	return *this;
}