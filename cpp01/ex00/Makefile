CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Zombie.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = zombie

all : $(NAME)

%.o :%.cpp Zombie.hpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all