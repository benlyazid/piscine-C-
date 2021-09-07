/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:04:08 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/07 19:19:06 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "default construct" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << name << " construct with name" << std::endl;
	this->name = name;   
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
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

void randomChump(std::string name)
{
   Zombie *zombie = newZombie(name);
   zombie->announce();
   
}