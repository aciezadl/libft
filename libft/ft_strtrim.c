/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:40:21 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/22 16:40:33 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cmp(const char *st, const char s)
{
	int	i;

	i = 0;
	while (st[i])
	{
		if (st[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_kopi(char const *s1, char *res, int i, int j)
{
	int	k;

	k = 0;
	while (i < j)
	{
		res[k] = s1[i];
		k++;
		i++;
	}
	res[k] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while ((i <= j) && (ft_cmp(set, s1[i]) == 1))
		i++;
	while (ft_cmp(set, s1[j - 1]) == 1)
		j--;
	if (j <= i)
		return (ft_strdup(""));
	res = malloc(j - i + 1);
	if (!res)
		return (NULL);
	ft_kopi(s1, res, i, j);
	return (res);
}

/*
int	main(void)
{
	char	s[] = "  \t \t\t \n   ";
	char	set[] = " \t\n";

	printf("%s\n", ft_strtrim(s, set));
}
*/