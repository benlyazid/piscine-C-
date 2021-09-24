/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:07:30 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/17 17:41:10 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include "easyfind.hpp"
#include <array>
int main()
{
	try
	{
		
		std::array<int , 8> my_array = {4410, 114, 521, 3 ,47, 18, 25250, 20};
		easyfind(my_array, 20);
		easyfind(my_array, 12);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	
}
