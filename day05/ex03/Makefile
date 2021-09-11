# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/05 09:41:11 by kbenlyaz          #+#    #+#              #
#    Updated: 2021/09/11 09:48:31 by kbenlyaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp Intern.cpp
OBJ = Bureaucrat.o Form.o PresidentialPardonForm.o RobotomyRequestForm.o ShrubberyCreationForm.o main.o Intern.o

all : $(NAME)

$(NAME) : $(SRC)
		@clang++ -Wall -Wextra -Werror -Wshadow -Wno-shadow $(SRC) -c
		@clang++ $(OBJ) -o $(NAME)

clean : 
		@rm -rf $(OBJ)
	
fclean : clean
		@rm -rf $(NAME)

re : fclean all
