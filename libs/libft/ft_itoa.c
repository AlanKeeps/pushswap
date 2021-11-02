/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:15:40 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:15:42 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int nb)
{
	int		s;
	long	n;

	n = nb;
	if (!n)
		return (1);
	s = 0;
	if (nb < 0)
	{
		s++;
		n = -n;
	}
	while (n)
	{
		s++;
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		i;
	long	nb;

	i = size(n);
	nb = n;
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (!a)
		return (NULL);
	a[i--] = '\0';
	if (nb == 0)
		a[i] = '0';
	if (nb < 0)
	{
		a[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		a[i--] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (a);
}
