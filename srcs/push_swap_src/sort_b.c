/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:47:29 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/12 16:33:33 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

static int	get_max(t_dlist **head)
{
	t_dlist	*curr;
	int		max;

	if (!head || !*head)
		return (0);
	curr = *head;
	max = curr->pos;
	while (curr->next != *head)
	{
		curr = curr->next;
		if (curr->pos > max)
			max = curr->pos;
	}
	return (max);
}

static void	put_front(t_stack stack, int val)
{
	t_dlist *next;
	t_dlist *prev;

	if (!*stack.b)
		return ;
	prev = *stack.b;
	next = *stack.b;
	while (prev->pos != val && next->pos != val)
	{
		prev = prev->prev;
		next = next->next;
	}
	while ((*stack.b)->pos != val)
	{
		if (prev->pos == val)
			rrb(stack);
		else
			rb(stack);
	}
}

static int	trivial_b(t_stack stack, int max)
{
	t_dlist *curr;

	curr = *stack.b;
	while (curr->pos != max)
		curr = curr->next;
	while (curr->pos - 1 == curr->prev->pos)
		curr = curr->next;
	if (curr->next->pos == max)
	{
		put_front(stack, max);
		while (*stack.b)
			pa(stack);
		return (1);
	}
	return (0);
}

static void	insertion_b(t_stack stack, int max)
{
	while (*stack.b && !trivial_b(stack, max))
	{
		put_front(stack, max);
		max -= 1;
		pa(stack);
	}
}

void		sort_b(t_stack stack)
{
	int len;
	int max;

	if (!*stack.b)
		return ;
	len = lstlen(stack.b);
	max = get_max(stack.b);
	if (trivial_b(stack, max))
		return ;
	else if (len <= 15)
		insertion_b(stack, max);
	else
		partition_b(stack);
	sort_b(stack);
}
