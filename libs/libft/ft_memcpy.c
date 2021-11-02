/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:16:09 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:10 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	const char		*b;

	a = dest;
	b = (const char *)src;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*a++ = *b++;
	return (dest);
}
