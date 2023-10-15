/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:35:42 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/15 11:04:34 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <iomanip>

template <typename T>
void swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	if(a < b)
		return(a);
	return (b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
	if(a > b)
		return(a);
	return (b);
}

#endif