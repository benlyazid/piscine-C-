/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:20:43 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/17 17:39:41 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND__H
#define EASYFIND__H

#include<iostream>
#include<string>

class EXCEPTION : public std::exception
{
		virtual const char *what() const  throw()
		{
			return ("Cant find the element :( \n");
		}
};

template< typename T>
bool easyfind(T table, int element)
{
	
	int *ptr = std::find(table.begin(), table.end(), element);
	if (ptr != table.end())
	{
		std::cout << "Element find succefuly in index [" << ptr - table.begin() << "] :) \n";
		return (true);
	}
	throw EXCEPTION();


	return (false);
}

#endif