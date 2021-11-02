/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:13:54 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:13:56 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_swap(t_list **lst, char *s)
{
	int	temp;

	if (*lst && (*lst)->next)
	{
		temp = (*lst)->next->x;
		(*lst)->next->x = (*lst)->x;
		(*lst)->x = temp;
		if (s && OUT)
			ft_putendl_fd(s, 1);
	}
}

void	ft_stack_dswap(t_list **lst1, t_list **lst2)
{
	ft_stack_swap(lst1, NULL);
	ft_stack_swap(lst2, NULL);
	if (OUT)
		ft_putendl_fd("ss", 1);
}

void	ft_stack_push(t_list **lst1, t_list **lst2, char *s)
{
	if (*lst1)
		ft_lstadd_front(lst2, ft_lstpop(lst1, true));
	if (OUT)
		ft_putendl_fd(s, 1);
}
