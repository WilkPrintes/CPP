/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:30:21 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/01 09:30:21 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream> 

class Fixed
{
    private:
        int _rawBits;
        static const int _fractBits = 8;

    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const rawBits);

        Fixed &operator=(Fixed const &rhs);
};

#endif