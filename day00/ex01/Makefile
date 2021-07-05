# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbenlyaz <kbenlyaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/05 09:41:11 by kbenlyaz          #+#    #+#              #
#    Updated: 2021/07/05 15:23:10 by kbenlyaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_Awesome

SRC = phone_book.cpp
OBJ = phone_book.o

all : $(NAME)

$(NAME) : $(SRC)
		@clang++ -Wall -Wextra -Werror $(SRC) -c
		@clang++ $(OBJ) -o $(NAME)

clean : 
		@rm -rf $(OBJ)
	
fclean : clean
		@rm -rf $(NAME)

re : fclean all
