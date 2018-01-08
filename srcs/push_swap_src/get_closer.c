/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_closer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:46:35 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/08 14:47:10 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

void	get_closer(t_stack stack, int i)
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
