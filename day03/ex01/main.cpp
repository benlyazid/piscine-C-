/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:16:28 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/05 14:09:28 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("seven");
    ClapTrap b("khalid");
	ScavTrap scave("scave_0");
    b.attack("ENEMY");
    b.takeDamage(25);
    b.beRepaired(20);

	scave.attack("ENEMY_1");
	scave.guardGate();
	
    return 0;
}