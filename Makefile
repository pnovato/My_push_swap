NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -g
RM = rm -rf
SRCS = $(wildcard additional/*.c main.c)
OBJS = $(SRCS:.c=.o)


.c.o:
	${CC} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	@${MAKE} -C ./libft
	@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

all: $(NAME)

clean:
	@${MAKE} -C ./libft fclean
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

