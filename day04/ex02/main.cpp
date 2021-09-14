/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:11:16 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 07:26:31 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//Animal animal; //That Should not work because Animal is Abstract Class
	Animal *dog = new Dog();
	dog->makeSound();
	delete dog;
	return 0;
}