/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:11:46 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 11:20:03 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animal[100];

    std::cout << std::endl;
    std::cout << "== Creating Animals Array ==" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Create Animal: " << i + 1 << std::endl;
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    std::cout << std::endl;
    std::cout << "== End ==" << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "== Deleting Animals Array ==" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        delete animal[i];
    }
    std::cout << std::endl;
    std::cout << "== End ==" << std::endl;
    std::cout << std::endl;
    
    std::cout << "== Deep Copy Test ==" << std::endl;
    std::cout << std::endl;

    Dog *testDog = new Dog();
    testDog->setIdea(2, "Au Au?");
    testDog->showIdeas();

    Dog testDog1 = *testDog;
    testDog1.showIdeas();
    
    Cat *testCat = new Cat();
    testCat->setIdea(1, "Miau!!!");
    testCat->showIdeas();

    Cat AlsoCat = *testCat;
    AlsoCat.showIdeas();
    
    std::cout << std::endl;
    std::cout << "== End ==" << std::endl;
    std::cout << std::endl;

    delete testCat;
    delete testDog;
    return 0;
}
