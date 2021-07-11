/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:56:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/11 19:12:46 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int	point_value;
		static const int number_of_fractional_bits = 8;
		
	public:
		Fixed();
		~Fixed();
		Fixed& operator=(const Fixed &fixed);
		Fixed(const Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif