/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 20:00:30 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/04 20:08:43 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

void	ra(t_stack stack)
{
	write(1, "ra\n", 3);
	rotate(stack.a);
}

void	rb(t_stack stack)
{
	write(1, "rb\n", 3);
	rotate(stack.b);
}

void	rr(t_stack stack)
{
	write(1, "rr\n", 3);
	rotate_stack(stack);
}

void	rra(t_stack stack)
{
	write(1, "rra\n", 4);
	r_rotate(stack.a);
}

void	rrb(t_stack stack)
{
	write(1, "rrb\n", 4);
	r_rotate(stack.b);
}
