NAME = ClapTrap

# COMMANDS
CC = c++
MKDIR = mkdir -p
RM = rm -rf

# SOURCES
SRCS = main.cpp ClapTrap.cpp

# OBJECTS
O_DIR = objs
O_FILES = $(addprefix $(O_DIR)/, $(notdir $(SRCS:.cpp=.o)))

# FLAGS
FLAGS = -Wall -Wextra -Werror -std=c++98

# INCLUDES
INCLUDES = -I.

# RULES
all: $(NAME)

$(O_DIR):
	$(MKDIR) $(O_DIR)

$(O_DIR)/%.o: %.cpp | $(O_DIR)
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(O_FILES)
	$(CC) $(O_FILES) $(FLAGS) -o $@

clean:
	$(RM) $(O_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re