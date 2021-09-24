/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:22:06 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 11:20:53 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H
#include <string>
#include <iostream>
class Convert
{
private:
	std::string input;
public:
	Convert(std::string input);
	~Convert();
	Convert(const Convert &convert);
	Convert& operator=(const Convert &convert);
	operator char();
	operator int();
	operator float();
	operator double();
};

void  convert_funct(Convert &convert);


#endif