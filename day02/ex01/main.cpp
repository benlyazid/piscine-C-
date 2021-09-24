/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:59:34 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/21 11:47:20 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"



int main()
{
	Fixed a(12);
	Fixed b;
	// Fixed const b( 10 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );
	//a = Fixed(-1234.4321f );
//	int b = -10;
//	b = b << 8;
	b = a;
	b.setRawBits(599);
	std::cout << b << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	// int var1 =  roundf(42.42 *  (1 << 8));
	// std::cout << var1 << std::endl;
	// float var1_f = (float)var1 / (1 << 8);
	// std::cout << var1_f;
	// return 0;
}
