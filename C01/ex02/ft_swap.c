/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:04:40 by agraille          #+#    #+#             */
/*   Updated: 2024/09/23 09:08:24 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a = 42;
	int	b = -42;

	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a,&b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}