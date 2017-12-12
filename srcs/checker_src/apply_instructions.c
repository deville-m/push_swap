/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:45:55 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 19:57:43 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	apply_instruction(t_stack stack, const char *instruction)
{
	if (ft_strcmp(instruction, "sa") == 0)
		swap(stack.a);
	else if (ft_strcmp(instruction, "sb") == 0)
		swap(stack.b);
	else if (ft_strcmp(instruction, "ss") == 0)
		swap_stack(stack);
	else if (ft_strcmp(instruction, "pa") == 0)
		push(stack.b, stack.a);
	else if (ft_strcmp(instruction, "pb") == 0)
		push(stack.a, stack.b);
	else if (ft_strcmp(instruction, "ra") == 0)
		rotate(stack.a);
	else if (ft_strcmp(instruction, "rb") == 0)
		rotate(stack.b);
	else if (ft_strcmp(instruction, "rr") == 0)
		rotate_stack(stack);
	else if (ft_strcmp(instruction, "rra") == 0)
		r_rotate(stack.a);
	else if (ft_strcmp(instruction, "rrb") == 0)
		r_rotate(stack.b);
	else if (ft_strcmp(instruction, "rrr") == 0)
		r_rotate_stack(stack);
	else
		return (0);
	return (1);
}

int			apply_instructions(t_stack stack)
{
	char	*instruction;
	int		ret;

	while ((ret = get_next_line(0, &instruction)))
	{
		if (apply_instruction(stack, instruction))
			return (0);
		free(instruction);
	}
	if (ret < 0)
		return (0);
	return (1);
}
