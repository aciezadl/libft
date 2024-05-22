/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:25:14 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/30 16:26:56 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *count)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		(*count) = (*count) + 11;
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
		(*count)++;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, count);
	ft_putchar_fd((n % 10) + 48, fd, count);
}
