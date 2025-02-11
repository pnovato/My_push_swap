# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 14:57:03 by pnovato-          #+#    #+#              #
#    Updated: 2024/11/13 13:18:57 by pnovato-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -f

SRCS = ft_atoi.c \
ft_isascii.c \
ft_memcpy.c \
ft_strlcat.c \
ft_tolower.c \
ft_bzero.c \
ft_isdigit.c \
ft_memmove.c \
ft_strlen.c \
ft_toupper.c \
ft_calloc.c \
ft_isprint.c \
ft_memset.c \
ft_strncmp.c \
ft_isalnum.c \
ft_memchr.c \
ft_strchr.c \
ft_strnstr.c \
ft_isalpha.c \
ft_memcmp.c \
ft_strdup.c \
ft_strrchr.c \
ft_strlcpy.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c\
./ft_printf/ft_myputchar.c\
./ft_printf/ft_myputnbr.c\
./ft_printf/ft_myputstr.c\
./ft_printf/ft_myputhex.c\
./ft_printf/ft_myputnbr_u.c\
./ft_printf/ft_printf.c\
./ft_printf/ft_myputhex_upper.c\
./ft_printf/ft_myputnptr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all 

.PHONY: all clean fclean re


