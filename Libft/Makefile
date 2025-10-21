CC = c
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_strcpy.c

OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)
	$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -rf $(NAME)

re: fclean all