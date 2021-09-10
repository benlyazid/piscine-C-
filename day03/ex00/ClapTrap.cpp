/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:16:34 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 15:33:12 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor Called" << std::endl;
	_Name = name;
	_Energy_poits = 10;
	_Attack_damage = 0;
	_Hitpoints = 10;
}

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor Called" << std::endl;
	_Name = "Default_Nmae";
	_Energy_poits = 10;
	_Attack_damage =  0;
	_Hitpoints = 10;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor  Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	std::cout << "Copy Constructor Called\n";
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	std::cout << "Assignation operator Called\n";
	if (this != &clapTrap)
	{
		this->_Name = clapTrap._Name;
		this->_Attack_damage = clapTrap._Attack_damage;
		this->_Energy_poits = clapTrap._Energy_poits;
		this->_Hitpoints = clapTrap._Hitpoints;
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << _Name << " Attack " << target << " causing "<< _Attack_damage << "  points of damage! "<< std::endl;	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _Name << " Take " << amount << " points of damage! "<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
		std::cout << _Name << " Has repaired " << amount << " points! "<< std::endl;
}