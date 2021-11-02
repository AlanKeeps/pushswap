/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:14:00 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:14:01 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_rotate(t_list **lst, char *s)
{
	if (*lst)
		ft_lstadd_back(lst, ft_lstpop(lst, true));
	if (s && OUT)
		ft_putendl_fd(s, 1);
}

void	ft_stack_drotate(t_list **lst1, t_list **lst2)
{
	ft_stack_rotate(lst1, NULL);
	ft_stack_rotate(lst2, NULL);
	if (OUT)
		ft_putendl_fd("rr", 1);
}

void	ft_stack_rev_rotate(t_list **lst, char *s)
{
	if (*lst)
		ft_lstadd_front(lst, ft_lstpop(lst, false));
	if (s && OUT)
		ft_putendl_fd(s, 1);
}

void	ft_stack_drev_rotate(t_list **lst1, t_list **lst2)
{
	ft_stack_rev_rotate(lst1, NULL);
	ft_stack_rev_rotate(lst2, NULL);
	if (OUT)
		ft_putendl_fd("rrr", 1);
}
