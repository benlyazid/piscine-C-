/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 08:05:52 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 08:20:40 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int get_type_of_input(std::string input)
{ 
	if (is_int(input)) 
		return INT;
	if (is_char(input))
		return CHAR;
	if (is_flaot(input)) 
		return FLOAT;
	if (is_double(input))
		return DOUBLE;
	return 0;
}