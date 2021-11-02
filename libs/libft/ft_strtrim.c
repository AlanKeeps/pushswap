/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:17:04 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:17:05 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	char	*b;
	size_t	i;

	if (!s1)
		return (NULL);
	a = (char *)s1;
	i = 0;
	while (check(*s1, set))
		s1++;
	while (*a)
		a++;
	a--;
	while (check(*a, set))
		a--;
	if (a < s1)
		return (ft_calloc(1, sizeof(char)));
	b = (char *)malloc(sizeof(char) * ((a - s1) + 2));
	if (!b)
		return (0);
	while (s1 <= a)
		b[i++] = *s1++;
	b[i] = '\0';
	return (b);
}
