/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:29:22 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 15:41:40 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;	
}


Brain::Brain(Brain const &brain)
{
	std::cout << "Brain Copy Constructor" << std::endl;	
	*this = brain;
}

Brain& Brain::operator=(Brain const &brain)
{
	std::cout << "Brain Operator = " << std::endl;
	if (this != &brain)
	{		
		for (size_t i = 0; i < 100; i++)
		{
			ideas[i] = brain.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

void Brain::set_ideas(std::string idea)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = idea;
	}
}

std::string Brain::get_ideas() const
{
	return (ideas[0]);
}