/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:08:21 by agraille          #+#    #+#             */
/*   Updated: 2024/10/03 10:29:04 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned long long n, int size)
{
	char	*hex;
	char	buffer[size];
	int		i;

	hex = "0123456789abcdef";
	i = size - 1;
	while (i >= 0)
	{
		buffer[i] = hex[n % 16];
		n /= 16;
		i--;
	}
	write(1, buffer, size);
}

void	ft_print_hex_and_ascii(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_puthex(addr[i], 2);
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		ft_puthex((unsigned long long)(addr + i), 16);
		write(1, ": ", 2);
		if (size - i >= 16)
			ft_print_hex_and_ascii((unsigned char *)addr + i, 16);
		else
			ft_print_hex_and_ascii((unsigned char *)addr + i, size - i);
		ft_putchar('\n');
		i += 16;
	}
}

int	main(void)
{
	char	*s;

	s = "Bonjour les aminches...c'est fou.tout.ce qu'on peut faire avec.memory...print_memory....lol.lol. ";
	ft_print_memory(s, strlen(s));
	return (0);
}