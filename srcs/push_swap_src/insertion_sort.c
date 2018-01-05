/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 19:32:02 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/05 12:18:34 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

static int	starting_position(t_stack stack)
{
	int		i;
	t_dlist	*head;
	t_dlist	*curr;

	i = 1;
	head = *stack.a;
	while (head->pos != 1)
		head = head->next;
	curr = head;
	while (curr->next->pos == i + 1)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}

void		insertion_sort(t_stack stack)
{
	int i;
	int len;

	len = lstlen(stack.a);
	i = starting_position(stack);
	while (*stack.a && !check_sort(stack.a))
	{
		if ((*stack.a)->pos - 1 == (*stack.a)->next->pos)
			sa(stack);
		else if ((*stack.a)->pos == i && i < len)
		{
			pb(stack);
			i++;
		}
		else
			get_closest(stack, i);
	}
	while (*stack.b)
		pa(stack);
}
