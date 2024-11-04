/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:17:37 by agraille          #+#    #+#             */
/*   Updated: 2024/07/23 10:16:35 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;
	char	nbr;

	if (nb > 9)
		ft_putnbr(nb / 10);
	nbr = nb % 10 + '0';
	write(1, &nbr, 1);
	write(1, " ", 1);
}
*/
void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main ()
{
	int	tab[] = {1, 2 ,3 ,4, 5, 6, 7 ,8 ,9 ,10};
	int	size = 10;

	ft_foreach(tab,size,&ft_putnbr);
}*/
