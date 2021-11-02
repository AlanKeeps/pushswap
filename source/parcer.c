/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:14:07 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:14:08 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parcing_args(int argc, char **argv, t_stack *stk)
{
	long long	x;
	int			i;

	i = argc;
	stk->lena = argc - 1;
	stk->maxa = INT_MIN;
	while (--i)
	{
		if (ft_atoi_long(argv[i], &x) || ft_lstfind(stk->a, x))
			ft_raise_error("Not integer in args or double\n");
		ft_lstadd_front(&stk->a, ft_lstnew(x));
		if (stk->a->x > stk->maxa)
			stk->maxa = stk->a->x;
	}
}
