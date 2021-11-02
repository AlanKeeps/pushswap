/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:16:30 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:32 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cal(char *s, char a)
{
	int		i;
	int		count_cal;
	bool	found_word;

	i = 0;
	count_cal = 0;
	while (s[i])
	{
		found_word = false;
		while (s[i] == a)
			i++;
		while (s[i] && s[i] != a)
		{
			found_word = true;
			i++;
		}
		if (found_word)
			count_cal++;
	}
	return (count_cal);
}

static char	*ft_strdub(const char *s1, int l)
{
	char	*arr;
	int		j;

	j = 0;
	arr = (char *)malloc(sizeof(ft_strlen(s1)) * (l + 1));
	if (!arr)
		return (NULL);
	arr = ft_memcpy(arr, s1, l);
	arr[l] = '\0';
	return (arr);
}

static void	*free_func(char **array, int h)
{
	while (h--)
	{
		free(array[h]);
		array[h] = NULL;
	}
	free(array);
	array = NULL;
	return (NULL);
}

static int	next_not_empty(char const *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		h;
	char	**array;

	i = 0;
	h = 0;
	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(*array) * (cal((char *)s, c) + 1));
	if (!array)
		return (NULL);
	while (s[i])
	{
		i = next_not_empty(s, c, i);
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			array[h++] = ft_strdub(s + j, i - j);
		if (i > j && !array[h - 1])
			return (free_func(array, h - 1));
	}
	array[h] = NULL;
	return (array);
}
