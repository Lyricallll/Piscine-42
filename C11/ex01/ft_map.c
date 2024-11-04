/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:42:39 by agraille          #+#    #+#             */
/*   Updated: 2024/07/23 11:20:18 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
int	ft_test(int nbr)
{
	int	i;

	i = 1;
	nbr += i;
	return (nbr);
}
*/
int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	*tab_n;
	int	i;

	if (length <= 0)
		return (NULL);
	i = 0;
	tab_n = malloc(sizeof(int) * length);
	if (tab_n == NULL)
		return (NULL);
	while (i < length)
	{
		tab_n[i] = f(tab[i]);
		i++;
	}
	return (tab_n);
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[5] = {2, 5, 3, 4, 5};
	int	*tab_n;
	int	i;
	int	size = 5;	
	i = 0;
	tab_n= ft_map(tab,size, &ft_test);
	while (i < 5)
	{
		printf("%d\n",tab_n[i]);
		i++;
	}
	free(tab_n);
}
*/
