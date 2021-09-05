/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:50:48 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/04 19:02:10 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    point_value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called\n";
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    if (this != &fixed)
    {
        std::cout << "Assignation constructor called\n";
        this->point_value = fixed.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits constructor called\n";
    return this->point_value;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits constructor called\n";
    point_value =  raw;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    point_value = num * (1 << number_of_fractional_bits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
    point_value = roundf(num * (1 << number_of_fractional_bits));
}

float Fixed::toFloat(void)const
{
	return ((float)point_value / (1 << number_of_fractional_bits));
}
int Fixed::toInt(void)const
{
	return (point_value / (1 << number_of_fractional_bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}