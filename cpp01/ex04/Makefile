# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 11:09:49 by ooulcaid          #+#    #+#              #
#    Updated: 2024/08/01 12:48:08 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp Sed.cpp

OBJ = ${SRC:.cpp=.o}

NAME = sed

all : $(NAME)

%.o :%.cpp Sed.hpp
	$(CPP) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all