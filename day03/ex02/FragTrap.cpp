/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:17:58 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/05 15:17:18 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	set_Attack_damage(30);
	set_Hit_points(100);
	set_Energy_points(100);
	std::cout << "Default constructor from FragTrap called" << std::endl;
}

FragTrap::~FragTrap()
{
	 std::cout << "destructor from FragTrap called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request" << std::endl;
}
