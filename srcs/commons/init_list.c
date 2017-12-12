/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:43:55 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 23:02:21 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

t_dlist		*init_list(int ac, char **av)
{
	t_dlist		*head;
	t_dlist		*elem;
	long int	tmp;

	head = NULL;
	ac -= 1;
	while (ac > 0)
	{
		if (!str_isnumber(av[ac])
			|| (tmp = ft_atoi(av[ac])) > 2147483647l
			|| tmp < -2147483648l
			|| !(elem = new_elem(tmp))
			|| (head && find_elem(&head, elem->data)))
		{
			del_list(&head);
			return (NULL);
		}
		add_elem(&head, elem);
		ac -= 1;
	}
	return (head);
}
