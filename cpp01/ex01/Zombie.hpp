/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:55:46 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/02 16:29:35 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    void setName(std::string name);
    ~Zombie(void);
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);