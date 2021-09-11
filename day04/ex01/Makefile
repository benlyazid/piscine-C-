# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/05 09:41:11 by kbenlyaz          #+#    #+#              #
#    Updated: 2021/09/11 15:32:53 by kbenlyaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC =  Brain.cpp Cat.cpp Dog.cpp animal.cpp main.cpp 
OBJ =  Brain.o Cat.o Dog.o animal.o main.o 

all : $(NAME)

$(NAME) : $(SRC)
		@clang++  -Wall -Wextra -Werror -Wshadow -Wno-shadow $(SRC) -c
		@clang++ $(OBJ) -o $(NAME)

clean : 
		@rm -rf $(OBJ)
	
fclean : clean
		@rm -rf $(NAME)

re : fclean all
