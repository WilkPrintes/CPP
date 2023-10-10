/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:43:34 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/09 23:47:23 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
    std::string _name;

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap(void);

    void virtual    attack(const std::string &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

    void            setHitPoints(int newHitPoints);
    void            setEnergyPoints(int newHitPoints);
    void            setAttackDamage(int newattackDamage);
    void            setName(std::string name);

    int             getHitPoints(void) const;
    int             getEnergyPoints(void) const;
    int             getAttackDamage(void) const;
    std::string     getName(void) const;
    
    ClapTrap &operator=(ClapTrap const &rhs);

};

#endif