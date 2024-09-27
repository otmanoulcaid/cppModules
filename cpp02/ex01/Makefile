# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 16:06:18 by ooulcaid          #+#    #+#              #
#    Updated: 2024/08/05 16:06:19 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Fixed.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Fixed

all : $(NAME)

%.o : %.cpp Fixed.hpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean
