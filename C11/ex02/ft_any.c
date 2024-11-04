/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:56:40 by agraille          #+#    #+#             */
/*   Updated: 2024/07/23 14:33:47 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_test(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == 'S')
			return (1);
		i++;
	}
	return (0);
}
*/
int	ft_any(char **tab, int (*f) (char*))
{
	int	c;

	c = 0;
	while (tab[c])
	{
		if (f(tab[c]) == 1)
			return (1);
		c++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%d\n",ft_any(argv,&ft_test));
	return (argc);
}
*/
