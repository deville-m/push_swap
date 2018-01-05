/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_closest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 11:26:27 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/05 16:09:01 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

void	get_closest(t_stack stack, int i)
{
	t_dlist *next;
	t_dlist *prev;

	next = *stack.a;
	prev = *stack.a;
	while (next->pos != i && prev->pos != i)
	{
		next = next->next;
		prev = prev->prev;
	}
	if (next->pos == i)
		ra(stack);
	else
		rra(stack);
}
