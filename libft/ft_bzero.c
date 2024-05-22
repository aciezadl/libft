/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:13:27 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/10 12:25:56 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

/*

int	main(int argc, char **argv)
{
	char	tab[6] = "12345";
	char	tab2[6] = "12345";

	(void)argc;
	ft_bzero(tab, atoi(&argv[1][0]));
	printf("%s", tab);
	bzero(tab2, atoi(&argv[1][0]));
	printf("%s", tab2);
}

*/