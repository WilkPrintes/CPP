/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:38:25 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 11:19:50 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
    Brain *_brain;
public:
    Dog(void);
    Dog(Dog const &src);
    ~Dog(void);

    void makeSound(void) const;
    void setIdea(int index, std::string idea);
    void showIdeas(void);

    Dog &operator=(Dog const &rhs);
};

#endif