/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:17:07 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:17:08 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	b;
	size_t	c;

	a = malloc(sizeof(*s) * (len + 1));
	b = 0;
	c = 0;
	if (!a || !s)
		return (NULL);
	while (s[b])
	{
		if (b >= start && c < len)
		{
			a[c] = s[b];
			c++;
		}
		b++;
	}
	a[c] = '\0';
	return (a);
}
