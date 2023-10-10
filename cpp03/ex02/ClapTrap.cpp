/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:51:35 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 08:59:19 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name("")
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(name)
{
    std::cout << "\033[1m" << "\033[94m" << "ClapTrap constructor for " << name <<  " called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(src.getName())
{
    std::cout << "Copy constructor for ClapTrap " << this->getName() << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor for " << this->getName() << " called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->getHitPoints() <= 0){
        std::cout << "ClapTrap " << this->getName() << " is dead X_X" << std::endl;
        return ;
    }
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else
        std::cout << "ClapTrap " << this->getName() << " dont have energy points for this action :/" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getHitPoints() <= 0){
        std::cout << "ClapTrap " << this->getName() << " is dead X_X" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage :O" << std::endl;
    this->setHitPoints(this->getHitPoints() - amount);
    if (this->getHitPoints() <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " is cosplaying satoru gojo (he died) X_X" << std::endl;
    }else {
    std::cout << this->getHitPoints() << " hit points remains" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getHitPoints() <= 0){
        std::cout << "ClapTrap " << this->getName() << " is dead X_X" << std::endl;
        return ;
    }
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " repaired " << amount << " points of life +++" << std::endl;
        this->setHitPoints(this->getHitPoints() + amount);
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else
        std::cout << "ClapTrap " << this->getName() << " dont have energy points for this action :/" << std::endl;
}

void ClapTrap::setHitPoints(int newHitPoints) { this->_hitPoints = newHitPoints; }
void ClapTrap::setEnergyPoints(int newEnergyPoints) { this->_energyPoints = newEnergyPoints; }
void ClapTrap::setAttackDamage(int newattackDamage) { this->_attackDamage = newattackDamage; }
void ClapTrap::setName(std::string name) { this->_name = name; }

int ClapTrap::getHitPoints(void) const { return (this->_hitPoints); }
int ClapTrap::getEnergyPoints(void) const { return (this->_energyPoints); }
int ClapTrap::getAttackDamage(void) const { return (this->_attackDamage); }
std::string ClapTrap::getName(void) const { return (this->_name); }

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    if (this == &rhs)
        return (*this);
    this->setAttackDamage(rhs.getAttackDamage());
    this->setEnergyPoints(rhs.getEnergyPoints());
    this->setHitPoints(rhs.getHitPoints());
    this->setName(rhs.getName());

    return (*this);
}