/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converthp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:34:49 by aciezadl          #+#    #+#             */
/*   Updated: 2023/12/01 14:21:47 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_converthp(unsigned long c, int fd, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	fd = 1;
	if (c >= 16)
		ft_converthp(c / 16, fd, count);
	ft_putchar_fd((base[c % 16]), fd, count);
	return (0);
}
