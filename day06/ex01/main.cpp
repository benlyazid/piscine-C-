/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:03:21 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 16:11:47 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>
struct Data
{
	int int_number;
	char alpha_char;
	float float_number;
};

uintptr_t serialize(Data* data)
{
	uintptr_t ptr = reinterpret_cast<uintptr_t>(data);
	return (ptr);
}

Data* deserialize(uintptr_t raw)
{
	Data *data = reinterpret_cast<Data*>(raw);
	return data;
}

int main()
{
	
	Data *data = new Data;
	data->alpha_char = 'A';
	data->int_number = 42;
	data->float_number = 13.73;
	
	uintptr_t ptr =  serialize(data);
	std::cout << "INPUT  :" << std::endl;
	std::cout << data << std::endl;
	std::cout <<  data->alpha_char << std::endl;
	std::cout <<  data->int_number << std::endl;
	std::cout <<  data->float_number << std::endl;

	Data *data2 = deserialize(ptr);
	std::cout << "\nOUTPUT :" << std::endl;

	std::cout << data2 << std::endl;
	std::cout <<  data2->alpha_char << std::endl;
	std::cout <<  data2->int_number << std::endl;
	std::cout <<  data2->float_number << std::endl;

	return 0;
}
