# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/05 09:41:11 by kbenlyaz          #+#    #+#              #
#    Updated: 2021/09/08 11:48:52 by kbenlyaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = Bureaucrat.cpp main.cpp 
OBJ = Bureaucrat.o main.o 

all : $(NAME)

$(NAME) : $(SRC)
		@clang++ -Wall -Wextra -Werror -Wshadow -Wno-shadow $(SRC) -c
		@clang++ $(OBJ) -o $(NAME)

clean : 
		@rm -rf $(OBJ)
	
fclean : clean
		@rm -rf $(NAME)

re : fclean all
