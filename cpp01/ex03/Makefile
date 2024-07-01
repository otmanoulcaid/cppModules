CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = ${SRC:.cpp=.o}

NAME = war

all : $(NAME)

%.o : %.c
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all