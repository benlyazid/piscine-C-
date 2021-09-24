/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:50:48 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/21 12:50:02 by kbenlyaz         ###   ########.fr       */
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
	std::cout << "Assignation constructor called\n";
	if (this != &fixed)
	{
		this->point_value = fixed.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->point_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	point_value =  raw;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	point_value = num * (1 << number_of_fractional_bits);
}
//
//Fixed::Fixed(const float num)
//{
//	std::cout << "Float constructor called" << std::endl;
//	point_value = roundf(num * (1 << number_of_fractional_bits));
//}

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
	return (out);
}

bool Fixed::operator==(const Fixed &fixed)
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed)
{
	return (this->toFloat() != fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed)
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>(const Fixed &fixed)
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return (this->toFloat() >= fixed.toFloat());
}

float Fixed::operator+(const Fixed &fixed)
{
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(const Fixed &fixed)
{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(const Fixed &fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/(const Fixed &fixed)
{
	return (this->toFloat() / fixed.toFloat());
}

float Fixed::operator++()
{
	setRawBits(getRawBits() + 1);
	return (toFloat());
	
}

float Fixed::operator++(int)
{
	float ret = toFloat();
	setRawBits(getRawBits() + 1);	
	return (ret);
}

const Fixed& Fixed::max(const Fixed& fixed_1, const Fixed& fixed_2)
{
	if (fixed_1.toFloat() > fixed_2.toFloat())
		return (fixed_1);
	return (fixed_2);
}

const Fixed& Fixed::min(const Fixed& fixed_1, const Fixed& fixed_2)
{
	if (fixed_1.toFloat() < fixed_2.toFloat())
		return (fixed_1);
	return (fixed_2);
}

Fixed& Fixed::max( Fixed& fixed_1,  Fixed& fixed_2)
{
	if (fixed_1.toFloat() > fixed_2.toFloat())
		return (fixed_1);
	return (fixed_2);
}

Fixed& Fixed::min( Fixed& fixed_1,  Fixed& fixed_2)
{
	if (fixed_1.toFloat() < fixed_2.toFloat())
		return (fixed_1);
	return (fixed_2);
}
