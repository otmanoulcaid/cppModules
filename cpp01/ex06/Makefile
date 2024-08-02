# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 11:09:12 by ooulcaid          #+#    #+#              #
#    Updated: 2024/08/01 12:47:54 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp Harl.cpp

OBJ = ${SRC:.cpp=.o}

NAME = harlFilter

all : $(NAME)

%.o :%.cpp Harl.hpp
	$(CPP) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean
