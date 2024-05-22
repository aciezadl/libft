/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:23:06 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/24 11:37:54 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	if (s[i] == '\0')
		return (res);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			res++;
		i++;
	}
	return (res);
}

void	ft_fri(char **res, int i)
{
	if (res[i] == NULL)
	{
		while (i > 0)
		{
			free(res[i - 1]);
			i--;
		}
		free(res);
	}
}

void	ft_malok(char const *s, char c, char **res, size_t *tab)
{
	while (tab[0] < tab[3])
	{
		while (s[tab[1]] == c)
			tab[1]++;
		while (s[tab[1]] != c && tab[0] < tab[3])
		{
			tab[2]++;
			if (s[tab[1]] != c && (s[tab[1] + 1] == 0 || s[tab[1] + 1] == c))
			{
				res[tab[0]] = malloc(sizeof(char) * tab[2] + 1);
				if (res[tab[0]] == NULL)
				{
					ft_fri(res, tab[0]);
					return ;
				}
				ft_strlcpy(res[tab[0]], &s[tab[1] + 1 - tab[2]], tab[2] + 1);
				res[tab[0]][tab[2]] = '\0';
				tab[2] = 0;
				tab[0]++;
			}
			tab[1]++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	tab[5];

	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 0;
	tab[4] = '\0';
	if (!s)
		return (NULL);
	res = NULL;
	tab[3] = ft_count(s, c);
	res = malloc(sizeof(char *) * (tab[3] + 1));
	if (res == NULL)
		return (0);
	res[tab[3]] = 0;
	ft_malok(s, c, res, tab);
	return (res);
}

/*

tab[0] - i
tab[1] - j index de s
tab[2] - taille du mot
tab[3] - count = nombre de mots

void	print_str_array(char **str)
{
	int	i;

	i = 0;
	while (*str)
	{
		printf("mot %d : ", i);
		printf("%s\n", *str);
		str++;
		i++;
	}
}

int	main(void)
{
	char		c;
	char		**result;
	const char	s[] = "    ";

	c = ' ';
	result = ft_split(s, c);
	print_str_array(result);
	return (0);
}
*/