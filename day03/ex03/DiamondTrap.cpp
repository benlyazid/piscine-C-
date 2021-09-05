/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:00:59 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/05 17:38:04 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):  FragTrap(name +  "_Clap_name"), ScavTrap(name + "_Clap_name")
{
	Name = name;
	ScavTrap::set_Attack_damage(FragTrap::get_Attack_damage());
	FragTrap::set_Hit_points(FragTrap::get_Hit_points());
	FragTrap::set_Energy_points(ScavTrap::get_Energy_points());
		
	std::cout << ScavTrap::get_Attack_damage() << " 	" << FragTrap::get_Attack_damage() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	
}