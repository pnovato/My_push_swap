NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBFTDIR = libft
RM = rm -rf
SRCS = movements.c 
OBJS = $(SRCS:.c=.o)

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	@make -s -C $(LIBFTDIR)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) ${INCLUDE}

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@make -s -C $(LIBFTDIR) clean

fclean: clean
	$(RM) $(NAME)
	@make -s -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re

