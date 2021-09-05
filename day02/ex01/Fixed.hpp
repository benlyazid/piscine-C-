/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:56:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/04 19:03:09 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

#define FIXED_H

#include <iostream>
#include <math.h>

class Fixed
{
	private:
		int	point_value;
		static const int	number_of_fractional_bits = 8;
		
	public:
		Fixed();
		~Fixed();
		Fixed& operator=(const Fixed &fixed);

		Fixed(const Fixed &fixed);
		Fixed(const int number);
		Fixed(const float number);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream& operator<<(std::ostream &out, const Fixed& fixed);
#endif