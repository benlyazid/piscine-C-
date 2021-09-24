/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:09:17 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 13:56:28 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Convert.hpp"

Convert::Convert(std::string input)
{
	if (!std::isdigit(input[0]) and input.length() == 1)
	{
		int c = input[0];
		input = std::to_string(c);
	}
	this->input = input;	
}

Convert::Convert(const Convert &convert)
{
	*this = convert;
}

Convert& Convert::operator=(const Convert &convert)
{
	if (this != &convert)
	{
		input = convert.input;
	}
	return *this;
}

Convert::~Convert()
{
	
}

Convert::operator char()
{
	try
	{
		char var =  std::stoi(input);
		if (!std::isprint(var))
			throw std::exception();
		std::cout << "char : " << var << std::endl;
		return var;
	}
	catch(const std::exception& e)
	{
		std::cout << "char : impossible" << std::endl;
	}
	return 0;
}

Convert::operator int()
{		
	try
	{
		int var =  std::stoi(input);
		std::cout << "int : " << var << std::endl;
		return var;
	}
	catch(const std::exception& e)
	{
		std::cerr << "int : impossible" << '\n';
	}
	return 0;
}

Convert::operator float()
{
	try
	{
		float var =  std::stof(input);
		if (var != (int)var)
			std::cout << "float : " << var << 'f' << std::endl;
		else
			std::cout << "float : " << var << ".0f" << std::endl;

		return var;
	}
	catch(const std::exception& e)
	{
		std::cerr << "float : impossible" << '\n';
	}
	return 0;
}

Convert::operator double()
{
	try
	{
		double var =  std::stod(input);
		if (var != (int)var)
			std::cout << "double : " << var << std::endl;
		else
			std::cout << "double : " << var << ".0" << std::endl;
		return var;
	}
	catch(const std::exception& e)
	{
		std::cerr << "double : impossible" << '\n';
	}
	return 0;
}
void convert_funct(Convert &convert)
{
	(void)static_cast<char>(convert);
	(void)static_cast<int>(convert);
	(void)static_cast<float>(convert);
	(void)static_cast<double>(convert);
}