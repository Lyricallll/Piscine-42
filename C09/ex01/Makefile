# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agraille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/22 08:48:11 by agraille          #+#    #+#              #
#    Updated: 2024/07/23 08:58:57 by agraille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc
CFLAGS= -Wall -Wextra -Werror
SRC= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCDIR= includes
OBJ= $(SRC:.c=.o)
NAME= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o : %.c $(INCDIR)/ft.h
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@
clean : 
	rm -f $(OBJ) 
fclean : 
	rm -f $(OBJ) $(NAME)

re : fclean all

.PHONY: clean fclean re all
