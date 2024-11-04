/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:40:41 by agraille          #+#    #+#             */
/*   Updated: 2024/07/16 17:58:12 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = NULL;
	if (min >= max)
		return (ptr);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
/*
int main ()
{
	int max = 10;
	int min = -10;
	int *ptr;
	int i = 0;
	ptr = ft_range(min,max);
	while (i - (max - min))
	{
		printf("%d",ptr[i]);
		i++;
	
	}
	free(ptr);
	return(0);
}
*/
