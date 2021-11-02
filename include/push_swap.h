/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:14:29 by dadina            #+#    #+#             */
/*   Updated: 2021/10/31 20:14:31 by dadina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdbool.h>
# include "libft.h"

# define OUT 1

# define PB			"pb"
# define RA_RB		0
# define RRA_RRB	1
# define RA_RRB		2
# define RRA_RB		3

typedef struct s_step
{
	int	ra;
	int	rb;
	int	rra;
	int	rrb;
	int	total;
	int	mode;
}	t_step;

typedef struct s_stack
{
	int		lena;
	int		lenb;
	int		maxa;
	t_list	*a;
	t_list	*b;
	t_step	step;
}	t_stack;

void	parcing_args(int n, char **argv, t_stack *stk);
void	ft_raise_error(char *s);
int		ft_maxint(int a, int b);
void	ft_stack_swap(t_list **lst, char *s);
void	ft_stack_dswap(t_list **lst1, t_list **lst2);
void	ft_stack_push(t_list **lst1, t_list **lst2, char *s);
void	ft_stack_rotate(t_list **lst, char *s);
void	ft_stack_drotate(t_list **lst1, t_list **lst2);
void	ft_stack_rev_rotate(t_list **lst, char *s);
void	ft_stack_drev_rotate(t_list **lst1, t_list **lst2);
void	shift_to_begin(t_stack *stk);
void	move_to_b(t_stack *stk, int len);
void	move_elem_from_b(t_stack *stk);
int		get_place_in_a(t_stack *stk, int bx);
void	search_shortest_way(t_stack *stk, t_step *step);
void	update_short_way(t_stack *stk, t_step *step, int mode, int total);
void	prepare_stacks(t_stack *stk, t_step step);

#endif
