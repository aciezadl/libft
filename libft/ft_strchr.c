/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:14:48 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/10 12:15:54 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)(&s[i]));
		i++;
	}
	if (ch == '\0')
		return ((char *)(&s[i]));
	return (NULL);
}

/*

int	main(void)
{
	printf("Ma fonction : %s\n", ft_strchr("", '3'));
	printf("Vraie Fonction : %s", strchr("", '3'));
}

*/