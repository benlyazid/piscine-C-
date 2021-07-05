/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:15:49 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/05 10:05:39 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "ERROR IN ARGUMENT :(" << std::endl;
		return (1);
	}
	for (int j = 1; j < argc; j++)
	{
		for (int i = 0; i < (int)strlen(argv[j]); i++)
			std:: putchar(toupper(argv[j][i]));
		std::cout <<" ";
	}
	std::cout << std::endl;
	return (0);
}
