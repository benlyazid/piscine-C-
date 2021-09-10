/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:15:49 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/09 19:06:22 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("zombie");
    Zombie zz;
    //z->announce();
    randomChump("Zombie -_-");
    delete z;
    
    return (0);
}