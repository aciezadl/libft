/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciezadl <aciezadl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:39:12 by aciezadl          #+#    #+#             */
/*   Updated: 2023/11/24 11:20:31 by aciezadl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*nexte;

	if (!lst || !del)
		return ;
	temp = *lst;
	nexte = *lst;
	while (nexte)
	{
		temp = nexte;
		nexte = nexte->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
