/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:43:55 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/12 15:01:30 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

t_dlist		*init_list(int ac, char **av)
{
	t_dlist *head;
	t_dlist *elem;

	head = NULL;
	ac -= 1;
	while (ac > 0)
	{
		if (!str_isnumber(av[ac])
			|| !(elem = new_elem(ft_atoi(av[ac])))
			|| find_elem(head, elem->data))
		{
			del_list(head);
			return (NULL);
		}
		add_back(&head, elem);
		ac -= 1;
	}
	return (head);
}
