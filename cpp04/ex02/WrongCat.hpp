/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:46:15 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 16:34:49 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
    /* data */
public:
    WrongCat(void);
    WrongCat(WrongCat const &src);
    ~WrongCat(void);

    void makeSound(void) const;

    WrongCat &operator=(WrongCat const &rhs);
};

#endif