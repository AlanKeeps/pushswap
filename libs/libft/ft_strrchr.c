/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:17:02 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:17:03 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*b;

	a = c;
	b = (char *)s + ft_strlen(s);
	while (b >= s)
	{
		if (*b == a)
			return (b);
		b--;
	}
	return (NULL);
}
