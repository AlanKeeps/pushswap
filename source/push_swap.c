/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:14:13 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:14:15 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;

	stack.a = NULL;
	stack.b = NULL;
	parcing_args(argc, argv, &stack);
	if (!ft_lstsort(stack.a, 1))
		return (0);
	move_to_b(&stack, stack.lena);
	while (stack.b)
		move_elem_from_b(&stack);
	shift_to_begin(&stack);
	return (0);
}
