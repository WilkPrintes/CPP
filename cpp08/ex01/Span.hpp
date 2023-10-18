/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:31:12 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/18 15:23:10 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdarg>

class Span
{
private:
    unsigned int _max;
    std::vector<int> _elements;    
public:
    Span(void);
    Span(int max);
    Span(Span const &src);
    ~Span(void);

    void addNumber(int element);
    void addMoreNumber(size_t size, ...);

    int shortestSpan(void);
    int longestSpan(void);

    class OutOfRange : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class ElementsInsufficient : public std::exception
    {
    public:
        const char *what() const throw();
    };

    Span &operator=(Span const &rhs);
};

#endif