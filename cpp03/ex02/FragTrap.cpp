/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:00:52 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 11:05:20 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("") {
    std::cout << "Default constructor for FragTrap called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << "Constructor for " << name << " FragTrap called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src.getName()) {
    std::cout << "Copy constructor for " << src.getName() << std::endl;
    this->setAttackDamage(src.getAttackDamage());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setHitPoints(src.getHitPoints());
    this->setName(src.getName());
}

FragTrap::~FragTrap(void){
    std::cout << "Destructor for " << this->getName() << " FragTrap called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->getHitPoints() <= 0){
        std::cout << "FragTrap " << this->getName() << " is dead X_X" << std::endl;
        return ;
    }
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else
        std::cout << "FragTrap " << this->getName() << " dont have energy points for this action :/" << std::endl;
}

void FragTrap::highFivesGuys(void){
    if (this->getHitPoints() <= 0){
        std::cout << "FragTrap " << this->getName() << " is dead X_X" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->getName() << ": *High Five"   << std::endl;

}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	if (this == &rhs)
		return *this;
        
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());

	return *this;
}