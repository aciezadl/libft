/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:07:22 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/30 16:51:23 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <bsd/string.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putchar_fd(char c, int fd, int *count);
void	ft_putnbr_fd(int n, int fd, int *count);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd, int *count);
char	*ft_converthl(unsigned int c, int fd, int *count);
char	*ft_converthu(unsigned int c, int fd, int *count);
char	*ft_converthp(unsigned long c, int fd, int *count);
void	ft_putnbr_fd_un(unsigned int n, int fd, int *count);

#endif
