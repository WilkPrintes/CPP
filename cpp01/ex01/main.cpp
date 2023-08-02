/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:54:32 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/02 16:30:19 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    
    Zombie *horde;

    horde = zombieHorde(3, "bob");
    for (int i = 0; i < 3; i++){
        horde[i].announce();
    }
    delete[] horde;
}