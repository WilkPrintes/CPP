/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:09:39 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/15 18:33:30 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
public:
	Data(void);
	Data(std::string name, int age);
	Data(Data const & src);
	~Data(void);

	Data&	operator=(Data const & rhs);

	std::string	name;
	int			age;
};

std::ostream&	operator<<(std::ostream &o, Data const &rhs);

#endif
