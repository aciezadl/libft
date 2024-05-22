/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:56:48 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/24 11:21:29 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	j;

	i = 0;
	j = ft_lstsize(lst);
	while (j - 1 > i)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
