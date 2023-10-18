/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:32:13 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/18 10:49:11 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int value){
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error( "value don't exist in container");
    std::cout << "find: ";
    return (it);
}

std::ostream &operator<<(std::ostream &o, std::vector<int> const &fixed){
    for(size_t i = 0; i < fixed.size(); i++){
        o << fixed.at(i) << " ";
    }
    return (o);
}

#endif