CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Cat.cpp Dog.cpp Animal.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Animals

all : $(NAME)

%.o :%.cpp Dog.hpp Cat.hpp Animal.hpp Brain.hpp WrongCat.hpp WrongAnimal.hpp 
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean
