/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:15:02 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/10 12:15:45 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

#include <string.h>

int	main(void)
{
	const char	str[6] = "4";
	size_t		j;

	j = 0;
	j = ft_strlen(str);
	printf("%zu", j);
	printf("\n%zu", strlen(str));
	return (0);
}

*/