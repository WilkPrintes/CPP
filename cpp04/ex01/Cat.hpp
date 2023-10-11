/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:46:15 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 11:19:43 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
    Brain *_brain;
public:
    Cat(void);
    Cat(Cat const &src);
    ~Cat(void);

    void makeSound(void) const;
    void setIdea(int index, std::string idea);
    void showIdeas(void);
    
    Cat &operator=(Cat const &rhs);
};

#endif