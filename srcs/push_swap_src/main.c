/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 14:17:00 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/08 20:24:25 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"
#include "push_swap.h"

int	main(int ac, char **av)
{
	int		len;
	t_stack	stack;
	t_dlist	*a;
	t_dlist	*b;

	if (!(a = init_list(ac, av)))
	{
		if (ac > 1)
			ft_putstr_fd(2, "Error\n");
		return (0);
	}
	b = NULL;
	stack.a = &a;
	stack.b = &b;
	len = lstlen(stack.a);
	set_pos(stack.a);
	if (len <= 15)
		insertion_sort(stack, len);
	else
		quick_sort(stack);
	return (0);
}
