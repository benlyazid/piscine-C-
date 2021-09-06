/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:00:59 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 10:46:33 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_Clap_name"), FragTrap(name +  "_Clap_name"), ScavTrap(name + "_Clap_name")
{
	_Name = name;
	_Attack_damage = 30;
	_Hit_points = 100;
	_Energy_points = 50;
	std::cout << "Default constructor from DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "destructor from DiamonTrap called" << std::endl;

}

void DiamondTrap::attack(std::string enemy)
{
	ScavTrap::attack(enemy);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _Name << " and my ClapTrap name is " << ClapTrap::_Name << std::endl;
}
