/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converthu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:32:36 by aciezadl          #+#    #+#             */
/*   Updated: 2023/12/01 14:21:50 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_converthu(unsigned int c, int fd, int *count)
{
	char	*base;

	base = "0123456789ABCDEF";
	fd = 1;
	if (c >= 16)
		ft_converthu(c / 16, fd, count);
	ft_putchar_fd((base[c % 16]), fd, count);
	return (0);
}
