/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:56:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/21 12:50:10 by kbenlyaz         ###   ########.fr       */
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
	//	Fixed(const float number);

		bool operator==(const Fixed  &fixed);
		bool operator!=(const Fixed  &fixed);
		bool operator<(const Fixed &fixed);
		bool operator>(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
	
		float operator+(const Fixed &fixed);
		float operator-(const Fixed &fixed);
		float operator*(const Fixed &fixed);
		float operator/(const Fixed &fixed);
	
		float operator++();
		float operator++(int);
		float operator--();
		float operator--(int);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw);
		int toInt( void ) const;
		float toFloat( void ) const;

		static const Fixed& max(const Fixed& fixed_1, const Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed_1, const Fixed& fixed2);
		static  Fixed& max( Fixed& fixed_1,  Fixed& fixed2);
		static  Fixed& min( Fixed& fixed_1,  Fixed& fixed2);
};
std::ostream& operator<<(std::ostream &out, const Fixed& fixed);
#endif
