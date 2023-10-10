/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:09:24 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:40:22 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &src);
    virtual ~WrongAnimal();

    void setType(std::string type);
    std::string getType(void) const;

    void makeSound(void) const;

    WrongAnimal &operator=(WrongAnimal const &rhs);
};

#endif