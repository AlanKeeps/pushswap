/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:13:41 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:13:42 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_b(t_stack *stk, int len)
{
	int	x1;
	int	x2;
	int	x3;

	while (len > 3)
	{
		ft_stack_push(&stk->a, &stk->b, "pb");
		len--;
	}
	x1 = stk->a->x;
	x2 = stk->a->next->x;
	if (len == 3)
		x3 = stk->a->next->next->x;
	if (len == 2 && (x1 > x2))
		ft_stack_swap(&stk->a, "sa");
	if (len == 3 && (x1 > x2) + (x2 > x3) + (x3 > x1) == 2)
		ft_stack_swap(&stk->a, "sa");
	stk->lenb = stk->lena - len;
	stk->lena = len;
}

void	shift_to_begin(t_stack *stk)
{
	int		ra;
	t_list	*curr;

	ra = 1;
	curr = stk->a;
	while (curr->next)
	{
		if (curr->x > curr->next->x)
			break ;
		curr = curr->next;
		ra++;
	}
	if (ra <= stk->lena / 2)
		while (ra--)
			ft_stack_rotate(&stk->a, "ra");
	else
		while (ra++ < stk->lena)
			ft_stack_rev_rotate(&stk->a, "rra");
}
