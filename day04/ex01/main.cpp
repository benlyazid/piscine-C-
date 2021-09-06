/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:11:16 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 16:43:16 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "animal.hpp"

int main()
{
	size_t len_of_list = 10;
	Animal	*animal_list[len_of_list];
	for (size_t i = 0; i < len_of_list; i++)
	{
		if (i < len_of_list / 2)
			animal_list[i] = new Cat();
		else
			animal_list[i] = new Dog();
	}

	for (size_t i = 0; i < len_of_list; i++)
	{
		delete animal_list[i];
	}
	return 0;
}
