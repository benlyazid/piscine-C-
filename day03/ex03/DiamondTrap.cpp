/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:00:59 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 18:17:17 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name)
{
	_Name = name;
	ClapTrap::_Name = _Name + "_Clap_name";
	_Attack_damage = 30;
	_Hit_points = 100;
	_Energy_points = 50;
	std::cout << "Constructor From DiamondTrap Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor From DiamonTrap Called" << std::endl;
}

DiamondTrap::DiamondTrap()
{
	_Name =  "FragTrap_Default";
	ClapTrap::_Name = _Name + "_Clap_name";
	_Attack_damage = 30;
	_Hit_points = 100;
	_Energy_points = 50;
	std::cout << "Default Constructor From DiamondTrap Called" << std::endl;

}

DiamondTrap::DiamondTrap(DiamondTrap const &diamon)
{
	*this = diamon;
	std::cout << "Copy Constructor From DiamondTrap Called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &diamon)
{
	if (this != &diamon)
	{
		this->_Attack_damage = diamon._Attack_damage;
		this->_Hit_points = diamon._Hit_points;
		this->_Energy_points = diamon._Energy_points;
		this->_Name = diamon._Name;
	}
	return (*this);
}

void DiamondTrap::attack(std::string enemy)
{
	ScavTrap::attack(enemy);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _Name << " and my ClapTrap name is " << ClapTrap::_Name << std::endl;
}
