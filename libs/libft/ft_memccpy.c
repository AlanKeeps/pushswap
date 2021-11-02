/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:16:01 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:02 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	d;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	d = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		*a++ = *b++;
		if (*(a - 1) == d)
			return (a);
	}
	return (NULL);
}
