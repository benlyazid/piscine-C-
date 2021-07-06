/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:04:08 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 13:25:16 by kbenlyaz         ###   ########.fr       */
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
