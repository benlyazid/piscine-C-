/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:50:11 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/07 19:42:03 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}