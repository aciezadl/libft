/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:14:14 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/14 11:57:42 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*str;

	i = 0;
	ch = c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	size_t		p;
	const char	str[] = "/|\x12\xff\x09\x42\042\42|\\";
	char		h;

	p = 2;
	h = 'u';
	printf("%s", memchr(str, h, p));
}
*/