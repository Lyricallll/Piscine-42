/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:08:21 by agraille          #+#    #+#             */
/*   Updated: 2024/09/30 08:42:28 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	adresse;
	int				i;

	i = 0;
	if (size < 1)
		return (0);
	adresse = (unsigned long)addr;

	return (0);
}

int	main(void)
{
	char	*s;

	s = "Bonjour les aminches...c'est fou.tout.ce qu'on peut faire avec.memory...print_memory....lol.lol. ";
	ft_print_memory(s, strlen(s));
	return (0);
}