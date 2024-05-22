/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:27:09 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/23 11:37:31 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rev(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

int	ft_len(long int nbr)
{
	int	i;

	i = 0;
	if (nbr == -0)
		i++;
	if (nbr < 0)
		i++;
	while (nbr)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char	*ft_ehtoi(int n, long int nbr, char *res, int i)
{
	if (nbr < 0)
	{
		nbr = nbr * -1;
		res[ft_len(nbr)] = '-';
		res[ft_len(nbr) + 1] = '\0';
	}
	while (nbr > 0)
	{
		res[i] = (nbr % 10) + 48;
		nbr /= 10;
		i++;
	}
	if (n < 0)
		res[i + 1] = '\0';
	if (n > 0)
		res[i] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nbr;
	char		*res;

	i = 0;
	nbr = (long int)n;
	if (nbr == 0)
		return (ft_strdup("0"));
	res = malloc(ft_len(nbr) + 1);
	if (res == NULL)
		return (NULL);
	res = ft_ehtoi(n, nbr, res, i);
	res = ft_rev(res);
	return (res);
}

/*
int	main(void)
{
	long int	a;

	a = 1;
	printf("%s\n", ft_itoa(a));
}
*/