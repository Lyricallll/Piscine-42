# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agraille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 17:07:53 by agraille          #+#    #+#              #
#    Updated: 2024/07/22 07:27:23 by agraille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

cc -Wall -Werror -Wextra -c ft_putchar.c
cc -Wall -Werror -Wextra -c ft_swap.c
cc -Wall -Werror -Wextra -c ft_putstr.c
cc -Wall -Werror -Wextra -c ft_strlen.c
cc -Wall -Werror -Wextra -c ft_strcmp.c

ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

rm ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

