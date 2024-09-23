# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 19:14:33 by ooulcaid          #+#    #+#              #
#    Updated: 2024/09/22 13:54:36 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp\
	AForm.cpp  \
	Bureaucrat.cpp \
	RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp \
	PresidentialPardonForm.cpp \

HEADERS =  AForm.hpp \
	Bureaucrat.hpp \
	RobotomyRequestForm.hpp \
	ShrubberyCreationForm.hpp \
	PresidentialPardonForm.hpp \

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