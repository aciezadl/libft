/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:14:09 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/10 12:16:20 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*

#include <ctype.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_isprint(*argv[1]));
	printf("\n%d", isprint(*argv[1]));
}

*/