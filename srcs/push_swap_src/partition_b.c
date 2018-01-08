/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partition_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 19:44:28 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/08 22:37:39 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "commons.h"
#include "push_swap.h"

static void	get_at_end_b(t_stack stack, int i)
{
	t_dlist *next;
	t_dlist *prev;

	next = (*stack.b)->prev;
	prev = (*stack.b)->prev;
	while (next->pos != i && prev->pos != i)
	{
		next = next->next;
		prev = prev->prev;
	}
	while ((*stack.b)->prev->pos != i)
	{
		if (next->pos == i)
			rb(stack);
		else
			rrb(stack);
	}
}

void		partition_b(t_stack stack)
{
	t_dlist	*curr;
	t_dlist	*min;
	int		len;
	int		tmp;

	if (!stack.b || !*stack.b)
		return ;
	len = lstlen(stack.b);
	min = get_min(stack.b);
	tmp = min->pos + len / 2;
	get_at_end_b(stack, tmp);
	curr = (*stack.b)->prev;
	while (*stack.b != curr)
	{
		if ((*stack.b)->pos == (*stack.b)->next->pos - 1)
			sb(stack);
		else if ((*stack.b)->pos < curr->pos)
			rb(stack);
		else
			pa(stack);
	}
	(*stack.b)->placed = 1;
	pa(stack);
}
