/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:16:39 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:41 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *s)
{
	int		len;
	char	*str;

	len = 0;
	while (s[len])
		len++;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (len >= 0)
	{
		str[len] = s[len];
		len--;
	}
	return (str);
}
