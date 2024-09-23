/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:59:48 by agraille          #+#    #+#             */
/*   Updated: 2024/09/23 09:03:11 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	nbr;
	int	*ptr1 = &nbr;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int	*********ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	printf("%d\n", nbr);
	return (0);
}