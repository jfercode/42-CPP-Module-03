# Static library name
NAME		= ex03
# Compiler and flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

# Directories and files
SRC			= main.cpp source/ClapTrap.cpp source/ScavTrap.cpp source/FragTrap.cpp source/DiamondTrap.cpp
OBJ			= $(SRC:.cpp=.o)

all:	$(NAME)
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re