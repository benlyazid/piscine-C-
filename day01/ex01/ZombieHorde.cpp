/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:42:42 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 13:26:05 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *hord_of_zombie = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        hord_of_zombie[i].set_name(name);
    }
    return (hord_of_zombie);
}