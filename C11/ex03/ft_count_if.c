/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:34:24 by agraille          #+#    #+#             */
/*   Updated: 2024/07/23 16:42:39 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_test(char *tab)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (tab[i] == 'S')
			count++;
		i++;
	}
	return (count);
}
*/
int	ft_count_if(char **tab, int length, int (*f) (char*))
{
	int	c;
	int	i;
	int	count;

	c = 0;
	i = 0;
	count = 0;
	while (c < length)
	{
		if (f(tab[c]) != 0)
			count ++;
		c++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(int argc,char **argv)
{
	int	size;

	size = 4;
	printf("%d\n",ft_count_if(argv,size,&ft_test));
	return (argc);
}
*/
