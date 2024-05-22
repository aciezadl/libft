/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:29:03 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/30 16:29:33 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *count)
{
	if (!s)
		return ;
	fd = 1;
	write(fd, s, ft_strlen(s));
	(*count) += ft_strlen(s);
}
