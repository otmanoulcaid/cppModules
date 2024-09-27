# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 10:42:37 by ooulcaid          #+#    #+#              #
#    Updated: 2024/07/30 10:42:38 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Account.cpp tests.cpp

OBJ = ${SRC:.cpp=.o}

NAME = account

all : $(NAME)

%.o :%.cpp Account.hpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean