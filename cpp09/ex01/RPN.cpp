/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:06:27 by wprintes          #+#    #+#             */
/*   Updated: 2023/11/12 18:21:03 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {
	std::cout << "RPN: Default constructor called" << std::endl;
}

RPN::RPN(RPN const &copy){
	std::cout << "RPN: Copy constructor called" << std::endl;
	*this = copy;
	
}

RPN::~RPN(void){
	std::cout << "RPN: Destructor called" << std::endl;
}

RPN& RPN::operator=(RPN const &rhs){
	std::cout << "RPN: Copy assignment operator" << std::endl;
	if (this != &rhs){
		
	}
	return (*this);
}

bool RPN::_isOperator(const std::string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

double RPN::_performOperation(double operand1, double operand2, const std::string& op) {
    if (op == "+") {
        return operand1 + operand2;
    } else if (op == "-") {
        return operand1 - operand2;
    } else if (op == "*") {
        return operand1 * operand2;
    } else if (op == "/") {
        if (operand2 != 0.0) {
            return operand1 / operand2;
        } else {
            throw std::runtime_error("Error: Division by zero.");
        }
    } else {
        throw std::runtime_error("Error: Unrecognized operator.");
    }
}



double RPN::calculation(const std::string& str) {
     std::stack<double> stack;
    std::istringstream iss(str);
    std::string token;

    while (iss >> token) {
        if (_isOperator(token)) {
            if (stack.size() < 2) {
                throw std::runtime_error("Error: Insufficient operands for operator.");
            }

            double operand2 = stack.top();
            stack.pop();

            double operand1 = stack.top();
            stack.pop();

            double result = _performOperation(operand1, operand2, token);
            stack.push(result);
        } else {
            double operand = atof(token.c_str());
            stack.push(operand);
        }
    }

    if (stack.size() != 1) {
        throw std::runtime_error("Error: Invalid expression.");
    }

    return stack.top();
}


bool checkArgc(const int argc){
	if(argc != 2)
		return (errorMessage("invalid number of arguments! \nExample: ./RPN \"1 2 +\" "));
	return (true);
}

bool errorMessage(std::string str){
	std::cout << "Error: " << str << std::endl;
	return(false);
}

