# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 11:46:10 by ooulcaid          #+#    #+#              #
#    Updated: 2024/08/15 11:46:43 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Base.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = base

all : $(NAME)

%.o : %.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CPP) -c $< -o $@

$(NAME) : $(OBJ)
		$(CPP) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean