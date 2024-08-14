# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 19:14:33 by ooulcaid          #+#    #+#              #
#    Updated: 2024/08/11 11:49:55 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = AForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp RobotomyRequestForm.cpp main.cpp

HEADERS =  AForm.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp Bureaucrat.hpp RobotomyRequestForm.hpp

OBJ = ${SRC:.cpp=.o}

NAME = bureaucrat

all : $(NAME)

%.o : %.cpp $(HEADERS)
	$(CPP) -c $< -o $@

$(NAME) : $(OBJ)
		$(CPP) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean