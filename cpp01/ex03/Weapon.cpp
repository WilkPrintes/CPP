/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:36:25 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/08 14:22:01 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType(void){
    return (_type);
}

void Weapon::setType(std::string type){
    _type = type;
}

Weapon::Weapon(std::string type){
    setType(type);
}

Weapon::Weapon(void){
    
}

Weapon::~Weapon(void){
    
}