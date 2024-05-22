/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_un.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:36:56 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/30 16:37:08 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd_un(unsigned int n, int fd, int *count)
{
	if (n >= 10)
		ft_putnbr_fd_un(n / 10, fd, count);
	ft_putchar_fd((n % 10) + 48, fd, count);
}
