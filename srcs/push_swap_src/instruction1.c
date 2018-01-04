/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 20:00:30 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/04 20:57:04 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	sa(t_stack stack)
{
	write(1, "sa\n", 3);
	swap(stack.a);
}

void	sb(t_stack stack)
{
	write(1, "sb\n", 3);
	swap(stack.b);
}

void	ss(t_stack stack)
{
	write(1, "ss\n", 3);
	swap_stack(stack);
}

void	pa(t_stack stack)
{
	write(1, "pa\n", 3);
	push(stack.b, stack.a);
}

void	pb(t_stack stack)
{
	write(1, "pb\n", 3);
	push(stack.a, stack.b);
}
