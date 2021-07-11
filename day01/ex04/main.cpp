/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:07:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/07 16:28:25 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
int main(int ac, char **av)
{

	if (ac != 4)
	{
		std::cout << "ERROR IN ARGUMENTS :(" << std::endl; 
		return (1);
	}

	std::string file_name = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "string is empty :(" << std::endl; 
		return (2);
	}
	
	std::ifstream file(file_name);
	if (file.fail())
	{
		std::cout << "FILE DOSENT EXIST:(" << std::endl; 
		return (1);		
	}

	std::ostringstream ss;
	ss << file.rdbuf();
	std::string  data= ss.str();
	std::cout << data;

	std::string output = "";
	for(int i = 0; i < (int)data.length(); i++)
	{
		int up = 0;
		while (up + i  < (int)data.length() && up < (int)s1.length() && data[i + up] == s1[up])
			up++;
		if (up == (int)s1.length())
		{
			output += s2;
			i += (up - 1);
		}
		else
			output += data[i];
	}	
	std::cout << output;
	file.close();
	std::ofstream ofile("FILENAME.replace");
	ofile << output;
	ofile.close();
    return (0);
}