/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:50:48 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/11 19:28:28 by kbenlyaz         ###   ########.fr       */
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
    point_value =  raw;
}
