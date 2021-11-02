/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:15:56 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:15:57 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpop(t_list **lst, bool first)
{
	t_list	*elem;
	t_list	*curr;

	if (first)
	{
		elem = *lst;
		*lst = elem->next;
		elem->next = NULL;
	}
	else if (!(*lst)->next)
	{
		elem = (*lst);
		*lst = NULL;
	}
	else
	{
		curr = *lst;
		while (curr->next->next)
			curr = curr->next;
		elem = curr->next;
		curr->next = NULL;
	}
	return (elem);
}
