/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:49:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/16 17:55:50 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template<typename T>
void iter(T *table, int n, void (*funct)(T))
{
	for (int i = 0; i < n; i++)
	{
		funct(table[i]);
	}	
}


template <typename T>
void print_element(T element)
{
	std::cout << "THE ELEMENT IS : " << element << std::endl;
}

#endif