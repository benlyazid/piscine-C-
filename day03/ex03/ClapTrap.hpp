/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:16:39 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 17:54:14 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP
#define CLAPTRAP

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string _Name;
		int	_Energy_points;
		int _Attack_damage;
		int _Hit_points;

	public:
		ClapTrap(std::string name);
		ClapTrap();
		ClapTrap& operator=(const ClapTrap& clapTrap);
		ClapTrap(const ClapTrap& clapTrap);
		~ClapTrap();

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};



#endif



