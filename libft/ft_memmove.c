/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:14:40 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/21 14:39:52 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove2(char *d, char *s, size_t n)
{
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d == s)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		ft_memmove2(d, s, n);
	return (dest);
}

/*
int	main(void)
{
	size_t	t;
	char	dst[] = "12345";
	char	source[] = "+++";
	char	dst2[] = "12345";
	char	source2[] = "+++";

	t = 3;
	ft_memmove(dst, source, t);
	memmove(dst2, source2, t);
	printf("-%s-\n", dst);
	printf("-%s-\n", dst2);
}
*/