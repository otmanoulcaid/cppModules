# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 11:34:11 by ooulcaid          #+#    #+#              #
#    Updated: 2024/09/23 21:23:15 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Serializer.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = serializer

all : $(NAME)

%.o : %.cpp Serializer.hpp Data.hpp
	$(CPP) -c $< -o $@

$(NAME) : $(OBJ)
		$(CPP) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean