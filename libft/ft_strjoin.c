/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:42:37 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/23 11:38:14 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_copi(char const *s1, char const *s2, char *res)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tt;
	char	*res;

	if (!s1 || !s2)
		return (ft_strdup(""));
	tt = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(tt + 1);
	if (!res)
		return (ft_strdup(""));
	res = ft_copi(s1, s2, res);
	return (res);
}

/*
int	main(void)
{
	char	t1[] = "";
	char	t2[] = "";

	printf("%s\n", ft_strjoin(t1, t2));
}
*/