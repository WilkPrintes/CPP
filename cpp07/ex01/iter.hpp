/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:19:49 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/15 11:24:19 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T * array, size_t n, void (*f)(T)){
    if (!array || !f)
        return ;

    for (size_t i = 0; i < n; i++)
        f(array[i]);
}

template <typename T>
void test(T a){
    std::cout << a << std::endl;
}

#endif