/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:38:55 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/08 14:32:05 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include "Weapon.hpp"

class HumanA
{

private:
    Weapon &_weapon;
    std::string _name;

public:
    HumanA(std::string name, Weapon weapon);
    ~HumanA();
    void attack(void);
};

#endif