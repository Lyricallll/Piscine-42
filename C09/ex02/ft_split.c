/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:14:13 by agraille          #+#    #+#             */
/*   Updated: 2024/07/22 17:52:58 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	ft_word(char *str, char *charset)
{
	int	i;
	int	word;
	int	count;

	word = 1;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (word == 1 && ft_check(str, charset, i) == 0)
		{
			word = 0;
			count++;
		}
		else if (word == 0 && ft_check(str, charset, i) == 1)
		{
			word = 1;
		}
		i++;
	}
	return (count);
}

char	*ft_copy(int start, int end, char *str, char *charset)
{
	char	*copy;
	int		k;
	int		len;

	k = 0;
	if (str[end + 1] == 0 && (ft_check(str, charset, end) == 0))
		end++;
	len = end - start;
	copy = malloc(sizeof(char) * len + 1);
	while (start < end)
	{
		copy[k] = str[start];
		k++;
		start++;
	}
	copy[k] = '\0';
	return (copy);
}

char	**ft_string(char *str, char *charset, int end, int word)
{
	char	**tab;
	int		start;
	int		k;

	k = 0;
	tab = malloc(sizeof(char *) * (ft_word(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	while (str[end])
	{
		if (word == 1 && (ft_check(str, charset, end) || str[end + 1] == 0))
		{
			word = 0;
			tab[k] = ft_copy(start, end, str, charset);
			k++;
		}
		else if (word == 0 && ft_check(str, charset, end) == 0)
		{
			word = 1;
			start = end;
		}
		end++;
	}
	tab[k] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		word;
	int		end;
	char	**split;
	int		k;

	k = 0;
	end = 0;
	word = 0;
	split = ft_string(str, charset, end, word);
	return (split);
}
/*
#include <unistd.h>
int	main(void)
{
	char	*str = "salutc,./av,aoi/uibiend.,sadadas.,dsadasendii";
	char	*charset = ",./";
	int	i = 0;
	int	k = 0;
	char	**tab;
	
	tab = ft_split(str,charset);
	while (tab[i] != 0)
	{
		k = 0;
		while(tab[i][k] != '\0')
		{
			write(1,&tab[i][k], 1);
			k++;
		}
		free(tab[i]);
		i++;
	}	
	free(tab);

}*/
