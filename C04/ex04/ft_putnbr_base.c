/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:07:59 by agraille          #+#    #+#             */
/*   Updated: 2024/10/08 21:12:45 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int i, char *buffer)
{
	while (i <= 32)
	{
		write(1, &buffer[i], 1);
		i++;
	}
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		base_len;
	char	buffer[33];

	if (!is_valid_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	base_len = ft_strlen(base);
	i = 32;
	while (nbr > 0)
	{
		buffer[i] = base[nbr % base_len];
		nbr /= base_len;
		i--;
	}
	ft_putstr(i + 1, buffer);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_putnbr_base(42, argv[1]);
}