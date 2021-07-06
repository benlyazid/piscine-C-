/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:51:37 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 10:59:07 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void    contact::set_first_name(std::string str)
{
    first_name = str;
}
void    contact::set_last_name(std::string str)
{
    last_name = str;
}
void    contact::set_nick_name(std::string str)
{
    nick_name = str;
}
void    contact::set_phone_number(std::string str)
{
    phone_number = str;
}
void    contact::set_darkset_secret(std::string str)
{
    darkest_secret = str;
}


std::string    contact::get_first_name(void)
{
    return (first_name);
}
std::string    contact::get_last_name(void)
{
    return (last_name);
}
std::string    contact::get_nick_name(void)
{
    return (nick_name);
}
std::string    contact::get_phone_number(void)
{
    return (phone_number);
}
std::string    contact::get_darkset_secret(void)
{
    return (darkest_secret);
}