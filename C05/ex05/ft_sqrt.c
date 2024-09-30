/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:10:47 by agraille          #+#    #+#             */
/*   Updated: 2024/09/30 09:31:08 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	subtract;

	count = 0;
	subtract = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		nb -= subtract;
		subtract += 2;
		count++;
	}
	if (nb == 0)
		return (count);
	else
		return (0);
}

