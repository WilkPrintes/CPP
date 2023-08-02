/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:31:45 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/02 11:43:39 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie *zombie;

    zombie = newZombie("Bilbo");
    zombie->announce();
    delete zombie;
    
    randomChump("Frodo");
}