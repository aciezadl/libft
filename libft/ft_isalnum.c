/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:13:33 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/10 12:16:32 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= '0' && c <= '9')) || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*

#include <ctype.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_isalnum(*argv[1]));
	printf("\n%d", isalnum(*argv[1]));
}

*/