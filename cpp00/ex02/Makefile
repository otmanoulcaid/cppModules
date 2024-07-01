CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Account.cpp tests.cpp

OBJ = ${SRC:.cpp=.o}

NAME = account

all : $(NAME)

%.o :%.cpp Account.hpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all