/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:13:33 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:13:36 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_raise_error(char *s)
{
	(void)s;
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

int	ft_maxint(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
