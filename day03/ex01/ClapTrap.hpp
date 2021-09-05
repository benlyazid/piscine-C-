/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:16:39 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/05 14:03:46 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP
#define CLAPTRAP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string _Name;
	int	_Energy_points;
	int _Attack_damge;
	int _Hit_points;

public:
	int var;
    ClapTrap(std::string name);
	ClapTrap& operator=(const ClapTrap& clapTrap);
	ClapTrap(const ClapTrap& clapTrap);
    ~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	void set_Name(std::string);
	void set_Energy_points(int energy_points);
	void set_Attack_damage(int attack_dammage);
	void set_Hit_points(int hit_points);
	
	std::string get_Name();
	int get_Energy_points();
	int get_Attack_damage();
	int get_Hit_points();
};



#endif



