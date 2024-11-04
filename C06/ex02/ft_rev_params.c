/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:29:11 by agraille          #+#    #+#             */
/*   Updated: 2024/07/12 11:09:37 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;
	int	n;

	c = argc - 1;
	n = argc;
	while (n > 1)
	{
		i = 0;
		while (argv[c][i])
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		n--;
		c--;
	}
	return (0);
}
