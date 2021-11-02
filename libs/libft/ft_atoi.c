/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:15:17 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:15:18 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	s;

	a = 0;
	s = 1;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n' || \
		*str == '\v' || *str == '\f' || *str == '\r')
			str++;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				s = -s;
			str++;
		}
		while (*str > 47 && *str < 58)
		{
			a = (a * 10) + (*str - '0');
			str++;
		}
		return (a * s);
	}
	return (0);
}
