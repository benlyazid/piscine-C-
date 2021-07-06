/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:15:49 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 13:31:10 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z_hords; 
    z_hords =  zombieHorde(10, "zzzz");
    for (size_t i = 0; i < 10; i++)
    {
       z_hords[i].announce();
    }
    delete[] z_hords;
    return (0);
}