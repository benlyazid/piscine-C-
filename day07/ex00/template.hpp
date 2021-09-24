/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 08:34:45 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/15 08:35:22 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE__H
#define TEMPLATE__H


#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min (T const &a, T const &b)
{
	if (a >= b)
		return (b);
	return (a);
}

template <typename T>
T max (T const &a, T const &b)
{
	if (a >= b)
		return (a);
	return (b);
}

#endif