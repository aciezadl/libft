/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:16:13 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/22 11:41:36 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_error(const char *big, const char *little, size_t len)
{
	if (len == 0 && little[0] == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	if (little[0] == 0)
		return ((char *)big);
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (len == 0 || little[0] == 0)
		return (ft_error(big, little, len));
	k = ft_strlen(little);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			if (j == k - 1)
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	largestring[] = "aaabcabcd";
	const char	smallstring[] = "abcd";
	char		*ptr;
	char		*ptr2;
	size_t		len;

	len = -1;
	ptr = ft_strnstr(largestring, smallstring, len);
	ptr2 = strnstr(largestring, smallstring, len);
	printf("%s\n", ptr);
	printf("%s\n", ptr2);
}
*/