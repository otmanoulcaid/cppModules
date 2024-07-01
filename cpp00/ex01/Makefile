CC = c++ -std=c++98 -Wall -Wextra -Werror

SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = agenda

all : $(NAME)

%.o :%.cpp Contact.hpp PhoneBook.hpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all