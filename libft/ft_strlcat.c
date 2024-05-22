/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:14:53 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/23 11:35:58 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		resultat;

	resultat = 0;
	i = 0;
	j = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	resultat = i + ft_strlen(src);
	while (j + i + 1 < size && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = 0;
	return (resultat);
}

/*

#include <bsd/string.h>

int	main(void)
{
	char	dest[] = "aaaaaaaaaa";
	char	source[] = "lorem ipsum dolor sit amet";
	int		t;
	char	dest2[] = "aaaaaaaaaa";
	char	source2[] = "lorem ipsum dolor sit amet";

	t = 5;
	printf("%zu : %s\n", ft_strlcat(dest, source, t), dest);
	printf("%zu : %s\n", strlcat(dest2, source2, t), dest2);
}
*/