/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:20:01 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 00:36:15 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
    Fixed a;
    Fixed const b (Fixed(5.05f) * Fixed (2));
    Fixed c(b);
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << c << std::endl;

    std::cout << Fixed::max(a,b) << std::endl;
    std::cout << Fixed::min(a,b) << std::endl;
}