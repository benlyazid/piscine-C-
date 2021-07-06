/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:04:08 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 13:49:30 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{

}

Zombie::~Zombie(void)
{
    std::cout << "The Zombie <" << name << "> Was Deleted\n";
}

Zombie* newZombie( std::string name)
{
    Zombie *z = new Zombie();
    z->set_name(name);
    return (z);
}

void	Zombie::set_name(std::string name)
{
    this->name = name;
}
