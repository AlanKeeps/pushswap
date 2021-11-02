/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:16:06 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:08 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	int				c;
	int				i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	c = 0;
	i = 0;
	while (n--)
	{
		if (a[i] != b[i])
			 return (a[i] - b[i]);
		i++;
	}
	return (0);
}
