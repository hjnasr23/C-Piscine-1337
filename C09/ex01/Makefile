NAME = libft.a

all : $(NAME)

$(NAME) : srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o
	ar rc $(NAME) srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o
	ranlib $(NAME)

.c.o :
	cc -Wall -Wextra -Werror -c -I includes $< -o $@

clean :
	rm -f srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re