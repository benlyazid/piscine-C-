/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:15:49 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/04 13:33:45 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
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
