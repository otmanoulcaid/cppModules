CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = AMateria.cpp Character.cpp ICharacter.cpp Cure.cpp Ice.cpp MateriaSource.cpp IMateriaSource.cpp main.cpp 

OBJ = ${SRC:.cpp=.o}

HEADERS = AMateria.hpp Cure.hpp IMateriaSource.hpp MateriaSource.hpp Character.hpp ICharacter.hpp Ice.hpp

NAME = materia

all : $(NAME)

%.o :%.cpp $(HEADERS)
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all