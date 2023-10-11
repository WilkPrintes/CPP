/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:11:46 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 11:18:57 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Dog *dogTest = new Dog();
    Cat *catTest = new Cat();
    // AAnimal *animal = new AAnimal();
    
    dogTest->makeSound();
    catTest->makeSound();

    delete dogTest;
    delete catTest;
}
