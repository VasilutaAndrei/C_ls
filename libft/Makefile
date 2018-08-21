NAME = libft.a
SRC = ft_*.c
OWS = ft_*.o

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC)
	@ar rc $(NAME) $(OWS)

clean:
	@rm -f $(OWS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
	@ar rc $(NAME) $(OWS)
