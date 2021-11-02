/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:16:04 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:05 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	d;

	a = (unsigned char *)s;
	d = (unsigned char)c;
	while (n--)
	{
		if (*a == d)
			return (a);
		a++;
	}
	return (NULL);
}
