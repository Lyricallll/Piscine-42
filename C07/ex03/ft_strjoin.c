/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 08:52:29 by agraille          #+#    #+#             */
/*   Updated: 2024/07/16 19:02:05 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_switch(char **strs, char *sep, char *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	j = 0;
	while (c < size)
	{
		i = 0;
		while (strs[c][i] != '\0')
		{
			tab[j] = strs[c][i];
			j++;
			i++;
		}
		i = 0;
		while (sep[i] != '\0' && c < size - 1)
		{
			tab[j++] = sep[i++];
		}
		c++;
	}
	tab[j] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		size_total;
	int		i;

	tab = NULL;
	i = 0;
	size_total = 0;
	if (size == 0 || size < 0)
	{
		tab = malloc(sizeof(char) * 1);
		tab[i] = '\0';
		return (tab);
	}
	while (i < size)
	{
		size_total += ft_strlen(strs[i]);
		i++;
	}
	size_total += (i - 1) * ft_strlen(sep);
	tab = malloc(sizeof(char) * (size_total + 1));
	if (tab == NULL)
		return (0);
	tab = ft_switch(strs, sep, tab, size);
	return (tab);
}
/*
#include <unistd.h>
int	main()
{
	char *sep = ", ";
	char  *tab[3] = {"salut", "va"};   
	char *dest;
	int size = 2;
	int i = 0;
	dest = ft_strjoin(size,tab,sep);
	while (dest[i])
	{
	write(1,&dest[i],1);
	i++;
	}
	free(dest);
}
*/
