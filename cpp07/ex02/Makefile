CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = array

all : $(NAME)

main.o : main.cpp Array.hpp
	$(CPP) -c $< -o $@

$(NAME) : $(OBJ)
		$(CPP) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean