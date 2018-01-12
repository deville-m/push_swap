/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partition_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 19:43:08 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/12 20:58:08 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

static void	get_at_end_a(t_stack stack, int i)
{
	t_dlist *next;
	t_dlist *prev;

	next = (*stack.a)->prev;
	prev = (*stack.a)->prev;
	while (next->pos != i && prev->pos != i)
	{
		next = next->next;
		prev = prev->prev;
	}
	while ((*stack.a)->prev->pos != i)
	{
		if (next->pos == i)
			ra(stack);
		else
			rra(stack);
	}
}

void		partition_a(t_stack stack)
{
	t_dlist	*curr;
	t_dlist	*min;
	int		len;
	int		tmp;

	if (!stack.a || !*stack.a)
		return ;
	len = lstlen(stack.a);
	min = get_min(stack.a);
	tmp = min->pos + len / 2;
	get_at_end_a(stack, tmp);
	curr = (*stack.a)->prev;
	while (*stack.a != curr)
	{
		if ((*stack.a)->pos - 1 == (*stack.a)->next->pos)
			sa(stack);
		else if ((*stack.a)->pos > curr->pos)
			ra(stack);
		else
			pb(stack);
	}
	(*stack.a)->placed = 1;
}
