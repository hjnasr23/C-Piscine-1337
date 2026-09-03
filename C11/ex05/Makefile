SRCS = do-op.c ft_atoi.c ft_putnbr.c operations.c
NAME = do-op
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	cc -Wall -Wextra -Werror $(OBJS) -o $(NAME)

.c.o :
	cc -Wall -Wextra -Werror -c $< -o $@

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re