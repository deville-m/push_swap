/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 19:32:02 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/05 18:06:54 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

void		insertion_sort(t_stack stack, int len)
{
	int i;

	i = 1;
	while (*stack.a && !check_sort(stack.a) && !trivial_case(stack, i))
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
