# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 16:28:20 by ooulcaid          #+#    #+#              #
#    Updated: 2024/08/17 17:57:04 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp ClapTrap.cpp FragTrap.cpp

OBJ = ${SRC:.cpp=.o}

NAME = FragTrap

all : $(NAME)

%.o :%.cpp ClapTrap.hpp FragTrap.hpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean
