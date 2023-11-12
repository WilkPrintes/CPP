/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:06:11 by wprintes          #+#    #+#             */
/*   Updated: 2023/11/12 18:20:53 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>
#include <cstdlib>

class RPN {
	private:
		bool _isOperator(const std::string& token);
		double _performOperation(double nbr1, double nbr2, std::string const &token);
	public:
		RPN(void);
		~RPN(void);
		RPN(RPN const &copy);

		RPN& operator=(RPN const &rhs);
		double calculation(const std::string& str);

	
};

bool checkArgc(const int argc);
bool errorMessage(std::string str);        

#endif