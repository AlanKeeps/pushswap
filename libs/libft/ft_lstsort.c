/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:15:59 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:16:00 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsort(t_list *lst, bool asc)
{
	if (asc)
	{
		while (lst)
		{
			if (lst->next && lst->x > lst->next->x)
				return (lst->x - lst->next->x);
			lst = lst->next;
		}
	}
	else
	{
		while (lst)
		{
			if (lst->next && lst->x < lst->next->x)
				return (lst->x - lst->next->x);
			lst = lst->next;
		}
	}
	return (0);
}
