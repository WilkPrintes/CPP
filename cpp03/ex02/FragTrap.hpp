/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:00:49 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/09 23:46:31 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
    
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    ~FragTrap();

    void attack(const std::string &target);
    void highFivesGuys(void);

    FragTrap &operator=(FragTrap const &rhs);
};

#endif