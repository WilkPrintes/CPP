/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:11:46 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:50:18 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        std::cout << std::endl;
        std::cout << "== Animal ==" << std::endl;
        std::cout << std::endl;

        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        i->makeSound(); // will output the cat sound!
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << std::endl;
        std::cout << "== Wrong Animal ==" << std::endl;
        std::cout << std::endl;
        
        const WrongAnimal *l = new WrongAnimal();
        const WrongAnimal *k = new WrongCat();

        
        std::cout << k->getType() << " " << std::endl;
        
        k->makeSound();
        l->makeSound();
    
        delete k;
        delete l;

    }

    return 0;
}
