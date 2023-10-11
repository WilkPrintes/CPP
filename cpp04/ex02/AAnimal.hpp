/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:09:24 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 11:05:49 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

# include <iostream>

class AAnimal
{
protected:
    std::string _type;
public:
    AAnimal(void);
    AAnimal(AAnimal const &src);
    virtual ~AAnimal();

    void setType(std::string type);
    std::string getType(void) const;

    virtual void makeSound(void) const = 0;

    AAnimal &operator=(AAnimal const &rhs);
};

#endif