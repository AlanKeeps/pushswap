/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:15:08 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:15:13 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char ch)
{
	if ((ch >= 9 && ch <= 13) || ch == ' ')
		return (1);
	return (0);
}

long long	ft_atoi_long(const char *str, long long *x)
{
	long long	new_x;
	int			minus;

	new_x = 0;
	minus = -1;
	while (is_space(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			minus = 1;
	while (*str && ft_isdigit(*str))
	{
		new_x = new_x * 10 - (*str++ - '0');
		if (new_x < INT_MIN + (minus != 1))
			return (-1);
	}
	*x = new_x * minus;
	return (*str);
}
