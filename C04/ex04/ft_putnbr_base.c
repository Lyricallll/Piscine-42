/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:07:59 by agraille          #+#    #+#             */
/*   Updated: 2024/10/04 10:03:56 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = ft_strlen(base);
	printf("%d\n",size);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_putnbr_base(42, argv[1]);
}