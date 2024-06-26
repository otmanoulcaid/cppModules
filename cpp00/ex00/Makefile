CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

NAME = megaphone

all : $(NAME)

%.o :%.cpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all