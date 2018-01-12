/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:26:47 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/12 20:57:00 by mdeville         ###   ########.fr       */
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
/*
static void	sort_a(t_stack stack)
{
	int		stop;

	partition_a(stack);
	stop = (*stack.b)->pos;
	print_stack(stack);
	while (!trivial_case(stack, get_min(stack.a)->pos))
	{
		partition_a(stack);
		print_stack(stack);
	}
	while ((*stack.a)->pos != stop)
		pa(stack);
	check(stack);
}
*/
void		quick_sort(t_stack stack)
{
	if (trivial_case(stack, 1))
		return ;
//	sort_a(stack);
	partition_a(stack);
	while (*stack.b)
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
//		print_stack(stack);
	}
}
