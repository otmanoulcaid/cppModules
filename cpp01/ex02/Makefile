CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = brain

all : $(NAME)

main.o :main.cpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all