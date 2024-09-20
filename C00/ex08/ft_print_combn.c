/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:46:29 by agraille          #+#    #+#             */
/*   Updated: 2024/09/20 11:20:35 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char tab[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &tab[i], 1);
		i++;
	}
	if (tab[0] != '9' - (n - 1))
		write(1, ", ", 2);
}

char	*ft_init_tab(char tab[], int n)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		tab[i] = i + '0';
		i++;
		n -= 1;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_check(char tab[], int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (tab[i] < '9' - (n - 1 - i))
		{
			tab[i]++;
			while (i < n)
			{
				i++;
				tab[i] = tab[i - 1] + 1;
			}
			return (tab);
		}
		i--;
	}
	return (tab);
}

void	ft_print_combn(int n)
{
	char	tab[9];

	ft_init_tab(tab, n);
	while (tab[0] <= '9' - n)
	{
		ft_putchar(tab, n);
		if (tab[n - 1] < '9')
			tab[n - 1]++;
		else
		{
			ft_check(tab, n);
		}
	}
	ft_putchar(tab, n);
}

int	main(void)
{
	ft_print_combn(9);
	return (0);
}
