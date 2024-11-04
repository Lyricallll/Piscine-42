/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:02:32 by agraille          #+#    #+#             */
/*   Updated: 2024/07/12 08:12:20 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

void	ft_reverse(int arg_c, char **argv)
{
	char	*tab;
	int		j;
	int		k;

	j = 1;
	while (j < arg_c)
	{
		k = j +1;
		while (k < arg_c)
		{
			if (ft_strcmp(argv[j], argv[k]) > 0)
			{
				tab = argv[j];
				argv[j] = argv[k];
				argv[k] = tab;
			}
			k++;
		}
		j++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)

{
	int	i;
	int	c;

	i = 0;
	c = 1;
	if (argc > 2)
		ft_reverse(argc, argv);
	while (argv[c] && argc > 1)
	{
		i = 0;
		while (argv[c][i])
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c++;
	}
}
