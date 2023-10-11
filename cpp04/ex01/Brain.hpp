/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:33:58 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/11 01:03:41 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain(void);
    Brain(std::string idea);
    Brain(Brain const &src);
    ~Brain();
    
    void showIdea(void) const;
    void setIdea(int index, std::string idea);
    
    Brain &operator=(Brain const &rhs);
};

#endif