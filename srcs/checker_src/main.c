/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:56:51 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/08 18:48:47 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_stack stack;
	t_dlist *a;
	t_dlist *b;

	if (!(a = init_list(ac, av)) && ac > 1)
	{
		ft_putstr_fd(2, "Error\n");
		return (-1);
	}
	b = NULL;
	stack.a = &a;
	stack.b = &b;
	if (!apply_instructions(stack))
	{
		del_stack(stack);
		ft_putstr_fd(2, "Error\n");
		return (-1);
	}
	if (check_sort(stack.a) && !*stack.b)
		ft_putstr_fd(1, "OK\n");
	else
		ft_putstr_fd(1, "KO\n");
	del_stack(stack);
	return (0);
}
