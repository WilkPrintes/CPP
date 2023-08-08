/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:01:11 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/08 14:22:50 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{

private:
    std::string _type;
    
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType(void);
    void setType(std::string type);
};

#endif