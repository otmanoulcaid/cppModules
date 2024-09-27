# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 10:42:22 by ooulcaid          #+#    #+#              #
#    Updated: 2024/07/30 10:42:23 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = agenda

all : $(NAME)

%.o :%.cpp Contact.hpp PhoneBook.hpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean