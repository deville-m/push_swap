/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 19:32:02 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/04 21:58:39 by mdeville         ###   ########.fr       */
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

	i = 0;
	head = *stack.a;
	while (head->pos != 0)
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

	i = starting_position(stack);
	printf("Stating pos : %d\n", i);
	while (*stack.a)
	{
		if ((*stack.a)->pos == i)
		{
			pb(stack);
			i++;
		}
		else
			ra(stack);
		print_stack(stack);
		sleep(1);
	}
	while (*stack.b)
	{
		pa(stack);
	}
}
