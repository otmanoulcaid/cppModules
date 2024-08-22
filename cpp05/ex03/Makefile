# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 19:14:33 by ooulcaid          #+#    #+#              #
#    Updated: 2024/09/22 03:27:15 by ooulcaid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp \
	AForm.cpp \
	Intern.cpp \
	Bureaucrat.cpp \
	ShrubberyCreationForm.cpp \
	PresidentialPardonForm.cpp \
	AForm.cpp RobotomyRequestForm.cpp

HEADERS = AForm.hpp \
		Intern.hpp \
		Bureaucrat.cpp \
		ShrubberyCreationForm.hpp \
		PresidentialPardonForm.hpp \
		Bureaucrat.hpp RobotomyRequestForm.hpp

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