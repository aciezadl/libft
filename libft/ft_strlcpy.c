/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:14:57 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/14 11:00:54 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size <= 0)
		return (j);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (j);
}

/*
int	main(void)
{
	size_t		p;
	char		dest[] = "abc";
	const char	source[] = "123";
	char		destt[] = "abc";
	const char	sourcee[] = "123";

	p = 2;
	printf("%zu %s\n", ft_strlcpy(dest, source, p), dest);
	printf("%zu %s", strlcpy(destt, sourcee, p), destt);
}
*/