/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:42:07 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 10:46:30 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
#define DIAMONDTRAP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public  FragTrap, public  ScavTrap
{
private:
	std::string _Name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	void attack(std::string enemy);
	void  whoAmI();
};

#endif