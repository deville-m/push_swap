/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:26:47 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/20 17:25:06 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "commons.h"
#include "push_swap.h"

static void	check(t_stack stack)
{
	t_dlist	*curr;

	curr = *stack.a;
	while (curr->pos != 1)
		curr = curr->next;
	while (1)
	{
		if (curr->prev->placed && curr->pos - 1 == curr->prev->pos)
			curr->placed = 1;
		curr = curr->next;
		if (curr->pos == 1)
			break ;
	}
	while (1)
	{
		if (curr->next->placed && curr->pos + 1 == curr->next->pos)
			curr->placed = 1;
		curr = curr->prev;
		if (curr->pos == 1)
			break ;
	}
}

void		quick_sort(t_stack stack)
{
	if (trivial_case(stack, 1))
		return ;
	partition_a(stack);
	while (!stack.b)
		partition_b(stack);
	while (!trivial_case(stack, 1))
	{
		if (!(*stack.a)->placed && (*stack.a)->pos - 1 == (*stack.a)->next->pos)
			sa(stack);
		else if (!(*stack.a)->placed)
		{
			while (*stack.a && !(*stack.a)->placed)
				pb(stack);
			sort_b(stack);
		}
		else
			ra(stack);
		check(stack);
	}
}
