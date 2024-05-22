/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:13:55 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/23 11:36:33 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*size;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	size = malloc(ft_strlen(s) + 1);
	if (!size)
		return (NULL);
	while (s[i])
	{
		size[i] = f(i, s[i]);
		i++;
	}
	size[i] = '\0';
	return (size);
}
