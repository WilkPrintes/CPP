/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:09:24 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:19:31 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal(void);
    Animal(Animal const &src);
    virtual ~Animal();

    void setType(std::string type);
    std::string getType(void) const;

    virtual void makeSound(void) const;

    Animal &operator=(Animal const &rhs);
};

#endif