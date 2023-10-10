/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:46:15 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:18:14 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
private:
    /* data */
public:
    Cat(void);
    Cat(Cat const &src);
    ~Cat(void);

    void makeSound(void) const;

    Cat &operator=(Cat const &rhs);
};

#endif