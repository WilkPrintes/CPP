/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:30:21 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/10 00:33:05 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream> 
#include <cmath>

class Fixed
{
    private:
        int _rawBits;
        static const int _fractBits = 8;

    public:
        Fixed(void);
        Fixed(const int i);
        Fixed(const float f);
        Fixed(Fixed const &src);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const rawBits);

        float toFloat(void) const;
        int toInt (void) const;

        Fixed &operator=(Fixed const &rhs);
};

std::ostream &operator << (std::ostream &o, const Fixed &fixed);

#endif