CPP = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = whatever

all : $(NAME)

main.o : main.cpp whatever.hpp
	$(CPP) -c $< -o $@

$(NAME) : $(OBJ)
		$(CPP) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean