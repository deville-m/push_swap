/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trivial_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 09:58:27 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/05 12:19:19 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

int		trivial_case(t_stack stack)
{
	t_dlist *curr;
	t_dlist *start;

	if (!stack.a || !*stack.a)
		return ((stack.b && *stack.b) ? 0 : 1);
	curr = *stack.a;
	while (curr->pos)
		curr = curr->next;
	start = curr;
	while (curr->pos + 1 == curr->next->pos)
		curr = curr->next;
	if (curr->next == start)
	{
		while ((*stack.a)->pos)
			get_closest(stack, 0);
		return (1);
	}
	return (0);
}
