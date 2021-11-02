/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:16:45 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:46 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	size_t	a;
	size_t	b;

	b = 0;
	while (dst[b] && b < size)
		b++;
	a = b;
	while (src[b - a] && b + 1 < size)
	{
		dst[b] = src[b - a];
		b++;
	}
	if (a < size)
		dst[b] = '\0';
	return (ft_strlen(src) + a);
}
