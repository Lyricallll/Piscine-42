/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:19:27 by agraille          #+#    #+#             */
/*   Updated: 2024/07/18 20:49:49 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_string(char *str)
{
	int		i;
	char	*ptr;

	i = ft_strlen(str);
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	i = 0;
	stock_str = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (stock_str == NULL)
		return (NULL);
	while (i < ac)
	{
		(stock_str + i)->size = ft_strlen(av[i]);
		(stock_str + i)->str = av[i];
		(stock_str + i)->copy = ft_string(av[i]);
		i++;
	}
	(stock_str + i)->str = 0;
	return (stock_str);
}
