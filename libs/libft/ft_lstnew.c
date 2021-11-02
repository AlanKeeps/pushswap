/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <dadina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:15:53 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:15:55 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int x)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(*elem));
	if (elem)
	{
		elem->x = x;
		elem->next = NULL;
	}
	return (elem);
}
