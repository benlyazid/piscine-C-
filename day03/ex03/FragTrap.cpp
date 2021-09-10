/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:17:58 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 17:55:14 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	_Attack_damage = 30;
	_Hit_points = 100;
	_Energy_points = 100;
	std::cout << "Constructor From FragTrap Called" << std::endl;
}

FragTrap::~FragTrap()
{
	 std::cout << "Destructor From FragTrap Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
	*this = fragtrap;
	std::cout << "Copy FragTrap Copy Constructor Called\n";

}
FragTrap::FragTrap():ClapTrap("FragTrap_Default")
{
	_Attack_damage = 30;
	_Hit_points = 100;
	_Energy_points = 100;
	std::cout << "Default Constructor From FragTrap Called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &fragtrap)
{
	if (this != &fragtrap)
	{
			_Name = fragtrap._Name;
			_Hit_points = fragtrap._Hit_points;
			_Energy_points = fragtrap._Energy_points;
			_Attack_damage = fragtrap._Attack_damage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Positive High Fives Request" << std::endl;
}