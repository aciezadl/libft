/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:15:32 by aciezadl          #+#    #+#             */
/*   Updated: 2023/12/01 14:32:49 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_argp(unsigned long c, int *count)
{
	if (c == 0)
	{
		write(1, "(nil)", 5);
		(*count) += 5;
	}
	else
	{
		write(1, "0x", 2);
		(*count) += 2;
		ft_converthp((unsigned long)c, 1, count);
	}
	return (0);
}

char	ft_args(char *c, int *count)
{
	if (c == 0)
	{
		write(1, "(null)", 6);
		(*count) += 6;
	}
	else
		ft_putstr_fd(c, 1, count);
	return (0);
}

int	ft_if(va_list ap, int *i, const char *s, int *count)
{
	(*i)++;
	if (s[*i] == 'd' || s[*i] == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1, count);
	if (s[*i] == 'c')
		ft_putchar_fd((char)va_arg(ap, int), 1, count);
	if (s[*i] == 's')
		ft_args(va_arg(ap, char *), count);
	if (s[*i] == 'x')
		ft_putstr_fd(ft_converthl(va_arg(ap, unsigned int), 1, count), 1,
			count);
	if (s[*i] == 'X')
		ft_putstr_fd(ft_converthu(va_arg(ap, unsigned int), 1, count), 1,
			count);
	if (s[*i] == '%')
		ft_putchar_fd('%', 1, count);
	if (s[*i] == 'u')
		ft_putnbr_fd_un(va_arg(ap, unsigned int), 1, count);
	if (s[*i] == 'p')
		ft_argp(va_arg(ap, unsigned long), count);
	(*i)++;
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	va_start(ap, s);
	while (s[i] != 0)
	{
		if (s[i] != '%')
		{
			ft_putchar_fd(s[i], 1, &count);
			i++;
		}
		if (s[i] == '%')
			ft_if(ap, &i, s, &count);
	}
	va_end(ap);
	return (count);
}

// int main()
// {
// 	char *a = "allo";
// 	ft_printf("test : %s %x\n", a, -123);
// 	return(0);
// }
