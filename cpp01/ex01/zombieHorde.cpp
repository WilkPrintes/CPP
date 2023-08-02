/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:55:17 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/02 16:29:42 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++){
        zombies[i].setName(name);
    }

    return (zombies);
}