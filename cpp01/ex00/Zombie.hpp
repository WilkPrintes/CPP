/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:11:46 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/02 11:40:56 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);
