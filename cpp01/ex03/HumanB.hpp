/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 20:13:10 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/04 21:49:48 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    HumanB(void);
    ~HumanB(void);
    void attack(void);
    void setWeapon(Weapon weapon);
    std::string getName(void);
    Weapon getWeapon(void);
};
