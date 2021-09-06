/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 08:34:10 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 08:42:01 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    _Attack_damage = 20;
    _Energy_points = 50;
    _Hit_points = 100;
	std::cout << "Default constructor from ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destructor from ScavTrap called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << _Name << " from ScavTrap Attack " << target << " causing "<< _Attack_damage << "  points of damage! "<< std::endl;	
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode " << std::endl;
}