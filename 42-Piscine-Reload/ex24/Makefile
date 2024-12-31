# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvallrib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/31 13:11:54 by mvallrib          #+#    #+#              #
#    Updated: 2024/12/31 13:12:00 by mvallrib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCE_DIR = ./srcs
INCLUDE_DIR = ./includes

SRCS = $(SOURCE_DIR)/ft_putchar.c \
	$(SOURCE_DIR)/ft_putstr.c \
	$(SOURCE_DIR)/ft_strcmp.c \
	$(SOURCE_DIR)/ft_strlen.c \
	$(SOURCE_DIR)/ft_swap.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(INCLUDE_DIR) -o $@ $<

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
