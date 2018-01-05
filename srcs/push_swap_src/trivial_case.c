/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trivial_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 09:58:27 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/05 16:55:34 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

int		trivial_case(t_stack stack, int i)
{
	t_dlist *curr;
	t_dlist *start;

	if (!stack.a || !*stack.a)
		return ((stack.b && *stack.b) ? 0 : 1);
	curr = *stack.a;
	while (curr->pos != i)
		curr = curr->next;
	start = curr;
	while (curr->pos + 1 == curr->next->pos)
		curr = curr->next;
	if (curr->next == start)
	{
		while ((*stack.a)->pos != i)
			get_closest(stack, i);
		return (1);
	}
	return (0);
}
