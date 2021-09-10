/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:16:28 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 15:20:30 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("seven");
    ClapTrap b = a;
    ClapTrap c;
    b.attack("ENEMY");
    b.takeDamage(25);
    b.beRepaired(20);
    return 0;
}