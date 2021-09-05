/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:16:34 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/05 14:05:33 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	_Name = name;
	_Energy_points = 10;
	_Attack_damge = 0;
	_Hit_points = 10;
}
ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	std::cout << "Copy constructor called\n";
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	std::cout << "Assignation constructor called\n";
	if (this != &clapTrap)
	{
		this->_Name = clapTrap._Name;
		this->_Attack_damge = clapTrap._Attack_damge;
		this->_Energy_points = clapTrap._Energy_points;
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << _Name << " Attack " << target << " causing "<< _Attack_damge << "  points of damage! "<< std::endl;	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _Name << " Take " << amount << " points ofdamage! "<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
		std::cout << _Name << " Has repaired " << amount << " points! "<< std::endl;
}

std::string ClapTrap::get_Name()
{
	return (_Name);	
}

int ClapTrap::get_Attack_damage()
{
	return (_Attack_damge);	
}

int ClapTrap::get_Energy_points()
{
	return (_Energy_points);	
}

int ClapTrap::get_Hit_points()
{
	return (_Hit_points);	
}

void ClapTrap::set_Energy_points(int points)
{
	_Energy_points = points;
}

void ClapTrap::set_Attack_damage(int points)
{
	_Attack_damge = points;
}

void ClapTrap::set_Hit_points(int points)
{
	_Hit_points = points;
}