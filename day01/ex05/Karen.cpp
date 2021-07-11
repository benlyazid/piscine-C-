/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:30:39 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/11 13:30:16 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug()
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info()
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning()
{
    std::cout << " think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month.\n";
}

void Karen::error()
{
    std::cout << "This is unacceptable, I want to speak to the manager now \n";
}

void	Karen::complain(std::string level)
{

    
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*p_funct[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    for (int i = 0; i < 4; i++)
    {
       if (levels[i] == level)
        {
           (this->*p_funct[i])();
            break;
        }
    }
}