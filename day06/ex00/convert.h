/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:22:06 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/13 07:24:25 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H
#include <string>
#include <iostream>
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

int get_type_of_input(std::string input);

#endif