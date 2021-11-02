/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:16:35 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:38 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*b;

	a = c;
	b = (char *)s;
	while (*b)
	{
		if (*b == a)
			return (b);
		b++;
	}
	if (*b == a)
		return (b);
	return (NULL);
}
