/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:55:59 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/22 12:28:34 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = start;
	j = 0;
	if (!s)
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		str = malloc(ft_strlen(s) - start + 1);
	if (start + len <= ft_strlen(s))
		str = malloc(len + 1);
	if (str == NULL || start > ft_strlen(s))
		return (NULL);
	while (j < ft_strlen(s) && j < len && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*
int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;

	s = "tripouille";
	start = 0;
	len = 42000;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}
*/