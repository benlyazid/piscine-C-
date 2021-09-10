/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:42:07 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 18:12:34 by kbenlyaz         ###   ########.fr       */
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
	DiamondTrap();
	DiamondTrap (DiamondTrap const &diamon);
	DiamondTrap& operator=(DiamondTrap const &diamon);
	void attack(std::string enemy);
	void  whoAmI();
};

#endif