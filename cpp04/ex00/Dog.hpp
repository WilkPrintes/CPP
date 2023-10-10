/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:38:25 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:18:38 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class Dog: public Animal
{
private:

public:
    Dog(void);
    Dog(Dog const &src);
    ~Dog(void);

    void makeSound(void) const;

    Dog &operator=(Dog const &rhs);
};

#endif