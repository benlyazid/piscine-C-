/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 08:34:10 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 17:55:47 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    _Attack_damage = 20;
    _Energy_points = 50;
    _Hit_points = 100;
	std::cout << "Constructor From ScavTrap Called" << std::endl;
}


ScavTrap::ScavTrap()
{
	_Name = "Default_ScavTrap";
    _Attack_damage = 20;
    _Energy_points = 50;
    _Hit_points = 100;
	std::cout << "Default Constructor From ScavTrap Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& scavetrap)
{
	std::cout << "ScavTrap Copy Constructor Called\n";
	*this = scavetrap;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scavetrap)
{
	std::cout << "Assignation operator calledr Called \n";
	if (this != &scavetrap)
	{
		_Attack_damage = scavetrap._Attack_damage;
		_Energy_points = scavetrap._Energy_points;
		_Hit_points = scavetrap._Hit_points;
		_Name = scavetrap._Name;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor From ScavTrap Called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << _Name << " from ScavTrap Attack " << target << " causing "<< _Attack_damage << "  points of damage! "<< std::endl;	
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode " << std::endl;
}