/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:47:29 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/09 15:03:17 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

static int	trivial_b(t_stack stack)
{
	t_dlist *curr;
	t_dlist *next;

	curr = *stack.b;
	while (curr->pos != 1)
		curr = curr->next;
	while (curr->pos + 1 == curr->prev->pos)
		curr = curr->prev;
	if (curr->prev->pos == 1)
	{
		curr = *stack.b;
		next = *stack.b;
		while (curr->pos != 1 && next->pos != 1)
		{
			curr = curr->prev;
			next = next->next;
		}
		while (curr->pos == 1 && (*stack.b)->pos != 1)
			rra(stack);
		while (next->pos == 1 && (*stack.b)->pos != 1)
			ra(stack);
		return (1);
	}
	return (0);
}

static void	insertion_b(t_stack stack, int len)
{
	
}

void		sort_b(t_stack stack)
{
	int len;

	len = lstlen(stack.b);
	if (trivial_b(stack))
		return ;
	else if (len <= 15)
		insertion_b(stack, len);
	else
		partition_b(stack);
	sort_b(stack);
}
