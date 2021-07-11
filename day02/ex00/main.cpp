/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:03:20 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/11 19:25:42 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Ex
{
    public:
        int fd;

        Ex(){ fd = 0;}

        Ex(const Ex& rhs)
        {
            std::cout << "Copy Constructor" << std::endl;
			//this->fd = rhs.fd;
        }
		
        Ex& operator=(const Ex& rhs);// shadow assi / deep assig
        // {
        //     std::cout << "assign" << std::endl;
        //     if (this != &rhs)
        //     {
        //         this->fd = rhs.fd;
        //     }
        //     return (*this);
        // }
};

int main()
{
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
    
}
